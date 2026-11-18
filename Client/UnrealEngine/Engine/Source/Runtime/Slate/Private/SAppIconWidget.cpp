// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// Construct @ 1427160b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall SAppIconWidget::Construct(SAppIconWidget *this,FArguments *param_1)

{
  TSharedPtr<SImage,1> *pTVar1;
  EWidgetUpdateFlags EVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SImage *pSVar5;
  bool bVar6;
  FSlateApplicationBase *pFVar7;
  FSlateApplicationBase *pFVar8;
  undefined8 *puVar9;
  ISlateStyle *pIVar10;
  FName *pFVar11;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar12;
  undefined1 *this_00;
  EWidgetUpdateFlags EVar13;
  FName local_res8;
  uchar local_f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  ForAnyElementType FStack_c0;
  ulonglong local_b8;
  SImage *local_b0;
  FSharedReferencer<1> local_a8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  TAttribute<FMargin> local_70;
  undefined1 local_40 [8];
  TReferenceControllerBase<1> *local_38;
  undefined8 local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  EVar2 = (EWidgetUpdateFlags)this->_padding_;
  EVar13 = EVar2 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar13;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar2,EVar13);
  pFVar7 = FSlateApplicationBase::Get();
  local_f8[1] = 1;
  local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_e8.Data = (FScriptContainerElement *)0x0;
  pcVar3 = *(code **)(*(longlong *)pFVar7 + 0x120);
  local_f8[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_e0 = 0;
  pFVar8 = FSlateApplicationBase::Get();
  local_d8 = (**(code **)(*(longlong *)pFVar8 + 0x48))(pFVar8);
  local_d0 = 1;
  local_b8 = 0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c0.Data = (FScriptContainerElement *)0x0;
  puVar9 = (undefined8 *)
           (*pcVar3)(pFVar7,local_40,&local_d8,&param_1->_IconColorAndOpacity,local_f8);
  local_a8.ReferenceController = (TReferenceControllerBase<1> *)puVar9[1];
  local_b0 = (SImage *)*puVar9;
  if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_a8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->IconImage;
  if (pTVar1 != (TSharedPtr<SImage,1> *)&local_b0) {
    pTVar1->Object = local_b0;
    local_b0 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->IconImage).SharedReferenceCount,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a0);
  if (((int)local_b8 != 0) && (FStack_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c0,0,0,0x10);
    local_b8 = local_b8 & 0xffffffff00000000;
  }
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f0,(FWriteAccessScope *)&local_88);
  if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
  pIVar10 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar10 + 0x48);
  pFVar11 = ::FName::FName(&local_res8,"AppIconPadding");
  puVar9 = (undefined8 *)(*pcVar3)(pIVar10,*pFVar11,0,&FStyleDefaults::DefaultMargin,0);
  local_70.Value._0_8_ = *puVar9;
  local_70.Value._8_8_ = puVar9[1];
  local_70.bIsSet = true;
  local_70.Getter._16_8_ = 0;
  local_70.Getter._0_8_ = 0;
  local_70.Getter._8_8_ = 0;
  pTVar12 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                      ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                        *)&this->_padding_,&local_70);
  if (pTVar1->Object == (SImage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar4 = (this->IconImage).SharedReferenceCount.ReferenceController;
  pSVar5 = pTVar1->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar5 == (SImage *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = &pTVar12->field_0x20;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = *(undefined8 *)&pTVar12->field_0x30;
  pTStack_28 = *(TReferenceControllerBase<1> **)&pTVar12->field_0x38;
  *(SImage **)&pTVar12->field_0x30 = pSVar5;
  *(TReferenceControllerBase<1> **)&pTVar12->field_0x38 = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// GetWindowZoneOverride @ 1427464d0

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall SAppIconWidget::GetWindowZoneOverride(SAppIconWidget *this)

{
  return SysMenu;
}

// SetIcon @ 142785010

void __thiscall SAppIconWidget::SetIcon(SAppIconWidget *this,FSlateBrush *param_1,FMargin *param_2)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<FSlateBrush_const_*> local_68;
  TAttribute<FMargin> local_40;
  
  local_40.Value.Left = param_2->Left;
  local_40.Value.Top = param_2->Top;
  local_40.Value.Right = param_2->Right;
  local_40.Value.Bottom = param_2->Bottom;
  local_40.bIsSet = true;
  local_40.Getter._16_8_ = 0;
  local_40.Getter._0_8_ = 0;
  local_40.Getter._8_8_ = 0;
  TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
            ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0> *)
             &this->_padding_,&local_40);
  if ((this->IconImage).Object == (SImage *)0x0) {
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
  local_68.Getter._16_8_ = 0;
  local_68.bIsSet = true;
  local_68.Getter._0_8_ = 0;
  local_68.Getter._8_8_ = 0;
  local_68.Value = param_1;
  SImage::SetImage((this->IconImage).Object,&local_68);
  return;
}

