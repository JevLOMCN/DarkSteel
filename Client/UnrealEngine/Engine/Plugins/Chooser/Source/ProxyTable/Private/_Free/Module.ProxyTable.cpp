// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProxyTable
// Functions: 68

// TypeTagName'' @ 1413bdfc0

void __cdecl `dynamic_initializer_for_'UProxyAsset::TypeTagName__(void)

{
  ::FName::FName(&UProxyAsset::TypeTagName,"ProxyType");
  return;
}

// `dynamic_initializer_for_'LogProxyTable'' @ 1413bdfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogProxyTable__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogProxyTable,L"LogProxyTable",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogProxyTable__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1413be020

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantProxyTable'' @ 1413be040

void __cdecl _dynamic_initializer_for__ModuleRegistrantProxyTable__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "ProxyTable";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"ProxyTable",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Internal_LookupProxy_h__Script_ProxyTable_4135663374'' @ 1413be090

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Internal_LookupProxy_h__Script_ProxyTable_4135663374__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProxyTable",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Internal_LookupProxy_h__Script_ProxyTable_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h__Script_ProxyTable_1341698529'' @ 1413be0d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h__Script_ProxyTable_1341698529__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProxyTable",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h__Script_ProxyTable_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_IChooserParameterProxyTable_h__Script_ProxyTable_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h__Script_ProxyTable_4254792721'' @ 1413be120

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h__Script_ProxyTable_4254792721__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProxyTable",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyAsset_h__Script_ProxyTable_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h__Script_ProxyTable_198903096'' @ 1413be160

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h__Script_ProxyTable_198903096__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProxyTable",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTableFunctionLibrary_h__Script_ProxyTable_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h__Script_ProxyTable_468769543'' @ 1413be1a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h__Script_ProxyTable_468769543__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/ProxyTable",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h__Script_ProxyTable_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Chooser_Source_ProxyTable_Public_ProxyTable_h__Script_ProxyTable_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_ProxyTable'' @ 1413be1f0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_ProxyTable__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x7d52ac1;
  local_res8[0].DeclarationsHash = 0xabad245b;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_ProxyTable,L"/Script/ProxyTable",
             &Z_Registration_Info_UPackage__Script_ProxyTable,local_res8);
  return;
}

// Z_Construct_UClass_UProxyAsset @ 14cf24460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProxyAsset(void)

{
  if (Z_Registration_Info_UClass_UProxyAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProxyAsset.OuterSingleton,
               &Z_Construct_UClass_UProxyAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProxyAsset.OuterSingleton;
}

// Z_Construct_UClass_UProxyTable @ 14cf244a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProxyTable(void)

{
  if (Z_Registration_Info_UClass_UProxyTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProxyTable.OuterSingleton,
               &Z_Construct_UClass_UProxyTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProxyTable.OuterSingleton;
}

// Z_Construct_UScriptStruct_FProxyStructOutput @ 14cf244e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProxyStructOutput(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProxyStructOutput.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProxyStructOutput.InnerSingleton,
               &Z_Construct_UScriptStruct_FProxyStructOutput_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProxyStructOutput.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProxyStructOutput.InnerSingleton;
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

// Z_Construct_UScriptStruct_FRuntimeProxyValue @ 14cf24560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRuntimeProxyValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FRuntimeProxyValue.InnerSingleton;
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

// NewStructOps @ 14cf245e0

void * __cdecl Z_Construct_UScriptStruct_FProxyStructOutput_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProxyStructOutput,&UE::CoreUObject::Private::Construct<FProxyStructOutput>,&UE::CoreUObject::Private::ConstructForTests<FProxyStructOutput>,&UE::CoreUObject::Private::Destruct<FProxyStructOutput>,&UE::CoreUObject::Private::Copy<FProxyStructOutput>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cf24620

void * __cdecl Z_Construct_UScriptStruct_FProxyEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProxyEntry,&UE::CoreUObject::Private::Construct<FProxyEntry>,&UE::CoreUObject::Private::ConstructForTests<FProxyEntry>,&UE::CoreUObject::Private::Destruct<FProxyEntry>,&UE::CoreUObject::Private::Copy<FProxyEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cf24660

void * __cdecl Z_Construct_UScriptStruct_FRuntimeProxyValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FRuntimeProxyValue,&UE::CoreUObject::Private::Construct<FRuntimeProxyValue>,&UE::CoreUObject::Private::ConstructForTests<FRuntimeProxyValue>,&UE::CoreUObject::Private::Destruct<FRuntimeProxyValue>,&UE::CoreUObject::Private::Copy<FRuntimeProxyValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UProxyTableFunctionLibrary @ 14cf246a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProxyTableFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UProxyTableFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProxyTableFunctionLibrary.OuterSingleton;
}

// Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset @ 14cf246e0

UFunction * __cdecl Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable @ 14cf24720

UFunction * __cdecl Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyTableFunctionLibrary_EvaluateProxyTable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy @ 14cf24760

UFunction * __cdecl Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxy_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable @ 14cf247a0

UFunction * __cdecl
Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UProxyTableFunctionLibrary_MakeLookupProxyWithOverrideTable_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UProxyAsset_NoRegister @ 14cf247e0

UClass * __cdecl Z_Construct_UClass_UProxyAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyAsset",
               &Z_Registration_Info_UClass_UProxyAsset.InnerSingleton,
               UProxyAsset::StaticRegisterNativesUProxyAsset,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyAsset>,
               InternalVTableHelperCtorCaller<UProxyAsset>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyAsset.InnerSingleton;
}

