// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 59

// GetPadding_WrapperImpl @ 1468dc420

void __cdecl UBackgroundBlur::GetPadding_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1d0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1c8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetPadding_WrapperImpl @ 1468dc440

void __cdecl UBackgroundBlur::SetPadding_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<FMargin> local_38;
  
  local_38.Value._0_8_ = *(undefined8 *)param_2;
  local_38.Value._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x1c8) = local_38.Value._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = local_38.Value._8_8_;
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetPadding(*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),&local_38);
  }
  return;
}

// GetHorizontalAlignment_WrapperImpl @ 1468dc490

void __cdecl UBackgroundBlur::GetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1d8);
  return;
}

// SetHorizontalAlignment_WrapperImpl @ 1468dc4a0

void __cdecl UBackgroundBlur::SetHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1d8) = bVar1;
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetHAlign(*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),(uint)bVar1);
    return;
  }
  return;
}

// GetVerticalAlignment_WrapperImpl @ 1468dc4d0

void __cdecl UBackgroundBlur::GetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1d9);
  return;
}

// SetVerticalAlignment_WrapperImpl @ 1468dc4e0

void __cdecl UBackgroundBlur::SetVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x1d9) = bVar1;
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetVAlign(*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),(uint)bVar1);
    return;
  }
  return;
}

// GetbApplyAlphaToBlur_WrapperImpl @ 1468dc510

void __cdecl UBackgroundBlur::GetbApplyAlphaToBlur_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1da);
  return;
}

// SetbApplyAlphaToBlur_WrapperImpl @ 1468dc520

void __cdecl UBackgroundBlur::SetbApplyAlphaToBlur_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  SWidget *this;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1da) = cVar1;
  this = *(SWidget **)((longlong)param_1 + 0x2c0);
  if (this == (SWidget *)0x0) {
    return;
  }
  if ((char)this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame !=
      cVar1) {
    *(char *)&this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame =
         cVar1;
    SWidget::Invalidate(this,Paint);
    return;
  }
  return;
}

// GetBlurStrength_WrapperImpl @ 1468dc540

void __cdecl UBackgroundBlur::GetBlurStrength_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1dc);
  return;
}

// SetBlurStrength_WrapperImpl @ 1468dc550

void __cdecl UBackgroundBlur::SetBlurStrength_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001468dc557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,*(undefined4 *)param_2);
  return;
}

// GetbOverrideAutoRadiusCalculation_WrapperImpl @ 1468dc570

void __cdecl
UBackgroundBlur::GetbOverrideAutoRadiusCalculation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1e0);
  return;
}

// SetbOverrideAutoRadiusCalculation_WrapperImpl @ 1468dc580

void __cdecl
UBackgroundBlur::SetbOverrideAutoRadiusCalculation_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  TAttribute<TOptional<int>_> local_38;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1e0) = cVar1;
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    local_38.Value.bIsSet = cVar1 != '\0';
    if (local_38.Value.bIsSet) {
      local_38.Value.TypedValue = *(int *)((longlong)param_1 + 0x1e4);
    }
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetBlurRadius(*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),&local_38);
  }
  return;
}

// GetBlurRadius_WrapperImpl @ 1468dc5f0

void __cdecl UBackgroundBlur::GetBlurRadius_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1e4);
  return;
}

// SetBlurRadius_WrapperImpl @ 1468dc600

void __cdecl UBackgroundBlur::SetBlurRadius_WrapperImpl(void *param_1,void *param_2)

{
  TAttribute<TOptional<int>_> local_38;
  
  local_38.Value.TypedValue = *(int *)param_2;
  *(int *)((longlong)param_1 + 0x1e4) = local_38.Value.TypedValue;
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    local_38.Value.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetBlurRadius(*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),&local_38);
    *(undefined1 *)((longlong)param_1 + 0x1e0) = 1;
  }
  return;
}

// GetCornerRadius_WrapperImpl @ 1468dc660

void __cdecl UBackgroundBlur::GetCornerRadius_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1f8);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x200);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x208);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1f0);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  *(undefined8 *)((longlong)param_2 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar3;
  return;
}

// SetCornerRadius_WrapperImpl @ 1468dc680

