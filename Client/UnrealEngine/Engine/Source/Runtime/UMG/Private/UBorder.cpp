// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 63

// GetHorizontalAlignment_WrapperImpl @ 1468d57b0

void __cdecl UBorder::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 1468d57c0

void __cdecl UBorder::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1c8) = bVar1;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    SBorder::SetHAlign(*(SBorder **)((longlong)param_1 + 0x378),(uint)bVar1);
    return;
  }
  return;
}

// GetVerticalAlignment_WrapperImpl @ 1468d57f0

void __cdecl UBorder::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c9);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 1468d5800

void __cdecl UBorder::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1c9) = bVar1;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    SBorder::SetVAlign(*(SBorder **)((longlong)param_1 + 0x378),(uint)bVar1);
    return;
  }
  return;
}

// GetbShowEffectWhenDisabled_WrapperImpl @ 1468d5830

void __cdecl UBorder::GetbShowEffectWhenDisabled_WrapperImpl(void *param_1,void *param_2)

{
  *(byte *)param_2 = *(byte *)((longlong)param_1 + 0x1ca) & 1;
  return;
}

// SetbShowEffectWhenDisabled_WrapperImpl @ 1468d5850

void __cdecl UBorder::SetbShowEffectWhenDisabled_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  TAttribute<bool> local_28;
  
  bVar1 = (*(byte *)((longlong)param_1 + 0x1ca) ^ *(byte *)param_2) & 1 ^
          *(byte *)((longlong)param_1 + 0x1ca);
  *(byte *)((longlong)param_1 + 0x1ca) = bVar1;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    local_28.bIsSet = true;
    local_28.Value = (bool)(bVar1 & 1);
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBorder::SetShowEffectWhenDisabled(*(SBorder **)((longlong)param_1 + 0x378),&local_28);
  }
  return;
}

// GetContentColorAndOpacity_WrapperImpl @ 1468d58c0

void __cdecl UBorder::GetContentColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x378);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x288);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar1 + 0x280);
    *(undefined8 *)((longlong)param_2 + 8) = uVar2;
    return;
  }
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x1d4);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1cc);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  return;
}

// SetContentColorAndOpacity_WrapperImpl @ 1468d5970

void __cdecl UBorder::SetContentColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  SetContentColorAndOpacity(param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// GetPadding_WrapperImpl @ 1468d5a20

void __cdecl UBorder::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x200);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1f8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 1468d5a40

void __cdecl UBorder::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FMargin> local_38;
  
  local_38.Value._0_8_ = *(undefined8 *)param_2;
  local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1f8) = local_38.Value._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x200) = local_38.Value._8_8_;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding(*(SBorder **)((longlong)param_1 + 0x378),&local_38);
  }
  return;
}

// GetBrushColor_WrapperImpl @ 1468d5a90

void __cdecl UBorder::GetBrushColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x2e0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x2d8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetBrushColor_WrapperImpl @ 1468d5ab0

void __cdecl UBorder::SetBrushColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)param_2;
  local_38._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x2d8) = local_38._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x2e0) = local_38._8_8_;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    local_24 = 1;
    SBorder::SetBorderBackgroundColor
              (*(SBorder **)((longlong)param_1 + 0x378),(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// GetDesiredSizeScale_WrapperImpl @ 1468d5b10

void __cdecl UBorder::GetDesiredSizeScale_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x308);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x300);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetDesiredSizeScale_WrapperImpl @ 1468d5b30

