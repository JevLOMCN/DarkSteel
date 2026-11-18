// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// OnMenuClosed @ 1426c6af0

void __thiscall SMenuPanel::OnMenuClosed(SMenuPanel *this,TSharedRef<IMenu,1> *param_1)

{
  TSharedPtr<SWidget,1> *this_00;
  TSharedRef<SWidget,1> *pTVar1;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (TSharedPtr<SWidget,1> *)
            (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_28);
  pTVar1 = TSharedPtr<SWidget,1>::ToSharedRef(this_00,&local_18);
  SOverlay::RemoveSlot((SOverlay *)this,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PushMenu @ 1426d4970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMenuPanel::PushMenu(SMenuPanel *this,TSharedRef<FMenuBase,1> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  longlong *plVar7;
  FSlateRect *pFVar8;
  FSlateLayoutTransform *pFVar9;
  FScopedWidgetSlotArguments *pFVar10;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
  *this_00;
  FScopedWidgetSlotArguments *pFVar11;
  FScopedWidgetSlotArguments *pFVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_248 [32];
  TVector2<float>_u_0_s_0 local_228;
  SWindow *local_220;
  TReferenceControllerBase<1> *local_218;
  float local_210;
  float fStack_20c;
  undefined8 uStack_208;
  undefined1 local_200;
  undefined1 local_1f8 [8];
  ForAnyElementType FStack_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  FSharedReferencer<1> local_1d8;
  undefined4 local_1d0 [2];
  undefined4 local_1c8 [3];
  undefined8 local_1bc;
  undefined8 local_1b0;
  code *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  FDestructionSentinel local_198;
  undefined1 local_180 [24];
  undefined1 local_168 [8];
  TReferenceControllerBase<1> *local_160;
  code *local_158;
  longlong lStack_150;
  FSlateLayoutTransform local_148;
  FSlateRect local_13c;
  FScopedWidgetSlotArguments local_128;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_248;
  plVar7 = (longlong *)
           (**(code **)(param_1->Object->_padding_ + 0x20))(param_1->Object,local_180 + 8);
  lVar2 = *plVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_180._16_8_);
  if (lVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMenu->GetContent().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x31,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (**(code **)(param_1->Object->_padding_ + 0x10))(param_1->Object,&local_220);
  if (local_220 == (SWindow *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentWindow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
                       ,0x34,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_220 == (SWindow *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  pFVar8 = SWindow::GetRectInScreen(local_220,&local_13c);
  fVar16 = pFVar8->Left;
  fVar1 = pFVar8->Top;
  if (local_220 == (SWindow *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = SWindow::GetLocalToScreenTransform(local_220,&local_148);
  uVar5 = __xmm_80000000800000008000000080000000;
  fVar17 = __real_3f800000;
  fVar15 = __real_3f800000 / pFVar9->Scale;
  fVar13 = (float)((uint)(fVar15 * (pFVar9->Translation).field0_0x0._s_0.X) ^
                  __xmm_80000000800000008000000080000000);
  fVar14 = (float)((uint)(fVar15 * (pFVar9->Translation).field0_0x0._s_0.Y) ^
                  __xmm_80000000800000008000000080000000);
  local_228.Y = fVar14;
  local_228.X = fVar13;
  local_1bc._0_4_ = fVar13;
  local_1bc._4_4_ = fVar14;
  if (local_220 == (SWindow *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar9 = SWindow::GetLocalToScreenTransform(local_220,(FSlateLayoutTransform *)&local_1a8);
  fVar17 = fVar17 / pFVar9->Scale;
  local_1b0._0_4_ = (float)((uint)(fVar17 * (pFVar9->Translation).field0_0x0._s_0.X) ^ uVar5);
  local_1b0._4_4_ = (float)((uint)(fVar17 * (pFVar9->Translation).field0_0x0._s_0.Y) ^ uVar5);
  local_228 = (param_2->field0_0x0)._s_0;
  fVar13 = (local_228.X * fVar17 + (float)local_1b0) - (fVar16 * fVar15 + fVar13);
  fVar16 = (local_228.Y * fVar17 + local_1b0._4_4_) - (fVar1 * fVar15 + fVar14);
  pFVar10 = SOverlay::AddSlot((SOverlay *)this,&local_128,-1);
  plVar7 = &pFVar10->_padding_;
  if ((longlong *)local_1d0 != plVar7) {
    *(undefined4 *)plVar7 = 1;
    *(undefined1 *)((longlong)&pFVar10->_padding_ + 4) = 1;
  }
  pFVar12 = (FScopedWidgetSlotArguments *)0x0;
  pFVar11 = pFVar12;
  if (plVar7 != (longlong *)0x0) {
    pFVar11 = pFVar10;
  }
  if ((longlong *)local_1c8 != &pFVar11->_padding_) {
    *(undefined4 *)&pFVar11->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar11->_padding_ + 4) = 1;
  }
  local_200 = 1;
  if (pFVar11 == (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
    pFVar11 = pFVar12;
  }
  *(undefined1 *)&pFVar11->_padding_ = 1;
  uStack_208 = 0;
  local_1e8 = 0;
  *(float *)&pFVar11->_padding_ = fVar13;
  *(float *)((longlong)&pFVar11->_padding_ + 4) = fVar16;
  *(undefined4 *)&pFVar11->_padding_ = 0;
  *(undefined4 *)((longlong)&pFVar11->_padding_ + 4) = 0;
  local_1f8 = (undefined1  [8])0x0;
  FStack_1f0.Data = (FScriptContainerElement *)0x0;
  local_210 = fVar13;
  fStack_20c = fVar16;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1f8,
             (FWriteAccessScope *)&local_198);
  if (((int)local_1e8 != 0) && (FStack_1f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f0,0,0,0x10);
    local_1e8 = local_1e8 & 0xffffffff00000000;
  }
  if (local_198.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
  }
  if (FStack_1f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f8);
  if (&pFVar11->_padding_ != (longlong *)0x0) {
    pFVar12 = pFVar11;
  }
  plVar7 = (longlong *)(**(code **)(param_1->Object->_padding_ + 0x20))(param_1->Object,local_168);
  if (*plVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *plVar7;
  pTVar3 = (TReferenceControllerBase<1> *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  if (lVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e0 = lVar2;
  local_1d8.ReferenceController = pTVar3;
  if (&pFVar12->_padding_ != &local_1e0) {
    pFVar12->_padding_ = lVar2;
    local_1e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_1d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160);
  TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_128);
  this_00 = (TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>
             *)(**(code **)(param_1->Object->_padding_ + 0x28))();
  uStack_1a0 = 0.0;
  local_1a8 = OnMenuClosed;
  lStack_150 = (ulonglong)uStack_19c << 0x20;
  local_158 = OnMenuClosed;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<IMenu,1>),FDefaultDelegateUserPolicy>::
  AddSP<SMenuPanel>(this_00,(SMenuPanel *)local_180,(pmf_a022dc68 *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