void __cdecl UBackgroundBlur::SetCornerRadius_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = *(undefined4 *)((longlong)param_2 + 8);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_18 = *(undefined4 *)((longlong)param_2 + 0x10);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_10 = *(undefined4 *)((longlong)param_2 + 0x18);
  uStack_c = *(undefined4 *)((longlong)param_2 + 0x1c);
  (**(code **)(*(longlong *)param_1 + 0x338))(local_28,&local_28);
  return;
}

// GetLowQualityFallbackBrush_WrapperImpl @ 1468dc6b0

void __cdecl UBackgroundBlur::GetLowQualityFallbackBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8,(FSlateBrush *)((longlong)param_1 + 0x210));
  FSlateBrush::operator=(param_2,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// SetLowQualityFallbackBrush_WrapperImpl @ 1468dc700

void __cdecl UBackgroundBlur::SetLowQualityFallbackBrush_WrapperImpl(void *param_1,void *param_2)

{
  FSlateBrush::operator=((FSlateBrush *)((longlong)param_1 + 0x210),param_2);
  if (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0) != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetLowQualityBackgroundBrush
              (*(SBackgroundBlur **)((longlong)param_1 + 0x2c0),
               (FSlateBrush *)((longlong)param_1 + 0x210));
  }
  return;
}

// StaticClass @ 1468dc750

UClass * __cdecl UBackgroundBlur::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BackgroundBlur",
               &Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton,
               StaticRegisterNativesUBackgroundBlur,0x2d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBackgroundBlur>,
               InternalVTableHelperCtorCaller<UBackgroundBlur>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton;
}

// UBackgroundBlur @ 146900430

UBackgroundBlur * __thiscall
UBackgroundBlur::UBackgroundBlur(UBackgroundBlur *this,FVTableHelper *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->CornerRadius).field0_0x0._s_0.W = 1.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  (this->CornerRadius).field0_0x0._s_0.X = 0.0;
  (this->CornerRadius).field0_0x0._s_0.Y = 0.0;
  (this->CornerRadius).field0_0x0._s_0.Z = 0.0;
  FSlateBrush::FSlateBrush(&this->LowQualityFallbackBrush);
  (this->MyBackgroundBlur).Object = (SBackgroundBlur *)0x0;
  (this->MyBackgroundBlur).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UBackgroundBlur @ 1469004c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBackgroundBlur * __thiscall
UBackgroundBlur::UBackgroundBlur(UBackgroundBlur *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FSlateBrush *pFVar2;
  TVector2<float>_u_0 local_res8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  this->bApplyAlphaToBlur = true;
  this->BlurStrength = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  this->bOverrideAutoRadiusCalculation = false;
  this->BlurRadius = 0;
  (this->CornerRadius).field0_0x0._s_0.X = 0.0;
  (this->CornerRadius).field0_0x0._s_0.Y = 0.0;
  (this->CornerRadius).field0_0x0._s_0.Z = 0.0;
  (this->CornerRadius).field0_0x0._s_0.W = 0.0;
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar2 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,(FDeprecateVector2DParameter *)&local_res8._s_0);
  FSlateBrush::FSlateBrush(&this->LowQualityFallbackBrush,pFVar2);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  (this->MyBackgroundBlur).Object = (SBackgroundBlur *)0x0;
  (this->MyBackgroundBlur).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UBackgroundBlur @ 146904480

void __thiscall UBackgroundBlur::~UBackgroundBlur(UBackgroundBlur *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBackgroundBlur).SharedReferenceCount.ReferenceController);
  pTVar1 = (this->LowQualityFallbackBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->LowQualityFallbackBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  return;
}

// GetApplyAlphaToBlur @ 14691da60

bool __thiscall UBackgroundBlur::GetApplyAlphaToBlur(UBackgroundBlur *this)

{
  return this->bApplyAlphaToBlur;
}

// GetBlurRadius @ 14691dc50

int __thiscall UBackgroundBlur::GetBlurRadius(UBackgroundBlur *this)

{
  return this->BlurRadius;
}

// GetBlurStrength @ 14691dc60

float __thiscall UBackgroundBlur::GetBlurStrength(UBackgroundBlur *this)

{
  return this->BlurStrength;
}

