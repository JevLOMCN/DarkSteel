// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 217

// ConvertLinearColorToSlateColor @ 146910760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
UWidget::ConvertLinearColorToSlateColor
          (UWidget *this,FSlateColor *__return_storage_ptr__,TAttribute<FLinearColor> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  FDestructionSentinel local_38;
  FReadAccessScope local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&(param_1->Getter).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(param_1->Getter).field_0x8, plVar4 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar4 + 0x38))();
    if (cVar3 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Getter,
                 &local_20);
      if (*(int *)&(param_1->Getter).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(param_1->Getter).field_0x8;
      }
      (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_20);
      *(undefined8 *)&(param_1->Value).field0_0x0 = local_38._0_8_;
      *(FMRSWRecursiveAccessDetector **)((longlong)&(param_1->Value).field0_0x0 + 8) =
           local_38.Accessor;
      goto LAB_1469107eb;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
LAB_1469107eb:
  uVar1 = *(undefined8 *)&(param_1->Value).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Value).field0_0x0 + 8);
  __return_storage_ptr__->ColorUseRule = UseColor_Specified;
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar2;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  return __return_storage_ptr__;
}

// GetFieldNotificationDescriptor @ 14691e360

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UWidget::GetFieldNotificationDescriptor(UWidget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWidget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// _getUObject @ 146950690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UWidget::_getUObject(UWidget *this)

{
  return (UObject *)&this[-1].EnabledFieldNotifications;
}

// GetToolTipText_WrapperImpl @ 14695ed70

void __cdecl UWidget::GetToolTipText_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  local_18.TextData.Reference = *(ITextData **)((longlong)param_1 + 0x68);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = *(uint *)((longlong)param_1 + 0x70);
  FText::operator=(param_2,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetToolTipText_WrapperImpl @ 14695edd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetToolTipText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStackX_8 [8];
  FFieldId FStack_28;
  TSharedPtr<SWidget,1> TStack_18;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x68);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0x68) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 8);
  FStack_28.FieldName = FFieldNotificationClassDescriptor::ToolTipText.FieldName;
  FStack_28.BitNumber = FFieldNotificationClassDescriptor::ToolTipText.BitNumber;
  BroadcastFieldValueChanged((UWidget *)((longlong)param_1 + 0x28),&FStack_28);
  GetCachedWidget(param_1,&TStack_18);
  if (TStack_18.Object != (SWidget *)0x0) {
    if (TStack_18.Object == (SWidget *)0x0) {
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
    SWidget::SetToolTipText(TStack_18.Object,param_2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetToolTipWidget_WrapperImpl @ 14695edf0

void __cdecl UWidget::GetToolTipWidget_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x78);
  return;
}

// SetToolTipWidget_WrapperImpl @ 14695ee40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetToolTipWidget_WrapperImpl(void *param_1,void *param_2)

{
  SetToolTip(param_1,*(UWidget **)param_2);
  return;
}

// GetRenderTransform_WrapperImpl @ 14695ee90

void __cdecl UWidget::GetRenderTransform_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0xb8);
  uVar3 = *(undefined8 *)((longlong)param_1 + 0xc0);
  uVar4 = *(undefined8 *)((longlong)param_1 + 200);
  uVar5 = *(undefined8 *)((longlong)param_1 + 0xd0);
  uVar6 = *(undefined8 *)((longlong)param_1 + 0xd8);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xe0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined8 *)((longlong)param_2 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_2 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_2 + 0x20) = uVar5;
  *(undefined8 *)((longlong)param_2 + 0x28) = uVar6;
  *(undefined8 *)((longlong)param_2 + 0x30) = uVar1;
  return;
}

// SetRenderTransform_WrapperImpl @ 14695ef00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetRenderTransform_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0xb0) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0xc0) = *(undefined8 *)((longlong)param_2 + 0x10);
  *(undefined8 *)((longlong)param_1 + 200) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0xd0) = *(undefined8 *)((longlong)param_2 + 0x20);
  *(undefined8 *)((longlong)param_1 + 0xd8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0x30);
  UpdateRenderTransform(param_1);
  return;
}

// GetRenderTransformPivot_WrapperImpl @ 14695ef40

void __cdecl UWidget::GetRenderTransformPivot_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0xf0);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0xe8);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetRenderTransformPivot_WrapperImpl @ 14695ef60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetRenderTransformPivot_WrapperImpl(void *param_1,void *param_2)

{
  TVector2<double>_u_0 local_18;
  
  local_18._s_0.X = (double)*(undefined8 *)param_2;
  local_18._s_0.Y = *(double *)((longlong)param_2 + 8);
  SetRenderTransformPivot(param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// GetFlowDirectionPreference_WrapperImpl @ 14695f050

void __cdecl UWidget::GetFlowDirectionPreference_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xf8);
  return;
}

// SetFlowDirectionPreference_WrapperImpl @ 14695f060

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetFlowDirectionPreference_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  *(undefined1 *)((longlong)param_1 + 0xf8) = *(undefined1 *)param_2;
  GetCachedWidget(param_1,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    if ((local_18.Object)->FlowDirectionPreference !=
        *(EFlowDirectionPreference *)((longlong)param_1 + 0xf8)) {
      (local_18.Object)->FlowDirectionPreference =
           *(EFlowDirectionPreference *)((longlong)param_1 + 0xf8);
      SWidget::Invalidate(local_18.Object,Paint);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetbIsEnabled_WrapperImpl @ 14695f100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::GetbIsEnabled_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetIsEnabled(param_1);
  *(bool *)param_2 = bVar1;
  return;
}

// SetbIsEnabled_WrapperImpl @ 14695f120

void __cdecl UWidget::SetbIsEnabled_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014695f126. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,*(undefined1 *)param_2);
  return;
}

// GetCursor_WrapperImpl @ 14695f140

void __cdecl UWidget::GetCursor_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xfb);
  return;
}

// SetCursor_WrapperImpl @ 14695f150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetCursor_WrapperImpl(void *param_1,void *param_2)

{
  SetCursor(param_1,(uint)*(byte *)param_2);
  return;
}

// GetClipping_WrapperImpl @ 14695f1a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::GetClipping_WrapperImpl(void *param_1,void *param_2)

{
  EWidgetClipping EVar1;
  
  EVar1 = GetClipping(param_1);
  *(EWidgetClipping *)param_2 = EVar1;
  return;
}

// SetClipping_WrapperImpl @ 14695f1c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetClipping_WrapperImpl(void *param_1,void *param_2)

{
  SetClipping(param_1,*(EWidgetClipping *)param_2);
  return;
}

// GetVisibility_WrapperImpl @ 14695f1d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::GetVisibility_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = GetVisibility(param_1);
  *(ESlateVisibility *)param_2 = EVar1;
  return;
}

// SetVisibility_WrapperImpl @ 14695f1f0

void __cdecl UWidget::SetVisibility_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014695f1f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,*(undefined1 *)param_2);
  return;
}

// GetPixelSnapping_WrapperImpl @ 14695f210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::GetPixelSnapping_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  EWidgetPixelSnapping EVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    EVar3 = *(EWidgetPixelSnapping *)((longlong)param_1 + 0xfe);
  }
  else {
    if (local_18.Object == (SWidget *)0x0) {
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
    EVar3 = (local_18.Object)->PixelSnappingMethod;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(EWidgetPixelSnapping *)param_2 = EVar3;
  return;
}

// SetPixelSnapping_WrapperImpl @ 14695f2a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetPixelSnapping_WrapperImpl(void *param_1,void *param_2)

{
  EWidgetPixelSnapping EVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> local_18;
  
  EVar1 = *(EWidgetPixelSnapping *)param_2;
  *(EWidgetPixelSnapping *)((longlong)param_1 + 0xfe) = EVar1;
  GetCachedWidget(param_1,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SWidget::SetPixelSnapping(local_18.Object,EVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetRenderOpacity_WrapperImpl @ 14695f370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::GetRenderOpacity_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  fVar1 = GetRenderOpacity(param_1);
  *(float *)param_2 = fVar1;
  return;
}

// SetRenderOpacity_WrapperImpl @ 14695f390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::SetRenderOpacity_WrapperImpl(void *param_1,void *param_2)

{
  SetRenderOpacity(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 14695f3a0

UClass * __cdecl UWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Widget",&Z_Registration_Info_UClass_UWidget.InnerSingleton,
               StaticRegisterNativesUWidget,0x1b0,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidget>,InternalVTableHelperCtorCaller<UWidget>,
               local_res8,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidget.InnerSingleton;
}

// UWidget @ 14698ed40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidget::UWidget(UWidget *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Slot).field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->bIsEnabledDelegate = 0;
  *(undefined8 *)&(this->bIsEnabledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->bIsEnabledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ToolTipTextDelegate = 0;
  *(undefined8 *)&(this->ToolTipTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToolTipTextDelegate).field_0x10 = 0;
  FText::FText(&this->ToolTipText);
  (this->ToolTipWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->ToolTipWidgetDelegate = 0;
  *(undefined8 *)&(this->ToolTipWidgetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToolTipWidgetDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VisibilityDelegate = 0;
  *(undefined8 *)&(this->VisibilityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VisibilityDelegate).field_0x10 = 0;
  (this->RenderTransform).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->RenderTransform).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->RenderTransform).Angle = 0.0;
  (this->RenderTransform).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->AccessibleWidgetData).field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
  (this->Navigation).field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
  (this->WidgetGeneratedByClass).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MyWidget).Object = (SWidget *)0x0;
  (this->MyWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComponentWrapperWidget).Object = (SWidget *)0x0;
  (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyGCWidget).Object = (SObjectWidget *)0x0;
  (this->MyGCWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FWidgetStateBitfield::FWidgetStateBitfield(&this->MyWidgetStateBitfield);
  *(undefined8 *)&this->PostWidgetStateChanged = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x10 = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x18 = 2;
  (this->NativeBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeBindings).ArrayNum = 0;
  (this->NativeBindings).ArrayMax = 0;
  (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->EnabledFieldNotifications).NumBits = 0;
  (this->EnabledFieldNotifications).MaxBits = 0x80;
  return this;
}

// UWidget @ 14698ee90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidget::UWidget(UWidget *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FName FVar4;
  TVector2<double> TVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->Slot).field0_0x0.DebugPtr = (UPanelSlot *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&this->bIsEnabledDelegate = 0;
  *(undefined8 *)&(this->bIsEnabledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->bIsEnabledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ToolTipTextDelegate = 0;
  *(undefined8 *)&(this->ToolTipTextDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToolTipTextDelegate).field_0x10 = 0;
  FText::FText(&this->ToolTipText);
  (this->ToolTipWidget).field0_0x0.DebugPtr = (UWidget *)0x0;
  *(undefined8 *)&this->ToolTipWidgetDelegate = 0;
  *(undefined8 *)&(this->ToolTipWidgetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ToolTipWidgetDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VisibilityDelegate = 0;
  *(undefined8 *)&(this->VisibilityDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VisibilityDelegate).field_0x10 = 0;
  (this->RenderTransform).Translation.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->RenderTransform).Scale.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::UnitVector.field0_0x0;
  TVar5 = UE::Math::TVector2<double>::ZeroVector;
  (this->RenderTransform).Angle = 0.0;
  (this->RenderTransform).Shear.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
  (this->AccessibleWidgetData).field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
  (this->Navigation).field0_0x0.DebugPtr = (UWidgetNavigation *)0x0;
  (this->WidgetGeneratedByClass).WeakPtr = (FWeakObjectPtr)0x0;
  (this->MyWidget).Object = (SWidget *)0x0;
  (this->MyWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ComponentWrapperWidget).Object = (SWidget *)0x0;
  (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MyGCWidget).Object = (SObjectWidget *)0x0;
  (this->MyGCWidget).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FWidgetStateBitfield::FWidgetStateBitfield(&this->MyWidgetStateBitfield);
  *(undefined8 *)&this->PostWidgetStateChanged = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x10 = 0;
  *(undefined8 *)&(this->PostWidgetStateChanged).field_0x18 = 2;
  (this->NativeBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeBindings).ArrayNum = 0;
  (this->NativeBindings).ArrayMax = 0;
  (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->EnabledFieldNotifications).NumBits = 0;
  (this->EnabledFieldNotifications).MaxBits = 0x80;
  this->Visibility = Visible;
  this->PixelSnapping = Inherit;
  this->RenderOpacity = 1.0;
  (this->RenderTransformPivot).field0_0x0._s_0.X = 0.5;
  (this->RenderTransformPivot).field0_0x0._s_0.Y = 0.5;
  this->bWrappedByComponent = '\0';
  (this->Cursor).Value = '\x01';
  puVar2 = &this->field_0xf9;
  this->bIsVariable = '\x01';
  this->bWidgetStateInitialized = false;
  this->bShouldBroadcastState = true;
  this->bIsManagedByGameViewportSubsystem = '\0';
  this->bIsEnabled = '\x01';
  (this->AccessibleWidgetData).field0_0x0.DebugPtr = (USlateAccessibleWidgetData *)0x0;
  FVar7 = StatPtr_STAT_SlateUTotalWidgets;
  if (StatPtr_STAT_SlateUTotalWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets>)0x0)
  {
    pFVar6 = ::FName::FName(&local_res8,"STAT_SlateUTotalWidgets");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateUTotalWidgets,*pFVar6,
                       L"Total Created UWidgets","STATGROUP_SlateMemory","STATCAT_Advanced",
                       L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar7;
  if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar4;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar4;
    local_18.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~UWidget @ 1469949e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::~UWidget(UWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ForElementType<unsigned_int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  TReferenceControllerBase<1> *pTVar6;
  ITextData *pIVar7;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FVar3 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar4 = (this->NativeBindings).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->PostWidgetStateChanged).field_0x8,
             *(int *)&(this->PostWidgetStateChanged).field_0x10);
  pvVar5 = *(void **)&(this->PostWidgetStateChanged).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PostWidgetStateChanged);
  pTVar6 = (this->MyGCWidget).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pTVar6 = (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  pTVar6 = (this->MyWidget).WeakReferenceCount.ReferenceController;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar6->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
    }
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VisibilityDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipWidgetDelegate);
  pIVar7 = (this->ToolTipText).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ToolTipTextDelegate);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->bIsEnabledDelegate);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  this->_padding_ = (longlong)&___7UVisual__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 146997f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SObjectWidget,1> * __thiscall
`UWidget::TakeWidget'::__l5::<lambda_1>::operator()
          (void *this,TSharedPtr<SObjectWidget,1> *__return_storage_ptr__,UUserWidget *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SObjectWidget,1> *pTVar5;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  T1RequiredArgs<UUserWidget_*_&> local_258;
  FMemScope local_250;
  TSharedRef<SObjectWidget,1> local_248;
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_> local_238;
  FArguments local_220;
  
  local_res18 = param_1;
  pFVar4 = SObjectWidget::FArguments::FArguments(&local_220);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_258.Arg0 = &local_res18;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_250,&local_res20,true);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>
            (&local_238,"SObjectWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
             ,0x3de,&local_258);
  FMemScope::~FMemScope(&local_250);
  FLLMScope::~FLLMScope(local_res10);
  pTVar5 = TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::operator<<=
                     (&local_238,&local_248,pFVar4);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 146998170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedPtr<SObjectWidget,1> * __thiscall
`UWidget::TakeWidget'::__l2::<lambda_2>::operator()
          (void *this,TSharedPtr<SObjectWidget,1> *__return_storage_ptr__,UUserWidget *param_1,
          TSharedRef<SWidget,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  FArguments *pFVar4;
  TSharedRef<SObjectWidget,1> *pTVar5;
  FLLMScope local_res10 [2];
  UUserWidget *local_res18;
  FName local_res20;
  T1RequiredArgs<UUserWidget_*_&> local_258;
  FMemScope local_250;
  TSharedRef<SObjectWidget,1> local_248;
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_> local_238;
  FArguments local_220;
  
  local_res18 = param_1;
  pFVar4 = SObjectWidget::FArguments::FArguments(&local_220);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pSVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar4->_Content).Widget.Object = pSVar2;
  (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_258.Arg0 = &local_res18;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_250,&local_res20,true);
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::
  TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>
            (&local_238,"SObjectWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
             ,0x3e3,&local_258);
  FMemScope::~FMemScope(&local_250);
  FLLMScope::~FLLMScope(local_res10);
  pTVar5 = TSlateDecl<SObjectWidget,RequiredArgs::T1RequiredArgs<UUserWidget_*_&>_>::operator<<=
                     (&local_238,&local_248,pFVar4);
  __return_storage_ptr__->Object = pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_220._Content.Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// AddBinding @ 1469a0db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidget::AddBinding(UWidget *this,FDelegateProperty *param_1,UObject *param_2,
                   FDynamicPropertyPath *param_3)

{
  int *piVar1;
  TArray<TObjectPtr<UPropertyBinding>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  UPropertyBinding *local_48;
  longlong local_40;
  longlong local_38;
  UPropertyBinding *local_30;
  
  local_30 = GenerateBinder(param_1,(UObject *)this,param_2,param_3);
  if (local_30 == (UPropertyBinding *)0x0) {
    return false;
  }
  uVar11 = 0;
  if (0 < (this->NativeBindings).ArrayNum) {
    pTVar2 = &this->NativeBindings;
    lVar13 = 0;
    do {
      bVar7 = IsThisNotNull(param_1,"FField::GetFName");
      if (bVar7) {
        local_40 = param_1->_padding_;
      }
      else {
        local_40 = 0;
      }
      lVar6 = local_40;
      uVar12 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < (this->NativeBindings).ArrayNum) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      if (*(longlong *)(*(longlong *)((pTVar2->AllocatorInstance).Data + lVar13) + 0x68) == lVar6) {
        uVar9 = 0;
        if ((int)uVar11 < (this->NativeBindings).ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar10 = (this->NativeBindings).ArrayNum + ~uVar11;
        if (iVar10 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar10 << 3);
        }
        piVar1 = &(this->NativeBindings).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->NativeBindings).ArrayNum,
                   &(this->NativeBindings).ArrayMax);
        break;
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < (this->NativeBindings).ArrayNum);
  }
  pTVar2 = &this->NativeBindings;
  local_48 = local_30;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_30);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->NativeBindings).ArrayMax * 8
      )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
    pcVar5 = (code *)swi(3);
    uVar8 = (*pcVar5)();
    return (bool)uVar8;
  }
  iVar10 = (this->NativeBindings).ArrayNum;
  piVar1 = &(this->NativeBindings).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NativeBindings).ArrayNum = iVar10 + 1;
  *(UPropertyBinding **)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UPropertyBinding *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_48);
  }
  if ((((this->MyWidget).Object != (SWidget *)0x0) &&
      (pTVar4 = (this->MyWidget).WeakReferenceCount.ReferenceController,
      pTVar4 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar4->SharedReferenceCount)) {
    pcVar5 = *(code **)(this->_padding_ + 0x2f0);
    bVar7 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar7) {
      local_38 = param_1->_padding_;
    }
    else {
      local_38 = 0;
    }
    (*pcVar5)(this,&local_38);
  }
  return true;
}

// AddFieldValueChangedDelegate @ 1469a21f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
UWidget::AddFieldValueChangedDelegate
          (UWidget *this,FFieldId *param_1,
          TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
          *param_2)

{
  undefined1 *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UWidgetFieldNotificationExtension *pUVar5;
  FDelegateHandle FVar6;
  undefined1 *puVar7;
  ForAnyElementType *in_R9;
  int iVar8;
  FName local_68;
  TDelegate<void___cdecl(UObject_*,UE::FieldNotification::FFieldId),FNotThreadSafeNotCheckedDelegateUserPolicy>
  local_58;
  ForAnyElementType local_48;
  int local_40;
  FScriptContainerElement *local_38;
  undefined4 local_30;
  
  (param_1->FieldName).ComparisonIndex = 0;
  (param_1->FieldName).Number = 0;
  if ((*(longlong *)param_2 == 0) ||
     (pUVar5 = UE::UMG::Private::FindOrAddWidgetNotifyExtension
                         ((UWidget *)&this[-1].EnabledFieldNotifications),
     pUVar5 == (UWidgetFieldNotificationExtension *)0x0)) goto LAB_1469a2391;
  local_38 = in_R9->Data;
  local_30 = *(undefined4 *)&in_R9[1].Data;
  local_58._0_8_ = *(undefined8 *)param_2;
  local_58._8_4_ = *(undefined4 *)&param_2->field_0x8;
  in_R9->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)&in_R9[1].Data = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  UE::FieldNotification::FFieldMulticastDelegate::Add
            (&pUVar5->Delegates,(UObject *)&local_68,(FFieldId *)&this[-1].EnabledFieldNotifications
             ,&local_58);
  if (local_40 == 0) {
LAB_1469a22e0:
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  else if (local_48.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1469a22e0;
  }
  param_1->FieldName = local_68;
  if (local_68 != (FName)0x0) {
    iVar1 = *(int *)&param_2->field_0x8;
    this_00 = &(this->PostWidgetStateChanged).field_0x8;
    iVar8 = (iVar1 - *(int *)&(this->NativeBindings).AllocatorInstance.Data) + 1;
    if (0 < iVar8) {
      iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar8);
      TBitArray<FDefaultBitArrayAllocator>::SetRange
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,iVar4,iVar8,false);
    }
    if (((iVar1 < 0) || (*(int *)&(this->NativeBindings).AllocatorInstance.Data <= iVar1)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar6.ID = (*pcVar2)();
      return (FDelegateHandle)FVar6.ID;
    }
    puVar7 = *(undefined1 **)&(this->PostWidgetStateChanged).field_0x18;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = this_00;
    }
    *(uint *)(puVar7 + (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4) |
         1 << ((byte)iVar1 & 0x1f);
  }