// Z_Construct_UClass_UProxyTable_NoRegister @ 14cf24940

UClass * __cdecl Z_Construct_UClass_UProxyTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTable",
               &Z_Registration_Info_UClass_UProxyTable.InnerSingleton,
               UProxyTable::StaticRegisterNativesUProxyTable,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyTable>,
               InternalVTableHelperCtorCaller<UProxyTable>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTable.InnerSingleton;
}

// NewStructOps @ 14cf24f30

void * __cdecl Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FProxyTableContextProperty,&UE::CoreUObject::Private::Construct<FProxyTableContextProperty>,&UE::CoreUObject::Private::ConstructForTests<FProxyTableContextProperty>,&UE::CoreUObject::Private::Destruct<FProxyTableContextProperty>,&UE::CoreUObject::Private::Copy<FProxyTableContextProperty>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cf25160

void * __thiscall
FChooserParameterProxyTableBase::_scalar_deleting_destructor_
          (FChooserParameterProxyTableBase *this,uint param_1)

{
  *this = (FChooserParameterProxyTableBase)&___7FChooserParameterBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf251a0

void * __thiscall
FProxyTableContextProperty::_scalar_deleting_destructor_
          (FProxyTableContextProperty *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Binding)._padding_ = (longlong)&___7FChooserPropertyBinding__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Binding).CompiledBinding.SharedReferenceCount.ReferenceController);
  pFVar1 = (this->Binding).PropertyBindingChain.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FChooserParameterBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// Z_Construct_UClass_UChooserParameterProxyTable @ 14cf25250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UChooserParameterProxyTable(void)