// GetCornerRadius @ 14691de50

TVector4<double> * __thiscall
UBackgroundBlur::GetCornerRadius(UBackgroundBlur *this,TVector4<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->CornerRadius).field0_0x0._s_0.Y;
  dVar2 = (this->CornerRadius).field0_0x0._s_0.Z;
  dVar3 = (this->CornerRadius).field0_0x0._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->CornerRadius).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.W = dVar3;
  return __return_storage_ptr__;
}

// GetHorizontalAlignment @ 14691e840

EHorizontalAlignment __thiscall UBackgroundBlur::GetHorizontalAlignment(UBackgroundBlur *this)

{
  return (EHorizontalAlignment)(this->HorizontalAlignment).Value;
}

// GetLowQualityFallbackBrush @ 14691f200

FSlateBrush * __thiscall
UBackgroundBlur::GetLowQualityFallbackBrush
          (UBackgroundBlur *this,FSlateBrush *__return_storage_ptr__)

{
  FSlateBrush::FSlateBrush(__return_storage_ptr__,&this->LowQualityFallbackBrush);
  return __return_storage_ptr__;
}

// GetOverrideAutoRadiusCalculation @ 1469208e0

bool __thiscall UBackgroundBlur::GetOverrideAutoRadiusCalculation(UBackgroundBlur *this)

{
  return this->bOverrideAutoRadiusCalculation;
}

// GetPadding @ 146920a40

FMargin * __thiscall
UBackgroundBlur::GetPadding(UBackgroundBlur *this,FMargin *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 1469216f0

UClass * __cdecl UBackgroundBlur::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BackgroundBlur",
               &Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton,
               StaticRegisterNativesUBackgroundBlur,0x2d0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBackgroundBlur>,
               InternalVTableHelperCtorCaller<UBackgroundBlur>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBackgroundBlur.InnerSingleton;
}

// GetSlotClass @ 1469242b0

UClass * __thiscall UBackgroundBlur::GetSlotClass(UBackgroundBlur *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BackgroundBlurSlot",
               &Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton,
               UBackgroundBlurSlot::StaticRegisterNativesUBackgroundBlurSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UBackgroundBlurSlot>,
               InternalVTableHelperCtorCaller<UBackgroundBlurSlot>,aFStackX_8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBackgroundBlurSlot.InnerSingleton;
}

// GetVerticalAlignment @ 146927a20

EVerticalAlignment __thiscall UBackgroundBlur::GetVerticalAlignment(UBackgroundBlur *this)

{
  return (EVerticalAlignment)(this->VerticalAlignment).Value;
}

// OnSlotAdded @ 14692fec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBackgroundBlur::OnSlotAdded(UBackgroundBlur *this,UPanelSlot *param_1)