LAB_1469a2391:
  if ((*(int *)&in_R9[1].Data != 0) && (in_R9->Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)in_R9->Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(in_R9,0,0,0x10);
    *(undefined4 *)&in_R9[1].Data = 0;
  }
  if (in_R9->Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(in_R9->Data);
  }
  return (FDelegateHandle)(ulong64)param_1;
}

// BeginDestroy @ 1469a3100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWidget::BeginDestroy(UWidget *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if (this->bIsManagedByGameViewportSubsystem != '\0') {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
  return;
}

// BroadcastBinaryPostStateChange @ 1469a34e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::BroadcastBinaryPostStateChange(UWidget *this,FWidgetStateBitfield *param_1,bool param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if ((this->bShouldBroadcastState) && (this->bWidgetStateInitialized)) {
    FWidgetStateBitfield::SetBinaryState(&this->MyWidgetStateBitfield,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->PostWidgetStateChanged,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->PostWidgetStateChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->PostWidgetStateChanged).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->PostWidgetStateChanged).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->PostWidgetStateChanged).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,this,&this->MyWidgetStateBitfield),
           cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->PostWidgetStateChanged).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PostWidgetStateChanged
                 ,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// BroadcastEnumPostStateChange @ 1469a3640

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::BroadcastEnumPostStateChange(UWidget *this,FWidgetStateBitfield *param_1)

{
  return;
}

// BroadcastFieldValueChanged @ 1469a3650

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::BroadcastFieldValueChanged(UWidget *this,FFieldId *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UWidgetFieldNotificationExtension *pUVar4;
  undefined1 *puVar5;
  FFieldId local_18;
  
  if (((param_1->FieldName != (FName)0x0) && (uVar1 = param_1->BitNumber, -1 < (int)uVar1)) &&
     ((int)uVar1 < *(int *)&(this->NativeBindings).AllocatorInstance.Data)) {
    if ((*(int *)&(this->NativeBindings).AllocatorInstance.Data <= (int)uVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar5 = *(undefined1 **)&(this->PostWidgetStateChanged).field_0x18;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->PostWidgetStateChanged).field_0x8;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      pUVar4 = UE::UMG::Private::FindWidgetNotifyExtension
                         ((UWidget *)&this[-1].EnabledFieldNotifications);
      if ((pUVar4 == (UWidgetFieldNotificationExtension *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                             ,0x812,
                             L"If the EnabledFieldNotifications is valid, then the Extension must also be valid."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_18.FieldName = param_1->FieldName;
      local_18.BitNumber = param_1->BitNumber;
      UE::FieldNotification::FFieldMulticastDelegate::Broadcast
                (&pUVar4->Delegates,(UObject *)&this[-1].EnabledFieldNotifications,&local_18);
    }
  }
  return;
}

// BuildNavigation @ 1469a37c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::BuildNavigation(UWidget *this)

{
  UWidgetNavigation *this_00;
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNavigationMetaData *pFVar5;
  TSharedPtr<FNavigationMetaData,1> local_68;
  TSharedPtr<SWidget,1> local_58;
  undefined8 local_48;
  FSharedReferencer<1> local_40;
  TSharedRef<ISlateMetaData,1> local_38;
  TSharedRef<FNavigationMetaData,1> local_28;
  
  if ((this->Navigation).field0_0x0.DebugPtr != (UWidgetNavigation *)0x0) {
    GetCachedWidget(this,&local_58);
    if (local_58.Object != (SWidget *)0x0) {
      if (local_58.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SWidget::GetMetaData<FNavigationMetaData>(local_58.Object,&local_68);
      pFVar5 = local_68.Object;
      if (local_68.Object == (FNavigationMetaData *)0x0) {
        pTVar4 = ::operator_new(0x150);
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          pTVar4 = (TReferenceControllerBase<1> *)0x0;
          local_68.Object = (FNavigationMetaData *)&DAT_00000010;
        }
        else {
          pTVar4->SharedReferenceCount = (atomic<int>)0x1;
          pTVar4->WeakReferenceCount = (atomic<int>)0x1;
          pTVar4->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFNavigationMetaData___00_SharedPointerInternals__6B_
          ;
          FNavigationMetaData::FNavigationMetaData((FNavigationMetaData *)(pTVar4 + 1));
          local_68.Object = (FNavigationMetaData *)(pTVar4 + 1);
          if (local_68.Object == (FNavigationMetaData *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L"");
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48 = 0;
        local_40.ReferenceController = pTVar4;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_68.SharedReferenceCount,&local_40);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_40.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (local_58.Object == (SWidget *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        pFVar5 = local_68.Object;
        if (local_68.Object == (FNavigationMetaData *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FVar2.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar5 == (FNavigationMetaData *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        local_38.Object = (ISlateMetaData *)pFVar5;
        local_38.SharedReferenceCount.ReferenceController = FVar2.ReferenceController;
        if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar2.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SWidget::AddMetadataInternal(local_58.Object,&local_38);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar2.ReferenceController);
      }
      this_00 = (this->Navigation).field0_0x0.DebugPtr;
      if (pFVar5 == (FNavigationMetaData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_28.Object = local_68.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_68.Object == (FNavigationMetaData *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UWidgetNavigation::UpdateMetaData(this_00,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ConvertFloatToOptionalFloat @ 1469b0ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<float> __thiscall
UWidget::ConvertFloatToOptionalFloat(UWidget *this,TAttribute<float> *param_1)

{
  void *pvVar1;
  float *pfVar2;
  TAttribute<float> *in_R8;
  
  pfVar2 = TAttribute<float>::Get(in_R8);
  param_1->bIsSet = true;
  param_1->Value = *pfVar2;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&in_R8->Getter);
  pvVar1 = *(void **)&(in_R8->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&in_R8->Getter);
  return (TOptional<float>)param_1;
}

// ConvertRuntimeToSerializedVisibility @ 1469b1180

ESlateVisibility __cdecl UWidget::ConvertRuntimeToSerializedVisibility(EVisibility *param_1)

{
  TEnumAsByte<EVisibility::Private> TVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  
  TVar1.Value = (param_1->Value).Value;
  if ((TEnumAsByte<EVisibility::Private>)TVar1.Value != EVisibility::Visible.Value.Value) {
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::Collapsed.Value.Value) {
      return Collapsed;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::Hidden.Value.Value) {
      return Hidden;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::HitTestInvisible.Value.Value)
    {
      return HitTestInvisible;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value ==
        EVisibility::SelfHitTestInvisible.Value.Value) {
      return SelfHitTestInvisible;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                       ,0x6c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  return Visible;
}

// ConvertSerializedSizeParamToRuntime @ 1469b1210

FSizeParam * __cdecl
UWidget::ConvertSerializedSizeParamToRuntime
          (FSizeParam *__return_storage_ptr__,FSlateChildSize *param_1)

{
  float fVar1;
  byte bVar2;
  FAuto *pFVar3;
  FMRSWRecursiveAccessDetector *this;
  undefined1 local_80 [8];
  ForAnyElementType FStack_78;
  ulonglong local_70;
  undefined1 local_68 [12];
  bool local_5c;
  undefined1 local_58 [24];
  float local_40;
  bool local_3c;
  undefined1 local_38 [24];
  FDestructionSentinel local_20;
  
  bVar2 = (param_1->SizeRule).Value;
  if ((bVar2 == 0) || (bVar2 != SizeRule_Stretch)) {
    pFVar3 = FAuto::FAuto((FAuto *)local_68);
    __return_storage_ptr__->SizeRule = *(ESizeRule *)pFVar3;
    (__return_storage_ptr__->Value).Value = *(float *)&pFVar3->field_0x8;
    (__return_storage_ptr__->Value).bIsSet = (bool)pFVar3->field_0xc;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->Value).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar3->field_0x10);
    (__return_storage_ptr__->ShrinkValue).Value = *(float *)&pFVar3->field_0x28;
    (__return_storage_ptr__->ShrinkValue).bIsSet = (bool)pFVar3->field_0x2c;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(__return_storage_ptr__->ShrinkValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar3->field_0x30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    this = (FMRSWRecursiveAccessDetector *)local_58;
  }
  else {
    fVar1 = param_1->Value;
    local_70 = 0;
    local_80 = (undefined1  [8])0x0;
    FStack_78.Data = (FScriptContainerElement *)0x0;
    local_68._0_4_ = (uint)bVar2;
    local_68._8_4_ = fVar1;
    local_5c = (bool)bVar2;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_58,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_80);
    local_40 = fVar1;
    local_3c = (bool)bVar2;
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
              ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
               (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_80);
    __return_storage_ptr__->SizeRule = local_68._0_4_;
    (__return_storage_ptr__->Value).bIsSet = local_5c;
    (__return_storage_ptr__->Value).Value = (float)local_68._8_4_;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(__return_storage_ptr__->Value).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    (__return_storage_ptr__->ShrinkValue).Value = local_40;
    (__return_storage_ptr__->ShrinkValue).bIsSet = local_3c;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &(__return_storage_ptr__->ShrinkValue).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    if ((void *)local_38._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_38._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    if ((void *)local_58._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_58._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_80,
               (FWriteAccessScope *)&local_20);
    if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_78.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
      local_70 = local_70 & 0xffffffff00000000;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (FStack_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_78.Data);
    }
    this = (FMRSWRecursiveAccessDetector *)local_80;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this);
  return __return_storage_ptr__;
}

// ConvertSerializedVisibilityToRuntime @ 1469b1420

/* WARNING: Type propagation algorithm not settling */

EVisibility __cdecl UWidget::ConvertSerializedVisibilityToRuntime(ESlateVisibility param_1)

{
  code *pcVar1;
  bool bVar2;
  TEnumAsByte<EVisibility::Private> TVar3;
  undefined7 in_register_00000009;
  TEnumAsByte<EVisibility::Private> *pTVar4;
  char in_DL;
  
  pTVar4 = (TEnumAsByte<EVisibility::Private> *)CONCAT71(in_register_00000009,param_1);
  if (in_DL != '\0') {
    if (in_DL == '\x01') {
      pTVar4->Value = (uchar)EVisibility::Collapsed.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
    }
    if (in_DL == '\x02') {
      pTVar4->Value = (uchar)EVisibility::Hidden.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
    }
    if (in_DL == '\x03') {
      pTVar4->Value = (uchar)EVisibility::HitTestInvisible.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
    }
    if (in_DL == '\x04') {
      pTVar4->Value = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                       ,0x6a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Value = (*pcVar1)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar3.Value;
    }
  }
  pTVar4->Value = (uchar)EVisibility::Visible.Value.Value;
  return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)param_1;
}

// ConvertVisibility @ 1469b14d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall
UWidget::ConvertVisibility(UWidget *this,TAttribute<ESlateVisibility> *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *in_R8;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(in_R8 + 8),&local_28);
  if ((*(int *)(in_R8 + 0x18) != 0) && (*(longlong **)(in_R8 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(in_R8 + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(in_R8 + 8),&local_28);
      if (*(int *)(in_R8 + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(in_R8 + 0x10);
      }
      uVar2 = (**(code **)(*plVar3 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *in_R8 = uVar2;
      goto LAB_1469b1553;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_1469b1553:
  ConvertSerializedVisibilityToRuntime((uchar)(uchar)param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(in_R8 + 8));
  if (*(void **)(in_R8 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(in_R8 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(in_R8 + 8));
  return (EVisibility)(uchar)param_1;
}

// FGenerateWidgetForObject_DelegateWrapper @ 1469c7270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
UWidget::FGenerateWidgetForObject_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2)

{
  UObject *local_18;
  UWidget *local_10;
  
  local_10 = (UWidget *)0x0;
  local_18 = param_2;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  return local_10;
}

// FGenerateWidgetForString_DelegateWrapper @ 1469c72a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
UWidget::FGenerateWidgetForString_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  UWidget *pUVar2;
  FString local_28;
  UWidget *local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_18 = (UWidget *)0x0;
  if (&local_28 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  pUVar2 = local_18;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pUVar2;
}

// FGetBool_DelegateWrapper @ 1469c7350

bool __cdecl UWidget::FGetBool_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  char local_res10 [24];
  
  local_res10[0] = '\0';
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0] != '\0';
}

// FGetCheckBoxState_DelegateWrapper @ 1469c7380

ECheckBoxState __cdecl
UWidget::FGetCheckBoxState_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  ECheckBoxState local_res10 [24];
  
  local_res10[0] = Unchecked;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FGetFloat_DelegateWrapper @ 1469c73b0

float __cdecl
UWidget::FGetFloat_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FGetInt32_DelegateWrapper @ 1469c73e0

int __cdecl UWidget::FGetInt32_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FGetLinearColor_DelegateWrapper @ 1469c7410

FLinearColor * __cdecl
UWidget::FGetLinearColor_DelegateWrapper
          (FLinearColor *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1
          )

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_18;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_10;
  return __return_storage_ptr__;
}

// FGetMouseCursor_DelegateWrapper @ 1469c7450

Type __cdecl
UWidget::FGetMouseCursor_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  byte local_res10 [24];
  
  local_res10[0] = 0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return (Type)local_res10[0];
}

// FGetSlateBrush_DelegateWrapper @ 1469c7480

FSlateBrush * __cdecl
UWidget::FGetSlateBrush_DelegateWrapper
          (FSlateBrush *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_b8);
  FSlateBrush::FSlateBrush(__return_storage_ptr__,&local_b8);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FGetSlateColor_DelegateWrapper @ 1469c74f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __cdecl
UWidget::FGetSlateColor_DelegateWrapper
          (FSlateColor *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_28 = ___xmm_3f8000003f800000000000003f800000;
  uStack_20 = _UNK_15090c6d8;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_28);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = local_28;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uStack_20;
  __return_storage_ptr__->ColorUseRule = (undefined1)local_18;
  __return_storage_ptr__->ColorTableId = local_18._1_1_;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = local_18._2_2_;
  return __return_storage_ptr__;
}

// FGetSlateVisibility_DelegateWrapper @ 1469c7540

ESlateVisibility __cdecl
UWidget::FGetSlateVisibility_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  ESlateVisibility local_res10 [24];
  
  local_res10[0] = Visible;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FGetText_DelegateWrapper @ 1469c7570

FText * __cdecl
UWidget::FGetText_DelegateWrapper
          (FText *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  undefined1 local_res8 [8];
  FText local_18;
  
  FText::FText(&local_18);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_18);
  (__return_storage_ptr__->TextData).Reference = local_18.TextData.Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  __return_storage_ptr__->Flags = local_18.Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// FGetWidget_DelegateWrapper @ 1469c7610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
UWidget::FGetWidget_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  UWidget *local_res10 [3];
  
  local_res10[0] = (UWidget *)0x0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FOnPointerEvent_DelegateWrapper @ 1469c80a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidget::FOnPointerEvent_DelegateWrapper
          (FEventReply *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          FGeometry *param_2,FPointerEvent *param_3)

{
  FSharedReferencer<1> FVar1;
  undefined1 auStack_288 [32];
  LARGE_INTEGER local_268;
  FReply local_260;
  FGeometry local_1a8;
  FPointerEvent local_170;
  FReply local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  FGeometry::FGeometry(&local_1a8);
  local_170._padding_._2_1_ = 0;
  local_170._padding_ = (longlong)&___7FInputEvent__6B_;
  local_170._padding_._4_4_ = 0;
  local_170._padding_._0_2_ = (ushort)local_170._padding_ & 0xfe00;
  local_170._padding_._0_4_ = 0xffffffff;
  local_170._padding_ = 0;
  QueryPerformanceCounter(&local_268);
  local_170._padding_ = (longlong)local_268;
  local_170._padding_ = (longlong)&___7FPointerEvent__6B_;
  local_170.ScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  local_170.LastScreenSpacePosition = (FDeprecateSlateVector2D)0x0;
  local_170.CursorDelta = (FDeprecateSlateVector2D)0x0;
  local_170.PressedButtons =
       (TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator> *)&FTouchKeySet::EmptySet;
  local_268.QuadPart = 0;
  local_170.EffectingButton.KeyName.ComparisonIndex.Value = 0;
  local_170.EffectingButton.KeyName.Number = 0;
  local_170.EffectingButton.KeyDetails.Object = (FKeyDetails *)0x0;
  local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_170.PointerIndex = 0;
  local_170.TouchpadIndex = 0;
  local_170.Force = 1.0;
  local_170.bIsTouchEvent = false;
  local_170.GestureType = None;
  local_170.WheelOrGestureDelta = (FDeprecateSlateVector2D)0x0;
  local_170.bIsDirectionInvertedFromDevice = false;
  local_170.bIsTouchForceChanged = false;
  local_170.bIsTouchFirstMove = false;
  FReply::FReply(&local_260,false);
  FReply::FReply(&local_f0,&local_260);
  FReply::~FReply(&local_260);
  FGeometry::operator=(&local_1a8,param_2);
  FVar1.ReferenceController =
       local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController;
  local_170._padding_._0_2_ = (ushort)param_3->_padding_;
  local_170.EffectingButton.KeyDetails.Object = (param_3->EffectingButton).KeyDetails.Object;
  local_170._padding_._2_1_ = *(undefined1 *)((longlong)&param_3->_padding_ + 2);
  local_170._padding_._4_4_ = *(undefined4 *)((longlong)&param_3->_padding_ + 4);
  local_170._padding_._0_4_ = (undefined4)param_3->_padding_;
  local_170._padding_ = param_3->_padding_;
  local_170._padding_ = param_3->_padding_;
  local_170.ScreenSpacePosition = param_3->ScreenSpacePosition;
  local_170.LastScreenSpacePosition = param_3->LastScreenSpacePosition;
  local_170.CursorDelta = param_3->CursorDelta;
  local_170.PressedButtons = param_3->PressedButtons;
  local_170.EffectingButton.KeyName = (param_3->EffectingButton).KeyName;
  local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_3->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(local_170.EffectingButton.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  local_170.Force = param_3->Force;
  local_170.PointerIndex = param_3->PointerIndex;
  local_170.TouchpadIndex = param_3->TouchpadIndex;
  local_170.bIsTouchEvent = param_3->bIsTouchEvent;
  local_170.GestureType = param_3->GestureType;
  local_170.WheelOrGestureDelta = param_3->WheelOrGestureDelta;
  local_170.bIsTouchFirstMove = param_3->bIsTouchFirstMove;
  local_170.bIsDirectionInvertedFromDevice = param_3->bIsDirectionInvertedFromDevice;
  local_170.bIsTouchForceChanged = param_3->bIsTouchForceChanged;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_1a8);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_f0);
  FReply::~FReply(&local_f0);
  FPointerEvent::~FPointerEvent(&local_170);
  return __return_storage_ptr__;
}

// FOnReply_DelegateWrapper @ 1469c8300

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidget::FOnReply_DelegateWrapper
          (FEventReply *__return_storage_ptr__,TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_c8,false);
  FReply::FReply(&local_188,&local_c8);
  FReply::~FReply(&local_c8);
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,&local_188);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_188);
  FReply::~FReply(&local_188);
  return __return_storage_ptr__;
}

// FindBinderClassForDestination @ 1469c89c0

TSubclassOf<UPropertyBinding> __cdecl UWidget::FindBinderClassForDestination(FProperty *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  UClass *pUVar6;
  TSubclassOf<UPropertyBinding> TVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  UObject *pUVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_48;
  
  if (BinderClasses.ArrayNum == 0) {
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    pUVar6 = Z_Construct_UClass_UPropertyBinding_NoRegister();
    GetDerivedClasses(pUVar6,&local_48,true);
    uVar9 = local_48._8_8_ & 0xffffffff;
    if (local_48.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    if (BinderClasses.ArrayMax < local_48.ArrayNum) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_48.ArrayNum,&BinderClasses.AllocatorInstance,BinderClasses.ArrayNum,
                 &BinderClasses.ArrayMax);
      uVar9 = local_48._8_8_ & 0xffffffff;
    }
    iVar8 = (int)uVar9;
    pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar8 * 8;
    FVar11.Data = local_48.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar8) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar11.Data == pFVar1) break;
      pUVar12 = *(UObject **)FVar11.Data;
      if (BinderClasses.ArrayNum == BinderClasses.ArrayMax) {
        BinderClasses.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&BinderClasses.AllocatorInstance,&BinderClasses.ArrayMax);
      }
      lVar10 = (longlong)BinderClasses.ArrayNum;
      BinderClasses.ArrayNum = BinderClasses.ArrayNum + 1;
      *(UObject **)(BinderClasses.AllocatorInstance.Data + lVar10 * 8) = pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      uVar9 = local_48._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  iVar8 = BinderClasses.ArrayNum;
  pFVar1 = BinderClasses.AllocatorInstance.Data + (longlong)BinderClasses.ArrayNum * 8;
  FVar11.Data = BinderClasses.AllocatorInstance.Data;
  do {
    if (BinderClasses.ArrayNum != iVar8) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSubclassOf<UPropertyBinding>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar11.Data == pFVar1) {
      param_1->_padding_ = 0;
      return (TSubclassOf<UPropertyBinding>)(TObjectPtr<UClass>)param_1;
    }
    pUVar6 = *(UClass **)FVar11.Data;
    pUVar12 = (UObject *)0x0;
    if (pUVar6 != (UClass *)0x0) {
      if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar6);
      }
      pUVar12 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar12 != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UPropertyBinding_NoRegister();
        iVar2 = (int)pUVar6->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar6->_padding_)) goto LAB_1469c8b97;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                         ,0x93,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        TVar7.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar3)();
        return (TSubclassOf<UPropertyBinding>)TVar7.Class.field0_0x0;
      }
    }
LAB_1469c8b97:
    cVar5 = (**(code **)(*(longlong *)pUVar12 + 0x2b8))(pUVar12);
    if (cVar5 != '\0') {
      pUVar12 = *(UObject **)FVar11.Data;
      param_1->_padding_ = (longlong)pUVar12;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar12);
      }
      return (TSubclassOf<UPropertyBinding>)(TObjectPtr<UClass>)param_1;
    }
    FVar11.Data = FVar11.Data + 8;
  } while( true );
}

