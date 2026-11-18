// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 275

// ColorSettings'' @ 1413e1140

void __cdecl
`dynamic_initializer_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings__(void)

{
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.BooleanTypeColor.field0_0x0._s_0.R =
       FLinearColor::sRGBToLinearTable[FColorList::Maroon.field0_0x0._s_0.R];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.BooleanTypeColor.field0_0x0._s_0.G =
       FLinearColor::sRGBToLinearTable[FColorList::Maroon.field0_0x0._s_0.G];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.BooleanTypeColor.field0_0x0._s_0.B =
       FLinearColor::sRGBToLinearTable[FColorList::Maroon.field0_0x0._s_0.B];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.BooleanTypeColor.field0_0x0._s_0.A =
       (float)FColorList::Maroon.field0_0x0._3_1_ * __real_3b808081;
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.DefaultStructTypeColor.field0_0x0._s_0.R
       = FLinearColor::sRGBToLinearTable[FColorList::DarkSlateBlue.field0_0x0._s_0.R];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.DefaultStructTypeColor.field0_0x0._s_0.G
       = FLinearColor::sRGBToLinearTable[FColorList::DarkSlateBlue.field0_0x0._s_0.G];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.DefaultStructTypeColor.field0_0x0._s_0.B
       = FLinearColor::sRGBToLinearTable[FColorList::DarkSlateBlue.field0_0x0._s_0.B];
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.DefaultStructTypeColor.field0_0x0._s_0.A
       = (float)FColorList::DarkSlateBlue.field0_0x0._3_1_ * __real_3b808081;
  atexit(`dynamic_atexit_destructor_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings__
        );
  return;
}

// DefaultUndeterminedString'' @ 1413e1210

void __cdecl `dynamic_initializer_for_'SNumericEntryBox<float>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<float>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<float>::DefaultUndeterminedString__);
  return;
}

// HueGradientColors'' @ 1413e1240

void __cdecl
`dynamic_initializer_for_'UE::ColorGrading::SColorGradingComponentSpinBox::HueGradientColors__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::ColorGrading::SColorGradingComponentSpinBox::
         HueGradientColors__);
  return;
}

// Instance'' @ 1413e1260

void __cdecl `dynamic_initializer_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance__);
  return;
}

// TypeName'' @ 1413e1280

void __cdecl `dynamic_initializer_for_'FColorGradingSpinBoxStyle::TypeName__(void)

{
  ::FName::FName(&FColorGradingSpinBoxStyle::TypeName,L"FColorGradingSpinBoxStyle");
  return;
}

// `dynamic_initializer_for_'ClassRegistration__SColorGradingWheel'' @ 1413e12a0

void __cdecl
UE::ColorGrading::_dynamic_initializer_for__ClassRegistration__SColorGradingWheel__(void)

{
  FName *pFVar1;
  FSlateWidgetClassData *pFVar2;
  FInitializer FStackX_8;
  FName aFStackX_10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(aFStackX_10,"SColorGradingWheel");
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.WidgetType = *pFVar1;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayMax = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData =
           (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayNum = 0;
      `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.ArrayMax = 1;
      pFVar2 = SWidget::GetPrivateWidgetClass();
      FSlateAttributeDescriptor::FInitializer::FInitializer
                (&FStackX_8,
                 &`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor,&pFVar2->Descriptor);
      SColorGradingWheel::PrivateRegisterAttributes(&FStackX_8);
      FSlateAttributeDescriptor::FInitializer::~FInitializer(&FStackX_8);
      atexit(`UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass'::__l2::
             _dynamic_atexit_destructor_for__WidgetClassDataInstance__);
      _Init_thread_footer(&`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return;
    }
  }
  return;
}

// `dynamic_initializer_for_'ColumnName_Field'' @ 1413e12b0

void __cdecl UE::PropertyViewer::Private::_dynamic_initializer_for__ColumnName_Field__(void)

{
  ::FName::FName(&ColumnName_Field,"Field");
  return;
}

// `dynamic_initializer_for_'ColumnName_FieldPostWidget'' @ 1413e12d0

void __cdecl
UE::PropertyViewer::Private::_dynamic_initializer_for__ColumnName_FieldPostWidget__(void)

{
  ::FName::FName(&ColumnName_FieldPostWidget,"FieldPostWidget");
  return;
}

// `dynamic_initializer_for_'ColumnName_PropertyValue'' @ 1413e12f0

void __cdecl UE::PropertyViewer::Private::_dynamic_initializer_for__ColumnName_PropertyValue__(void)

{
  ::FName::FName(&ColumnName_PropertyValue,"FieldValue");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAdvancedWidgets'' @ 1413e1310

void __cdecl _dynamic_initializer_for__ModuleRegistrantAdvancedWidgets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AdvancedWidgets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AdvancedWidgets",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAdvancedWidgetsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_AdvancedWidgets'' @ 1413e1360

void __cdecl UE::AdvancedWidgets::Private::_dynamic_initializer_for__NAME_AdvancedWidgets__(void)

{
  ::FName::FName(&NAME_AdvancedWidgets,"AdvancedWidgets");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h__Script_AdvancedWidgets_2959539275'' @ 1413e1380

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h__Script_AdvancedWidgets_2959539275__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AdvancedWidgets",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Components_RadialSlider_h__Script_AdvancedWidgets_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h__Script_AdvancedWidgets_4254915583'' @ 1413e13c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h__Script_AdvancedWidgets_4254915583__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AdvancedWidgets",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AdvancedWidgets_Public_Styling_ColorGradingSpinBoxStyle_h__Script_AdvancedWidgets_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AdvancedWidgets'' @ 1413e1400

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AdvancedWidgets__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x65307714;
  local_res8[0].DeclarationsHash = 0x36a1c7ef;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AdvancedWidgets,L"/Script/AdvancedWidgets",
             &Z_Registration_Info_UPackage__Script_AdvancedWidgets,local_res8);
  return;
}

// Z_Construct_UPackage__Script_AdvancedWidgets @ 14d829860

UPackage * __cdecl Z_Construct_UPackage__Script_AdvancedWidgets(void)

{
  if (Z_Registration_Info_UPackage__Script_AdvancedWidgets.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AdvancedWidgets.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_AdvancedWidgets.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14d829960

void * __thiscall
FAdvancedWidgetsModule::_scalar_deleting_destructor_(FAdvancedWidgetsModule *this,uint param_1)

{
  FPropertyValueFactory *pFVar1;
  FPropertyValueFactoryImpl *pFVar2;
  
  pFVar1 = (this->PropertyValueFactory).Ptr;
  if (pFVar1 != (FPropertyValueFactory *)0x0) {
    pFVar2 = (pFVar1->Impl).Ptr;
    if (pFVar2 != (FPropertyValueFactoryImpl *)0x0) {
      (**(code **)&pFVar2[-1].RegisteredFieldEditor.field_0x40)
                (&pFVar2[-1].RegisteredFieldEditor.field_0x40);
    }
    ::operator_delete(pFVar1,8);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// NewStructOps @ 14d8299e0

void * __cdecl Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2e0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FColorGradingSpinBoxStyle,&UE::CoreUObject::Private::Construct<FColorGradingSpinBoxStyle>,&UE::CoreUObject::Private::ConstructForTests<FColorGradingSpinBoxStyle>,&UE::CoreUObject::Private::Destruct<FColorGradingSpinBoxStyle>,&UE::CoreUObject::Private::Copy<FColorGradingSpinBoxStyle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_URadialSlider @ 14d829a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_URadialSlider(void)

{
  if (Z_Registration_Info_UClass_URadialSlider.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_URadialSlider.OuterSingleton,
               &Z_Construct_UClass_URadialSlider_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_URadialSlider.OuterSingleton;
}

// Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue @ 14d829a60

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_GetCustomDefaultValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition @ 14d829aa0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_GetNormalizedSliderHandlePosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_GetValue @ 14d829ae0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_GetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URadialSlider_GetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetAngularOffset @ 14d829b20

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetAngularOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetAngularOffset_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor @ 14d829b60

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetCenterBackgroundColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue @ 14d829ba0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetCustomDefaultValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio @ 14d829be0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetHandStartEndRatio_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InValue_SetBit @ 14d829c20

void __cdecl
Z_Construct_UFunction_URadialSlider_SetLocked_Statics::NewProp_InValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URadialSlider_SetLocked @ 14d829c30

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetLocked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URadialSlider_SetLocked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InShowSliderHand_SetBit @ 14d829c70

void __cdecl
Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::NewProp_InShowSliderHand_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URadialSlider_SetShowSliderHand @ 14d829c80

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetShowSliderHand(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetShowSliderHand_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InShowSliderHandle_SetBit @ 14d829cc0

void __cdecl
Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::NewProp_InShowSliderHandle_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URadialSlider_SetShowSliderHandle @ 14d829cd0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetShowSliderHandle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetShowSliderHandle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderBarColor @ 14d829d10

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderBarColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderBarColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderHandleColor @ 14d829d50

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderHandleColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderHandleColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle @ 14d829d90

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderHandleEndAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle @ 14d829dd0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderHandleStartAngle_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderProgressColor @ 14d829e10

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderProgressColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderProgressColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetSliderRange @ 14d829e50

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetSliderRange(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetSliderRange_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetStepSize @ 14d829e90

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetStepSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URadialSlider_SetStepSize_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_InUseVerticalDrag_SetBit @ 14d829ed0

void __cdecl
Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::NewProp_InUseVerticalDrag_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag @ 14d829ee0

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_URadialSlider_SetUseVerticalDrag_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetValue @ 14d829f20

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URadialSlider_SetValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_URadialSlider_SetValueTags @ 14d829f60

UFunction * __cdecl Z_Construct_UFunction_URadialSlider_SetValueTags(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_URadialSlider_SetValueTags_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bUseCustomDefaultValue_SetBit @ 14d829fa0

void __cdecl
Z_Construct_UClass_URadialSlider_Statics::NewProp_bUseCustomDefaultValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d0) = 1;
  return;
}

// NewProp_Locked_SetBit @ 14d829fb0

void __cdecl Z_Construct_UClass_URadialSlider_Statics::NewProp_Locked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x710) = 1;
  return;
}

// NewProp_MouseUsesStep_SetBit @ 14d829fc0

void __cdecl Z_Construct_UClass_URadialSlider_Statics::NewProp_MouseUsesStep_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x711) = 1;
  return;
}

// NewProp_RequiresControllerLock_SetBit @ 14d829fd0

void __cdecl
Z_Construct_UClass_URadialSlider_Statics::NewProp_RequiresControllerLock_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x712) = 1;
  return;
}

// NewProp_IsFocusable_SetBit @ 14d829fe0

void __cdecl Z_Construct_UClass_URadialSlider_Statics::NewProp_IsFocusable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x718) = 1;
  return;
}

// NewProp_UseVerticalDrag_SetBit @ 14d829ff0

void __cdecl Z_Construct_UClass_URadialSlider_Statics::NewProp_UseVerticalDrag_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x719) = 1;
  return;
}