{
  byte bVar1;
  int iVar2;
  SBackgroundBlur *pSVar3;
  longlong lVar4;
  longlong lVar5;
  UClass *pUVar6;
  UBackgroundBlur *pUVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  TSharedRef<SBackgroundBlur,1> local_68;
  FString local_58;
  TAttribute<FMargin> local_48;
  
  if (param_1 == (UPanelSlot *)0x0) {
    pFVar8 = GetTypeName<UBackgroundBlurSlot>((FString *)&local_68);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar9);
  }
  pUVar6 = UBackgroundBlurSlot::StaticClass();
  iVar2 = (int)pUVar6->_padding_;
  if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      == &pUVar6->_padding_)) {
    lVar4._0_4_ = (this->Padding).Left;
    lVar4._4_4_ = (this->Padding).Top;
    lVar5._0_4_ = (this->Padding).Right;
    lVar5._4_4_ = (this->Padding).Bottom;
    param_1[1]._padding_ = lVar4;
    param_1[1]._padding_ = lVar5;
    pUVar7 = CastChecked<UBackgroundBlur,UPanelWidget>(&param_1->Parent,NullChecked);
    pSVar3 = (pUVar7->MyBackgroundBlur).Object;
    (pUVar7->Padding).Left = (float)(undefined4)lVar4;
    (pUVar7->Padding).Top = (float)lVar4._4_4_;
    (pUVar7->Padding).Right = (float)(undefined4)lVar5;
    (pUVar7->Padding).Bottom = (float)lVar5._4_4_;
    if (pSVar3 != (SBackgroundBlur *)0x0) {
      local_48.bIsSet = true;
      local_48.Getter._16_8_ = 0;
      local_48.Getter._0_8_ = 0;
      local_48.Getter._8_8_ = 0;
      local_48.Value._0_8_ = lVar4;
      local_48.Value._8_8_ = lVar5;
      SBackgroundBlur::SetPadding((pUVar7->MyBackgroundBlur).Object,&local_48);
    }
    bVar1 = (this->HorizontalAlignment).Value;
    *(byte *)&param_1[1]._padding_ = bVar1;
    pUVar7 = CastChecked<UBackgroundBlur,UPanelWidget>(&param_1->Parent,NullChecked);
    (pUVar7->HorizontalAlignment).Value = bVar1;
    if ((pUVar7->MyBackgroundBlur).Object != (SBackgroundBlur *)0x0) {
      SBackgroundBlur::SetHAlign((pUVar7->MyBackgroundBlur).Object,(uint)bVar1);
    }
    bVar1 = (this->VerticalAlignment).Value;
    *(byte *)((longlong)&param_1[1]._padding_ + 1) = bVar1;
    pUVar7 = CastChecked<UBackgroundBlur,UPanelWidget>(&param_1->Parent,NullChecked);
    (pUVar7->VerticalAlignment).Value = bVar1;
    if ((pUVar7->MyBackgroundBlur).Object != (SBackgroundBlur *)0x0) {
      SBackgroundBlur::SetVAlign((pUVar7->MyBackgroundBlur).Object,(uint)bVar1);
    }
    if ((this->MyBackgroundBlur).Object != (SBackgroundBlur *)0x0) {
      local_68.Object = (this->MyBackgroundBlur).Object;
      local_68.SharedReferenceCount.ReferenceController =
           (this->MyBackgroundBlur).SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UBackgroundBlurSlot::BuildSlot((UBackgroundBlurSlot *)param_1,&local_68);
    }
    return;
  }
  pFVar8 = GetTypeName<UBackgroundBlurSlot>((FString *)&local_68);
  pwVar9 = L"";
  if ((pFVar8->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  pFVar8 = GetFullNameForCastLogError<UPanelSlot>(&local_58,param_1);
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar9,pwVar10);
}

// OnSlotRemoved @ 1469303d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBackgroundBlur::OnSlotRemoved(UBackgroundBlur *this,UPanelSlot *param_1)