// FindChildContainingDescendant @ 1469c8c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl UWidget::FindChildContainingDescendant(UWidget *param_1,UWidget *param_2)

{
  UPanelSlot *pUVar1;
  UPanelWidget *pUVar2;
  UPanelWidget *pUVar3;
  
  if ((param_1 != (UWidget *)0x0) &&
     (pUVar1 = (param_2->Slot).field0_0x0.DebugPtr, pUVar1 != (UPanelSlot *)0x0)) {
    pUVar3 = (pUVar1->Parent).field0_0x0.DebugPtr;
    while (pUVar2 = pUVar3, pUVar2 != (UPanelWidget *)0x0) {
      if (pUVar2 == (UPanelWidget *)param_1) {
        return param_2;
      }
      pUVar1 = (((TObjectPtr<UPanelSlot> *)&pUVar2->_padding_)->field0_0x0).DebugPtr;
      if (pUVar1 == (UPanelSlot *)0x0) {
        return (UWidget *)0x0;
      }
      param_2 = (UWidget *)pUVar2;
      pUVar3 = (pUVar1->Parent).field0_0x0.DebugPtr;
    }
  }
  return (UWidget *)0x0;
}

// FinishDestroy @ 1469c90c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::FinishDestroy(UWidget *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res10;
  FStatMessage local_18;
  
  UObject::FinishDestroy((UObject *)this);
  FVar3 = StatPtr_STAT_SlateUTotalWidgets;
  if (StatPtr_STAT_SlateUTotalWidgets == (FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets>)0x0)
  {
    pFVar2 = ::FName::FName(&local_res10,"STAT_SlateUTotalWidgets");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_SlateUTotalWidgets>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateUTotalWidgets,*pFVar2,
                       L"Total Created UWidgets","STATGROUP_SlateMemory","STATCAT_Advanced",
                       L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res10,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return;
}

