// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 20

// ExtendPathTo<FWidgetMatcher> @ 142423800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWidgetPath::ExtendPathTo<FWidgetMatcher>
          (FWidgetPath *this,FWidgetMatcher *param_1,EVisibility param_2,
          EWidgetPathSearchPurpose param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ForElementType<FArrangedWidget> FVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_198 [32];
  FArrangedChildren local_168;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar1 = (this->Widgets).Array.ArrayNum;
  uVar6 = iVar1 - 1;
  uVar7 = 0;
  if ((int)uVar6 < iVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FVar5 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
  }
  local_168.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_168.Array.ArrayNum = 0;
  local_168.Array.ArrayMax = 4;
  local_168.bAllow3DWidgets = false;
  local_168.VisibilityFilter.Value.Value = param_2.Value.Value;
  SearchForWidgetRecursively<FWidgetMatcher>
            (param_1,(FArrangedWidget *)
                     ((longlong)FVar5 + (longlong)((this->Widgets).Array.ArrayNum + -1) * 0x48),
             &local_168,param_2,param_3);
  FArrangedChildren::Reverse(&local_168);
  uVar7 = 0;
  if (0 < local_168.Array.ArrayNum) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < local_168.Array.ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FVar5 = (ForElementType<FArrangedWidget>)&local_168.Array;
      if (local_168.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar5 = local_168.Array.AllocatorInstance.SecondaryData;
      }
      FArrangedChildren::AddWidget
                (&this->Widgets,(FArrangedWidget *)((longlong)FVar5 + (longlong)(int)uVar7 * 0x48));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_168.Array.ArrayNum);
  }
  bVar3 = 0 < local_168.Array.ArrayNum;
  FVar5 = (ForElementType<FArrangedWidget>)&local_168.Array;
  if (local_168.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar5 = local_168.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar5,local_168.Array.ArrayNum);
  if (local_168.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_168.Array.AllocatorInstance.SecondaryData);
  }
  return bVar3;
}

// SearchForWidgetRecursively<FWidgetMatcher> @ 142425fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWidgetPath::SearchForWidgetRecursively<FWidgetMatcher>
          (FWidgetMatcher *param_1,FArrangedWidget *param_2,FArrangedChildren *param_3,
          EVisibility param_4,EWidgetPathSearchPurpose param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  FArrangedWidget *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1b8 [32];
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (((param_5 == FocusHandling) && (param_4.Value.Value == EVisibility::Visible.Value.Value)) &&
     (((param_2->Widget).Object)->EnabledStateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    bVar5 = false;
  }
  else {
    local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    local_180.Array.ArrayNum = 0;
    local_180.Array.ArrayMax = 4;
    local_180.bAllow3DWidgets = true;
    local_180.VisibilityFilter.Value.Value = param_4.Value.Value;
    SWidget::ArrangeChildren
              ((param_2->Widget).Object,&param_2->Geometry,&local_180,param_5 != FocusHandling);
    uVar10 = 0;
    if (0 < local_180.Array.ArrayNum) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_180.Array.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
        if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
        }
        pFVar9 = (FArrangedWidget *)((longlong)FVar8 + lVar11);
        pTVar1 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
        pSVar2 = (pFVar9->Widget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pSVar3 = (param_1->WidgetToFind).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if ((pSVar3 == pSVar2) ||
           (bVar5 = SearchForWidgetRecursively<FWidgetMatcher>
                              (param_1,pFVar9,param_3,param_4,param_5), bVar5)) {
          FArrangedChildren::AddWidget(param_3,pFVar9);
          bVar5 = true;
          goto LAB_14242614c;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x48;
      } while ((int)uVar10 < local_180.Array.ArrayNum);
    }
    bVar5 = false;
LAB_14242614c:
    FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
    if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_180.Array.ArrayNum);
    if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
    }
  }
  return bVar5;
}

// SearchForWidgetRecursively_Reverse<FWidgetMatcher> @ 1424261e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWidgetPath::SearchForWidgetRecursively_Reverse<FWidgetMatcher>
          (FWidgetMatcher *param_1,FArrangedWidget *param_2,FArrangedChildren *param_3,
          EVisibility param_4,EWidgetPathSearchPurpose param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  FArrangedWidget *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1b8 [32];
  FArrangedChildren local_180;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (((param_5 == FocusHandling) && (param_4.Value.Value == EVisibility::Visible.Value.Value)) &&
     (((param_2->Widget).Object)->EnabledStateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    bVar5 = false;
  }
  else {
    local_180.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    local_180.Array.ArrayNum = 0;
    local_180.Array.ArrayMax = 4;
    local_180.bAllow3DWidgets = true;
    local_180.VisibilityFilter.Value.Value = param_4.Value.Value;
    SWidget::ArrangeChildren
              ((param_2->Widget).Object,&param_2->Geometry,&local_180,param_5 != FocusHandling);
    uVar10 = local_180.Array.ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 * 0x48;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_180.Array.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
        if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
        }
        pFVar9 = (FArrangedWidget *)((longlong)FVar8 + lVar11);
        pTVar1 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
        pSVar2 = (pFVar9->Widget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        pSVar3 = (param_1->WidgetToFind).Object;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        if ((pSVar3 == pSVar2) ||
           (bVar5 = SearchForWidgetRecursively_Reverse<FWidgetMatcher>
                              (param_1,pFVar9,param_3,param_4,param_5), bVar5)) {
          FArrangedChildren::AddWidget(param_3,pFVar9);
          bVar5 = true;
          goto LAB_142426378;
        }
        lVar11 = lVar11 + -0x48;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    bVar5 = false;
LAB_142426378:
    FVar8 = (ForElementType<FArrangedWidget>)&local_180.Array;
    if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_180.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_180.Array.ArrayNum);
    if (local_180.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_180.Array.AllocatorInstance.SecondaryData);
    }
  }
  return bVar5;
}

// GeneratePathToWidget<FFocusableWidgetMatcher> @ 1424e69b0

/* WARNING: Enum "Type": Some values do not have unique names */