void __cdecl UBorder::SetDesiredSizeScale_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._s_0.X = (double)*(undefined8 *)param_2;
  local_38._s_0.Y = *(double *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x300) = local_38._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x308) = local_38._s_0.Y;
  if (*(SBorder **)((longlong)param_1 + 0x378) != (SBorder *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetDesiredSizeScale
              (*(SBorder **)((longlong)param_1 + 0x378),
               (TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// StaticClass @ 1468d5c40

UClass * __cdecl UBorder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Border",&Z_Registration_Info_UClass_UBorder.InnerSingleton,
               StaticRegisterNativesUBorder,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBorder>,InternalVTableHelperCtorCaller<UBorder>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorder.InnerSingleton;
}

// UBorder @ 146900700

UBorder * __thiscall UBorder::UBorder(UBorder *this,FVTableHelper *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ContentColorAndOpacityDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ContentColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ContentColorAndOpacityDelegate).field_0x10 = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  FSlateBrush::FSlateBrush(&this->Background);
  *(undefined8 *)&this->BackgroundDelegate = 0;
  *(undefined8 *)&(this->BackgroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->BrushColorDelegate = 0;
  *(undefined8 *)&(this->BrushColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BrushColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonDownEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonUpEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonUpEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonUpEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseMoveEvent = 0;
  *(undefined8 *)&(this->OnMouseMoveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseMoveEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseDoubleClickEvent = 0;
  *(undefined8 *)&(this->OnMouseDoubleClickEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseDoubleClickEvent).field_0x10 = 0;
  (this->MyBorder).Object = (SBorder *)0x0;
  (this->MyBorder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UBorder @ 146900800

UBorder * __thiscall UBorder::UBorder(UBorder *this,FObjectInitializer *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined8 *)&this->ContentColorAndOpacityDelegate = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ContentColorAndOpacityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ContentColorAndOpacityDelegate).field_0x10 = 0;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  FSlateBrush::FSlateBrush(&this->Background);
  *(undefined8 *)&this->BackgroundDelegate = 0;
  *(undefined8 *)&(this->BackgroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BackgroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->BrushColorDelegate = 0;
  *(undefined8 *)&(this->BrushColorDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->BrushColorDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonDownEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonDownEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseButtonUpEvent = 0;
  *(undefined8 *)&(this->OnMouseButtonUpEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseButtonUpEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseMoveEvent = 0;
  *(undefined8 *)&(this->OnMouseMoveEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseMoveEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMouseDoubleClickEvent = 0;
  *(undefined8 *)&(this->OnMouseDoubleClickEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnMouseDoubleClickEvent).field_0x10 = 0;
  this->field_0xf9 = this->field_0xf9 & 0xfe;
  (this->MyBorder).Object = (SBorder *)0x0;
  (this->MyBorder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ContentColorAndOpacity).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->BrushColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->Padding).Left = 4.0;
  (this->Padding).Top = 2.0;
  (this->Padding).Right = 4.0;
  (this->Padding).Bottom = 2.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\0';
  (this->DesiredSizeScale).field0_0x0._s_0.X = 1.0;
  (this->DesiredSizeScale).field0_0x0._s_0.Y = 1.0;
  this->bShowEffectWhenDisabled = '\x01';
  return this;
}

// ~UBorder @ 146904540

void __thiscall UBorder::~UBorder(UBorder *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBorder).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseDoubleClickEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseMoveEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseButtonUpEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseButtonDownEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BrushColorDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->BackgroundDelegate);
  pTVar1 = (this->Background).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (this->Background)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ContentColorAndOpacityDelegate);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  return;
}

// ConvertImage @ 146910640

FSlateBrush * __thiscall UBorder::ConvertImage(UBorder *this,TAttribute<FSlateBrush> *param_1)

{
  TDelegate<FSlateBrush___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  FReadAccessScope local_e8;
  FSlateBrush local_c8;
  
  this_00 = &param_1->Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_e8);
  if (((*(int *)&(param_1->Getter).field_0x10 == 0) ||
      (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar4 + 0x38))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_e8);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_e8);
    if (*(int *)&(param_1->Getter).field_0x10 == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)&(param_1->Getter).field_0x8;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_e8);
    FSlateBrush::operator=(&param_1->Value,&local_c8);
    local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  }
  FSlateBrush::operator=(&this->Background,&param_1->Value);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pTVar1 = (param_1->Value).ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  (param_1->Value)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return &this->Background;
}

// GetBrushColor @ 14691dda0

FLinearColor * __thiscall UBorder::GetBrushColor(UBorder *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->BrushColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->BrushColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetContentColorAndOpacity @ 14691de20

FLinearColor * __thiscall
UBorder::GetContentColorAndOpacity(UBorder *this,FLinearColor *__return_storage_ptr__)

{
  SBorder *pSVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pSVar1 = (this->MyBorder).Object;
  if (pSVar1 != (SBorder *)0x0) {
    lVar2 = pSVar1->_padding_;
    *(longlong *)&__return_storage_ptr__->field0_0x0 = pSVar1->_padding_;
    *(longlong *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = lVar2;
    return __return_storage_ptr__;
  }
  uVar3 = *(undefined8 *)((longlong)&(this->ContentColorAndOpacity).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->ContentColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
  return __return_storage_ptr__;
}

// GetDesiredSizeScale @ 14691e060

TVector2<double> * __thiscall
UBorder::GetDesiredSizeScale(UBorder *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->DesiredSizeScale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->DesiredSizeScale).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetDynamicMaterial @ 14691e080

UMaterialInstanceDynamic * __thiscall UBorder::GetDynamicMaterial(UBorder *this)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  TAttribute<FSlateBrush_const_*> local_38;
  
  pUVar3 = (UMaterialInstanceDynamic *)(this->Background).ResourceObject.field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar3,(UObject *)this,(FName)0x0);
        FSlateBrush::SetResourceObject(&this->Background,(UObject *)pUVar3);
        if ((this->MyBorder).Object != (SBorder *)0x0) {
          local_38.Getter._0_8_ = 0;
          local_38.Getter._8_8_ = 0;
          local_38.Getter._16_8_ = 0;
          local_38.bIsSet = true;
          local_38.Value = &this->Background;
          SBorder::SetBorderImage((this->MyBorder).Object,&local_38);
        }
      }
      return pUVar3;
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetHorizontalAlignment @ 14691e860

EHorizontalAlignment __thiscall UBorder::GetHorizontalAlignment(UBorder *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetPadding @ 146920a80

FMargin * __thiscall UBorder::GetPadding(UBorder *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (this->Padding).Top;
  fVar2 = (this->Padding).Right;
  fVar3 = (this->Padding).Bottom;
  __return_storage_ptr__->Left = (this->Padding).Left;
  __return_storage_ptr__->Top = fVar1;
  __return_storage_ptr__->Right = fVar2;
  __return_storage_ptr__->Bottom = fVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146921930

UClass * __cdecl UBorder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBorder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Border",&Z_Registration_Info_UClass_UBorder.InnerSingleton,
               StaticRegisterNativesUBorder,0x390,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBorder>,InternalVTableHelperCtorCaller<UBorder>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorder.InnerSingleton;
}

// GetShowEffectWhenDisabled @ 146924110

bool __thiscall UBorder::GetShowEffectWhenDisabled(UBorder *this)

{
  return this->bShowEffectWhenDisabled;
}

// GetSlotClass @ 1469242c0

UClass * __thiscall UBorder::GetSlotClass(UBorder *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBorderSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BorderSlot",&Z_Registration_Info_UClass_UBorderSlot.InnerSingleton,
               UBorderSlot::StaticRegisterNativesUBorderSlot,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBorderSlot>,
               InternalVTableHelperCtorCaller<UBorderSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBorderSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146927a40

EVerticalAlignment __thiscall UBorder::GetVerticalAlignment(UBorder *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// HandleMouseButtonDown @ 1469282a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UBorder::HandleMouseButtonDown
          (UBorder *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FGeometry local_108;
  FReply local_c8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonDownEvent);
  if (bVar1) {
    local_108.Size = param_1->Size;
    local_108._8_8_ = *(undefined8 *)&param_1->Scale;
    local_108._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_108._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_108.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_108.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_108._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UWidget::FOnPointerEvent_DelegateWrapper
              ((FEventReply *)&local_c8,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonDownEvent,
               &local_108,param_2);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// HandleMouseButtonUp @ 146928360

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UBorder::HandleMouseButtonUp
          (UBorder *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FGeometry local_108;
  FReply local_c8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonUpEvent);
  if (bVar1) {
    local_108.Size = param_1->Size;
    local_108._8_8_ = *(undefined8 *)&param_1->Scale;
    local_108._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_108._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_108.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_108.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_108._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UWidget::FOnPointerEvent_DelegateWrapper
              ((FEventReply *)&local_c8,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseButtonUpEvent,&local_108
               ,param_2);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// HandleMouseDoubleClick @ 146928420

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UBorder::HandleMouseDoubleClick
          (UBorder *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FGeometry local_108;
  FReply local_c8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseDoubleClickEvent);
  if (bVar1) {
    local_108.Size = param_1->Size;
    local_108._8_8_ = *(undefined8 *)&param_1->Scale;
    local_108._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_108._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_108.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_108.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_108._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UWidget::FOnPointerEvent_DelegateWrapper
              ((FEventReply *)&local_c8,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseDoubleClickEvent,
               &local_108,param_2);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// HandleMouseMove @ 1469284e0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UBorder::HandleMouseMove
          (UBorder *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  FGeometry local_108;
  FReply local_c8;
  
  bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseMoveEvent);
  if (bVar1) {
    local_108.Size = param_1->Size;
    local_108._8_8_ = *(undefined8 *)&param_1->Scale;
    local_108._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    local_108._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    local_108.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    local_108.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    local_108._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    UWidget::FOnPointerEvent_DelegateWrapper
              ((FEventReply *)&local_c8,
               (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMouseMoveEvent,&local_108,
               param_2);
    FReply::FReply(__return_storage_ptr__,&local_c8);
    FReply::~FReply(&local_c8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// OnSlotAdded @ 1469300c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorder::OnSlotAdded(UBorder *this,UPanelSlot *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  TSharedRef<SBorder,1> local_28;
  FString local_18;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar4 = GetTypeName<UBorderSlot>((FString *)&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = UBorderSlot::StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    lVar2 = *(longlong *)&(this->Padding).Right;
    param_1[1]._padding_ = *(longlong *)&this->Padding;
    param_1[1]._padding_ = lVar2;
    *(uchar *)&param_1[1]._padding_ = (this->HorizontalAlignment).Value;
    *(uchar *)((longlong)&param_1[1]._padding_ + 1) = (this->VerticalAlignment).Value;
    if ((this->MyBorder).Object != (SBorder *)0x0) {
      local_28.Object = (this->MyBorder).Object;
      local_28.SharedReferenceCount.ReferenceController =
           (this->MyBorder).SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UBorderSlot::BuildSlot((UBorderSlot *)param_1,&local_28);
    }
    return;
  }
  pFVar4 = GetTypeName<UBorderSlot>((FString *)&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// OnSlotRemoved @ 1469303f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorder::OnSlotRemoved(UBorder *this,UPanelSlot *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pSVar1 = (this->MyBorder).Object;
  if (pSVar1 != (SBorder *)0x0) {
    pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
    local_18 = SNullWidget::NullWidget.Object;
    local_10 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar2)(pSVar1,&local_18);
  }
  return;
}

// PostLoad @ 146932fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBorder::PostLoad(UBorder *this)

{
  UWidget *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPanelSlot *pUVar6;
  UClass *pUVar7;
  UPanelSlot *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  iVar5 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if ((0 < iVar5) &&
     (pUVar6 = UContentWidget::GetContentSlot((UContentWidget *)this), pUVar6 != (UPanelSlot *)0x0))
  {
    pUVar7 = UBorderSlot::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UBorderSlot::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = this;
      pUVar6 = (UPanelSlot *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar9 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pUVar8 = UContentWidget::GetContentSlot((UContentWidget *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr, pUVar1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr;
      (pUVar6->Content).field0_0x0.DebugPtr = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (pUVar1->Slot).field0_0x0.DebugPtr = pUVar6;
      if (*(int *)&this->field_0x1b8 < 1) {
        local_a8 = 0;
        local_a0 = (longlong)*(int *)&this->field_0x1b8;
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
      puVar2 = *(undefined8 **)&this->field_0x1b0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *puVar2 = pUVar6;
    }
  }
  return;
}

// RebuildWidget @ 146935880

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UBorder::RebuildWidget(UBorder *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SBorder *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  UBorderSlot *this_00;
  UClass *pUVar12;
  TSharedRef<SBorder,1> *pTVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SBorder *local_458;
  FSharedReferencer<1> local_450;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_448;
  TSharedRef<SBorder,1> local_430;
  FArguments local_420;
  
  pFVar10 = SBorder::FArguments::FArguments(&local_420);
  pFVar10->_FlipForRightToLeftFlowDirection = this->bFlipForRightToLeftFlowDirection;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_448,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Border.cpp"
             ,0x33,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_448._Widget.Object;
  if ((local_448._Widget.Object == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)local_448._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SBorder::Construct(local_448._Widget.Object,pFVar10);
  if ((local_448._Widget.Object == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  if (((local_448._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_448._Widget.Object)->_padding_ + 0x228))(local_448._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_1469359d6;
  }
  else {
LAB_1469359d6:
    bVar8 = 0x20;
  }
  FVar5.ReferenceController = local_448._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_448._Widget.Object)->_padding_ =
       (byte)(local_448._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_448._Widget.Object)->_padding_ =
       (byte)(local_448._Widget.Object)->_padding_ | bVar8;
  pbVar1 = (byte *)((longlong)&(local_448._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_448._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_448._Widget.Object = (SBorder *)0x0;
  if ((pSVar3 == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  local_458 = pSVar3;
  local_450.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyBorder != (TSharedPtr<SBorder,1> *)&local_458) {
    (this->MyBorder).Object = pSVar3;
    local_458 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBorder).SharedReferenceCount,&local_450);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_450.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._ShowEffectWhenDisabled.Getter)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._ForegroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._BorderBackgroundColor.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._DesiredSizeScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._ContentScale.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._BorderImage.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._OnMouseDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._OnMouseMove);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._OnMouseButtonUp);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_420._Padding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_420._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_420);
  iVar9 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar9 < 1) goto LAB_146935b8f;
  this_00 = (UBorderSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (UBorderSlot *)0x0) {
LAB_146935b75:
    this_00 = (UBorderSlot *)0x0;
  }
  else {
    pUVar12 = UBorderSlot::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar12->_padding_)) goto LAB_146935b75;
  }
  pTVar13 = TSharedPtr<SBorder,1>::ToSharedRef(&this->MyBorder,&local_430);
  UBorderSlot::BuildSlot(this_00,pTVar13);
LAB_146935b8f:
  if (((this->MyBorder).Object == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pTVar2 = (this->MyBorder).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyBorder).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SBorder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14693ab10

void __thiscall UBorder::ReleaseSlateResources(UBorder *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyBorder != (TSharedPtr<SBorder,1> *)&local_18) {
    (this->MyBorder).Object = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBorder).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetBrush @ 1469421e0

void __thiscall UBorder::SetBrush(UBorder *this,FSlateBrush *param_1)

{
  SBorder *this_00;
  TAttribute<FSlateBrush_const_*> local_38;
  
  FSlateBrush::operator=(&this->Background,param_1);
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = &this->Background;
    SBorder::SetBorderImage(this_00,&local_38);
  }
  return;
}

// SetBrushColor @ 146942250

void __thiscall UBorder::SetBrushColor(UBorder *this,FLinearColor *param_1)

{
  SBorder *this_00;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_38._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  *(undefined8 *)&(this->BrushColor).field0_0x0 = local_38._0_8_;
  *(undefined8 *)((longlong)&(this->BrushColor).field0_0x0 + 8) = local_38._8_8_;
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetBorderBackgroundColor(this_00,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// SetBrushFromAsset @ 1469422b0

void __thiscall UBorder::SetBrushFromAsset(UBorder *this,USlateBrushAsset *param_1)

{
  FSlateBrush *this_00;
  SBorder *this_01;
  FSlateBrush *pFVar1;
  TAttribute<FSlateBrush_const_*> local_198;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  this_00 = &this->Background;
  if (param_1 == (USlateBrushAsset *)0x0) {
    pFVar1 = FSlateBrush::FSlateBrush(&local_b8);
    FSlateBrush::operator=(this_00,pFVar1);
    local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
    local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
         local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar1 = FSlateBrush::FSlateBrush(&local_168,&param_1->Brush);
    FSlateBrush::operator=(this_00,pFVar1);
    local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  this_01 = (this->MyBorder).Object;
  if (this_01 != (SBorder *)0x0) {
    local_198.Getter._16_8_ = 0;
    local_198.bIsSet = true;
    local_198.Getter._0_8_ = 0;
    local_198.Getter._8_8_ = 0;
    local_198.Value = this_00;
    SBorder::SetBorderImage(this_01,&local_198);
  }
  return;
}

// SetBrushFromMaterial @ 146942380

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorder::SetBrushFromMaterial(UBorder *this,UMaterialInterface *param_1)

{
  SBorder *this_00;
  FString local_48;
  TAttribute<FSlateBrush_const_*> local_38;
  
  if ((param_1 == (UMaterialInterface *)0x0) && (4 < (byte)LogSlate._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FSlateBrush::SetResourceObject(&this->Background,(UObject *)param_1);
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = &this->Background;
    SBorder::SetBorderImage(this_00,&local_38);
  }
  return;
}

// SetBrushFromTexture @ 146942440

void __thiscall UBorder::SetBrushFromTexture(UBorder *this,UTexture2D *param_1)

{
  SBorder *this_00;
  TAttribute<FSlateBrush_const_*> local_38;
  
  FSlateBrush::SetResourceObject(&this->Background,(UObject *)param_1);
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = &this->Background;
    SBorder::SetBorderImage(this_00,&local_38);
  }
  return;
}

// SetContentColorAndOpacity @ 1469427e0

void __thiscall UBorder::SetContentColorAndOpacity(UBorder *this,FLinearColor *param_1)

{
  SBorder *pSVar1;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  pSVar1 = (this->MyBorder).Object;
  *(undefined8 *)&(this->ContentColorAndOpacity).field0_0x0 = local_40._0_8_;
  *(undefined8 *)((longlong)&(this->ContentColorAndOpacity).field0_0x0 + 8) = local_40._8_8_;
  if (pSVar1 != (SBorder *)0x0) {
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FLinearColor> *)&local_40._s_0,None
            );
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetDesiredSizeScale @ 146942b30

void __thiscall UBorder::SetDesiredSizeScale(UBorder *this,TVector2<double> *param_1)

{
  SBorder *this_00;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  (this->DesiredSizeScale).field0_0x0._s_0.X = local_38._s_0.X;
  (this->DesiredSizeScale).field0_0x0._s_0.Y = local_38._s_0.Y;
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetDesiredSizeScale(this_00,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// SetHorizontalAlignment @ 146942c20

void __thiscall UBorder::SetHorizontalAlignment(UBorder *this,EHorizontalAlignment param_1)

{
  longlong *plVar1;
  SBorder *pSVar2;
  FSlotBase *this_00;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pSVar2 = (this->MyBorder).Object;
  if (pSVar2 == (SBorder *)0x0) {
    return;
  }
  plVar1 = &pSVar2->_padding_;
  if ((EHorizontalAlignment)*plVar1 != param_1) {
    *(EHorizontalAlignment *)plVar1 = param_1;
    this_00 = (FSlotBase *)&pSVar2->_padding_;
    if (plVar1 == (longlong *)0x0) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

// SetPadding @ 146943af0

void __thiscall UBorder::SetPadding(UBorder *this,FMargin *param_1)

{
  SBorder *this_00;
  TAttribute<FMargin> local_38;
  
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  (this->Padding).Left = local_38.Value.Left;
  (this->Padding).Top = local_38.Value.Top;
  (this->Padding).Right = local_38.Value.Right;
  (this->Padding).Bottom = local_38.Value.Bottom;
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding(this_00,&local_38);
  }
  return;
}

// SetShowEffectWhenDisabled @ 146944090

void __thiscall UBorder::SetShowEffectWhenDisabled(UBorder *this,bool param_1)

{
  SBorder *this_00;
  TAttribute<bool> local_28;
  
  this->bShowEffectWhenDisabled = '\0';
  this->field_0x1ca = this->field_0x1ca | param_1;
  this_00 = (this->MyBorder).Object;
  if (this_00 != (SBorder *)0x0) {
    local_28.Value = this->bShowEffectWhenDisabled;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBorder::SetShowEffectWhenDisabled(this_00,&local_28);
  }
  return;
}

// SetVerticalAlignment @ 1469444e0

void __thiscall UBorder::SetVerticalAlignment(UBorder *this,EVerticalAlignment param_1)

{
  SBorder *pSVar1;
  FSlotBase *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pSVar1 = (this->MyBorder).Object;
  if (pSVar1 == (SBorder *)0x0) {
    return;
  }
  if (*(EVerticalAlignment *)((longlong)&pSVar1->_padding_ + 4) != param_1) {
    *(EVerticalAlignment *)((longlong)&pSVar1->_padding_ + 4) = param_1;
    this_00 = (FSlotBase *)&pSVar1->_padding_;
    if (pSVar1 == (SBorder *)0xfffffffffffffd98) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUBorder @ 146945630

void __cdecl UBorder::StaticRegisterNativesUBorder(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UBorder_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 1469466e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBorder::SynchronizeProperties(UBorder *this)

{
  FName FVar1;
  SBorder *pSVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  bool bVar6;
  UObject *pUVar7;
  TAttribute<FLinearColor> *pTVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FSlateColor *pFVar11;
  UFunction *pUVar12;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar13;
  byte bVar14;
  byte bVar15;
  FName local_res8;
  FName local_res10;
  UBorder *local_res18;
  UObject *local_res20;
  uint uStack_78c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_788;
  FDelegateAllocation local_780;
  undefined1 local_770 [8];
  FDelegateAllocation local_768;
  FSlateBrush *local_758;
  undefined1 local_750;
  undefined1 local_748 [8];
  ForAnyElementType FStack_740;
  ulonglong local_738;
  UBorder *local_728;
  undefined4 uStack_720;
  uint uStack_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined4 local_708;
  undefined1 local_704 [4];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_700;
  ForAnyElementType FStack_6f8;
  ulonglong local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6d8;
  undefined1 local_6d0 [8];
  ForAnyElementType FStack_6c8;
  ulonglong local_6c0;
  undefined1 local_6b8 [8];
  FDelegateAllocation local_6b0;
  undefined1 local_6a0 [8];
  FDelegateAllocation local_698;
  undefined1 local_688 [8];
  FDelegateAllocation local_680;
  undefined1 local_670 [8];
  FDelegateAllocation local_668;
  UBorder *local_658;
  UBorder *local_650;
  UBorder *local_648;
  UBorder *local_640;
  FSlateBrush *local_638;
  undefined1 local_630;
  undefined1 local_628 [8];
  void *pvStack_620;
  int local_618;
  TAttribute<bool> local_610;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined1 local_5e0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5d8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined4 local_5b0;
  undefined1 local_5ac;
  TDelegateBase<FNotThreadSafeDelegateMode> local_5a8;
  FSlateBrush *local_590;
  undefined1 local_588;
  TDelegateBase<FNotThreadSafeDelegateMode> local_580;
  FDestructionSentinel local_568;
  FDestructionSentinel local_550;
  FDestructionSentinel local_538;
  FDestructionSentinel local_520;
  FDestructionSentinel local_508;
  FDestructionSentinel local_4f0;
  FDestructionSentinel local_4d8;
  FDelegateAllocation *local_4c0;
  FDestructionSentinel local_4b8;
  FDelegateAllocation *local_4a0;
  FDestructionSentinel local_498;
  FDelegateAllocation *local_480;
  FDestructionSentinel local_478;
  FDelegateAllocation *local_460;
  FDestructionSentinel local_458;
  FDelegateAllocation *local_440;
  FDestructionSentinel local_438;
  FDelegateAllocation *local_420;
  FDestructionSentinel local_418;
  FDelegateAllocation *local_400;
  FLinearColor_u_0 local_3f8;
  undefined1 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  TAttribute<FMargin> local_3c8;
  TVector2<double>_u_0 local_398;
  undefined1 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_358;
  undefined1 local_354;
  TDelegateBase<FNotThreadSafeDelegateMode> local_350;
  FLinearColor_u_0 local_338;
  undefined4 local_328;
  undefined1 local_324;
  TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> local_320;
  FLinearColor_u_0 local_308;
  undefined1 local_2f8;
  TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> local_2f0;
  TAttribute<FSlateBrush_const_*> local_2d8;
  FReadAccessScope local_2b0;
  FReadAccessScope local_298;
  FReadAccessScope local_280;
  FSlateBrush local_268;
  undefined1 local_1b8;
  undefined1 local_1b0 [8];
  FDelegateAllocation FStack_1a8;
  FSlateColor local_198;
  TAttribute<FLinearColor> local_180;
  TAttribute<FLinearColor> local_150;
  TAttribute<FSlateBrush> local_118;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->MyBorder).Object != (SBorder *)0x0) {
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &this->ContentColorAndOpacityDelegate);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ContentColorAndOpacityDelegate,&local_280);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->ContentColorAndOpacityDelegate).field_0x10
      ;
      local_res8.Number = *(uint *)&(this->ContentColorAndOpacityDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_280);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                          &this->ContentColorAndOpacityDelegate);
      pTVar8 = TAttribute<FLinearColor>::Create<UObject>(&local_180,pUVar7,&local_res8);
      local_5f0 = *(undefined8 *)&(pTVar8->Value).field0_0x0;
      uStack_5e8 = *(undefined8 *)((longlong)&(pTVar8->Value).field0_0x0 + 8);
      local_5e0 = pTVar8->bIsSet;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_5d8,(TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar8->Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180.Getter);
    }
    else {
      local_6e8 = *(undefined8 *)&(this->ContentColorAndOpacity).field0_0x0;
      uStack_6e0 = *(undefined8 *)((longlong)&(this->ContentColorAndOpacity).field0_0x0 + 8);
      local_6d8 = 1;
      local_6c0 = 0;
      local_6d0 = (undefined1  [8])0x0;
      FStack_6c8.Data = (FScriptContainerElement *)0x0;
      local_5e0 = 1;
      local_5f0 = local_6e8;
      uStack_5e8 = uStack_6e0;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_5d8,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d0,
                 (FWriteAccessScope *)&local_4f0);
      if (((int)local_6c0 != 0) && (FStack_6c8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_6c8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6c8,0,0,0x10);
        local_6c0 = local_6c0 & 0xffffffff00000000;
      }
      if (local_4f0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f0.Accessor,&local_4f0);
      }
      if (FStack_6c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_6c8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_6d0);
    }
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BrushColorDelegate);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BrushColorDelegate
                 ,&local_298);
      local_res10.ComparisonIndex.Value = *(uint *)&(this->BrushColorDelegate).field_0x10;
      local_res10.Number = *(uint *)&(this->BrushColorDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_298);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BrushColorDelegate);
      pTVar8 = TAttribute<FLinearColor>::Create<UObject>(&local_150,pUVar7,&local_res10);
      uStack_71c = uStack_78c;
      uStack_720 = 0;
      local_728 = (UBorder *)UWidget::ConvertLinearColorToSlateColor;
      local_770 = (undefined1  [8])0x0;
      local_768.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_768.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_770,
                 (FWriteAccessScope *)&local_438);
      local_420 = &local_768;
      puVar9 = UE::Core::Private::DelegateAllocate(0x58,&local_768);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFLinearColor______6B_
        ;
        uVar5 = *(undefined8 *)((longlong)&(pTVar8->Value).field0_0x0 + 8);
        puVar9[1] = *(undefined8 *)&(pTVar8->Value).field0_0x0;
        puVar9[2] = uVar5;
        *(bool *)(puVar9 + 3) = pTVar8->bIsSet;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 4),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar8->Getter);
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[7] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVUBorder____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFLinearColor______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[8] = 0;
        local_res18 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 8),(FObjectPtr)&local_res18);
        puVar9[9] = local_728;
        puVar9[10] = CONCAT44(uStack_71c,uStack_720);
      }
      if (local_438.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
      }
      local_358 = 0;
      local_368 = ___xmm_3f8000003f800000000000003f800000;
      uStack_360 = _UNK_15090c6d8;
      local_354 = 1;
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_350,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_770);
      puVar9 = &local_368;
      bVar15 = 0x1c;
    }
    else {
      local_3f8._0_8_ = *(undefined8 *)&(this->BrushColor).field0_0x0;
      local_3f8._8_8_ = *(undefined8 *)((longlong)&(this->BrushColor).field0_0x0 + 8);
      local_3e8 = 1;
      local_3d0 = 0;
      local_3e0 = 0;
      uStack_3d8 = 0;
      pFVar11 = UWidget::ConvertLinearColorToSlateColor
                          ((UWidget *)this,&local_198,(TAttribute<FLinearColor> *)&local_3f8._s_0);
      puVar9 = &local_718;
      bVar15 = 0x20;
      local_718 = *(undefined8 *)&(pFVar11->SpecifiedColor).field0_0x0;
      uStack_710 = *(undefined8 *)((longlong)&(pFVar11->SpecifiedColor).field0_0x0 + 8);
      local_708._0_1_ = pFVar11->ColorUseRule;
      local_708._1_1_ = pFVar11->ColorTableId;
      local_708._2_2_ = *(undefined2 *)&pFVar11->field_0x12;
      local_6f0 = 0;
      local_704[0] = 1;
      local_700.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_6f8.Data = (FScriptContainerElement *)0x0;
    }
    local_5c0 = *puVar9;
    uStack_5b8 = puVar9[1];
    local_5b0 = *(undefined4 *)(puVar9 + 2);
    local_5ac = *(undefined1 *)((longlong)puVar9 + 0x14);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_5a8,(TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 3));
    if ((bVar15 & 0x20) != 0) {
      bVar15 = bVar15 & 0xdf;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_700,(FWriteAccessScope *)&local_568);
      if (((int)local_6f0 != 0) && (FStack_6f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_6f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6f8,0,0,0x10);
        local_6f0 = local_6f0 & 0xffffffff00000000;
      }
      if (local_568.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_568.Accessor,&local_568);
      }
      if (FStack_6f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_6f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_700.AccessDetector);
    }
    if ((bVar15 & 0x10) != 0) {
      bVar15 = bVar15 & 0xef;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_350);
    }
    if ((bVar15 & 8) != 0) {
      bVar15 = bVar15 & 0xf7;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_770,
                 (FWriteAccessScope *)&local_550);
      if ((local_768.DelegateSize != 0) &&
         (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_768.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_768,0,0,0x10);
        local_768.DelegateSize = 0;
      }
      if (local_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
      }
      if (local_768.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_768.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_770);
    }
    if ((bVar15 & 4) != 0) {
      bVar15 = bVar15 & 0xfb;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_150.Getter);
    }
    bVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BackgroundDelegate);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->BackgroundDelegate
                 ,&local_2b0);
      FVar1.ComparisonIndex.Value = *(uint *)&(this->BackgroundDelegate).field_0x10;
      FVar1.Number = *(uint *)&(this->BackgroundDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_2b0);
      pUVar7 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->BackgroundDelegate);
      FSlateBrush::FSlateBrush(&local_268);
      local_1b8 = 1;
      local_1b0 = (undefined1  [8])0x0;
      FStack_1a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_1a8.DelegateSize = 0;
      FStack_1a8._12_4_ = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b0,
                 (FWriteAccessScope *)&local_458);
      local_440 = &FStack_1a8;
      puVar9 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1a8);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[2] = uVar10;
        *puVar9 = &
                  ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar9 + 4) = FVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        puVar9[5] = 0;
        local_res20 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 5),(FObjectPtr)&local_res20);
        if (FVar1 == (FName)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InFunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x56,L"");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (pUVar7 != (UObject *)0x0) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar9 + 5));
          pUVar12 = UObject::FindFunctionChecked(pUVar7,FVar1);
          puVar9[3] = pUVar12;
        }
      }
      if (local_458.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
      }
      local_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_780.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_788,(FWriteAccessScope *)&local_418);
      local_400 = &local_780;
      puVar9 = UE::Core::Private::DelegateAllocate(0x100,&local_780);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = &
                  ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFSlateBrush______6B_
        ;
        FSlateBrush::FSlateBrush((FSlateBrush *)(puVar9 + 2),&local_268);
        *(undefined1 *)(puVar9 + 0x18) = local_1b8;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar9 + 0x19),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
        uVar10 = FDelegateHandle::GenerateNewID();
        puVar9[0x1c] = uVar10;
        *puVar9 = &
                  ___7__TBaseUObjectMethodDelegateInstance__00__CBVUBorder____A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TAttribute_UFSlateBrush______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar9[0x1d] = 0;
        local_640 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 0x1d),(FObjectPtr)&local_640);
        puVar9[0x1e] = ConvertImage;
        puVar9[0x1f] = (ulonglong)uStack_78c << 0x20;
      }
      if (local_418.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
      }
      local_638 = (FSlateBrush *)0x0;
      local_630 = 1;
      local_628 = (undefined1  [8])0x0;
      pvStack_620 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_788,(FWriteAccessScope *)&local_538);
      if (pvStack_620 != (void *)0x0) {
        FMemory::Free(pvStack_620);
      }
      pvStack_620 = (void *)local_780.DelegateAllocator;
      local_618 = local_780.DelegateSize;
      local_780.DelegateSize = 0;
      local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_538.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
      }
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_628;
      bVar14 = 0xc0;
      bVar4 = true;
      bVar6 = false;
      local_590 = local_638;
      local_588 = local_630;
    }
    else {
      FSlateBrush::FSlateBrush(&local_118.Value,&this->Background);
      local_118.bIsSet = true;
      local_118.Getter._0_8_ = 0;
      local_118.Getter._8_8_ = 0;
      local_118.Getter._16_8_ = 0;
      local_590 = ConvertImage(this,&local_118);
      local_588 = 1;
      local_738 = 0;
      pTVar13 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748;
      local_750 = 1;
      local_748 = (undefined1  [8])0x0;
      FStack_740.Data = (FScriptContainerElement *)0x0;
      bVar14 = 0;
      bVar4 = false;
      bVar6 = true;
      local_758 = local_590;
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_580,pTVar13);
    if (bVar6) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
                 (FWriteAccessScope *)&local_520);
      if (((int)local_738 != 0) && (FStack_740.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_740.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10);
        local_738 = local_738 & 0xffffffff00000000;
      }
      if (local_520.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
      }
      if (FStack_740.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_740.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_748);
    }
    if (bVar4) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_628);
    }
    if ((char)(bVar14 | bVar15) < '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_788,(FWriteAccessScope *)&local_508);
      if ((local_780.DelegateSize != 0) &&
         (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_780.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_780,0,0,0x10);
        local_780.DelegateSize = 0;
      }
      if (local_508.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
      }
      if (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_780.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_788.AccessDetector);
    }
    if ((bVar14 & 0x40) != 0) {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b0);
      local_268._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_268.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    }
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_3c8.Value.Left = (this->Padding).Left;
    local_3c8.Value.Top = (this->Padding).Top;
    local_3c8.Value.Right = (this->Padding).Right;
    local_3c8.Value.Bottom = (this->Padding).Bottom;
    local_3c8.bIsSet = true;
    local_3c8.Getter._16_8_ = 0;
    local_3c8.Getter._0_8_ = 0;
    local_3c8.Getter._8_8_ = 0;
    SBorder::SetPadding((this->MyBorder).Object,&local_3c8);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_328 = local_5b0;
    local_338._0_8_ = local_5c0;
    local_338._8_8_ = uStack_5b8;
    local_324 = local_5ac;
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_320,
               (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)&local_5a8);
    SBorder::SetBorderBackgroundColor(pSVar2,(TAttribute<FSlateColor> *)&local_338._s_0);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_308._0_8_ = local_5f0;
    local_308._8_8_ = uStack_5e8;
    local_2f8 = local_5e0;
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2f0,
               (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)&local_5d8);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar2->_padding_,(SWidget *)pSVar2,(TAttribute<FLinearColor> *)&local_308._s_0,
             None);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_2f0);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_2d8.Value = local_590;
    local_2d8.bIsSet = (bool)local_588;
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
              (&local_2d8.Getter,
               (TDelegate<FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy> *)&local_580
              );
    SBorder::SetBorderImage(pSVar2,&local_2d8);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_398._s_0.X = (this->DesiredSizeScale).field0_0x0._s_0.X;
    local_398._s_0.Y = (this->DesiredSizeScale).field0_0x0._s_0.Y;
    local_388 = 1;
    local_370 = 0;
    local_380 = 0;
    uStack_378 = 0;
    SBorder::SetDesiredSizeScale
              ((this->MyBorder).Object,(TAttribute<UE::Math::TVector2<double>_> *)&local_398._s_0);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_610.Value = this->bShowEffectWhenDisabled;
    local_610.bIsSet = true;
    local_610.Getter._16_8_ = 0;
    local_610.Getter._0_8_ = 0;
    local_610.Getter._8_8_ = 0;
    SBorder::SetShowEffectWhenDisabled((this->MyBorder).Object,&local_610);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_6a0 = (undefined1  [8])0x0;
    local_698.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_698.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a0,
               (FWriteAccessScope *)&local_4d8);
    local_4c0 = &local_698;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_698);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBorder____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_658 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_658);
      puVar9[4] = HandleMouseButtonDown;
      puVar9[5] = (ulonglong)uStack_78c << 0x20;
    }
    if (local_4d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4d8.Accessor,&local_4d8);
    }
    SWidget::SetOnMouseButtonDown
              ((SWidget *)pSVar2,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_6a0);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_688 = (undefined1  [8])0x0;
    local_680.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_680.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_688,
               (FWriteAccessScope *)&local_4b8);
    local_4a0 = &local_680;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_680);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBorder____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_650 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_650);
      puVar9[4] = HandleMouseButtonUp;
      puVar9[5] = (ulonglong)uStack_78c << 0x20;
    }
    if (local_4b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b8.Accessor,&local_4b8);
    }
    SWidget::SetOnMouseButtonUp
              ((SWidget *)pSVar2,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_688);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_670 = (undefined1  [8])0x0;
    local_668.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_668.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_670,
               (FWriteAccessScope *)&local_498);
    local_480 = &local_668;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_668);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBorder____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_648 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_648);
      puVar9[4] = HandleMouseMove;
      puVar9[5] = (ulonglong)uStack_78c << 0x20;
    }
    if (local_498.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
    }
    SWidget::SetOnMouseMove
              ((SWidget *)pSVar2,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_670);
    if ((this->MyBorder).Object == (SBorder *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar2 = (this->MyBorder).Object;
    local_6b8 = (undefined1  [8])0x0;
    local_6b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b8,
               (FWriteAccessScope *)&local_478);
    local_460 = &local_6b0;
    puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_6b0);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[2] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBorder____A6A_AVFReply__AEBUFGeometry__AEBUFPointerEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[3] = 0;
      local_728 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_728);
      puVar9[4] = HandleMouseDoubleClick;
      puVar9[5] = (ulonglong)uStack_78c << 0x20;
    }
    if (local_478.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_478.Accessor,&local_478);
    }
    SWidget::SetOnMouseDoubleClick
              ((SWidget *)pSVar2,
               (TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
                *)local_6b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_580);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_5a8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_5d8);
  }
  return;
}