// NewProp_ShowSliderHandle_SetBit @ 14d82a000

void __cdecl
Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHandle_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71a) = 1;
  return;
}

// NewProp_ShowSliderHand_SetBit @ 14d82a010

void __cdecl Z_Construct_UClass_URadialSlider_Statics::NewProp_ShowSliderHand_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71b) = 1;
  return;
}

// CallConstruct<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType> @ 14d82b560

void __thiscall
RequiredArgs::
T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
::
CallConstruct<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType>
          (T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
           *this,SMultiRowType *param_1,FArguments *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  FTreeNode *pFVar6;
  TSharedRef<STableViewBase,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FPropertyViewerImpl *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  SWidget *local_38;
  FSharedReferencer<1> local_30;
  
  pTVar3 = (this->Arg3->SharedReferenceCount).ReferenceController;
  pSVar4 = this->Arg3->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->Arg2->SharedReferenceCount).ReferenceController;
  pFVar6 = this->Arg2->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = this->Arg1;
  pTVar8 = (this->Arg0->SharedReferenceCount).ReferenceController;
  pFVar9 = this->Arg0->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  (param_1->PropertyViewOwner).Object = pFVar9;
  if (pTVar8 != (param_1->PropertyViewOwner).WeakReferenceCount.ReferenceController) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (param_1->PropertyViewOwner).WeakReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar10->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
    (param_1->PropertyViewOwner).WeakReferenceCount.ReferenceController = pTVar8;
  }
  (param_1->Item).Object = pFVar6;
  if (pTVar5 != (param_1->Item).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar10 = (param_1->Item).WeakReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar10->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar10->_padding_ + 8))(pTVar10,1);
      }
    }
    (param_1->Item).WeakReferenceCount.ReferenceController = pTVar5;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pSVar4;
  local_30.ReferenceController = pTVar3;
  if (&param_1->FieldWidget != (TSharedPtr<SWidget,1> *)&local_38) {
    (param_1->FieldWidget).Object = pSVar4;
    local_38 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(param_1->FieldWidget).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::Construct
            ((SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)param_1,
             param_2,pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Cast<UClass_const_,UStruct_const_> @ 14d82b6f0

UClass * __cdecl Cast<UClass_const_,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UClass *)param_1;
    }
  }
  return (UClass *)0x0;
}

// Cast<UScriptStruct_const_,UStruct_const_> @ 14d82b740

UScriptStruct * __cdecl Cast<UScriptStruct_const_,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UStruct *)0x0) {
    pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return (UScriptStruct *)param_1;
    }
  }
  return (UScriptStruct *)0x0;
}

// CastChecked<UClass_const_,UStruct_const_> @ 14d82b790

UClass * __cdecl CastChecked<UClass_const_,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UClass_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UClass *)param_1;
  }
  pFVar3 = GetTypeName<UClass_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<UScriptStruct_const_,UStruct_const_> @ 14d82b850

UScriptStruct * __cdecl CastChecked<UScriptStruct_const_,UStruct_const_>(UStruct *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UStruct *)0x0) {
    pFVar3 = GetTypeName<UScriptStruct_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UScriptStruct_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UScriptStruct *)param_1;
  }
  pFVar3 = GetTypeName<UScriptStruct_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UStruct_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int> @ 14d82b910

void __cdecl
ConstructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>
          (void *param_1,TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FFieldVariant *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar4 + 8 + (longlong)param_1);
      pFVar3 = *(FFieldVariant **)(lVar4 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar2,0,param_1,iVar2,piVar1);
        ConstructItems<FFieldVariant,FFieldVariant,int>
                  (((ForAnyElementType *)param_1)->Data,pFVar3,iVar2);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int> @ 14d82b9c0