FArrangedChildren * __thiscall
FWidgetPath::GeneratePathToWidget<FFocusableWidgetMatcher>
          (FWidgetPath *this,FArrangedChildren *__return_storage_ptr__,
          FFocusableWidgetMatcher *param_1,FArrangedWidget *param_2,EUINavigation param_3,
          EVisibility param_4,EWidgetPathSearchPurpose param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  FArrangedChildren *pFVar15;
  longlong lVar16;
  ForElementType<FArrangedWidget> FVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  
  uVar22 = 0;
  (__return_storage_ptr__->VisibilityFilter).Value.Value = (uchar)param_4.Value.Value;
  (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData =
       (ForElementType<FArrangedWidget>)0x0;
  (__return_storage_ptr__->Array).ArrayNum = 0;
  (__return_storage_ptr__->Array).ArrayMax = 4;
  __return_storage_ptr__->bAllow3DWidgets = false;
  if (param_3 == Next) {
    SearchForWidgetRecursively<FFocusableWidgetMatcher>
              (param_1,param_2,__return_storage_ptr__,param_4,param_5);
  }
  else {
    SearchForWidgetRecursively_Reverse<FFocusableWidgetMatcher>
              (param_1,param_2,__return_storage_ptr__,param_4,param_5);
  }
  iVar20 = (__return_storage_ptr__->Array).ArrayNum;
  lVar16 = (longlong)iVar20;
  if (0 < iVar20 / 2) {
    uVar23 = uVar22;
    uVar24 = uVar22;
    do {
      iVar20 = iVar20 + -1;
      uVar19 = (lVar16 + -1) - uVar23;
      if ((((longlong)uVar23 < 0) || ((longlong)uVar19 < 0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar15 = (FArrangedChildren *)(*pcVar4)();
        return pFVar15;
      }
      iVar3 = (__return_storage_ptr__->Array).ArrayNum;
      if (((iVar3 <= (int)uVar22) || (iVar3 <= iVar20)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar14)) {
        pcVar4 = (code *)swi(3);
        pFVar15 = (FArrangedChildren *)(*pcVar4)();
        return pFVar15;
      }
      if (uVar23 != uVar19) {
        FVar17 = (__return_storage_ptr__->Array).AllocatorInstance.SecondaryData;
        if (FVar17 == (ForElementType<FArrangedWidget>)0x0) {
          puVar18 = (undefined8 *)((longlong)&__return_storage_ptr__->Array + uVar19 * 0x48);
          FVar17 = (ForElementType<FArrangedWidget>)&__return_storage_ptr__->Array;
        }
        else {
          puVar18 = (undefined8 *)((longlong)FVar17 + uVar19 * 0x48);
        }
        uVar5 = puVar18[1];
        uVar6 = *(undefined8 *)(uVar24 + (longlong)FVar17);
        uVar7 = ((undefined8 *)(uVar24 + (longlong)FVar17))[1];
        puVar1 = (undefined8 *)(uVar24 + 0x10 + (longlong)FVar17);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(uVar24 + 0x20 + (longlong)FVar17);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        puVar1 = (undefined8 *)(uVar24 + 0x30 + (longlong)FVar17);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar2 = *(undefined8 *)(uVar24 + 0x40 + (longlong)FVar17);
        *(undefined8 *)(uVar24 + (longlong)FVar17) = *puVar18;
        ((undefined8 *)(uVar24 + (longlong)FVar17))[1] = uVar5;
        uVar5 = puVar18[3];
        puVar1 = (undefined8 *)(uVar24 + 0x10 + (longlong)FVar17);
        *puVar1 = puVar18[2];
        puVar1[1] = uVar5;
        uVar5 = puVar18[5];
        puVar1 = (undefined8 *)(uVar24 + 0x20 + (longlong)FVar17);
        *puVar1 = puVar18[4];
        puVar1[1] = uVar5;
        uVar5 = puVar18[7];
        puVar1 = (undefined8 *)(uVar24 + 0x30 + (longlong)FVar17);
        *puVar1 = puVar18[6];
        puVar1[1] = uVar5;
        *(undefined8 *)(uVar24 + 0x40 + (longlong)FVar17) = puVar18[8];
        *puVar18 = uVar6;
        puVar18[1] = uVar7;
        puVar18[2] = uVar8;
        puVar18[3] = uVar9;
        puVar18[4] = uVar10;
        puVar18[5] = uVar11;
        puVar18[6] = uVar12;
        puVar18[7] = uVar13;
        puVar18[8] = uVar2;
      }
      uVar21 = (int)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
      uVar23 = uVar23 + 1;
      uVar24 = uVar24 + 0x48;
    } while ((int)uVar21 < (__return_storage_ptr__->Array).ArrayNum / 2);
  }
  return __return_storage_ptr__;
}

// SearchForWidgetRecursively<FFocusableWidgetMatcher> @ 1424e86f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWidgetPath::SearchForWidgetRecursively<FFocusableWidgetMatcher>
          (FFocusableWidgetMatcher *param_1,FArrangedWidget *param_2,FArrangedChildren *param_3,
          EVisibility param_4,EWidgetPathSearchPurpose param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  FArrangedWidget *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1b8 [32];
  FArrangedChildren local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (((param_5 == FocusHandling) && (param_4.Value.Value == EVisibility::Visible.Value.Value)) &&
     (((param_2->Widget).Object)->EnabledStateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    bVar4 = false;
  }
  else {
    local_188.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    local_188.Array.ArrayNum = 0;
    local_188.Array.ArrayMax = 4;
    local_188.bAllow3DWidgets = true;
    local_188.VisibilityFilter.Value.Value = param_4.Value.Value;
    SWidget::ArrangeChildren
              ((param_2->Widget).Object,&param_2->Geometry,&local_188,param_5 != FocusHandling);
    uVar10 = 0;
    if (0 < local_188.Array.ArrayNum) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_188.Array.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (ForElementType<FArrangedWidget>)&local_188.Array;
        if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar8 = local_188.Array.AllocatorInstance.SecondaryData;
        }
        pFVar9 = (FArrangedWidget *)((longlong)FVar8 + lVar11);
        pTVar1 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
        pSVar2 = (pFVar9->Widget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar2->EnabledStateAttribute !=
             (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) &&
           (cVar6 = (**(code **)(pSVar2->_padding_ + 0x198))(), cVar6 != '\0')) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
LAB_1424e88fa:
          FArrangedChildren::AddWidget(param_3,pFVar9);
          bVar4 = true;
          goto LAB_1424e8885;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        bVar4 = SearchForWidgetRecursively<FFocusableWidgetMatcher>
                          (param_1,pFVar9,param_3,param_4,param_5);
        if (bVar4) goto LAB_1424e88fa;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x48;
      } while ((int)uVar10 < local_188.Array.ArrayNum);
    }
    bVar4 = false;
LAB_1424e8885:
    FVar8 = (ForElementType<FArrangedWidget>)&local_188.Array;
    if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_188.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_188.Array.ArrayNum);
    if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Array.AllocatorInstance.SecondaryData);
    }
  }
  return bVar4;
}