// execGetDynamicMaterial @ 1469518d0

void __cdecl UBorder::execGetDynamicMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  TAttribute<FSlateBrush_const_*> local_48;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = *(UMaterialInstanceDynamic **)&param_1[0xe].field_0x18;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create((UMaterialInterface *)pUVar3,param_1,(FName)0x0);
        FSlateBrush::SetResourceObject((FSlateBrush *)&param_1[0xd].field_0x8,(UObject *)pUVar3);
        if (*(longlong *)&param_1[0x16].field_0x8 != 0) {
          local_48.Getter._0_8_ = 0;
          local_48.Getter._8_8_ = 0;
          local_48.Getter._16_8_ = 0;
          local_48.bIsSet = true;
          local_48.Value = (FSlateBrush *)&param_1[0xd].field_0x8;
          SBorder::SetBorderImage(*(SBorder **)&param_1[0x16].field_0x8,&local_48);
        }
      }
      *(UMaterialInstanceDynamic **)param_3 = pUVar3;
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetBrush @ 146954ba0

void __cdecl UBorder::execSetBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  TAttribute<FSlateBrush_const_*> local_e8;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar2 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::operator=((FSlateBrush *)&param_1[0xd].field_0x8,pFVar2);
  if (*(SBorder **)&param_1[0x16].field_0x8 != (SBorder *)0x0) {
    local_e8.Getter._16_8_ = 0;
    local_e8.bIsSet = true;
    local_e8.Getter._0_8_ = 0;
    local_e8.Getter._8_8_ = 0;
    local_e8.Value = (FSlateBrush *)&param_1[0xd].field_0x8;
    SBorder::SetBorderImage(*(SBorder **)&param_1[0x16].field_0x8,&local_e8);
  }
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetBrushColor @ 146954ca0