void __cdecl
ConstructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
          (void *param_1,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FTreeNode **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateSPLambda<UE::PropertyViewer::Private::FPropertyViewerImpl,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_> @ 14d82bee0

TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> * __cdecl
TDelegate<enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>::
CreateSPLambda<UE::PropertyViewer::Private::FPropertyViewerImpl,_UE::PropertyViewer::Private::FPropertyViewerImpl::Construct_::__l14::<lambda_1>_>
          (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
           *__return_storage_ptr__,FPropertyViewerImpl *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  int *piVar3;
  atomic<int> aVar4;
  int iVar5;
  code *pcVar6;
  atomic<int> aVar7;
  undefined8 *puVar8;
  FPropertyViewerImpl *pFVar9;
  TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy> *pTVar10;
  ulong64 uVar11;
  TReferenceControllerBase<1> *pTVar12;
  FPropertyViewerImpl *pFVar13;
  FPropertyViewerImpl *pFVar14;
  bool bVar15;
  uint uStackX_c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  pFVar13 = (FPropertyViewerImpl *)0x0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_48);
  local_30 = puVar1;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)puVar1);
  if (puVar8 == (undefined8 *)0x0) {
    pTVar12 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pFVar14 = (FPropertyViewerImpl *)((ulonglong)uStackX_c << 0x20);
    pFVar9 = pFVar13;
  }
  else {
    pTVar12 = (TReferenceControllerBase<1> *)param_1->_padding_;
    pFVar14 = (FPropertyViewerImpl *)param_1->_padding_;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
      aVar4 = pTVar12->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          goto LAB_14d82bf95;
        }
        LOCK();
        aVar7 = pTVar12->SharedReferenceCount;
        bVar15 = aVar4 == aVar7;
        if (bVar15) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar15);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    pFVar9 = pFVar14;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      pFVar9 = pFVar13;
    }
    if (pFVar9 != param_1) {
LAB_14d82bf95:
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result.Pin().Get() == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x6c3,L"");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        pTVar10 = (TDelegate<EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy>
                   *)(*pcVar6)();
        return pTVar10;
      }
    }
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AW4EActiveTimerReturnType__NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar11;
    *puVar8 = &TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::`14'::<lambda_1>_>
               ::_vftable_;
    puVar8[3] = pFVar14;
    puVar8[4] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar8[5] = param_2->__this;
    pFVar9 = (FPropertyViewerImpl *)&DAT_00000003;
    pFVar14 = pFVar13;
  }
  if ((((ulonglong)pFVar9 & 2) != 0) &&
     (pFVar9 = (FPropertyViewerImpl *)(ulonglong)((uint)pFVar9 & 0xfffffffd),
     pTVar12 != (TReferenceControllerBase<1> *)0x0)) {
    LOCK();
    paVar2 = &pTVar12->WeakReferenceCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 == (atomic<int>)0x1) {
      (**(code **)(pTVar12->_padding_ + 8))(pTVar12,1);
    }
  }
  if ((((ulonglong)pFVar9 & 1) != 0) && (pFVar14 != (FPropertyViewerImpl *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)&pFVar14->_padding_ + 4);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(pFVar14->_padding_ + 8))(pFVar14,1);
    }
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return __return_storage_ptr__;
}

// DestructItems<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,int> @ 14d82c3e0

void __cdecl
DestructItems<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,int>
          (TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_> *param_1,int param_2)

{
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->field_0x40;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this + -2);
      if (*(void **)&this[-2].field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this[-2].field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)(this + -2));
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[3].field_0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::PropertyViewer::Private::FTreeNode::FNodeReference,int> @ 14d82c460

void __cdecl
DestructItems<UE::PropertyViewer::Private::FTreeNode::FNodeReference,int>
          (FNodeReference *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &(param_1->Node).WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int> @ 14d82c4b0

void __cdecl
DestructItems<TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,int>
          (TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int> @ 14d82c4f0

void __cdecl
DestructItems<TSharedPtr<UE::PropertyViewer::Private::FContainer,1>,int>
          (TSharedPtr<UE::PropertyViewer::Private::FContainer,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int> @ 14d82c530

void __cdecl
DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<UE::PropertyViewer::Private::FTreeNode_const_,1> @ 14d82dac0

uint __cdecl
GetTypeHash<UE::PropertyViewer::Private::FTreeNode_const_,1>
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeName<UClass_const_> @ 14d82daf0

FString * __cdecl GetTypeName<UClass_const_>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UClass_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_> @ 14d82db30

void __cdecl
AlgoImpl::
HeapSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_>
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>
          param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FTreeNode *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar18;
  int iVar19;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar20;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar21;
  
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar12) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar13 = (param_2 + -2) / 2;
  iVar14 = iVar13 * 2 + 1;
  iVar19 = iVar14;
  iVar16 = iVar13;
  do {
    while (param_2 <= iVar14) {
LAB_14d82dc4b:
      if (iVar16 == 0) {
        iVar14 = param_2 + -1;
        lVar17 = (longlong)iVar14;
        if (0 < iVar14) {
          pTVar18 = param_1 + lVar17;
          do {
            uVar2 = *(undefined4 *)((longlong)&pTVar18->Object + 4);
            uVar3 = *(undefined4 *)&(pTVar18->SharedReferenceCount).ReferenceController;
            uVar4 = *(undefined4 *)
                     ((longlong)&(pTVar18->SharedReferenceCount).ReferenceController + 4);
            uVar5 = *(undefined4 *)&param_1->Object;
            uVar6 = *(undefined4 *)((longlong)&param_1->Object + 4);
            uVar7 = *(undefined4 *)&(param_1->SharedReferenceCount).ReferenceController;
            uVar8 = *(undefined4 *)
                     ((longlong)&(param_1->SharedReferenceCount).ReferenceController + 4);
            *(undefined4 *)&param_1->Object = *(undefined4 *)&pTVar18->Object;
            *(undefined4 *)((longlong)&param_1->Object + 4) = uVar2;
            *(undefined4 *)&(param_1->SharedReferenceCount).ReferenceController = uVar3;
            *(undefined4 *)((longlong)&(param_1->SharedReferenceCount).ReferenceController + 4) =
                 uVar4;
            *(undefined4 *)&pTVar18->Object = uVar5;
            *(undefined4 *)((longlong)&pTVar18->Object + 4) = uVar6;
            *(undefined4 *)&(pTVar18->SharedReferenceCount).ReferenceController = uVar7;
            *(undefined4 *)((longlong)&(pTVar18->SharedReferenceCount).ReferenceController + 4) =
                 uVar8;
            iVar19 = 0;
            if (1 < iVar14) {
              do {
                iVar16 = iVar19 * 2;
                iVar13 = iVar16 + 1;
                if (iVar16 + 2 < iVar14) {
                  bVar12 = (*param_4.Predicate)(param_1 + (iVar16 + 2),param_1 + iVar13);
                  if (bVar12) {
                    iVar13 = iVar16;
                  }
                  iVar13 = iVar13 + 1;
                }
                pTVar20 = param_1 + iVar13;
                pTVar21 = param_1 + iVar19;
                bVar12 = (*param_4.Predicate)(pTVar21,pTVar20);
                if (!bVar12) break;
                uVar2 = *(undefined4 *)&pTVar21->Object;
                uVar3 = *(undefined4 *)((longlong)&pTVar21->Object + 4);
                uVar4 = *(undefined4 *)&(pTVar21->SharedReferenceCount).ReferenceController;
                uVar5 = *(undefined4 *)
                         ((longlong)&(pTVar21->SharedReferenceCount).ReferenceController + 4);
                uVar6 = *(undefined4 *)((longlong)&pTVar20->Object + 4);
                uVar7 = *(undefined4 *)&(pTVar20->SharedReferenceCount).ReferenceController;
                uVar8 = *(undefined4 *)
                         ((longlong)&(pTVar20->SharedReferenceCount).ReferenceController + 4);
                *(undefined4 *)&pTVar21->Object = *(undefined4 *)&pTVar20->Object;
                *(undefined4 *)((longlong)&pTVar21->Object + 4) = uVar6;
                *(undefined4 *)&(pTVar21->SharedReferenceCount).ReferenceController = uVar7;
                *(undefined4 *)((longlong)&(pTVar21->SharedReferenceCount).ReferenceController + 4)
                     = uVar8;
                *(undefined4 *)&pTVar20->Object = uVar2;
                *(undefined4 *)((longlong)&pTVar20->Object + 4) = uVar3;
                *(undefined4 *)&(pTVar20->SharedReferenceCount).ReferenceController = uVar4;
                *(undefined4 *)((longlong)&(pTVar20->SharedReferenceCount).ReferenceController + 4)
                     = uVar5;
                iVar19 = iVar13;
              } while (iVar13 * 2 + 1 < iVar14);
            }
            iVar14 = iVar14 + -1;
            lVar17 = lVar17 + -1;
            pTVar18 = pTVar18 + -1;
          } while (0 < lVar17);
        }
        return;
      }
      iVar13 = iVar16 + -1;
      iVar14 = iVar19 + -2;
      iVar19 = iVar14;
      iVar16 = iVar13;
    }
    iVar14 = iVar13 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      bVar12 = (*param_4.Predicate)(param_1 + (iVar14 + 2),param_1 + iVar15);
      if (bVar12) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar18 = param_1 + iVar15;
    pTVar20 = param_1 + iVar13;
    bVar12 = (*param_4.Predicate)(pTVar20,pTVar18);
    if (!bVar12) goto LAB_14d82dc4b;
    pFVar9 = pTVar20->Object;
    pTVar10 = (pTVar20->SharedReferenceCount).ReferenceController;
    iVar14 = iVar15 * 2 + 1;
    pTVar11 = (pTVar18->SharedReferenceCount).ReferenceController;
    pTVar20->Object = pTVar18->Object;
    (pTVar20->SharedReferenceCount).ReferenceController = pTVar11;
    pTVar18->Object = pFVar9;
    (pTVar18->SharedReferenceCount).ReferenceController = pTVar10;
    iVar13 = iVar15;
  } while( true );
}

// InternalConstructor<URadialSlider> @ 14d82dd50

void __cdecl InternalConstructor<URadialSlider>(FObjectInitializer *param_1)

{
  if ((URadialSlider *)param_1->Obj != (URadialSlider *)0x0) {
    URadialSlider::URadialSlider((URadialSlider *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalVTableHelperCtorCaller<URadialSlider> @ 14d82dd70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<URadialSlider>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWidget *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = URadialSlider::GetPrivateStaticClass();
  this = (UWidget *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWidget *)0x0) {
    UWidget::UWidget(this,param_1);
    this->_padding_ = (longlong)&URadialSlider::_vftable__for__UVisual__;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&URadialSlider::_vftable__for__INotifyFieldValueChanged__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FRuntimeFloatCurve::FRuntimeFloatCurve((FRuntimeFloatCurve *)&this[1]._padding_);
    this[1].RenderTransform.Translation.field0_0x0._s_0.X = 0.0;
    this[1].RenderTransform.Translation.field0_0x0._s_0.Y = 0.0;
    FSliderStyle::FSliderStyle((FSliderStyle *)&this[1].RenderTransform.Angle);
    *(undefined8 *)&this[4].ToolTipTextDelegate.field_0x10 = 0;
    this[4].ToolTipText.TextData.Reference = (ITextData *)0x0;
    *(undefined8 *)&this[4].ToolTipText.Flags = 0;
    this[4].ToolTipWidget.field0_0x0.DebugPtr = (UWidget *)0x0;
    *(undefined8 *)&this[4].ToolTipWidgetDelegate = 0;
    *(undefined8 *)&this[4].ToolTipWidgetDelegate.field_0x8 = 0;
    *(undefined8 *)&this[4].ToolTipWidgetDelegate.field_0x10 = 0;
    *(undefined8 *)&this[4].VisibilityDelegate = 0;
    *(undefined8 *)&this[4].VisibilityDelegate.field_0x8 = 0;
    *(undefined8 *)&this[4].VisibilityDelegate.field_0x10 = 0;
    this[4].RenderTransform.Translation.field0_0x0._s_0.X = 0.0;
    this[4].RenderTransform.Translation.field0_0x0._s_0.Y = 0.0;
    this[4].RenderTransform.Scale.field0_0x0._s_0.X = 0.0;
    this[4].RenderTransform.Scale.field0_0x0._s_0.Y = 0.0;
    this[4].RenderTransform.Shear.field0_0x0._s_0.X = 0.0;
    this[4].RenderTransform.Shear.field0_0x0._s_0.Y = 0.0;
    *(undefined8 *)&this[4].RenderTransform.Angle = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_> @ 14d82dee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_>
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,int param_2,
          FIdentityFunctor param_3,
          TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>
          param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  FTreeNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar6;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar7;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar8;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> **ppTVar9;
  int iVar10;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar11;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar12;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar13;
  float fVar14;
  undefined1 auStack_388 [48];
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_358;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_348;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar14;
    memset(local_330,0,0x2e8);
    ppTVar9 = &local_348;
    do {
      pTVar13 = ppTVar9[1];
      pTVar12 = *ppTVar9;
      local_358 = ppTVar9[2];
      iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
      pTVar11 = pTVar12;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14d82dfa0:
        if (8 < iVar5) {
          pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar6 = pTVar13 + 1;
          pFVar2 = pTVar11[iVar5 / 2].Object;
          pTVar3 = pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController;
          pTVar11[iVar5 / 2].Object = pTVar11->Object;
          pTVar11[iVar5 / 2].SharedReferenceCount.ReferenceController = pTVar1;
          pTVar11->Object = pFVar2;
          (pTVar11->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar12 = pTVar11;
LAB_14d82dfd0:
          pTVar8 = pTVar12;
          pTVar12 = pTVar8 + 1;
          if (pTVar12 <= pTVar13) goto code_r0x00014d82dfd9;
          goto LAB_14d82dfe5;
        }
        for (; pTVar6 = pTVar11, pTVar12 = pTVar11, pTVar11 < pTVar13; pTVar13 = pTVar13 + -1) {
          while (pTVar8 = pTVar6, pTVar12 = pTVar12 + 1, pTVar12 <= pTVar13) {
            bVar4 = (*param_4.Predicate)(pTVar8,pTVar12);
            pTVar6 = pTVar12;
            if (!bVar4) {
              pTVar6 = pTVar8;
            }
          }
          pFVar2 = pTVar8->Object;
          pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
          pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
          pTVar8->Object = pTVar13->Object;
          (pTVar8->SharedReferenceCount).ReferenceController = pTVar3;
          pTVar13->Object = pFVar2;
          (pTVar13->SharedReferenceCount).ReferenceController = pTVar1;
        }
        goto LAB_14d82e0ae;
      }
LAB_14d82e09d:
      HeapSortInternal<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,bool___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&)>_>
                (pTVar12,iVar5,param_3,param_4);
LAB_14d82e0ae:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_348 <= ppTVar9);
  }
  return;
code_r0x00014d82dfd9:
  bVar4 = (*param_4.Predicate)(pTVar11,pTVar12);
  if (!bVar4) goto LAB_14d82dfd0;
LAB_14d82dfe5:
  do {
    pTVar7 = pTVar6;
    pTVar6 = pTVar7 + -1;
    if (pTVar6 <= pTVar11) break;
    bVar4 = (*param_4.Predicate)(pTVar6,pTVar11);
  } while (!bVar4);
  pTVar1 = pTVar7[-1].SharedReferenceCount.ReferenceController;
  if (pTVar12 <= pTVar6) {
    pFVar2 = pTVar12->Object;
    pTVar3 = pTVar8[1].SharedReferenceCount.ReferenceController;
    pTVar12->Object = pTVar6->Object;
    pTVar8[1].SharedReferenceCount.ReferenceController = pTVar1;
    pTVar6->Object = pFVar2;
    pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
    goto LAB_14d82dfd0;
  }
  pFVar2 = pTVar11->Object;
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  iVar10 = iVar10 + -1;
  pTVar11->Object = pTVar6->Object;
  (pTVar11->SharedReferenceCount).ReferenceController = pTVar1;
  pTVar6->Object = pFVar2;
  pTVar7[-1].SharedReferenceCount.ReferenceController = pTVar3;
  if ((longlong)((longlong)pTVar6 + (-0x10 - (longlong)pTVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar13 - (longlong)pTVar12 & 0xfffffffffffffff0U)) {
    if (pTVar12 < pTVar13) {
      *ppTVar9 = pTVar12;
      ppTVar9[1] = pTVar13;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar6 <= pTVar11 + 1) goto LAB_14d82e0ae;
    pTVar13 = pTVar7 + -2;
    pTVar12 = pTVar11;
  }
  else {
    if (pTVar11 + 1 < pTVar6) {
      *ppTVar9 = pTVar11;
      ppTVar9[1] = pTVar7 + -2;
      *(int *)(ppTVar9 + 2) = iVar10;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar13 <= pTVar12) goto LAB_14d82e0ae;
  }
  iVar5 = (int)((longlong)pTVar13 - (longlong)pTVar12 >> 4) + 1;
  pTVar11 = pTVar12;
  if (iVar10 == 0) goto LAB_14d82e09d;
  goto LAB_14d82dfa0;
}

// MakeRequiredArgs<FProperty_*_&> @ 14d82e170

T1RequiredArgs<FProperty_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<FProperty_*_&>(FProperty **param_1)

{
  FProperty *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<FProperty_*_&>)param_1;
}

// MakeRequiredArgs<UFunction_*_&> @ 14d82e180

T1RequiredArgs<UFunction_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<UFunction_*_&>(UFunction **param_1)

{
  UFunction *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<UFunction_*_&>)param_1;
}

// MakeRequiredArgs<FProperty_const_*_&> @ 14d82e190

T1RequiredArgs<FProperty_const_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<FProperty_const_*_&>(FProperty **param_1)

{
  FProperty *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<FProperty_const_*_&>)param_1;
}

// MakeRequiredArgs<UClass_const_*_&> @ 14d82e1a0

T1RequiredArgs<UClass_const_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<UClass_const_*_&>(UClass **param_1)

{
  UClass *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<UClass_const_*_&>)param_1;
}

// MakeRequiredArgs<UFunction_const_*_&> @ 14d82e1b0

T1RequiredArgs<UFunction_const_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<UFunction_const_*_&>(UFunction **param_1)

{
  UFunction *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<UFunction_const_*_&>)param_1;
}

// MakeRequiredArgs<UScriptStruct_const_*_&> @ 14d82e1c0

T1RequiredArgs<UScriptStruct_const_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<UScriptStruct_const_*_&>(UScriptStruct **param_1)

{
  UScriptStruct *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<UScriptStruct_const_*_&>)param_1;
}

// MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>,int_&,int_&> @ 14d82e1d0

T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>,int_&,int_&>
                    (T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>
                     *__return_storage_ptr__,TSharedPtr<ITableRow,1> *param_1,
                    TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                    *param_2,int *param_3,int *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&> @ 14d82e1f0

T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>
                  (TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                   *param_1)

{
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>
          )param_1;
}

// MakeRequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_> @ 14d82e200

T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>
 __cdecl RequiredArgs::
         MakeRequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_>
                   (TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>
                    *param_1)

{
  FScriptContainerElement *in_RDX;
  
  (param_1->AllocatorInstance).Data = in_RDX;
  return (T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_> @ 14d82e210

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_>
                  (TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                   *param_1)

{
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_> @ 14d82e220

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
__cdecl RequiredArgs::
        MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_>
                  (TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                   *param_1)

{
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
          )param_1;
}

// MakeRequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<SWidget,1>_&> @ 14d82e230

T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
* __cdecl RequiredArgs::
          MakeRequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<SWidget,1>_&>
                    (T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
                     *__return_storage_ptr__,
                    TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *param_1,
                    TSharedRef<STableViewBase,1> *param_2,
                    TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *param_3,
                    TSharedRef<SWidget,1> *param_4)

{
  __return_storage_ptr__->Arg3 = param_4;
  __return_storage_ptr__->Arg0 = param_1;
  __return_storage_ptr__->Arg1 = param_2;
  __return_storage_ptr__->Arg2 = param_3;
  return __return_storage_ptr__;
}

// MakeShared<UE::PropertyViewer::Private::FTreeNode,1> @ 14d82e250

TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> * __cdecl
MakeShared<UE::PropertyViewer::Private::FTreeNode,1>
          (TSharedRef<UE::PropertyViewer::Private::FTreeNode,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = operator_new(0xa8);
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    pTVar1 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFTreeNode_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[4]._padding_ = 0;
    pTVar1[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[5]._padding_ = 0;
    pTVar1[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[6]._padding_ = 0;
    pTVar1[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[7]._padding_ = 0;
    pTVar1[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[8]._padding_ = 0;
    pTVar1[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[9]._padding_ = 0;
    pTVar1[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[10]._padding_ = 0;
    pTVar1[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[7]._padding_ = 0;
    pTVar1[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[9]._padding_ = 0;
    pTVar1[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[9].WeakReferenceCount = (atomic<int>)0x1;
    *(undefined1 *)&pTVar1[10]._padding_ = 0;
  }
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>::
  TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>
            (__return_storage_ptr__,(FTreeNode *)(pTVar1 + 1),pTVar1);
  return __return_storage_ptr__;
}

// MakeTDecl<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_> @ 14d82e310

TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
* __cdecl MakeTDecl<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
                    (TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
  *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
  local_48;
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SMultiRowType *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x498);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::`2'::SMultiRowType,1>
          ::_vftable_;
    memset(pTVar3 + 1,0,0x488);
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
              ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1));
    pTVar3[0x40].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x40].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41]._padding_ = 0;
    pTVar3[0x41].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x41].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x42]._padding_ = 0;
    pTVar3[0x43].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x43].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x44]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[0x44]._padding_ + 4) = 0x80;
    pTVar3[0x44].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar3[0x44].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x45].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[0x46]._padding_ = 0;
    pTVar3[1]._padding_ =
         (longlong)
         &`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::`2'::SMultiRowType
          ::_vftable_;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::`2'::SMultiRowType
          ::_vftable_;
    pTVar3[0x46].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x46].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47]._padding_ = 0;
    pTVar3[0x47].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x47].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48]._padding_ = 0;
    pTVar3[0x48].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x48].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x49]._padding_ = 0;
    pTVar5 = pTVar3;
  }
  TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>
  ::
  TSharedRef<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,1>
            (&local_48._RequiredArgs,(SMultiRowType *)(pTVar5 + 1),pTVar5);
  local_48._Widget.Object = (SMultiRowType *)local_48._RequiredArgs;
  local_48._Widget.SharedReferenceCount.ReferenceController = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ != &local_48) {
    (__return_storage_ptr__->_Widget).Object = (SMultiRowType *)local_48._RequiredArgs;
    local_48._Widget.Object = (SMultiRowType *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               &local_48._Widget.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if (((__return_storage_ptr__->_Widget).Object == (SMultiRowType *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSlateDecl<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,RequiredArgs::T4RequiredArgs<TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1>_&&,TSharedRef<STableViewBase,1>_const_&,TSharedRef<UE::PropertyViewer::Private::FTreeNode,1>_&&,TSharedRef<SWidget,1>_&>_>
              *)(*pcVar1)();
    return pTVar4;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x488);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> @ 14d82e560

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> @ 14d82e610

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_> @ 14d82e6c0

TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
              ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1),pTVar3
            );
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_> @ 14d82e870

TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
              ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1),pTVar3
            );
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14d82ea20

TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
    STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
              ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)
             (local_38 + 0x10),
             (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)(pTVar3 + 1),pTVar3
            );
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs> @ 14d82ebd0

TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
* __cdecl MakeTDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
                    (TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
  ::
  TSlateDecl<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d82ec80

TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SBoolPropertyValue,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs> @ 14d82ed30

TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::ColorGrading::SColorGradingComponentSpinBox,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> @ 14d82ede0

TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::ColorGrading::SColorGradingWheel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d82ee90

TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SDefaultPropertyValue,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d82ef40

TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SEnumPropertyValue,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_> @ 14d82eff0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_> @ 14d82f0a0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_> *
__cdecl MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
                  (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<FProperty_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<FProperty_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> @ 14d82f150

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> * __cdecl
MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UClass_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_> @ 14d82f200

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_> *
__cdecl MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
                  (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<UFunction_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UFunction_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> @ 14d82f2b0

TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> *
__cdecl MakeTDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                  (TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<UScriptStruct_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  ::
  TSlateDecl<UE::PropertyViewer::SFieldIcon,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> @ 14d82f360

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_> * __cdecl
MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<FProperty_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<FProperty_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> @ 14d82f410

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_> * __cdecl
MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UFunction_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UFunction_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> @ 14d82f4c0

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_> * __cdecl
MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
          (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<UClass_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>::
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UClass_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> @ 14d82f570

TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_> *
__cdecl MakeTDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                  (TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T1RequiredArgs<UScriptStruct_const_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
  ::
  TSlateDecl<UE::PropertyViewer::SFieldName,RequiredArgs::T1RequiredArgs<UScriptStruct_const_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_> @ 14d82f620

TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
* __cdecl MakeTDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
                    (TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
  ::
  TSlateDecl<SLayeredImage,RequiredArgs::T1RequiredArgs<TArray<TTuple<TAttribute<FSlateBrush_const_*>,TAttribute<FSlateColor>_>,TSizedDefaultAllocator<32>_>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_> @ 14d82f6d0

TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
* __cdecl MakeTDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
                    (TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
  ::
  TSlateDecl<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,RequiredArgs::T4RequiredArgs<TSharedPtr<ITableRow,1>_&,TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>_&&,int_&,int_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d82f780

TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> @ 14d82f830

TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRadialSlider,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> @ 14d82f8e0

TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SStringPropertyValue,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,UE::PropertyViewer::Private::FContainer,UE::PropertyViewer::SPropertyViewer::FHandle_&,TOptional<FText>_&,UObject_*_&> @ 14d82f990

TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,UE::PropertyViewer::Private::FContainer,UE::PropertyViewer::SPropertyViewer::FHandle_&,TOptional<FText>_&,UObject_*_&>
          (FHandle *param_1,TOptional<FText> *param_2,UObject **param_3)

{
  uchar *puVar1;
  longlong *plVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *pTVar5;
  longlong *plVar6;
  uint local_res20 [2];
  UObject *local_38 [2];
  
  pTVar5 = ::operator_new(0x48);
  if (pTVar5 == (TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)0x0) {
    return (TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *)0x0;
  }
  *(undefined4 *)&pTVar5->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar5->_padding_ + 4) = 1;
  pTVar5->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_UFContainer_Private_PropertyViewer_UE___00_SharedPointerInternals__6B_
  ;
  plVar2 = *(longlong **)&param_2->field0_0x0;
  pUVar3 = *param_3;
  local_res20[0] = 0;
  plVar6 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res20);
    local_res20[0] = (param_2->field0_0x0).TypedValue.Flags;
    plVar6 = plVar2;
  }
  *(int *)(pTVar5->ObjectStorage).Pad = param_1->Id;
  pUVar4 = *(UObject **)&pUVar3->field_0x10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  (pTVar5->ObjectStorage).Pad[4] = '\0';
  (pTVar5->ObjectStorage).Pad[5] = '\0';
  (pTVar5->ObjectStorage).Pad[6] = '\0';
  (pTVar5->ObjectStorage).Pad[7] = '\0';
  (pTVar5->ObjectStorage).Pad[8] = '\0';
  (pTVar5->ObjectStorage).Pad[9] = '\0';
  (pTVar5->ObjectStorage).Pad[10] = '\0';
  (pTVar5->ObjectStorage).Pad[0xb] = '\0';
  local_38[0] = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((pTVar5->ObjectStorage).Pad + 4),(FObjectPtr)local_38);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (pTVar5->ObjectStorage).Pad[0xc] = '\0';
  (pTVar5->ObjectStorage).Pad[0xd] = '\0';
  (pTVar5->ObjectStorage).Pad[0xe] = '\0';
  (pTVar5->ObjectStorage).Pad[0xf] = '\0';
  (pTVar5->ObjectStorage).Pad[0x10] = '\0';
  (pTVar5->ObjectStorage).Pad[0x11] = '\0';
  (pTVar5->ObjectStorage).Pad[0x12] = '\0';
  (pTVar5->ObjectStorage).Pad[0x13] = '\0';
  local_38[0] = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  puVar1 = (pTVar5->ObjectStorage).Pad + 0x20;
  FWeakObjectPtr::operator=
            ((FWeakObjectPtr *)((pTVar5->ObjectStorage).Pad + 0xc),(FObjectPtr)local_38);
  (pTVar5->ObjectStorage).Pad[0x18] = '\0';
  (pTVar5->ObjectStorage).Pad[0x19] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1a] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1b] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1c] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1d] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1e] = '\0';
  (pTVar5->ObjectStorage).Pad[0x1f] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar5->ObjectStorage).Pad[0x28] = '\0';
  (pTVar5->ObjectStorage).Pad[0x29] = '\0';
  (pTVar5->ObjectStorage).Pad[0x2a] = '\0';
  (pTVar5->ObjectStorage).Pad[0x2b] = '\0';
  if (plVar6 != (longlong *)0x0) {
    *(longlong **)puVar1 = plVar6;
    (**(code **)(*plVar6 + 8))(plVar6,local_38);
    *(uint *)((pTVar5->ObjectStorage).Pad + 0x28) = local_res20[0];
    (pTVar5->ObjectStorage).Pad[0x30] = '\x01';
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return pTVar5;
  }
  (pTVar5->ObjectStorage).Pad[0x30] = '\x01';
  return pTVar5;
}

// NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_> @ 14d82fb20

TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *
__cdecl SharedPointerInternals::
        NewIntrusiveReferenceController<1,STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>
                  (void)

{
  uchar *puVar1;
  longlong *plVar2;
  char cVar3;
  TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
  *pTVar4;
  undefined8 *local_res8;
  
  pTVar4 = ::operator_new(0xb10);
  if (pTVar4 == (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                 *)0x0) {
    return (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
            *)0x0;
  }
  *(undefined4 *)&pTVar4->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar4->_padding_ + 4) = 1;
  pTVar4->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_V__STreeView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00_SharedPointerInternals__6B_
  ;
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &pTVar4->ObjectStorage,Tree);
  puVar1 = (pTVar4->ObjectStorage).Pad + 0xa98;
  *(undefined ***)(pTVar4->ObjectStorage).Pad =
       &STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
        _vftable__for__SCompoundWidget__;
  (pTVar4->ObjectStorage).Pad[0xa00] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa01] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa02] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa03] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa04] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa05] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa06] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa07] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa08] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa09] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa0f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa10] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa11] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa12] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa13] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa18] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa19] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa1f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa20] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa21] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa22] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa23] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa24] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa25] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa26] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa27] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa28] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa29] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa2b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa38] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa39] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa3f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa40] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa41] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa42] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa43] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa44] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa45] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa46] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa47] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa58] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa59] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa5f] = '\0';
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x2a8) =
       &STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
        _vftable__for__IScrollableWidget__;
  *(undefined ***)((pTVar4->ObjectStorage).Pad + 0x588) =
       &___7__STreeView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_;
  (pTVar4->ObjectStorage).Pad[0xa60] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa61] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa62] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa63] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa64] = 0x80;
  (pTVar4->ObjectStorage).Pad[0xa65] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa66] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa67] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa68] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa69] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6a] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6b] = 0xff;
  (pTVar4->ObjectStorage).Pad[0xa6c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa6f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa78] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa79] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa7f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa80] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa81] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa82] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa83] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa88] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa89] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8a] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8b] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8c] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8d] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8e] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa8f] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa90] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa91] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa92] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa93] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa94] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa95] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa96] = '\0';
  (pTVar4->ObjectStorage).Pad[0xa97] = '\0';
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaa9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaa] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaab] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaac] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaad] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaae] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaaf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xab9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaba] = '\0';
  (pTVar4->ObjectStorage).Pad[0xabb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xac9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaca] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacc] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacd] = '\0';
  (pTVar4->ObjectStorage).Pad[0xace] = '\0';
  (pTVar4->ObjectStorage).Pad[0xacf] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad0] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xad1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xad9] = '\x01';
  (pTVar4->ObjectStorage).Pad[0xaf0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaf7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae0] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae1] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae2] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae3] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae4] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae5] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae6] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae7] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae8] = '\0';
  (pTVar4->ObjectStorage).Pad[0xae9] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaea] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaeb] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaec] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaed] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaee] = '\0';
  (pTVar4->ObjectStorage).Pad[0xaef] = '\0';
  if (puVar1 == (uchar *)0x0) {
    `SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SetItemsSource'::__l2::
    <lambda_1>::operator()(&local_res8);
  }
  plVar2 = *(longlong **)((pTVar4->ObjectStorage).Pad + 0x9f8);
  if ((plVar2 != (longlong *)0x0) &&
     (cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,puVar1), cVar3 != '\0')) {
    return pTVar4;
  }
  if (puVar1 == (uchar *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8 = ::operator_new(0x10);
    if (local_res8 == (undefined8 *)0x0) {
      local_res8 = (undefined8 *)0x0;
    }
    else {
      local_res8[1] = puVar1;
      *local_res8 = &
                    ___7__FArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE__6B_
      ;
    }
  }
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SetItemsSource
            ((SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
             &pTVar4->ObjectStorage,
             (IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)&local_res8);
  return pTVar4;
}

// Reverse<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> @ 14d8308d0

void __cdecl
AlgoImpl::Reverse<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FTreeNode *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// SetWidgetAttribute<TOptional<float>,TOptional<float>_> @ 14d830ae0

bool __cdecl
SetWidgetAttribute<TOptional<float>,TOptional<float>_>
          (SWidget *param_1,TAttribute<TOptional<float>_> *param_2,
          TAttribute<TOptional<float>_> *param_3,EInvalidateWidgetReason param_4)

{
  bool bVar1;
  bool bVar2;
  EInvalidateWidgetReason EVar3;
  
  bVar1 = TAttribute<TOptional<float>_>::IdenticalTo(param_2,param_3);
  if (!bVar1) {
    bVar1 = TAttribute<TOptional<float>_>::IsBound(param_2);
    bVar2 = TAttribute<TOptional<float>_>::IsBound(param_3);
    if (param_3 != param_2) {
      if ((param_3->Value).bIsSet == false) {
        if ((param_2->Value).bIsSet != false) {
          (param_2->Value).bIsSet = false;
        }
      }
      else {
        (param_2->Value).TypedValue = (param_3->Value).TypedValue;
        (param_2->Value).bIsSet = true;
      }
    }
    param_2->bIsSet = param_3->bIsSet;
    TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&param_2->Getter,&param_3->Getter);
    EVar3 = param_4 | PaintAndVolatility;
    if (bVar1 == bVar2) {
      EVar3 = param_4;
    }
    SWidget::Invalidate(param_1,EVar3);
    return true;
  }
  return false;
}

// TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1> @ 14d831670

TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>
* __thiscall
TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>
::
TSharedRef<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,1>
          (void *this,SMultiRowType *param_1,TReferenceControllerBase<1> *param_2)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>
  *pTVar7;
  
  *(SMultiRowType **)this = param_1;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = param_2;
  if (param_1 == (SMultiRowType *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar7 = (TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>
                *)(*pcVar5)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&param_1->_padding_ == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>
                  *)(*pcVar5)();
        return pTVar7;
      }
    }
    param_1->_padding_ = (longlong)&param_1->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)param_1->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return this;
}

// TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>_&&>_> @ 14d8328e0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>_>
* __thiscall
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>_&&>_>
::
TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow_::__l2::SMultiRowType,1>_&&>_>
          (void *this,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>
          *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *local_28;
  FSharedReferencer<1> local_20;
  
  *(T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>
    **)((longlong)this + 0x10) = param_4;
  *(undefined8 *)this = 0;
  *(undefined8 *)((longlong)this + 8) = 0;
  pTVar7 = ::operator_new(0x2f0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSExpanderArrow___00_SharedPointerInternals__6B_;
    SExpanderArrow::SExpanderArrow((SExpanderArrow *)(pTVar7 + 1));
    pTVar9 = pTVar7 + 1;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>_>
                  *)(*pcVar5)();
        return pTVar8;
      }
      goto LAB_14d8329ff;
    }
  }
  lVar3._0_4_ = pTVar9->SharedReferenceCount;
  lVar3._4_4_ = pTVar9->WeakReferenceCount;
  if (((lVar3 == 0) || (pTVar9[1]._padding_ == 0)) || (*(int *)(pTVar9[1]._padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar9->SharedReferenceCount = pTVar9;
    if (pTVar7 != (TReferenceControllerBase<1> *)pTVar9[1]._padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = (longlong *)pTVar9[1]._padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pTVar9[1]._padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_14d8329ff:
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = pTVar9;
  local_20.ReferenceController = pTVar7;
  if (this != &local_28) {
    *(TReferenceControllerBase<1> **)this = pTVar9;
    local_28 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)this + 8),&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<_private:_class_TSharedRef<ITableRow,1>___cdecl_UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&)_::_2_::SMultiRowType,1>_&&>_>
                *)(*pcVar5)();
      return pTVar8;
    }
  }
  SWidget::SetDebugInfo(*(SWidget **)this,param_1,param_2,param_3,0x2e0);
  return this;
}