// SearchForWidgetRecursively_Reverse<FFocusableWidgetMatcher> @ 1424e8920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FWidgetPath::SearchForWidgetRecursively_Reverse<FFocusableWidgetMatcher>
          (FFocusableWidgetMatcher *param_1,FArrangedWidget *param_2,FArrangedChildren *param_3,
          EVisibility param_4,EWidgetPathSearchPurpose param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  FArrangedWidget *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_1b8 [32];
  FArrangedChildren local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (((param_5 == FocusHandling) && (param_4.Value.Value == EVisibility::Visible.Value.Value)) &&
     (((param_2->Widget).Object)->EnabledStateAttribute ==
      (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)) {
    bVar4 = false;
  }
  else {
    local_188.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    local_188.Array.ArrayNum = 0;
    local_188.Array.ArrayMax = 4;
    local_188.bAllow3DWidgets = true;
    local_188.VisibilityFilter.Value.Value = param_4.Value.Value;
    SWidget::ArrangeChildren
              ((param_2->Widget).Object,&param_2->Geometry,&local_188,param_5 != FocusHandling);
    uVar10 = local_188.Array.ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 * 0x48;
      do {
        uVar7 = 0;
        if ((int)uVar10 < local_188.Array.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar8 = (ForElementType<FArrangedWidget>)&local_188.Array;
        if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar8 = local_188.Array.AllocatorInstance.SecondaryData;
        }
        pFVar9 = (FArrangedWidget *)((longlong)FVar8 + lVar11);
        pTVar1 = (pFVar9->Widget).SharedReferenceCount.ReferenceController;
        pSVar2 = (pFVar9->Widget).Object;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar2->EnabledStateAttribute !=
             (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0) &&
           (cVar6 = (**(code **)(pSVar2->_padding_ + 0x198))(), cVar6 != '\0')) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
LAB_1424e8b2b:
          FArrangedChildren::AddWidget(param_3,pFVar9);
          bVar4 = true;
          goto LAB_1424e8ab6;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        bVar4 = SearchForWidgetRecursively_Reverse<FFocusableWidgetMatcher>
                          (param_1,pFVar9,param_3,param_4,param_5);
        if (bVar4) goto LAB_1424e8b2b;
        lVar11 = lVar11 + -0x48;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    bVar4 = false;
LAB_1424e8ab6:
    FVar8 = (ForElementType<FArrangedWidget>)&local_188.Array;
    if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar8 = local_188.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar8,local_188.Array.ArrayNum);
    if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_188.Array.AllocatorInstance.SecondaryData);
    }
  }
  return bVar4;
}

// FWidgetPath @ 1424ebc50

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWidgetPath::FWidgetPath(FWidgetPath *this,TArrayView<FWidgetAndPointer,int> *param_1)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWindow *pSVar3;
  FDeprecateSlateVector2D *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FWidgetAndPointer *pFVar10;
  FWidgetPath *pFVar11;
  FWidgetAndPointer *pFVar12;
  int *piVar13;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar14;
  TArrayView<FWidgetAndPointer,int> local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  FDeprecateSlateVector2D local_48;
  FDeprecateSlateVector2D FStack_40;
  FScriptContainerElement local_38;
  
  local_78.DataPtr = param_1->DataPtr;
  local_78.ArrayNum = param_1->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FArrangedChildren::Hittest2_FromArray(&this->Widgets,&local_78);
  iVar9 = param_1->ArrayNum;
  if (iVar9 < 1) {
    local_50 = 0;
    (this->TopLevelWindow).Object = (SWindow *)0x0;
    (this->TopLevelWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    (this->VirtualPointerPositions).ArrayMax = 0;
    (this->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VirtualPointerPositions).ArrayNum = 0;
    if (iVar9 == 0) goto LAB_1424ebd62;
  }
  else {
    pTVar2 = (TReferenceControllerBase<1> *)param_1->DataPtr->_padding_;
    pSVar3 = (SWindow *)param_1->DataPtr->_padding_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    (this->TopLevelWindow).Object = pSVar3;
    (this->TopLevelWindow).SharedReferenceCount.ReferenceController = pTVar2;
    local_60 = 0;
    local_68 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    (this->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->VirtualPointerPositions).ArrayMax = 0;
    (this->VirtualPointerPositions).ArrayNum = 0;
  }
  pFVar10 = TArrayView<FWidgetAndPointer,int>::operator[](param_1,0);
  cVar7 = (**(code **)(*(longlong *)pFVar10->_padding_ + 0x208))();
  if ((cVar7 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InWidgetsAndPointers.Num() == 0 || InWidgetsAndPointers[0].Widget->Advanced_IsWindow()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                         ,0x1c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar11 = (FWidgetPath *)(*pcVar6)();
    return pFVar11;
  }
LAB_1424ebd62:
  pTVar14 = &this->VirtualPointerPositions;
  piVar13 = &(this->VirtualPointerPositions).ArrayMax;
  uVar1 = param_1->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (*piVar13 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar1,&pTVar14->AllocatorInstance,(this->VirtualPointerPositions).ArrayNum,
               piVar13);
  }
  pFVar10 = param_1->DataPtr;
  pFVar12 = pFVar10 + (int)uVar1;
  while( true ) {
    if (pFVar10 == pFVar12) {
      return this;
    }
    local_38 = (FScriptContainerElement)(pFVar10->OptionalPointerPosition).bIsSet;
    if (local_38 != (FScriptContainerElement)0x0) {
      local_48 = (pFVar10->OptionalPointerPosition).TypedValue.CurrentCursorPosition;
      FStack_40 = (pFVar10->OptionalPointerPosition).TypedValue.LastCursorPosition;
    }
    pFVar4 = (FDeprecateSlateVector2D *)(pTVar14->AllocatorInstance).Data;
    if (((pFVar4 <= &local_48) &&
        (&local_48 < (FDeprecateSlateVector2D *)((longlong)pFVar4 + (longlong)*piVar13 * 0x14))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) break;
    iVar9 = (this->VirtualPointerPositions).ArrayNum;
    if (iVar9 == *piVar13) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x414,&pTVar14->AllocatorInstance,piVar13);
    }
    (this->VirtualPointerPositions).ArrayNum = iVar9 + 1;
    pFVar5 = (pTVar14->AllocatorInstance).Data;
    pFVar5[(longlong)iVar9 * 0x14 + 0x10] = (FScriptContainerElement)0x0;
    pFVar4 = (FDeprecateSlateVector2D *)(pFVar5 + (longlong)iVar9 * 0x14);
    *(FScriptContainerElement *)(pFVar4 + 2) = local_38;
    if (local_38 != (FScriptContainerElement)0x0) {
      *pFVar4 = local_48;
      pFVar4[1] = FStack_40;
    }
    pFVar10 = pFVar10 + 1;
  }
  pcVar6 = (code *)swi(3);
  pFVar11 = (FWidgetPath *)(*pcVar6)();
  return pFVar11;
}