void __cdecl UBorder::execSetBrushColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  undefined8 local_48;
  undefined8 uStack_40;
  FLinearColor_u_0 local_38;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x16].field_0x8;
  *(undefined8 *)&param_1[0x12].field_0x8 = local_48;
  *(undefined8 *)&param_1[0x12].field_0x10 = uStack_40;
  if (this != (SBorder *)0x0) {
    local_28 = 0;
    local_10 = 0;
    local_38._0_8_ = local_48;
    local_38._8_8_ = uStack_40;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetBorderBackgroundColor(this,(TAttribute<FSlateColor> *)&local_38._s_0);
  }
  return;
}

// execSetBrushFromAsset @ 146954d60

void __cdecl UBorder::execSetBrushFromAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  longlong local_res8;
  TAttribute<FSlateBrush_const_*> local_198;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res8 == 0) {
    pFVar2 = FSlateBrush::FSlateBrush(&local_b8);
    FSlateBrush::operator=((FSlateBrush *)&param_1[0xd].field_0x8,pFVar2);
    local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
    local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController =
         local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  }
  else {
    pFVar2 = FSlateBrush::FSlateBrush(&local_168,(FSlateBrush *)(local_res8 + 0x30));
    FSlateBrush::operator=((FSlateBrush *)&param_1[0xd].field_0x8,pFVar2);
    local_168._padding_ = (longlong)&___7FSlateBrush__6B_;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  if (*(SBorder **)&param_1[0x16].field_0x8 != (SBorder *)0x0) {
    local_198.Getter._16_8_ = 0;
    local_198.bIsSet = true;
    local_198.Getter._0_8_ = 0;
    local_198.Getter._8_8_ = 0;
    local_198.Value = (FSlateBrush *)&param_1[0xd].field_0x8;
    SBorder::SetBorderImage(*(SBorder **)&param_1[0x16].field_0x8,&local_198);
  }
  return;
}

