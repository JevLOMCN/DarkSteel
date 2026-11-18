// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 8

// FWeakWidgetPath @ 1424eb8f0

/* WARNING: Enum "Type": Some values do not have unique names */

FWeakWidgetPath * __thiscall
FWeakWidgetPath::FWeakWidgetPath(FWeakWidgetPath *this,FWidgetPath *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  ForElementType<FArrangedWidget> FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FWeakWidgetPath *pFVar7;
  ForElementType<FArrangedWidget> FVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_28;
  longlong local_20;
  
  uVar11 = 0;
  (this->Widgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Widgets).ArrayNum = 0;
  (this->Widgets).ArrayMax = 0;
  (this->Window).Object = (param_1->TopLevelWindow).Object;
  pTVar1 = (param_1->TopLevelWindow).SharedReferenceCount.ReferenceController;
  (this->Window).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  uVar12 = uVar11;
  if (0 < (param_1->Widgets).Array.ArrayNum) {
    do {
      uVar10 = (uint)uVar11;
      uVar5 = 0;
      if ((int)uVar10 < (param_1->Widgets).Array.ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FWeakWidgetPath *)(*pcVar3)();
        return pFVar7;
      }
      FVar2 = (param_1->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<FArrangedWidget>)&(param_1->Widgets).Array;
      if (FVar2 != (ForElementType<FArrangedWidget>)0x0) {
        FVar8 = FVar2;
      }
      local_28 = *(undefined8 *)(uVar12 + 0x38 + (longlong)FVar8);
      local_20 = *(longlong *)(uVar12 + 0x40 + (longlong)FVar8);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
        UNLOCK();
      }
      pFVar9 = (this->Widgets).AllocatorInstance.Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_28) &&
          ((FScriptContainerElement *)&local_28 < pFVar9 + (longlong)(this->Widgets).ArrayMax * 0x10
          )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FWeakWidgetPath *)(*pcVar3)();
        return pFVar7;
      }
      iVar6 = (this->Widgets).ArrayNum;
      if (iVar6 == (this->Widgets).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,&(this->Widgets).ArrayMax);
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      (this->Widgets).ArrayNum = iVar6 + 1;
      pFVar9 = (this->Widgets).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar9 = local_28;
      *(longlong *)(pFVar9 + 8) = local_20;
      local_20 = 0;
      local_28 = 0;
      uVar12 = uVar12 + 0x48;
    } while ((int)(uVar10 + 1) < (param_1->Widgets).Array.ArrayNum);
  }
  return this;
}

// ContainsWidget @ 142505680

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWeakWidgetPath::ContainsWidget(FWeakWidgetPath *this,SWidget *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  atomic<int> aVar8;
  SWidget *pSVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  
  if (param_1 != (SWidget *)0x0) {
    iVar12 = (this->Widgets).ArrayNum;
    uVar11 = 0;
    if (0 < iVar12) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar12) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        pFVar1 = (this->Widgets).AllocatorInstance.Data;
        pSVar9 = (SWidget *)0x0;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar10 + 8);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          aVar4 = pTVar2->SharedReferenceCount;
          do {
            if (aVar4 == (atomic<int>)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              goto LAB_142505748;
            }
            LOCK();
            aVar8 = pTVar2->SharedReferenceCount;
            bVar5 = aVar4 == aVar8;
            if (bVar5) {
              pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
              aVar8 = aVar4;
            }
            UNLOCK();
            aVar4 = aVar8;
          } while (!bVar5);
          pSVar9 = *(SWidget **)(pFVar1 + lVar10);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pSVar9 == param_1) {
          return true;
        }
LAB_142505748:
        iVar12 = (this->Widgets).ArrayNum;
        uVar11 = uVar11 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((int)uVar11 < iVar12);
    }
  }
  return false;
}

// ToNextFocusedPath @ 142520170

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWeakWidgetPath::ToNextFocusedPath
          (FWeakWidgetPath *this,FWidgetPath *__return_storage_ptr__,EUINavigation param_1)

{
  FArrangedWidget *pFVar1;
  FDestructionSentinel local_68;
  undefined1 local_50 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  EUINavigationRule local_18;
  
  pFVar1 = FArrangedWidget::GetNullWidget();
  local_20 = 0;
  local_18 = Escape;
  local_50._0_8_ = (SWidget *)0x0;
  local_50._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_50._16_8_ = (SWidget *)0x0;
  local_50._24_8_ = (TReferenceControllerBase<1> *)0x0;
  local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  ToNextFocusedPath(this,__return_storage_ptr__,param_1,(FNavigationReply *)local_50,pFVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_30,(FWriteAccessScope *)&local_68);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_50._24_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_50._8_8_);
  return __return_storage_ptr__;
}

// ToNextFocusedPath @ 142520280

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWeakWidgetPath::ToNextFocusedPath
          (FWeakWidgetPath *this,FWidgetPath *__return_storage_ptr__,EUINavigation param_1,
          FNavigationReply *param_2,FArrangedWidget *param_3)

{
  int iVar1;
  ForElementType<FArrangedWidget> FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  EVisibility EVar5;
  bool bVar6;
  bool bVar7;
  atomic<int> aVar8;
  FWidgetPath *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ForElementType<FArrangedWidget> FVar13;
  TReferenceControllerBase<1> *pTVar14;
  
  if ((1 < (byte)(param_1 - Next)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NavigationType == EUINavigation::Next || NavigationType == EUINavigation::Previous"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
                         ,0x1bb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FWidgetPath *)(*pcVar3)();
    return pFVar9;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
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
  ToWidgetPath(this,__return_storage_ptr__,Truncate,(FPointerEvent *)0x0,EVar5);
  iVar1 = (this->Widgets).ArrayNum;
  uVar10 = iVar1 - 1;
  uVar11 = 0;
  if ((int)uVar10 < iVar1) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FWidgetPath *)(*pcVar3)();
    return pFVar9;
  }
  pTVar14 = *(TReferenceControllerBase<1> **)
             ((this->Widgets).AllocatorInstance.Data +
             (longlong)(this->Widgets).ArrayNum * 0x10 + -8);
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar14->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar8 = pTVar14->SharedReferenceCount;
      bVar6 = aVar4 == aVar8;
      if (bVar6) {
        pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar8 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar8;
    } while (!bVar6);
  }
  uVar11 = (__return_storage_ptr__->Widgets).Array.ArrayNum - 1;
  lVar12 = (longlong)(int)uVar11 * 0x48;
  do {
    if ((int)uVar11 < 0) break;
    bVar6 = FWidgetPath::MoveFocus(__return_storage_ptr__,uVar11,param_1,true);
    if (!bVar6) {
      uVar10 = 0;
      if ((int)uVar11 < (__return_storage_ptr__->Widgets).Array.ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FWidgetPath *)(*pcVar3)();
        return pFVar9;
      }
      FVar2 = (__return_storage_ptr__->Widgets).Array.AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FArrangedWidget>)&(__return_storage_ptr__->Widgets).Array;
      if (FVar2 != (ForElementType<FArrangedWidget>)0x0) {
        FVar13 = FVar2;
      }
      if ((param_3->Widget).Object == *(SWidget **)(lVar12 + 0x38 + (longlong)FVar13)) {
        if (param_2->BoundaryRule == Stop) break;
        if (param_2->BoundaryRule == Wrap) {
          FWidgetPath::MoveFocus(__return_storage_ptr__,uVar11,param_1,false);
          break;
        }
      }
    }
    uVar11 = uVar11 - 1;
    lVar12 = lVar12 + -0x48;
  } while (!bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return __return_storage_ptr__;
}