// ForceLayoutPrepass @ 1469c94a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::ForceLayoutPrepass(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    (local_18.Object)->bNeedsPrepass = '\x01';
    pFVar3 = SWidget::GetTickSpaceGeometry(local_18.Object);
    SWidget::SlatePrepass(local_18.Object,pFVar3->Scale);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ForceVolatile @ 1469c9520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::ForceVolatile(UWidget *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  this->bIsVolatile = '\0';
  this->field_0xf9 = this->field_0xf9 | param_1 << 4;
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    if ((local_18.Object)->bForceVolatile != param_1) {
      (local_18.Object)->field_0x30 = (local_18.Object)->field_0x30 & 0xef | param_1 << 4;
      SWidget::Invalidate(local_18.Object,PaintAndVolatility);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// GetAccessibleSummaryText @ 1469ccbc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UWidget::GetAccessibleSummaryText(UWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x308))(this,&local_18);
  if (local_18 == (SWidget *)0x0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  if ((local_18 == (SWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar2)();
    return pFVar4;
  }
  SWidget::GetAccessibleSummary(local_18,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetAccessibleText @ 1469ccc90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UWidget::GetAccessibleText(UWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  (**(code **)(this->_padding_ + 0x308))(this,&local_18);
  if (local_18 == (SWidget *)0x0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    return __return_storage_ptr__;
  }
  if ((local_18 == (SWidget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar2)();
    return pFVar4;
  }
  SWidget::GetAccessibleText(local_18,__return_storage_ptr__,Main);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return __return_storage_ptr__;
}

// GetAccessibleWidget @ 1469cce80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UWidget::GetAccessibleWidget(UWidget *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  GetCachedWidget(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCachedGeometry @ 1469ce0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall UWidget::GetCachedGeometry(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  SWidget *this_00;
  TSharedPtr<SWidget,1> TStack_18;
  
  GetCachedWidget(this,&TStack_18);
  this_00 = SNullWidget::NullWidget.Object;
  if (((TStack_18.Object != (SWidget *)0x0) &&
      (this_00 = TStack_18.Object, TStack_18.Object == (SWidget *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometry *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = SWidget::GetTickSpaceGeometry(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_18.SharedReferenceCount.ReferenceController);
  return pFVar3;
}

// GetCachedWidget @ 1469ce100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UWidget::GetCachedWidget(UWidget *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if ((((this->MyGCWidget).Object != (SObjectWidget *)0x0) &&
      (pTVar1 = (this->MyGCWidget).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    pTVar1 = (this->MyGCWidget).WeakReferenceCount.ReferenceController;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (SWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        __return_storage_ptr__->Object = (SWidget *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        return __return_storage_ptr__;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
    __return_storage_ptr__->Object = (SWidget *)(this->MyGCWidget).Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (SWidget *)0x0;
  pTVar1 = (this->MyWidget).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->MyWidget).Object;
  }
  return __return_storage_ptr__;
}

// GetCachedWrappedWidget @ 1469ce210

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<SWidget,1> * __thiscall
UWidget::GetCachedWrappedWidget(UWidget *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if ((((this->ComponentWrapperWidget).Object == (SWidget *)0x0) ||
      (pTVar1 = (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    GetCachedWidget(this,__return_storage_ptr__);
  }
  else {
    __return_storage_ptr__->Object = (SWidget *)0x0;
    pTVar1 = (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar1->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar3 = pTVar1->SharedReferenceCount;
        bVar4 = aVar2 == aVar3;
        if (bVar4) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar3 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar3;
      } while (!bVar4);
    }
    if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (this->ComponentWrapperWidget).Object;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetClipping @ 1469ce500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWidgetClipping __thiscall UWidget::GetClipping(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  EWidgetClipping EVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    EVar3 = this->Clipping;
  }
  else {
    if (local_18.Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    EVar3 = (local_18.Object)->Clipping;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return EVar3;
}

// GetCursor @ 1469cec20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall UWidget::GetCursor(UWidget *this)

{
  return (Type)(this->Cursor).Value;
}

// GetDefaultFontName @ 1469cf230

FString * __cdecl UWidget::GetDefaultFontName(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"/Engine/EngineFonts/Roboto");
  FConfigCacheIni::GetString
            (GConfig,L"SlateStyle",L"DefaultFontName",__return_storage_ptr__,&GEngineIni);
  return __return_storage_ptr__;
}

// GetDesiredSize @ 1469cfc20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UWidget::GetDesiredSize(UWidget *this,TVector2<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    if (local_18.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TVector2<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    FVar5 = SWidget::GetDesiredSize(local_18.Object);
    uVar1 = *(undefined8 *)FVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetFlowDirectionPreference @ 1469d08f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EFlowDirectionPreference __thiscall UWidget::GetFlowDirectionPreference(UWidget *this)

{
  return this->FlowDirectionPreference;
}

// GetGameInstance @ 1469d0c30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameInstance * __thiscall UWidget::GetGameInstance(UWidget *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x180))();
  if (lVar1 != 0) {
    return *(UGameInstance **)(lVar1 + 0x230);
  }
  return (UGameInstance *)0x0;
}

// GetIsEnabled @ 1469d15e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::GetIsEnabled(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar4;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    TVar4 = this->bIsEnabled;
  }
  else {
    if (local_18.Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    TVar4 = (local_18.Object)->EnabledStateAttribute;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)TVar4;
}

// GetOwningLocalPlayer @ 1469d2f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULocalPlayer * __thiscall UWidget::GetOwningLocalPlayer(UWidget *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  ULocalPlayer *pUVar4;
  longlong *plVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return (ULocalPlayer *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return (ULocalPlayer *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return (ULocalPlayer *)0x0;
  }
  plVar5 = *(longlong **)(lVar2 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_1469d2fa0;
  }
  plVar5 = (longlong *)0x0;
LAB_1469d2fa0:
  if (plVar5 == (longlong *)0x0) {
    return (ULocalPlayer *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001469d2fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar4 = (ULocalPlayer *)(**(code **)(*plVar5 + 0x2e0))(plVar5);
  return pUVar4;
}

// GetOwningPlayer @ 1469d2fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall UWidget::GetOwningPlayer(UWidget *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  APlayerController *pAVar4;
  longlong *plVar5;
  
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return (APlayerController *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return (APlayerController *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return (APlayerController *)0x0;
  }
  plVar5 = *(longlong **)(lVar2 + 0x20);
  if (plVar5 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_1469d3030;
  }
  plVar5 = (longlong *)0x0;
LAB_1469d3030:
  if (plVar5 == (longlong *)0x0) {
    return (APlayerController *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001469d3040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pAVar4 = (APlayerController *)(**(code **)(*plVar5 + 0x2d8))(plVar5);
  return pAVar4;
}

// GetPaintSpaceGeometry @ 1469d3720

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall UWidget::GetPaintSpaceGeometry(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  SWidget *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  this_00 = SNullWidget::NullWidget.Object;
  if (((local_18.Object != (SWidget *)0x0) &&
      (this_00 = local_18.Object, local_18.Object == (SWidget *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometry *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = SWidget::GetPaintSpaceGeometry(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar3;
}

// GetParent @ 1469d37a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelWidget * __thiscall UWidget::GetParent(UWidget *this)

{
  UPanelSlot *pUVar1;
  
  pUVar1 = (this->Slot).field0_0x0.DebugPtr;
  if (pUVar1 != (UPanelSlot *)0x0) {
    return (pUVar1->Parent).field0_0x0.DebugPtr;
  }
  return (UPanelWidget *)0x0;
}

// GetPixelSnapping @ 1469d3800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EWidgetPixelSnapping __thiscall UWidget::GetPixelSnapping(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  EWidgetPixelSnapping EVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    EVar3 = this->PixelSnapping;
  }
  else {
    if (local_18.Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    EVar3 = (local_18.Object)->PixelSnappingMethod;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return EVar3;
}

// GetPrivateStaticClass @ 1469d6a00

UClass * __cdecl UWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Widget",&Z_Registration_Info_UClass_UWidget.InnerSingleton,
               StaticRegisterNativesUWidget,0x1b0,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidget>,InternalVTableHelperCtorCaller<UWidget>,
               local_res8,UVisual::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidget.InnerSingleton;
}

// GetRenderOpacity @ 1469d6ca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UWidget::GetRenderOpacity(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TSharedPtr<SWidget,1> local_28 [2];
  
  GetCachedWidget(this,local_28);
  if (local_28[0].Object == (SWidget *)0x0) {
    fVar3 = this->RenderOpacity;
  }
  else {
    if (local_28[0].Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = (local_28[0].Object)->RenderOpacity;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return fVar3;
}

// GetRenderTransform @ 1469d6f20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FWidgetTransform * __thiscall UWidget::GetRenderTransform(UWidget *this)

{
  return &this->RenderTransform;
}

// GetRenderTransformAngle @ 1469d6f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UWidget::GetRenderTransformAngle(UWidget *this)

{
  return (this->RenderTransform).Angle;
}

// GetRenderTransformPivot @ 1469d6f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UWidget::GetRenderTransformPivot(UWidget *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->RenderTransformPivot).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->RenderTransformPivot).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetSourceAssetOrClass @ 1469d8950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall UWidget::GetSourceAssetOrClass(UWidget *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar1 = FWeakObjectPtr::Get(&(this->WidgetGeneratedByClass).WeakPtr);
  if (pUVar1 == (UObject *)0x0) {
    while( true ) {
      pUVar2 = StaticClass();
      this = (UWidget *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
      if (this == (UWidget *)0x0) break;
      pUVar3 = FWeakObjectPtr::Get(&(this->WidgetGeneratedByClass).WeakPtr);
      pUVar1 = (UObject *)0x0;
      if (pUVar3 != (UObject *)0x0) {
        return pUVar3;
      }
    }
  }
  return pUVar1;
}

// GetTickSpaceGeometry @ 1469d8f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FGeometry * __thiscall UWidget::GetTickSpaceGeometry(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  SWidget *this_00;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  this_00 = SNullWidget::NullWidget.Object;
  if (((local_18.Object != (SWidget *)0x0) &&
      (this_00 = local_18.Object, local_18.Object == (SWidget *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometry *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = SWidget::GetTickSpaceGeometry(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar3;
}

// GetToolTip @ 1469d8fc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidget::GetToolTip(UWidget *this)

{
  return (this->ToolTipWidget).field0_0x0.DebugPtr;
}

// GetToolTipText @ 1469d8fd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall UWidget::GetToolTipText(UWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->ToolTipText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->ToolTipText).Flags;
  return __return_storage_ptr__;
}

// GetVisibility @ 1469da090

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ESlateVisibility __thiscall UWidget::GetVisibility(UWidget *this)

{
  TEnumAsByte<EVisibility::Private> TVar1;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    EVar4 = this->Visibility;
    goto LAB_1469da166;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  TVar1.Value = *(uchar *)&(local_18.Object)->VisibilityAttribute;
  if ((TEnumAsByte<EVisibility::Private>)TVar1.Value != EVisibility::Visible.Value.Value) {
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::Collapsed.Value.Value) {
      EVar4 = Collapsed;
      goto LAB_1469da166;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::Hidden.Value.Value) {
      EVar4 = Hidden;
      goto LAB_1469da166;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value == EVisibility::HitTestInvisible.Value.Value)
    {
      EVar4 = HitTestInvisible;
      goto LAB_1469da166;
    }
    if ((TEnumAsByte<EVisibility::Private>)TVar1.Value ==
        EVisibility::SelfHitTestInvisible.Value.Value) {
      EVar4 = SelfHitTestInvisible;
      goto LAB_1469da166;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                       ,0x6c4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  EVar4 = Visible;
LAB_1469da166:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return EVar4;
}

// GetWorld @ 1469da8a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UWidget::GetWorld(UWidget *this)

{
  int iVar1;
  longlong *plVar2;
  UClass *pUVar3;
  UWorld *pUVar4;
  
  plVar2 = (longlong *)this->_padding_;
  if (plVar2 != (longlong *)0x0) {
    pUVar3 = Z_Construct_UClass_UWidgetTree_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(plVar2[2] + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x0001469da8e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar4 = (UWorld *)(**(code **)(*plVar2 + 0x180))(plVar2);
      return pUVar4;
    }
  }
  pUVar4 = UObject::GetWorld((UObject *)this);
  return pUVar4;
}

// HasAnyUserFocus @ 1469de010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::HasAnyUserFocus(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_res11;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  SWidget::HasAnyUserFocus(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)local_res11;
}

// HasFocusedDescendants @ 1469de0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::HasFocusedDescendants(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = SWidget::HasFocusedDescendants(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// HasKeyboardFocus @ 1469de190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::HasKeyboardFocus(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x1a0))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// HasMouseCapture @ 1469de220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::HasMouseCapture(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = SWidget::HasMouseCapture(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// HasMouseCaptureByUser @ 1469de2b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::HasMouseCaptureByUser(UWidget *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int local_res20;
  undefined1 local_res24;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    bVar2 = false;
  }
  else {
    if ((local_18.Object == (SWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_res24 = -1 < param_2;
    if ((bool)local_res24) {
      local_res20 = param_2;
    }
    bVar2 = SWidget::HasMouseCaptureByUser(local_18.Object,param_1,(TOptional<int>)&local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return bVar2;
}

// HasUserFocus @ 1469df7f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWidget::HasUserFocus(UWidget *this,APlayerController *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  ULocalPlayer *pUVar5;
  FSlateApplication *this_00;
  undefined1 local_res10;
  undefined1 local_res11;
  TSharedPtr<SWidget,1> local_28;
  FLocalPlayerContext local_18;
  
  if (((param_1 == (APlayerController *)0x0) ||
      ((param_1->Player).field0_0x0.DebugPtr == (UPlayer *)0x0)) || ((param_1->_padding_ & 2) == 0))
  {
    return false;
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1);
  if (cVar2 == '\0') {
    return false;
  }
  GetCachedWidget(this,&local_28);
  if (local_28.Object != (SWidget *)0x0) {
    FLocalPlayerContext::FLocalPlayerContext(&local_18,param_1);
    pUVar5 = FLocalPlayerContext::GetLocalPlayer(&local_18);
    if (pUVar5 != (ULocalPlayer *)0x0) {
      this_00 = FSlateApplication::Get();
      FSlateApplication::GetUserIndexForController(this_00,pUVar5->ControllerId);
      if ((local_28.Object == (SWidget *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      SWidget::HasUserFocus(local_28.Object,(int)&local_res10);
      goto LAB_1469df8d8;
    }
  }
  local_res11 = 0;
LAB_1469df8d8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return (bool)local_res11;
}

// HasUserFocusedDescendants @ 1469df910

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWidget::HasUserFocusedDescendants(UWidget *this,APlayerController *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ULocalPlayer *pUVar6;
  FSlateApplication *this_00;
  TSharedPtr<SWidget,1> local_28;
  FLocalPlayerContext local_18;
  
  if ((param_1 == (APlayerController *)0x0) || ((param_1->_padding_ & 2) == 0)) {
    return false;
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1);
  if (cVar2 == '\0') {
    return false;
  }
  GetCachedWidget(this,&local_28);
  if (local_28.Object != (SWidget *)0x0) {
    FLocalPlayerContext::FLocalPlayerContext(&local_18,param_1);
    pUVar6 = FLocalPlayerContext::GetLocalPlayer(&local_18);
    if (pUVar6 != (ULocalPlayer *)0x0) {
      this_00 = FSlateApplication::Get();
      iVar5 = FSlateApplication::GetUserIndexForController(this_00,pUVar6->ControllerId);
      if ((local_28.Object == (SWidget *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar3 = SWidget::HasUserFocusedDescendants(local_28.Object,iVar5);
      goto LAB_1469df9e2;
    }
  }
  bVar3 = false;
LAB_1469df9e2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// InvalidateLayoutAndVolatility @ 1469e0920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::InvalidateLayoutAndVolatility(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    SWidget::Invalidate(local_18.Object,LayoutAndVolatility);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// IsChildOf @ 1469e0b40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::IsChildOf(UWidget *this,UWidget *param_1)

{
  UPanelSlot *pUVar1;
  
  while ((pUVar1 = (((TObjectPtr<UPanelSlot> *)&((UPanelWidget *)this)->_padding_)->field0_0x0).
                   DebugPtr, pUVar1 != (UPanelSlot *)0x0 &&
         (this = (UWidget *)(pUVar1->Parent).field0_0x0.DebugPtr,
         (UPanelWidget *)this != (UPanelWidget *)0x0))) {
    if (this == param_1) {
      return true;
    }
  }
  return false;
}

// IsConstructed @ 1469e14e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::IsConstructed(UWidget *this)

{
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return local_18.Object != (SWidget *)0x0;
}

// IsHovered @ 1469e17b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::IsHovered(UWidget *this)

{
  TSlateAttribute<bool,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  TVar1 = (local_18.Object)->HoveredAttribute;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)TVar1;
}

// IsInViewport @ 1469e18a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UWidget::IsInViewport(UWidget *this)

{
  bool bVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this_00;
  
  if (this->bIsManagedByGameViewportSubsystem != '\0') {
    pUVar2 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar2);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      bVar1 = UGameViewportSubsystem::IsWidgetAdded(this_00,this);
      return bVar1;
    }
  }
  return false;
}

// IsRendered @ 1469e2870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::IsRendered(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((((byte)(local_18.Object)->VisibilityAttribute & 0x19) != 0) &&
       (0.0 < (local_18.Object)->RenderOpacity)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return true;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return false;
}

// IsVisible @ 1469e3850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::IsVisible(UWidget *this)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<SWidget,1> local_18;
  
  GetCachedWidget(this,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  TVar1 = (local_18.Object)->VisibilityAttribute;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return ((byte)TVar1 & 0x19) != 0;
}

// K2_AddFieldValueChangedDelegate @ 1469e3a10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::K2_AddFieldValueChangedDelegate
          (UWidget *this,FFieldNotificationId param_1,FFieldValueChangedDynamicDelegate *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  UWidgetFieldNotificationExtension *pUVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_58;
  int local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  FName local_30;
  code *local_28;
  longlong **local_20;
  
  if (param_1.FieldName != (FName)0x0) {
    puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
    local_58 = 0;
    local_38 = &local_58;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_30 = param_1.FieldName;
    (**(code **)*puVar5)(puVar5,this->_padding_,&local_28);
    if (local_58 == 0) {
      local_res10[0] = 0;
      bVar3 = `UWidget::K2_AddFieldValueChangedDelegate'::__l6::<lambda_1>::operator()(local_res10);
      if (!bVar3) goto LAB_1469e3ba1;
    }
    pUVar6 = UE::UMG::Private::FindOrAddWidgetNotifyExtension(this);
    if (pUVar6 != (UWidgetFieldNotificationExtension *)0x0) {
      local_48._8_4_ = local_50;
      local_48._0_8_ = local_58;
      UE::FieldNotification::FFieldMulticastDelegate::Add
                (&pUVar6->Delegates,(UObject *)&local_res18,(FFieldId *)this,
                 (FFieldValueChangedDynamicDelegate *)local_48);
      if (local_res18 != 0) {
        this_00 = &this->EnabledFieldNotifications;
        iVar7 = (local_50 - (this->EnabledFieldNotifications).NumBits) + 1;
        if (0 < iVar7) {
          iVar4 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar7);
          TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar4,iVar7,false);
        }
        if ((local_50 < 0) || ((this->EnabledFieldNotifications).NumBits <= local_50)) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)this_00;
        }
        puVar1 = (uint *)((longlong)FVar8 +
                         (longlong)((int)(local_50 + (local_50 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)local_50 & 0x1f);
      }
    }
  }
LAB_1469e3ba1:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// K2_BroadcastFieldValueChanged @ 1469e3bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::K2_BroadcastFieldValueChanged(UWidget *this,FFieldNotificationId param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [8];
  FName local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1.FieldName != (FName)0x0) {
    puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
    local_28._0_8_ = &local_38;
    local_10 = local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_28._8_8_ = param_1.FieldName;
    (**(code **)*puVar2)(puVar2,this->_padding_,&local_18);
    if ((local_38 != (FName)0x0) ||
       (bVar1 = `UWidget::K2_BroadcastFieldValueChanged'::__l6::<lambda_1>::operator()(local_res10),
       bVar1)) {
      local_28._0_4_ = local_38.ComparisonIndex.Value;
      local_28._4_4_ = local_38.Number;
      local_28._8_4_ = local_30;
      BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)local_28);
    }
  }
  return;
}

// K2_RemoveFieldValueChangedDelegate @ 1469e3c80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::K2_RemoveFieldValueChangedDelegate
          (UWidget *this,FFieldNotificationId param_1,FFieldValueChangedDynamicDelegate *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  UWidgetFieldNotificationExtension *pUVar6;
  longlong lVar7;
  ForElementType<unsigned_int> FVar8;
  undefined1 local_res10 [9];
  char local_res19;
  longlong local_58;
  uint local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  FName local_30;
  code *local_28;
  longlong **local_20;
  
  if (param_1.FieldName != (FName)0x0) {
    puVar5 = (undefined8 *)(**(code **)(this->_padding_ + 0x30))();
    local_58 = 0;
    local_38 = &local_58;
    local_20 = &local_38;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_30 = param_1.FieldName;
    (**(code **)*puVar5)(puVar5,this->_padding_,&local_28);
    if (local_58 == 0) {
      local_res10[0] = 0;
      bVar3 = `UWidget::K2_RemoveFieldValueChangedDelegate'::__l6::<lambda_1>::operator()
                        (local_res10);
      if (!bVar3) goto LAB_1469e3e46;
    }
    if ((-1 < (int)local_50) && ((int)local_50 < (this->EnabledFieldNotifications).NumBits)) {
      FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
      if (FVar8 == (ForElementType<unsigned_int>)0x0) {
        FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
      }
      if ((*(uint *)((longlong)FVar8 +
                    (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4) >>
           (local_50 & 0x1f) & 1) != 0) {
        pUVar6 = UE::UMG::Private::FindWidgetNotifyExtension(this);
        if ((pUVar6 == (UWidgetFieldNotificationExtension *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Extension",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                               ,0x7e7,
                               L"If the EnabledFieldNotifications is valid, then the Extension must also be valid."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48._0_8_ = local_58;
        local_48._8_4_ = local_50;
        UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
                  (&pUVar6->Delegates,(UObject *)(local_res10 + 8),(FFieldId *)this,
                   (FFieldValueChangedDynamicDelegate *)local_48);
        if ((((int)local_50 < 0) || ((this->EnabledFieldNotifications).NumBits <= (int)local_50)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar8 = (this->EnabledFieldNotifications).AllocatorInstance.SecondaryData;
        if (FVar8 == (ForElementType<unsigned_int>)0x0) {
          FVar8 = (ForElementType<unsigned_int>)&this->EnabledFieldNotifications;
        }
        lVar7 = (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5);
        uVar4 = 1 << ((byte)local_50 & 0x1f);
        uVar1 = *(uint *)((longlong)FVar8 + lVar7 * 4);
        if (local_res19 == '\0') {
          uVar4 = ~uVar4 & uVar1;
        }
        else {
          uVar4 = uVar4 | uVar1;
        }
        *(uint *)((longlong)FVar8 + lVar7 * 4) = uVar4;
      }
    }
  }
LAB_1469e3e46:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// OnBindingChanged @ 1469e5c00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::OnBindingChanged(UWidget *this,FName *param_1)

{
  return;
}

// OnWidgetRebuilt @ 1469f2850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::OnWidgetRebuilt(UWidget *this)

{
  return;
}

// PreSave @ 1469f4180

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::PreSave(UWidget *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// RebuildWidget @ 146a08a20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UWidget::RebuildWidget(UWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSharedRef<SSpacer,1> *pTVar3;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_268;
  TSharedRef<SSpacer,1> local_260;
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs> local_250;
  undefined1 local_238 [528];
  undefined1 local_28 [32];
  
  `UWidget::RebuildWidget'::__l2::<lambda_1>::operator()(local_res10);
  pFVar2 = SSpacer::FArguments::FArguments((FArguments *)local_238);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_268,&local_res20,true);
  TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>
            (&local_250,"SSpacer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
             ,0x5af,local_res10);
  FMemScope::~FMemScope(&local_268);
  FLLMScope::~FLLMScope(local_res18);
  pTVar3 = TSlateDecl<SSpacer,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_250,&local_260,pFVar2);
  __return_storage_ptr__->Object = (SWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_260.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_250._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  if ((void *)local_28._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_28._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_238);
  return __return_storage_ptr__;
}

// RegisterPostStateListener @ 146a092d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
UWidget::RegisterPostStateListener
          (UWidget *this,
          TDelegate<void___cdecl(UWidget_*,FWidgetStateBitfield_const_&),FDefaultDelegateUserPolicy>
          *param_1,bool param_2)

{
  ulong64 uVar1;
  atomic<unsigned___int64> aVar2;
  UClass *this_00;
  FWidgetStateBitfield FVar3;
  undefined7 in_register_00000081;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_01;
  char in_R9B;
  FReadAccessScope local_38;
  
  this_01 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
            CONCAT71(in_register_00000081,param_2);
  if (!this->bWidgetStateInitialized) {
    this_00 = Z_Construct_UClass_UWidgetStateSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    FVar3 = UWidgetStateSettings::GetInitialRegistrationBitfield
                      ((UWidgetStateSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr,
                       (UWidget *)&stack0x00000008);
                    /* WARNING: Load size is inaccurate */
    uVar1 = *FVar3.BinaryStates;
    this->bWidgetStateInitialized = true;
    (this->MyWidgetStateBitfield).BinaryStates = uVar1;
  }
  if (in_R9B != '\0') {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this_01,&local_38);
    if ((*(int *)&this_01[2].AccessDetector.State != 0) &&
       (aVar2 = this_01[1].AccessDetector.State, aVar2 != (atomic<unsigned___int64>)0x0)) {
      (**(code **)(*(longlong *)aVar2 + 0x68))(aVar2,this,&this->MyWidgetStateBitfield);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
  }
  TMulticastDelegateRegistration<void___cdecl(UWidget_*,FWidgetStateBitfield_const_&),FDefaultDelegateUserPolicy>
  ::Add((TMulticastDelegateRegistration<void___cdecl(UWidget_*,FWidgetStateBitfield_const_&),FDefaultDelegateUserPolicy>
         *)&this->PostWidgetStateChanged,param_1);
  return (FDelegateHandle)(ulong64)param_1;
}

// RemoveAllFieldValueChangedDelegates @ 146a0ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UWidget::RemoveAllFieldValueChangedDelegates(UWidget *this,void *param_1)

{
  undefined1 *this_00;
  int iVar1;
  UWidgetFieldNotificationExtension *pUVar2;
  undefined1 auStack_58 [32];
  FRemoveAllResult local_38;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if (param_1 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    pUVar2 = UE::UMG::Private::FindWidgetNotifyExtension
                       ((UWidget *)&this[-1].EnabledFieldNotifications);
    iVar1 = 0;
    if (pUVar2 != (UWidgetFieldNotificationExtension *)0x0) {
      UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
                (&pUVar2->Delegates,&local_38,(UObject *)&this[-1].EnabledFieldNotifications,param_1
                );
      this_00 = &(this->PostWidgetStateChanged).field_0x8;
      if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_38.HasFields) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,&local_38.HasFields);
      }
      iVar1 = local_38.RemoveCount;
      if (local_38.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_38.HasFields.AllocatorInstance.SecondaryData);
      }
    }
  }
  return iVar1;
}

// RemoveAllFieldValueChangedDelegates @ 146a0bb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UWidget::RemoveAllFieldValueChangedDelegates(UWidget *this,FFieldId *param_1,void *param_2)

{
  undefined1 *this_00;
  int iVar1;
  UWidgetFieldNotificationExtension *pUVar2;
  undefined1 auStackY_88 [32];
  FFieldId local_58;
  FRemoveAllResult local_48;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (param_2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    pUVar2 = UE::UMG::Private::FindWidgetNotifyExtension
                       ((UWidget *)&this[-1].EnabledFieldNotifications);
    iVar1 = 0;
    if (pUVar2 != (UWidgetFieldNotificationExtension *)0x0) {
      local_58.FieldName = param_1->FieldName;
      local_58.BitNumber = param_1->BitNumber;
      UE::FieldNotification::FFieldMulticastDelegate::RemoveAll
                (&pUVar2->Delegates,&local_48,(UObject *)&this[-1].EnabledFieldNotifications,
                 &local_58,param_2);
      this_00 = &(this->PostWidgetStateChanged).field_0x8;
      if ((TBitArray<FDefaultBitArrayAllocator> *)this_00 != &local_48.HasFields) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,&local_48.HasFields);
      }
      iVar1 = local_48.RemoveCount;
      if (local_48.HasFields.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_48.HasFields.AllocatorInstance.SecondaryData);
      }
    }
  }
  return iVar1;
}

// RemoveFieldValueChangedDelegate @ 146a0c420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UWidget::RemoveFieldValueChangedDelegate(UWidget *this,FFieldId *param_1,FDelegateHandle param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UWidgetFieldNotificationExtension *pUVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 local_res10;
  char local_res11;
  FName local_28;
  int local_20;
  
  if ((param_1->FieldName == (FName)0x0) || (param_2.ID == 0)) {
    return false;
  }
  uVar2 = param_1->BitNumber;
  if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)&(this->NativeBindings).AllocatorInstance.Data)) {
    puVar1 = &(this->PostWidgetStateChanged).field_0x8;
    if (*(int *)&(this->NativeBindings).AllocatorInstance.Data <= (int)uVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    puVar9 = *(undefined1 **)&(this->PostWidgetStateChanged).field_0x18;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = puVar1;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) == 0) {
      local_res10 = 0;
    }
    else {
      pUVar7 = UE::UMG::Private::FindWidgetNotifyExtension
                         ((UWidget *)&this[-1].EnabledFieldNotifications);
      if (pUVar7 == (UWidgetFieldNotificationExtension *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Extension",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                           ,0x7d5,
                           L"If the EnabledFieldNotifications is valid, then the Extension must also be valid."
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      local_28 = param_1->FieldName;
      local_20 = param_1->BitNumber;
      UE::FieldNotification::FFieldMulticastDelegate::RemoveFrom
                (&pUVar7->Delegates,(UObject *)&stack0x00000010,
                 (FFieldId *)&this[-1].EnabledFieldNotifications,(FDelegateHandle)&local_28);
      iVar3 = param_1->BitNumber;
      if ((iVar3 < 0) || (*(int *)&(this->NativeBindings).AllocatorInstance.Data <= iVar3)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      puVar9 = *(undefined1 **)&(this->PostWidgetStateChanged).field_0x18;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = puVar1;
      }
      uVar8 = 1 << ((byte)iVar3 & 0x1f);
      uVar2 = *(uint *)(puVar9 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      if (local_res11 == '\0') {
        uVar8 = ~uVar8 & uVar2;
      }
      else {
        uVar8 = uVar8 | uVar2;
      }
      *(uint *)(puVar9 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4) = uVar8;
    }
    return (bool)local_res10;
  }
  return false;
}

// RemoveFromParent @ 146a0c5e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall UWidget::RemoveFromParent(UWidget *this)

{
  UPanelSlot *pUVar1;
  UPanelWidget *this_00;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  atomic<int> aVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  UWorld *pUVar11;
  UGameViewportSubsystem *this_01;
  TSharedPtr<SWidget,1> *pTVar12;
  FString *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FMessageLog *this_02;
  SWidget *pSVar17;
  SWidget *pSVar18;
  uint uStackX_c;
  FName local_res10;
  FText local_b8;
  TSharedPtr<SWidget,1> local_a8;
  TSharedPtr<SWidget,1> local_98;
  FText local_88;
  FString local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  FText local_58;
  FTextFormat local_48;
  FMessageLog local_38;
  
  pSVar18 = (SWidget *)0x0;
  if (((uint)this->_padding_ >> 0xf & 1) != 0) {
    return;
  }
  if (this->bIsManagedByGameViewportSubsystem != '\0') {
    pUVar11 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_01 = UGameViewportSubsystem::Get(pUVar11);
    if (this_01 == (UGameViewportSubsystem *)0x0) {
      return;
    }
    UGameViewportSubsystem::RemoveWidget(this_01,this);
    return;
  }
  pUVar1 = (this->Slot).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPanelSlot *)0x0) &&
     (this_00 = (pUVar1->Parent).field0_0x0.DebugPtr, this_00 != (UPanelWidget *)0x0)) {
    iVar9 = UPanelWidget::GetChildIndex(this_00,this);
    if (iVar9 == -1) {
      return;
    }
    UPanelWidget::RemoveChildAt(this_00,iVar9);
    return;
  }
  bVar4 = false;
  bVar8 = false;
  pTVar12 = GetCachedWidget(this,&local_98);
  if (pTVar12->Object == (SWidget *)0x0) {
    pSVar17 = (SWidget *)((ulonglong)uStackX_c << 0x20);
LAB_146a0c726:
    bVar5 = false;
    bVar7 = false;
    if (!bVar8) goto LAB_146a0c736;
  }
  else {
    pTVar12 = GetCachedWidget(this,&local_a8);
    if ((pTVar12->Object == (SWidget *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar2 = pTVar12->Object;
    pSVar17 = (SWidget *)(pSVar2->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
    if (pSVar17 != (SWidget *)0x0) {
      aVar6 = *(atomic<int> *)&pSVar17->_padding_;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          bVar4 = true;
          bVar8 = true;
          pSVar17 = pSVar18;
          goto LAB_146a0c726;
        }
        LOCK();
        aVar10 = *(atomic<int> *)&pSVar17->_padding_;
        bVar8 = aVar6 == aVar10;
        if (bVar8) {
          *(atomic<int> *)&pSVar17->_padding_ = (atomic<int>)((int)aVar6 + 1);
          aVar10 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar10;
      } while (!bVar8);
      pSVar18 = (pSVar2->ParentWidgetPtr).Object;
    }
    bVar4 = true;
    bVar8 = true;
    if (pSVar18 == (SWidget *)0x0) goto LAB_146a0c726;
    bVar7 = true;
  }
  bVar5 = bVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar17);
LAB_146a0c736:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    pFVar13 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
    pFVar14 = FText::AsCultureInvariant(&local_58,pFVar13);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"UMG",L"RemoveFromParentWithNoParent",
                         L"UWidget::RemoveFromParent() called on \'{0}\' which has no UMG parent (if it was added directly to a native Slate widget via TakeWidget() then it must be removed explicitly rather than via RemoveFromParent())"
                        );
    pFVar16 = FTextFormat::FTextFormat(&local_48,pFVar15,Default);
    FText::Format<FText>(&local_b8,pFVar16,pFVar14);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    ::FName::FName(&local_res10,"PIE");
    this_02 = FMessageLog::FMessageLog(&local_38,&local_res10);
    FMessageLog::Info(this_02,&local_68,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ResetCursor @ 146a0dad0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::ResetCursor(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_Cursor = '\0';
  GetCachedWidget(this,&local_58);
  if (local_58.Object != (SWidget *)0x0) {
    if (local_58.Object == (SWidget *)0x0) {
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
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor(local_58.Object,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetAllNavigationRules @ 146a10b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetAllNavigationRules(UWidget *this,EUINavigationRule param_1,FName param_2)

{
  FCustomWidgetNavigationDelegate local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Up,param_1,param_2,(UWidget *)0x0,&local_28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Down,param_1,param_2,(UWidget *)0x0,&local_28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Left,param_1,param_2,(UWidget *)0x0,&local_28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Right,param_1,param_2,(UWidget *)0x0,&local_28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Next,param_1,param_2,(UWidget *)0x0,&local_28);
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,Previous,param_1,param_2,(UWidget *)0x0,&local_28);
  BuildNavigation(this);
  return;
}

// SetClipping @ 146a12390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetClipping(UWidget *this,EWidgetClipping param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  this->Clipping = param_1;
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    SWidget::SetClipping(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetCursor @ 146a12be0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetCursor(UWidget *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_Cursor = '\x01';
  (this->Cursor).Value = (uchar)param_1;
  GetCachedWidget(this,&local_58);
  if (local_58.Object != (SWidget *)0x0) {
    if (local_58.Object == (SWidget *)0x0) {
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
    local_30._0_4_ = ZEXT14((this->Cursor).Value);
    local_30[4] = true;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor(local_58.Object,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// SetFlowDirectionPreference @ 146a13f10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetFlowDirectionPreference(UWidget *this,EFlowDirectionPreference param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  this->FlowDirectionPreference = param_1;
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    if ((local_18.Object)->FlowDirectionPreference != this->FlowDirectionPreference) {
      (local_18.Object)->FlowDirectionPreference = this->FlowDirectionPreference;
      SWidget::Invalidate(local_18.Object,Paint);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetFocus @ 146a13fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWidget::SetFocus(UWidget *this)

{
  APlayerController *pAVar1;
  
  pAVar1 = (APlayerController *)(**(code **)(this->_padding_ + 0x2d8))();
  SetUserFocus(this,pAVar1);
  return;
}

// SetIsEnabled @ 146a15a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetIsEnabled(UWidget *this,bool param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  FFieldId local_98;
  TSharedPtr<SWidget,1> local_88;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  undefined1 local_48 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  bVar10 = this->bIsEnabled != param_1;
  if (bVar10) {
    this->field_0xf9 = this->field_0xf9 & 0xfb | param_1 << 2;
  }
  GetCachedWidget(this,&local_88);
  if (local_88.Object != (SWidget *)0x0) {
    if (local_88.Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_30 = 0;
    local_48[1] = true;
    local_40.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    local_48[0] = param_1;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&(local_88.Object)->EnabledStateAttribute,local_88.Object,
             (TAttribute<bool> *)local_48,None);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_40,(FWriteAccessScope *)&local_78);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_40.AccessDetector);
  }
  if (bVar10) {
    local_98.FieldName = FFieldNotificationClassDescriptor::bIsEnabled.FieldName;
    local_98.BitNumber = FFieldNotificationClassDescriptor::bIsEnabled.BitNumber;
    BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_98);
    if ((this->bShouldBroadcastState) && (this->bWidgetStateInitialized)) {
      FWidgetStateBitfield::SetBinaryState
                (&this->MyWidgetStateBitfield,&UWidgetDisabledStateRegistration::Bit,
                 (bool)(~this->bIsEnabled & 1));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->PostWidgetStateChanged,(FWriteAccessScope *)&local_60);
      puVar1 = &(this->PostWidgetStateChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar10 = false;
      uVar8 = *(int *)&(this->PostWidgetStateChanged).field_0x10 - 1;
      if (-1 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar8 << 4;
        bVar10 = false;
        do {
          uVar7 = 0;
          if ((int)uVar8 < *(int *)&(this->PostWidgetStateChanged).field_0x10) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          lVar2 = *(longlong *)&(this->PostWidgetStateChanged).field_0x8;
          if ((*(int *)(lVar9 + 8 + lVar2) == 0) ||
             (plVar3 = *(longlong **)(lVar9 + lVar2), plVar3 == (longlong *)0x0)) {
LAB_146a15cae:
            bVar10 = true;
          }
          else {
            cVar6 = (**(code **)(*plVar3 + 0x68))(plVar3,this,&this->MyWidgetStateBitfield);
            if (cVar6 == '\0') goto LAB_146a15cae;
          }
          lVar9 = lVar9 + -0x10;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      puVar1 = &(this->PostWidgetStateChanged).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar10) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->PostWidgetStateChanged,false);
      }
      if (local_60.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// SetKeyboardFocus @ 146a166c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWidget::SetKeyboardFocus(UWidget *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FMessageLog *this_00;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FSlateApplication *this_01;
  UWorld *this_02;
  ULocalPlayer *pUVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FName local_res10;
  FName local_res18 [2];
  TSharedPtr<SWidget,1> local_c8;
  FString local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FTextFormat local_68;
  TSharedRef<SWidget,1> local_58;
  FMessageLog local_48;
  
  GetCachedWidget(this,&local_c8);
  if (local_c8.Object != (SWidget *)0x0) {
    if ((local_c8.Object == (SWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    cVar3 = (**(code **)((local_c8.Object)->_padding_ + 0x198))();
    if (cVar3 == '\0') {
      ::FName::FName(&local_res10,"PIE");
      this_00 = FMessageLog::FMessageLog(&local_48,&local_res10);
      if (this == (UWidget *)0x0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_res18[0] = (FName)this->_padding_;
        ::FName::ToString(local_res18,&local_b8);
      }
      pFVar4 = FText::FromString(&local_78,&local_b8);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"UMG",L"ThisWidgetDoesntSupportFocus",
                          L"The widget {0} does not support focus. If this is a UserWidget, you should set bIsFocusable to true."
                         );
      pFVar6 = FTextFormat::FTextFormat(&local_68,pFVar5,Default);
      pFVar4 = FText::Format<FText>(&local_98,pFVar6,pFVar4);
      FMessageLog::Warning(this_00,&local_a8,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      FMessageLog::~FMessageLog(&local_48);
    }
    this_01 = FSlateApplication::Get();
    bVar2 = FSlateApplication::SetKeyboardFocus(this_01,&local_c8,SetDirectly);
    if (((!bVar2) &&
        (this_02 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), this_02 != (UWorld *)0x0)
        ) && (pUVar7 = UWorld::GetFirstLocalPlayerFromController(this_02),
             pUVar7 != (ULocalPlayer *)0x0)) {
      pTVar8 = TSharedPtr<SWidget,1>::ToSharedRef(&local_c8,&local_58);
      FReply::SetUserFocus(&pUVar7->SlateOperations,pTVar8,SetDirectly,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return;
}

// SetNavigationMethod @ 146a17c10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationMethod(UWidget *this,TInstancedStruct<FNavigationMethod> *param_1)

{
  UWidgetNavigation *pUVar1;
  
  pUVar1 = (this->Navigation).field0_0x0.DebugPtr;
  if (pUVar1 == (UWidgetNavigation *)0x0) {
    pUVar1 = NewObject<UWidgetNavigation>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWidgetNavigation *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Navigation).field0_0x0.DebugPtr = pUVar1;
  }
  if (&pUVar1->NavigationMethod != param_1) {
    FInstancedStruct::InitializeAs
              (&(pUVar1->NavigationMethod).InstancedStruct,
               (param_1->InstancedStruct).ScriptStruct.field0_0x0.DebugPtr,
               (param_1->InstancedStruct).StructMemory);
  }
  BuildNavigation(this);
  return;
}

// SetNavigationRule @ 146a17c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRule
          (UWidget *this,EUINavigation param_1,EUINavigationRule param_2,FName param_3)

{
  FCustomWidgetNavigationDelegate local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,param_1,param_2,param_3,(UWidget *)0x0,&local_28);
  BuildNavigation(this);
  return;
}

// SetNavigationRuleBase @ 146a17ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRuleBase(UWidget *this,EUINavigation param_1,EUINavigationRule param_2)

{
  FMessageLog *this_00;
  FText *pFVar1;
  FName local_res20;
  TSharedRef<FTokenizedMessage,1> local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  FMessageLog local_40;
  
  if ((param_2 != Explicit) && (1 < (byte)(param_2 - Custom))) {
    local_58 = (longlong *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    SetNavigationRuleInternal
              (this,param_1,param_2,(FName)0x0,(UWidget *)0x0,
               (FCustomWidgetNavigationDelegate *)&local_58);
    BuildNavigation(this);
    return;
  }
  ::FName::FName(&local_res20,"PIE");
  this_00 = FMessageLog::FMessageLog(&local_40,&local_res20);
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_58,L"UMG",L"SetNavigationRuleBaseWrongRule",
                      L"Cannot use SetNavigationRuleBase with an Explicit or a Custom or a CustomBoundary Rule."
                     );
  FMessageLog::Error(this_00,&local_68,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((ITextData *)local_58 != (ITextData *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_40);
  return;
}

// SetNavigationRuleCustom @ 146a17dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRuleCustom
          (UWidget *this,EUINavigation param_1,FCustomWidgetNavigationDelegate *param_2)

{
  FCustomWidgetNavigationDelegate local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  SetNavigationRuleInternal(this,param_1,Custom,(FName)0x0,(UWidget *)0x0,&local_38);
  BuildNavigation(this);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetNavigationRuleCustomBoundary @ 146a17e80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRuleCustomBoundary
          (UWidget *this,EUINavigation param_1,FCustomWidgetNavigationDelegate *param_2)

{
  FCustomWidgetNavigationDelegate local_38;
  FReadAccessScope local_20;
  
  local_38._0_8_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_20);
  local_38._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_38._16_8_ = *(undefined8 *)&param_2->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_20);
  SetNavigationRuleInternal(this,param_1,CustomBoundary,(FName)0x0,(UWidget *)0x0,&local_38);
  BuildNavigation(this);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetNavigationRuleExplicit @ 146a17f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRuleExplicit(UWidget *this,EUINavigation param_1,UWidget *param_2)

{
  FCustomWidgetNavigationDelegate local_28;
  
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  local_28._16_8_ = 0;
  SetNavigationRuleInternal(this,param_1,Explicit,(FName)0x0,param_2,&local_28);
  BuildNavigation(this);
  return;
}

// SetNavigationRuleInternal @ 146a17f80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWidget::SetNavigationRuleInternal
          (UWidget *this,EUINavigation param_1,EUINavigationRule param_2,FName param_3,
          UWidget *param_4,FCustomWidgetNavigationDelegate *param_5)

{
  FWeakObjectPtr FVar1;
  FName FVar2;
  FCustomWidgetNavigationDelegate *this_00;
  UWidgetNavigation *pUVar3;
  TScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  FDestructionSentinel local_68;
  EUINavigationRule local_50;
  FName local_4c;
  FWeakObjectPtr local_44;
  TScriptDelegate<FNotThreadSafeDelegateMode> local_38;
  
  if ((this->Navigation).field0_0x0.DebugPtr == (UWidgetNavigation *)0x0) {
    pUVar3 = NewObject<UWidgetNavigation>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWidgetNavigation *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->Navigation).field0_0x0.DebugPtr = pUVar3;
  }
  local_38._padding_ = 0;
  local_38.Object.ObjectIndex = 0;
  local_38.Object.ObjectSerialNumber = 0;
  local_44.ObjectIndex = 0;
  local_44.ObjectSerialNumber = 0;
  local_38.FunctionName.ComparisonIndex.Value = 0;
  local_38.FunctionName.Number = 0;
  local_50 = param_2;
  local_4c = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  FWeakObjectPtr::operator=(&local_44,(FObjectPtr)&param_4);
  this_00 = param_5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_5,
             (FReadAccessScope *)&local_68);
  FVar1.ObjectIndex = *(int *)&this_00->field_0x8;
  FVar1.ObjectSerialNumber = *(int *)&this_00->field_0xc;
  FVar2.ComparisonIndex.Value = *(uint *)&this_00->field_0x10;
  FVar2.Number = *(uint *)&this_00->field_0x14;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_38,
             (FWriteAccessScope *)&local_68);
  local_38.Object = FVar1;
  local_38.FunctionName = FVar2;
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  switch(param_1) {
  case Left:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Left).Rule = local_50;
    (pUVar3->Left).WidgetToFocus = local_4c;
    (pUVar3->Left).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Left).CustomDelegate;
    break;
  case Right:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Right).Rule = local_50;
    (pUVar3->Right).WidgetToFocus = local_4c;
    (pUVar3->Right).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Right).CustomDelegate;
    break;
  case Up:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Up).Rule = local_50;
    (pUVar3->Up).WidgetToFocus = local_4c;
    (pUVar3->Up).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Up).CustomDelegate;
    break;
  case Down:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Down).Rule = local_50;
    (pUVar3->Down).WidgetToFocus = local_4c;
    (pUVar3->Down).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Down).CustomDelegate;
    break;
  case Next:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Next).Rule = local_50;
    (pUVar3->Next).WidgetToFocus = local_4c;
    (pUVar3->Next).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Next).CustomDelegate;
    break;
  case Previous:
    pUVar3 = (this->Navigation).field0_0x0.DebugPtr;
    (pUVar3->Previous).Rule = local_50;
    (pUVar3->Previous).WidgetToFocus = local_4c;
    (pUVar3->Previous).Widget.WeakPtr = local_44;
    this_01 = (TScriptDelegate<FNotThreadSafeDelegateMode> *)&(pUVar3->Previous).CustomDelegate;
    break;
  default:
    goto switchD_146a18082_default;
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=(this_01,&local_38);
switchD_146a18082_default:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_38);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// SetPixelSnapping @ 146a19140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetPixelSnapping(UWidget *this,EWidgetPixelSnapping param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  this->PixelSnapping = param_1;
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    SWidget::SetPixelSnapping(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetRenderOpacity @ 146a193f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderOpacity(UWidget *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28 [2];
  
  this->RenderOpacity = param_1;
  GetCachedWidget(this,local_28);
  if (local_28[0].Object != (SWidget *)0x0) {
    if (local_28[0].Object == (SWidget *)0x0) {
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
    if (param_1 != (local_28[0].Object)->RenderOpacity) {
      (local_28[0].Object)->RenderOpacity = param_1;
      SWidget::Invalidate(local_28[0].Object,Paint);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// SetRenderScale @ 146a19490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderScale(UWidget *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RenderTransform).Scale.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RenderTransform).Scale.field0_0x0._s_0.Y = dVar1;
  UpdateRenderTransform(this);
  return;
}

// SetRenderShear @ 146a194b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderShear(UWidget *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RenderTransform).Shear.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RenderTransform).Shear.field0_0x0._s_0.Y = dVar1;
  UpdateRenderTransform(this);
  return;
}

// SetRenderTransform @ 146a194d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderTransform(UWidget *this,FWidgetTransform *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  dVar2 = (param_1->Scale).field0_0x0._s_0.X;
  dVar3 = (param_1->Scale).field0_0x0._s_0.Y;
  (this->RenderTransform).Translation.field0_0x0._s_0.X = (param_1->Translation).field0_0x0._s_0.X;
  (this->RenderTransform).Translation.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Shear).field0_0x0._s_0.X;
  dVar4 = (param_1->Shear).field0_0x0._s_0.Y;
  (this->RenderTransform).Scale.field0_0x0._s_0.X = dVar2;
  (this->RenderTransform).Scale.field0_0x0._s_0.Y = dVar3;
  fVar5 = param_1->Angle;
  uVar6 = *(undefined4 *)&param_1->field_0x34;
  (this->RenderTransform).Shear.field0_0x0._s_0.X = dVar1;
  (this->RenderTransform).Shear.field0_0x0._s_0.Y = dVar4;
  (this->RenderTransform).Angle = fVar5;
  *(undefined4 *)&(this->RenderTransform).field_0x34 = uVar6;
  UpdateRenderTransform(this);
  return;
}

// SetRenderTransformAngle @ 146a19510

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderTransformAngle(UWidget *this,float param_1)

{
  (this->RenderTransform).Angle = param_1;
  UpdateRenderTransform(this);
  return;
}

// SetRenderTransformPivot @ 146a19530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderTransformPivot(UWidget *this,TVector2<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> local_68;
  FDestructionSentinel local_58;
  TVector2<double>_u_0 local_40;
  undefined1 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  (this->RenderTransformPivot).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RenderTransformPivot).field0_0x0._s_0.Y = dVar2;
  GetCachedWidget(this,&local_68);
  if (local_68.Object != (SWidget *)0x0) {
    if (local_68.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_40._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_40._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_30 = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&(local_68.Object)->RenderTransformPivotAttribute,local_68.Object,
             (TAttribute<UE::Math::TVector2<double>_> *)&local_40._s_0,None);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// SetRenderTranslation @ 146a19660

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetRenderTranslation(UWidget *this,TVector2<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->RenderTransform).Translation.field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->RenderTransform).Translation.field0_0x0._s_0.Y = dVar1;
  UpdateRenderTransform(this);
  return;
}

// SetToolTip @ 146a1c9d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetToolTip(UWidget *this,UWidget *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  FArguments *pFVar4;
  TSharedRef<SWidget,1> *pTVar5;
  bool bVar6;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_4b8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4a0;
  ForAnyElementType FStack_498;
  ulonglong local_490;
  undefined1 local_488 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_470;
  ForAnyElementType FStack_468;
  ulonglong local_460;
  TSharedPtr<SWidget,1> local_458;
  TSharedRef<SToolTip,1> local_448;
  TAttribute<FSlateBrush_const_*> local_438;
  FDestructionSentinel local_410;
  FDestructionSentinel local_3f8;
  TAttribute<FMargin> local_3e0;
  SWidget *local_3b0;
  TReferenceControllerBase<1> *pTStack_3a8;
  TSharedRef<SWidget,1> local_3a0;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_390;
  FArguments local_378;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ToolTipWidget).field0_0x0.DebugPtr = param_1;
  GetCachedWidget(this,&local_458);
  bVar6 = local_458.Object == (SWidget *)0x0;
  if (local_458.Object != (SWidget *)0x0) {
    if ((this->ToolTipWidget).field0_0x0.DebugPtr == (UWidget *)0x0) {
      if (bVar6) {
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
      local_488[0x10] = true;
      local_460 = 0;
      local_488._0_8_ = (IToolTip *)0x0;
      local_488._8_8_ = (TReferenceControllerBase<1> *)0x0;
      local_470.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_468.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(local_458.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_488);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_470,(FWriteAccessScope *)&local_3f8);
      if (((int)local_460 != 0) && (FStack_468.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_468.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_468,0,0,0x10);
        local_460 = local_460 & 0xffffffff00000000;
      }
      if (local_3f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f8.Accessor,&local_3f8);
      }
      if (FStack_468.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_468.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_470.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_488._8_8_);
      local_448.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar4 = SToolTip::FArguments::FArguments(&local_378);
      local_3e0.bIsSet = true;
      local_3e0.Getter._16_8_ = 0;
      local_3e0.Value.Left = 0.0;
      local_3e0.Value.Top = 0.0;
      local_3e0.Value.Right = 0.0;
      local_3e0.Value.Bottom = 0.0;
      local_3e0.Getter._0_8_ = 0;
      local_3e0.Getter._8_8_ = 0;
      pFVar4 = SToolTip::FArguments::TextMargin(pFVar4,&local_3e0);
      local_438.Value = (FSlateBrush *)0x0;
      local_438.bIsSet = true;
      local_438.Getter._16_8_ = 0;
      local_438.Getter._0_8_ = 0;
      local_438.Getter._8_8_ = 0;
      pFVar4 = SToolTip::FArguments::BorderImage(pFVar4,&local_438);
      pTVar5 = TakeWidget((this->ToolTipWidget).field0_0x0.DebugPtr,&local_3a0);
      pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar5->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3b0 = (pFVar4->_Content).Widget.Object;
      pTStack_3a8 = (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar4->_Content).Widget.Object = pSVar2;
      (pFVar4->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_3a8);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_res20,&local_res18,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&local_390,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x228,local_res8);
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res10);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=(&local_390,&local_448,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_390._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3a0.SharedReferenceCount.ReferenceController);
      SToolTip::FArguments::~FArguments(&local_378);
      if (bVar6) {
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
      local_4b8._8_8_ = local_448.SharedReferenceCount.ReferenceController;
      local_4b8._0_8_ = &(local_448.Object)->_padding_;
      if (local_448.Object == (SToolTip *)0x0) {
        local_4b8._0_8_ = (IToolTip *)0x0;
      }
      if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4b8[0x10] = true;
      local_490 = 0;
      local_4a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_498.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(local_458.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_4b8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_4a0,(FWriteAccessScope *)&local_410);
      if (((int)local_490 != 0) && (FStack_498.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_498.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_498,0,0,0x10);
        local_490 = local_490 & 0xffffffff00000000;
      }
      if (local_410.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_410.Accessor,&local_410);
      }
      if (FStack_498.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_498.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4a0.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_4b8._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_448.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_458.SharedReferenceCount.ReferenceController);
  return;
}

// SetToolTipText @ 146a1cd80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetToolTipText(UWidget *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FFieldId local_28;
  TSharedPtr<SWidget,1> local_18;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->ToolTipText).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->ToolTipText).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->ToolTipText).Flags = param_1->Flags;
  local_28.FieldName = FFieldNotificationClassDescriptor::ToolTipText.FieldName;
  local_28.BitNumber = FFieldNotificationClassDescriptor::ToolTipText.BitNumber;
  BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_28);
  GetCachedWidget(this,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    SWidget::SetToolTipText(local_18.Object,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetUserFocus @ 146a1cea0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWidget::SetUserFocus(UWidget *this,APlayerController *param_1)

{
  int iVar1;
  FTokenizedMessage *pFVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  FMessageLog *pFVar6;
  FText *pFVar7;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  TSharedRef<FUObjectToken,1> *pTVar9;
  UClass *pUVar10;
  TSharedRef<FTextToken,1> *pTVar11;
  ULocalPlayer *pUVar12;
  FSlateApplication *pFVar13;
  TSharedRef<SWidget,1> *pTVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  FName local_res10;
  TSharedRef<IMessageToken,1> local_e8;
  TSharedRef<FTokenizedMessage,1> local_d8;
  FText local_c8;
  TSharedRef<FUObjectToken,1> local_b8;
  TSharedRef<FTokenizedMessage,1> local_a8;
  TSharedPtr<SWidget,1> local_98;
  TSharedRef<FUObjectToken,1> local_88;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<FTextToken,1> local_68;
  FText local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if ((((param_1 != (APlayerController *)0x0) && ((param_1->_padding_ & 2) != 0)) &&
      (cVar3 = (**(code **)(param_1->_padding_ + 0x7f0))(param_1), cVar3 != '\0')) &&
     ((param_1->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) {
    GetCachedWidget(this,&local_98);
    if (local_98.Object != (SWidget *)0x0) {
      cVar3 = (**(code **)((local_98.Object)->_padding_ + 0x198))();
      if (cVar3 == '\0') {
        ::FName::FName(&local_res10,"PIE");
        pFVar6 = FMessageLog::FMessageLog(&local_38,&local_res10);
        pFVar7 = FText::FText((FText *)&local_a8);
        pTVar8 = FMessageLog::Warning(pFVar6,(TSharedRef<FTokenizedMessage,1> *)&local_b8,pFVar7);
        pFVar2 = pTVar8->Object;
        pFVar7 = FText::FText(&local_c8);
        pTVar9 = FUObjectToken::Create(&local_88,(UObject *)this,pFVar7);
        local_e8.Object = (IMessageToken *)pTVar9->Object;
        local_e8.SharedReferenceCount.ReferenceController =
             (pTVar9->SharedReferenceCount).ReferenceController;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTokenizedMessage::AddToken(pFVar2,&local_d8,&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (local_a8.Object != (FTokenizedMessage *)0x0) {
          (**(code **)((local_a8.Object)->_padding_ + 0x10))();
        }
        FMessageLog::~FMessageLog(&local_38);
        pUVar10 = Z_Construct_UClass_UUserWidget_NoRegister();
        iVar1 = (int)pUVar10->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          pwVar16 = L" does not support focus.";
          pwVar15 = L"NonUserWidgetDoesntSupportFocus";
        }
        else {
          pwVar16 = L" does not support focus, you should set bIsFocusable to true.";
          pwVar15 = L"UserWidgetDoesntSupportFocus";
        }
        pFVar7 = FText::AsLocalizable_Advanced_LocText(&local_c8,L"UMG",pwVar15,pwVar16);
        pTVar11 = FTextToken::Create((TSharedRef<FTextToken,1> *)&local_b8,pFVar7,true);
        local_e8.Object = (IMessageToken *)pTVar11->Object;
        local_e8.SharedReferenceCount.ReferenceController =
             (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTokenizedMessage::AddToken(local_d8.Object,&local_a8,&local_e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_e8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (local_c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
      }
      pUVar12 = APlayerController::GetLocalPlayer(param_1);
      if (pUVar12 != (ULocalPlayer *)0x0) {
        pFVar13 = FSlateApplication::Get();
        uVar5 = FSlateApplication::GetUserIndexForController(pFVar13,pUVar12->ControllerId);
        pFVar13 = FSlateApplication::Get();
        bVar4 = FSlateApplication::SetUserFocus(pFVar13,uVar5,&local_98,SetDirectly);
        if (bVar4) {
          FReply::CancelFocusRequest(&pUVar12->SlateOperations);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98.SharedReferenceCount.ReferenceController);
          return;
        }
        pTVar14 = TSharedPtr<SWidget,1>::ToSharedRef(&local_98,&local_78);
        FReply::SetUserFocus(&pUVar12->SlateOperations,pTVar14,SetDirectly,false);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    return;
  }
  ::FName::FName(&local_res10,"PIE");
  pFVar6 = FMessageLog::FMessageLog(&local_38,&local_res10);
  pFVar7 = FText::FText((FText *)&local_78);
  pTVar8 = FMessageLog::Error(pFVar6,&local_48,pFVar7);
  pFVar2 = pTVar8->Object;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMG",L"NoPlayerControllerToFocus",
                      L"The PlayerController is not a valid local player so it can\'t focus on ");
  pTVar11 = FTextToken::Create(&local_68,pFVar7,true);
  local_e8.Object = (IMessageToken *)pTVar11->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = FTokenizedMessage::AddToken
                     (pFVar2,(TSharedRef<FTokenizedMessage,1> *)&local_88,&local_e8);
  pFVar2 = pTVar8->Object;
  pFVar7 = FText::FText(&local_c8);
  pTVar9 = FUObjectToken::Create(&local_b8,(UObject *)this,pFVar7);
  local_d8.Object = (FTokenizedMessage *)pTVar9->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(pFVar2,&local_a8,(TSharedRef<IMessageToken,1> *)&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_78.Object != (SWidget *)0x0) {
    (**(code **)((local_78.Object)->_padding_ + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// SetVisibility @ 146a1da90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetVisibility(UWidget *this,ESlateVisibility param_1)

{
  ESlateVisibility EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auStackX_10 [8];
  FFieldId FStack_58;
  TSharedPtr<SWidget,1> TStack_48;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  EVar1 = this->Visibility;
  if (EVar1 != param_1) {
    this->Visibility = param_1;
  }
  GetCachedWidget(this,&TStack_48);
  if (TStack_48.Object != (SWidget *)0x0) {
    ConvertSerializedVisibilityToRuntime((ESlateVisibility)auStackX_10);
    if (TStack_48.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uStack_37 = 1;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_38 = auStackX_10[0];
    uStack_20 = 0;
    (**(code **)((TStack_48.Object)->_padding_ + 0x1c8))(TStack_48.Object,&uStack_38);
  }
  if (EVar1 != param_1) {
    FStack_58.FieldName = FFieldNotificationClassDescriptor::Visibility.FieldName;
    FStack_58.BitNumber = FFieldNotificationClassDescriptor::Visibility.BitNumber;
    BroadcastFieldValueChanged((UWidget *)&this->_padding_,&FStack_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_48.SharedReferenceCount.ReferenceController);
  return;
}

// SetVisibilityInternal @ 146a1daa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SetVisibilityInternal(UWidget *this,ESlateVisibility param_1)

{
  ESlateVisibility EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res10 [8];
  FFieldId local_58;
  TSharedPtr<SWidget,1> local_48;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  EVar1 = this->Visibility;
  if (EVar1 != param_1) {
    this->Visibility = param_1;
  }
  GetCachedWidget(this,&local_48);
  if (local_48.Object != (SWidget *)0x0) {
    ConvertSerializedVisibilityToRuntime((ESlateVisibility)local_res10);
    if (local_48.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_37 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_38 = local_res10[0];
    local_20 = 0;
    (**(code **)((local_48.Object)->_padding_ + 0x1c8))(local_48.Object,&local_38);
  }
  if (EVar1 != param_1) {
    local_58.FieldName = FFieldNotificationClassDescriptor::Visibility.FieldName;
    local_58.BitNumber = FFieldNotificationClassDescriptor::Visibility.BitNumber;
    BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// StaticRegisterNativesUWidget @ 146a1f3b0

void __cdecl UWidget::StaticRegisterNativesUWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x38;
  local_18.DataPtr = Z_Construct_UClass_UWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeAccessibleData @ 146a1f680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SynchronizeAccessibleData(UWidget *this)

{
  return;
}

// SynchronizeProperties @ 146a27610

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::SynchronizeProperties(UWidget *this)

{
  byte bVar1;
  FName FVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EVisibility EVar11;
  UObject *pUVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  UFunction *pUVar15;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar16;
  FDelegateToolTip *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SWidget,1> *pTVar19;
  TAttribute<FText> *pTVar20;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar21;
  undefined1 local_res8 [16];
  FLLMScope local_res18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_878;
  FDelegateAllocation local_870;
  TSharedPtr<SWidget,1> local_860;
  SWidget *local_850;
  TReferenceControllerBase<1> *local_848;
  undefined1 local_840;
  undefined1 local_83f;
  undefined1 local_838 [8];
  ForAnyElementType FStack_830;
  ulonglong local_828;
  byte local_820;
  undefined1 local_81f;
  undefined1 local_818 [8];
  ForAnyElementType FStack_810;
  ulonglong local_808;
  undefined2 local_800;
  undefined1 local_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 local_7e0;
  undefined1 local_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 local_7c0;
  undefined1 local_7b8 [8];
  void *pvStack_7b0;
  int local_7a8;
  undefined1 local_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_788;
  ForAnyElementType FStack_780;
  ulonglong local_778;
  undefined1 local_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_758;
  ForAnyElementType FStack_750;
  ulonglong local_748;
  code *local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool local_728;
  undefined1 local_718 [16];
  undefined1 local_708 [8];
  void *pvStack_700;
  undefined8 local_6f8;
  UObject *local_6f0;
  UWidget *local_6e8;
  code *local_6e0;
  TRawPtrProxy<FDelegateToolTip> local_6d8;
  UObject *local_6d0;
  FMemScope local_6c8;
  FName local_6c0;
  FName local_6b8;
  undefined1 local_6b0 [8];
  undefined1 local_6a8 [24];
  ESlateVisibility local_690;
  undefined1 local_68f;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  TVector2<double>_u_0 local_670;
  undefined1 local_660;
  undefined1 local_658 [8];
  void *pvStack_650;
  undefined8 local_648;
  TSharedRef<FDelegateToolTip,1> local_640;
  TSharedRef<SToolTip,1> local_630;
  TSharedRef<SWidget,1> local_620;
  TAttribute<FSlateBrush_const_*> local_610;
  FDestructionSentinel local_5e8;
  FDestructionSentinel local_5d0;
  FDestructionSentinel local_5b8;
  FDestructionSentinel local_5a0;
  FDestructionSentinel local_588;
  FDestructionSentinel local_570;
  FDelegateAllocation *local_558;
  FDestructionSentinel local_550;
  FDelegateAllocation *local_538;
  FDestructionSentinel local_530;
  FDelegateAllocation *local_518;
  TAttribute<FMargin> local_510;
  undefined1 local_4e0;
  undefined1 local_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4d8;
  SWidget *local_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_4b0;
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  undefined1 local_468 [24];
  undefined1 local_450 [24];
  FReadAccessScope local_438;
  FReadAccessScope local_420;
  FReadAccessScope local_408;
  TAttribute<FText> local_3f0;
  TAttribute<FText> local_3c0;
  FArguments local_390;
  
  local_res8[0] = Visible;
  local_res8[1] = false;
  local_res8._2_2_ = 0;
  this->bRoutedSynchronizeProperties = true;
  GetCachedWidget(this,&local_860);
  pSVar5 = local_860.Object;
  if (local_860.Object != (SWidget *)0x0) {
    if (this->bOverride_Cursor != '\0') {
      if ((local_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_718._0_4_ = ZEXT14((this->Cursor).Value);
      local_718[4] = true;
      local_6f8 = 0;
      local_718[8] = true;
      local_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar5,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_708);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->bIsEnabledDelegate);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->bIsEnabledDelegate
                 ,&local_408);
      FVar2.ComparisonIndex.Value = *(uint *)&(this->bIsEnabledDelegate).field_0x10;
      FVar2.Number = *(uint *)&(this->bIsEnabledDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_408);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->bIsEnabledDelegate)
      ;
      local_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      local_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7f8,
                 (FWriteAccessScope *)&local_570);
      local_558 = &FStack_7f0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        local_6d0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&local_6d0);
        if ((FVar2 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar2);
          puVar13[3] = pUVar15;
        }
      }
      if (local_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_570.Accessor,&local_570);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f8;
      bVar7 = false;
      bVar10 = true;
      local_6b0[0] = (byte)local_800;
      local_6b0[1] = local_800._1_1_;
    }
    else {
      local_6b0[1] = 1;
      local_6b0[0] = this->bIsEnabled;
      local_81f = 1;
      bVar7 = true;
      bVar10 = false;
      local_808 = 0;
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_818;
      local_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      local_820 = local_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8,pTVar21);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->EnabledStateAttribute,pSVar5,(TAttribute<bool> *)local_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
    if ((void *)local_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6a8);
    if (bVar7) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_818,
                 (FWriteAccessScope *)&local_5b8);
      if (((int)local_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        local_808 = local_808 & 0xffffffff00000000;
      }
      if (local_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_818);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_7f8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_6e0 = *(code **)(pSVar5->_padding_ + 0x1c8);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->VisibilityDelegate);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->VisibilityDelegate
                 ,&local_438);
      FVar3.ComparisonIndex.Value = *(uint *)&(this->VisibilityDelegate).field_0x10;
      FVar3.Number = *(uint *)&(this->VisibilityDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_438);
      pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->VisibilityDelegate)
      ;
      local_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      local_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7d8,
                 (FWriteAccessScope *)&local_550);
      local_538 = &FStack_7d0;
      puVar13 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[2] = uVar14;
        *puVar13 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar13 + 4) = FVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        puVar13[5] = 0;
        local_6f0 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar12);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 5),(FObjectPtr)&local_6f0);
        if ((FVar3 == (FName)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (pUVar12 != (UObject *)0x0) {
          pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar13 + 5));
          pUVar15 = UObject::FindFunctionChecked(pUVar12,FVar3);
          puVar13[3] = pUVar15;
        }
      }
      if (local_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
      }
      local_738 = ConvertVisibility;
      uStack_72c = local_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      local_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_878,(FWriteAccessScope *)&local_530);
      local_518 = &local_870;
      puVar13 = UE::Core::Private::DelegateAllocate(0x48,&local_870);
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar13 + 1) = (undefined1)local_7e0;
        *(undefined1 *)((longlong)puVar13 + 9) = local_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar13 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d8);
        uVar14 = FDelegateHandle::GenerateNewID();
        puVar13[5] = uVar14;
        *puVar13 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar13[6] = 0;
        local_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar13 + 6),(FObjectPtr)&local_6e8);
        puVar13[7] = local_738;
        puVar13[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (local_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
      }
      local_7c0 = 0x119;
      local_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_878,(FWriteAccessScope *)&local_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)local_870.DelegateAllocator;
      local_7a8 = local_870.DelegateSize;
      local_870.DelegateSize = 0;
      local_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (local_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&local_738);
      }
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b8;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar10 = false;
      local_4e0 = (undefined1)local_7c0;
      local_4df = local_7c0._1_1_;
    }
    else {
      local_690 = this->Visibility;
      local_68f = 1;
      local_678 = 0;
      local_688 = 0;
      uStack_680 = 0;
      EVar11 = ConvertVisibility(this,(TAttribute<ESlateVisibility> *)local_res8);
      local_4df = 1;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar10 = true;
      local_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar11.Value.Value);
      pTVar21 = (TDelegateBase<FNotThreadSafeDelegateMode> *)local_838;
      local_828 = 0;
      local_83f = 1;
      local_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      local_840 = local_4e0;
    }
    pFVar17 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&local_4d8,pTVar21);
    (*local_6e0)(pSVar5,&local_4e0);
    if (bVar10) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_838,
                 (FWriteAccessScope *)&local_5a0);
      if (((int)local_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        local_828 = local_828 & 0xffffffff00000000;
      }
      if (local_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_838);
    }
    if (bVar7) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_7b8);
    }
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_878,(FWriteAccessScope *)&local_5d0);
      if ((local_870.DelegateSize != 0) &&
         (local_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_870,0,0,0x10);
        local_870.DelegateSize = 0;
      }
      if (local_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
      }
      if (local_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_878.AccessDetector);
    }
    if (bVar9) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_7d8);
    }
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetClipping(pSVar5,this->Clipping);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar5,this->PixelSnapping);
    if ((pSVar5 == (SWidget *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (pSVar5->FlowDirectionPreference != this->FlowDirectionPreference) {
      pSVar5->FlowDirectionPreference = this->FlowDirectionPreference;
      SWidget::Invalidate(pSVar5,Paint);
    }
    bVar1 = pSVar5->field_0x30;
    if (((bVar1 ^ this->field_0xf9) >> 4 & 1) != 0) {
      pSVar5->field_0x30 = (this->field_0xf9 & 0xf0 ^ bVar1) & 0x10 ^ bVar1;
      SWidget::Invalidate(pSVar5,PaintAndVolatility);
    }
    if (this->RenderOpacity != pSVar5->RenderOpacity) {
      pSVar5->RenderOpacity = this->RenderOpacity;
      SWidget::Invalidate(pSVar5,Paint);
    }
    UpdateRenderTransform(this);
    local_670._s_0.X = (this->RenderTransformPivot).field0_0x0._s_0.X;
    local_670._s_0.Y = (this->RenderTransformPivot).field0_0x0._s_0.Y;
    local_660 = 1;
    local_648 = 0;
    local_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar5->RenderTransformPivotAttribute,pSVar5,
             (TAttribute<UE::Math::TVector2<double>_> *)&local_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_658);
    bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ToolTipWidgetDelegate)
    ;
    if (bVar10) {
      pFVar16 = ::operator_new(0x30);
      if (pFVar16 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar16->ToolTipWidgetDelegate = 0;
        pFVar16->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar16->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar16->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar16->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar17 = pFVar16;
      }
      local_6d8.Object = pFVar17;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&local_640,&local_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(local_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ToolTipWidgetDelegate);
      local_7a0._0_8_ = local_640.Object;
      local_7a0._8_8_ = local_640.SharedReferenceCount.ReferenceController;
      if (local_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_7a0[0x10] = true;
      local_778 = 0;
      local_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar5,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_788,(FWriteAccessScope *)&local_588);
      if (((int)local_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        local_778 = local_778 & 0xffffffff00000000;
      }
      if (local_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_588.Accessor,&local_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_640.SharedReferenceCount.ReferenceController);
    }
    else if ((this->ToolTipWidget).field0_0x0.DebugPtr == (UWidget *)0x0) {
      bVar10 = FText::IsEmpty(&this->ToolTipText);
      if ((!bVar10) ||
         (bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                              &this->ToolTipTextDelegate), bVar10)) {
        bVar10 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                            &this->ToolTipTextDelegate);
        if (!bVar10) {
          pTVar20 = TAttribute<FText>::TAttribute<FText><FText>(&local_3f0,&this->ToolTipText);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &this->ToolTipTextDelegate,&local_420);
          local_6c0.ComparisonIndex.Value = *(uint *)&(this->ToolTipTextDelegate).field_0x10;
          local_6c0.Number = *(uint *)&(this->ToolTipTextDelegate).field_0x14;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_420);
          pUVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                               &this->ToolTipTextDelegate);
          pTVar20 = TAttribute<FText>::Create<UObject>(&local_3c0,pUVar12,&local_6c0);
        }
        SWidget::SetToolTipText(pSVar5,pTVar20);
        if (bVar10) {
          TAttribute<FText>::~TAttribute<FText>(&local_3c0);
        }
      }
    }
    else {
      pFVar18 = SToolTip::FArguments::FArguments(&local_390);
      local_510.bIsSet = true;
      local_510.Getter._16_8_ = 0;
      local_510.Value.Left = 0.0;
      local_510.Value.Top = 0.0;
      local_510.Value.Right = 0.0;
      local_510.Value.Bottom = 0.0;
      local_510.Getter._0_8_ = 0;
      local_510.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::TextMargin(pFVar18,&local_510);
      local_610.Value = (FSlateBrush *)0x0;
      local_610.bIsSet = true;
      local_610.Getter._16_8_ = 0;
      local_610.Getter._0_8_ = 0;
      local_610.Getter._8_8_ = 0;
      pFVar18 = SToolTip::FArguments::BorderImage(pFVar18,&local_610);
      pTVar19 = TakeWidget((this->ToolTipWidget).field0_0x0.DebugPtr,&local_620);
      pTVar4 = (pTVar19->SharedReferenceCount).ReferenceController;
      pSVar5 = pTVar19->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4c0 = (pFVar18->_Content).Widget.Object;
      pTStack_4b8 = (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar18->_Content).Widget.Object = pSVar5;
      (pFVar18->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_6c8,&local_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&local_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(local_res8 + 8));
      FMemScope::~FMemScope(&local_6c8);
      FLLMScope::~FLLMScope(local_res18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=(&local_4b0,&local_630,pFVar18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_620.SharedReferenceCount.ReferenceController._4_4_,
                          local_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&local_390);
      if ((local_860.Object == (SWidget *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_770._8_8_ = local_630.SharedReferenceCount.ReferenceController;
      local_770._0_8_ = &(local_630.Object)->_padding_;
      if (local_630.Object == (SToolTip *)0x0) {
        local_770._0_8_ = pFVar17;
      }
      if (local_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_770[0x10] = true;
      local_748 = 0;
      local_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(local_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)local_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_758,(FWriteAccessScope *)&local_5e8);
      if (((int)local_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        local_748 = local_748 & 0xffffffff00000000;
      }
      if (local_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e8.Accessor,&local_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_630.SharedReferenceCount.ReferenceController);
    }
    if ((this->AccessibleWidgetData).field0_0x0.DebugPtr != (USlateAccessibleWidgetData *)0x0) {
      (**(code **)(this->_padding_ + 0x308))(this,&local_850);
      if (local_850 != (SWidget *)0x0) {
        if ((local_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = local_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            ((this->AccessibleWidgetData).field0_0x0.DebugPtr,
                             (TAttribute<FText> *)local_498);
        SWidget::SetAccessibleBehavior
                  (pSVar5,((this->AccessibleWidgetData).field0_0x0.DebugPtr)->AccessibleBehavior,
                   pTVar20,Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_480);
        if ((void *)local_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_480);
        if ((ITextData *)local_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_498._0_8_ + 0x10))();
        }
        if ((local_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pSVar5 = local_850;
        pTVar20 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            ((this->AccessibleWidgetData).field0_0x0.DebugPtr,
                             (TAttribute<FText> *)local_468);
        SWidget::SetAccessibleBehavior
                  (pSVar5,((this->AccessibleWidgetData).field0_0x0.DebugPtr)->
                          AccessibleSummaryBehavior,pTVar20,Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_450);
        if ((void *)local_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_450);
        if ((ITextData *)local_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_468._0_8_ + 0x10))();
        }
        if ((local_850 == (SWidget *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible
                  (local_850,
                   ((this->AccessibleWidgetData).field0_0x0.DebugPtr)->bCanChildrenBeAccessible);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_848)
      ;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_860.SharedReferenceCount.ReferenceController);
  return;
}

// TakeWidget @ 146a28730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UWidget::TakeWidget(UWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UObject *this_00;
  TEventRef<unsigned_int> TVar5;
  UPackage *pUVar6;
  FWriteBuffer *pFVar7;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [4];
  FName local_64;
  FLLMScope local_5c;
  FMemScope local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_98;
  FLLMScope::FLLMScope(&local_5c,LLMTagDeclaration_UI_UMG.UniqueName,false,None,Default,true);
  local_64 = LLMTagDeclaration_UI_UMG.UniqueName;
  FMemScope::FMemScope(&local_58,&local_64,true);
  this_00 = GetSourceAssetOrClass(this);
  if ((this_00 == (UObject *)0x0) || (lVar1 = this->_padding_, lVar1 == 0)) {
    local_50._8_8_ = local_68;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UWidget::TakeWidget'::__l2::<lambda_2>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
         ::Call;
    TakeWidget_Private(this,__return_storage_ptr__,
                       (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                        *)local_50);
    FMemScope::~FMemScope(&local_58);
    FLLMScope::~FLLMScope(&local_5c);
  }
  else {
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_64.ComparisonIndex.Value = 0;
      local_64.Number = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_64;
    }
    else {
      local_64.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_64.Number = *(uint *)&this_00->field_0x1c;
      TVar5 = FStringTrace::GetNameRef((FName *)local_50);
    }
    uVar2 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_64.ComparisonIndex.Value = 0;
      local_64.Number = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_64;
    }
    else {
      local_64 = *(FName *)(lVar1 + 0x18);
      TVar5 = FStringTrace::GetNameRef((FName *)local_50);
    }
    uVar3 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_64.ComparisonIndex.Value = 0;
      local_64.Number = 0;
      TVar5 = (TEventRef<unsigned_int>)&local_64;
    }
    else {
      pUVar6 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
      local_64 = (FName)pUVar6->_padding_;
      TVar5 = FStringTrace::GetNameRef((FName *)local_50);
    }
    uVar4 = *(undefined8 *)TVar5;
    if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
      local_50._8_8_ = local_68;
      local_50._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UWidget::TakeWidget'::__l5::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
           ::Call;
      TakeWidget_Private(this,__return_storage_ptr__,
                         (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                          *)local_50);
    }
    else {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)local_50);
      *(int *)local_50._0_8_ = (int)uVar2;
      *(int *)(local_50._0_8_ + 4) = (int)uVar3;
      *(int *)(local_50._0_8_ + 8) = (int)uVar4;
      *(undefined8 *)(local_50._8_8_ + 0x28) = *(undefined8 *)(local_50._8_8_ + 0x20);
      local_50._8_8_ = local_68;
      local_50._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UWidget::TakeWidget'::__l5::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
           ::Call;
      TakeWidget_Private(this,__return_storage_ptr__,
                         (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                          *)local_50);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar7 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar7 - *(int *)&pFVar7->Cursor < 1) {
        pFVar7 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar7->Cursor = '\n';
      pFVar7->Cursor = pFVar7->Cursor + 1;
      pFVar7->Committed = pFVar7->Cursor;
    }
    FMemScope::~FMemScope(&local_58);
    FLLMScope::~FLLMScope(&local_5c);
  }
  return __return_storage_ptr__;
}