{
  SBackgroundBlur *this_00;
  
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// PostLoad @ 146932d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UBackgroundBlur::PostLoad(UBackgroundBlur *this)

{
  UWidget *pUVar1;
  TObjectPtr<UWidget>_u_0 TVar2;
  undefined8 *puVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UPanelSlot *this_00;
  UClass *pUVar8;
  UObject *pUVar9;
  FUObjectItem *pFVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  FGuid local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  local_b8 = FEditorObjectVersion::GUID;
  iVar7 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_b8);
  if ((iVar7 < 0xc) &&
     (this_00 = UContentWidget::GetContentSlot((UContentWidget *)this), this_00 != (UPanelSlot *)0x0
     )) {
    pUVar8 = UBackgroundBlurSlot::StaticClass();
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = UBackgroundBlurSlot::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar8);
      local_a8._8_8_ = this;
      pUVar9 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar12 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar12 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (this_00->Content).field0_0x0.DebugPtr, pUVar1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      TVar2 = (this_00->Content).field0_0x0;
      *(TObjectPtr<UWidget>_u_0 *)&pUVar9[1].field_0x8 = TVar2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *(UObject **)((longlong)TVar2 + 0x30) = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UBackgroundBlur *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(UBackgroundBlur **)(pUVar9 + 1) = this;
      iVar7 = (int)this->_padding_;
      if (iVar7 < 1) {
        local_c8 = 0;
        local_c0 = (longlong)iVar7;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar3 = (undefined8 *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      *puVar3 = pUVar9;
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      if ((((ulonglong)((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1e & 1) != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_MirroredGarbage);
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      do {
        lVar4 = (pFVar10->field0_0x0).FlagsAndRefCount;
        uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar11 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar10 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar6 = lVar4 == (pFVar10->field0_0x0).FlagsAndRefCount;
        if (bVar6) {
          (pFVar10->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar11 << 0x20 | (longlong)(int)lVar4 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar6);
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this_00->_padding_ + 4));
      FUObjectItem::ClearRootFlags(pFVar10,Async);
    }
  }
  return;
}

// RebuildWidget @ 146935540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UBackgroundBlur::RebuildWidget(UBackgroundBlur *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SBackgroundBlur *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  UBackgroundBlurSlot *this_00;
  UClass *pUVar12;
  TSharedRef<SBackgroundBlur,1> *pTVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SBackgroundBlur *local_358;
  FSharedReferencer<1> local_350;
  TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs> local_348;
  TSharedRef<SBackgroundBlur,1> local_330;
  FArguments local_318;
  
  pFVar10 = SBackgroundBlur::FArguments::FArguments(&local_318);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SBackgroundBlur,RequiredArgs::T0RequiredArgs>
            (&local_348,"SBackgroundBlur",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\BackgroundBlur.cpp"
             ,0x2f,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_348._Widget.Object;
  if ((local_348._Widget.Object == (SBackgroundBlur *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)local_348._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SBackgroundBlur::Construct(local_348._Widget.Object,pFVar10);
  if ((local_348._Widget.Object == (SBackgroundBlur *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  if (((local_348._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_348._Widget.Object)->_padding_ + 0x228))(local_348._Widget.Object);
    bVar8 = 0;
    if (cVar7 != '\0') goto LAB_146935687;
  }
  else {
LAB_146935687:
    bVar8 = 0x20;
  }
  FVar5.ReferenceController = local_348._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_348._Widget.Object)->_padding_ =
       (byte)(local_348._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_348._Widget.Object)->_padding_ =
       (byte)(local_348._Widget.Object)->_padding_ | bVar8;
  pbVar1 = (byte *)((longlong)&(local_348._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_348._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_348._Widget.Object = (SBackgroundBlur *)0x0;
  if ((pSVar3 == (SBackgroundBlur *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  local_358 = pSVar3;
  local_350.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyBackgroundBlur != (TSharedPtr<SBackgroundBlur,1> *)&local_358) {
    (this->MyBackgroundBlur).Object = pSVar3;
    local_358 = (SBackgroundBlur *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBackgroundBlur).SharedReferenceCount,&local_350);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_350.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_318._CornerRadius.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_318._BlurRadius.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_318._BlurStrength.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_318._Padding.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_318._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_318);
  iVar9 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar9 < 1) goto LAB_1469357e0;
  this_00 = (UBackgroundBlurSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
  if (this_00 == (UBackgroundBlurSlot *)0x0) {
LAB_1469357c6:
    this_00 = (UBackgroundBlurSlot *)0x0;
  }
  else {
    pUVar12 = UBackgroundBlurSlot::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar12->_padding_)) goto LAB_1469357c6;
  }
  pTVar13 = TSharedPtr<SBackgroundBlur,1>::ToSharedRef(&this->MyBackgroundBlur,&local_330);
  UBackgroundBlurSlot::BuildSlot(this_00,pTVar13);
LAB_1469357e0:
  if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pTVar2 = (this->MyBackgroundBlur).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MyBackgroundBlur).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SBackgroundBlur *)0x0) &&
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

// ReleaseSlateResources @ 14693aa60

void __thiscall UBackgroundBlur::ReleaseSlateResources(UBackgroundBlur *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyBackgroundBlur != (TSharedPtr<SBackgroundBlur,1> *)&local_18) {
    (this->MyBackgroundBlur).Object = (SBackgroundBlur *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBackgroundBlur).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// Serialize @ 146941950

void __thiscall UBackgroundBlur::Serialize(UBackgroundBlur *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000146941970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  return;
}

// Serialize @ 146941980

void __thiscall UBackgroundBlur::Serialize(UBackgroundBlur *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FEditorObjectVersion::GUID);
  return;
}

// SetApplyAlphaToBlur @ 146941f00

void __thiscall UBackgroundBlur::SetApplyAlphaToBlur(UBackgroundBlur *this,bool param_1)

{
  SBackgroundBlur *this_00;
  
  this->bApplyAlphaToBlur = param_1;
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 == (SBackgroundBlur *)0x0) {
    return;
  }
  if (this_00->bApplyAlphaToBlur != param_1) {
    this_00->bApplyAlphaToBlur = param_1;
    SWidget::Invalidate((SWidget *)this_00,Paint);
    return;
  }
  return;
}

// SetBlurRadius @ 146942130

void __thiscall UBackgroundBlur::SetBlurRadius(UBackgroundBlur *this,int param_1)

{
  SBackgroundBlur *this_00;
  TAttribute<TOptional<int>_> local_38;
  
  this->BlurRadius = param_1;
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    local_38.Getter._16_8_ = 0;
    local_38.Value.bIsSet = true;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value.TypedValue = param_1;
    SBackgroundBlur::SetBlurRadius(this_00,&local_38);
    this->bOverrideAutoRadiusCalculation = true;
  }
  return;
}

// SetBlurStrength @ 146942190

void __thiscall UBackgroundBlur::SetBlurStrength(UBackgroundBlur *this,float param_1)

{
  SBackgroundBlur *this_00;
  TAttribute<float> local_28;
  
  this->BlurStrength = param_1;
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    local_28.bIsSet = true;
    local_28.Value = param_1;
    SBackgroundBlur::SetBlurStrength(this_00,&local_28);
  }
  return;
}

// SetCornerRadius @ 1469428c0

void __thiscall UBackgroundBlur::SetCornerRadius(UBackgroundBlur *this,TVector4<double> *param_1)

{
  SBackgroundBlur *this_00;
  TVector4<double>_u_0 local_48;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_48._s_0.W = (param_1->field0_0x0)._s_0.W;
  (this->CornerRadius).field0_0x0._s_0.X = local_48._s_0.X;
  (this->CornerRadius).field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->CornerRadius).field0_0x0._s_0.Z = local_48._s_0.Z;
  (this->CornerRadius).field0_0x0._s_0.W = local_48._s_0.W;
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    local_20 = 0;
    uStack_18 = 0;
    local_28 = 1;
    local_10 = 0;
    SBackgroundBlur::SetCornerRadius
              (this_00,(TAttribute<UE::Math::TVector4<double>_> *)&local_48._s_0);
  }
  return;
}