// ~TFunction_OwnedObject<`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0> @ 14d838880

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::Construct_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> @ 14d838d90

void __thiscall
TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
~TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
          (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->PrefilterExpandedItems).HashSize = 0;
  FVar1 = (this->PrefilterExpandedItems).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PrefilterExpandedItems).Elements);
  (this->ItemsPassingFilter).HashSize = 0;
  FVar1 = (this->ItemsPassingFilter).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ItemsPassingFilter).Elements);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetChildrenDelegate);
  pvVar2 = *(void **)&(this->GetChildrenDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetChildrenDelegate);
  return;
}

// `vcall'{152,{flat}}'_}' @ 14d83e778

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct UE::PropertyViewer::Private::FTreeNode,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d83e77b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d83e788

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   UE::PropertyViewer::Private::FTreeNode,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d83e79c

/* [thunk]:public: virtual void * __ptr64 __cdecl SMultiColumnTableRow<class TSharedPtr<struct
   UE::PropertyViewer::Private::FTreeNode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned
   int) __ptr64 */

void * __thiscall
SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_vector_deleting_destructor__adjustor_8__
          (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *
                      )&this[-1].ColumnIdToSlotContents.field_0x48,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14d83e7ac

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   UE::PropertyViewer::Private::FTreeNode,1> >::`vector deleting destructor'`adjustor{8}' (unsigned
   int) __ptr64 */

void * __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 14d83e7bc

/* [thunk]:public: virtual void * __ptr64 __cdecl STreeView<class TSharedPtr<struct
   UE::PropertyViewer::Private::FTreeNode,1> >::`vector deleting destructor'`adjustor{680}'
   (unsigned int) __ptr64 */

void * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_vector_deleting_destructor__adjustor_680__
          (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)
                      &this[-1].field_0x858,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{536}' @ 14d83e7d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::ColorGrading::SColorGradingWheel::`vector
   deleting destructor'`adjustor{536}' (unsigned int) __ptr64 */