// execSetBrushFromMaterial @ 146954ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBorder::execSetBrushFromMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  FString local_48;
  TAttribute<FSlateBrush_const_*> local_38;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res8 == (UObject *)0x0) && (4 < (byte)LogSlate._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  FSlateBrush::SetResourceObject((FSlateBrush *)&param_1[0xd].field_0x8,pUVar2);
  if (*(SBorder **)&param_1[0x16].field_0x8 != (SBorder *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = (FSlateBrush *)&param_1[0xd].field_0x8;
    SBorder::SetBorderImage(*(SBorder **)&param_1[0x16].field_0x8,&local_38);
  }
  return;
}

// execSetBrushFromTexture @ 146954fd0

void __cdecl UBorder::execSetBrushFromTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  TAttribute<FSlateBrush_const_*> local_38;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FSlateBrush::SetResourceObject((FSlateBrush *)&param_1[0xd].field_0x8,local_res8);
  if (*(SBorder **)&param_1[0x16].field_0x8 != (SBorder *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value = (FSlateBrush *)&param_1[0xd].field_0x8;
    SBorder::SetBorderImage(*(SBorder **)&param_1[0x16].field_0x8,&local_38);
  }
  return;
}

// execSetContentColorAndOpacity @ 1469551c0

void __cdecl UBorder::execSetContentColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  FLinearColor_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._0_8_ = local_28;
  local_18._8_8_ = uStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetContentColorAndOpacity((UBorder *)param_1,(FLinearColor *)&local_18._s_0);
  return;
}