// SetHorizontalAlignment @ 146942bb0

void __thiscall
UBackgroundBlur::SetHorizontalAlignment(UBackgroundBlur *this,EHorizontalAlignment param_1)

{
  longlong *plVar1;
  SBackgroundBlur *pSVar2;
  FSlotBase *this_00;
  
  (this->HorizontalAlignment).Value = (uchar)param_1;
  pSVar2 = (this->MyBackgroundBlur).Object;
  if (pSVar2 == (SBackgroundBlur *)0x0) {
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

// SetLowQualityFallbackBrush @ 146943270

void __thiscall
UBackgroundBlur::SetLowQualityFallbackBrush(UBackgroundBlur *this,FSlateBrush *param_1)

{
  SBackgroundBlur *this_00;
  
  FSlateBrush::operator=(&this->LowQualityFallbackBrush,param_1);
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetLowQualityBackgroundBrush(this_00,&this->LowQualityFallbackBrush);
  }
  return;
}

// SetOverrideAutoRadiusCalculation @ 1469439c0

void __thiscall
UBackgroundBlur::SetOverrideAutoRadiusCalculation(UBackgroundBlur *this,bool param_1)

{
  SBackgroundBlur *this_00;
  TAttribute<TOptional<int>_> local_38;
  
  this_00 = (this->MyBackgroundBlur).Object;
  this->bOverrideAutoRadiusCalculation = param_1;
  if (this_00 != (SBackgroundBlur *)0x0) {
    if (param_1) {
      local_38.Value.TypedValue = this->BlurRadius;
    }
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    local_38.Value.bIsSet = param_1;
    SBackgroundBlur::SetBlurRadius(this_00,&local_38);
  }
  return;
}

// SetPadding @ 146943a30

void __thiscall UBackgroundBlur::SetPadding(UBackgroundBlur *this,FMargin *param_1)

{
  SBackgroundBlur *this_00;
  TAttribute<FMargin> local_38;
  
  local_38.Value.Left = param_1->Left;
  local_38.Value.Top = param_1->Top;
  local_38.Value.Right = param_1->Right;
  local_38.Value.Bottom = param_1->Bottom;
  (this->Padding).Left = local_38.Value.Left;
  (this->Padding).Top = local_38.Value.Top;
  (this->Padding).Right = local_38.Value.Right;
  (this->Padding).Bottom = local_38.Value.Bottom;
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetPadding(this_00,&local_38);
  }
  return;
}