// TakeWidget_Private @ 146a28a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UWidget::TakeWidget_Private
          (UWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
          *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  UObject *pUVar8;
  FSlateInvalidationRoot *pFVar9;
  code *pcVar10;
  bool bVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  atomic<int> aVar14;
  undefined8 *puVar15;
  UClass *pUVar16;
  TSharedRef<SWidget,1> *pTVar17;
  UUIComponentUserWidgetExtension *this_00;
  UObject *pUVar18;
  UUserWidget *pUVar19;
  FString *pFVar20;
  FSharedReferencer<1> FVar21;
  FSharedReferencer<1> FVar22;
  UUserWidget *pUVar23;
  wchar_t *pwVar24;
  wchar_t *pwVar25;
  UUserWidget *pUVar26;
  ForAnyElementType FVar27;
  bool bVar28;
  undefined1 local_res20 [8];
  undefined1 local_198 [16];
  UUserWidget *local_188;
  FSharedReferencer<1> FStack_180;
  UUserWidget *local_178;
  FSharedReferencer<1> local_170;
  UUserWidget *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  undefined8 local_158;
  FSharedReferencer<1> local_150;
  UUserWidget *local_148;
  FSharedReferencer<1> local_140;
  undefined8 local_138;
  FSharedReferencer<1> FStack_130;
  undefined8 local_128;
  FSharedReferencer<1> local_120;
  TArray<UUIComponent_*,TSizedDefaultAllocator<32>_> local_118;
  TSharedRef<ISlateMetaData,1> local_108;
  UUserWidget *local_f8;
  UClass *local_f0;
  FScriptContainerElement *local_e8;
  UObject *local_e0;
  UWidget *local_d8;
  UObject *local_d0;
  UWidget *local_c8;
  undefined8 local_c0;
  FSharedReferencer<1> local_b8;
  undefined8 local_b0;
  FSharedReferencer<1> local_a8 [2];
  UUserWidget *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  undefined8 local_88;
  FSharedReferencer<1> local_80;
  UUserWidget *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  
  bVar13 = false;
  bVar11 = false;
  local_188 = (UUserWidget *)0x0;
  FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((((this->MyWidget).Object == (SWidget *)0x0) ||
      (pTVar4 = (this->MyWidget).WeakReferenceCount.ReferenceController,
      pTVar4 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar4->SharedReferenceCount < 1)) {
    puVar15 = (undefined8 *)(**(code **)(this->_padding_ + 0x2f8))(this,local_68);
    local_b8.ReferenceController = (TReferenceControllerBase<1> *)puVar15[1];
    local_188 = (UUserWidget *)*puVar15;
    if (local_b8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    if (local_188 == (UUserWidget *)SNullWidget::NullWidget.Object) {
      local_res20[0] = 0;
      `UWidget::TakeWidget_Private'::__l5::<lambda_1>::operator()(local_res20);
    }
    (this->MyWidget).Object = (SWidget *)local_188;
    if (FStack_180.ReferenceController != (this->MyWidget).WeakReferenceCount.ReferenceController) {
      if (FStack_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_180.ReferenceController)->WeakReferenceCount =
             (atomic<int>)((int)(FStack_180.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->MyWidget).WeakReferenceCount.ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      (this->MyWidget).WeakReferenceCount.ReferenceController = FStack_180.ReferenceController;
    }
    bVar13 = true;
    bVar11 = true;
  }
  else {
    local_150.ReferenceController = (this->MyWidget).WeakReferenceCount.ReferenceController;
    local_188 = (UUserWidget *)0x0;
    if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = (local_150.ReferenceController)->SharedReferenceCount;
      do {
        local_188 = (UUserWidget *)0x0;
        if (aVar2 == (atomic<int>)0x0) {
          local_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a28a94;
        }
        LOCK();
        aVar14 = (local_150.ReferenceController)->SharedReferenceCount;
        bVar28 = aVar2 == aVar14;
        if (bVar28) {
          (local_150.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar14 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar14;
      } while (!bVar28);
      if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        local_188 = (UUserWidget *)(this->MyWidget).Object;
      }
    }
LAB_146a28a94:
    local_158 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_150);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_150.ReferenceController);
  }
  pUVar26 = (UUserWidget *)0x0;
  pUVar16 = Z_Construct_UClass_UUserWidget_NoRegister();
  pwVar25 = L"";
  iVar3 = (int)pUVar16->_padding_;
  if ((iVar3 <= *(int *)(this->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
      &pUVar16->_padding_)) {
    FVar22.ReferenceController = (this->MyGCWidget).WeakReferenceCount.ReferenceController;
    local_178 = (UUserWidget *)0x0;
    local_170.ReferenceController = FVar22.ReferenceController;
    if (FVar22.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
LAB_146a28bf7:
      if ((local_188 == (UUserWidget *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
        return pTVar17;
      }
      local_98 = local_188;
      pTStack_90 = FStack_180.ReferenceController;
      if (FStack_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_180.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_180.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_188 == (UUserWidget *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
        return pTVar17;
      }
      pUVar16 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar3 = (int)pUVar16->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar3) ||
         (local_f8 = (UUserWidget *)this,
         (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8)
         != &pUVar16->_padding_)) {
        local_f8 = pUVar26;
      }
      (**(code **)param_1)(&local_148,*(undefined8 *)&param_1->field_0x8,&local_f8,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_90);
      local_178 = local_148;
      local_148 = (UUserWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_170,&local_140);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.ReferenceController);
      FVar22.ReferenceController = local_170.ReferenceController;
      pUVar23 = local_178;
      (this->MyGCWidget).Object = (SObjectWidget *)local_178;
      if (local_170.ReferenceController != (this->MyGCWidget).WeakReferenceCount.ReferenceController
         ) {
        if (local_170.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(local_170.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (this->MyGCWidget).WeakReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        (this->MyGCWidget).WeakReferenceCount.ReferenceController = FVar22.ReferenceController;
      }
      local_80.ReferenceController = FVar22.ReferenceController;
      if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar22.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_188 = pUVar23;
      local_88 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_80);
      FVar21.ReferenceController = local_80.ReferenceController;
    }
    else {
      aVar2 = (FVar22.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          local_170.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a28bf7;
        }
        LOCK();
        aVar14 = (FVar22.ReferenceController)->SharedReferenceCount;
        bVar28 = aVar2 == aVar14;
        if (bVar28) {
          (FVar22.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar14 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar14;
      } while (!bVar28);
      if ((FVar22.ReferenceController == (TReferenceControllerBase<1> *)0x0) ||
         (pUVar23 = (UUserWidget *)(this->MyGCWidget).Object, local_178 = pUVar23,
         pUVar23 == (UUserWidget *)0x0)) goto LAB_146a28bf7;
      if ((bVar13) &&
         (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6867700483520201734>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                              ,0x406,"bNewlyCreated == false"), bVar13)) {
        pcVar10 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
        return pTVar17;
      }
      if (FVar22.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar22.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar22.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b0 = 0;
      local_188 = pUVar23;
      local_a8[0].ReferenceController = FVar22.ReferenceController;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,local_a8);
      FVar21.ReferenceController = local_a8[0].ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar21.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar22.ReferenceController);
  }
  if ((this->bWrappedByComponent == 0) || (lVar5 = this->_padding_, lVar5 == 0)) goto LAB_146a290d6;
  pUVar16 = Z_Construct_UClass_UWidgetTree_NoRegister();
  iVar3 = (int)pUVar16->_padding_;
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar3) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar16->_padding_)) goto LAB_146a290d6;
  pUVar23 = *(UUserWidget **)(lVar5 + 0x20);
  if (pUVar23 == (UUserWidget *)0x0) {
LAB_146a28dc7:
    pUVar23 = pUVar26;
  }
  else {
    pUVar16 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar3 = (int)pUVar16->_padding_;
    if ((*(int *)(pUVar23->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar23->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar16->_padding_)) goto LAB_146a28dc7;
  }
  if (pUVar23 != (UUserWidget *)0x0) {
    local_f0 = Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
    this_00 = (UUIComponentUserWidgetExtension *)
              UUserWidget::GetExtension(pUVar23,(TSubclassOf<UUserWidgetExtension>)&local_f0);
    if (this_00 != (UUIComponentUserWidgetExtension *)0x0) {
      pUVar16 = Z_Construct_UClass_UUIComponentUserWidgetExtension_NoRegister();
      iVar3 = (int)pUVar16->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar16->_padding_)) {
        pFVar20 = GetTypeName<UUIComponentUserWidgetExtension>(&local_58);
        if ((pFVar20->Data).ArrayNum == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
        pFVar20 = GetFullNameForCastLogError<UUserWidgetExtension>
                            (&local_48,(UUserWidgetExtension *)this_00);
        if ((pFVar20->Data).ArrayNum != 0) {
          pwVar25 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar25,pwVar24);
      }
      UUIComponentUserWidgetExtension::GetComponentsFor(this_00,&local_118,this);
      iVar3 = local_118.ArrayNum;
      local_e8 = local_118.AllocatorInstance.Data + (longlong)local_118.ArrayNum * 8;
      FVar27.Data = local_118.AllocatorInstance.Data;
      while( true ) {
        pFVar12 = local_e8;
        if (local_118.ArrayNum != iVar3) {
          local_198[0] = 0;
          `TCheckedPointerIterator<UUIComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_198);
        }
        if (FVar27.Data == pFVar12) break;
        plVar6 = *(longlong **)FVar27.Data;
        if (bVar11) {
          pcVar10 = *(code **)(*plVar6 + 0x2b8);
          if ((local_188 == (UUserWidget *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
            return pTVar17;
          }
          local_78 = local_188;
          pTStack_70 = FStack_180.ReferenceController;
          if (FStack_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_180.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_180.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_188 == (UUserWidget *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
            return pTVar17;
          }
          (*pcVar10)(plVar6,&local_168,&local_78);
          pTVar4 = pTStack_160;
          if ((local_188 == (UUserWidget *)0x0) || (local_188 != local_168)) {
            (this->ComponentWrapperWidget).Object = (SWidget *)local_168;
            if (pTStack_160 != (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController
               ) {
              if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_160->WeakReferenceCount =
                     (atomic<int>)((int)pTStack_160->WeakReferenceCount + 1);
                UNLOCK();
              }
              pTVar7 = (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController;
              if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &pTVar7->WeakReferenceCount;
                aVar2 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if (aVar2 == (atomic<int>)0x1) {
                  (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
                }
              }
              (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController = pTVar4;
            }
            FStack_130.ReferenceController = pTStack_160;
            if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_160->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_188 = local_168;
            local_138 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&FStack_130);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FStack_130.ReferenceController);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_160);
          FVar27.Data = FVar27.Data + 8;
        }
        else {
          if ((((this->ComponentWrapperWidget).Object != (SWidget *)0x0) &&
              (pTVar4 = (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController,
              pTVar4 != (TReferenceControllerBase<1> *)0x0)) &&
             (0 < (int)pTVar4->SharedReferenceCount)) {
            local_120.ReferenceController =
                 (this->ComponentWrapperWidget).WeakReferenceCount.ReferenceController;
            local_188 = pUVar26;
            if (local_120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              aVar2 = (local_120.ReferenceController)->SharedReferenceCount;
              do {
                if (aVar2 == (atomic<int>)0x0) {
                  local_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_146a29092;
                }
                LOCK();
                aVar14 = (local_120.ReferenceController)->SharedReferenceCount;
                bVar13 = aVar2 == aVar14;
                if (bVar13) {
                  (local_120.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)aVar2 + 1);
                  aVar14 = aVar2;
                }
                UNLOCK();
                aVar2 = aVar14;
              } while (!bVar13);
              local_188 = (UUserWidget *)(this->ComponentWrapperWidget).Object;
            }
LAB_146a29092:
            local_128 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_120);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_120.ReferenceController);
          }
          FVar27.Data = FVar27.Data + 8;
        }
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
    }
  }
LAB_146a290d6:
  if (bVar11) {
    this->bRoutedSynchronizeProperties = false;
    pUVar18 = GetSourceAssetOrClass(this);
    pUVar8 = (UObject *)this->_padding_;
    if ((local_188 == (UUserWidget *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar10 = (code *)swi(3);
      pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
      return pTVar17;
    }
    pUVar23 = local_188;
    pFVar9 = (FSlateInvalidationRoot *)this->_padding_;
    pUVar19 = ::operator_new(0x38);
    if (pUVar19 == (UUserWidget *)0x0) {
      local_108.Object = ___xmm_00000000000000000000000000000010;
      local_108.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&pUVar19->_padding_ = 1;
      *(undefined4 *)((longlong)&pUVar19->_padding_ + 4) = 1;
      pUVar19->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFReflectionMetaData___00_SharedPointerInternals__6B_
      ;
      pUVar19->_padding_ = (longlong)&___7FReflectionMetaData__6B_;
      (((FWidgetProxyHandle *)&pUVar19->_padding_)->InvalidationRootHandle).InvalidationRoot =
           pFVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      pUVar19->_padding_ = 0;
      local_e0 = pUVar8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar19->_padding_,(FObjectPtr)&local_e0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      *(undefined8 *)&pUVar19->_padding_ = 0;
      local_d8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar19->_padding_,(FObjectPtr)&local_d8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar18);
      }
      pUVar19->_padding_ = 0;
      local_d0 = pUVar18;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar18);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar19->_padding_,(FObjectPtr)&local_d0);
      local_108.Object = (ISlateMetaData *)&pUVar19->_padding_;
      if ((local_108.Object == (ISlateMetaData *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar10 = (code *)swi(3);
        pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
        return pTVar17;
      }
      LOCK();
      *(int *)&pUVar19->_padding_ = (int)pUVar19->_padding_ + 1;
      UNLOCK();
      pUVar26 = pUVar19;
      local_108.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar19;
    }
    SWidget::AddMetadataInternal((SWidget *)pUVar23,&local_108);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar26);
    (**(code **)(this->_padding_ + 0x2e8))(this);
    if (this->bRoutedSynchronizeProperties == false) {
      local_c8 = this;
      `UWidget::VerifySynchronizeProperties'::__l2::<lambda_1>::operator()(&local_c8);
    }
    (**(code **)(this->_padding_ + 0x300))(this);
  }
  if ((local_188 == (UUserWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar17;
  }
  __return_storage_ptr__->Object = (SWidget *)local_188;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       FStack_180.ReferenceController;
  if (FStack_180.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_180.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_180.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (SWidget *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar13)) {
    pcVar10 = (code *)swi(3);
    pTVar17 = (TSharedRef<SWidget,1> *)(*pcVar10)();
    return pTVar17;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_180.ReferenceController);
  return __return_storage_ptr__;
}

// UnregisterPostStateListener @ 146a2b170

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::UnregisterPostStateListener(UWidget *this,FDelegateHandle *param_1)

{
  if (param_1->ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->PostWidgetStateChanged,
               (FDelegateHandle)param_1->ID);
    return;
  }
  return;
}

// UpdateRenderTransform @ 146a2b570

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::UpdateRenderTransform(UWidget *this)

{
  double dVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_158 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_138;
  ForAnyElementType FStack_130;
  ulonglong local_128;
  TSharedPtr<SWidget,1> local_120;
  undefined1 local_110 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  FDestructionSentinel local_d8;
  FDestructionSentinel local_c0 [7];
  
  GetCachedWidget(this,&local_120);
  if (local_120.Object != (SWidget *)0x0) {
    fVar9 = 0.0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::
        _thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::
                           __l2::_thread_safe_static_guard_0__);
      if (`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        `public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.Angle
             = 0.0;
        `public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
        Translation = UE::Math::TVector2<double>::ZeroVector;
        `public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.Shear
             = UE::Math::TVector2<double>::ZeroVector;
        `public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.Scale
             = UE::Math::TVector2<double>::UnitVector;
        _Init_thread_footer(&`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    if (((((`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
            Scale.field0_0x0._s_0.X == (this->RenderTransform).Scale.field0_0x0._s_0.X) &&
          (`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
           Scale.field0_0x0._s_0.Y == (this->RenderTransform).Scale.field0_0x0._s_0.Y)) &&
         (`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
          Shear.field0_0x0._s_0.X == (this->RenderTransform).Shear.field0_0x0._s_0.X)) &&
        ((`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
          Shear.field0_0x0._s_0.Y == (this->RenderTransform).Shear.field0_0x0._s_0.Y &&
         (`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
          Angle == (this->RenderTransform).Angle)))) &&
       ((`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
         Translation.field0_0x0._s_0.X == (this->RenderTransform).Translation.field0_0x0._s_0.X &&
        (`public:_bool___cdecl_FWidgetTransform::IsIdentity(void)const___ptr64'::__l2::Identity.
         Translation.field0_0x0._s_0.Y == (this->RenderTransform).Translation.field0_0x0._s_0.Y))))
    {
      if (local_120.Object == (SWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_110[0x18] = false;
      local_110[0x1c] = true;
      local_e0 = 0;
      local_f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_e8.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&(local_120.Object)->RenderTransformAttribute,local_120.Object,
               (TAttribute<TOptional<TTransform2<float>_>_> *)local_110,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_f0,(FWriteAccessScope *)&local_d8);
      if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_e8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e8,0,0,0x10);
        local_e0 = local_e0 & 0xffffffff00000000;
      }
      if (local_d8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
      }
      if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_e8.Data);
      }
      this_00 = &local_f0;
    }
    else {
      if (local_120.Object == (SWidget *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      fVar8 = __real_3c8efa35;
      __libm_sse2_sincosf_();
      fVar5 = __real_c2b20000;
      fVar4 = __real_42b20000;
      fVar3 = __real_42b40000;
      fVar7 = __real_3f800000;
      dVar1 = (this->RenderTransform).Shear.field0_0x0._s_0.X;
      if (dVar1 == 0.0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)dVar1;
        if (__real_42b20000 <= fVar10) {
          fVar10 = __real_42b20000;
        }
        if (fVar10 <= __real_c2b20000) {
          fVar10 = __real_c2b20000;
        }
        fVar10 = tanf((__real_42b40000 - fVar10) * fVar8);
        fVar10 = fVar7 / fVar10;
      }
      dVar1 = (this->RenderTransform).Shear.field0_0x0._s_0.Y;
      if (dVar1 != 0.0) {
        fVar9 = (float)dVar1;
        if (fVar4 <= fVar9) {
          fVar9 = fVar4;
        }
        if (fVar9 <= fVar5) {
          fVar9 = fVar5;
        }
        fVar9 = tanf((fVar3 - fVar9) * fVar8);
        fVar9 = fVar7 / fVar9;
      }
      fVar7 = (float)(this->RenderTransform).Scale.field0_0x0._s_0.X;
      local_158[0x18] = true;
      local_158[0x1c] = true;
      fVar8 = (float)(this->RenderTransform).Scale.field0_0x0._s_0.Y;
      local_158._0_4_ =
           (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000) * fVar7 * fVar9
           + fVar7 * extraout_XMM0_Db;
      local_158._4_4_ = fVar7 * fVar9 * extraout_XMM0_Db + fVar7 * extraout_XMM0_Da;
      local_158._8_4_ =
           (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000) * fVar8 +
           fVar8 * fVar10 * extraout_XMM0_Db;
      local_128 = 0;
      local_158._16_4_ = (undefined4)(this->RenderTransform).Translation.field0_0x0._s_0.X;
      local_158._12_4_ = fVar8 * fVar10 * extraout_XMM0_Da + fVar8 * extraout_XMM0_Db;
      local_158._20_4_ = (undefined4)(this->RenderTransform).Translation.field0_0x0._s_0.Y;
      local_138.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_130.Data = (FScriptContainerElement *)0x0;
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,TOptional<TTransform2<float>_>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&(local_120.Object)->RenderTransformAttribute,local_120.Object,
               (TAttribute<TOptional<TTransform2<float>_>_> *)local_158,None);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_138,(FWriteAccessScope *)local_c0);
      if (((int)local_128 != 0) && (FStack_130.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_130.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_130,0,0,0x10);
        local_128 = local_128 & 0xffffffff00000000;
      }
      if (local_c0[0].bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0[0].Accessor,local_c0);
      }
      if (FStack_130.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_130.Data);
      }
      this_00 = &local_138;
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  return;
}