// execSetDesiredSizeScale @ 146955300

void __cdecl UBorder::execSetDesiredSizeScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x16].field_0x8;
  *(double *)&param_1[0x13].field_0x8 = local_48;
  *(double *)&param_1[0x13].field_0x10 = dStack_40;
  if (this != (SBorder *)0x0) {
    local_28 = 1;
    local_10 = 0;
    local_38._s_0.X = local_48;
    local_38._s_0.Y = dStack_40;
    local_20 = 0;
    uStack_18 = 0;
    SBorder::SetDesiredSizeScale(this,(TAttribute<UE::Math::TVector2<double>_> *)&local_38._s_0);
  }
  return;
}

// execSetHorizontalAlignment @ 1469554f0

void __cdecl UBorder::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x16].field_0x8;
  param_1[0xb].field_0x10 = local_res8[0];
  if (this != (SBorder *)0x0) {
    SBorder::SetHAlign(this,(uint)local_res8[0]);
  }
  return;
}

// execSetPadding @ 146955d20

void __cdecl UBorder::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  FMargin local_58;
  FMargin local_48;
  TAttribute<FMargin> local_38;
  
  local_58.Left = 0.0;
  local_58.Top = 0.0;
  local_58.Right = 0.0;
  local_58.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Left = local_58.Left;
  local_48.Top = local_58.Top;
  local_48.Right = local_58.Right;
  local_48.Bottom = local_58.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x16].field_0x8;
  *(float *)&param_1[0xc].field_0x18 = local_58.Left;
  *(float *)&param_1[0xc].field_0x1c = local_58.Top;
  *(float *)&param_1[0xc].field_0x20 = local_58.Right;
  *(float *)&param_1[0xc].field_0x24 = local_58.Bottom;
  if (this != (SBorder *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Value.Left = local_58.Left;
    local_38.Value.Top = local_58.Top;
    local_38.Value.Right = local_58.Right;
    local_38.Value.Bottom = local_58.Bottom;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBorder::SetPadding(this,&local_38);
  }
  return;
}

// execSetShowEffectWhenDisabled @ 1469561e0

void __cdecl UBorder::execSetShowEffectWhenDisabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  int local_res8 [2];
  TAttribute<bool> local_28;
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0xb].field_0x12 = param_1[0xb].field_0x12 & 0xfe;
  this = *(SBorder **)&param_1[0x16].field_0x8;
  param_1[0xb].field_0x12 = param_1[0xb].field_0x12 | local_res8[0] != 0;
  if (this != (SBorder *)0x0) {
    local_28.Value = (bool)(param_1[0xb].field_0x12 & 1);
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SBorder::SetShowEffectWhenDisabled(this,&local_28);
  }
  return;
}

// execSetVerticalAlignment @ 146956970

void __cdecl UBorder::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBorder *this;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBorder **)&param_1[0x16].field_0x8;
  param_1[0xb].field_0x11 = local_res8[0];
  if (this != (SBorder *)0x0) {
    SBorder::SetVAlign(this,(uint)local_res8[0]);
  }
  return;
}

