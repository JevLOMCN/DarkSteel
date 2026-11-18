// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// Construct @ 142900380

void __thiscall SPopup::Construct(SPopup *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  FSlotBase::DetatchParentFromContent((FSlotBase *)&this->field_0x238);
  pTVar1 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar2 = (param_1->_Content).Widget.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x250;
  *(SWidget **)&this->field_0x248 = pSVar2;
  *(TReferenceControllerBase<1> **)&this->field_0x250 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&this->field_0x238);
  return;
}

// OnPaint @ 14297f410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SPopup::OnPaint(SPopup *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
               FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FWidgetStyle *pFVar7;
  FDeferredPaint *pFVar8;
  ForElementType<FArrangedWidget> FVar9;
  bool bVar10;
  undefined1 auStackY_3c8 [32];
  FLinearColor_u_0 local_398;
  undefined4 local_388;
  undefined1 local_384;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_380;
  ForAnyElementType FStack_378;
  ulonglong local_370;
  TSharedRef<SWidget_const_,1> local_368;
  FDestructionSentinel local_358;
  FPaintArgs local_340;
  FGeometry local_308;
  FLinearColor_u_0 local_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  FLinearColor_u_0 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [20];
  undefined1 local_254 [20];
  FArrangedChildren local_240;
  FDeferredPaint local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  local_240.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_240.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_240.Array.ArrayNum = 0;
  local_240.Array.ArrayMax = 4;
  local_240.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_240,false);
  if (0 < local_240.Array.ArrayNum) {
    if ((param_7) && (this->field_0x3a != '\0')) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    if ((local_240.Array.ArrayNum != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Layout\\SPopup.cpp"
                           ,0x19,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    if ((local_240.Array.ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    local_2b8 = *(undefined8 *)&(param_6->ForegroundColor).field0_0x0;
    uStack_2b0 = *(undefined8 *)((longlong)&(param_6->ForegroundColor).field0_0x0 + 8);
    FVar9 = (ForElementType<FArrangedWidget>)&local_240.Array;
    if (local_240.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar9 = local_240.Array.AllocatorInstance.SecondaryData;
    }
    local_2a8 = (param_6->SubduedForeground).field0_0x0._s_0.R;
    fStack_2a4 = (param_6->SubduedForeground).field0_0x0._s_0.G;
    fStack_2a0 = (param_6->SubduedForeground).field0_0x0._s_0.B;
    fStack_29c = (param_6->SubduedForeground).field0_0x0._s_0.A;
    local_2c8._s_0.R =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.R * *(float *)&this->field_0x280;
    local_2c8._s_0.G =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.G * *(float *)&this->field_0x284;
    local_2c8._s_0.B =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.B * *(float *)&this->field_0x288;
    local_2c8._s_0.A =
         (param_6->ColorAndOpacityTint).field0_0x0._s_0.A * *(float *)&this->field_0x28c;
    if (bVar10 == false) {
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)this + 0x200))(this,local_254);
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*(longlong *)this + 0x1f8))(this,local_268);
    }
    local_398._0_8_ = *puVar6;
    local_398._8_8_ = puVar6[1];
    local_388 = *(undefined4 *)(puVar6 + 2);
    local_370 = 0;
    local_384 = 1;
    local_380.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_378.Data = (FScriptContainerElement *)0x0;
    pFVar7 = FWidgetStyle::SetForegroundColor
                       ((FWidgetStyle *)&local_2c8._s_0,(TAttribute<FSlateColor> *)&local_398._s_0);
    local_298._0_8_ = *(undefined8 *)&(pFVar7->ColorAndOpacityTint).field0_0x0;
    local_298._8_8_ = *(undefined8 *)((longlong)&(pFVar7->ColorAndOpacityTint).field0_0x0 + 8);
    local_288 = *(undefined8 *)&(pFVar7->ForegroundColor).field0_0x0;
    uStack_280 = *(undefined8 *)((longlong)&(pFVar7->ForegroundColor).field0_0x0 + 8);
    local_278 = *(undefined8 *)&(pFVar7->SubduedForeground).field0_0x0;
    uStack_270 = *(undefined8 *)((longlong)&(pFVar7->SubduedForeground).field0_0x0 + 8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_380,(FWriteAccessScope *)&local_358);
    if (((int)local_370 != 0) && (FStack_378.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_378.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_378,0,0,0x10);
      local_370 = local_370 & 0xffffffff00000000;
    }
    if (local_358.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_358.Accessor,&local_358);
    }
    if (FStack_378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_378.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_380.AccessDetector);
    local_368.Object = ((TSharedRef<SWidget,1> *)((longlong)FVar9 + 0x38))->Object;
    local_340.RootGrid = param_1->RootGrid;
    local_340.CurrentGrid = param_1->CurrentGrid;
    local_368.SharedReferenceCount.ReferenceController =
         ((FSharedReferencer<1> *)((longlong)FVar9 + 0x40))->ReferenceController;
    local_308._48_8_ = *(undefined8 *)((longlong)FVar9 + 0x30);
    local_340.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_308.Size = *(FDeprecateSlateVector2D *)FVar9;
    local_308._8_8_ = *(undefined8 *)((longlong)FVar9 + 8);
    local_308._16_8_ = *(undefined8 *)((longlong)FVar9 + 0x10);
    local_308._24_8_ = *(undefined8 *)((longlong)FVar9 + 0x18);
    local_308.AccumulatedRenderTransform.M.M._4_8_ = *(undefined8 *)((longlong)FVar9 + 0x20);
    local_308.AccumulatedRenderTransform._12_8_ = *(undefined8 *)((longlong)FVar9 + 0x28);
    local_340.CurrentTime = param_1->CurrentTime;
    local_340.DeltaTime = param_1->DeltaTime;
    local_340._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    if (local_368.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_368.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_340.PaintParentPtr = (SWidget *)this;
    pFVar8 = FSlateWindowElementList::FDeferredPaint::FDeferredPaint
                       (&local_f8,&local_368,&local_340,&local_308,(FWidgetStyle *)&local_298._s_0,
                        bVar10);
    FSlateWindowElementList::QueueDeferredPainting(param_4,pFVar8);
    if (local_f8.WidgetToPaintPtr.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_f8.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_f8.WidgetToPaintPtr.WeakReferenceCount.ReferenceController)->_padding_ +
                    8))(local_f8.WidgetToPaintPtr.WeakReferenceCount.ReferenceController,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_368.SharedReferenceCount.ReferenceController);
  }
  FVar9 = (ForElementType<FArrangedWidget>)&local_240.Array;
  if (local_240.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar9 = local_240.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar9,local_240.Array.ArrayNum);
  if (local_240.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_240.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

