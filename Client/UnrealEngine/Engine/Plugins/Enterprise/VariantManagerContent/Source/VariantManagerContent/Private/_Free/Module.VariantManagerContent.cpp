// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 202

// OnDependenciesUpdated'' @ 141418cb0

void __cdecl `dynamic_initializer_for_'UVariant::OnDependenciesUpdated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UVariant::OnDependenciesUpdated__);
  return;
}

// OnThumbnailUpdated'' @ 141418cd0

void __cdecl `dynamic_initializer_for_'UVariant::OnThumbnailUpdated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UVariant::OnThumbnailUpdated__);
  return;
}

// OnThumbnailUpdated'' @ 141418cf0

void __cdecl `dynamic_initializer_for_'UVariantSet::OnThumbnailUpdated__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UVariantSet::OnThumbnailUpdated__);
  return;
}

// `dynamic_initializer_for_'GRegisterVariantManagerCustomVersion'' @ 141418d10

void __cdecl _dynamic_initializer_for__GRegisterVariantManagerCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FVariantManagerObjectVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,5,L"VariantManagerObjectVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterVariantManagerCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogVariantContent'' @ 141418d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVariantContent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVariantContent,L"LogVariantContent",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVariantContent__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantVariantManagerContent'' @ 141418d90

void __cdecl _dynamic_initializer_for__ModuleRegistrantVariantManagerContent__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "VariantManagerContent";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"VariantManagerContent",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FVariantManagerContentModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h__Script_VariantManagerContent_1680027382'' @ 141418de0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h__Script_VariantManagerContent_1680027382__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_FunctionCaller_h__Script_VariantManagerContent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h__Script_VariantManagerContent_1280089917'' @ 141418e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h__Script_VariantManagerContent_1280089917__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsActor_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h__Script_VariantManagerContent_4205528490'' @ 141418e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h__Script_VariantManagerContent_4205528490__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSetsFunctionDirector_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h__Script_VariantManagerContent_2578579924'' @ 141418ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h__Script_VariantManagerContent_2578579924__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h__Script_VariantManagerContent_1956411192'' @ 141418ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h__Script_VariantManagerContent_1956411192__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueColor_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h__Script_VariantManagerContent_269904994'' @ 141418f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h__Script_VariantManagerContent_269904994__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h__Script_VariantManagerContent_1383746431'' @ 141418f60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h__Script_VariantManagerContent_1383746431__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueOption_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h__Script_VariantManagerContent_6049885'' @ 141418fa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h__Script_VariantManagerContent_6049885__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h__Script_VariantManagerContent_3859414423'' @ 141418fe0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h__Script_VariantManagerContent_3859414423__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h__Script_VariantManagerContent_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h__Script_VariantManagerContent_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValue_h__Script_VariantManagerContent_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h__Script_VariantManagerContent_923498882'' @ 141419030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h__Script_VariantManagerContent_923498882__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_SwitchActor_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h__Script_VariantManagerContent_2724512036'' @ 141419070

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h__Script_VariantManagerContent_2724512036__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantObjectBinding_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h__Script_VariantManagerContent_3023825410'' @ 1414190b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h__Script_VariantManagerContent_3023825410__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_VariantSet_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h__Script_VariantManagerContent_1575648106'' @ 1414190f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h__Script_VariantManagerContent_1575648106__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/VariantManagerContent",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h__Script_VariantManagerContent_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_Variant_h__Script_VariantManagerContent_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_VariantManagerContent'' @ 141419140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_VariantManagerContent__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xbd4874d9;
  local_res8[0].DeclarationsHash = 0x4a46c7e7;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_VariantManagerContent,L"/Script/VariantManagerContent",
             &Z_Registration_Info_UPackage__Script_VariantManagerContent,local_res8);
  return;
}

// Z_Construct_UClass_UPropertyValueOption @ 14e2ced90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueOption(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueOption_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueOption.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValueSoftObject @ 14e2cee90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueSoftObject(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueSoftObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValue @ 14e2ceed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValue(void)

