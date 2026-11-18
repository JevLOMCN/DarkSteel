// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b627eb0

UClass * __cdecl UDS_VM_Customize_Component_Slider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Customize_Component_Slider",
               &Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton,
               StaticRegisterNativesUDS_VM_Customize_Component_Slider,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Customize_Component_Slider>,
               InternalVTableHelperCtorCaller<UDS_VM_Customize_Component_Slider>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton;
}

// UDS_VM_Customize_Component_Slider @ 14b62e630

UDS_VM_Customize_Component_Slider * __thiscall
UDS_VM_Customize_Component_Slider::UDS_VM_Customize_Component_Slider
          (UDS_VM_Customize_Component_Slider *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_Slider__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  this->ComponentTable = (FDS_CustomizingComponentTableRow *)0x0;
  (this->TitleText).StringTableType = None;
  return this;
}

// UDS_VM_Customize_Component_Slider @ 14b62e6d0

UDS_VM_Customize_Component_Slider * __thiscall
UDS_VM_Customize_Component_Slider::UDS_VM_Customize_Component_Slider
          (UDS_VM_Customize_Component_Slider *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_Slider__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->VM_QuantityControl).field0_0x0.DebugPtr = (UDS_VM_W_CommonQuantityControl *)0x0;
  this->ComponentTable = (FDS_CustomizingComponentTableRow *)0x0;
  (this->TitleText).StringTableType = None;
  return this;
}

// ~UDS_VM_Customize_Component_Slider @ 14b62f8f0