// VerifySynchronizeProperties @ 146a2dc20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidget::VerifySynchronizeProperties(UWidget *this)

{
  UWidget *local_res8 [4];
  
  if (this->bRoutedSynchronizeProperties == false) {
    local_res8[0] = this;
    `UWidget::VerifySynchronizeProperties'::__l2::<lambda_1>::operator()(local_res8);
  }
  return;
}

// execForceLayoutPrepass @ 146a33f40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execForceLayoutPrepass(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
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
    (local_18.Object)->bNeedsPrepass = '\x01';
    pFVar3 = SWidget::GetTickSpaceGeometry(local_18.Object);
    SWidget::SlatePrepass(local_18.Object,pFVar3->Scale);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// execForceVolatile @ 146a33fe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execForceVolatile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int local_res8 [2];
  TSharedPtr<SWidget,1> local_18;
  
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
  bVar5 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x9 = param_1[6].field_0x9 & 0xef;
  bVar4 = bVar5 << 4;
  param_1[6].field_0x9 = param_1[6].field_0x9 | bVar4;
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object != (SWidget *)0x0) {
    if (local_18.Object == (SWidget *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((local_18.Object)->bForceVolatile != bVar5) {
      (local_18.Object)->field_0x30 = (local_18.Object)->field_0x30 & 0xef | bVar4;
      SWidget::Invalidate(local_18.Object,PaintAndVolatility);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAccessibleSummaryText @ 146a34100

void __cdecl UWidget::execGetAccessibleSummaryText(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,&local_28);
  if (local_28 == (SWidget *)0x0) {
    pFVar3 = FText::GetEmpty();
    local_18.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = pFVar3->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  else {
    if ((local_28 == (SWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SWidget::GetAccessibleSummary(local_28,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetAccessibleText @ 146a341f0

void __cdecl UWidget::execGetAccessibleText(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  SWidget *local_28;
  TReferenceControllerBase<1> *local_20;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x308))(param_1,&local_28);
  if (local_28 == (SWidget *)0x0) {
    pFVar3 = FText::GetEmpty();
    local_18.TextData.Reference = (pFVar3->TextData).Reference;
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 8))
                (local_18.TextData.Reference,local_res8);
    }
    local_18.Flags = pFVar3->Flags;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  else {
    if ((local_28 == (SWidget *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    SWidget::GetAccessibleText(local_28,&local_18,Main);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetCachedGeometry @ 146a345d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetCachedGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometry *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetTickSpaceGeometry((UWidget *)param_1);
  FGeometry::operator=(param_3,pFVar1);
  return;
}

// execGetClipping @ 146a348b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetClipping(UObject *param_1,FFrame *param_2,void *param_3)

{
  EWidgetClipping EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetClipping((UWidget *)param_1);
  *(EWidgetClipping *)param_3 = EVar1;
  return;
}

// execGetDesiredSize @ 146a34d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetDesiredSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  bool bVar5;
  FDeprecateSlateVector2D FVar6;
  TSharedPtr<SWidget,1> local_28 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,local_28);
  if (local_28[0].Object == (SWidget *)0x0) {
    dVar3 = 0.0;
    dVar4 = 0.0;
  }
  else {
    if (local_28[0].Object == (SWidget *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar6 = SWidget::GetDesiredSize(local_28[0].Object);
    dVar3 = (double)(float)*(undefined8 *)FVar6;
    dVar4 = (double)(float)((ulonglong)*(undefined8 *)FVar6 >> 0x20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  return;
}

// execGetGameInstance @ 146a352a0

void __cdecl UWidget::execGetGameInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = (**(code **)(*(longlong *)param_1 + 0x180))();
  if (lVar1 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(lVar1 + 0x230);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetIsEnabled @ 146a355c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetIsEnabled((UWidget *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execGetOwningLocalPlayer @ 146a35d40

void __cdecl UWidget::execGetOwningLocalPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetOwningPlayer @ 146a35d80

void __cdecl UWidget::execGetOwningPlayer(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPaintSpaceGeometry @ 146a35dc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetPaintSpaceGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FGeometry *pFVar3;
  SWidget *this;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  this = SNullWidget::NullWidget.Object;
  if (((local_18.Object != (SWidget *)0x0) &&
      (this = local_18.Object, local_18.Object == (SWidget *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = SWidget::GetPaintSpaceGeometry(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FGeometry::operator=(param_3,pFVar3);
  return;
}

// execGetParent @ 146a35e70

void __cdecl UWidget::execGetParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[1].field_0x8 != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)&param_1[1].field_0x8 + 0x28);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetRenderOpacity @ 146a35eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetRenderOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetRenderOpacity((UWidget *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetRenderTransformAngle @ 146a35ef0

void __cdecl UWidget::execGetRenderTransformAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[5].field_0x18;
  return;
}

// execGetTickSpaceGeometry @ 146a36610

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetTickSpaceGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometry *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetTickSpaceGeometry((UWidget *)param_1);
  FGeometry::operator=(param_3,pFVar1);
  return;
}

// execGetVisibility @ 146a36ae0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execGetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = GetVisibility((UWidget *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execHasAnyUserFocus @ 146a36b50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execHasAnyUserFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res11;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
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
  SWidget::HasAnyUserFocus(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = local_res11;
  return;
}

// execHasFocusedDescendants @ 146a36d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execHasFocusedDescendants(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
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
  bVar2 = SWidget::HasFocusedDescendants(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = bVar2;
  return;
}

// execHasKeyboardFocus @ 146a36dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execHasKeyboardFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
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
  uVar3 = (**(code **)((local_18.Object)->_padding_ + 0x1a0))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execHasMouseCapture @ 146a36e80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execHasMouseCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
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
  bVar2 = SWidget::HasMouseCapture(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = bVar2;
  return;
}

// execHasMouseCaptureByUser @ 146a36f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execHasMouseCaptureByUser(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20;
  undefined1 local_res24;
  TSharedPtr<SWidget,1> local_38;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar4 = local_res18[0];
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_38);
  if (local_38.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if ((local_38.Object == (SWidget *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_res24 = -1 < iVar3;
  if ((bool)local_res24) {
    local_res20 = iVar3;
  }
  bVar5 = SWidget::HasMouseCaptureByUser(local_38.Object,iVar4,(TOptional<int>)&local_res20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = bVar5;
  return;
}

// execHasUserFocus @ 146a37100

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidget::execHasUserFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  APlayerController *pAVar3;
  char cVar4;
  bool bVar5;
  ULocalPlayer *pUVar6;
  FSlateApplication *this;
  undefined1 local_res10;
  undefined1 local_res11;
  APlayerController *local_res18 [2];
  TSharedPtr<SWidget,1> local_38;
  FLocalPlayerContext local_28;
  
  local_res18[0] = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pAVar3 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res18[0] != (APlayerController *)0x0) &&
      ((local_res18[0]->Player).field0_0x0.DebugPtr != (UPlayer *)0x0)) &&
     ((local_res18[0]->_padding_ & 2) != 0)) {
    cVar4 = (**(code **)(local_res18[0]->_padding_ + 0x7f0))(local_res18[0]);
    if (cVar4 != '\0') {
      GetCachedWidget((UWidget *)param_1,&local_38);
      if (local_38.Object != (SWidget *)0x0) {
        FLocalPlayerContext::FLocalPlayerContext(&local_28,pAVar3);
        pUVar6 = FLocalPlayerContext::GetLocalPlayer(&local_28);
        if (pUVar6 != (ULocalPlayer *)0x0) {
          this = FSlateApplication::Get();
          FSlateApplication::GetUserIndexForController(this,pUVar6->ControllerId);
          if (local_38.Object == (SWidget *)0x0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar5) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          SWidget::HasUserFocus(local_38.Object,(int)&local_res10);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          *(undefined1 *)param_3 = local_res11;
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execHasUserFocusedDescendants @ 146a37280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidget::execHasUserFocusedDescendants(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  APlayerController *pAVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ULocalPlayer *pUVar7;
  FSlateApplication *this;
  APlayerController *local_res10;
  TSharedPtr<SWidget,1> local_28;
  FLocalPlayerContext local_18;
  
  local_res10 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pAVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res10 != (APlayerController *)0x0) && ((local_res10->_padding_ & 2) != 0)) &&
     (cVar4 = (**(code **)(local_res10->_padding_ + 0x7f0))(local_res10), cVar4 != '\0')) {
    GetCachedWidget((UWidget *)param_1,&local_28);
    if (local_28.Object != (SWidget *)0x0) {
      FLocalPlayerContext::FLocalPlayerContext(&local_18,pAVar3);
      pUVar7 = FLocalPlayerContext::GetLocalPlayer(&local_18);
      if (pUVar7 != (ULocalPlayer *)0x0) {
        this = FSlateApplication::Get();
        iVar6 = FSlateApplication::GetUserIndexForController(this,pUVar7->ControllerId);
        if ((local_28.Object == (SWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar5 = SWidget::HasUserFocusedDescendants(local_28.Object,iVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        *(bool *)param_3 = bVar5;
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execInvalidateLayoutAndVolatility @ 146a37410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidget::execInvalidateLayoutAndVolatility(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  InvalidateLayoutAndVolatility((UWidget *)param_1);
  return;
}

// execIsHovered @ 146a37570

void __cdecl UWidget::execIsHovered(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsInViewport @ 146a375b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UWidget::execIsInViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UWorld *pUVar2;
  UGameViewportSubsystem *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[6].field_0x9 & 0x20) != 0) {
    pUVar2 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))();
    this = UGameViewportSubsystem::Get(pUVar2);
    if (this != (UGameViewportSubsystem *)0x0) {
      bVar1 = UGameViewportSubsystem::IsWidgetAdded(this,(UWidget *)param_1);
      *(bool *)param_3 = bVar1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsRendered @ 146a377a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execIsRendered(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
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
  if ((((byte)(local_18.Object)->VisibilityAttribute & 0x19) != 0) &&
     (0.0 < (local_18.Object)->RenderOpacity)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 1;
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsVisible @ 146a37870

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execIsVisible(UObject *param_1,FFrame *param_2,void *param_3)

{
  TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> TVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<SWidget,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetCachedWidget((UWidget *)param_1,&local_18);
  if (local_18.Object == (SWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    *(undefined1 *)param_3 = 0;
    return;
  }
  if (local_18.Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TVar1 = (local_18.Object)->VisibilityAttribute;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(bool *)param_3 = ((byte)TVar1 & 0x19) != 0;
  return;
}

// execK2_AddFieldValueChangedDelegate @ 146a37920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidget::execK2_AddFieldValueChangedDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *this;
  FProperty *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  UWidgetFieldNotificationExtension *pUVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 local_res10 [8];
  longlong local_res20;
  longlong local_a8;
  int local_a0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  int local_70;
  FMRSWRecursiveAccessDetector local_68 [2];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  code *local_40;
  longlong **local_38;
  FReadAccessScope local_30;
  
  local_res20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90 = 0;
  local_88 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_68[0].State = (atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_98,&local_30);
  local_68[1].State = (atomic<unsigned___int64>)local_90;
  local_58 = local_88;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  lVar3 = local_res20;
  if (local_res20 != 0) {
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x30))(param_1 + 1);
    local_50 = &local_a8;
    local_38 = &local_50;
    local_a8 = 0;
    local_40 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_48 = lVar3;
    (**(code **)*puVar6)(puVar6,*(undefined8 *)&param_1->field_0x10,&local_40);
    if (local_a8 == 0) {
      local_res10[0] = 0;
      bVar4 = `UWidget::K2_AddFieldValueChangedDelegate'::__l6::<lambda_1>::operator()(local_res10);
      if (!bVar4) goto LAB_146a37b52;
    }
    pUVar7 = UE::UMG::Private::FindOrAddWidgetNotifyExtension((UWidget *)param_1);
    if (pUVar7 != (UWidgetFieldNotificationExtension *)0x0) {
      local_70 = local_a0;
      local_80._8_8_ = local_a8;
      UE::FieldNotification::FFieldMulticastDelegate::Add
                (&pUVar7->Delegates,(UObject *)local_80,(FFieldId *)param_1,
                 (FFieldValueChangedDynamicDelegate *)(local_80 + 8));
      if (local_80._0_8_ != 0) {
        this = &param_1[9].field_0x20;
        iVar9 = (local_a0 - *(int *)&param_1[10].field_0x10) + 1;
        if (0 < iVar9) {
          iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar9);
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar5,iVar9,false);
        }
        if ((local_a0 < 0) || (*(int *)&param_1[10].field_0x10 <= local_a0)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        puVar8 = *(undefined1 **)&param_1[10].field_0x8;
        if (*(undefined1 **)&param_1[10].field_0x8 == (undefined1 *)0x0) {
          puVar8 = this;
        }
        *(uint *)(puVar8 + (longlong)((int)(local_a0 + (local_a0 >> 0x1f & 0x1fU)) >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)((int)(local_a0 + (local_a0 >> 0x1f & 0x1fU)) >> 5) * 4) |
             1 << ((byte)local_a0 & 0x1f);
      }
    }
  }