// SetVerticalAlignment @ 146944470

void __thiscall
UBackgroundBlur::SetVerticalAlignment(UBackgroundBlur *this,EVerticalAlignment param_1)

{
  SBackgroundBlur *pSVar1;
  FSlotBase *this_00;
  
  (this->VerticalAlignment).Value = (uchar)param_1;
  pSVar1 = (this->MyBackgroundBlur).Object;
  if (pSVar1 == (SBackgroundBlur *)0x0) {
    return;
  }
  if (*(EVerticalAlignment *)((longlong)&pSVar1->_padding_ + 4) != param_1) {
    *(EVerticalAlignment *)((longlong)&pSVar1->_padding_ + 4) = param_1;
    this_00 = (FSlotBase *)&pSVar1->_padding_;
    if (pSVar1 == (SBackgroundBlur *)0xfffffffffffffd98) {
      this_00 = (FSlotBase *)&DAT_00000020;
    }
    FSlotBase::Invalidate(this_00,Layout);
    return;
  }
  return;
}

// StaticRegisterNativesUBackgroundBlur @ 146945570

void __cdecl UBackgroundBlur::StaticRegisterNativesUBackgroundBlur(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UBackgroundBlur_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146946310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UBackgroundBlur::SynchronizeProperties(UBackgroundBlur *this)

{
  SBackgroundBlur *this_00;
  code *pcVar1;
  bool bVar2;
  TAttribute<TOptional<int>_> local_c8;
  TAttribute<float> local_a0;
  TAttribute<FMargin> local_80;
  TVector4<double>_u_0 local_48;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyBackgroundBlur).Object;
  if (this_00 != (SBackgroundBlur *)0x0) {
    local_80.Value.Left = (this->Padding).Left;
    local_80.Value.Top = (this->Padding).Top;
    local_80.Value.Right = (this->Padding).Right;
    local_80.Value.Bottom = (this->Padding).Bottom;
    local_80.bIsSet = true;
    local_80.Getter._16_8_ = 0;
    local_80.Getter._0_8_ = 0;
    local_80.Getter._8_8_ = 0;
    SBackgroundBlur::SetPadding(this_00,&local_80);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SBackgroundBlur::SetHAlign
              ((this->MyBackgroundBlur).Object,(uint)(this->HorizontalAlignment).Value);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SBackgroundBlur::SetVAlign
              ((this->MyBackgroundBlur).Object,(uint)(this->VerticalAlignment).Value);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SBackgroundBlur::SetApplyAlphaToBlur((this->MyBackgroundBlur).Object,this->bApplyAlphaToBlur);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c8.Value.bIsSet = this->bOverrideAutoRadiusCalculation != false;
    if (local_c8.Value.bIsSet) {
      local_c8.Value.TypedValue = this->BlurRadius;
    }
    local_c8.bIsSet = true;
    local_c8.Getter._16_8_ = 0;
    local_c8.Getter._0_8_ = 0;
    local_c8.Getter._8_8_ = 0;
    SBackgroundBlur::SetBlurRadius((this->MyBackgroundBlur).Object,&local_c8);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_a0.Value = this->BlurStrength;
    local_a0.Getter._0_8_ = 0;
    local_a0.Getter._8_8_ = 0;
    local_a0.bIsSet = true;
    local_a0.Getter._16_8_ = 0;
    SBackgroundBlur::SetBlurStrength((this->MyBackgroundBlur).Object,&local_a0);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SBackgroundBlur::SetLowQualityBackgroundBrush
              ((this->MyBackgroundBlur).Object,&this->LowQualityFallbackBrush);
    if (((this->MyBackgroundBlur).Object == (SBackgroundBlur *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_48._s_0.X = (this->CornerRadius).field0_0x0._s_0.X;
    local_48._s_0.Y = (this->CornerRadius).field0_0x0._s_0.Y;
    local_48._s_0.Z = (this->CornerRadius).field0_0x0._s_0.Z;
    local_48._s_0.W = (this->CornerRadius).field0_0x0._s_0.W;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = 1;
    local_10 = 0;
    SBackgroundBlur::SetCornerRadius
              ((this->MyBackgroundBlur).Object,
               (TAttribute<UE::Math::TVector4<double>_> *)&local_48._s_0);
  }
  return;
}

// execSetApplyAlphaToBlur @ 146954860

void __cdecl
UBackgroundBlur::execSetApplyAlphaToBlur(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBackgroundBlur *this;
  int local_res8 [2];
  
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
  this = *(SBackgroundBlur **)&param_1[0x11].field_0x18;
  param_1[0xb].field_0x22 = local_res8[0] != 0;
  if (this != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetApplyAlphaToBlur(this,local_res8[0] != 0);
  }
  return;
}

// execSetBlurRadius @ 146954a50

void __cdecl UBackgroundBlur::execSetBlurRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBackgroundBlur *this;
  int local_res8 [2];
  TAttribute<TOptional<int>_> local_38;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SBackgroundBlur **)&param_1[0x11].field_0x18;
  *(int *)&param_1[0xc].field_0x4 = local_res8[0];
  if (this != (SBackgroundBlur *)0x0) {
    local_38.Value.TypedValue = local_res8[0];
    local_38.Value.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.bIsSet = true;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetBlurRadius(this,&local_38);
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}

// execSetBlurStrength @ 146954b10

void __cdecl UBackgroundBlur::execSetBlurStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res8[0]);
  return;
}