void __thiscall
UDS_VM_Customize_Component_Slider::~UDS_VM_Customize_Component_Slider
          (UDS_VM_Customize_Component_Slider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Customize_Component_Slider__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b631ec0

IClassDescriptor * __thiscall
UDS_VM_Customize_Component_Slider::GetFieldNotificationDescriptor
          (UDS_VM_Customize_Component_Slider *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Customize_Component_Slider::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b632de0

UClass * __cdecl UDS_VM_Customize_Component_Slider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Customize_Component_Slider",
               &Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton,
               StaticRegisterNativesUDS_VM_Customize_Component_Slider,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Customize_Component_Slider>,
               InternalVTableHelperCtorCaller<UDS_VM_Customize_Component_Slider>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Customize_Component_Slider.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Customize_Component_Slider @ 14b633180

void __cdecl
UDS_VM_Customize_Component_Slider::StaticRegisterNativesUDS_VM_Customize_Component_Slider(void)

{
  return;
}

// InitViewModel @ 14c08c650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_Customize_Component_Slider::InitViewModel(UDS_VM_Customize_Component_Slider *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_W_CommonQuantityControl *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_QuantityControl).field0_0x0.DebugPtr == (UDS_VM_W_CommonQuantityControl *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_W_CommonQuantityControl_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_W_CommonQuantityControl *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_W_CommonQuantityControl *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_W_CommonQuantityControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_QuantityControl).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnQuantityChanged @ 14c098880

void __thiscall
UDS_VM_Customize_Component_Slider::OnQuantityChanged
          (UDS_VM_Customize_Component_Slider *this,float param_1)

{
  UDS_CharacterUIEvent *pUVar1;
  FDS_CustomizeComponentInfo local_38 [2];
  
  pUVar1 = UDS_CharacterUIEvent::GetEvent();
  if (pUVar1 != (UDS_CharacterUIEvent *)0x0) {
    local_38[0].bIsInit = false;
    local_38[0].Index = -1;
    local_38[0].IntValue = 0;
    local_38[0].TableID = this->ComponentTable->ID;
    local_38[0].FloatValue = param_1;
    FDS_EventDelegate<int,FDS_CustomizeComponentInfo_const_&>::Broadcast
              (&pUVar1->OnCustomizeComponentInfoChanged,this->ComponentTable->ID,local_38);
  }
  return;
}

// OnSetViewModel @ 14c099690

void __thiscall
UDS_VM_Customize_Component_Slider::OnSetViewModel
          (UDS_VM_Customize_Component_Slider *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_CustomizingComponentTableRow *pFVar2;
  UDS_VM_W_CommonQuantityControl *this_00;
  code *pcVar3;
  bool bVar4;
  FDS_ViewModelContext *pFVar5;
  UScriptStruct *pUVar6;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_CustomizeComponent,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  code *local_48;
  undefined8 uStack_40;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_CustomizeComponent>(&local_78,&local_58);
  if (local_78.Object == (FDS_ViewModelContext_CustomizeComponent *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar2 = (local_78.Object)->CustomizingComponentTable;
    if (pFVar2 == (FDS_CustomizingComponentTableRow *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      this->ComponentTable = pFVar2;
      FDS_Text::SetTextFromStringID(&this->TitleText,&pFVar2->ID_Title);
      local_90 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::TitleText.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      pFVar5 = ::operator_new(0x88);
      pFVar8 = (FDS_ViewModelContext *)0x0;
      pFVar7 = pFVar8;
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
        *(undefined8 *)&pFVar5[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[1].field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar5[2]._padding_ + 4) = 0;
        *(undefined8 *)((atomic<int> *)&pFVar5[2].DerivedStaticStruct + 1) = 0;
        *(undefined8 *)&pFVar5[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[2].field_0x1c = 0;
        *(undefined8 *)((longlong)&pFVar5[3]._padding_ + 4) = 0;
        *(undefined8 *)((atomic<int> *)&pFVar5[3].DerivedStaticStruct + 1) = 0;
        *(undefined8 *)&pFVar5[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[3].field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar5[4]._padding_ + 4) = 0;
        pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_CommonQuantityControl__6B_;
        *(undefined8 *)&pFVar5->DerivedStaticStruct = 0;
        (pFVar5->ViewModelName).ComparisonIndex = 0;
        (pFVar5->ViewModelName).Number = 0;
        pFVar5[1]._padding_ = 0;
        *(atomic<int> *)&pFVar5[1].DerivedStaticStruct = (atomic<int>)0x0;
        *(undefined8 *)((atomic<int> *)&pFVar5[1].DerivedStaticStruct + 1) = 0x3f800000;
        FText::FromString((FText *)&pFVar5[1].ViewModelTemplateKey,L"Quantity");
        *(undefined1 *)&pFVar5[2].DerivedStaticStruct = 1;
        pFVar5[2].ViewModelName.ComparisonIndex = 0;
        pFVar5[2].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[2].ViewModelTemplateKey = 0;
        pFVar5[3]._padding_ = 0;
        *(undefined8 *)&pFVar5[3].DerivedStaticStruct = 2;
        pFVar5[3].ViewModelName.ComparisonIndex = 0;
        pFVar5[3].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar5[3].ViewModelTemplateKey = 0;
        *(undefined4 *)&pFVar5[4]._padding_ = 0;
        pFVar7 = pFVar5;
      }
      pFVar5 = ::operator_new(0x20);
      if (pFVar5 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar5->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar5->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar5->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_CommonQuantityControl__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar5->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar5->ViewModelTemplateKey = pFVar7;
        pFVar8 = pFVar5;
      }
      if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar6 = FDS_ViewModelContext_CommonQuantityControl::StaticStruct();
      *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar6;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar8->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_68.Object = pFVar7;
        local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      pFVar7->ViewModelTemplateKey = W_CommonQuantityControl;
      uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
      *(float *)&pFVar7[1]._padding_ = this->ComponentTable->SliderMinValue;
      *(float *)((longlong)&pFVar7[1]._padding_ + 4) = this->ComponentTable->SliderMaxValue;
      ((atomic<int> *)&pFVar7[1].DerivedStaticStruct)[1] =
           (atomic<int>)this->ComponentTable->SliderUnitValue;
      *(float *)&pFVar7[1].DerivedStaticStruct = this->ComponentTable->DefaultValueFloat;
      pFVar7[1].ViewModelName.ComparisonIndex.Value = 2;
      local_48 = OnQuantityChanged;
      *(undefined1 *)&pFVar7[2].DerivedStaticStruct = 0;
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_Customize_Component_Slider>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &pFVar7[2].ViewModelName,(UDS_VM_Customize_Component_Slider *)&stack0x00000010,
                 (pmf_bf984701 *)this);
      this_00 = (this->VM_QuantityControl).field0_0x0.DebugPtr;
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar8->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_38.Object = pFVar7;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_38);
      local_80 = FFieldNotificationClassDescriptor::VM_QuantityControl.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::VM_QuantityControl.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