// ToWidgetPath @ 142520df0

/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetPath * __thiscall
FWeakWidgetPath::ToWidgetPath
          (FWeakWidgetPath *this,FWidgetPath *__return_storage_ptr__,Type param_1,
          FPointerEvent *param_2,EVisibility param_3)

{
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
  ToWidgetPath(this,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// ToWidgetPath @ 142520e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __thiscall
FWeakWidgetPath::ToWidgetPath
          (FWeakWidgetPath *this,FWidgetPath *param_1,Type param_2,FPointerEvent *param_3,
          EVisibility param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FDeprecateSlateVector2D FVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  atomic<int> aVar10;
  FScriptContainerElement FVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  FDeprecateSlateVector2D FVar18;
  FDeprecateSlateVector2D FVar19;
  FDeprecateSlateVector2D FVar20;
  FDeprecateSlateVector2D FVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool bVar27;
  bool bVar28;
  atomic<int> aVar29;
  Result RVar30;
  int iVar31;
  uint uVar32;
  TStatId TVar33;
  SWidget *pSVar34;
  FDeprecateSlateVector2D *pFVar35;
  SWidget *pSVar36;
  FGeometry *pFVar37;
  TSharedRef<SWidget,1> *pTVar38;
  FWidgetPath *pFVar39;
  longlong lVar40;
  ForElementType<FArrangedWidget> FVar41;
  ForElementType<FArrangedWidget> FVar42;
  ForAnyElementType FVar43;
  uint uVar44;
  uint uVar45;
  SWindow *pSVar46;
  uint uVar47;
  SWindow *pSVar48;
  SWindow *pSVar49;
  TReferenceControllerBase<1> *pTVar50;
  SWindow *pSVar51;
  bool bVar52;
  undefined1 auStackY_b28 [32];
  undefined1 local_ad7 [7];
  ForAnyElementType local_ad0;
  int local_ac8;
  int local_ac4;
  ForAnyElementType local_ac0;
  undefined8 local_ab8;
  ForAnyElementType local_ab0;
  int local_aa8;
  int iStack_aa4;
  SWindow *local_aa0;
  TReferenceControllerBase<1> *local_a98;
  SWidget *local_a90;
  Type local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  TSharedPtr<SWidget,1> local_a70;
  FCycleCounter local_a60;
  FDeprecateSlateVector2D local_a50;
  FDeprecateSlateVector2D FStack_a48;
  FScriptContainerElement local_a40;
  FDeprecateSlateVector2D local_a38;
  FDeprecateSlateVector2D FStack_a30;
  undefined1 local_a28;
  TSharedPtr<SWidget,1> local_a20;
  FPointerEvent *local_a10;
  FWidgetPath *local_a08;
  TReferenceControllerBase<1> *local_a00;
  SWindow *local_9f8;
  TSharedRef<SWidget,1> local_9f0;
  FSourceLocation local_9d8;
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double local_9a0;
  FWidgetAndPointer *local_998;
  int iStack_990;
  undefined4 uStack_98c;
  double local_988;
  double local_980;
  double local_978;
  double local_970;
  FWidgetAndPointer *local_968;
  int iStack_960;
  undefined4 uStack_95c;
  TArrayView<FWidgetAndPointer,int> local_958;
  TArrayView<FWidgetAndPointer,int> local_948;
  FDeprecateSlateVector2D local_938;
  FDeprecateSlateVector2D aFStack_930 [2];
  FDeprecateSlateVector2D local_920;
  FDeprecateSlateVector2D FStack_918;
  TSharedRef<SWidget,1> local_908;
  undefined1 local_8f8 [20];
  undefined1 local_8e4 [20];
  undefined1 local_8d0 [16];
  FDeprecateSlateVector2D local_8c0;
  FDeprecateSlateVector2D FStack_8b8;
  FDeprecateSlateVector2D local_8b0;
  FDeprecateSlateVector2D FStack_8a8;
  FDeprecateSlateVector2D local_8a0;
  FGeometry local_898;
  FWidgetAndPointer local_858;
  FWidgetAndPointer local_7f8;
  FWidgetAndPointer local_798;
  FWidgetAndPointer local_738;
  FDeprecateSlateVector2D local_6d8;
  longlong lStack_6d0;
  longlong local_6c8;
  longlong lStack_6c0;
  longlong local_6b8;
  longlong lStack_6b0;
  longlong local_6a8;
  FDeprecateSlateVector2D local_688;
  FDeprecateSlateVector2D FStack_680;
  FDeprecateSlateVector2D local_678;
  FDeprecateSlateVector2D FStack_670;
  FDeprecateSlateVector2D local_668;
  FDeprecateSlateVector2D FStack_660;
  FDeprecateSlateVector2D local_658;
  FArrangedChildren local_638;
  FDeprecateSlateVector2D local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  longlong local_4c8;
  FWidgetPath local_4a8;
  FWidgetPath local_348;
  FWidgetPath local_1e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_b28;
  pSVar51 = (SWindow *)0x0;
  local_aa0 = (SWindow *)((ulonglong)local_aa0 & 0xffffffff00000000);
  local_a88 = param_2;
  local_a10 = param_3;
  local_a08 = param_1;
  TVar33 = FThreadSafeStaticStatInner<FStat_STAT_WeakToStrong_WidgetPath,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_WeakToStrong_WidgetPath,1> *)
                      &StatPtr_STAT_WeakToStrong_WidgetPath);
  local_9d8.Impl._Line = 0x10e;
  local_9d8.Impl._Column = 2;
  local_9d8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Layout\\WidgetPath.cpp"
  ;
  local_9d8.Impl._Function =
       "enum FWeakWidgetPath::EPathResolutionResult::Result __cdecl FWeakWidgetPath::ToWidgetPath(class FWidgetPath &,enum FWeakWidgetPath::EInterruptedPathHandling::Type,const struct FPointerEvent *,const struct EVisibility) const"
  ;
  local_a60.StatId.ComparisonIndex.Value = 0;
  local_a60.StatId.Number = 0;
  local_a60.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_a60,*(TStatIdData **)&(TVar33.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_9d8);
  local_a00 = (this->Window).WeakReferenceCount.ReferenceController;
  local_ab0.Data = (FScriptContainerElement *)0x0;
  local_aa8 = 0;
  iStack_aa4 = 0;
  pSVar46 = pSVar51;
  pSVar48 = pSVar51;
  pTVar50 = local_a00;
  pSVar49 = pSVar51;
  if (local_a00 != (TReferenceControllerBase<1> *)0x0) {
    aVar10 = local_a00->SharedReferenceCount;
    do {
      if (aVar10 == (atomic<int>)0x0) {
        local_a00 = (TReferenceControllerBase<1> *)0x0;
        pTVar50 = local_a00;
        pSVar49 = (SWindow *)0x0;
        goto LAB_142520f50;
      }
      LOCK();
      aVar29 = local_a00->SharedReferenceCount;
      bVar52 = aVar10 == aVar29;
      if (bVar52) {
        local_a00->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
        aVar29 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar29;
    } while (!bVar52);
    pSVar49 = (this->Window).Object;
  }
LAB_142520f50:
  do {
    uVar44 = (uint)pSVar46;
    if (((int)uVar44 < 0) || ((this->Widgets).ArrayNum <= (int)uVar44)) goto LAB_142521191;
    uVar47 = (int)pSVar48 + 1;
    if (999 < (int)uVar47) {
      local_ad7[0] = 0;
      bVar52 = `FWeakWidgetPath::ToWidgetPath'::__l5::<lambda_1>::operator()(local_ad7);
      if (!bVar52) {
        local_4a8.Widgets.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
        local_4a8.Widgets.Array.AllocatorInstance.SecondaryData =
             (ForElementType<FArrangedWidget>)0x0;
        local_4a8.TopLevelWindow.Object = (SWindow *)0x0;
        local_4a8.TopLevelWindow.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_4a8.Widgets.Array.ArrayNum = 0;
        local_4a8.Widgets.Array.ArrayMax = 4;
        local_4a8.Widgets.bAllow3DWidgets = false;
        local_4a8.VirtualPointerPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4a8.VirtualPointerPositions.ArrayNum = 0;
        local_4a8.VirtualPointerPositions.ArrayMax = 0;
        FWidgetPath::operator=(param_1,&local_4a8);
        if (local_4a8.VirtualPointerPositions.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4a8.VirtualPointerPositions.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4a8.TopLevelWindow.SharedReferenceCount.ReferenceController);
        FVar42 = local_4a8.Widgets.Array.AllocatorInstance.SecondaryData;
        FVar41 = (ForElementType<FArrangedWidget>)&local_4a8.Widgets.Array;
        if (local_4a8.Widgets.Array.AllocatorInstance.SecondaryData !=
            (ForElementType<FArrangedWidget>)0x0) {
          FVar41 = local_4a8.Widgets.Array.AllocatorInstance.SecondaryData;
        }
        DestructItems<FArrangedWidget,int>
                  ((FArrangedWidget *)FVar41,local_4a8.Widgets.Array.ArrayNum);
        if (FVar42 != (ForElementType<FArrangedWidget>)0x0) {
          FMemory::Free((void *)FVar42);
        }
        RVar30 = Truncated;
        goto LAB_1425223c1;
      }
    }
    uVar45 = 0;
    if ((int)uVar44 < (this->Widgets).ArrayNum) {
      uVar45 = ~uVar44 >> 0x1f;
    }
    if ((uVar45 == 0) &&
       (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar52)) {
      pcVar3 = (code *)swi(3);
      RVar30 = (*pcVar3)();
      return RVar30;
    }
    pFVar2 = (this->Widgets).AllocatorInstance.Data;
    local_a70.Object = (SWidget *)0x0;
    local_a70.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar44 * 0x10 + 8);
    if (local_a70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar10 = (local_a70.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar10 == (atomic<int>)0x0) {
          local_a70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14252101e;
        }
        LOCK();
        aVar29 = (local_a70.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar52 = aVar10 == aVar29;
        if (bVar52) {
          (local_a70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar10 + 1);
          aVar29 = aVar10;
        }
        UNLOCK();
        aVar10 = aVar29;
      } while (!bVar52);
      if (local_a70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        local_a70.Object = *(SWidget **)(pFVar2 + (longlong)(int)uVar44 * 0x10);
      }
    }
LAB_14252101e:
    if (((local_ab0.Data <= &local_a70) &&
        (&local_a70 < (TSharedPtr<SWidget,1> *)(local_ab0.Data + (longlong)iStack_aa4 * 0x10))) &&
       (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar52)) {
      pcVar3 = (code *)swi(3);
      RVar30 = (*pcVar3)();
      return RVar30;
    }
    if (local_aa8 == iStack_aa4) {
      local_aa8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_ab0,&iStack_aa4);
    }
    lVar40 = (longlong)local_aa8;
    local_aa8 = local_aa8 + 1;
    *(SWidget **)&local_ab0.Data[lVar40 * 0x10].field_0x0 = local_a70.Object;
    *(TReferenceControllerBase<1> **)(local_ab0.Data + lVar40 * 0x10 + 8) =
         local_a70.SharedReferenceCount.ReferenceController;
    local_a70.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_a70.Object = (SWidget *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar46 = (SWindow *)(ulonglong)(uVar44 + 1);
    pSVar48 = (SWindow *)(ulonglong)uVar47;
  } while( true );
LAB_142522270:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a98);
  pSVar49 = (SWindow *)((longlong)&pSVar49->_padding_ + 1);
  pSVar46 = (SWindow *)(ulonglong)(uVar47 + 1);
  local_aa0 = pSVar49;
  local_a40 = FVar11;
  if (!bVar52) {
LAB_14252228e:
    FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
    if (local_638.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_638.Array.ArrayNum);
    if (local_638.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_638.Array.AllocatorInstance.SecondaryData);
    }
    goto LAB_1425222bf;
  }
  goto LAB_142521d10;
LAB_142521191:
  bVar52 = false;
  uVar44 = 0;
  if (GSlateFastWidgetPath == false) {
    local_ac0.Data = (FScriptContainerElement *)0x0;
    local_ab8 = 0;
    if (pSVar49 != (SWindow *)0x0) {
      SWindow::GetWindowGeometryInScreen(pSVar49,(FGeometry *)local_8d0);
      FVar21 = local_8a0;
      FVar20 = FStack_8a8;
      FVar19 = local_8b0;
      FVar18 = FStack_8b8;
      FVar4 = local_8c0;
      uVar17 = local_8d0._8_8_;
      uVar16 = local_8d0._0_8_;
      if (pTVar50 == (TReferenceControllerBase<1> *)0x0) {
        local_688 = (FDeprecateSlateVector2D)local_8d0._0_8_;
        FStack_680 = (FDeprecateSlateVector2D)local_8d0._8_8_;
        local_678 = local_8c0;
        FStack_670 = FStack_8b8;
        local_668 = local_8b0;
        FStack_660 = FStack_8a8;
        local_658 = local_8a0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        local_688 = (FDeprecateSlateVector2D)local_8d0._0_8_;
        FStack_680 = (FDeprecateSlateVector2D)local_8d0._8_8_;
        local_678 = local_8c0;
        FStack_670 = FStack_8b8;
        local_668 = local_8b0;
        FStack_660 = FStack_8a8;
        local_658 = local_8a0;
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50)
        ;
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_7f8._padding_ = (longlong)FVar21;
      local_7f8._padding_ = (longlong)FVar20;
      local_7f8._padding_ = (longlong)FVar19;
      local_7f8._padding_ = (longlong)FVar18;
      local_7f8._padding_ = (longlong)FVar4;
      local_7f8._padding_ = uVar17;
      local_7f8._padding_ = uVar16;
      local_7f8.OptionalPointerPosition.bIsSet = false;
      local_7f8._padding_ = (longlong)pSVar49;
      local_7f8._padding_ = (longlong)pTVar50;
      if (((local_ac0.Data <= &local_7f8) &&
          (&local_7f8 < (FWidgetAndPointer *)(local_ac0.Data + (longlong)local_ab8._4_4_ * 0x60)))
         && (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar52)) {
        pcVar3 = (code *)swi(3);
        RVar30 = (*pcVar3)();
        return RVar30;
      }
      iVar31 = (int)local_ab8;
      if ((int)local_ab8 == local_ab8._4_4_) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x860,&local_ac0,(int *)((longlong)&local_ab8 + 4));
      }
      local_ab8 = CONCAT44(local_ab8._4_4_,iVar31 + 1);
      lVar40 = (longlong)iVar31 * 0x60;
      *(longlong *)&local_ac0.Data[lVar40].field_0x0 = local_7f8._padding_;
      *(longlong *)(local_ac0.Data + lVar40 + 8) = local_7f8._padding_;
      *(FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x10) =
           (FDeprecateSlateVector2D)local_7f8._padding_;
      ((FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x10))[1] =
           (FDeprecateSlateVector2D)local_7f8._padding_;
      *(FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x20) =
           (FDeprecateSlateVector2D)local_7f8._padding_;
      ((FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x20))[1] =
           (FDeprecateSlateVector2D)local_7f8._padding_;
      *(longlong *)(local_ac0.Data + lVar40 + 0x30) = local_7f8._padding_;
      *(longlong *)(local_ac0.Data + lVar40 + 0x38) = local_7f8._padding_;
      *(longlong *)(local_ac0.Data + lVar40 + 0x40) = local_7f8._padding_;
      if ((TReferenceControllerBase<1> *)local_7f8._padding_ != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        *(atomic<int> *)(local_7f8._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_7f8._padding_ + 8) + 1);
        UNLOCK();
      }
      local_ac0.Data[lVar40 + 0x58] = (FScriptContainerElement)0x0;
      local_ac0.Data[lVar40 + 0x58] =
           (FScriptContainerElement)local_7f8.OptionalPointerPosition.bIsSet;
      if ((FScriptContainerElement)local_7f8.OptionalPointerPosition.bIsSet !=
          (FScriptContainerElement)0x0) {
        *(FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x48) =
             local_7f8.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
        ((FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x48))[1] =
             local_7f8.OptionalPointerPosition.TypedValue.LastCursorPosition;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_7f8._padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50);
      local_638.VisibilityFilter = (EVisibility)(EVisibility)param_4.Value.Value;
      local_638.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
      local_638.Array.ArrayNum = 0;
      local_638.Array.ArrayMax = 4;
      local_638.bAllow3DWidgets = true;
      local_a40 = (FScriptContainerElement)0x0;
      pSVar49 = pSVar51;
      pSVar46 = pSVar51;
LAB_142521d05:
      bVar52 = true;
LAB_142521d10:
      uVar47 = (uint)pSVar46;
      local_aa0 = pSVar49;
      if (local_aa8 + -1 <= (int)uVar47) goto LAB_14252228e;
      uVar45 = uVar44;
      if ((int)uVar47 < local_aa8) {
        uVar45 = ~uVar47 >> 0x1f;
      }
      if ((uVar45 == 0) &&
         (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar52)) {
        pcVar3 = (code *)swi(3);
        RVar30 = (*pcVar3)();
        return RVar30;
      }
      pSVar36 = *(SWidget **)&local_ab0.Data[(longlong)pSVar49 * 0x10].field_0x0;
      local_a98 = *(TReferenceControllerBase<1> **)(local_ab0.Data + (longlong)pSVar49 * 0x10 + 8);
      if (local_a98 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a98->SharedReferenceCount = (atomic<int>)((int)local_a98->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar52 = false;
      local_a90 = pSVar36;
      if (pSVar36 != (SWidget *)0x0) {
        if (local_638.Array.ArrayMax < 0) {
          FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
          if (local_638.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_638.Array.ArrayNum);
          local_638.Array.ArrayNum = 0;
          if (local_638.Array.ArrayMax != 0) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FArrangedWidget>_>
                      (0x48,8,0,&local_638.Array.AllocatorInstance,0,&local_638.Array.ArrayMax);
          }
        }
        else {
          FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
          if (local_638.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
          }
          DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_638.Array.ArrayNum);
          local_638.Array.ArrayNum = 0;
        }
        SWidget::ArrangeChildren(pSVar36,(FGeometry *)local_8d0,&local_638,true);
        pSVar46 = pSVar51;
        pSVar48 = pSVar51;
        do {
          uVar45 = (uint)pSVar46;
          if (local_638.Array.ArrayNum <= (int)uVar45) break;
          uVar32 = uVar44;
          if ((int)uVar45 < local_638.Array.ArrayNum) {
            uVar32 = ~uVar45 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar3 = (code *)swi(3);
            RVar30 = (*pcVar3)();
            return RVar30;
          }
          FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
          if (local_638.Array.AllocatorInstance.SecondaryData !=
              (ForElementType<FArrangedWidget>)0x0) {
            FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
          }
          uVar32 = uVar44;
          if ((int)(uVar47 + 1) < local_aa8) {
            uVar32 = ~(uVar47 + 1) >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar27)) {
            pcVar3 = (code *)swi(3);
            RVar30 = (*pcVar3)();
            return RVar30;
          }
          if ((*(longlong *)
                &local_ab0.Data[(longlong)((longlong)&pSVar49->_padding_ + 1) * 0x10].field_0x0 != 0
              ) && (lVar40 = *(longlong *)((longlong)&pSVar48->_padding_ + (longlong)FVar42),
                   *(longlong *)
                    &local_ab0.Data[(longlong)((longlong)&pSVar49->_padding_ + 1) * 0x10].field_0x0
                   == lVar40)) {
            if ((local_a10 != (FPointerEvent *)0x0) && (local_a40 == (FScriptContainerElement)0x0))
            {
              local_a80 = local_a10->ScreenSpacePosition;
              local_a78 = local_a10->LastScreenSpacePosition;
              local_9b8 = (double)(float)local_a78;
              local_9b0 = (double)local_a78._4_4_;
              local_9a8 = (double)(float)local_a80;
              local_9a0 = (double)local_a80._4_4_;
              pFVar35 = (FDeprecateSlateVector2D *)
                        (**(code **)(local_a90->_padding_ + 0x128))
                                  (local_a90,local_8e4,lVar40,local_8d0);
              if ((pFVar35 != &local_a50) && (*(char *)(pFVar35 + 2) != '\0')) {
                local_a50 = *pFVar35;
                FStack_a48 = pFVar35[1];
                local_a40 = (FScriptContainerElement)0x1;
              }
            }
            bVar52 = true;
            if (local_a40 != (FScriptContainerElement)0x0) {
              local_920 = local_a50;
              FStack_918 = FStack_a48;
            }
            uVar32 = uVar44;
            if ((int)uVar45 < local_638.Array.ArrayNum) {
              uVar32 = ~uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar3 = (code *)swi(3);
              RVar30 = (*pcVar3)();
              return RVar30;
            }
            FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
            if (local_638.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
            }
            plVar1 = (longlong *)((longlong)&pSVar48->_padding_ + (longlong)FVar42);
            local_798._padding_ = *plVar1;
            local_798._padding_ = plVar1[1];
            local_798._padding_ =
                 *(longlong *)((undefined1 *)((longlong)FVar42 + 0x10) + (longlong)pSVar48);
            local_798._padding_ =
                 *(longlong *)
                  ((longlong)((undefined1 *)((longlong)FVar42 + 0x10) + (longlong)pSVar48) + 8);
            plVar1 = (longlong *)((longlong)((longlong)FVar42 + 0x20) + (longlong)pSVar48);
            local_798._padding_ = *plVar1;
            local_798._padding_ = plVar1[1];
            local_798._padding_ =
                 *(longlong *)((undefined1 *)((longlong)FVar42 + 0x30) + (longlong)pSVar48);
            local_798._padding_ =
                 *(longlong *)
                  ((longlong)&pSVar48->_padding_ +
                  (longlong)&((TSharedRef<SWidget,1> *)((longlong)FVar42 + 0x38))->Object);
            local_798._padding_ =
                 *(longlong *)
                  ((longlong)&pSVar48->_padding_ +
                  (longlong)
                  &((FSharedReferencer<1> *)((longlong)FVar42 + 0x40))->ReferenceController);
            if ((TReferenceControllerBase<1> *)local_798._padding_ !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              ((TReferenceControllerBase<1> *)local_798._padding_)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)((TReferenceControllerBase<1> *)local_798._padding_)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_798.OptionalPointerPosition.bIsSet = (bool)local_a40;
            if (local_a40 != (FScriptContainerElement)0x0) {
              local_798.OptionalPointerPosition.TypedValue.CurrentCursorPosition = local_920;
              local_798.OptionalPointerPosition.TypedValue.LastCursorPosition = FStack_918;
            }
            if (((local_ac0.Data <= &local_798) &&
                (&local_798 <
                 (FWidgetAndPointer *)(local_ac0.Data + (longlong)local_ab8._4_4_ * 0x60))) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar27)) {
              pcVar3 = (code *)swi(3);
              RVar30 = (*pcVar3)();
              return RVar30;
            }
            iVar31 = (int)local_ab8;
            if ((int)local_ab8 == local_ab8._4_4_) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x860,&local_ac0,(int *)((longlong)&local_ab8 + 4));
            }
            local_ab8 = CONCAT44(local_ab8._4_4_,iVar31 + 1);
            lVar40 = (longlong)iVar31 * 0x60;
            *(longlong *)&local_ac0.Data[lVar40].field_0x0 = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 8) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x10) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x10 + 8) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x20) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x20 + 8) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x30) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x38) = local_798._padding_;
            *(longlong *)(local_ac0.Data + lVar40 + 0x40) = local_798._padding_;
            if ((TReferenceControllerBase<1> *)local_798._padding_ !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *(atomic<int> *)(local_798._padding_ + 8) =
                   (atomic<int>)((int)*(atomic<int> *)(local_798._padding_ + 8) + 1);
              UNLOCK();
            }
            local_ac0.Data[lVar40 + 0x58] = (FScriptContainerElement)0x0;
            local_ac0.Data[lVar40 + 0x58] =
                 (FScriptContainerElement)local_798.OptionalPointerPosition.bIsSet;
            if ((FScriptContainerElement)local_798.OptionalPointerPosition.bIsSet !=
                (FScriptContainerElement)0x0) {
              *(FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x48) =
                   local_798.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
              ((FDeprecateSlateVector2D *)(local_ac0.Data + lVar40 + 0x48))[1] =
                   local_798.OptionalPointerPosition.TypedValue.LastCursorPosition;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_798._padding_);
            uVar32 = uVar44;
            if ((int)uVar45 < local_638.Array.ArrayNum) {
              uVar32 = ~uVar45 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar27)) {
              pcVar3 = (code *)swi(3);
              RVar30 = (*pcVar3)();
              return RVar30;
            }
            FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
            if (local_638.Array.AllocatorInstance.SecondaryData !=
                (ForElementType<FArrangedWidget>)0x0) {
              FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
            }
            pFVar35 = (FDeprecateSlateVector2D *)((longlong)&pSVar48->_padding_ + (longlong)FVar42);
            if ((FDeprecateSlateVector2D *)local_8d0 != pFVar35) {
              local_8d0._0_8_ = *pFVar35;
              local_8d0._8_8_ = pFVar35[1];
              local_8c0 = pFVar35[2];
              FStack_8b8 = pFVar35[3];
              local_8b0 = pFVar35[4];
              FStack_8a8 = pFVar35[5];
              local_8a0 = pFVar35[6];
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_a98);
              pSVar46 = (SWindow *)(ulonglong)(uVar47 + 1);
              pSVar49 = (SWindow *)((longlong)&local_aa0->_padding_ + 1);
              goto LAB_142521d05;
            }
          }
          pSVar46 = (SWindow *)(ulonglong)(uVar45 + 1);
          pSVar48 = (SWindow *)&pSVar48->_padding_;
          pSVar49 = local_aa0;
        } while (!bVar52);
      }
      FVar11 = local_a40;
      if ((bVar52) || (local_a88 != ReturnInvalid)) goto LAB_142522270;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a98)
      ;
      FVar42 = (ForElementType<FArrangedWidget>)&local_638.Array;
      if (local_638.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FVar42 = local_638.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_638.Array.ArrayNum);
      if (local_638.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_638.Array.AllocatorInstance.SecondaryData);
      }
      RVar30 = Truncated;
      goto LAB_142522382;
    }
LAB_1425222bf:
    iVar31 = (int)local_ab8;
    local_998 = (FWidgetAndPointer *)local_ac0.Data;
    if (((int)local_ab8 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar3 = (code *)swi(3);
      RVar30 = (*pcVar3)();
      return RVar30;
    }
    iStack_990 = iVar31;
    local_948._12_4_ = uStack_98c;
    local_948.ArrayNum = iVar31;
    local_948.DataPtr = local_998;
    pFVar39 = FWidgetPath::FWidgetPath(&local_1e8,&local_948);
    FWidgetPath::operator=(local_a08,pFVar39);
    if (local_1e8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1e8.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e8.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar42 = (ForElementType<FArrangedWidget>)&local_1e8.Widgets.Array;
    if (local_1e8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar42 = local_1e8.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_1e8.Widgets.Array.ArrayNum);
    if (local_1e8.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_1e8.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    RVar30 = (Result)!bVar52;
LAB_142522382:
    DestructItems<FWidgetAndPointer,int>((FWidgetAndPointer *)local_ac0.Data,(int)local_ab8);
    FVar43.Data = local_ac0.Data;
  }
  else {
    local_ad0.Data = (FScriptContainerElement *)0x0;
    local_ac8 = 0;
    local_ac4 = 0;
    if (pSVar49 != (SWindow *)0x0) {
      bVar52 = true;
      SWindow::GetWindowGeometryInScreen(pSVar49,&local_898);
      uVar26 = local_898._48_8_;
      uVar25 = local_898.AccumulatedRenderTransform._12_8_;
      uVar23 = local_898.AccumulatedRenderTransform.M.M._4_8_;
      uVar22 = local_898._24_8_;
      uVar17 = local_898._16_8_;
      uVar16 = local_898._8_8_;
      FVar4 = local_898.Size;
      if (pTVar50 == (TReferenceControllerBase<1> *)0x0) {
        local_6d8 = local_898.Size;
        lStack_6d0 = local_898._8_8_;
        local_6c8 = local_898._16_8_;
        lStack_6c0 = local_898._24_8_;
        local_6b8._0_4_ = local_898.AccumulatedRenderTransform.M.M[0][1];
        local_6b8._4_4_ = local_898.AccumulatedRenderTransform.M.M[1][0];
        lStack_6b0 = local_898.AccumulatedRenderTransform._12_8_;
        local_6a8 = local_898._48_8_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        local_6d8 = local_898.Size;
        lStack_6d0 = local_898._8_8_;
        local_6c8 = local_898._16_8_;
        lStack_6c0 = local_898._24_8_;
        local_6b8._0_4_ = local_898.AccumulatedRenderTransform.M.M[0][1];
        local_6b8._4_4_ = local_898.AccumulatedRenderTransform.M.M[1][0];
        lStack_6b0 = local_898.AccumulatedRenderTransform._12_8_;
        local_6a8 = local_898._48_8_;
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50)
        ;
        LOCK();
        pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar24 = local_898.AccumulatedRenderTransform.M.M._4_8_;
      local_858._padding_ = uVar26;
      local_858._padding_ = uVar25;
      local_898.AccumulatedRenderTransform.M.M[0][1] = (float)uVar23;
      local_898.AccumulatedRenderTransform.M.M[1][0] = SUB84(uVar23,4);
      local_858._padding_._0_4_ = local_898.AccumulatedRenderTransform.M.M[0][1];
      local_858._padding_._4_4_ = local_898.AccumulatedRenderTransform.M.M[1][0];
      local_858._padding_ = uVar22;
      local_858._padding_ = uVar17;
      local_858._padding_ = uVar16;
      local_858._padding_ = (longlong)FVar4;
      local_858.OptionalPointerPosition.bIsSet = false;
      local_898.AccumulatedRenderTransform.M.M._4_8_ = uVar24;
      local_858._padding_ = (longlong)pSVar49;
      local_858._padding_ = (longlong)pTVar50;
      if (((local_ad0.Data <= &local_858) &&
          (&local_858 < (FWidgetAndPointer *)(local_ad0.Data + (longlong)local_ac4 * 0x60))) &&
         (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar27)) {
        pcVar3 = (code *)swi(3);
        RVar30 = (*pcVar3)();
        return RVar30;
      }
      if (local_ac8 == local_ac4) {
        local_ac8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x860,&local_ad0,&local_ac4);
      }
      lVar40 = (longlong)local_ac8 * 0x60;
      *(longlong *)&local_ad0.Data[lVar40].field_0x0 = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 8) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x10) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x10 + 8) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x20) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x20 + 8) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x30) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x38) = local_858._padding_;
      *(longlong *)(local_ad0.Data + lVar40 + 0x40) = local_858._padding_;
      if ((TReferenceControllerBase<1> *)local_858._padding_ != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        *(atomic<int> *)(local_858._padding_ + 8) =
             (atomic<int>)((int)*(atomic<int> *)(local_858._padding_ + 8) + 1);
        UNLOCK();
      }
      local_ad0.Data[lVar40 + 0x58] = (FScriptContainerElement)0x0;
      local_ad0.Data[lVar40 + 0x58] =
           (FScriptContainerElement)local_858.OptionalPointerPosition.bIsSet;
      if ((FScriptContainerElement)local_858.OptionalPointerPosition.bIsSet !=
          (FScriptContainerElement)0x0) {
        *(FDeprecateSlateVector2D *)(local_ad0.Data + lVar40 + 0x48) =
             local_858.OptionalPointerPosition.TypedValue.CurrentCursorPosition;
        ((FDeprecateSlateVector2D *)(local_ad0.Data + lVar40 + 0x48))[1] =
             local_858.OptionalPointerPosition.TypedValue.LastCursorPosition;
      }
      local_ac8 = local_ac8 + 1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_858._padding_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar50);
      bVar27 = false;
      local_a28 = 0;
      local_a90 = (SWidget *)0x0;
      pSVar49 = local_9f8;
      pSVar46 = pSVar51;
      do {
        pSVar36 = local_a90;
        uVar47 = (uint)pSVar46;
        if (local_aa8 + -1 <= (int)uVar47) break;
        uVar45 = uVar44;
        if ((int)uVar47 < local_aa8) {
          uVar45 = ~uVar47 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar52)) {
          pcVar3 = (code *)swi(3);
          RVar30 = (*pcVar3)();
          return RVar30;
        }
        pSVar36 = *(SWidget **)(local_ab0.Data + (longlong)&pSVar36->_padding_);
        local_a20.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)
              (local_ab0.Data +
              (longlong)&((FWidgetProxyHandle *)&local_a90->_padding_)->InvalidationRootHandle);
        if (local_a20.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_a20.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a20.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        bVar52 = false;
        local_a20.Object = pSVar36;
        if ((pSVar36 != (SWidget *)0x0) &&
           (FSlateAttributeMetaData::UpdateOnlyVisibilityAttributes(pSVar36,DelayInvalidation),
           ((byte)pSVar36->VisibilityAttribute & (byte)param_4.Value.Value) != 0)) {
          TSharedPtr<SWidget,1>::ToSharedRef(&local_a20,&local_9f0);
          uVar45 = uVar44;
          if ((int)(uVar47 + 1) < local_aa8) {
            uVar45 = ~(uVar47 + 1) >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar3 = (code *)swi(3);
            RVar30 = (*pcVar3)();
            return RVar30;
          }
          local_a98 = (TReferenceControllerBase<1> *)
                      ((longlong)&local_a90->_padding_ +
                      (longlong)&((TSharedPtr<SWidget,1> *)(local_ab0.Data + 0x10))->Object);
          if ((SWidget *)local_a98->_padding_ != (SWidget *)0x0) {
            local_aa0 = (SWindow *)((ulonglong)local_aa0 | 1);
            pSVar34 = TSharedPtr<SWidget,1>::operator->((TSharedPtr<SWidget,1> *)local_a98);
            pSVar46 = (SWindow *)(pSVar34->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
            pSVar49 = pSVar46;
            if (pSVar46 != (SWindow *)0x0) {
              aVar10 = *(atomic<int> *)&pSVar46->_padding_;
              do {
                pSVar49 = pSVar51;
                if (aVar10 == (atomic<int>)0x0) goto LAB_1425215c6;
                LOCK();
                aVar29 = *(atomic<int> *)&pSVar46->_padding_;
                bVar28 = aVar10 == aVar29;
                if (bVar28) {
                  *(atomic<int> *)&pSVar46->_padding_ = (atomic<int>)((int)aVar10 + 1);
                  aVar29 = aVar10;
                }
                UNLOCK();
                aVar10 = aVar29;
              } while (!bVar28);
              pSVar34 = (pSVar34->ParentWidgetPtr).Object;
              pSVar49 = pSVar46;
              if ((pSVar34 != (SWidget *)0x0) && (pSVar34 == local_9f0.Object)) {
                bVar52 = true;
              }
            }
          }
LAB_1425215c6:
          if (((ulonglong)local_aa0 & 1) != 0) {
            local_aa0 = (SWindow *)((ulonglong)local_aa0 & 0xfffffffffffffffe);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)pSVar49);
          }
          bVar28 = false;
          if (bVar52) {
            pTVar50 = local_a98;
            if ((local_a10 != (FPointerEvent *)0x0) && (bVar27 == false)) {
              local_a78 = local_a10->ScreenSpacePosition;
              local_a80 = local_a10->LastScreenSpacePosition;
              if ((pSVar36 == (SWidget *)0x0) &&
                 (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar52)) {
                pcVar3 = (code *)swi(3);
                RVar30 = (*pcVar3)();
                return RVar30;
              }
              pTVar50 = local_a98;
              local_988 = (double)(float)local_a80;
              local_980 = (double)local_a80._4_4_;
              local_978 = (double)(float)local_a78;
              local_970 = (double)local_a78._4_4_;
              pFVar35 = (FDeprecateSlateVector2D *)
                        (**(code **)(pSVar36->_padding_ + 0x128))
                                  (pSVar36,local_8f8,(SWidget *)local_a98->_padding_,&local_898);
              if ((pFVar35 != &local_a38) && (*(char *)(pFVar35 + 2) != '\0')) {
                local_a38 = *pFVar35;
                FStack_a30 = pFVar35[1];
                bVar27 = true;
                local_a28 = 1;
              }
            }
            if (bVar27 != false) {
              local_938._0_4_ = local_a38._0_4_;
              local_938._4_4_ = local_a38._4_4_;
              aFStack_930[0]._0_4_ = FStack_a30._0_4_;
              aFStack_930[0]._4_4_ = FStack_a30._4_4_;
            }
            uVar15 = aFStack_930[0]._4_4_;
            uVar14 = aFStack_930[0]._0_4_;
            uVar13 = local_938._4_4_;
            uVar12 = local_938._0_4_;
            pSVar36 = TSharedPtr<SWidget,1>::operator->((TSharedPtr<SWidget,1> *)pTVar50);
            pFVar37 = SWidget::GetCachedGeometry(pSVar36);
            pTVar38 = TSharedPtr<SWidget,1>::ToSharedRef
                                ((TSharedPtr<SWidget,1> *)pTVar50,&local_908);
            lVar40 = *(longlong *)
                      ((longlong)&(pFVar37->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
            FVar4 = pFVar37->Size;
            lVar5 = *(longlong *)&pFVar37->Scale;
            lVar6 = *(longlong *)((longlong)&(pFVar37->AbsolutePosition).field0_0x0 + 4);
            lVar7 = *(longlong *)((longlong)&(pFVar37->Position).field0_0x0 + 4);
            pSVar36 = pTVar38->Object;
            lVar8 = *(longlong *)((pFVar37->AccumulatedRenderTransform).M.M[0] + 1);
            lVar9 = *(longlong *)((pFVar37->AccumulatedRenderTransform).M.M[1] + 1);
            pTVar50 = (pTVar38->SharedReferenceCount).ReferenceController;
            local_4f8 = FVar4;
            lStack_4f0 = lVar5;
            local_4e8 = lVar6;
            lStack_4e0 = lVar7;
            local_4d8 = lVar8;
            lStack_4d0 = lVar9;
            local_4c8 = lVar40;
            if (pTVar50 == (TReferenceControllerBase<1> *)0x0) {
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
            }
            else {
              LOCK();
              pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
              UNLOCK();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pTVar38->SharedReferenceCount).ReferenceController);
              LOCK();
              pTVar50->SharedReferenceCount = (atomic<int>)((int)pTVar50->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (bVar27 != false) {
              local_738.OptionalPointerPosition.TypedValue.CurrentCursorPosition._0_4_ = uVar12;
              local_738.OptionalPointerPosition.TypedValue.CurrentCursorPosition._4_4_ = uVar13;
              local_738.OptionalPointerPosition.TypedValue.LastCursorPosition._0_4_ = uVar14;
              local_738.OptionalPointerPosition.TypedValue.LastCursorPosition._4_4_ = uVar15;
            }
            local_738._padding_ = (longlong)FVar4;
            local_738._padding_ = lVar5;
            local_738._padding_ = lVar6;
            local_738._padding_ = lVar7;
            local_738._padding_ = lVar8;
            local_738._padding_ = lVar9;
            local_738._padding_ = lVar40;
            local_738._padding_ = (longlong)pSVar36;
            local_738._padding_ = (longlong)pTVar50;
            local_738.OptionalPointerPosition.bIsSet = bVar27;
            if (((local_ad0.Data <= &local_738) &&
                (&local_738 < (FWidgetAndPointer *)(local_ad0.Data + (longlong)local_ac4 * 0x60)))
               && (bVar52 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar52)) {
              pcVar3 = (code *)swi(3);
              RVar30 = (*pcVar3)();
              return RVar30;
            }
            if (local_ac8 == local_ac4) {
              local_ac8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x860,&local_ad0,&local_ac4);
            }
            lVar40 = (longlong)local_ac8;
            local_ac8 = local_ac8 + 1;
            FWidgetAndPointer::FWidgetAndPointer
                      ((FWidgetAndPointer *)(local_ad0.Data + lVar40 * 0x60),&local_738);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)local_738._padding_);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar50);
            pFVar37 = SWidget::GetCachedGeometry(local_9f0.Object);
            bVar28 = true;
            if (&local_898 != pFVar37) {
              local_898.Size = pFVar37->Size;
              local_898._8_8_ = *(undefined8 *)&pFVar37->Scale;
              local_898._16_8_ =
                   *(longlong *)((longlong)&(pFVar37->AbsolutePosition).field0_0x0 + 4);
              local_898._24_8_ = *(longlong *)((longlong)&(pFVar37->Position).field0_0x0 + 4);
              local_898.AccumulatedRenderTransform.M.M._4_8_ =
                   *(undefined8 *)((pFVar37->AccumulatedRenderTransform).M.M[0] + 1);
              local_898.AccumulatedRenderTransform._12_8_ =
                   *(undefined8 *)((pFVar37->AccumulatedRenderTransform).M.M[1] + 1);
              local_898._48_8_ =
                   *(longlong *)
                    ((longlong)&(pFVar37->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
            }
          }
          bVar52 = bVar28;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_9f0.SharedReferenceCount.ReferenceController);
        }
        if ((!bVar52) && (local_a88 == ReturnInvalid)) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a20.SharedReferenceCount.ReferenceController);
          RVar30 = Truncated;
          goto LAB_142521a29;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a20.SharedReferenceCount.ReferenceController);
        pSVar46 = (SWindow *)(ulonglong)(uVar47 + 1);
        local_a90 = (SWidget *)&local_a90->_padding_;
      } while (bVar52);
    }
    iVar31 = local_ac8;
    local_968 = (FWidgetAndPointer *)local_ad0.Data;
    if ((local_ac8 < 0) &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar27)) {
      pcVar3 = (code *)swi(3);
      RVar30 = (*pcVar3)();
      return RVar30;
    }
    local_958._12_4_ = uStack_95c;
    local_958.ArrayNum = iVar31;
    local_958.DataPtr = local_968;
    iStack_960 = iVar31;
    pFVar39 = FWidgetPath::FWidgetPath(&local_348,&local_958);
    FWidgetPath::operator=(local_a08,pFVar39);
    if (local_348.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_348.VirtualPointerPositions.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.TopLevelWindow.SharedReferenceCount.ReferenceController);
    FVar42 = (ForElementType<FArrangedWidget>)&local_348.Widgets.Array;
    if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FVar42 = local_348.Widgets.Array.AllocatorInstance.SecondaryData;
    }
    DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar42,local_348.Widgets.Array.ArrayNum);
    if (local_348.Widgets.Array.AllocatorInstance.SecondaryData !=
        (ForElementType<FArrangedWidget>)0x0) {
      FMemory::Free((void *)local_348.Widgets.Array.AllocatorInstance.SecondaryData);
    }
    RVar30 = (Result)!bVar52;
LAB_142521a29:
    DestructItems<FWidgetAndPointer,int>((FWidgetAndPointer *)local_ad0.Data,local_ac8);
    FVar43.Data = local_ad0.Data;
  }
  if ((FWidgetAndPointer *)FVar43.Data != (FWidgetAndPointer *)0x0) {
    FMemory::Free(FVar43.Data);
  }
LAB_1425223c1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a00);
  DestructItems<TSharedPtr<SWidget,1>,int>((TSharedPtr<SWidget,1> *)local_ab0.Data,local_aa8);
  if ((TSharedPtr<SWidget,1> *)local_ab0.Data != (TSharedPtr<SWidget,1> *)0x0) {
    FMemory::Free(local_ab0.Data);
  }
  if ((local_a60.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_a60.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a60.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_a60.StatId,CycleScopeEnd);
  }
  return RVar30;
}

// ToWidgetPathRef @ 142522500

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<FWidgetPath,1> * __thiscall
FWeakWidgetPath::ToWidgetPathRef
          (FWeakWidgetPath *this,TSharedRef<FWidgetPath,1> *__return_storage_ptr__,Type param_1,
          FPointerEvent *param_2,EVisibility param_3)

{
  TRawPtrProxy<FWidgetPath> local_res10;
  
  local_res10.Object = ::operator_new(0x160);
  if (local_res10.Object == (FWidgetPath *)0x0) {
    local_res10.Object = (FWidgetPath *)0x0;
  }
  else {
    ((local_res10.Object)->Widgets).VisibilityFilter.Value.Value =
         (uchar)EVisibility::Visible.Value.Value;
    ((local_res10.Object)->Widgets).Array.AllocatorInstance.SecondaryData =
         (ForElementType<FArrangedWidget>)0x0;
    ((local_res10.Object)->Widgets).Array.ArrayNum = 0;
    ((local_res10.Object)->Widgets).Array.ArrayMax = 4;
    ((local_res10.Object)->Widgets).bAllow3DWidgets = false;
    ((local_res10.Object)->TopLevelWindow).Object = (SWindow *)0x0;
    ((local_res10.Object)->TopLevelWindow).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    ((local_res10.Object)->VirtualPointerPositions).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_res10.Object)->VirtualPointerPositions).ArrayNum = 0;
    ((local_res10.Object)->VirtualPointerPositions).ArrayMax = 0;
  }
  TSharedRef<FWidgetPath,1>::TSharedRef<FWidgetPath,1><FWidgetPath>
            (__return_storage_ptr__,&local_res10);
  ToWidgetPath(this,__return_storage_ptr__->Object,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// operator() @ 15048f800

bool __thiscall `FWeakWidgetPath::ToWidgetPath'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3393040871262781721>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3393040871262781721>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