// execSetCornerRadius @ 146955250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UBackgroundBlur::execSetCornerRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = ___xmm_3ff00000000000000000000000000000;
  uStack_30 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  local_18 = local_38;
  uStack_10 = uStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,&local_28);
  return;
}

// execSetHorizontalAlignment @ 1469553b0

void __cdecl
UBackgroundBlur::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBackgroundBlur *this;
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
  this = *(SBackgroundBlur **)&param_1[0x11].field_0x18;
  param_1[0xb].field_0x20 = local_res8[0];
  if (this != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetHAlign(this,(uint)local_res8[0]);
  }
  return;
}

// execSetLowQualityFallbackBrush @ 146955780

void __cdecl
UBackgroundBlur::execSetLowQualityFallbackBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
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
  if (*(SBackgroundBlur **)&param_1[0x11].field_0x18 != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetLowQualityBackgroundBrush
              (*(SBackgroundBlur **)&param_1[0x11].field_0x18,(FSlateBrush *)&param_1[0xd].field_0x8
              );
  }
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetPadding @ 146955b70

void __cdecl UBackgroundBlur::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBackgroundBlur *this;
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
  this = *(SBackgroundBlur **)&param_1[0x11].field_0x18;
  *(float *)&param_1[0xb].field_0x10 = local_58.Left;
  *(float *)&param_1[0xb].field_0x14 = local_58.Top;
  *(float *)&param_1[0xb].field_0x18 = local_58.Right;
  *(float *)&param_1[0xb].field_0x1c = local_58.Bottom;
  if (this != (SBackgroundBlur *)0x0) {
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Value.Left = local_58.Left;
    local_38.Value.Top = local_58.Top;
    local_38.Value.Right = local_58.Right;
    local_38.Value.Bottom = local_58.Bottom;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SBackgroundBlur::SetPadding(this,&local_38);
  }
  return;
}

// execSetVerticalAlignment @ 146956830

void __cdecl
UBackgroundBlur::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBackgroundBlur *this;
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
  this = *(SBackgroundBlur **)&param_1[0x11].field_0x18;
  param_1[0xb].field_0x21 = local_res8[0];
  if (this != (SBackgroundBlur *)0x0) {
    SBackgroundBlur::SetVAlign(this,(uint)local_res8[0]);
  }
  return;
}