// FWidgetPath @ 1424ebed0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWidgetPath::FWidgetPath
          (FWidgetPath *this,TSharedPtr<SWindow,1> *param_1,FArrangedChildren *param_2)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FArrangedWidget> FVar5;
  ForElementType<FArrangedWidget> FVar6;
  
  pTVar1 = &(this->Widgets).Array;
  (this->Widgets).VisibilityFilter.Value.Value = (param_2->VisibilityFilter).Value.Value;
  (this->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  FVar6 = (param_2->Array).AllocatorInstance.SecondaryData;
  iVar3 = (param_2->Array).ArrayNum;
  (this->Widgets).Array.ArrayNum = iVar3;
  if (FVar6 == (ForElementType<FArrangedWidget>)0x0) {
    FVar6 = (ForElementType<FArrangedWidget>)&param_2->Array;
  }
  piVar2 = &(this->Widgets).Array.ArrayMax;
  if (iVar3 == 0) {
    *piVar2 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
              (0x48,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    FVar5 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FArrangedWidget>)0x0) {
      FVar5 = (ForElementType<FArrangedWidget>)pTVar1;
    }
    ConstructItems<FArrangedWidget,FArrangedWidget,int>
              ((void *)FVar5,(FArrangedWidget *)FVar6,iVar3);
  }
  (this->Widgets).bAllow3DWidgets = param_2->bAllow3DWidgets;
  (this->TopLevelWindow).Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  (this->TopLevelWindow).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualPointerPositions).ArrayNum = 0;
  (this->VirtualPointerPositions).ArrayMax = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return this;
}

// FWidgetPath @ 1424ebff0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall FWidgetPath::FWidgetPath(FWidgetPath *this)

{
  (this->Widgets).VisibilityFilter.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  (this->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  (this->Widgets).Array.ArrayNum = 0;
  (this->Widgets).Array.ArrayMax = 4;
  (this->Widgets).bAllow3DWidgets = false;
  (this->TopLevelWindow).Object = (SWindow *)0x0;
  (this->TopLevelWindow).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->VirtualPointerPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualPointerPositions).ArrayNum = 0;
  (this->VirtualPointerPositions).ArrayMax = 0;
  return this;
}

// ~FWidgetPath @ 1424ecef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetPath::~FWidgetPath(FWidgetPath *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FArrangedWidget> FVar2;
  
  pFVar1 = (this->VirtualPointerPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopLevelWindow).SharedReferenceCount.ReferenceController);
  FVar2 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<FArrangedWidget>)0x0) {
    FVar2 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar2,(this->Widgets).Array.ArrayNum);
  FVar2 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// operator= @ 1424edb30

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall FWidgetPath::operator=(FWidgetPath *this,FWidgetPath *param_1)

{
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Src;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  TSharedPtr<SWindow,1> *pTVar1;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<FArrangedWidget> FVar4;
  TArray<TOptional<FVirtualPointerPosition>,TSizedDefaultAllocator<32>_> *pTVar5;
  
  _Src = &(param_1->Widgets).Array;
  _Dst = &(this->Widgets).Array;
  (this->Widgets).VisibilityFilter.Value.Value = (param_1->Widgets).VisibilityFilter.Value.Value;
  if (_Dst != _Src) {
    FVar4 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = (ForElementType<FArrangedWidget>)_Dst;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,(this->Widgets).Array.ArrayNum);
    if ((param_1->Widgets).Array.AllocatorInstance.SecondaryData ==
        (ForElementType<FArrangedWidget>)0x0) {
      memmove(_Dst,_Src,0x120);
    }
    FVar4 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->Widgets).Array.AllocatorInstance.SecondaryData =
         (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
    (param_1->Widgets).Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    (this->Widgets).Array.ArrayNum = (param_1->Widgets).Array.ArrayNum;
    (this->Widgets).Array.ArrayMax = (param_1->Widgets).Array.ArrayMax;
    (param_1->Widgets).Array.ArrayNum = 0;
    (param_1->Widgets).Array.ArrayMax = 4;
  }
  pTVar1 = &param_1->TopLevelWindow;
  (this->Widgets).bAllow3DWidgets = (param_1->Widgets).bAllow3DWidgets;
  if (&this->TopLevelWindow != pTVar1) {
    (this->TopLevelWindow).Object = pTVar1->Object;
    pTVar1->Object = (SWindow *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TopLevelWindow).SharedReferenceCount,
               &(param_1->TopLevelWindow).SharedReferenceCount);
  }
  pTVar5 = &param_1->VirtualPointerPositions;
  pTVar2 = &this->VirtualPointerPositions;
  if (pTVar2 != pTVar5) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VirtualPointerPositions).ArrayNum = (param_1->VirtualPointerPositions).ArrayNum;
    (this->VirtualPointerPositions).ArrayMax = (param_1->VirtualPointerPositions).ArrayMax;
    (param_1->VirtualPointerPositions).ArrayNum = 0;
    (param_1->VirtualPointerPositions).ArrayMax = 0;
  }
  return this;
}

// ContainsWidget @ 142505790

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetPath::ContainsWidget(FWidgetPath *this,SWidget *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  ForElementType<FArrangedWidget> FVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1 != (SWidget *)0x0) && (uVar7 = 0, 0 < (this->Widgets).Array.ArrayNum)) {
    lVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Widgets).Array.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      FVar1 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar6 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar6 = FVar1;
      }
      if (*(SWidget **)(lVar8 + 0x38 + (longlong)FVar6) == param_1) {
        return true;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x48;
    } while ((int)uVar7 < (this->Widgets).Array.ArrayNum);
  }
  return false;
}