{
  if (Z_Registration_Info_UClass_UPropertyValue.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValue.OuterSingleton,
               &Z_Construct_UClass_UPropertyValue_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValue.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValueTransform @ 14e2cef10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueTransform(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueTransform_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueTransform.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValueVisibility @ 14e2cef50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueVisibility(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueVisibility_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueVisibility.OuterSingleton;
}

// Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory @ 14e2cef90

UEnum * __cdecl Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory(void)

{
  if (Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton,
               &Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPropertyValueCategory.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCapturedPropSegment @ 14e2cefd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCapturedPropSegment(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCapturedPropSegment.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCapturedPropSegment.InnerSingleton,
               &Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCapturedPropSegment.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCapturedPropSegment.InnerSingleton;
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

// EPropertyValueCategory_StaticEnum @ 14e2cf050

UEnum * __cdecl EPropertyValueCategory_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VariantManagerContent();
    Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory,
                       (UObject *)pUVar1,L"EPropertyValueCategory");
  }
  return Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton;
}

// NewStructOps @ 14e2cf090

void * __cdecl Z_Construct_UScriptStruct_FCapturedPropSegment_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCapturedPropSegment,&UE::CoreUObject::Private::Construct<FCapturedPropSegment>,&UE::CoreUObject::Private::ConstructForTests<FCapturedPropSegment>,&UE::CoreUObject::Private::Destruct<FCapturedPropSegment>,&UE::CoreUObject::Private::Copy<FCapturedPropSegment>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UPropertyValue_GetFullDisplayString @ 14e2cf0d0

UFunction * __cdecl Z_Construct_UFunction_UPropertyValue_GetFullDisplayString(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPropertyValue_GetFullDisplayString_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip @ 14e2cf110

UFunction * __cdecl Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPropertyValue_GetPropertyTooltip_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e2cf150

void __cdecl
Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UPropertyValue_HasRecordedData @ 14e2cf160

UFunction * __cdecl Z_Construct_UFunction_UPropertyValue_HasRecordedData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UPropertyValue_HasRecordedData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bHasRecordedData_SetBit @ 14e2cf1a0

void __cdecl
Z_Construct_UClass_UPropertyValue_Statics::NewProp_bHasRecordedData_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x130) = 1;
  return;
}

// Z_Construct_UClass_ASwitchActor @ 14e2cf1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASwitchActor(void)

{
  if (Z_Registration_Info_UClass_ASwitchActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASwitchActor.OuterSingleton,
               &Z_Construct_UClass_ASwitchActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASwitchActor.OuterSingleton;
}

// Z_Construct_UFunction_ASwitchActor_GetOptions @ 14e2cf1f0

UFunction * __cdecl Z_Construct_UFunction_ASwitchActor_GetOptions(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASwitchActor_GetSelectedOption @ 14e2cf230

UFunction * __cdecl Z_Construct_UFunction_ASwitchActor_GetSelectedOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASwitchActor_SelectOption @ 14e2cf270

UFunction * __cdecl Z_Construct_UFunction_ASwitchActor_SelectOption(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_VariantManagerContent @ 14e2cf2b0

UPackage * __cdecl Z_Construct_UPackage__Script_VariantManagerContent(void)

{
  if (Z_Registration_Info_UPackage__Script_VariantManagerContent.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_VariantManagerContent.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_VariantManagerContent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFunctionCaller @ 14e2cf330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFunctionCaller(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFunctionCaller.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFunctionCaller.InnerSingleton,
               &Z_Construct_UScriptStruct_FFunctionCaller_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFunctionCaller.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFunctionCaller.InnerSingleton;
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

// NewStructOps @ 14e2cf3b0

void * __cdecl Z_Construct_UScriptStruct_FFunctionCaller_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFunctionCaller,&UE::CoreUObject::Private::Construct<FFunctionCaller>,&UE::CoreUObject::Private::ConstructForTests<FFunctionCaller>,&UE::CoreUObject::Private::Destruct<FFunctionCaller>,&UE::CoreUObject::Private::PostSerialize<FFunctionCaller>,&UE::CoreUObject::Private::Copy<FFunctionCaller>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelVariantSets_NoRegister @ 14e2cf3f0

UClass * __cdecl Z_Construct_UClass_ULevelVariantSets_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSets",
               &Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton,
               ULevelVariantSets::StaticRegisterNativesULevelVariantSets,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSets>,
               InternalVTableHelperCtorCaller<ULevelVariantSets>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.InnerSingleton;
}

// Z_Construct_UClass_ALevelVariantSetsActor @ 14e2cf610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ALevelVariantSetsActor(void)

{
  if (Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton,
               &Z_Construct_UClass_ALevelVariantSetsActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ALevelVariantSetsActor.OuterSingleton;
}

// NewProp_bLoad_SetBit @ 14e2cf650

void __cdecl
Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::NewProp_bLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets @ 14e2cf660

UFunction * __cdecl Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelVariantSetsActor_GetLevelVariantSets_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets @ 14e2cf6a0

UFunction * __cdecl Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelVariantSetsActor_SetLevelVariantSets_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e2cf6e0

void __cdecl
Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex @ 14e2cf6f0

UFunction * __cdecl Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e2cf730

void __cdecl
Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName @ 14e2cf740

UFunction * __cdecl Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ALevelVariantSetsActor_SwitchOnVariantByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14e2cf920

void * __thiscall
IVariantManagerContentModule::_scalar_deleting_destructor_
          (IVariantManagerContentModule *this,uint param_1)

{
  *this = (IVariantManagerContentModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2cf980

void * __thiscall
FVariantManagerContentModule::_scalar_deleting_destructor_
          (FVariantManagerContentModule *this,uint param_1)

{
  *this = (FVariantManagerContentModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UClass_UVariantObjectBinding @ 14e2cf9c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVariantObjectBinding(void)

{
  if (Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton,
               &Z_Construct_UClass_UVariantObjectBinding_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVariantObjectBinding.OuterSingleton;
}

// Z_Construct_UClass_ULevelVariantSetsFunctionDirector @ 14e2cfa00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelVariantSetsFunctionDirector(void)

{
  if (Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton,
               &Z_Construct_UClass_ULevelVariantSetsFunctionDirector_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValue_NoRegister @ 14e2cfa40

UClass * __cdecl Z_Construct_UClass_UPropertyValue_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValue",
               &Z_Registration_Info_UClass_UPropertyValue.InnerSingleton,
               UPropertyValue::StaticRegisterNativesUPropertyValue,0x1c0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPropertyValue>,
               InternalVTableHelperCtorCaller<UPropertyValue>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValue.InnerSingleton;
}

// Z_Construct_UClass_UVariantSet_NoRegister @ 14e2cfd00

UClass * __cdecl Z_Construct_UClass_UVariantSet_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantSet",
               &Z_Registration_Info_UClass_UVariantSet.InnerSingleton,
               UVariantSet::StaticRegisterNativesUVariantSet,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVariantSet>,
               InternalVTableHelperCtorCaller<UVariantSet>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantSet.InnerSingleton;
}

// Z_Construct_UClass_UVariant_NoRegister @ 14e2cfe60

UClass * __cdecl Z_Construct_UClass_UVariant_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"Variant",
               &Z_Registration_Info_UClass_UVariant.InnerSingleton,
               UVariant::StaticRegisterNativesUVariant,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVariant>,InternalVTableHelperCtorCaller<UVariant>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariant.InnerSingleton;
}

// Z_Construct_UClass_UVariant @ 14e2d0010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVariant(void)

{
  if (Z_Registration_Info_UClass_UVariant.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVariant.OuterSingleton,
               &Z_Construct_UClass_UVariant_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVariant.OuterSingleton;
}

// Z_Construct_UScriptStruct_FVariantDependency @ 14e2d0050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVariantDependency(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVariantDependency.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVariantDependency.InnerSingleton,
               &Z_Construct_UScriptStruct_FVariantDependency_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVariantDependency.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVariantDependency.InnerSingleton;
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

// NewProp_bEnabled_SetBit @ 14e2d00d0

void __cdecl
Z_Construct_UScriptStruct_FVariantDependency_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x50) = 1;
  return;
}

// NewStructOps @ 14e2d00e0

void * __cdecl Z_Construct_UScriptStruct_FVariantDependency_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVariantDependency,&UE::CoreUObject::Private::Construct<FVariantDependency>,&UE::CoreUObject::Private::ConstructForTests<FVariantDependency>,&UE::CoreUObject::Private::Destruct<FVariantDependency>,&UE::CoreUObject::Private::Copy<FVariantDependency>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULevelVariantSets @ 14e2d01e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULevelVariantSets(void)

{
  if (Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton,
               &Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton;
}

// Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets @ 14e2d0220

UFunction * __cdecl Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ULevelVariantSets_GetVariantSet @ 14e2d0260

UFunction * __cdecl Z_Construct_UFunction_ULevelVariantSets_GetVariantSet(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_AddDependency @ 14e2d02a0

UFunction * __cdecl Z_Construct_UFunction_UVariant_AddDependency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_AddDependency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVariantSet @ 14e2d02e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVariantSet(void)

{
  if (Z_Registration_Info_UClass_UVariantSet.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVariantSet.OuterSingleton,
               &Z_Construct_UClass_UVariantSet_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVariantSet.OuterSingleton;
}

// Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName @ 14e2d03d0

UFunction * __cdecl Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_GetDisplayText @ 14e2d0410

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetDisplayText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_GetDisplayText_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_DeleteDependency @ 14e2d0450

UFunction * __cdecl Z_Construct_UFunction_UVariant_DeleteDependency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_DeleteDependency_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_GetNumVariants @ 14e2d0490

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetNumVariants(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_GetNumVariants_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetActor @ 14e2d04d0

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_GetParent @ 14e2d0510

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_GetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetDependency @ 14e2d0550

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetDependency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetDependency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_GetThumbnail @ 14e2d0590

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetThumbnail(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_GetThumbnail_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnlyEnabledDependencies_SetBit @ 14e2d05d0

void __cdecl
Z_Construct_UFunction_UVariant_GetDependents_Statics::NewProp_bOnlyEnabledDependencies_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UVariantSet_GetVariant @ 14e2d05e0

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetVariant(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_GetVariant_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetDependents @ 14e2d0620

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetDependents(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetDependents_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_GetVariantByName @ 14e2d0660

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_GetVariantByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariantSet_GetVariantByName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetDisplayText @ 14e2d06a0

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetDisplayText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetDisplayText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_SetDisplayText @ 14e2d06e0

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_SetDisplayText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariantSet_SetDisplayText_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetNumActors @ 14e2d0720

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetNumActors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetNumActors_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera @ 14e2d0760

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariantSet_SetThumbnailFromCamera_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetNumDependencies @ 14e2d07a0

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetNumDependencies(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariant_GetNumDependencies_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport @ 14e2d07e0

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariantSet_SetThumbnailFromEditorViewport_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetParent @ 14e2d0820

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetParent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetParent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile @ 14e2d0860

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariantSet_SetThumbnailFromFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_GetThumbnail @ 14e2d08a0

UFunction * __cdecl Z_Construct_UFunction_UVariant_GetThumbnail(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_GetThumbnail_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture @ 14e2d08e0

UFunction * __cdecl Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariantSet_SetThumbnailFromTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14e2d0920

void __cdecl
Z_Construct_UFunction_UVariant_IsActive_Statics::NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bExpanded_SetBit @ 14e2d0930

void __cdecl Z_Construct_UClass_UVariantSet_Statics::NewProp_bExpanded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x48) = 1;
  return;
}

// Z_Construct_UFunction_UVariant_IsActive @ 14e2d0940

UFunction * __cdecl Z_Construct_UFunction_UVariant_IsActive(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_IsActive_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetDependency @ 14e2d0a40

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetDependency(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_SetDependency_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetDisplayText @ 14e2d0a80

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetDisplayText(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_SetDisplayText_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetThumbnailFromCamera @ 14e2d0ac0

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetThumbnailFromCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariant_SetThumbnailFromCamera_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport @ 14e2d0b00

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariant_SetThumbnailFromEditorViewport_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetThumbnailFromFile @ 14e2d0b40

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetThumbnailFromFile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariant_SetThumbnailFromFile_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SetThumbnailFromTexture @ 14e2d0b80

UFunction * __cdecl Z_Construct_UFunction_UVariant_SetThumbnailFromTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UVariant_SetThumbnailFromTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UVariant_SwitchOn @ 14e2d0bc0

UFunction * __cdecl Z_Construct_UFunction_UVariant_SwitchOn(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UVariant_SwitchOn_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVariantObjectBinding_NoRegister @ 14e2d0c00

UClass * __cdecl Z_Construct_UClass_UVariantObjectBinding_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"VariantObjectBinding",
               &Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton,
               UVariantObjectBinding::StaticRegisterNativesUVariantObjectBinding,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UVariantObjectBinding>,
               InternalVTableHelperCtorCaller<UVariantObjectBinding>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariantObjectBinding.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueColor @ 14e2d0d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueColor(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueColor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueColor.OuterSingleton;
}

// Z_Construct_UClass_UPropertyValueMaterial @ 14e2d0ed0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyValueMaterial(void)

{
  if (Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton,
               &Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton;
}

// Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister @ 14e2d0fd0

UClass * __cdecl Z_Construct_UClass_ULevelVariantSetsFunctionDirector_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsFunctionDirector",
               &Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton,
               ULevelVariantSetsFunctionDirector::
               StaticRegisterNativesULevelVariantSetsFunctionDirector,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelVariantSetsFunctionDirector>,
               InternalVTableHelperCtorCaller<ULevelVariantSetsFunctionDirector>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelVariantSetsFunctionDirector.InnerSingleton;
}

// AddLambda<`ULevelVariantSets::GetDirectorInstance'::__l2::<lambda_1>_> @ 14e2d1230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
::AddLambda<_ULevelVariantSets::GetDirectorInstance_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
           *this,<lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  ULevelVariantSets *pUVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pUVar5 = (ULevelVariantSets *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVULevelVariantSetsFunctionDirector___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy,`ULevelVariantSets::GetDirectorInstance'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar3[3] = *in_R8;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (ULevelVariantSets *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pUVar5 = (ULevelVariantSets *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pUVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// CastChecked<ALevelVariantSetsActor,AActor> @ 14e2d1480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALevelVariantSetsActor * __cdecl
CastChecked<ALevelVariantSetsActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (ALevelVariantSetsActor *)0x0;
    }
    pFVar3 = GetTypeName<ALevelVariantSetsActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = ALevelVariantSetsActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (ALevelVariantSetsActor *)param_1;
  }
  pFVar3 = GetTypeName<ALevelVariantSetsActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UVariant>,UVariant_*,int> @ 14e2d1560

void __cdecl
ConstructItems<TObjectPtr<UVariant>,UVariant_*,int>(void *param_1,UVariant **param_2,int param_3)

{
  UVariant *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UVariant **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UVariant *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UVariantObjectBinding>,UVariantObjectBinding_*,int> @ 14e2d15c0

void __cdecl
ConstructItems<TObjectPtr<UVariantObjectBinding>,UVariantObjectBinding_*,int>
          (void *param_1,UVariantObjectBinding **param_2,int param_3)

{
  UVariantObjectBinding *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UVariantObjectBinding **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UVariantObjectBinding *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TObjectPtr<UVariantSet>,UVariantSet_*,int> @ 14e2d1620

void __cdecl
ConstructItems<TObjectPtr<UVariantSet>,UVariantSet_*,int>
          (void *param_1,UVariantSet **param_2,int param_3)

{
  UVariantSet *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UVariantSet **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UVariantSet *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCapturedPropSegment,FCapturedPropSegment,int> @ 14e2d1680

void __cdecl
ConstructItems<FCapturedPropSegment,FCapturedPropSegment,int>
          (void *param_1,FCapturedPropSegment *param_2,int param_3)

{
  int *this;
  FString *pFVar1;
  
  if (param_3 != 0) {
    pFVar1 = &param_2->ComponentName;
    this = (int *)((longlong)param_1 + 0x18);
    do {
      FString::FString((FString *)(this + -6),
                       (FString *)((longlong)param_2 + (-0x18 - (longlong)param_1) + (longlong)this)
                      );
      this[-2] = *(int *)((longlong)(pFVar1 + -1) + 8);
      FString::FString((FString *)this,pFVar1);
      pFVar1 = (FString *)((longlong)(pFVar1 + 2) + 8);
      this = this + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FCapturedPropSegment,int> @ 14e2d1b80

void __cdecl DestructItems<FCapturedPropSegment,int>(FCapturedPropSegment *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ComponentName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PropertyName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FVariantDependency,int> @ 14e2d1bd0

void __cdecl DestructItems<FVariantDependency,int>(FVariantDependency *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->VariantSet).SoftObjectPtr.field_0x18;
    do {
      if ((void *)puVar1[5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[5]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<ALevelVariantSetsActor> @ 14e2d27e0

FString * __cdecl GetTypeName<ALevelVariantSetsActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = ALevelVariantSetsActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<AActor_*,int,FIdentityFunctor,`ASwitchActor::GetOptions'::__l2::<lambda_1>_> @ 14e2d2820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
          (AActor **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  AActor *pAVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  <lambda_1> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14e2d292c:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = 0;
            pAVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = pAVar1;
            if (1 < iVar5) {
              do {
                iVar8 = iVar7 * 2;
                iVar4 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `ASwitchActor::GetOptions'::__l2::<lambda_1>::operator()
                                    (local_res20,param_1[(longlong)iVar8 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar8;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = `ASwitchActor::GetOptions'::__l2::<lambda_1>::operator()
                                  (local_res20,param_1[iVar7],param_1[iVar4]);
                if (!bVar3) break;
                pAVar1 = param_1[iVar7];
                param_1[iVar7] = param_1[iVar4];
                param_1[iVar4] = pAVar1;
                iVar7 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `ASwitchActor::GetOptions'::__l2::<lambda_1>::operator()
                        (local_res20,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `ASwitchActor::GetOptions'::__l2::<lambda_1>::operator()
                      (local_res20,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14e2d292c;
    pAVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pAVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<ALevelVariantSetsActor> @ 14e2d2a10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ALevelVariantSetsActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USceneComponent *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick.Target = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick.Target + 4) = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    pFVar2 = FName::FName(&local_res8,L"SceneComp");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->RootComponent).field0_0x0.DebugPtr = pUVar4;
  }
  return;
}

// InternalConstructor<ASwitchActor> @ 14e2d2b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ASwitchActor>(FObjectInitializer *param_1)

{
  AActor *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASwitchActor__6B_;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,L"Root");
    FVar1 = *pFVar2;
    pUVar3 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    this[1]._padding_ = (longlong)pUVar4;
    (**(code **)(*(longlong *)pUVar4 + 0x5f8))(pUVar4,0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = (TObjectPtr<USceneComponent>_u_0)this[1]._padding_;
  }
  return;
}

// InternalConstructor<ULevelVariantSets> @ 14e2d2c10

void __cdecl InternalConstructor<ULevelVariantSets>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULevelVariantSets__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<ULevelVariantSetsFunctionDirector> @ 14e2d2c80

void __cdecl InternalConstructor<ULevelVariantSetsFunctionDirector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULevelVariantSetsFunctionDirector__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 2;
  }
  return;
}

// InternalConstructor<UPropertyValue> @ 14e2d2cd0

void __cdecl InternalConstructor<UPropertyValue>(FObjectInitializer *param_1)

{
  if ((UPropertyValue *)param_1->Obj != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue((UPropertyValue *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPropertyValueColor> @ 14e2d2cf0

void __cdecl InternalConstructor<UPropertyValueColor>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueColor__6B_;
  }
  return;
}

// InternalConstructor<UPropertyValueMaterial> @ 14e2d2d20

void __cdecl InternalConstructor<UPropertyValueMaterial>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueMaterial__6B_;
  }
  return;
}

// InternalConstructor<UPropertyValueOption> @ 14e2d2d50

void __cdecl InternalConstructor<UPropertyValueOption>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueOption__6B_;
  }
  return;
}

// InternalConstructor<UPropertyValueSoftObject> @ 14e2d2d80

void __cdecl InternalConstructor<UPropertyValueSoftObject>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueSoftObject__6B_;
  }
  return;
}

// InternalConstructor<UPropertyValueTransform> @ 14e2d2db0

void __cdecl InternalConstructor<UPropertyValueTransform>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueTransform__6B_;
  }
  return;
}

// InternalConstructor<UPropertyValueVisibility> @ 14e2d2de0

void __cdecl InternalConstructor<UPropertyValueVisibility>(FObjectInitializer *param_1)

{
  UPropertyValue *this;
  
  this = (UPropertyValue *)param_1->Obj;
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueVisibility__6B_;
  }
  return;
}

// InternalConstructor<UVariant> @ 14e2d2e10

void __cdecl InternalConstructor<UVariant>(FObjectInitializer *param_1)

{
  UObject *this;
  FText *pFVar1;
  FText local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVariant__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FText::FText((FText *)&this[1].field_0x10);
    FText::FText((FText *)&this[1].field_0x20);
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    pFVar1 = FText::FromString(&local_18,L"Variant");
    FText::operator=((FText *)&this[1].field_0x20,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// InternalConstructor<UVariantObjectBinding> @ 14e2d2eb0

void __cdecl InternalConstructor<UVariantObjectBinding>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVariantObjectBinding__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UVariantSet> @ 14e2d2f20

void __cdecl InternalConstructor<UVariantSet>(FObjectInitializer *param_1)

{
  UObject *this;
  FText *pFVar1;
  FText local_18;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVariantSet__6B_;
    FText::FText((FText *)(this + 1));
    FText::FText((FText *)&this[1].field_0x10);
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    pFVar1 = FText::FromString(&local_18,L"Variant Set");
    FText::operator=((FText *)&this[1].field_0x10,pFVar1);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    this[1].field_0x20 = 1;
  }
  return;
}

// InternalVTableHelperCtorCaller<ALevelVariantSetsActor> @ 14e2d2fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ALevelVariantSetsActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ALevelVariantSetsActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick.Target = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick.Target + 4) = 0;
    this[1].RemoteRole = '\0';
    this[1].ActorCategory = '\0';
    *(undefined2 *)&this[1].field_0x62 = 0;
    this[1].InitialLifeSpan = 0.0;
    this[1].CustomTimeDilation = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASwitchActor> @ 14e2d30c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASwitchActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ASwitchActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASwitchActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelVariantSets> @ 14e2d31a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULevelVariantSets>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelVariantSets::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelVariantSets__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULevelVariantSetsFunctionDirector> @ 14e2d3290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULevelVariantSetsFunctionDirector>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULevelVariantSetsFunctionDirector::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULevelVariantSetsFunctionDirector__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 2;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValue> @ 14e2d3350

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValue>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValue::GetPrivateStaticClass();
  pUVar3 = (UPropertyValue *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UPropertyValue *)0x0) {
    pUVar3 = UPropertyValue::UPropertyValue(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueColor> @ 14e2d33f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueColor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueColor::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueColor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueMaterial> @ 14e2d34a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueMaterial>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueMaterial::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueMaterial__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueOption> @ 14e2d3550

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueOption>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueOption::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueOption__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueSoftObject> @ 14e2d3600

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueSoftObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueSoftObject::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueSoftObject__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueTransform> @ 14e2d36b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueTransform>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueTransform::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueTransform__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyValueVisibility> @ 14e2d3760

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyValueVisibility>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPropertyValue *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyValueVisibility::GetPrivateStaticClass();
  this = (UPropertyValue *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPropertyValue *)0x0) {
    UPropertyValue::UPropertyValue(this,param_1);
    this->_padding_ = (longlong)&___7UPropertyValueVisibility__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVariant> @ 14e2d3810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVariant>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVariant::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVariant__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    FText::FText((FText *)&pUVar1[1].field_0x10);
    FText::FText((FText *)&pUVar1[1].field_0x20);
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVariantObjectBinding> @ 14e2d38e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVariantObjectBinding>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVariantObjectBinding::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVariantObjectBinding__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVariantSet> @ 14e2d39d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVariantSet>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVariantSet::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVariantSet__6B_;
    FText::FText((FText *)(pUVar1 + 1));
    FText::FText((FText *)&pUVar1[1].field_0x10);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<AActor_*,int,FIdentityFunctor,`ASwitchActor::GetOptions'::__l2::<lambda_1>_> @ 14e2d3aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
          (AActor **param_1,int param_2,FIdentityFunctor param_3,<lambda_1> param_4)

{
  AActor *pAVar1;
  int iVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  AActor **ppAVar5;
  AActor **ppAVar6;
  AActor **ppAVar7;
  AActor **ppAVar8;
  AActor **ppAVar9;
  float fVar10;
  undefined1 auStack_408 [32];
  <lambda_1> local_3e8;
  FName local_3e4;
  AActor ***local_3d8;
  int local_3d0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378 [2];
  AActor **local_358;
  AActor **local_348;
  AActor **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3e8 = param_4;
    local_348 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar10;
    memset(local_330,0,0x2e8);
    local_3d8 = &local_348;
    do {
      ppAVar7 = local_3d8[1];
      ppAVar6 = *local_3d8;
      local_358 = local_3d8[2];
      iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar6 >> 3) + 1;
      local_3d0 = (int)local_358;
      ppAVar5 = ppAVar6;
      if ((int)local_358 != 0) {
LAB_14e2d3b70:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppAVar8 = ppAVar7 + 1;
          pAVar1 = ppAVar5[iVar2 >> 1];
          ppAVar5[iVar2 >> 1] = *ppAVar5;
          *ppAVar5 = pAVar1;
          ppAVar6 = ppAVar5;
LAB_14e2d3ba0:
          ppAVar6 = ppAVar6 + 1;
          if (ppAVar6 <= ppAVar7) goto code_r0x00014e2d3bad;
          goto LAB_14e2d3c40;
        }
        for (; ppAVar8 = ppAVar5, ppAVar6 = ppAVar5, ppAVar5 < ppAVar7; ppAVar7 = ppAVar7 + -1) {
          while (ppAVar9 = ppAVar8, ppAVar6 = ppAVar6 + 1, ppAVar6 <= ppAVar7) {
            pAVar1 = *ppAVar9;
            local_3e4 = (FName)(*ppAVar6)->_padding_;
            ::FName::ToString(&local_3e4,local_378);
            local_3e4 = (FName)pAVar1->_padding_;
            ::FName::ToString(&local_3e4,&local_388);
            FVar4.Data = (FScriptContainerElement *)L"";
            if (local_378[0].Data.ArrayNum != 0) {
              FVar4.Data = local_378[0].Data.AllocatorInstance.Data;
            }
            FVar3.Data = (FScriptContainerElement *)L"";
            if (local_388.Data.ArrayNum != 0) {
              FVar3.Data = local_388.Data.AllocatorInstance.Data;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            if (local_378[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378[0].Data.AllocatorInstance.Data);
            }
            ppAVar8 = ppAVar6;
            if (-1 < iVar2) {
              ppAVar8 = ppAVar9;
            }
          }
          pAVar1 = *ppAVar9;
          *ppAVar9 = *ppAVar7;
          *ppAVar7 = pAVar1;
          param_4 = local_3e8;
        }
        goto LAB_14e2d3da7;
      }
LAB_14e2d3d90:
      HeapSortInternal<AActor_*,int,FIdentityFunctor,_ASwitchActor::GetOptions_::__l2::<lambda_1>_>
                (ppAVar6,iVar2,param_3,param_4);
LAB_14e2d3da7:
      local_3d8 = local_3d8 + -3;
    } while (&local_348 <= local_3d8);
  }
  return;
code_r0x00014e2d3bad:
  pAVar1 = *ppAVar5;
  local_3e4 = (FName)(*ppAVar6)->_padding_;
  ::FName::ToString(&local_3e4,&local_3b8);
  local_3e4 = (FName)pAVar1->_padding_;
  ::FName::ToString(&local_3e4,&local_3c8);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar4.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar3.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (-1 < iVar2) goto LAB_14e2d3ba0;
LAB_14e2d3c40:
  do {
    ppAVar9 = ppAVar8;
    ppAVar8 = ppAVar9 + -1;
    if (ppAVar8 <= ppAVar5) break;
    pAVar1 = *ppAVar8;
    local_3e4 = (FName)(*ppAVar5)->_padding_;
    ::FName::ToString(&local_3e4,&local_398);
    local_3e4 = (FName)pAVar1->_padding_;
    ::FName::ToString(&local_3e4,&local_3a8);
    FVar4.Data = (FScriptContainerElement *)L"";
    if (local_398.Data.ArrayNum != 0) {
      FVar4.Data = local_398.Data.AllocatorInstance.Data;
    }
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_3a8.Data.ArrayNum != 0) {
      FVar3.Data = local_3a8.Data.AllocatorInstance.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar3.Data,(wchar_t *)FVar4.Data);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  } while (-1 < iVar2);
  if (ppAVar6 <= ppAVar8) {
    pAVar1 = *ppAVar6;
    *ppAVar6 = *ppAVar8;
    *ppAVar8 = pAVar1;
    goto LAB_14e2d3ba0;
  }
  pAVar1 = *ppAVar5;
  *ppAVar5 = *ppAVar8;
  local_3d0 = local_3d0 + -1;
  *ppAVar8 = pAVar1;
  if ((longlong)((longlong)ppAVar8 + (-8 - (longlong)ppAVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppAVar7 - (longlong)ppAVar6 & 0xfffffffffffffff8U)) {
    if (ppAVar6 < ppAVar7) {
      *local_3d8 = ppAVar6;
      local_3d8[1] = ppAVar7;
      *(int *)(local_3d8 + 2) = local_3d0;
      local_3d8 = local_3d8 + 3;
    }
    if (ppAVar8 <= ppAVar5 + 1) goto LAB_14e2d3da7;
    ppAVar7 = ppAVar9 + -2;
    ppAVar6 = ppAVar5;
  }
  else {
    if (ppAVar5 + 1 < ppAVar8) {
      *local_3d8 = ppAVar5;
      local_3d8[1] = ppAVar9 + -2;
      *(int *)(local_3d8 + 2) = local_3d0;
      local_3d8 = local_3d8 + 3;
    }
    if (ppAVar7 <= ppAVar6) goto LAB_14e2d3da7;
  }
  iVar2 = (int)((longlong)ppAVar7 - (longlong)ppAVar6 >> 3) + 1;
  ppAVar5 = ppAVar6;
  if (local_3d0 == 0) goto LAB_14e2d3d90;
  goto LAB_14e2d3b70;
}

// NewObject<ULevelVariantSetsFunctionDirector> @ 14e2d3ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

ULevelVariantSetsFunctionDirector * __cdecl
NewObject<ULevelVariantSetsFunctionDirector>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  ULevelVariantSetsFunctionDirector *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = ULevelVariantSetsFunctionDirector::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (ULevelVariantSetsFunctionDirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EPropertyValueCategory> @ 14e2d3fe0

UEnum * __cdecl StaticEnum<enum_EPropertyValueCategory>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VariantManagerContent();
    Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_VariantManagerContent_EPropertyValueCategory,
                       (UObject *)pUVar1,L"EPropertyValueCategory");
  }
  return Z_Registration_Info_UEnum_EPropertyValueCategory.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e2d5a90

void * __thiscall
IBaseDelegateInstance<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5ac0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy,`ULevelVariantSets::GetDirectorInstance'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5af0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(ULevelVariantSetsFunctionDirector_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ALevelVariantSetsActor::_scalar_deleting_destructor_(ALevelVariantSetsActor *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ALevelVariantSetsActor__6B_;
  *(undefined4 *)&(this->DirectorInstances).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DirectorInstances).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UBlueprintGeneratedClass>,TObjectPtr<ULevelVariantSetsFunctionDirector>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DirectorInstances);
  pFVar2 = (this->LevelVariantSets).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x330);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall ASwitchActor::_scalar_deleting_destructor_(ASwitchActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ASwitchActor__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSwitchActorSwitch).field_0x8,*(int *)&(this->OnSwitchActorSwitch).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSwitchActorSwitch).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSwitchActorSwitch);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ULevelVariantSets::_scalar_deleting_destructor_(ULevelVariantSets *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULevelVariantSets__6B_;
  *(undefined4 *)&(this->WorldToDirectorInstance).field_0x48 = 0;
  pvVar1 = *(void **)&(this->WorldToDirectorInstance).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_*,TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WorldToDirectorInstance);
  pFVar2 = (this->VariantSets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5d20

void * __thiscall
ULevelVariantSetsFunctionDirector::_scalar_deleting_destructor_
          (ULevelVariantSetsFunctionDirector *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULevelVariantSetsFunctionDirector__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnDestroy).field_0x8,
             *(int *)&(this->OnDestroy).field_0x10);
  pvVar1 = *(void **)&(this->OnDestroy).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDestroy);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5dc0

void * __thiscall UPropertyValue::_scalar_deleting_destructor_(UPropertyValue *this,uint param_1)

{
  ~UPropertyValue(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5e20

void * __thiscall
UPropertyValueColor::_scalar_deleting_destructor_(UPropertyValueColor *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueColor__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5e80

void * __thiscall
UPropertyValueMaterial::_scalar_deleting_destructor_(UPropertyValueMaterial *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueMaterial__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5ee0

void * __thiscall
UPropertyValueOption::_scalar_deleting_destructor_(UPropertyValueOption *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueOption__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5f40

void * __thiscall
UPropertyValueSoftObject::_scalar_deleting_destructor_(UPropertyValueSoftObject *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueSoftObject__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d5fa0

void * __thiscall
UPropertyValueTransform::_scalar_deleting_destructor_(UPropertyValueTransform *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueTransform__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d6000

void * __thiscall
UPropertyValueVisibility::_scalar_deleting_destructor_(UPropertyValueVisibility *this,uint param_1)

{
  *(undefined ***)this = &___7UPropertyValueVisibility__6B_;
  UPropertyValue::~UPropertyValue((UPropertyValue *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d6060

void * __thiscall UVariant::_scalar_deleting_destructor_(UVariant *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UVariant__6B_;
  pFVar1 = (this->ObjectBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayText_DEPRECATED).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FVariantDependency,int>
            ((FVariantDependency *)(this->Dependencies).AllocatorInstance.Data,
             (this->Dependencies).ArrayNum);
  pFVar1 = (this->Dependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d6110

void * __thiscall
UVariantObjectBinding::_scalar_deleting_destructor_(UVariantObjectBinding *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVariantObjectBinding__6B_;
  pFVar1 = (this->FunctionCallers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CapturedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ObjectPtr).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedActorLabel).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2d61b0

void * __thiscall UVariantSet::_scalar_deleting_destructor_(UVariantSet *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UVariantSet__6B_;
  pFVar1 = (this->Variants).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->DisplayText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->DisplayText_DEPRECATED).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// CreateTextureFromBulkData @ 14e2dae10

UTexture2D * __cdecl
ThumbnailGeneratorImpl::CreateTextureFromBulkData
          (uint param_1,uint param_2,void *param_3,ulong64 param_4,EPixelFormat param_5,bool param_6
          )

{
  code *pcVar1;
  bool bVar2;
  UTexture2D *pUVar3;
  FTexturePlatformData *pFVar4;
  void *_Dst;
  TArrayView<unsigned_char_const_,__int64> local_18;
  
  local_18.DataPtr = (uchar *)0x0;
  local_18.ArrayNum = 0;
  pUVar3 = UTexture2D::CreateTransient(param_1,param_2,param_5,(FName)0x0,&local_18);
  if (pUVar3 != (UTexture2D *)0x0) {
    pFVar4 = UTexture2D::GetPlatformData(pUVar3);
    if ((pFVar4->Mips).Array.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UTexture2D *)(*pcVar1)();
        return pUVar3;
      }
    }
    _Dst = FBulkData::Lock((FBulkData *)
                           (*(longlong *)(pFVar4->Mips).Array.AllocatorInstance.Data + 0x20),2);
    memcpy(_Dst,param_3,param_4);
    pFVar4 = UTexture2D::GetPlatformData(pUVar3);
    if ((pFVar4->Mips).Array.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UTexture2D *)(*pcVar1)();
        return pUVar3;
      }
    }
    FBulkData::Unlock((FBulkData *)(*(longlong *)(pFVar4->Mips).Array.AllocatorInstance.Data + 0x20)
                     );
    pFVar4 = UTexture2D::GetPlatformData(pUVar3);
    pFVar4->PackedData = pFVar4->PackedData & 0xe0000001;
    pFVar4->PackedData = pFVar4->PackedData | 1;
    (**(code **)(pUVar3->_padding_ + 0x328))(pUVar3);
  }
  return pUVar3;
}

// DiscoverSelectedOption @ 14e2db100

int __cdecl
SwitchActorImpl::DiscoverSelectedOption(TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar6 = param_1->ArrayNum;
  uVar7 = 0;
  uVar9 = 0xffffffff;
  if (iVar6 < 1) {
    return -1;
  }
  lVar8 = 0;
  while( true ) {
    uVar5 = 0;
    if ((int)uVar7 < iVar6) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    plVar1 = *(longlong **)(*(longlong *)((param_1->AllocatorInstance).Data + lVar8) + 0x1b8);
    if (((plVar1 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar1 + 0x560))(), cVar4 != '\0'))
       && (bVar3 = uVar9 != 0xffffffff, uVar9 = uVar7, bVar3)) {
      return -1;
    }
    iVar6 = param_1->ArrayNum;
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 8;
    if (iVar6 <= (int)uVar7) {
      return uVar9;
    }
  }
  pcVar2 = (code *)swi(3);
  iVar6 = (*pcVar2)();
  return iVar6;
}

// EmptyLinkFunctionForGeneratedCodeFunctionCaller @ 14e2db1f0

void __cdecl EmptyLinkFunctionForGeneratedCodeFunctionCaller(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelVariantSets @ 14e2db200

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelVariantSets(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActor @ 14e2db210

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelVariantSetsActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLevelVariantSetsFunctionDirector @ 14e2db220

void __cdecl EmptyLinkFunctionForGeneratedCodeLevelVariantSetsFunctionDirector(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyValue @ 14e2db230

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyValue(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyValueColor @ 14e2db240

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyValueColor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyValueMaterial @ 14e2db250

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyValueMaterial(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyValueOption @ 14e2db260

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyValueOption(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyValueSoftObject @ 14e2db270

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyValueSoftObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSwitchActor @ 14e2db280

void __cdecl EmptyLinkFunctionForGeneratedCodeSwitchActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVariant @ 14e2db290

void __cdecl EmptyLinkFunctionForGeneratedCodeVariant(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVariantManagerContent_init @ 14e2db2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeVariantManagerContent_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVariantObjectBinding @ 14e2db2b0

void __cdecl EmptyLinkFunctionForGeneratedCodeVariantObjectBinding(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVariantSet @ 14e2db2c0

void __cdecl EmptyLinkFunctionForGeneratedCodeVariantSet(void)

{
  return;
}

// EnumIndexToValueBytes @ 14e2db2d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
EnumIndexToValueBytes
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UEnum *param_1,
          int param_2,int param_3,bool param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TTuple<FName,__int64> *pTVar5;
  TTuple<FName,__int64> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (__return_storage_ptr__,param_3,Default);
  bVar3 = IsEnumIndexValid(param_1,param_2);
  if (!bVar3) {
    return __return_storage_ptr__;
  }
  if (((param_2 < 0) || ((param_1->Names).NumValues <= param_2)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Names.IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xb2d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar4;
  }
  pTVar5 = UEnum::FNameData::operator[](&param_1->Names,&local_18,param_2);
  uVar1 = *(undefined8 *)&pTVar5->field_0x8;
  if (param_4) {
    if (param_3 == 1) {
LAB_14e2db3e4:
      *(__return_storage_ptr__->AllocatorInstance).Data = SUB81(uVar1,0);
      return __return_storage_ptr__;
    }
    if (param_3 == 2) {
LAB_14e2db3dc:
      *(short *)(__return_storage_ptr__->AllocatorInstance).Data = (short)uVar1;
      return __return_storage_ptr__;
    }
    if (param_3 == 4) {
LAB_14e2db3d5:
      *(int *)(__return_storage_ptr__->AllocatorInstance).Data = (int)uVar1;
      return __return_storage_ptr__;
    }
    if (param_3 != 8) {
      if ((byte)LogVariantContent._0_1_ < 2) {
        return __return_storage_ptr__;
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      return __return_storage_ptr__;
    }
  }
  else {
    if (param_3 == 1) goto LAB_14e2db3e4;
    if (param_3 == 2) goto LAB_14e2db3dc;
    if (param_3 == 4) goto LAB_14e2db3d5;
    if (param_3 != 8) {
      if ((byte)LogVariantContent._0_1_ < 2) {
        return __return_storage_ptr__;
      }
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)(__return_storage_ptr__->AllocatorInstance).Data = uVar1;
  return __return_storage_ptr__;
}

// EnumValueBytesToIndex @ 14e2db410

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
EnumValueBytesToIndex
          (UEnum *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FStaticBasicLogRecord *pFVar3;
  
  pFVar1 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  if (param_3) {
    if (iVar2 == 1) {
      iVar2 = UEnum::GetIndexByValue(param_1,(longlong)(char)*pFVar1);
      return iVar2;
    }
    if (iVar2 == 2) {
      iVar2 = UEnum::GetIndexByValue(param_1,(longlong)(short)*(ushort *)pFVar1);
      return iVar2;
    }
    if (iVar2 == 4) {
      iVar2 = UEnum::GetIndexByValue(param_1,(longlong)(int)*(uint *)pFVar1);
      return iVar2;
    }
    if (iVar2 == 8) {
LAB_14e2db4bf:
      iVar2 = UEnum::GetIndexByValue(param_1,*(long64 *)pFVar1);
      return iVar2;
    }
    if ((byte)LogVariantContent._0_1_ < 2) {
      return -1;
    }
    pFVar3 = &LOG_Static;
  }
  else {
    if (iVar2 == 1) {
      iVar2 = UEnum::GetIndexByValue(param_1,(ulonglong)(byte)*pFVar1);
      return iVar2;
    }
    if (iVar2 == 2) {
      iVar2 = UEnum::GetIndexByValue(param_1,(ulonglong)*(ushort *)pFVar1);
      return iVar2;
    }
    if (iVar2 == 4) {
      iVar2 = UEnum::GetIndexByValue(param_1,(ulonglong)*(uint *)pFVar1);
      return iVar2;
    }
    if (iVar2 == 8) goto LAB_14e2db4bf;
    if ((byte)LogVariantContent._0_1_ < 2) {
      return -1;
    }
    pFVar3 = &LOG_Static;
  }
  UE::Logging::Private::BasicLog<2>(pFVar3,(FLogCategoryBase *)&LogVariantContent);
  return -1;
}

// GenerateThumbnailFromCamera @ 14e2dbaf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

UTexture2D * __cdecl
ThumbnailGenerator::GenerateThumbnailFromCamera
          (UObject *param_1,TTransform<double> *param_2,float param_3,float param_4,float param_5)

{
  FSceneInterface *pFVar1;
  longlong lVar2;
  TInverseRotationMatrix<double> *pTVar3;
  TInverseRotationMatrix<double> *pTVar4;
  UTexture2D *pUVar5;
  undefined1 auStackY_2d8 [32];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_298;
  TVector<double>_u_0 local_288;
  double dStack_270;
  TMatrix<double> local_268;
  TRotator<double> local_1e8;
  TMatrix<double> local_1c8;
  TInverseRotationMatrix<double> local_148;
  TInverseRotationMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if ((param_1 == (UObject *)0x0) ||
     (lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))(), lVar2 == 0)) {
    pUVar5 = (UTexture2D *)0x0;
  }
  else {
    pFVar1 = *(FSceneInterface **)(lVar2 + 600);
    local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_298.ArrayNum = 0;
    local_298.ArrayMax = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x10000,&local_298.AllocatorInstance,&local_298.ArrayNum,&local_298.ArrayMax);
    local_268.M[0][0] = tan((double)(param_3 + param_3));
    local_268.M[0][0] = __real_3ff0000000000000 / local_268.M[0][0];
    local_268.M[2][0] = 0.0;
    local_268.M[2][1] = 0.0;
    local_268.M[0][2] = 0.0;
    local_268.M[0][3] = 0.0;
    local_268.M[1][2] = 0.0;
    local_268.M[1][3] = 0.0;
    local_268.M[3][2] = (double)param_4;
    local_268.M[2][2] = ___xmm_3ff00000000000000000000000000000;
    local_268.M[2][3] = _UNK_15061cbc8;
    local_288._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
    local_288._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
    local_268.M[3][0] = 0.0;
    local_268.M[3][1] = 0.0;
    local_288._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_270 = (param_2->Rotation).ZW.m128d_f64[1];
    local_268.M[0][1] = 0.0;
    local_268.M[1][0] = 0.0;
    local_268.M[3][3] = 0.0;
    local_268.M[1][1] = local_268.M[0][0];
    UE::Math::TQuat<double>::Rotator((TQuat<double> *)&local_288._s_0,&local_1e8);
    pTVar3 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                       (&local_148,&local_1e8);
    local_288._s_0.X = ___xmm_c0568000000000000000000000000000;
    local_288._s_0.Y = _UNK_152242e68;
    local_288._s_0.Z = __real_4056800000000000;
    pTVar4 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                       (&local_c8,(TRotator<double> *)&local_288._s_0);
    VectorMatrixMultiply(&local_1c8,(TMatrix<double> *)pTVar3,(TMatrix<double> *)pTVar4);
    local_288._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    local_288._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
    local_288._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
    ThumbnailGeneratorImpl::RenderSceneToTexture
              (pFVar1,(TVector<double> *)&local_288._s_0,&local_1c8,&local_268,
               (TIntPoint<int>)0x10000000100,param_5,&local_298);
    pUVar5 = ThumbnailGeneratorImpl::CreateTextureFromBulkData
                       (0x100,0x100,local_298.AllocatorInstance.Data,
                        (longlong)local_298.ArrayNum << 2,PF_B8G8R8A8,true);
    if ((pUVar5 == (UTexture2D *)0x0) && (2 < (byte)LogVariantContent._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
    }
    if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.AllocatorInstance.Data);
    }
  }
  return pUVar5;
}

// GenerateThumbnailFromEditorViewport @ 14e2dbd60

UTexture2D * __cdecl ThumbnailGenerator::GenerateThumbnailFromEditorViewport(void)

{
  return (UTexture2D *)0x0;
}

// GenerateThumbnailFromFile @ 14e2dbd70

UTexture2D * __cdecl ThumbnailGenerator::GenerateThumbnailFromFile(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FPlatformFileManager *this;
  IPlatformFile *pIVar3;
  UTexture2D *pUVar4;
  wchar_t *pwVar5;
  
  this = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar2 = (**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,pwVar5);
  if (cVar2 != '\0') {
    pUVar4 = FImageUtils::ImportFileAsTexture2D(param_1);
    if (pUVar4 != (UTexture2D *)0x0) {
      pUVar4 = GenerateThumbnailFromTexture(pUVar4);
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return pUVar4;
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (UTexture2D *)0x0;
}

// GenerateThumbnailFromObjectThumbnail @ 14e2dbe00

UTexture2D * __cdecl ThumbnailGenerator::GenerateThumbnailFromObjectThumbnail(UObject *param_1)

{
  return (UTexture2D *)0x0;
}

// GenerateThumbnailFromTexture @ 14e2dbe10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UTexture2D * __cdecl ThumbnailGenerator::GenerateThumbnailFromTexture(UTexture2D *param_1)

{
  Type TVar1;
  float fVar2;
  FLinearColor FVar3;
  uint uVar4;
  uint uVar5;
  FTextureResource *pFVar6;
  UObject *pUVar7;
  UTextureRenderTarget2D *this;
  FUObjectItem *pFVar8;
  FTextureRenderTargetResource *pFVar9;
  FGameTime *pFVar10;
  UTexture2D *pUVar11;
  FRenderTarget *pFVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_228 [32];
  FGameTime local_1c8;
  TIntRect<int>_u_0 local_1a8;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_198;
  FReadSurfaceDataFlags local_188;
  FCanvas local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  if (param_1 != (UTexture2D *)0x0) {
    UStreamableRenderAsset::SetForceMipLevelsToBeResident
              ((UStreamableRenderAsset *)param_1,__real_41f00000,0);
    UStreamableRenderAsset::WaitForStreaming((UStreamableRenderAsset *)param_1,false,false);
    uVar4 = UTexture2D::GetSizeX(param_1);
    uVar5 = UTexture2D::GetSizeY(param_1);
    if (((uVar4 != 0) && (uVar5 != 0)) &&
       (pFVar6 = UTexture::GetResource((UTexture *)param_1), pFVar6 != (FTextureResource *)0x0)) {
      if ((0x100 < (int)uVar4) || (uVar13 = uVar4, uVar14 = uVar5, 0x100 < (int)uVar5)) {
        if ((int)uVar4 < (int)uVar5) {
          uVar14 = 0x100;
          uVar13 = (uint)((float)(int)(uVar4 << 8) / (float)(int)uVar5);
        }
        else {
          uVar13 = 0x100;
          uVar14 = (uint)((float)(int)(uVar5 << 8) / (float)(int)uVar4);
        }
      }
      pUVar7 = GetTransientPackageAsObject();
      this = NewObject<UTextureRenderTarget2D>(pUVar7);
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(pFVar8,RootSet);
      FVar3 = FLinearColor::Transparent;
      *(undefined4 *)&this->_padding_ = 0;
      (this->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
      UTextureRenderTarget2D::InitCustomFormat(this,uVar13,uVar14,PF_B8G8R8A8,false);
      pFVar9 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                         ((UTextureRenderTarget *)this);
      TVar1 = (GWorld.World)->Scene->FeatureLevel;
      pFVar10 = FGameTime::GetTimeSinceAppStart(&local_1c8);
      fVar2 = __real_3f800000;
      pFVar12 = (FRenderTarget *)&pFVar9->_padding_;
      if (pFVar9 == (FTextureRenderTargetResource *)0x0) {
        pFVar12 = (FRenderTarget *)0x0;
      }
      FCanvas::FCanvas(&local_168,pFVar12,(FHitProxyConsumer *)0x0,pFVar10,TVar1,__real_3f800000);
      FCanvas::Clear(&local_168,&FLinearColor::Black);
      pFVar6 = UTexture::GetResource((UTexture *)param_1);
      FCanvas::DrawTile(&local_168,0.0,0.0,(double)(int)uVar13,(double)(int)uVar14,0.0,0.0,fVar2,
                        fVar2,&FLinearColor::White,(FTexture *)pFVar6,false);
      FCanvas::Flush_GameThread(&local_168,false);
      local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_198.ArrayNum = 0;
      local_198.ArrayMax = 0;
      TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_198,uVar14 * uVar13,Default);
      local_1a8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
      local_1c8.RealTimeSeconds = (double)&DAT_00000006;
      local_1c8.WorldTimeSeconds._0_4_ = CONCAT31(local_1c8.WorldTimeSeconds._1_3_,1);
      local_1c8.WorldTimeSeconds._4_4_ = 0x467a0000;
      local_188.MaxDepthRange = 16000.0;
      local_188._8_4_ = local_1c8.WorldTimeSeconds._0_4_;
      local_1c8.DeltaRealTimeSeconds._0_2_ = 0;
      local_1c8.DeltaWorldTimeSeconds = 0.0;
      local_188._16_8_ = (ulonglong)local_1c8.DeltaRealTimeSeconds._2_2_ << 0x10;
      local_188.CubeFace = CubeFace_MAX;
      local_188.CompressionMode = RCM_UNorm;
      local_188.GPUIndex = 0;
      local_1a8._8_4_ = uVar13;
      local_1a8._12_4_ = uVar14;
      FRenderTarget::ReadPixelsPtr
                ((FRenderTarget *)&pFVar9->_padding_,(FColor *)local_198.AllocatorInstance.Data,
                 &local_188,(TIntRect<int> *)&local_1a8._s_0);
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4))
      ;
      FUObjectItem::ClearRootFlags(pFVar8,RootSet);
      pUVar11 = ThumbnailGeneratorImpl::CreateTextureFromBulkData
                          (uVar13,uVar14,local_198.AllocatorInstance.Data,
                           (longlong)local_198.ArrayNum << 2,PF_B8G8R8A8,true);
      if ((pUVar11 == (UTexture2D *)0x0) && (2 < (byte)LogVariantContent._0_1_)) {
        local_1a8._s_0.Min.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
        ::FName::ToString((FName *)&local_1a8._s_0,(FString *)&local_1c8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
        if ((undefined1 *)local_1c8.RealTimeSeconds != (undefined1 *)0x0) {
          FMemory::Free((void *)local_1c8.RealTimeSeconds);
        }
      }
      if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.AllocatorInstance.Data);
      }
      FCanvas::~FCanvas(&local_168);
      return pUVar11;
    }
    if (1 < (byte)LogVariantContent._0_1_) {
      local_1a8._s_0.Min.field0_0x0 = (TIntPoint<int>)param_1->_padding_;
      ::FName::ToString((FName *)&local_1a8._s_0,(FString *)&local_1c8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVariantContent);
      if ((void *)local_1c8.RealTimeSeconds != (void *)0x0) {
        FMemory::Free((void *)local_1c8.RealTimeSeconds);
      }
    }
  }
  return (UTexture2D *)0x0;
}

// IsEnumIndexValid @ 14e2e0a20

bool __cdecl IsEnumIndexValid(UEnum *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  FString *this;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  bVar3 = false;
  local_res8.ComparisonIndex.Value = 0;
  if (param_1 == (UEnum *)0x0) {
    return false;
  }
  UEnum::GetNameByIndex(param_1,(int)&local_res8);
  lVar1 = CONCAT44(local_res8.Number,local_res8.ComparisonIndex.Value);
  bVar2 = UEnum::ContainsExistingMax(param_1);
  if (bVar2) {
    this = FName::ToString(&local_res8,&local_18);
    bVar3 = true;
    bVar2 = FString::EndsWith(this,L"_MAX",4,CaseSensitive);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14e2e0a97;
    }
  }
  bVar2 = false;
LAB_14e2e0a97:
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((lVar1 != 0) && (!bVar2)) {
    return true;
  }
  return false;
}

// IsPixelFormatResizeable @ 14e2e0c40

bool __cdecl ThumbnailGeneratorImpl::IsPixelFormatResizeable(EPixelFormat param_1)

{
  if ((param_1 < PF_R16G16B16A16_UNORM) &&
     ((0x3000006000000004U >> ((ulonglong)param_1 & 0x3f) & 1) != 0)) {
    return true;
  }
  return false;
}

// RenderSceneToTexture @ 14e2e2610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
ThumbnailGeneratorImpl::RenderSceneToTexture
          (FSceneInterface *param_1,TVector<double> *param_2,TMatrix<double> *param_3,
          TMatrix<double> *param_4,TIntPoint<int> param_5,float param_6,
          TArray<FColor,TSizedDefaultAllocator<32>_> *param_7)

{
  Type TVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  UObject *pUVar7;
  UTextureRenderTarget2D *this;
  FUObjectItem *pFVar8;
  FTextureRenderTargetResource *pFVar9;
  ConstructionValues *pCVar10;
  FGameTime *pFVar11;
  FLegacyScreenPercentageDriver *pFVar12;
  FSceneView *this_00;
  IRendererModule *pIVar13;
  uint uVar14;
  undefined1 auStackY_858 [32];
  FSceneView *local_808;
  FSceneInterface *local_800;
  undefined8 local_7f8;
  uint local_7f0;
  int iStack_7ec;
  undefined8 local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined2 local_7d8;
  ushort uStack_7d6;
  undefined4 uStack_7d4;
  TIntRect<int>_u_0 local_7c8;
  FRenderTarget *local_7b8;
  FRenderTarget *local_7b0;
  UTextureRenderTarget2D *local_7a8;
  FReadSurfaceDataFlags local_798;
  TSharedPtr<FWN_SceneTexturesCaptureInfo,1> local_778;
  FGameTime local_768;
  FGameTime local_750;
  undefined1 local_738 [784];
  FEngineShowFlags local_428;
  FSceneViewFamily local_3e8;
  ConstructionValues local_228;
  FCanvas local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_858;
  local_800 = param_1;
  pUVar7 = GetTransientPackageAsObject();
  this = NewObject<UTextureRenderTarget2D>(pUVar7);
  local_7a8 = this;
  pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::SetRootFlags(pFVar8,RootSet);
  uVar14 = param_5.field0_0x0._0_4_;
  (this->ClearColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Transparent.field0_0x0;
  *(float *)&this->_padding_ = param_6;
  UTextureRenderTarget2D::InitCustomFormat(this,uVar14,param_5.field0_0x0._s_0.Y,PF_B8G8R8A8,false);
  pFVar9 = UTextureRenderTarget::GameThread_GetRenderTargetResource((UTextureRenderTarget *)this);
  local_428.CustomShowFlags.MaxBits = 0x80;
  local_778.Object = (FWN_SceneTexturesCaptureInfo *)0x0;
  local_778.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_428.CustomShowFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_428._0_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_428._8_8_ = _UNK_15060db28;
  local_428.CustomShowFlags.NumBits = 0;
  local_428._16_8_ = ___xmm_ffffffffffffffffffffffffffffffff;
  local_428._24_8_ = _UNK_15060db28;
  FEngineShowFlags::InitCustomShowFlags(&local_428,ESFIM_Game);
  local_428.Pivot = 0;
  local_428.LightInfluences = 0;
  local_428.HitProxies = 0;
  local_428.Bounds = 0;
  local_428.ModeWidgets = 0;
  local_428.EditingLevelInstance = 0;
  local_428.Selection = 0;
  local_428.Splines = 0;
  local_428.Cover = 0;
  local_428.MeshEdges = 0;
  local_428.Snap = 0;
  local_428.Grid = 0;
  local_428.LargeVertices = 0;
  local_428.Editor = 0;
  local_428.Brushes = 0;
  local_428.BSPSplit = 0;
  local_428.AudioRadius = 0;
  local_428.CameraFrustums = 0;
  local_428.MassProperties = 0;
  local_428.Constraints = 0;
  local_428.StreamingBounds = 0;
  local_428.LightMapDensity = 0;
  local_428.StationaryLightOverlap = 0;
  local_428.ShaderComplexity = 0;
  local_428.LightComplexity = 0;
  local_428.VisualizeInstanceUpdates = 0;
  local_428.HISMCClusterTree = 0;
  local_428.HISMCOcclusionBounds = 0;
  local_428.Navigation = 0;
  local_428.DebugAI = 0;
  local_428.VisualizeSSS = 0;
  local_428.SelectionOutline = 0;
  local_428.DisableOcclusionQueries = 0;
  local_428.VisualizeInstanceOcclusionQueries = 0;
  local_428.OcclusionMeshes = 0;
  local_428.VREditing = 0;
  local_428.ServerDrawDebug = 0;
  local_428.Bones = 0;
  local_428.VisualizeVirtualTexture = 0;
  local_428.RequiredTextureResolution = 0;
  local_428.OutputMaterialTextureScales = 0;
  local_428.MaterialTextureScaleAccuracy = 0;
  local_428.MeshUVDensityAccuracy = 0;
  local_428.PrimitiveDistanceAccuracy = 0;
  local_428.ShaderComplexityWithQuadOverdraw = 0;
  local_428.QuadOverdraw = 0;
  local_428.HLODColoration = 0;
  local_428.LODColoration = 0;
  local_428.VisualizeShadingModels = 0;
  local_428.VisualizeSSR = 0;
  local_428.VisualizeLightingOnProbes = 0;
  local_428.VisualizeGlobalDistanceField = 0;
  local_428.PhysicsField = 0;
  local_428.VisualizeMeshDistanceFields = 0;
  local_428.VisualizeDistanceFieldAO = 0;
  local_428.VolumeLightingSamples = 0;
  local_428.VisualizeVolumetricLightmap = 0;
  local_428.PrecomputedVisibilityCells = 0;
  local_428.VisualizeLightCulling = 0;
  local_428.DistanceCulledPrimitives = 0;
  local_428.StereoRendering = 0;
  local_428.HMDDistortion = 0;
  local_428.HighResScreenshotMask = 0;
  local_428.CameraSafeFrames = 0;
  local_428.CameraAspectRatioBars = 0;
  local_428.CollisionPawn = 0;
  local_428.CollisionVisibility = 0;
  local_428.Collision = 0;
  local_428.ActorColoration = 0;
  local_428.Game = 1;
  local_428.Volumes = 0;
  local_428.LightRadius = 0;
  local_428.Wireframe = 0;
  local_428.ShadowFrustums = 0;
  local_428.VisualizeOutOfBoundsPixels = 0;
  local_428.VisualizeTSR = 0;
  local_428.VisualizeTemporalUpscaler = 0;
  local_428.VisualizeReprojection = 0;
  local_428.VisualizeMotionVectors = 0;
  local_428.VisualizeMotionBlur = 0;
  local_428.ScreenPercentage = 1;
  local_428.PhysicalMaterialMasks = 0;
  local_428.VertexColors = 0;
  local_428.VisualizeDOF = 0;
  local_428.TestImage = 0;
  local_428.OpaqueCompositeEditorPrimitives = 0;
  local_428.CompositeEditorPrimitives = 0;
  local_428.CompositeDebugPrimitives = 1;
  local_428.MotionBlur = 1;
  local_428.GBufferHints = 0;
  local_428.VectorFields = 0;
  local_428.VisualizeVirtualShadowMap = 0;
  local_428.VisualizeGroom = 0;
  local_428.VisualizeSubstrate = 0;
  local_428.VisualizeLumen = 0;
  local_428.VisualizeNanite = 0;
  local_428.VisualizeBuffer = 0;
  local_428.MaterialAmbientOcclusion = 1;
  local_428.MaterialNormal = 1;
  local_428.ReflectionOverride = 0;
  local_428.LightingOnlyOverride = 0;
  local_428.OverrideDiffuseAndSpecular = 0;
  local_428.VisualizeLocalExposure = 0;
  local_428.VisualizeLocalFogVolumes = 0;
  local_428.VisualizeSkyLightIlluminance = 0;
  local_428.VisualizeHDR = 0;
  local_428.RandomColor = 0;
  local_428.FrontBackFace = 0;
  local_428.Zebra = 0;
  local_428.Clay = 0;
  local_428.StereoMotionVectors = 0;
  local_428.AlphaInvert = 0;
  local_428.SceneCaptureCopySceneDepth = 1;
  local_428.VisualizeShadowCasters = 0;
  local_428.VisualizeLWCComplexity = 0;
  local_428.VisualizeGPUSkinCache = 0;
  local_428.LumenShortRangeAmbientOcclusion = 1;
  local_428.LumenSecondaryBounces = 1;
  local_428.LumenFarFieldTraces = 1;
  local_428.LumenGlobalTraces = 1;
  local_428.LumenDetailTraces = 1;
  local_428.LumenScreenTraces = 1;
  local_428.DebugDrawDistantVirtualSMLights = 0;
  local_428.VisualizeVolumetricCloudEmptySpaceSkipping = 0;
  local_428.VisualizeVolumetricCloudConservativeDensity = 0;
  local_428.VirtualTexturePrimitives = 0;
  local_428.VisualizePostProcessStack = 0;
  local_428.VisualizeCalibrationCustom = 0;
  local_428.VisualizeCalibrationGrayscale = 0;
  local_428.VisualizeCalibrationColor = 0;
  local_428.VisualizeLightFunctionAtlas = 0;
  local_428.VisualizeSkyAtmosphere = 0;
  local_428.RayTracingDebug = 0;
  local_428.PathTracing = 0;
  local_7b0 = (FRenderTarget *)&pFVar9->_padding_;
  local_7b8 = local_7b0;
  if (pFVar9 == (FTextureRenderTargetResource *)0x0) {
    local_7b8 = (FRenderTarget *)0x0;
  }
  pCVar10 = FSceneViewFamily::ConstructionValues::ConstructionValues
                      (&local_228,local_7b8,local_800,&local_428,&local_778);
  pFVar11 = FGameTime::GetTimeSinceAppStart(&local_768);
  dVar3 = pFVar11->WorldTimeSeconds;
  (pCVar10->Time).RealTimeSeconds = pFVar11->RealTimeSeconds;
  (pCVar10->Time).WorldTimeSeconds = dVar3;
  fVar4 = pFVar11->DeltaRealTimeSeconds;
  fVar5 = pFVar11->DeltaWorldTimeSeconds;
  pCVar10->bTimesSet = 1;
  (pCVar10->Time).DeltaRealTimeSeconds = fVar4;
  (pCVar10->Time).DeltaWorldTimeSeconds = fVar5;
  FSceneViewFamilyContext::FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_3e8,pCVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.SceneTexturesCaptureInfo.SharedReferenceCount.ReferenceController);
  if (local_228.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_228.EngineShowFlags.CustomShowFlags.AllocatorInstance.SecondaryData)
    ;
  }
  if (local_428.CustomShowFlags.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_428.CustomShowFlags.AllocatorInstance.SecondaryData);
  }
  pFVar12 = ::operator_new(0x18);
  fVar4 = __real_3f800000;
  if (pFVar12 == (FLegacyScreenPercentageDriver *)0x0) {
    pFVar12 = (FLegacyScreenPercentageDriver *)0x0;
  }
  else {
    pFVar12 = FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver
                        (pFVar12,&local_3e8,__real_3f800000);
    if (pFVar12 != (FLegacyScreenPercentageDriver *)0x0) goto LAB_14e2e2890;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("InScreenPercentageInterface",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                     ,0xa24,L"");
  if (bVar6) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e2e2890:
  if ((local_3e8.ScreenPercentageInterface != (ISceneViewFamilyScreenPercentage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScreenPercentageInterface == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                         ,0xa25,L"View family already had a screen percentage interface assigned."),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_3e8.ScreenPercentageInterface = (ISceneViewFamilyScreenPercentage *)pFVar12;
  FSceneViewInitOptions::FSceneViewInitOptions((FSceneViewInitOptions *)local_738);
  local_738._0_8_ = (param_2->field0_0x0)._s_0.X;
  local_738._8_8_ = (param_2->field0_0x0)._s_0.Y;
  local_738._16_8_ = (param_2->field0_0x0)._s_0.Z;
  local_738._32_8_ = param_3->M[0][0];
  local_738._40_8_ = param_3->M[0][1];
  local_738._48_8_ = param_3->M[0][2];
  local_738._56_8_ = param_3->M[0][3];
  local_738._64_8_ = param_3->M[1][0];
  local_738._72_8_ = param_3->M[1][1];
  local_738._80_8_ = param_3->M[1][2];
  local_738._88_8_ = param_3->M[1][3];
  local_738._96_8_ = param_3->M[2][0];
  local_738._104_8_ = param_3->M[2][1];
  local_738._112_8_ = param_3->M[2][2];
  local_738._120_8_ = param_3->M[2][3];
  local_738._128_8_ = param_3->M[3][0];
  local_738._136_8_ = param_3->M[3][1];
  local_738._144_8_ = param_3->M[3][2];
  local_738._152_8_ = param_3->M[3][3];
  local_738._160_8_ = param_4->M[0][0];
  local_738._168_8_ = param_4->M[0][1];
  local_738._176_8_ = param_4->M[0][2];
  local_738._184_8_ = param_4->M[0][3];
  local_738._192_8_ = param_4->M[1][0];
  local_738._200_8_ = param_4->M[1][1];
  local_738._208_8_ = param_4->M[1][2];
  local_738._216_8_ = param_4->M[1][3];
  local_738._224_8_ = param_4->M[2][0];
  local_738._232_8_ = param_4->M[2][1];
  local_7f8 = 0;
  local_738._288_8_ = 0;
  local_738._240_8_ = param_4->M[2][2];
  local_738._248_8_ = param_4->M[2][3];
  local_738._256_8_ = param_4->M[3][0];
  local_738._264_8_ = param_4->M[3][1];
  local_738._272_8_ = param_4->M[3][2];
  local_738._280_8_ = param_4->M[3][3];
  local_738._328_8_ = 0;
  iStack_7ec = param_5.field0_0x0._s_0.Y;
  local_738._296_8_ = param_5.field0_0x0;
  local_738._344_8_ = &local_3e8;
  local_7f0 = uVar14;
  local_738._336_8_ = local_738._296_8_;
  this_00 = ::operator_new(0x1c30);
  if (this_00 == (FSceneView *)0x0) {
    local_808 = (FSceneView *)0x0;
  }
  else {
    local_808 = FSceneView::FSceneView(this_00,(FSceneViewInitOptions *)local_738);
  }
  if (((local_3e8.Views.AllocatorInstance.Data <= (FScriptContainerElement *)&local_808) &&
      ((FScriptContainerElement *)&local_808 <
       local_3e8.Views.AllocatorInstance.Data + (longlong)local_3e8.Views.ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_3e8.Views.ArrayNum == local_3e8.Views.ArrayMax) {
    local_3e8.Views.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_3e8.Views.AllocatorInstance,&local_3e8.Views.ArrayMax);
  }
  *(FSceneView **)(local_3e8.Views.AllocatorInstance.Data + (longlong)local_3e8.Views.ArrayNum * 8)
       = local_808;
  TVar1 = local_800->FeatureLevel;
  local_3e8.Views.ArrayNum = local_3e8.Views.ArrayNum + 1;
  pFVar11 = FGameTime::GetTimeSinceAppStart(&local_750);
  FCanvas::FCanvas(&local_188,local_7b8,(FHitProxyConsumer *)0x0,pFVar11,TVar1,fVar4);
  FCanvas::Clear(&local_188,&FLinearColor::Transparent);
  pIVar13 = GetRendererModule();
  (**(code **)((longlong)*pIVar13 + 0x40))(pIVar13,&local_188,&local_3e8);
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (param_7,uVar14 * param_5.field0_0x0._s_0.Y,Default);
  local_7e8 = 6;
  uStack_7e0 = CONCAT31(uStack_7e0._1_3_,1);
  uStack_7dc = 0x467a0000;
  local_798.MaxDepthRange = 16000.0;
  local_798._8_4_ = uStack_7e0;
  local_7d8 = 0;
  uStack_7d4 = 0;
  local_798._16_8_ = (ulonglong)uStack_7d6 << 0x10;
  local_798.CubeFace = CubeFace_MAX;
  local_798.CompressionMode = RCM_UNorm;
  local_7c8._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_7c8._12_4_ = param_5.field0_0x0._s_0.Y;
  local_798.GPUIndex = 0;
  local_7c8._8_4_ = uVar14;
  FRenderTarget::ReadPixelsPtr
            (local_7b0,(FColor *)(param_7->AllocatorInstance).Data,&local_798,
             (TIntRect<int> *)&local_7c8._s_0);
  FlushRenderingCommands();
  pFVar8 = FUObjectArray::IndexToObject
                     (&GUObjectArray,*(int *)((longlong)&local_7a8->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar8,RootSet);
  FCanvas::~FCanvas(&local_188);
  if (local_738._604_4_ != -1) {
    local_738._664_4_ = 0;
    if ((ForElementType<FSetElementId>)local_738._656_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_738._656_8_);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_738 + 0x250));
  }
  local_738._584_4_ = 0;
  if ((ForElementType<FSetElementId>)local_738._576_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_738._576_8_);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_738 + 0x200));
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&local_3e8);
  return;
}

// ResetVariantDependents @ 14e2e2c40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl VariantSetImpl::ResetVariantDependents(UVariant *param_1)

{
  int iVar1;
  UVariant *this;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  bool bVar5;
  UClass *pUVar6;
  ULevelVariantSets *pUVar7;
  UVariant *pUVar8;
  int iVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> local_48;
  
  if (param_1 != (UVariant *)0x0) {
    pUVar6 = ULevelVariantSets::StaticClass();
    pUVar7 = (ULevelVariantSets *)
             UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar6);
    if (pUVar7 != (ULevelVariantSets *)0x0) {
      UVariant::GetDependents(param_1,&local_48,pUVar7,false);
      iVar4 = local_48.ArrayNum;
      local_res10 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
      FVar11.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        pFVar3 = local_res10;
        if (local_48.ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UVariant_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar11.Data == pFVar3) break;
        this = *(UVariant **)FVar11.Data;
        iVar9 = (this->Dependencies).ArrayNum + -1;
        if (-1 < iVar9) {
          lVar10 = (longlong)iVar9 * 0x58;
          do {
            if (((this->Dependencies).ArrayNum <= iVar9) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pUVar8 = (UVariant *)
                     TPersistentObjectPtr<FSoftObjectPath>::Get
                               ((TPersistentObjectPtr<FSoftObjectPath> *)
                                ((this->Dependencies).AllocatorInstance.Data + lVar10 + 0x28));
            if (pUVar8 != (UVariant *)0x0) {
              pUVar6 = UVariant::StaticClass();
              iVar1 = (int)pUVar6->_padding_;
              if (((iVar1 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
                   == &pUVar6->_padding_)) && (pUVar8 == param_1)) {
                UVariant::DeleteDependency(this,iVar9);
              }
            }
            lVar10 = lVar10 + -0x58;
            iVar9 = iVar9 + -1;
          } while (-1 < iVar9);
        }
        FVar11.Data = FVar11.Data + 8;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UnFixupForPIE @ 14e2e7580

FSoftObjectPath * __cdecl
PropertyValueSoftImpl::UnFixupForPIE
          (FSoftObjectPath *__return_storage_ptr__,FSoftObjectPath *param_1,int param_2)

{
  bool bVar1;
  FString *pFVar2;
  ForAnyElementType FVar3;
  FString local_38;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FSoftObjectPath::ToString(param_1,&local_38);
  pFVar2 = FPackageName::GetLongPackageAssetName(&local_28,&local_38);
  bVar1 = ::FString::StartsWith(pFVar2,L"UEDPIE",6,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    ::FString::PrintfImpl(&local_28,L"%s_%d_");
    FVar3.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar3.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar2 = ::FString::Replace(&local_38,(FString *)&local_18,(wchar_t *)FVar3.Data,L"",
                                CaseSensitive);
    if (&local_38 != pFVar2) {
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_38.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
    }
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  local_28.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->AssetPath).PackageName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).PackageName.Number = 0;
  (__return_storage_ptr__->AssetPath).AssetName.ComparisonIndex = 0;
  (__return_storage_ptr__->AssetPath).AssetName.Number = 0;
  (__return_storage_ptr__->SubPathString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->SubPathString).Data.ArrayNum = 0;
  (__return_storage_ptr__->SubPathString).Data.ArrayMax = 0;
  local_28.Data.ArrayNum = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_28.Data.ArrayNum = 0;
  }
  local_18._12_4_ = local_28.Data.ArrayMax;
  local_18.Size = local_28.Data.ArrayNum;
  local_18.DataPtr = (wchar_t *)local_38.Data.AllocatorInstance.Data;
  FSoftObjectPath::SetPath(__return_storage_ptr__,&local_18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Z_Construct_UClass_ALevelVariantSetsActor_NoRegister @ 14e2e7830

UClass * __cdecl Z_Construct_UClass_ALevelVariantSetsActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"LevelVariantSetsActor",
               &Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton,
               ALevelVariantSetsActor::StaticRegisterNativesALevelVariantSetsActor,0x330,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ALevelVariantSetsActor>,
               InternalVTableHelperCtorCaller<ALevelVariantSetsActor>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALevelVariantSetsActor.InnerSingleton;
}

// Z_Construct_UClass_ASwitchActor_NoRegister @ 14e2e78f0

UClass * __cdecl Z_Construct_UClass_ASwitchActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASwitchActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"SwitchActor",
               &Z_Registration_Info_UClass_ASwitchActor.InnerSingleton,
               ASwitchActor::StaticRegisterNativesASwitchActor,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ASwitchActor>,
               InternalVTableHelperCtorCaller<ASwitchActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASwitchActor.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueColor_NoRegister @ 14e2e79b0

UClass * __cdecl Z_Construct_UClass_UPropertyValueColor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueColor",
               &Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton,
               UPropertyValueColor::StaticRegisterNativesUPropertyValueColor,0x1c0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UPropertyValueColor>,
               InternalVTableHelperCtorCaller<UPropertyValueColor>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueColor.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueMaterial_NoRegister @ 14e2e7a70

UClass * __cdecl Z_Construct_UClass_UPropertyValueMaterial_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueMaterial",
               &Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton,
               UPropertyValueMaterial::StaticRegisterNativesUPropertyValueMaterial,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPropertyValueMaterial>,
               InternalVTableHelperCtorCaller<UPropertyValueMaterial>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueMaterial.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueOption_NoRegister @ 14e2e7b30

UClass * __cdecl Z_Construct_UClass_UPropertyValueOption_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueOption",
               &Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton,
               UPropertyValueOption::StaticRegisterNativesUPropertyValueOption,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPropertyValueOption>,
               InternalVTableHelperCtorCaller<UPropertyValueOption>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueOption.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueSoftObject_NoRegister @ 14e2e7bf0

UClass * __cdecl Z_Construct_UClass_UPropertyValueSoftObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueSoftObject",
               &Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton,
               UPropertyValueSoftObject::StaticRegisterNativesUPropertyValueSoftObject,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyValueSoftObject>,
               InternalVTableHelperCtorCaller<UPropertyValueSoftObject>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueSoftObject.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueTransform_NoRegister @ 14e2e7cb0

UClass * __cdecl Z_Construct_UClass_UPropertyValueTransform_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueTransform",
               &Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton,
               UPropertyValueTransform::StaticRegisterNativesUPropertyValueTransform,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPropertyValueTransform>
               ,InternalVTableHelperCtorCaller<UPropertyValueTransform>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueTransform.InnerSingleton;
}

// Z_Construct_UClass_UPropertyValueVisibility_NoRegister @ 14e2e7d70

UClass * __cdecl Z_Construct_UClass_UPropertyValueVisibility_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/VariantManagerContent",L"PropertyValueVisibility",
               &Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton,
               UPropertyValueVisibility::StaticRegisterNativesUPropertyValueVisibility,0x1c0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyValueVisibility>,
               InternalVTableHelperCtorCaller<UPropertyValueVisibility>,local_res8,
               UPropertyValue::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyValueVisibility.InnerSingleton;
}

// IMPLEMENT_MODULE_VariantManagerContent @ 14e2ea0c0

void __cdecl IMPLEMENT_MODULE_VariantManagerContent(void)

{
  return;
}

// OnDependenciesUpdated'' @ 1504640f0

void __cdecl `dynamic_atexit_destructor_for_'UVariant::OnDependenciesUpdated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UVariant::OnDependenciesUpdated._8_8_,UVariant::OnDependenciesUpdated._16_4_);
  if (UVariant::OnDependenciesUpdated._8_8_ != 0) {
    FMemory::Free((void *)UVariant::OnDependenciesUpdated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UVariant::OnDependenciesUpdated);
  return;
}

// OnThumbnailUpdated'' @ 150464130

void __cdecl `dynamic_atexit_destructor_for_'UVariant::OnThumbnailUpdated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UVariant::OnThumbnailUpdated._8_8_,UVariant::OnThumbnailUpdated._16_4_);
  if (UVariant::OnThumbnailUpdated._8_8_ != 0) {
    FMemory::Free((void *)UVariant::OnThumbnailUpdated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UVariant::OnThumbnailUpdated);
  return;
}

// OnThumbnailUpdated'' @ 150464170

void __cdecl `dynamic_atexit_destructor_for_'UVariantSet::OnThumbnailUpdated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UVariantSet::OnThumbnailUpdated._8_8_,UVariantSet::OnThumbnailUpdated._16_4_);
  if (UVariantSet::OnThumbnailUpdated._8_8_ != 0) {
    FMemory::Free((void *)UVariantSet::OnThumbnailUpdated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UVariantSet::OnThumbnailUpdated);
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterVariantManagerCustomVersion'' @ 1504641b0

void __cdecl _dynamic_atexit_destructor_for__GRegisterVariantManagerCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterVariantManagerCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogVariantContent'' @ 1504641d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVariantContent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVariantContent);
  return;
}