void * __thiscall
UE::ColorGrading::SColorGradingWheel::_vector_deleting_destructor__adjustor_536__
          (SColorGradingWheel *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((SColorGradingWheel *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14d83e7e4

/* [thunk]:public: virtual void * __ptr64 __cdecl URadialSlider::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
URadialSlider::_vector_deleting_destructor__adjustor_40__(URadialSlider *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((URadialSlider *)&this[-1].OnValueChanged.field_0x8,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14d83e800

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83e830

void * __thiscall
UE::Slate::ItemsSource::
FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
            *)&this->ItemsSource->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83e8f0

void * __thiscall
UE::Slate::ItemsSource::
FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE__6B_
  ;
  TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
  ::Remove((TMulticastDelegateRegistration<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
            *)&((this->ItemsSource).Object)->ArrayChangedDelegate,
           (FDelegateHandle)(this->ArrayChangedHandle).ID);
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83e970

void * __thiscall
IBaseDelegateInstance<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83e9a0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83e9d0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ea00

void * __thiscall
IBaseDelegateInstance<void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ea30

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ea60

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ea90

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eac0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eaf0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eb20

void * __thiscall
IBaseDelegateInstance<void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eb50

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eb80

void * __thiscall
IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_scalar_deleting_destructor_
          (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  *this = (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>)
          &___7__IFilter_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ebc0

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ebf0

void * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ec50

void * __thiscall
SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->ColumnIdToSlotContents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColumnIdToSlotContents);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Box).SharedReferenceCount.ReferenceController);
  STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
  ~STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
            ((STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x458);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ecf0

void * __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ed50

void * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_scalar_deleting_destructor_
          (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  ~STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83edb0

void * __thiscall
TBaseFunctorDelegateInstance<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy,`SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GenerateColumns'::__l27::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ede0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ee10

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ee40

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ee70

void * __thiscall
TBaseSPLambdaDelegateInstance<1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,`UE::PropertyViewer::Private::FPropertyViewerImpl::Construct'::__l14::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eed0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ef30

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ef90

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SBoolPropertyValue_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83eff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f050

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f0b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingComponentViewer_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::ColorGrading::SColorGradingPicker_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f1d0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SDefaultPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f230

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SEnumPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f290

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f2f0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy,int,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f350

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,double___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f3b0

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,__int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f410

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SNumericPropertyValue_const_,1,unsigned___int64___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f470

void * __thiscall
TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,UE::PropertyViewer::SStringPropertyValue_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f4d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SMultiColumnTableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f530

void * __thiscall
TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f590

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f5f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f650

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f6c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f720

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f780

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f7e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f840

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::Private::FPropertyViewerImpl,1,void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f8a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SBoolPropertyValue,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83f9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(FLinearColor_const_&),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fa80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float),FDefaultDelegateUserPolicy,bool>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fae0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,TWeakPtr<SWidget,1>,bool,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fb40

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(float,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::ColorGrading::SColorGradingPicker,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fc00

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fc60

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SEnumPropertyValue,1,void___cdecl(void),FDefaultDelegateUserPolicy,int>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fcc0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fd20

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fd80

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fde0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fe40

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fea0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SNumericPropertyValue,1,void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ff00

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::PropertyViewer::SStringPropertyValue,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ff60

void * __thiscall
TBaseStaticDelegateInstance<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ff90

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83ffc0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,URadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,URadialSlider,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d83fff0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,URadialSlider,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,URadialSlider,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840020

void * __thiscall
TCommonDelegateInstanceState<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedPtr<SWidget,1>___cdecl(UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840050

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840080

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8400c0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8400f0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(double,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840120

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840150

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840180

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8401b0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<FString,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8401e0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840210

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(__int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840240

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned___int64,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840270

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8402b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FColorGradingSpinBoxStyle,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FColorGradingSpinBoxStyle,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8402f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::Private::FContainer,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840330

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSlateMaterialBrush,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSlateMaterialBrush,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840370

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::Private::FTreeNode,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::Private::FTreeNode,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8403b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x498);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8403f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<__int64>,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSpinBox<__int64>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x758);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840430

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<unsigned___int64>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSpinBox<unsigned___int64>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x758);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840470

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8404b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8404f0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840530

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840570

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8405b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8405f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SBoolPropertyValue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SBoolPropertyValue,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840630

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::ColorGrading::SColorGradingComponentSpinBox,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::ColorGrading::SColorGradingComponentSpinBox,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840670

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::ColorGrading::SColorGradingWheel,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::ColorGrading::SColorGradingWheel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8406b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SDefaultPropertyValue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SDefaultPropertyValue,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8406f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SEnumPropertyValue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SEnumPropertyValue,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840730

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SFieldIcon,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SFieldIcon,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840770

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SFieldName,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SFieldName,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8407b0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8407f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SNumericPropertyValue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SNumericPropertyValue,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840830

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRadialSlider,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SRadialSlider,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x600);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840870

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::PropertyViewer::SStringPropertyValue,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::PropertyViewer::SStringPropertyValue,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8408b0

void * __thiscall
TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840920

void * __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::_scalar_deleting_destructor_
          (TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,uint param_1)

{
  ~TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840960

void * __thiscall
FColorGradingSpinBoxStyle::_scalar_deleting_destructor_
          (FColorGradingSpinBoxStyle *this,uint param_1)

{
  ~FColorGradingSpinBoxStyle(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8409a0

void * __thiscall
UE::PropertyViewer::FFieldExpander_Default::_scalar_deleting_destructor_
          (FFieldExpander_Default *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d8409d0

void * __thiscall
UE::PropertyViewer::FFieldIterator_BlueprintVisible::_scalar_deleting_destructor_
          (FFieldIterator_BlueprintVisible *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840a00

void * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840a40

void * __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840a80

void * __thiscall
TTextFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FTextFilterExpressionContext::
_scalar_deleting_destructor_(FTextFilterExpressionContext *this,uint param_1)

{
  ~FTextFilterExpressionContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840ac0

void * __thiscall
UE::PropertyViewer::IFieldExpander::_scalar_deleting_destructor_(IFieldExpander *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840af0

void * __thiscall
UE::PropertyViewer::IFieldIterator::_scalar_deleting_destructor_(IFieldIterator *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840b20

void * __thiscall
UE::PropertyViewer::SBoolPropertyValue::_scalar_deleting_destructor_
          (SBoolPropertyValue *this,uint param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840b90

void * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::_scalar_deleting_destructor_
          (SColorGradingComponentSpinBox *this,uint param_1)

{
  ~SColorGradingComponentSpinBox(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
UE::ColorGrading::SColorGradingComponentViewer::_scalar_deleting_destructor_
          (SColorGradingComponentViewer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7SColorGradingComponentViewer_ColorGrading_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Component).Getter);
  pvVar1 = *(void **)&(this->Component).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Component).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GradientSpinBox).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NumericEntryBox).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OptionalValue).Getter);
  pvVar1 = *(void **)&(this->OptionalValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OptionalValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MaxValue).Getter);
  pvVar1 = *(void **)&(this->MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MinValue).Getter);
  pvVar1 = *(void **)&(this->MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MinValue).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
UE::ColorGrading::SColorGradingPicker::_scalar_deleting_destructor_
          (SColorGradingPicker *this,uint param_1)

{
  ~SColorGradingPicker(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840dd0

void * __thiscall
UE::ColorGrading::SColorGradingWheel::_scalar_deleting_destructor_
          (SColorGradingWheel *this,uint param_1)

{
  ~SColorGradingWheel(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840e30

void * __thiscall
UE::PropertyViewer::SDefaultPropertyValue::_scalar_deleting_destructor_
          (SDefaultPropertyValue *this,uint param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840ea0

void * __thiscall
UE::PropertyViewer::SEnumPropertyValue::_scalar_deleting_destructor_
          (SEnumPropertyValue *this,uint param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840f10

void * __thiscall
UE::PropertyViewer::SFieldIcon::_scalar_deleting_destructor_(SFieldIcon *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840f70

void * __thiscall
UE::PropertyViewer::SFieldName::_scalar_deleting_destructor_(SFieldName *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NameBlock).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d840fe0

void * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
_scalar_deleting_destructor_(SListViewPinnedRowWidget *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PinnedItemRow).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerListView).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d841050

void * __thiscall
`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  ~SMultiRowType(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor'`adjustor{8}'_(unsigned_int)___ptr64 @ 14d8410a4

void [thunk]:`UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::
     SMultiRowType::_scalar_deleting_destructor__adjustor_8____unsigned_int____ptr64
               (longlong param_1,uint param_2)

{
  `UE::PropertyViewer::Private::FPropertyViewerImpl::HandleGenerateRow'::__l2::SMultiRowType::
  _scalar_deleting_destructor_((void *)(param_1 + -8),param_2);
  return;
}

// `scalar_deleting_destructor' @ 14d8410c0

void * __thiscall
UE::PropertyViewer::SNumericPropertyValue::_scalar_deleting_destructor_
          (SNumericPropertyValue *this,uint param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d841130

void * __thiscall SRadialSlider::_scalar_deleting_destructor_(SRadialSlider *this,uint param_1)

{
  ~SRadialSlider(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x5f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d841190

void * __thiscall
UE::PropertyViewer::SStringPropertyValue::_scalar_deleting_destructor_
          (SStringPropertyValue *this,uint param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d841200

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall URadialSlider::_scalar_deleting_destructor_(URadialSlider *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyRadialSlider).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  pvVar1 = *(void **)&(this->OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMouseCaptureBegin);
  FSliderStyle::~FSliderStyle(&this->WidgetStyle);
  pFVar2 = (this->ValueTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SliderRange).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->SliderRange).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SliderRange).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SliderRange).EditorCurveData._padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  UWidget::~UWidget((UWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x7b0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeAdvancedWidgets_init @ 14d85ced0

void __cdecl EmptyLinkFunctionForGeneratedCodeAdvancedWidgets_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeColorGradingSpinBoxStyle @ 14d85cee0

void __cdecl EmptyLinkFunctionForGeneratedCodeColorGradingSpinBoxStyle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeRadialSlider @ 14d85cef0

void __cdecl EmptyLinkFunctionForGeneratedCodeRadialSlider(void)

{
  return;
}

// ExpandAndCacheMatches @ 14d861230

bool __thiscall
TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::ExpandAndCacheMatches
          (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FTreeNode *pFVar2;
  IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar11;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar12;
  byte bVar13;
  undefined1 local_res8 [8];
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_68;
  ulonglong local_60;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_58;
  FReadAccessScope local_48;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  plVar10 = (longlong *)0x0;
  pFVar2 = param_1->Object;
  bVar13 = 0;
  local_68 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
  local_60 = 0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetChildrenDelegate,
             &local_48);
  if (*(int *)&(this->GetChildrenDelegate).field_0x10 != 0) {
    plVar10 = *(longlong **)&(this->GetChildrenDelegate).field_0x8;
  }
  local_58.Object = pFVar2;
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  (**(code **)(*plVar10 + 0x60))(plVar10,&local_58,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  iVar5 = (int)local_60;
  uVar8 = (ulonglong)(int)local_60;
  pTVar12 = local_68 + uVar8;
  pTVar11 = local_68;
  while( true ) {
    if ((int)uVar8 != iVar5) {
      `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar11 == pTVar12) break;
    pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
    local_58.Object = pTVar11->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.SharedReferenceCount.ReferenceController = pTVar1;
    bVar6 = ExpandAndCacheMatches(this,&local_58);
    bVar13 = bVar13 | bVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    uVar8 = local_60 & 0xffffffff;
    pTVar11 = pTVar11 + 1;
  }
  pIVar3 = this->Filter;
  pcVar4 = *(code **)((longlong)*pIVar3 + 0x10);
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
  cVar7 = (*pcVar4)(pIVar3,&local_58);
  if ((bVar13 == 0) && (cVar7 == '\0')) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_68,(int)local_60);
    if (local_68 != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
      FMemory::Free(local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = false;
  }
  else {
    puVar9 = &this->TreeView->field_0x588;
    pcVar4 = *(code **)(*(longlong *)puVar9 + 0x50);
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
    (*pcVar4)(puVar9,&local_58,1);
    TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
    ::Emplace<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&>
              (&this->ItemsPassingFilter,
               (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)local_res8,(bool *)param_1);
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_68,(int)local_60);
    if (local_68 != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
      FMemory::Free(local_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar6 = true;
  }
  return bVar6;
}

// OnGetFilteredChildren @ 14d8749b0

void __thiscall
TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::OnGetFilteredChildren
          (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this,
          TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,
          TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FTreeNode *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar11;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar12;
  undefined1 local_res8 [8];
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_res10;
  FTreeNode *local_a8;
  TReferenceControllerBase<1> *local_a0;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *local_98;
  ulonglong local_90;
  FTreeNode *local_88;
  TReferenceControllerBase<1> *local_80;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> local_78;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_68;
  FReadAccessScope local_58;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_res10 = param_1;
  if (this->bIsEnabled == false) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = pFVar1;
    local_68.SharedReferenceCount.ReferenceController = pTVar2;
    TDelegate<void___cdecl(TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::Execute(&this->GetChildrenDelegate,&local_68,param_2);
  }
  else {
    plVar10 = (longlong *)0x0;
    local_98 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
    local_90 = 0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->GetChildrenDelegate,
               &local_58);
    if (*(int *)&(this->GetChildrenDelegate).field_0x10 != 0) {
      plVar10 = *(longlong **)&(this->GetChildrenDelegate).field_0x8;
    }
    local_88 = pFVar1;
    local_80 = pTVar2;
    (**(code **)(*plVar10 + 0x60))(plVar10,&local_88,&local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    uVar4 = local_90;
    uVar7 = (ulonglong)(int)local_90;
    pTVar11 = local_98 + uVar7;
    pTVar12 = local_98;
    while( true ) {
      if ((int)local_90 != (int)uVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar12 == pTVar11) break;
      pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
      local_a8 = pTVar12->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar8 = ((uint)((ulonglong)local_a8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a8 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      local_a0 = pTVar2;
      local_78.Object = local_a8;
      local_78.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      iVar6 = TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1>_>
                        (&this->ItemsPassingFilter,uVar8 >> 0x10 ^ uVar8,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (iVar6 != -1) {
        pFVar9 = (param_2->AllocatorInstance).Data;
        if (((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
            ((FScriptContainerElement *)&local_a8 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
        *(FTreeNode **)pFVar9 = local_a8;
        *(TReferenceControllerBase<1> **)(pFVar9 + 8) = local_a0;
        if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
      uVar7 = uVar4 & 0xffffffff;
      pTVar12 = pTVar12 + 1;
    }
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>(local_98,(int)local_90);
    if (local_98 != (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0) {
      FMemory::Free(local_98);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return;
}

// RefreshAndFilterTree @ 14d8828b0

void __thiscall
TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::RefreshAndFilterTree
          (TreeFilterHandler<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this)

{
  TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
  *pTVar1;
  TMap<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>_>
  *this_00;
  ulonglong uVar2;
  uint uVar3;
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar5;
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
  *pTVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  bool *pbVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  FTreeNode *local_168;
  TReferenceControllerBase<1> *pTStack_160;
  undefined8 local_158;
  TReferenceControllerBase<1> *local_150;
  int local_148;
  uint uStack_144;
  undefined1 *puStack_140;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  int iStack_100;
  undefined4 uStack_fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  undefined8 local_d8;
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_c8;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> local_58;
  
  if ((((this->TreeView != (STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0)
       && (this->Filter != (IFilter<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0))
      && (this->RootItems !=
          (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
           *)0x0)) &&
     ((this->TreeRootItems !=
       (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *)
       0x0 && (bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                                   &this->GetChildrenDelegate), bVar10)))) {
    pTVar4 = this->TreeRootItems;
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
              ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
               (pTVar4->AllocatorInstance).Data,pTVar4->ArrayNum);
    iVar17 = 0;
    pTVar4->ArrayNum = 0;
    if (pTVar4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar4->AllocatorInstance,0,&pTVar4->ArrayMax);
    }
    bVar10 = 1 < (this->ItemsPassingFilter).HashSize;
    if (!bVar10) {
      TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->ItemsPassingFilter);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&(this->ItemsPassingFilter).Elements,0,
                      *(int *)&(this->ItemsPassingFilter).Elements.field_0x8);
    puVar15 = &(this->ItemsPassingFilter).Elements.field_0xc;
    *(undefined4 *)&(this->ItemsPassingFilter).Elements.field_0x8 = 0;
    if (*(int *)puVar15 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->ItemsPassingFilter,0,(int *)puVar15);
    }
    *(undefined4 *)&(this->ItemsPassingFilter).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ItemsPassingFilter).Elements.field_0x34 = 0;
    iVar12 = *(int *)&(this->ItemsPassingFilter).Elements.field_0x2c;
    *(undefined4 *)&(this->ItemsPassingFilter).Elements.field_0x28 = 0;
    if ((iVar12 < 0) || (0x80 < iVar12)) {
      *(undefined4 *)&(this->ItemsPassingFilter).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->ItemsPassingFilter).Elements.field_0x10,0);
    }
    uVar11 = 1;
    if (bVar10) {
      (this->ItemsPassingFilter).HashSize = 1;
      TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
      ::Rehash(&this->ItemsPassingFilter);
    }
    if (this->bIsEnabled == false) {
      if (this->bWasEnabled != false) {
        pSVar5 = this->TreeView;
        this_00 = &pSVar5->SparseItemInfos;
        bVar10 = 1 < *(int *)&(pSVar5->SparseItemInfos).field_0x48;
        if (!bVar10) {
          TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::UnhashElements((TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                            *)this_00);
        }
        TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this_00,0,*(int *)&(pSVar5->SparseItemInfos).field_0x8);
        puVar15 = &(pSVar5->SparseItemInfos).field_0xc;
        *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x8 = 0;
        if (*(int *)puVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar15);
        }
        *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x34 = 0;
        iVar17 = *(int *)&(pSVar5->SparseItemInfos).field_0x2c;
        *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x28 = 0;
        if ((iVar17 < 0) || (0x80 < iVar17)) {
          *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)&(pSVar5->SparseItemInfos).field_0x10,0
                    );
        }
        if (bVar10) {
          *(undefined4 *)&(pSVar5->SparseItemInfos).field_0x48 = 1;
          TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                    *)this_00);
        }
        (**(code **)(*(longlong *)pSVar5 + 0x248))(pSVar5);
        pTVar22 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->PrefilterExpandedItems).Elements.field_0x10;
        local_148 = 0;
        iVar17 = *(int *)&(this->PrefilterExpandedItems).Elements.field_0x28;
        pTVar1 = &this->PrefilterExpandedItems;
        uStack_144 = 1;
        iStack_134 = 0;
        iStack_130 = 0;
        if (iVar17 != 0) {
          puVar20 = *(uint **)&(this->PrefilterExpandedItems).Elements.field_0x20;
          if (puVar20 == (uint *)0x0) {
            puVar20 = (uint *)pTVar22;
          }
          uVar11 = *puVar20;
          while (uVar11 == 0) {
            iStack_130 = iStack_130 + 0x20;
            lVar14 = (longlong)local_148;
            local_148 = local_148 + 1;
            if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < local_148)
            goto LAB_14d882e5b;
            uVar11 = puVar20[lVar14 + 1];
          }
          uStack_144 = -uVar11 & uVar11;
          uVar2 = (ulonglong)uStack_144 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_c8.Object._4_4_ = (int)lVar14;
          iStack_134 = iStack_130 + -1 + local_c8.Object._4_4_;
          if (iVar17 < iStack_134) {
LAB_14d882e5b:
            iStack_134 = iVar17;
          }
        }
        local_138 = 0xffffffff;
        uVar11 = *(uint *)&(this->PrefilterExpandedItems).Elements.field_0x28;
        TStack_120._padding_ = CONCAT44(uStack_144,local_148);
        bVar13 = (byte)uVar11 & 0x1f;
        iStack_100 = *(int *)&(this->PrefilterExpandedItems).Elements.field_0x8 -
                     *(int *)&(this->PrefilterExpandedItems).Elements.field_0x34;
        TStack_120.CurrentBitIndex = iStack_134;
        TStack_120.UnvisitedBitMask = 0xffffffff;
        TStack_120._28_4_ = uStack_12c;
        TStack_120.BaseBitIndex = iStack_130;
        local_f8._padding_._0_4_ = (int)uVar11 >> 5;
        local_f8._padding_._4_4_ = 1 << bVar13;
        local_f8.BaseBitIndex = uVar11 & 0xffffffe0;
        local_f8.UnvisitedBitMask = -1 << bVar13;
        uStack_68 = CONCAT44(uStack_fc,iStack_100);
        puStack_140 = (undefined1 *)pTVar22;
        local_128 = pTVar1;
        TStack_120.Array = pTVar22;
        local_f8.Array = pTVar22;
        local_f8.CurrentBitIndex = uVar11;
        local_90 = pTVar1;
        TStack_88._padding_ = TStack_120._padding_;
        TStack_88.Array = pTVar22;
        TStack_88._16_8_ = TStack_120._16_8_;
        TStack_88._24_8_ = TStack_120._24_8_;
        if ((((int)uVar11 < 0) || (iVar17 < (int)uVar11)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar11 != *(uint *)&(this->PrefilterExpandedItems).Elements.field_0x28) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
          pTVar22 = local_f8.Array;
          uVar11 = local_f8.CurrentBitIndex;
        }
        while( true ) {
          pTVar9 = local_90;
          if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
              (int)uStack_68) {
            local_res10[0] = 0;
            `TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (((TStack_88.CurrentBitIndex == uVar11) && (TStack_88.Array == pTVar22)) &&
             (pTVar9 == pTVar1)) break;
          lVar14 = *(longlong *)&pTVar9->Elements;
          pTVar7 = *(TReferenceControllerBase<1> **)
                    (lVar14 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
          local_d8 = *(undefined8 *)(lVar14 + (longlong)TStack_88.CurrentBitIndex * 0x18);
          if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
            puVar15 = &this->TreeView->field_0x588;
            lVar14 = *(longlong *)puVar15;
          }
          else {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
            puVar15 = &this->TreeView->field_0x588;
            lVar14 = *(longlong *)puVar15;
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_d0 = pTVar7;
          (**(code **)(lVar14 + 0x50))(puVar15,&local_d8,1);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
        }
        bVar10 = 1 < (this->PrefilterExpandedItems).HashSize;
        if (!bVar10) {
          TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
          ::UnhashElements(pTVar1);
        }
        TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements(&pTVar1->Elements,0,
                          *(int *)&(this->PrefilterExpandedItems).Elements.field_0x8);
        puVar15 = &(this->PrefilterExpandedItems).Elements.field_0xc;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x8 = 0;
        if (*(int *)puVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar15);
        }
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x34 = 0;
        iVar17 = *(int *)&(this->PrefilterExpandedItems).Elements.field_0x2c;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x28 = 0;
        if ((iVar17 < 0) || (0x80 < iVar17)) {
          *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->PrefilterExpandedItems).Elements.field_0x10,0);
        }
        if (bVar10) {
          (this->PrefilterExpandedItems).HashSize = 1;
          TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
          ::Rehash(pTVar1);
        }
      }
      pTVar4 = this->RootItems;
      iVar17 = pTVar4->ArrayNum;
      pFVar18 = (pTVar4->AllocatorInstance).Data;
      pFVar21 = pFVar18 + (longlong)iVar17 * 0x10;
      while( true ) {
        if (pTVar4->ArrayNum != iVar17) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar18 == pFVar21) break;
        local_158 = *(undefined8 *)pFVar18;
        local_150 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        if (local_150 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar6 = this->TreeRootItems;
        pFVar16 = (pTVar6->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 < pFVar16 + (longlong)pTVar6->ArrayMax * 0x10))
           && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = pTVar6->ArrayNum;
        if (iVar12 == pTVar6->ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
        }
        pTVar6->ArrayNum = iVar12 + 1;
        pFVar16 = (pTVar6->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
        *(undefined8 *)pFVar16 = local_158;
        *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_150;
        if (local_150 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150);
        pFVar18 = pFVar18 + 0x10;
      }
    }
    else {
      if (this->bWasEnabled == false) {
        pTVar1 = &this->PrefilterExpandedItems;
        bVar10 = 1 < (this->PrefilterExpandedItems).HashSize;
        if (!bVar10) {
          TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
          ::UnhashElements(pTVar1);
        }
        TSparseArray<TSparseSetElement<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements(&pTVar1->Elements,0,
                          *(int *)&(this->PrefilterExpandedItems).Elements.field_0x8);
        puVar15 = &(this->PrefilterExpandedItems).Elements.field_0xc;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x8 = 0;
        if (*(int *)puVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar15);
        }
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x30 = 0xffffffff;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x34 = 0;
        iVar12 = *(int *)&(this->PrefilterExpandedItems).Elements.field_0x2c;
        *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x28 = 0;
        if ((iVar12 < 0) || (0x80 < iVar12)) {
          *(undefined4 *)&(this->PrefilterExpandedItems).Elements.field_0x2c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->PrefilterExpandedItems).Elements.field_0x10,0);
        }
        if (bVar10) {
          (this->PrefilterExpandedItems).HashSize = 1;
          TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
          ::Rehash(pTVar1);
        }
        pSVar5 = this->TreeView;
        local_128 = (TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
                     *)&pSVar5->SparseItemInfos;
        iVar12 = *(int *)&(pSVar5->SparseItemInfos).field_0x28;
        TStack_120.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)&(pSVar5->SparseItemInfos).field_0x10;
        local_a0 = iVar17;
        iStack_a4 = 0;
        if (iVar12 != 0) {
          puVar20 = *(uint **)&(pSVar5->SparseItemInfos).field_0x20;
          if (puVar20 == (uint *)0x0) {
            puVar20 = (uint *)TStack_120.Array;
          }
          uVar3 = *puVar20;
          local_a0 = 0;
          iVar17 = 0;
          while (uVar3 == 0) {
            lVar14 = (longlong)iVar17;
            local_a0 = local_a0 + 0x20;
            iVar17 = iVar17 + 1;
            iStack_a4 = iVar12;
            if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
            goto LAB_14d882b34;
            uVar3 = puVar20[lVar14 + 1];
          }
          uVar11 = -uVar3 & uVar3;
          uVar2 = (ulonglong)uVar11 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          local_res20 = (int)lVar14;
          iStack_a4 = local_res20 + -1 + local_a0;
          if (iVar12 < iStack_a4) {
            iStack_a4 = iVar12;
          }
        }
LAB_14d882b34:
        uStack_a8 = 0xffffffff;
        TStack_120._padding_ = CONCAT44(uVar11,iVar17);
        TStack_120.CurrentBitIndex = iStack_a4;
        TStack_120.UnvisitedBitMask = 0xffffffff;
        TStack_120._28_4_ = iStack_a4;
        TStack_120.BaseBitIndex = local_a0;
        local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)local_128
        ;
        iStack_b8 = iVar17;
        uStack_b4 = uVar11;
        local_b0 = (undefined1 *)TStack_120.Array;
        iStack_9c = iStack_a4;
        iVar17 = iStack_a4;
        if (iStack_a4 < iVar12) {
          do {
            pbVar19 = (bool *)((longlong)iVar17 * 0x20 + *(longlong *)&local_128->Elements);
            if (pbVar19[0x10] != false) {
              TSet<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,DefaultKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>,FDefaultSetAllocator>
              ::Emplace<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_&>
                        (pTVar1,&local_c8,pbVar19);
            }
            TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
            iVar17 = TStack_120.CurrentBitIndex;
          } while (TStack_120.CurrentBitIndex < (TStack_120.Array)->NumBits);
        }
      }
      pTVar4 = this->RootItems;
      iVar17 = pTVar4->ArrayNum;
      pFVar18 = (pTVar4->AllocatorInstance).Data;
      pFVar21 = pFVar18 + (longlong)iVar17 * 0x10;
      while( true ) {
        if (pTVar4->ArrayNum != iVar17) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar18 == pFVar21) break;
        local_168 = *(FTreeNode **)pFVar18;
        pTStack_160 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
        if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_160->SharedReferenceCount =
               (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTStack_160->SharedReferenceCount =
               (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = local_168;
        local_58.SharedReferenceCount.ReferenceController = pTStack_160;
        bVar10 = ExpandAndCacheMatches(this,&local_58);
        if (bVar10) {
          pTVar6 = this->TreeRootItems;
          pFVar16 = (pTVar6->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_168) &&
              ((FScriptContainerElement *)&local_168 < pFVar16 + (longlong)pTVar6->ArrayMax * 0x10))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar12 = pTVar6->ArrayNum;
          if (iVar12 == pTVar6->ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
          }
          pTVar6->ArrayNum = iVar12 + 1;
          pFVar16 = (pTVar6->AllocatorInstance).Data + (longlong)iVar12 * 0x10;
          *(FTreeNode **)pFVar16 = local_168;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_160;
          if (pTStack_160 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTStack_160->SharedReferenceCount =
                 (atomic<int>)((int)pTStack_160->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_160);
        pFVar18 = pFVar18 + 0x10;
      }
    }
    (**(code **)(*(longlong *)this->TreeView + 0x248))();
    this->bWasEnabled = this->bIsEnabled;
  }
  return;
}

// Z_Construct_UClass_URadialSlider_NoRegister @ 14d88cc20

UClass * __cdecl Z_Construct_UClass_URadialSlider_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URadialSlider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AdvancedWidgets",L"RadialSlider",
               &Z_Registration_Info_UClass_URadialSlider.InnerSingleton,
               URadialSlider::StaticRegisterNativesURadialSlider,0x7b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URadialSlider>,
               InternalVTableHelperCtorCaller<URadialSlider>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URadialSlider.InnerSingleton;
}

// Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle @ 14d88cce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FColorGradingSpinBoxStyle.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FColorGradingSpinBoxStyle.InnerSingleton,
               &Z_Construct_UScriptStruct_FColorGradingSpinBoxStyle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FColorGradingSpinBoxStyle.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FColorGradingSpinBoxStyle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_AdvancedWidgets @ 14d88dd50

void __cdecl IMPLEMENT_MODULE_AdvancedWidgets(void)

{
  return;
}

// ColorSettings'' @ 15045a780

void __cdecl
`dynamic_atexit_destructor_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings__(void)

{
  UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.StructColors._72_4_ = 0;
  if (UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.StructColors._64_8_ != 0) {
    FMemory::Free((void *)UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.StructColors.
                          _64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UE::AdvancedWidgets::FAdvancedWidgetsStyle::ColorSettings.StructColors);
  return;
}

// DefaultUndeterminedString'' @ 15045a7c0

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<float>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<float>::DefaultUndeterminedString.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045a7cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*SNumericEntryBox<float>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// HueGradientColors'' @ 15045a7e0

void __cdecl
`dynamic_atexit_destructor_for_'UE::ColorGrading::SColorGradingComponentSpinBox::HueGradientColors__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UE::ColorGrading::SColorGradingComponentSpinBox::HueGradientColors.AllocatorInstance.
               Data;
  if (UE::ColorGrading::SColorGradingComponentSpinBox::HueGradientColors.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UE::ColorGrading::SColorGradingComponentSpinBox::HueGradientColors.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// Instance'' @ 15045a800

void __cdecl
`dynamic_atexit_destructor_for_'UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance__(void)

{
  if (UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr != (FSlateStyleSet *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045a814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr)->_padding_)
              (UE::AdvancedWidgets::FAdvancedWidgetsStyle::Instance.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Default'' @ 15045a820

void __cdecl
`FColorGradingSpinBoxStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__(void)

{
  ::Default._0_8_ = &___7FColorGradingSpinBoxStyle__6B_;
  ::Default.SelectorBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.SelectorBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  ::Default.HoveredBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.HoveredBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.ActiveBorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.ActiveBorderBrush.ResourceHandle.Data.SharedReferenceCount.
             ReferenceController);
  ::Default.BorderBrush._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (::Default.BorderBrush.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15045a8a0

void __cdecl
`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'WidgetClassDataInstance'' @ 15045a8c0

void __cdecl
`UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass'::__l2::
_dynamic_atexit_destructor_for__WidgetClassDataInstance__(void)

{
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.SecondaryData !=
      (ForElementType<FSlateAttributeDescriptor::FContainer>)0x0) {
    FMemory::Free((void *)`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                          ::__l2::WidgetClassDataInstance.Descriptor.Containers.AllocatorInstance.
                          SecondaryData);
  }
  DestructItems<FSlateAttributeDescriptor::FAttribute,int>
            ((FAttribute *)
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data,
             `private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
             ::__l2::WidgetClassDataInstance.Descriptor.Attributes.ArrayNum);
  if (`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
      ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(`private:_static_class_FSlateWidgetClassData_const&___ptr64___cdecl_UE::ColorGrading::SColorGradingWheel::GetPrivateWidgetClass(void)'
                  ::__l2::WidgetClassDataInstance.Descriptor.Attributes.AllocatorInstance.Data);
    return;
  }
  return;
}