{
  if (Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton,
               &Z_Construct_UClass_UChooserParameterProxyTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UChooserParameterProxyTable.OuterSingleton;
}

// Z_Construct_UScriptStruct_FChooserParameterProxyTableBase @ 14cf25290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FChooserParameterProxyTableBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FChooserParameterProxyTableBase.InnerSingleton;
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

// Z_Construct_UPackage__Script_ProxyTable @ 14cf25310

UPackage * __cdecl Z_Construct_UPackage__Script_ProxyTable(void)

{
  if (Z_Registration_Info_UPackage__Script_ProxyTable.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_ProxyTable.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_ProxyTable.OuterSingleton;
}

// NewStructOps @ 14cf254e0

void * __cdecl Z_Construct_UScriptStruct_FLookupProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLookupProxy,&UE::CoreUObject::Private::Construct<FLookupProxy>,&UE::CoreUObject::Private::ConstructForTests<FLookupProxy>,&UE::CoreUObject::Private::Destruct<FLookupProxy>,&UE::CoreUObject::Private::Copy<FLookupProxy>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cf25520

void * __cdecl Z_Construct_UScriptStruct_FChooserParameterProxyTableBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FChooserParameterProxyTableBase,&UE::CoreUObject::Private::Construct<FChooserParameterProxyTableBase>,&UE::CoreUObject::Private::ConstructForTests<FChooserParameterProxyTableBase>,&UE::CoreUObject::Private::Destruct<FChooserParameterProxyTableBase>,&UE::CoreUObject::Private::Copy<FChooserParameterProxyTableBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cf25560

void * __thiscall
FLookupProxyWithOverrideTable::_scalar_deleting_destructor_
          (FLookupProxyWithOverrideTable *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FObjectChooserBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14cf25660

void * __cdecl Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLookupProxyWithOverrideTable,&UE::CoreUObject::Private::Construct<FLookupProxyWithOverrideTable>,&UE::CoreUObject::Private::ConstructForTests<FLookupProxyWithOverrideTable>,&UE::CoreUObject::Private::Destruct<FLookupProxyWithOverrideTable>,&UE::CoreUObject::Private::Copy<FLookupProxyWithOverrideTable>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_> @ 14cf25a40

int __cdecl
Algo::BinarySearch<TArray<FGuid,TSizedDefaultAllocator<32>_>,FGuid,TLess<void>_>
          (TArray<FGuid,TSizedDefaultAllocator<32>_> *param_1,FGuid *param_2,TLess<void> param_3)

{
  FGuid *pFVar1;
  int iVar2;
  int iVar3;
  FIdentityFunctor local_res8;
  
  iVar3 = param_1->ArrayNum;
  pFVar1 = (FGuid *)(param_1->AllocatorInstance).Data;
  iVar2 = AlgoImpl::LowerBoundInternal<FGuid_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
                    (pFVar1,iVar3,param_2,local_res8,param_3);
  if ((iVar3 <= iVar2) || (param_2->A < pFVar1[iVar2].A)) {
    return -1;
  }
  if (param_2->A == pFVar1[iVar2].A) {
    if (param_2->B < pFVar1[iVar2].B) {
      return -1;
    }
    if (param_2->B == pFVar1[iVar2].B) {
      if (param_2->C < pFVar1[iVar2].C) {
        return -1;
      }
      if (param_2->C == pFVar1[iVar2].C) {
        iVar3 = -1;
        if (pFVar1[iVar2].D <= param_2->D) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
    }
  }
  return iVar2;
}

// ConstructItems<FProxyStructOutput,FProxyStructOutput,int> @ 14cf25af0

void __cdecl
ConstructItems<FProxyStructOutput,FProxyStructOutput,int>
          (void *param_1,FProxyStructOutput *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  uchar **ppuVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    ppuVar5 = &(param_2->Value).StructMemory;
    do {
      *(undefined ***)((longlong)ppuVar5 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           &___7FChooserPropertyBinding__6B_;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(ppuVar5 + -5);
      _Src = ppuVar5[-6];
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 3);
      }
      *(undefined4 *)&pFVar4[2].Data = *(undefined4 *)(ppuVar5 + -4);
      *(undefined1 *)((longlong)&pFVar4[2].Data + 4) = *(undefined1 *)((longlong)ppuVar5 + -0x1c);
      pFVar4[3].Data = (FScriptContainerElement *)ppuVar5[-3];
      pFVar3 = (FScriptContainerElement *)ppuVar5[-2];
      pFVar4[4].Data = pFVar3;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        LOCK();
        *(int *)(pFVar3 + 8) = *(int *)(pFVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined ***)((longlong)ppuVar5 + (longlong)param_1 + (-0x38 - (longlong)param_2)) =
           &___7FChooserStructPropertyBinding__6B_;
      (((FInstancedStruct *)(pFVar4 + 5))->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      pFVar4[6].Data = (FScriptContainerElement *)0x0;
      FInstancedStruct::InitializeAs
                ((FInstancedStruct *)(pFVar4 + 5),
                 (((FInstancedStruct *)(ppuVar5 + -1))->ScriptStruct).field0_0x0.DebugPtr,*ppuVar5);
      pFVar4 = pFVar4 + 8;
      ppuVar5 = ppuVar5 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FProxyStructOutput,int> @ 14cf25c20

void __cdecl DestructItems<FProxyStructOutput,int>(FProxyStructOutput *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Binding).field_0x28;
    do {
      FInstancedStruct::Reset((FInstancedStruct *)(puVar1 + 1));
      puVar1[-5] = &___7FChooserPropertyBinding__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)*puVar1);
      if ((void *)puVar1[-4] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-4]);
      }
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FRuntimeProxyValue,int> @ 14cf25c90

void __cdecl DestructItems<FRuntimeProxyValue,int>(FRuntimeProxyValue *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OutputStructData;
    do {
      DestructItems<FProxyStructOutput,int>
                ((FProxyStructOutput *)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum);
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      FInstancedStruct::Reset((FInstancedStruct *)(pTVar2 + -1));
      pTVar2 = (TArray<FProxyStructOutput,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 2) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UChooserParameterProxyTable> @ 14cf261d0

void __cdecl InternalConstructor<UChooserParameterProxyTable>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UChooserParameterProxyTable__6B_;
  }
  return;
}

// InternalConstructor<UProxyAsset> @ 14cf26200

void __cdecl InternalConstructor<UProxyAsset>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined8 *)&this[1].field_0x20 = 2;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &UProxyAsset::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UProxyAsset::_vftable__for__IHasContextClass__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<UProxyTable> @ 14cf26270

void __cdecl InternalConstructor<UProxyTable>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UProxyTable__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UProxyTableFunctionLibrary> @ 14cf262c0

void __cdecl InternalConstructor<UProxyTableFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UProxyTableFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UChooserParameterProxyTable> @ 14cf262f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UChooserParameterProxyTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UChooserParameterProxyTable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UChooserParameterProxyTable__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProxyAsset> @ 14cf263a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProxyAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProxyAsset::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &UProxyAsset::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UProxyAsset::_vftable__for__IHasContextClass__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 2;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProxyTable> @ 14cf26480

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProxyTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProxyTable::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UProxyTable__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProxyTableFunctionLibrary> @ 14cf26540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProxyTableFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProxyTableFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UProxyTableFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<FGuid_const_,int,FGuid,FIdentityFunctor,TLess<void>_> @ 14cf265f0

int __cdecl
AlgoImpl::LowerBoundInternal<FGuid_const_,int,FGuid,FIdentityFunctor,TLess<void>_>
          (FGuid *param_1,int param_2,FGuid *param_3,FIdentityFunctor param_4,TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  FGuid *pFVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      pFVar3 = param_1 + iVar1;
      if (pFVar3->A < param_3->A) {
        bVar5 = true;
      }
      else if (param_3->A < pFVar3->A) {
        bVar5 = false;
      }
      else if (pFVar3->B < param_3->B) {
        bVar5 = true;
      }
      else if (param_3->B < pFVar3->B) {
        bVar5 = false;
      }
      else if (pFVar3->C < param_3->C) {
        bVar5 = true;
      }
      else if (param_3->C < pFVar3->C) {
        bVar5 = false;
      }
      else {
        bVar5 = pFVar3->D < param_3->D;
      }
      if (bVar5) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf26ba0

/* [thunk]:public: virtual void * __ptr64 __cdecl UProxyAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UProxyAsset::_vector_deleting_destructor__adjustor_40__(UProxyAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UProxyAsset *)&this[-1].ResultType,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cf26bb0

void * __thiscall FLookupProxy::_scalar_deleting_destructor_(FLookupProxy *this,uint param_1)

{
  FInstancedStruct::Reset(&this->ProxyTable);
  this->_padding_ = (longlong)&___7FObjectChooserBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf26c00

void * __thiscall
UChooserParameterProxyTable::_scalar_deleting_destructor_
          (UChooserParameterProxyTable *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf26c60

void * __thiscall UProxyAsset::_scalar_deleting_destructor_(UProxyAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IHasContextClass__;
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->ContextData).AllocatorInstance.Data,
             (this->ContextData).ArrayNum);
  pFVar1 = (this->ContextData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IHasContextClass__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)this->_padding_,
             (int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf26d30

void * __thiscall UProxyTable::_scalar_deleting_destructor_(UProxyTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UProxyTable__6B_;
  DestructItems<FRuntimeProxyValue,int>
            ((FRuntimeProxyValue *)(this->RuntimeValues).AllocatorInstance.Data,
             (this->RuntimeValues).ArrayNum);
  pFVar1 = (this->RuntimeValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// `scalar_deleting_destructor' @ 14cf26dc0

void * __thiscall
UProxyTableFunctionLibrary::_scalar_deleting_destructor_
          (UProxyTableFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UProxyTableFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeIChooserParameterProxyTable @ 14cf27030

void __cdecl EmptyLinkFunctionForGeneratedCodeIChooserParameterProxyTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLookupProxy @ 14cf27040

void __cdecl EmptyLinkFunctionForGeneratedCodeLookupProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyAsset @ 14cf27050

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyTable @ 14cf27060

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyTableFunctionLibrary @ 14cf27070

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyTableFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeProxyTable_init @ 14cf27080

void __cdecl EmptyLinkFunctionForGeneratedCodeProxyTable_init(void)

{
  return;
}

// OutputStructData @ 14cf28290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
OutputStructData(UProxyTable *param_1,FRuntimeProxyValue *param_2,FChooserEvaluationContext *param_3
                )

{
  int iVar1;
  bool bVar2;
  FChooserPropertyBinding *pFVar3;
  FChooserPropertyBinding *pFVar4;
  FName local_res10;
  FString local_78;
  FString local_68;
  FResolvedPropertyChainResult local_58;
  
  iVar1 = (param_2->OutputStructData).ArrayNum;
  pFVar3 = (FChooserPropertyBinding *)(param_2->OutputStructData).AllocatorInstance.Data;
  pFVar4 = (FChooserPropertyBinding *)((longlong)pFVar3 + (longlong)iVar1 * 0x40);
  do {
    while( true ) {
      if ((param_2->OutputStructData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FProxyStructOutput_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar3 == pFVar4) {
        return;
      }
      local_58.Container = (uchar *)0x0;
      local_58.PropertyOffset = 0;
      local_58.PropertyType = None;
      local_58.Mask = '\0';
      local_58.Function = (UFunction *)0x0;
      local_58.StructType = (UStruct *)0x0;
      bVar2 = UE::Chooser::ResolvePropertyChain(param_3,pFVar3,&local_58);
      if ((bVar2) && (local_58.Function == (UFunction *)0x0)) break;
LAB_14cf283fc:
      pFVar3 = (FChooserPropertyBinding *)&pFVar3[1].PropertyBindingChain.ArrayNum;
    }
    if ((UScriptStruct *)local_58.StructType != (UScriptStruct *)pFVar3[1]._padding_) {
      if (2 < (byte)LogChooser._0_1_) {
        local_res10 = (FName)((param_2->ProxyAsset).field0_0x0.DebugPtr)->_padding_;
        FName::ToString(&local_res10,&local_68);
        local_res10 = (FName)param_1->_padding_;
        FName::ToString(&local_res10,&local_78);
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogChooser);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      goto LAB_14cf283fc;
    }
    UScriptStruct::CopyScriptStruct
              ((UScriptStruct *)pFVar3[1]._padding_,local_58.Container + local_58.PropertyOffset,
               pFVar3[1].PropertyBindingChain.AllocatorInstance.Data,1);
    pFVar3 = (FChooserPropertyBinding *)&pFVar3[1].PropertyBindingChain.ArrayNum;
  } while( true );
}

// Z_Construct_UClass_UChooserParameterProxyTable_NoRegister @ 14cf28640

UClass * __cdecl Z_Construct_UClass_UChooserParameterProxyTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ChooserParameterProxyTable",
               &Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton,
               UChooserParameterProxyTable::StaticRegisterNativesUChooserParameterProxyTable,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UChooserParameterProxyTable>,
               InternalVTableHelperCtorCaller<UChooserParameterProxyTable>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChooserParameterProxyTable.InnerSingleton;
}

// Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister @ 14cf28700

UClass * __cdecl Z_Construct_UClass_UProxyTableFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProxyTable",L"ProxyTableFunctionLibrary",
               &Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton,
               UProxyTableFunctionLibrary::StaticRegisterNativesUProxyTableFunctionLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UProxyTableFunctionLibrary>,
               InternalVTableHelperCtorCaller<UProxyTableFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyTableFunctionLibrary.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLookupProxy @ 14cf287c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLookupProxy(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLookupProxy.InnerSingleton,
               &Z_Construct_UScriptStruct_FLookupProxy_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxy.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLookupProxy.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable @ 14cf28840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.InnerSingleton,
               &Z_Construct_UScriptStruct_FLookupProxyWithOverrideTable_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLookupProxyWithOverrideTable.InnerSingleton;
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

// Z_Construct_UScriptStruct_FProxyEntry @ 14cf288c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProxyEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProxyEntry.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProxyEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FProxyEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProxyEntry.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProxyEntry.InnerSingleton;
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

// Z_Construct_UScriptStruct_FProxyTableContextProperty @ 14cf28940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FProxyTableContextProperty(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.InnerSingleton,
               &Z_Construct_UScriptStruct_FProxyTableContextProperty_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FProxyTableContextProperty.InnerSingleton;
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

// IMPLEMENT_MODULE_ProxyTable @ 14cf29320

void __cdecl IMPLEMENT_MODULE_ProxyTable(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogProxyTable'' @ 150453ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogProxyTable__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogProxyTable);
  return;
}

