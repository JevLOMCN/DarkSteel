// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 9

// SWeakWidget @ 1429bbb70

SWeakWidget * __thiscall SWeakWidget::SWeakWidget(SWeakWidget *this)

{
  SWidget::SWidget((SWidget *)this);
  this->_padding_ = (longlong)&___7SWeakWidget__6B_;
  (this->WeakChild)._padding_ = (longlong)this;
  (this->WeakChild)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->WeakChild)._padding_,"Children");
  *(undefined2 *)&(this->WeakChild)._padding_ = 0xdc00;
  (this->WeakChild)._padding_ = (longlong)&___7__TWeakChild_VSWidget____6B_;
  (this->WeakChild).WidgetPtr.Object = (SWidget *)0x0;
  (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~SWeakWidget @ 1429c0450

void __thiscall SWeakWidget::~SWeakWidget(SWeakWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7SWeakWidget__6B_;
  pTVar3 = (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController;
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
  FChildren::~FChildren((FChildren *)&this->WeakChild);
  SWidget::~SWidget((SWidget *)this);
  return;
}

// ChildWidgetIsValid @ 1429cd0a0

bool __thiscall SWeakWidget::ChildWidgetIsValid(SWeakWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->WeakChild).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar1 = (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// ComputeDesiredSize @ 1429cf6e0

TVector2<double> * __thiscall
SWeakWidget::ComputeDesiredSize
          (SWeakWidget *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TVector2<double>_u_0 TVar2;
  double dVar3;
  FDeprecateSlateVector2D FVar4;
  TSharedRef<SWidget,1> local_18;
  
  if ((((this->WeakChild).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar1 = (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    TWeakChild<SWidget>::GetWidget(&this->WeakChild,&local_18);
    if ((local_18.Object != SNullWidget::NullWidget.Object) &&
       ((TEnumAsByte<EVisibility::Private>)*(uchar *)&(local_18.Object)->VisibilityAttribute !=
        EVisibility::Collapsed.Value.Value)) {
      FVar4 = SWidget::GetDesiredSize(local_18.Object);
      dVar3 = (double)(float)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
      TVar2._8_4_ = SUB84(dVar3,0);
      TVar2._s_0.X = (double)(float)*(undefined8 *)FVar4;
      TVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      __return_storage_ptr__->field0_0x0 = TVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  return __return_storage_ptr__;
}

// Construct @ 1429d9830

void __thiscall SWeakWidget::Construct(SWeakWidget *this,FArguments *param_1)

{
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  EVar2 = EVar1 & ~NeedsTick;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  TWeakChild<SWidget>::AttachWidget(&this->WeakChild,&param_1->_PossiblyNullContent);
  return;
}

// GetChildren @ 1429ea750

FChildren * __thiscall SWeakWidget::GetChildren(SWeakWidget *this)

{
  return (FChildren *)&this->WeakChild;
}

// OnArrangeChildren @ 1429f9180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SWeakWidget::OnArrangeChildren(SWeakWidget *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined1 auStackY_c8 [32];
  FSlateLayoutTransform local_98;
  FDeprecateSlateVector2D local_8c;
  TSharedRef<SWidget,1> local_80;
  FArrangedWidget local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if ((((this->WeakChild).WidgetPtr.Object != (SWidget *)0x0) &&
      (pTVar1 = (this->WeakChild).WidgetPtr.WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    TWeakChild<SWidget>::GetWidget(&this->WeakChild,&local_80);
    if ((local_80.Object != SNullWidget::NullWidget.Object) &&
       (((param_2->VisibilityFilter).Value.Value & (byte)(local_80.Object)->VisibilityAttribute) !=
        0)) {
      local_8c = param_1->Size;
      local_98._0_8_ = 0x3f800000;
      local_98.Translation.field0_0x0._s_0.Y = 0.0;
      FGeometry::MakeChild
                (param_1,&local_68,&local_80,(FDeprecateVector2DParameter *)&local_8c,&local_98);
      FArrangedChildren::AddWidget(param_2,&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.Widget.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPaint @ 142a01200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SWeakWidget::OnPaint
          (SWeakWidget *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForElementType<FArrangedWidget> FVar4;
  undefined1 auStackY_1e8 [32];
  FPaintArgs local_1a8;
  FArrangedChildren local_178;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178.VisibilityFilter = (EVisibility)EVisibility::Visible.Value.Value;
  local_178.Array.AllocatorInstance.SecondaryData = (ForElementType<FArrangedWidget>)0x0;
  local_178.Array.ArrayNum = 0;
  local_178.Array.ArrayMax = 4;
  local_178.bAllow3DWidgets = false;
  SWidget::ArrangeChildren((SWidget *)this,param_2,&local_178,false);
  if (0 < local_178.Array.ArrayNum) {
    if ((local_178.Array.ArrayNum != 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrangedChildren.Num() == 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\SWeakWidget.cpp"
                           ,0x44,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    if ((local_178.Array.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
    if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
      FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
    }
    if ((param_7) && (*(char *)((longlong)&this->_padding_ + 2) != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_1a8.RootGrid = param_1->RootGrid;
    local_1a8.CurrentGrid = param_1->CurrentGrid;
    local_1a8.WindowOffset.field0_0x0 = (param_1->WindowOffset).field0_0x0;
    local_1a8.CurrentTime = param_1->CurrentTime;
    local_1a8.DeltaTime = param_1->DeltaTime;
    local_1a8._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_1a8.PaintParentPtr = (SWidget *)this;
    param_5 = SWidget::Paint(((TSharedRef<SWidget,1> *)((longlong)FVar4 + 0x38))->Object,&local_1a8,
                             (FGeometry *)FVar4,param_3,param_4,param_5 + 1,param_6,bVar2);
  }
  FVar4 = (ForElementType<FArrangedWidget>)&local_178.Array;
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FVar4 = local_178.Array.AllocatorInstance.SecondaryData;
  }
  DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar4,local_178.Array.ArrayNum);
  if (local_178.Array.AllocatorInstance.SecondaryData != (ForElementType<FArrangedWidget>)0x0) {
    FMemory::Free((void *)local_178.Array.AllocatorInstance.SecondaryData);
  }
  return param_5;
}

// SetContent @ 142a07cd0

void __thiscall SWeakWidget::SetContent(SWeakWidget *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedPtr<SWidget,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  TWeakChild<SWidget>::AttachWidget(&this->WeakChild,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