LAB_146a37b52:
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(local_68);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// execK2_BroadcastFieldValueChanged @ 146a37b80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidget::execK2_BroadcastFieldValueChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [16];
  longlong local_res20;
  FName local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  code *local_28;
  undefined1 *local_20;
  
  local_res20 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 1) + 0x30))(param_1 + 1);
    local_38._0_8_ = &local_48;
    local_20 = local_38;
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
               ::Call;
    local_38._8_8_ = lVar2;
    (**(code **)*puVar4)(puVar4,*(undefined8 *)&param_1->field_0x10,&local_28);
    if ((local_48 != (FName)0x0) ||
       (bVar3 = `UWidget::K2_BroadcastFieldValueChanged'::__l6::<lambda_1>::operator()(local_res10),
       bVar3)) {
      local_38._0_4_ = local_48.ComparisonIndex.Value;
      local_38._4_4_ = local_48.Number;
      local_38._8_4_ = local_40;
      BroadcastFieldValueChanged((UWidget *)(param_1 + 1),(FFieldId *)local_38);
    }
  }
  return;
}

// execK2_RemoveFieldValueChangedDelegate @ 146a37ca0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidget::execK2_RemoveFieldValueChangedDelegate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  FFieldValueChangedDynamicDelegate local_40;
  FReadAccessScope local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_58,&local_28);
  local_40._8_8_ = local_50;
  local_40._16_8_ = local_48;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  K2_RemoveFieldValueChangedDelegate((UWidget *)param_1,(FFieldNotificationId)local_res10,&local_40)
  ;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

// execRemoveFromParent @ 146a388b0

void __cdecl UWidget::execRemoveFromParent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146a388c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2d0))();
  return;
}

// execResetCursor @ 146a39490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execResetCursor(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<SWidget,1> local_58;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[6].field_0x9 = param_1[6].field_0x9 & 0xf7;
  GetCachedWidget((UWidget *)param_1,&local_58);
  if (local_58.Object != (SWidget *)0x0) {
    if (local_58.Object == (SWidget *)0x0) {
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
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SWidget::SetCursor(local_58.Object,(TAttribute<TOptional<EMouseCursor::Type>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return;
}

// execSetAllNavigationRules @ 146a39920

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetAllNavigationRules(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUINavigationRule local_res10 [8];
  FName local_res20;
  
  local_res10[0] = Escape;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAllNavigationRules((UWidget *)param_1,local_res10[0],local_res20);
  return;
}

// execSetClipping @ 146a3af00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetClipping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EWidgetClipping local_res10 [24];
  
  local_res10[0] = Inherit;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetClipping((UWidget *)param_1,local_res10[0]);
  return;
}

// execSetCursor @ 146a3b760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetCursor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCursor((UWidget *)param_1,(uint)local_res10[0]);
  return;
}

// execSetFocus @ 146a3c860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidget::execSetFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  APlayerController *pAVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pAVar1 = (APlayerController *)(**(code **)(*(longlong *)param_1 + 0x2d8))();
  SetUserFocus((UWidget *)param_1,pAVar1);
  return;
}

// execSetIsEnabled @ 146a3dde0

void __cdecl UWidget::execSetIsEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8[0] != 0);
  return;
}

// execSetKeyboardFocus @ 146a3eb30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetKeyboardFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetKeyboardFocus((UWidget *)param_1);
  return;
}

// execSetNavigationRule @ 146a3faf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetNavigationRule(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUINavigationRule local_res10 [8];
  EUINavigation local_res20 [8];
  FName local_28;
  FCustomWidgetNavigationDelegate local_20;
  
  local_res20[0] = Left;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Escape;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_20._0_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20._8_8_ = 0;
  local_20._16_8_ = 0;
  SetNavigationRuleInternal
            ((UWidget *)param_1,local_res20[0],local_res10[0],local_28,(UWidget *)0x0,&local_20);
  BuildNavigation((UWidget *)param_1);
  return;
}

// execSetNavigationRuleBase @ 146a3fc30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetNavigationRuleBase(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMessageLog *this;
  FText *pFVar2;
  EUINavigationRule local_res10 [16];
  EUINavigation local_res20 [8];
  FName local_68;
  TSharedRef<FTokenizedMessage,1> local_60;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  FMessageLog local_38;
  
  local_res20[0] = Left;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = Escape;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != Explicit) && (1 < (byte)(local_res10[0] - Custom))) {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    SetNavigationRuleInternal
              ((UWidget *)param_1,local_res20[0],local_res10[0],(FName)0x0,(UWidget *)0x0,
               (FCustomWidgetNavigationDelegate *)&local_50);
    BuildNavigation((UWidget *)param_1);
    return;
  }
  ::FName::FName(&local_68,"PIE");
  this = FMessageLog::FMessageLog(&local_38,&local_68);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_50,L"UMG",L"SetNavigationRuleBaseWrongRule",
                      L"Cannot use SetNavigationRuleBase with an Explicit or a Custom or a CustomBoundary Rule."
                     );
  FMessageLog::Error(this,&local_60,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  if ((ITextData *)local_50 != (ITextData *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// execSetNavigationRuleCustom @ 146a3fde0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetNavigationRuleCustom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUINavigation EVar2;
  EUINavigation local_res10 [16];
  undefined8 local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FMRSWRecursiveAccessDetector *local_70;
  undefined8 local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FMRSWRecursiveAccessDetector *local_58;
  bool local_50;
  undefined7 uStack_4f;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  local_res10[0] = Left;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70 = (FMRSWRecursiveAccessDetector *)0x0;
  local_68._0_1_ = false;
  local_68._1_7_ = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_48);
  local_58 = local_70;
  local_50 = local_68._0_1_;
  uStack_4f = local_68._1_7_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  EVar2 = local_res10[0];
  local_48.AccessType = Reader;
  local_48._4_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48.Accessor = local_58;
  local_48.bDestroyed = local_50;
  local_48._17_7_ = uStack_4f;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  local_res20 = 0;
  SetNavigationRuleInternal
            ((UWidget *)param_1,EVar2,Custom,(FName)0x0,(UWidget *)0x0,
             (FCustomWidgetNavigationDelegate *)&local_48);
  BuildNavigation((UWidget *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// execSetNavigationRuleCustomBoundary @ 146a3ff40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidget::execSetNavigationRuleCustomBoundary(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUINavigation EVar2;
  EUINavigation local_res10 [16];
  undefined8 local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FMRSWRecursiveAccessDetector *local_70;
  undefined8 local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  FMRSWRecursiveAccessDetector *local_58;
  bool local_50;
  undefined7 uStack_4f;
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  local_res10[0] = Left;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70 = (FMRSWRecursiveAccessDetector *)0x0;
  local_68._0_1_ = false;
  local_68._1_7_ = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_78,(FReadAccessScope *)&local_48);
  local_58 = local_70;
  local_50 = local_68._0_1_;
  uStack_4f = local_68._1_7_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  EVar2 = local_res10[0];
  local_48.AccessType = Reader;
  local_48._4_4_ = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_60,&local_30);
  local_48.Accessor = local_58;
  local_48.bDestroyed = local_50;
  local_48._17_7_ = uStack_4f;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  local_res20 = 0;
  SetNavigationRuleInternal
            ((UWidget *)param_1,EVar2,CustomBoundary,(FName)0x0,(UWidget *)0x0,
             (FCustomWidgetNavigationDelegate *)&local_48);
  BuildNavigation((UWidget *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// execSetNavigationRuleExplicit @ 146a400a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetNavigationRuleExplicit(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EUINavigation local_res10 [8];
  UWidget *local_res20;
  FCustomWidgetNavigationDelegate local_20;
  
  local_res10[0] = Left;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_20._0_8_ = 0;
  local_20._8_8_ = 0;
  local_20._16_8_ = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetNavigationRuleInternal
            ((UWidget *)param_1,local_res10[0],Explicit,(FName)0x0,local_res20,&local_20);
  BuildNavigation((UWidget *)param_1);
  return;
}

// execSetRenderOpacity @ 146a40f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRenderOpacity((UWidget *)param_1,local_res10[0]);
  return;
}

// execSetRenderScale @ 146a40ff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[4].field_0x20 = local_18;
  *(undefined8 *)(param_1 + 5) = uStack_10;
  UpdateRenderTransform((UWidget *)param_1);
  return;
}

// execSetRenderShear @ 146a41080

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderShear(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[5].field_0x8 = local_18;
  *(undefined8 *)&param_1[5].field_0x10 = uStack_10;
  UpdateRenderTransform((UWidget *)param_1);
  return;
}

// execSetRenderTransform @ 146a41110

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  local_48 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  local_38 = (undefined1  [16])UE::Math::TVector2<double>::UnitVector.field0_0x0;
  uStack_44 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uStack_40 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uStack_3c = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
  local_28 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_4_;
  uStack_24 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._4_4_;
  uStack_20 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_4_;
  uStack_1c = UE::Math::TVector2<double>::ZeroVector.field0_0x0._12_4_;
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
  *(ulonglong *)&param_1[4].field_0x10 = CONCAT44(uStack_44,local_48);
  *(ulonglong *)&param_1[4].field_0x18 = CONCAT44(uStack_3c,uStack_40);
  *(undefined8 *)&param_1[4].field_0x20 = local_38._0_8_;
  *(undefined8 *)(param_1 + 5) = local_38._8_8_;
  *(ulonglong *)&param_1[5].field_0x8 = CONCAT44(uStack_24,local_28);
  *(ulonglong *)&param_1[5].field_0x10 = CONCAT44(uStack_1c,uStack_20);
  *(ulonglong *)&param_1[5].field_0x18 = CONCAT44(uStack_14,local_18);
  UpdateRenderTransform((UWidget *)param_1);
  return;
}

// execSetRenderTransformAngle @ 146a41220

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderTransformAngle(UObject *param_1,FFrame *param_2,void *param_3)

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
  *(undefined4 *)&param_1[5].field_0x18 = local_res8[0];
  UpdateRenderTransform((UWidget *)param_1);
  return;
}

// execSetRenderTransformPivot @ 146a412b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderTransformPivot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRenderTransformPivot((UWidget *)param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// execSetRenderTranslation @ 146a41340

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetRenderTranslation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)&param_1[4].field_0x10 = local_18;
  *(undefined8 *)&param_1[4].field_0x18 = uStack_10;
  UpdateRenderTransform((UWidget *)param_1);
  return;
}

// execSetToolTip @ 146a43d50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetToolTip(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UWidget *local_res10;
  
  local_res10 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetToolTip((UWidget *)param_1,local_res10);
  return;
}

// execSetToolTipText @ 146a43de0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidget::execSetToolTipText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetToolTipText((UWidget *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetUserFocus @ 146a43f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidget::execSetUserFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *local_res10;
  
  local_res10 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetUserFocus((UWidget *)param_1,local_res10);
  return;
}

// execSetVisibility @ 146a44890

void __cdecl UWidget::execSetVisibility(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res8[0]);
  return;
}

// CanSafelyRouteCall @ 146a60590

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWidget::CanSafelyRouteCall(UWidget *this)

{
  FUObjectItem *pFVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  pFVar1 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  if (((uint)((ulonglong)(pFVar1->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    if (*(char *)(pFVar3 + 4) == '\0') {
      return true;
    }
  }
  return false;
}

// operator() @ 1504f6cd0

bool __thiscall `UWidget::RebuildWidget'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520202158>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520202158>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6d50

bool __thiscall `UWidget::VerifySynchronizeProperties'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520201672>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520201672>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f6dbd;
    }
  }
  bVar2 = false;
LAB_1504f6dbd:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504f6f70

bool __thiscall `UWidget::TakeWidget_Private'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520201714>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520201714>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6fb0

bool __thiscall `UWidget::K2_AddFieldValueChangedDelegate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520202689>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520202689>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6ff0

bool __thiscall `UWidget::K2_BroadcastFieldValueChanged'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520202780>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520202780>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f7030

bool __thiscall
`UWidget::K2_RemoveFieldValueChangedDelegate'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6867700483520202722>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6867700483520202722>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