// FindArrangedWidget @ 142508e80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FArrangedWidget> * __thiscall
FWidgetPath::FindArrangedWidget
          (FWidgetPath *this,TOptional<FArrangedWidget> *__return_storage_ptr__,
          TSharedRef<SWidget_const_,1> *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  TOptional<FArrangedWidget> *pTVar7;
  FArrangedWidget *pFVar8;
  ForElementType<FArrangedWidget> FVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = 0;
  if (0 < (this->Widgets).Array.ArrayNum) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->Widgets).Array.ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TOptional<FArrangedWidget> *)(*pcVar3)();
          return pTVar7;
        }
      }
      FVar1 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar9 = FVar1;
      }
      if (*(SWidget **)(lVar11 + 0x38 + (longlong)FVar9) == param_1->Object) {
        pFVar8 = FArrangedChildren::operator[](&this->Widgets,uVar10);
        uVar4 = *(undefined8 *)&(pFVar8->Geometry).Scale;
        (__return_storage_ptr__->TypedValue).Geometry.Size = (pFVar8->Geometry).Size;
        *(undefined8 *)&(__return_storage_ptr__->TypedValue).Geometry.Scale = uVar4;
        uVar4 = *(undefined8 *)((longlong)&(pFVar8->Geometry).Position.field0_0x0 + 4);
        *(undefined8 *)
         ((longlong)&(__return_storage_ptr__->TypedValue).Geometry.AbsolutePosition.field0_0x0 + 4)
             = *(undefined8 *)((longlong)&(pFVar8->Geometry).AbsolutePosition.field0_0x0 + 4);
        *(undefined8 *)
         ((longlong)&(__return_storage_ptr__->TypedValue).Geometry.Position.field0_0x0 + 4) = uVar4;
        uVar4 = *(undefined8 *)((pFVar8->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Geometry.AccumulatedRenderTransform.M.M[0] + 1) =
             *(undefined8 *)((pFVar8->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
        *(undefined8 *)
         ((__return_storage_ptr__->TypedValue).Geometry.AccumulatedRenderTransform.M.M[1] + 1) =
             uVar4;
        *(undefined8 *)
         ((longlong)
          &(__return_storage_ptr__->TypedValue).Geometry.AccumulatedRenderTransform.Trans.field0_0x0
         + 4) = *(undefined8 *)
                 ((longlong)&(pFVar8->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
        (__return_storage_ptr__->TypedValue).Widget.Object = (pFVar8->Widget).Object;
        pTVar2 = (pFVar8->Widget).SharedReferenceCount.ReferenceController;
        (__return_storage_ptr__->TypedValue).Widget.SharedReferenceCount.ReferenceController =
             pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        __return_storage_ptr__->bIsSet = true;
        goto LAB_142508f2a;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x48;
    } while ((int)uVar10 < (this->Widgets).Array.ArrayNum);
  }
  __return_storage_ptr__->bIsSet = false;
LAB_142508f2a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindArrangedWidgetAndCursor @ 142508fa0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FWidgetAndPointer> * __thiscall
FWidgetPath::FindArrangedWidgetAndCursor
          (FWidgetPath *this,TOptional<FWidgetAndPointer> *__return_storage_ptr__,
          TSharedRef<SWidget_const_,1> *param_1)

{
  ForElementType<FArrangedWidget> FVar1;
  FDeprecateSlateVector2D FVar2;
  FScriptContainerElement FVar3;
  FDeprecateSlateVector2D FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FDeprecateSlateVector2D FVar7;
  FDeprecateSlateVector2D FVar8;
  FDeprecateSlateVector2D FVar9;
  FDeprecateSlateVector2D FVar10;
  bool bVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  FArrangedWidget *pFVar14;
  TOptional<FWidgetAndPointer> *pTVar15;
  FDeprecateSlateVector2D *pFVar16;
  ForElementType<FArrangedWidget> FVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ForElementType<FArrangedWidget> FVar21;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  FDeprecateSlateVector2D local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  SWidget *local_b0;
  TReferenceControllerBase<1> *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  FScriptContainerElement local_90 [8];
  FDeprecateSlateVector2D local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  SWidget *local_50;
  TReferenceControllerBase<1> *local_48;
  undefined1 local_30;
  
  FVar21 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
  uVar20 = 0;
  bVar11 = false;
  if (FVar21 == (ForElementType<FArrangedWidget>)0x0) {
    FVar21 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
  }
  FVar1 = (ForElementType<FArrangedWidget>)
          ((longlong)FVar21 + (longlong)(this->Widgets).Array.ArrayNum * 0x48);
  if (FVar21 != FVar1) {
    FVar17 = FVar21;
    do {
      if (*(SWidget **)((longlong)FVar17 + 0x38) == param_1->Object) {
        lVar18 = ((longlong)FVar17 - (longlong)FVar21) / 0x12 +
                 ((longlong)FVar17 - (longlong)FVar21 >> 0x3f);
        uVar19 = (int)(lVar18 >> 2) - (int)(lVar18 >> 0x3f);
        if (uVar19 != 0xffffffff) {
          if ((int)uVar19 < (this->VirtualPointerPositions).ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar15 = (TOptional<FWidgetAndPointer> *)(*pcVar6)();
            return pTVar15;
          }
          pFVar5 = (this->VirtualPointerPositions).AllocatorInstance.Data;
          FVar3 = pFVar5[(longlong)(int)uVar19 * 0x14 + 0x10];
          if (FVar3 != (FScriptContainerElement)0x0) {
            pFVar5 = pFVar5 + (longlong)(int)uVar19 * 0x14;
            local_100 = *(undefined4 *)pFVar5;
            uStack_fc = *(undefined4 *)(pFVar5 + 4);
            uStack_f8 = *(undefined4 *)(pFVar5 + 8);
            uStack_f4 = *(undefined4 *)(pFVar5 + 0xc);
          }
          pFVar14 = FArrangedChildren::operator[](&this->Widgets,uVar19);
          local_a8 = (pFVar14->Widget).SharedReferenceCount.ReferenceController;
          local_e8 = (pFVar14->Geometry).Size;
          uStack_e0 = *(undefined8 *)&(pFVar14->Geometry).Scale;
          local_b0 = (pFVar14->Widget).Object;
          local_d8 = *(undefined8 *)((longlong)&(pFVar14->Geometry).AbsolutePosition.field0_0x0 + 4)
          ;
          uStack_d0 = *(undefined8 *)((longlong)&(pFVar14->Geometry).Position.field0_0x0 + 4);
          local_c8 = *(undefined8 *)((pFVar14->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
          uStack_c0 = *(undefined8 *)((pFVar14->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
          local_b8 = *(undefined8 *)
                      ((longlong)&(pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 +
                      4);
          if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_90[0] = FVar3;
          if (FVar3 != (FScriptContainerElement)0x0) {
            local_a0 = CONCAT44(uStack_fc,local_100);
            uStack_98 = CONCAT44(uStack_f4,uStack_f8);
          }
          pFVar16 = &local_e8;
          uVar20 = 1;
          goto LAB_14250907a;
        }
        break;
      }
      FVar17 = (ForElementType<FArrangedWidget>)((longlong)FVar17 + 0x48);
    } while (FVar17 != FVar1);
  }
  pFVar14 = FArrangedWidget::GetNullWidget();
  local_48 = (pFVar14->Widget).SharedReferenceCount.ReferenceController;
  local_88 = (pFVar14->Geometry).Size;
  uStack_80 = *(undefined8 *)&(pFVar14->Geometry).Scale;
  local_50 = (pFVar14->Widget).Object;
  local_78 = *(undefined8 *)((longlong)&(pFVar14->Geometry).AbsolutePosition.field0_0x0 + 4);
  uStack_70 = *(undefined8 *)((longlong)&(pFVar14->Geometry).Position.field0_0x0 + 4);
  local_68 = *(undefined8 *)((pFVar14->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
  uStack_60 = *(undefined8 *)((pFVar14->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
  local_58 = *(undefined8 *)
              ((longlong)&(pFVar14->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
  if (local_48 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_48->SharedReferenceCount = (atomic<int>)((int)local_48->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar16 = &local_88;
  local_30 = 0;
  bVar11 = true;
LAB_14250907a:
  pTVar12 = local_a8;
  FVar2 = pFVar16[1];
  FVar4 = pFVar16[7];
  FVar7 = pFVar16[2];
  FVar8 = pFVar16[3];
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)*pFVar16;
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar2;
  FVar9 = pFVar16[4];
  FVar10 = pFVar16[5];
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar7;
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar8;
  FVar2 = pFVar16[6];
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar9;
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar10;
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar2;
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar4;
  FVar2 = pFVar16[8];
  (__return_storage_ptr__->TypedValue)._padding_ = (longlong)FVar2;
  if (FVar2 != (FDeprecateSlateVector2D)0x0) {
    LOCK();
    *(int *)((longlong)FVar2 + 8) = *(int *)((longlong)FVar2 + 8) + 1;
    UNLOCK();
  }
  bVar13 = *(bool *)(pFVar16 + 0xb);
  (__return_storage_ptr__->TypedValue).OptionalPointerPosition.bIsSet = bVar13;
  if (bVar13 != false) {
    FVar2 = pFVar16[10];
    (__return_storage_ptr__->TypedValue).OptionalPointerPosition.TypedValue.CurrentCursorPosition =
         pFVar16[9];
    (__return_storage_ptr__->TypedValue).OptionalPointerPosition.TypedValue.LastCursorPosition =
         FVar2;
  }
  __return_storage_ptr__->bIsSet = true;
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
  }
  if (uVar20 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetDeepestWindow @ 14250d480

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
FWidgetPath::GetDeepestWindow(FWidgetPath *this,TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedRef<SWindow,1> *pTVar5;
  FArrangedWidget *pFVar6;
  <lambda_1> local_res8;
  
  if ((this->Widgets).Array.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                       ,0x71,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
          FindLastByPredicate<_FWidgetPath::GetDeepestWindow_::__l2::<lambda_1>_>
                    (&(this->Widgets).Array,local_res8,(this->Widgets).Array.ArrayNum);
  if (iVar4 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("WindowIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                       ,0x76,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  pFVar6 = FArrangedChildren::operator[](&this->Widgets,iVar4);
  __return_storage_ptr__->Object = (SWindow *)(pFVar6->Widget).Object;
  pTVar1 = (pFVar6->Widget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetPathDownTo @ 14250e680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWidgetPath::GetPathDownTo
          (FWidgetPath *this,FWidgetPath *__return_storage_ptr__,
          TSharedRef<SWidget_const_,1> *param_1)

{
  uchar *puVar1;
  int iVar2;
  ForElementType<FArrangedWidget> FVar3;
  code *pcVar4;
  EVisibility EVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FWidgetPath *pFVar10;
  ForElementType<FArrangedWidget> FVar11;
  ForElementType<FArrangedWidget> FVar12;
  longlong lVar13;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  longlong local_2e0;
  TSharedRef<SWidget_const_,1> *local_2d8;
  TSharedPtr<SWindow,1> local_2d0;
  FArrangedChildren local_2c0;
  TEnumAsByte<EVisibility::Private> local_180;
  FArrangedWidget local_178 [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_2c0.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  uVar8 = 0;
  bVar7 = false;
  local_2c0.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_2c0.Array.ArrayNum = 0;
  lVar13 = 0;
  local_2c0.bAllow3DWidgets = false;
  local_2c0.Array.ArrayMax = 4;
  local_2d8 = param_1;
  do {
    iVar2 = (this->Widgets).Array.ArrayNum;
    if (iVar2 <= (int)uVar8) break;
    FVar12 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
    if ((int)uVar8 < 0) {
      local_2e8 = (longlong)(int)uVar8;
      local_2e0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FWidgetPath *)(*pcVar4)();
        return pFVar10;
      }
    }
    FVar3 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    FVar11 = FVar12;
    if (FVar3 != (ForElementType<FArrangedWidget>)0x0) {
      FVar11 = FVar3;
    }
    FArrangedChildren::AddWidget
              (&local_2c0,(FArrangedWidget *)((longlong)FVar11 + (longlong)(int)uVar8 * 0x48));
    iVar2 = (this->Widgets).Array.ArrayNum;
    uVar9 = 0;
    if ((int)uVar8 < iVar2) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      local_2e8 = (longlong)(int)uVar8;
      local_2e0 = (longlong)iVar2;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FWidgetPath *)(*pcVar4)();
        return pFVar10;
      }
    }
    FVar3 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<FArrangedWidget>)0x0) {
      FVar12 = FVar3;
    }
    puVar1 = (uchar *)((longlong)FVar12 + 0x38) + lVar13;
    bVar7 = *(SWidget **)puVar1 == local_2d8->Object;
    uVar8 = uVar8 + 1;
    lVar13 = lVar13 + 0x48;
  } while (*(SWidget **)puVar1 != local_2d8->Object);
  pTVar6 = local_2d8;
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
  if (bVar7) {
    local_2d0.Object = (this->TopLevelWindow).Object;
    local_2d0.SharedReferenceCount.ReferenceController =
         (this->TopLevelWindow).SharedReferenceCount.ReferenceController;
    if (local_2d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetPath(__return_storage_ptr__,&local_2d0,&local_2c0);
  }
  else {
    (__return_storage_ptr__->Widgets).VisibilityFilter.Value.Value =
         (uchar)EVisibility::Visible.Value.Value;
    (__return_storage_ptr__->Widgets).Array.AllocatorInstance.SecondaryData =
         (ForElementType<FArrangedWidget>)0x0;
    (__return_storage_ptr__->Widgets).Array.ArrayNum = 0;
    (__return_storage_ptr__->Widgets).Array.ArrayMax = 4;
    (__return_storage_ptr__->Widgets).bAllow3DWidgets = false;
    (__return_storage_ptr__->TopLevelWindow).Object = (SWindow *)0x0;
    (__return_storage_ptr__->TopLevelWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (__return_storage_ptr__->VirtualPointerPositions).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->VirtualPointerPositions).ArrayNum = 0;
    (__return_storage_ptr__->VirtualPointerPositions).ArrayMax = 0;
    local_180 = EVar5.Value.Value;
    local_58 = 0;
    local_50 = 0;
    local_4c = 4;
    local_48 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    DestructItems<FArrangedWidget,int>(local_178,0);
  }
  FVar12 = (ForElementType<FArrangedWidget>)&local_2c0.Array;
  if (local_2c0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar12 = local_2c0.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar12,local_2c0.Array.ArrayNum);
  if (local_2c0.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_2c0.Array.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetWindow @ 14250fdc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWindow,1> * __thiscall
FWidgetPath::GetWindow(FWidgetPath *this,TSharedRef<SWindow,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<SWindow,1> *pTVar4;
  FArrangedWidget *pFVar5;
  
  if ((this->Widgets).Array.ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                       ,0x69,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWindow,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pFVar5 = FArrangedChildren::operator[](&this->Widgets,0);
  __return_storage_ptr__->Object = (SWindow *)(pFVar5->Widget).Object;
  pTVar1 = (pFVar5->Widget).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// IsValid @ 142511960

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWidgetPath::IsValid(FWidgetPath *this)

{
  return 0 < (this->Widgets).Array.ArrayNum;
}

// MoveFocus @ 1425166b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FWidgetPath::MoveFocus(FWidgetPath *this,int param_1,EUINavigation param_2,bool param_3)

{
  SWidget *this_00;
  code *pcVar1;
  EVisibility EVar2;
  FWidgetPath *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  FArrangedWidget *pFVar9;
  ForElementType<FArrangedWidget> FVar10;
  int iVar11;
  ulonglong uVar12;
  ForElementType<FArrangedWidget> FVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ForElementType<FArrangedWidget> FVar19;
  longlong lVar20;
  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_01;
  undefined1 auStackY_478 [32];
  FFocusableWidgetMatcher local_437;
  FFocusableWidgetMatcher local_436 [2];
  int local_434;
  int local_430;
  FWidgetPath *local_428;
  int *local_420;
  longlong local_418;
  longlong local_410;
  FArrangedChildren local_408;
  FArrangedChildren local_2c8;
  FArrangedChildren local_188;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_478;
  local_434 = param_1;
  local_428 = this;
  if ((1 < (byte)(param_2 - Next)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NavigationType == EUINavigation::Next || NavigationType == EUINavigation::Previous"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                         ,0xa2,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  EVar2.Value.Value = EVisibility::Visible.Value.Value;
  iVar11 = -1;
  if (param_2 == Next) {
    iVar11 = 1;
  }
  local_420 = &(this->Widgets).Array.ArrayNum;
  iVar8 = *local_420;
  uVar17 = iVar8 - 1;
  local_430 = iVar11;
  if (param_1 == uVar17) {
    if (param_2 == Next) {
      uVar16 = 0;
      if ((int)uVar17 < iVar8) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      FVar10 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
      }
      GeneratePathToWidget<FFocusableWidgetMatcher>
                (this,&local_188,&local_437,
                 (FArrangedWidget *)
                 ((longlong)FVar10 + (longlong)((this->Widgets).Array.ArrayNum + -1) * 0x48),Next,
                 EVar2,FocusHandling);
      uVar17 = 0;
      iVar11 = local_188.Array.ArrayNum;
      if (0 < iVar11) {
        do {
          uVar16 = 0;
          if ((int)uVar17 < local_188.Array.ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return (bool)uVar5;
          }
          FVar10 = (ForElementType<FArrangedWidget>)&local_188.Array;
          if (local_188.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar10 = local_188.Array.AllocatorInstance.SecondaryData;
          }
          FArrangedChildren::AddWidget
                    (&this->Widgets,
                     (FArrangedWidget *)((longlong)FVar10 + (longlong)(int)uVar17 * 0x48));
          iVar11 = local_188.Array.ArrayNum;
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < iVar11);
      }
      FVar10 = (ForElementType<FArrangedWidget>)&local_188.Array;
      if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar10 = local_188.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,iVar11);
      if (local_188.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_188.Array.AllocatorInstance.SecondaryData);
        return 0 < iVar11;
      }
      return 0 < iVar11;
    }
  }
  else if (1 < iVar8) {
    local_408.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
    local_408.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
    local_408.Array.ArrayNum = 0;
    local_408.bAllow3DWidgets = false;
    local_408.Array.ArrayMax = 4;
    pFVar9 = FArrangedChildren::operator[](&this->Widgets,param_1);
    this_00 = (pFVar9->Widget).Object;
    pFVar9 = FArrangedChildren::operator[](&this->Widgets,param_1);
    SWidget::ArrangeChildren(this_00,&pFVar9->Geometry,&local_408,true);
    uVar18 = (ulonglong)(uint)local_408.Array.ArrayNum;
    uVar17 = local_408.Array.ArrayNum;
    if (0 < local_408.Array.ArrayNum) {
      uVar16 = 0;
      if (param_2 != Next) {
        uVar16 = local_408.Array.ArrayNum - 1;
      }
      if (param_3) {
        pFVar9 = FArrangedChildren::operator[](&this->Widgets,local_434 + 1);
        uVar18 = (ulonglong)local_408.Array.ArrayNum;
        FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
        if (local_408.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0)
        {
          FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
        }
        FVar13 = (ForElementType<FArrangedWidget>)((longlong)FVar10 + uVar18 * 0x48);
        if (FVar10 != FVar13) {
          FVar19 = FVar10;
          do {
            if (((TSharedRef<SWidget,1> *)((longlong)FVar19 + 0x38))->Object ==
                (pFVar9->Widget).Object) {
              uVar12 = ((longlong)FVar19 - (longlong)FVar10) / 0x48;
              goto LAB_1425169bb;
            }
            FVar19 = (ForElementType<FArrangedWidget>)((longlong)FVar19 + 0x48);
          } while (FVar19 != FVar13);
        }
        uVar12 = 0xffffffff;
LAB_1425169bb:
        uVar16 = iVar11 + (int)((longlong)
                                ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 |
                                uVar12 & 0xffffffff) % (longlong)local_408.Array.ArrayNum);
      }
      uVar17 = (uint)uVar18;
      if ((int)uVar16 < (int)uVar17) {
        lVar20 = (longlong)(int)uVar16 * 0x48;
        local_418 = (longlong)iVar11 * 0x48;
        do {
          uVar17 = (uint)uVar18;
          if ((int)uVar16 < 0) break;
          uVar15 = ~uVar16 >> 0x1f;
          uVar7 = 0;
          if ((int)uVar16 < (int)uVar17) {
            uVar7 = uVar15;
          }
          if (uVar7 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            uVar18 = (ulonglong)(uint)local_408.Array.ArrayNum;
          }
          EVar2.Value.Value = EVisibility::Visible.Value.Value;
          FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
          if (local_408.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
          }
          if (*(char *)(*(longlong *)(lVar20 + 0x38 + (longlong)FVar10) + 0x3a) != '\0') {
            uVar7 = 0;
            uVar17 = uVar7;
            if ((int)uVar16 < (int)uVar18) {
              uVar17 = uVar15;
            }
            if ((uVar17 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              uVar5 = (*pcVar1)();
              return (bool)uVar5;
            }
            FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
            if (local_408.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
            }
            local_410 = (longlong)(int)uVar16 * 0x48;
            GeneratePathToWidget<FFocusableWidgetMatcher>
                      (this,&local_2c8,local_436,(FArrangedWidget *)((longlong)FVar10 + local_410),
                       param_2,EVar2,Standard);
            iVar11 = local_2c8.Array.ArrayNum;
            if (iVar11 < 1) {
              uVar17 = uVar7;
              if ((int)uVar16 < local_408.Array.ArrayNum) {
                uVar17 = uVar15;
              }
              if ((uVar17 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar1 = (code *)swi(3);
                uVar5 = (*pcVar1)();
                return (bool)uVar5;
              }
              FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
              if (local_408.Array.AllocatorInstance.SecondaryData !=
                  (ForElementType<FArrangedWidget>)0x0) {
                FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
              }
              cVar6 = (**(code **)(**(longlong **)(lVar20 + 0x38 + (longlong)FVar10) + 0x198))();
              iVar11 = local_2c8.Array.ArrayNum;
              if (cVar6 != '\0') goto LAB_142516bb3;
            }
            else {
LAB_142516bb3:
              pFVar3 = local_428;
              FVar10 = (ForElementType<FArrangedWidget>)&local_2c8.Array;
              if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                  (ForElementType<FArrangedWidget>)0x0) {
                FVar10 = local_2c8.Array.AllocatorInstance.SecondaryData;
              }
              FVar13 = FVar10;
              while( true ) {
                if (FVar13 == (ForElementType<FArrangedWidget>)
                              ((longlong)FVar10 + (longlong)iVar11 * 0x48)) goto LAB_142516bf7;
                if (((TSharedRef<SWidget,1> *)((longlong)FVar13 + 0x38))->Object->
                    EnabledStateAttribute ==
                    (TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>)0x0)
                break;
                FVar13 = (ForElementType<FArrangedWidget>)((longlong)FVar13 + 0x48);
              }
              if ((int)(((longlong)FVar13 - (longlong)FVar10) / 0x48) == -1) {
LAB_142516bf7:
                this_01 = &(local_428->Widgets).Array;
                uVar17 = local_434 + 1;
                uVar14 = (*local_420 - local_434) - 1;
                if (((int)(uVar14 | uVar17) < 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x458,
                                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  uVar5 = (*pcVar1)();
                  return (bool)uVar5;
                }
                if (uVar14 != 0) {
                  TArray<FArrangedWidget,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
                  RemoveAtImpl(this_01,uVar17,uVar14);
                  UE::Core::Private::
                  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                            (0x48,8,&this_01->AllocatorInstance,(pFVar3->Widgets).Array.ArrayNum,
                             &(pFVar3->Widgets).Array.ArrayMax);
                }
                if ((int)uVar16 < local_408.Array.ArrayNum) {
                  uVar7 = uVar15;
                }
                if ((uVar7 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  uVar5 = (*pcVar1)();
                  return (bool)uVar5;
                }
                FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
                if (local_408.Array.AllocatorInstance.SecondaryData !=
                    (ForElementType<FArrangedWidget>)0x0) {
                  FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
                }
                FArrangedChildren::AddWidget
                          (&local_428->Widgets,(FArrangedWidget *)((longlong)FVar10 + local_410));
                if ((this_01 == &local_2c8.Array) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(void*)this != (void*)&Source",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x96e,L""), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  uVar5 = (*pcVar1)();
                  return (bool)uVar5;
                }
                iVar11 = local_2c8.Array.ArrayNum;
                if (local_2c8.Array.ArrayNum != 0) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                                    (0x48,8,local_2c8.Array.ArrayNum,&this_01->AllocatorInstance,
                                     local_420,&(pFVar3->Widgets).Array.ArrayMax);
                  FVar10 = (pFVar3->Widgets).Array.AllocatorInstance.SecondaryData;
                  FVar13 = (ForElementType<FArrangedWidget>)&local_2c8.Array;
                  if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                      (ForElementType<FArrangedWidget>)0x0) {
                    FVar13 = local_2c8.Array.AllocatorInstance.SecondaryData;
                  }
                  if (FVar10 == (ForElementType<FArrangedWidget>)0x0) {
                    FVar10 = (ForElementType<FArrangedWidget>)this_01;
                  }
                  ConstructItems<FArrangedWidget,FArrangedWidget,int>
                            ((void *)((longlong)FVar10 + (longlong)iVar8 * 0x48),
                             (FArrangedWidget *)FVar13,iVar11);
                }
                FVar10 = (ForElementType<FArrangedWidget>)&local_2c8.Array;
                if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                    (ForElementType<FArrangedWidget>)0x0) {
                  FVar10 = local_2c8.Array.AllocatorInstance.SecondaryData;
                }
                DestructItems<FArrangedWidget,int>
                          ((FArrangedWidget *)FVar10,local_2c8.Array.ArrayNum);
                if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                    (ForElementType<FArrangedWidget>)0x0) {
                  FMemory::Free((void *)local_2c8.Array.AllocatorInstance.SecondaryData);
                }
                FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
                if (local_408.Array.AllocatorInstance.SecondaryData !=
                    (ForElementType<FArrangedWidget>)0x0) {
                  FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
                }
                DestructItems<FArrangedWidget,int>
                          ((FArrangedWidget *)FVar10,local_408.Array.ArrayNum);
                if (local_408.Array.AllocatorInstance.SecondaryData !=
                    (ForElementType<FArrangedWidget>)0x0) {
                  FMemory::Free((void *)local_408.Array.AllocatorInstance.SecondaryData);
                }
                return true;
              }
            }
            FVar10 = (ForElementType<FArrangedWidget>)&local_2c8.Array;
            if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar10 = local_2c8.Array.AllocatorInstance.SecondaryData;
            }
            DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,iVar11);
            if (local_2c8.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FMemory::Free((void *)local_2c8.Array.AllocatorInstance.SecondaryData);
            }
            uVar18 = (ulonglong)(uint)local_408.Array.ArrayNum;
          }
          uVar16 = uVar16 + local_430;
          lVar20 = lVar20 + local_418;
          uVar17 = (uint)uVar18;
        } while ((int)uVar16 < (int)uVar17);
      }
    }
    FVar10 = (ForElementType<FArrangedWidget>)&local_408.Array;
    if (local_408.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar10 = local_408.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar10,uVar17);
    if (local_408.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_408.Array.AllocatorInstance.SecondaryData);
    }
  }
  return false;
}

// ToString @ 142520bb0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall FWidgetPath::ToString(FWidgetPath *this,FString *__return_storage_ptr__)

{
  ForElementType<FArrangedWidget> FVar1;
  FDeprecateSlateVector2D FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  uint uVar7;
  ForElementType<FArrangedWidget> FVar8;
  int iVar9;
  longlong lVar10;
  FString local_58;
  void *local_48 [2];
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  uVar7 = (this->Widgets).Array.ArrayNum - 1;
  if (-1 < (int)uVar7) {
    lVar10 = (longlong)(int)uVar7 * 0x48;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Widgets).Array.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      FVar1 = (this->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FArrangedWidget>)&(this->Widgets).Array;
      if (FVar1 != (ForElementType<FArrangedWidget>)0x0) {
        FVar8 = FVar1;
      }
      FGeometry::ToString((FGeometry *)((longlong)FVar8 + lVar10),&local_38);
      FVar2 = ((FGeometry *)((longlong)FVar8 + lVar10))[1].Size;
      (**(code **)(*(longlong *)FVar2 + 0x1e0))(FVar2,local_48);
      ::FString::PrintfImpl(&local_58,L"%s @ %s");
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar9 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar9);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::AppendChars(__return_storage_ptr__,L"\n",1);
      lVar10 = lVar10 + -0x48;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  return __return_storage_ptr__;
}

