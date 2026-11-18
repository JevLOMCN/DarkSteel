// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 335

// Name'' @ 140f482c0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 140f482e0

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  IRowBatchInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "RowBatchInfo");
  return;
}

// Name'' @ 140f48300

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::Private::ForwardTesterBase>::Name
                 ,"SingleRowInfo");
  return;
}

// Name'' @ 140f48320

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::Queries::
ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::Queries::
                  ISingleRowInfo<UE::Editor::DataStorage::Queries::IContextCapability>::Name,
                 "SingleRowInfo");
  return;
}

// ObjectMappingDomain'' @ 140f48340

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain__
          (void)

{
  ::FName::FName(&UE::Editor::DataStorage::ICompatibilityProvider::ObjectMappingDomain,"Object");
  return;
}

// PurposeMappingDomain'' @ 140f48360

void __cdecl
`dynamic_initializer_for_'UE::Editor::DataStorage::IUiProvider::PurposeMappingDomain__(void)

{
  ::FName::FName(&UE::Editor::DataStorage::IUiProvider::PurposeMappingDomain,"WidgetPurpose");
  return;
}

// Unset'' @ 140f48380

void __cdecl `dynamic_initializer_for_'FTypedElementId::Unset__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FTypedElementId::Unset__);
  return;
}

// `dynamic_initializer_for_'CVarEnableReferenceTracking'' @ 140f483a0

void __cdecl TypedElementReferences::_dynamic_initializer_for__CVarEnableReferenceTracking__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarEnableReferenceTracking,L"TypedElements.EnableReferenceTracking",
             &GEnableReferenceTracking,L"Is support for element reference tracking enabled?",0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableReferenceTracking__);
  return;
}

// `dynamic_initializer_for_'CompatibilityFeatureName'' @ 140f483f0

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__CompatibilityFeatureName__(void)

{
  ::FName::FName(&CompatibilityFeatureName,L"EditorDataStorageCompatibility");
  return;
}

// `dynamic_initializer_for_'FMapKeyView_TestsInstance'' @ 140f48410

void __cdecl
UE::Editor::DataStorage::Tests::Private::`anonymous_namespace'::
_dynamic_initializer_for__FMapKeyView_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMapKeyView_Tests");
  FMapKeyView_Tests::FMapKeyView_Tests(&FMapKeyView_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMapKeyView_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'FMapKey_TestsInstance'' @ 140f48460

void __cdecl
UE::Editor::DataStorage::Tests::Private::`anonymous_namespace'::
_dynamic_initializer_for__FMapKey_TestsInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FMapKey_Tests");
  FMapKey_Tests::FMapKey_Tests(&FMapKey_TestsInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FMapKey_TestsInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementRegistryPerfTestAutomationTestInstance'' @ 140f484b0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementRegistryPerfTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementRegistryPerfTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementRegistryPerfTestAutomationTestInstance,&local_18,
             false);
  FTypedElementRegistryPerfTestAutomationTestInstance._0_8_ =
       &___7FTypedElementRegistryPerfTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementRegistryPerfTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FTypedElementRegistrySmokeTestAutomationTestInstance'' @ 140f48510

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FTypedElementRegistrySmokeTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FTypedElementRegistrySmokeTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementRegistrySmokeTestAutomationTestInstance,&local_18,
             false);
  FTypedElementRegistrySmokeTestAutomationTestInstance._0_8_ =
       &___7FTypedElementRegistrySmokeTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FTypedElementRegistrySmokeTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'IsConstName'' @ 140f48570

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsConstName__(void)

{
  ::FName::FName(&IsConstName,L"IsConst");
  return;
}

// `dynamic_initializer_for_'IsEditableName'' @ 140f48590

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__IsEditableName__(void)

{
  ::FName::FName(&IsEditableName,L"IsEditable");
  return;
}

// `dynamic_initializer_for_'LogEditorDataStorage'' @ 140f485b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogEditorDataStorage__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogEditorDataStorage,L"LogEditorDataStorage",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogEditorDataStorage__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTypedElementFramework'' @ 140f485f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantTypedElementFramework__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TypedElementFramework";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TypedElementFramework",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FTypedElementFrameworkModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_DerivedFromDynamicTemplateMetadata'' @ 140f48640

void __cdecl
UE::Editor::DataStorage::ColumnUtils::Private::
_dynamic_initializer_for__NAME_DerivedFromDynamicTemplateMetadata__(void)

{
  ::FName::FName(&NAME_DerivedFromDynamicTemplateMetadata,
                 L"EditorDataStorage_DerivedFromDynamicTemplate");
  return;
}

// `dynamic_initializer_for_'NAME_DynamicTemplateMetadata'' @ 140f48660

void __cdecl
UE::Editor::DataStorage::ColumnUtils::Private::
_dynamic_initializer_for__NAME_DynamicTemplateMetadata__(void)

{
  ::FName::FName(&NAME_DynamicTemplateMetadata,L"EditorDataStorage_DynamicColumnTemplate");
  return;
}

// `dynamic_initializer_for_'StorageFeatureName'' @ 140f48680

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__StorageFeatureName__(void)

{
  ::FName::FName(&StorageFeatureName,L"EditorDataStorage");
  return;
}

// `dynamic_initializer_for_'TestFName'' @ 140f486a0

void __cdecl UE::Editor::DataStorage::Tests::Private::_dynamic_initializer_for__TestFName__(void)

{
  ::FName::FName(&TestFName,"FMapKey_TestName");
  return;
}

// `dynamic_initializer_for_'TestPath'' @ 140f486c0

void __cdecl UE::Editor::DataStorage::Tests::Private::_dynamic_initializer_for__TestPath__(void)

{
  FName FVar1;
  FName *pFVar2;
  FUtf8String *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_68;
  TStringOverload<FUtf8String> local_58;
  FString local_48;
  FUtf8String local_38;
  FTopLevelAssetPath local_28;
  FUtf8String local_18;
  
  ::FString::FString(&local_48,L"FMapKey_TestSubPath");
  pFVar2 = ::FName::FName(&local_res8,"FMapKey_TestAsset");
  FVar1 = *pFVar2;
  pFVar2 = ::FName::FName(&local_res10,"FMapKey_TestPackage");
  pFVar5 = (FScriptContainerElement *)0x0;
  local_68.PackageName.ComparisonIndex.Value = 0;
  local_68.PackageName.Number = 0;
  local_68.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_68,*pFVar2,FVar1);
  local_28.PackageName = local_68.PackageName;
  local_28.AssetName = local_68.AssetName;
  TestPath.AssetPath.PackageName.ComparisonIndex.Value = 0;
  TestPath.AssetPath.PackageName.Number = 0;
  iVar4 = 0;
  iVar6 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar6 = iVar4;
  }
  TestPath.AssetPath.AssetName.ComparisonIndex.Value = 0;
  TestPath.AssetPath.AssetName.Number = 0;
  TestPath.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TestPath.SubPathString.Data.ArrayNum = 0;
  TestPath.SubPathString.Data.ArrayMax = 0;
  pFVar3 = FUtf8String::ConstructFromPtrSize
                     (&local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
  local_58.String.Data.ArrayMax = 0;
  if (&local_18 != pFVar3) {
    pFVar5 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar3->Data).ArrayNum;
    local_58.String.Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  local_58.String.Data.AllocatorInstance.Data = pFVar5;
  local_58.String.Data.ArrayNum = iVar4;
  FSoftObjectPath::SetPath(&TestPath,&local_28,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__TestPath__);
  return;
}

// `dynamic_initializer_for_'UiFeatureName'' @ 140f48800

void __cdecl UE::Editor::DataStorage::_dynamic_initializer_for__UiFeatureName__(void)

{
  ::FName::FName(&UiFeatureName,L"EditorDataStorageUi");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h__Script_TypedElementFramework_126435397'' @ 140f48820

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h__Script_TypedElementFramework_126435397__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Private_TypedElementFrameworkTests_h__Script_TypedElementFramework_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_DataStorage_CommonTypes_h__Script_TypedElementFramework_3030766221'' @ 140f48860

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_DataStorage_CommonTypes_h__Script_TypedElementFramework_3030766221__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_DataStorage_CommonTypes_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h__Script_TypedElementFramework_4040889628'' @ 140f488a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h__Script_TypedElementFramework_4040889628__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSelectionColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h__Script_TypedElementFramework_1068601606'' @ 140f488e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h__Script_TypedElementFramework_1068601606__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementSlateWidgetColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h__Script_TypedElementFramework_3872202813'' @ 140f48920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h__Script_TypedElementFramework_3872202813__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTransformColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h__Script_TypedElementFramework_440077681'' @ 140f48960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h__Script_TypedElementFramework_440077681__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementTypeInfoColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h__Script_TypedElementFramework_2911713727'' @ 140f489a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h__Script_TypedElementFramework_2911713727__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementUIColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h__Script_TypedElementFramework_1048582281'' @ 140f489e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h__Script_TypedElementFramework_1048582281__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementValueCacheColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h__Script_TypedElementFramework_1512154288'' @ 140f48a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h__Script_TypedElementFramework_1512154288__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementViewportColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementVisibilityColumns_h__Script_TypedElementFramework_821941829'' @ 140f48a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementVisibilityColumns_h__Script_TypedElementFramework_821941829__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementVisibilityColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementWebColumns_h__Script_TypedElementFramework_228837481'' @ 140f48aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementWebColumns_h__Script_TypedElementFramework_228837481__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_TypedElementWebColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_WidgetPurposeColumns_h__Script_TypedElementFramework_2506554873'' @ 140f48ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_WidgetPurposeColumns_h__Script_TypedElementFramework_2506554873__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Columns_WidgetPurposeColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,7,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h__Script_TypedElementFramework_625535371'' @ 140f48b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h__Script_TypedElementFramework_625535371__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementCounter_h__Script_TypedElementFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h__Script_TypedElementFramework_3836187796'' @ 140f48b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h__Script_TypedElementFramework_3836187796__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementRegistry_h__Script_TypedElementFramework_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_DecoratorWidgetConstructor_h__Script_TypedElementFramework_3426670106'' @ 140f48ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_DecoratorWidgetConstructor_h__Script_TypedElementFramework_3426670106__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_DecoratorWidgetConstructor_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h__Script_TypedElementFramework_1271744070'' @ 140f48be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h__Script_TypedElementFramework_1271744070__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h__Script_TypedElementFramework_973968077'' @ 140f48c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h__Script_TypedElementFramework_973968077__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TypedElementFramework",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Tests_Elements_Framework_TypedElementTestColumns_h__Script_TypedElementFramework_Statics
             ::ScriptStructInfo,0x12,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewStructOps @ 142c81d70

void * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeNameColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetPurposeNameColumn,&UE::CoreUObject::Private::Construct<FWidgetPurposeNameColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeNameColumn>,&UE::CoreUObject::Private::Destruct<FWidgetPurposeNameColumn>,&UE::CoreUObject::Private::Copy<FWidgetPurposeNameColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c81fa0

void * __cdecl Z_Construct_UScriptStruct_FTestColumnInt_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnInt,&UE::CoreUObject::Private::Construct<FTestColumnInt>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnInt>,&UE::CoreUObject::Private::Destruct<FTestColumnInt>,&UE::CoreUObject::Private::Copy<FTestColumnInt>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82050

void * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageUrlColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditorDataStorageUrlColumn,&UE::CoreUObject::Private::Construct<FEditorDataStorageUrlColumn>,&UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageUrlColumn>,&UE::CoreUObject::Private::Destruct<FEditorDataStorageUrlColumn>,&UE::CoreUObject::Private::Copy<FEditorDataStorageUrlColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82090

void * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetFactoryColumn,&UE::CoreUObject::Private::Construct<FWidgetFactoryColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c820d0

void * __cdecl Z_Construct_UScriptStruct_FTestColumnString_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnString,&UE::CoreUObject::Private::Construct<FTestColumnString>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnString>,&UE::CoreUObject::Private::Destruct<FTestColumnString>,&UE::CoreUObject::Private::Copy<FTestColumnString>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82130

void * __cdecl
Z_Construct_UScriptStruct_FEditorDataStorageWebImageColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditorDataStorageWebImageColumn,&UE::CoreUObject::Private::Construct<FEditorDataStorageWebImageColumn>,&UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageWebImageColumn>,&UE::CoreUObject::Private::Destruct<FEditorDataStorageWebImageColumn>,&UE::CoreUObject::Private::Copy<FEditorDataStorageWebImageColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTypedElementCounterInterface @ 142c821a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTypedElementCounterInterface(void)

{
  if (Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton,
               &Z_Construct_UClass_UTypedElementCounterInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTypedElementCounterInterface.OuterSingleton;
}

// NewStructOps @ 142c821e0

void * __cdecl
Z_Construct_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetFactoryConstructorTypeInfoColumn,&UE::CoreUObject::Private::Construct<FWidgetFactoryConstructorTypeInfoColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConstructorTypeInfoColumn>,&UE::CoreUObject::Private::Destruct<FWidgetFactoryConstructorTypeInfoColumn>,&UE::CoreUObject::Private::Copy<FWidgetFactoryConstructorTypeInfoColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82250

void * __cdecl Z_Construct_UScriptStruct_FTestTagColumnA_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestTagColumnA,&UE::CoreUObject::Private::Construct<FTestTagColumnA>,&UE::CoreUObject::Private::ConstructForTests<FTestTagColumnA>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c823b0

void * __cdecl Z_Construct_UScriptStruct_FWidgetConstructorNameColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetConstructorNameColumn,&UE::CoreUObject::Private::Construct<FWidgetConstructorNameColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetConstructorNameColumn>,&UE::CoreUObject::Private::Destruct<FWidgetConstructorNameColumn>,&UE::CoreUObject::Private::Copy<FWidgetConstructorNameColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c824f0

void * __cdecl Z_Construct_UScriptStruct_FTestTagColumnB_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestTagColumnB,&UE::CoreUObject::Private::Construct<FTestTagColumnB>,&UE::CoreUObject::Private::ConstructForTests<FTestTagColumnB>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c826b0

void * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x2a8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetFactoryConditionsColumn,&UE::CoreUObject::Private::Construct<FWidgetFactoryConditionsColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConditionsColumn>,&UE::CoreUObject::Private::Destruct<FWidgetFactoryConditionsColumn>,&UE::CoreUObject::Private::Copy<FWidgetFactoryConditionsColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c827b0

void * __cdecl Z_Construct_UScriptStruct_FTestTagColumnC_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestTagColumnC,&UE::CoreUObject::Private::Construct<FTestTagColumnC>,&UE::CoreUObject::Private::ConstructForTests<FTestTagColumnC>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82820

void * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryConstructorColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetFactoryConstructorColumn,&UE::CoreUObject::Private::Construct<FWidgetFactoryConstructorColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConstructorColumn>,&UE::CoreUObject::Private::Destruct<FWidgetFactoryConstructorColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82890

void * __cdecl Z_Construct_UScriptStruct_FTestTagColumnD_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestTagColumnD,&UE::CoreUObject::Private::Construct<FTestTagColumnD>,&UE::CoreUObject::Private::ConstructForTests<FTestTagColumnD>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82900

void * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditorDataStorageColumn,&UE::CoreUObject::Private::Construct<FEditorDataStorageColumn>,&UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c82940

void * __cdecl
Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTEDSProcessorTestsReferenceColumn,&UE::CoreUObject::Private::Construct<FTEDSProcessorTestsReferenceColumn>,&UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTestsReferenceColumn>,&UE::CoreUObject::Private::Destruct<FTEDSProcessorTestsReferenceColumn>,&UE::CoreUObject::Private::Copy<FTEDSProcessorTestsReferenceColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA @ 142c829b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceA_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA.OuterSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped @ 142c829f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.OuterSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped @ 142c82a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.OuterSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceB @ 142c82a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceB(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceB.OuterSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed @ 142c82ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.OuterSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceC @ 142c82af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceC(void)

{
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton,
               &Z_Construct_UClass_UTestTypedElementInterfaceC_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceC.OuterSingleton;
}

// NewStructOps @ 142c82b30

void * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FEditorDataStorageTag,&UE::CoreUObject::Private::Construct<FEditorDataStorageTag>,&UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName @ 142c82ba0

UFunction * __cdecl Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTestTypedElementInterfaceA_GetDisplayName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 142c82be0

void * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTEDSProcessorTests_PrimaryTag,&UE::CoreUObject::Private::Construct<FTEDSProcessorTests_PrimaryTag>,&UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_PrimaryTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNotify_SetBit @ 142c82c20

void __cdecl
Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_bNotify_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 142c82c30

void __cdecl
Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName @ 142c82c40

UFunction * __cdecl Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTestTypedElementInterfaceA_SetDisplayName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 142c82c80

void * __cdecl
Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTEDSProcessorTests_SecondaryTag,&UE::CoreUObject::Private::Construct<FTEDSProcessorTests_SecondaryTag>,&UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_SecondaryTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 142c82ce0

void __cdecl
Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 142c82d90

void * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTEDSProcessorTests_Linked,&UE::CoreUObject::Private::Construct<FTEDSProcessorTests_Linked>,&UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_Linked>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested @ 142c82dd0

UFunction * __cdecl Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTestTypedElementInterfaceB_MarkAsTested_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 142c82ec0

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementLocalTransformColumn,&UE::CoreUObject::Private::Construct<FTypedElementLocalTransformColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementLocalTransformColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementLocalTransformColumn>,&UE::CoreUObject::Private::Copy<FTypedElementLocalTransformColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 142c82f20

void __cdecl
Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested @ 142c82f30

UFunction * __cdecl Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTestTypedElementInterfaceC_GetIsTested_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 142c83070

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementClassTypeInfoColumn,&UE::CoreUObject::Private::Construct<FTypedElementClassTypeInfoColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementClassTypeInfoColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementClassTypeInfoColumn>,&UE::CoreUObject::Private::Copy<FTypedElementClassTypeInfoColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c830c0

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementScriptStructTypeInfoColumn,&UE::CoreUObject::Private::Construct<FTypedElementScriptStructTypeInfoColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementScriptStructTypeInfoColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementScriptStructTypeInfoColumn>,&UE::CoreUObject::Private::Copy<FTypedElementScriptStructTypeInfoColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c83150

void * __cdecl Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FHideRowFromUITag,&UE::CoreUObject::Private::Construct<FHideRowFromUITag>,&UE::CoreUObject::Private::ConstructForTests<FHideRowFromUITag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c84300

void * __thiscall
FTypedElementRegistrySmokeTest::_scalar_deleting_destructor_
          (FTypedElementRegistrySmokeTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c84700

void * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKey_Tests::_scalar_deleting_destructor_
          (FMapKey_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// NewStructOps @ 142c84790

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementU32IntValueCacheColumn,&UE::CoreUObject::Private::Construct<FTypedElementU32IntValueCacheColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementU32IntValueCacheColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c847d0

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementI32IntValueCacheColumn,&UE::CoreUObject::Private::Construct<FTypedElementI32IntValueCacheColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementI32IntValueCacheColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c84850

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementU64IntValueCacheColumn,&UE::CoreUObject::Private::Construct<FTypedElementU64IntValueCacheColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementU64IntValueCacheColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c848b0

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementI64IntValueCacheColumn,&UE::CoreUObject::Private::Construct<FTypedElementI64IntValueCacheColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementI64IntValueCacheColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c84b80

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementFloatValueCacheColumn,&UE::CoreUObject::Private::Construct<FTypedElementFloatValueCacheColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementFloatValueCacheColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c84bc0

void * __thiscall
UE::Editor::DataStorage::Tests::Private::FMapKeyView_Tests::_scalar_deleting_destructor_
          (FMapKeyView_Tests *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PrettyNameDotNotation).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c85e10

void * __thiscall
FTypedElementRegistryPerfTest::_scalar_deleting_destructor_
          (FTypedElementRegistryPerfTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 142c85ef0

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementViewportOutlineColorColumn,&UE::CoreUObject::Private::Construct<FTypedElementViewportOutlineColorColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementViewportOutlineColorColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementViewportOutlineColorColumn>,&UE::CoreUObject::Private::Copy<FTypedElementViewportOutlineColorColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c85f50

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementViewportOverlayColorColumn,&UE::CoreUObject::Private::Construct<FTypedElementViewportOverlayColorColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementViewportOverlayColorColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementViewportOverlayColorColumn>,&UE::CoreUObject::Private::Copy<FTypedElementViewportOverlayColorColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FEditorDataStorageColumn @ 142c86460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditorDataStorageColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditorDataStorageColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEditorDataStorageColumn.InnerSingleton;
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

// NewStructOps @ 142c864e0

void * __cdecl Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementSelectionColumn,&UE::CoreUObject::Private::Construct<FTypedElementSelectionColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementSelectionColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementSelectionColumn>,&UE::CoreUObject::Private::Copy<FTypedElementSelectionColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c86770

void * __thiscall
FTedsDecoratorWidgetConstructor::_scalar_deleting_destructor_
          (FTedsDecoratorWidgetConstructor *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// Z_Construct_UScriptStruct_FTedsWidgetConstructorBase @ 142c86800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTedsWidgetConstructorBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.InnerSingleton,
               &Z_Construct_UScriptStruct_FTedsWidgetConstructorBase_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTedsWidgetConstructorBase.InnerSingleton;
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

// NewStructOps @ 142c86880

void * __cdecl Z_Construct_UScriptStruct_FTedsDecoratorWidgetConstructor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTedsDecoratorWidgetConstructor,&UE::CoreUObject::Private::Construct<FTedsDecoratorWidgetConstructor>,&UE::CoreUObject::Private::ConstructForTests<FTedsDecoratorWidgetConstructor>,&UE::CoreUObject::Private::Destruct<FTedsDecoratorWidgetConstructor>,&UE::CoreUObject::Private::Copy<FTedsDecoratorWidgetConstructor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FEditorDataStorageTag @ 142c86a80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageTag.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditorDataStorageTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditorDataStorageTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageTag.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FEditorDataStorageTag.InnerSingleton;
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

// NewStructOps @ 142c86b50

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementSlateWidgetReferenceColumn,&UE::CoreUObject::Private::Construct<FTypedElementSlateWidgetReferenceColumn>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementSlateWidgetReferenceColumn>,&UE::CoreUObject::Private::Destruct<FTypedElementSlateWidgetReferenceColumn>,&UE::CoreUObject::Private::Copy<FTypedElementSlateWidgetReferenceColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86c10

void * __cdecl
Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementSlateWidgetReferenceDeletesRowTag,&UE::CoreUObject::Private::Construct<FTypedElementSlateWidgetReferenceDeletesRowTag>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementSlateWidgetReferenceDeletesRowTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FTypedElementWidgetConstructor @ 142c86c50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementWidgetConstructor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementWidgetConstructor.InnerSingleton;
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

// NewStructOps @ 142c86cd0

void * __cdecl Z_Construct_UScriptStruct_FTedsWidgetConstructorBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTedsWidgetConstructorBase,&UE::CoreUObject::Private::Construct<FTedsWidgetConstructorBase>,&UE::CoreUObject::Private::ConstructForTests<FTedsWidgetConstructorBase>,&UE::CoreUObject::Private::Destruct<FTedsWidgetConstructorBase>,&UE::CoreUObject::Private::Copy<FTedsWidgetConstructorBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86d10

void * __cdecl Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTypedElementWidgetConstructor,&UE::CoreUObject::Private::Construct<FTypedElementWidgetConstructor>,&UE::CoreUObject::Private::ConstructForTests<FTypedElementWidgetConstructor>,&UE::CoreUObject::Private::Destruct<FTypedElementWidgetConstructor>,&UE::CoreUObject::Private::Copy<FTypedElementWidgetConstructor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86d50

void * __cdecl Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSimpleWidgetConstructor,&UE::CoreUObject::Private::Construct<FSimpleWidgetConstructor>,&UE::CoreUObject::Private::ConstructForTests<FSimpleWidgetConstructor>,&UE::CoreUObject::Private::Destruct<FSimpleWidgetConstructor>,&UE::CoreUObject::Private::Copy<FSimpleWidgetConstructor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86d90

void * __cdecl Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDisplayNameColumn,&UE::CoreUObject::Private::Construct<FDisplayNameColumn>,&UE::CoreUObject::Private::ConstructForTests<FDisplayNameColumn>,&UE::CoreUObject::Private::Destruct<FDisplayNameColumn>,&UE::CoreUObject::Private::Copy<FDisplayNameColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86eb0

void * __cdecl Z_Construct_UScriptStruct_FDescriptionColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FDescriptionColumn,&UE::CoreUObject::Private::Construct<FDescriptionColumn>,&UE::CoreUObject::Private::ConstructForTests<FDescriptionColumn>,&UE::CoreUObject::Private::Destruct<FDescriptionColumn>,&UE::CoreUObject::Private::Copy<FDescriptionColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c86fe0

void * __cdecl Z_Construct_UScriptStruct_FSlateColorColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSlateColorColumn,&UE::CoreUObject::Private::Construct<FSlateColorColumn>,&UE::CoreUObject::Private::ConstructForTests<FSlateColorColumn>,&UE::CoreUObject::Private::Destruct<FSlateColorColumn>,&UE::CoreUObject::Private::Copy<FSlateColorColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c87020

void * __cdecl Z_Construct_UScriptStruct_FIsInEditingModeTag_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FIsInEditingModeTag,&UE::CoreUObject::Private::Construct<FIsInEditingModeTag>,&UE::CoreUObject::Private::ConstructForTests<FIsInEditingModeTag>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c870d0

void * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetPurposeReferenceColumn,&UE::CoreUObject::Private::Construct<FWidgetPurposeReferenceColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeReferenceColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTypedElementRegistry @ 142c875c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTypedElementRegistry(void)

{
  if (Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton,
               &Z_Construct_UClass_UTypedElementRegistry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTypedElementRegistry.OuterSingleton;
}

// Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface @ 142c877a0

UFunction * __cdecl Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTypedElementRegistry_GetElementInterface_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 142c877e0

void * __cdecl Z_Construct_UScriptStruct_FTestColumnA_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnA,&UE::CoreUObject::Private::Construct<FTestColumnA>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnA>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c87830

void * __thiscall
FTedsWidgetConstructorBase::_scalar_deleting_destructor_
          (FTedsWidgetConstructorBase *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->MatchedDynamicTemplates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MatchedDynamicTemplates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MatchedDynamicTemplates);
  pFVar2 = (this->MatchedColumnTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UFunction_UTypedElementRegistry_GetInstance @ 142c878b0

UFunction * __cdecl Z_Construct_UFunction_UTypedElementRegistry_GetInstance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTypedElementRegistry_GetInstance_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 142c878f0

void * __cdecl Z_Construct_UScriptStruct_FTestColumnB_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnB,&UE::CoreUObject::Private::Construct<FTestColumnB>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnB>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c88470

void * __thiscall
FTypedElementWidgetConstructor::_scalar_deleting_destructor_
          (FTypedElementWidgetConstructor *this,uint param_1)

{
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142c88640

void * __thiscall
FSimpleWidgetConstructor::_scalar_deleting_destructor_(FSimpleWidgetConstructor *this,uint param_1)

{
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// Z_Construct_UClass_UTypedElementRegistry_NoRegister @ 142c886b0

UClass * __cdecl Z_Construct_UClass_UTypedElementRegistry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UTypedElementRegistry::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementRegistry",
               &Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton,
               UTypedElementRegistry::StaticRegisterNativesUTypedElementRegistry,0x960,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementRegistry>,
               InternalVTableHelperCtorCaller<UTypedElementRegistry>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementRegistry.InnerSingleton;
}

// NewStructOps @ 142c88760

void * __cdecl Z_Construct_UScriptStruct_FTestColumnC_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnC,&UE::CoreUObject::Private::Construct<FTestColumnC>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnC>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c88870

void * __cdecl Z_Construct_UScriptStruct_FTestColumnD_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnD,&UE::CoreUObject::Private::Construct<FTestColumnD>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnD>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c88a40

void * __cdecl Z_Construct_UScriptStruct_FTestColumnE_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnE,&UE::CoreUObject::Private::Construct<FTestColumnE>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnE>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c88da0

void * __cdecl Z_Construct_UScriptStruct_FTestColumnF_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnF,&UE::CoreUObject::Private::Construct<FTestColumnF>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnF>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 142c88ed0

void * __thiscall
FTypedElementFrameworkModule::_scalar_deleting_destructor_
          (FTypedElementFrameworkModule *this,uint param_1)

{
  *this = (FTypedElementFrameworkModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 142c88f10

void * __cdecl Z_Construct_UScriptStruct_FTestColumnG_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnG,&UE::CoreUObject::Private::Construct<FTestColumnG>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnG>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c88fa0

void * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWidgetPurposeColumn,&UE::CoreUObject::Private::Construct<FWidgetPurposeColumn>,&UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeColumn>,&UE::CoreUObject::Private::Destruct<FWidgetPurposeColumn>,&UE::CoreUObject::Private::Copy<FWidgetPurposeColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c88fe0

void * __cdecl Z_Construct_UScriptStruct_FVisibleInEditorColumn_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVisibleInEditorColumn,&UE::CoreUObject::Private::Construct<FVisibleInEditorColumn>,&UE::CoreUObject::Private::ConstructForTests<FVisibleInEditorColumn>,&UE::CoreUObject::Private::Destruct<FVisibleInEditorColumn>,&UE::CoreUObject::Private::Copy<FVisibleInEditorColumn>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 142c89020

void * __cdecl Z_Construct_UScriptStruct_FTestColumnDynamic_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestColumnDynamic,&UE::CoreUObject::Private::Construct<FTestColumnDynamic>,&UE::CoreUObject::Private::ConstructForTests<FTestColumnDynamic>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// BinarySearch<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,unsigned___int64,TLess<void>_> @ 142c8bfa0

int __cdecl
Algo::
BinarySearch<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,unsigned___int64,TLess<void>_>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,ulong64 *param_2,
          TLess<void> param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pFVar2 = (param_1->AllocatorInstance).Data;
  iVar5 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar6 = uVar1;
    do {
      iVar4 = (uVar6 >> 1) + iVar5;
      if (*(ulonglong *)(pFVar2 + (longlong)iVar4 * 8) < *param_2) {
        iVar5 = iVar4 + (uVar6 & 1);
      }
      uVar3 = uVar6 >> 1;
      uVar6 = uVar6 >> 1;
    } while (uVar3 != 0);
  }
  iVar4 = -1;
  if ((iVar5 < (int)uVar1) && (iVar4 = -1, *(ulonglong *)(pFVar2 + (longlong)iVar5 * 8) <= *param_2)
     ) {
    iVar4 = iVar5;
  }
  return iVar4;
}

// BinarySearch<TArrayView<unsigned___int64_const_,int>,unsigned___int64,TLess<void>_> @ 142c8c020

int __cdecl
Algo::BinarySearch<TArrayView<unsigned___int64_const_,int>,unsigned___int64,TLess<void>_>
          (TArrayView<unsigned___int64_const_,int> *param_1,ulong64 *param_2,TLess<void> param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  uVar1 = param_1->ArrayNum;
  if (0 < (int)uVar1) {
    uVar5 = uVar1;
    do {
      iVar3 = (uVar5 >> 1) + iVar4;
      if (param_1->DataPtr[iVar3] < *param_2) {
        iVar4 = iVar3 + (uVar5 & 1);
      }
      uVar2 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar2 != 0);
  }
  iVar3 = -1;
  if ((iVar4 < (int)uVar1) && (iVar3 = -1, param_1->DataPtr[iVar4] <= *param_2)) {
    iVar3 = iVar4;
  }
  return iVar3;
}

// BinarySearchBy<TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c8c0a0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> *param_1,FName *param_2,
          FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0xc) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0xc);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0xc + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c8c140

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TObjectPtr<UObject>_>,TSizedDefaultAllocator<32>_> *param_1,
          FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x10);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x10 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// BinarySearchBy<TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c8c1e0

int __cdecl
Algo::
BinarySearchBy<TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TArray<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,TSizedDefaultAllocator<32>_>
           *param_1,FName *param_2,FKeyForward param_3,FNameFastLess param_4)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = param_1->ArrayNum;
  iVar4 = 0;
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (0 < (int)uVar1) {
    uVar7 = uVar1;
    do {
      iVar5 = (uVar7 >> 1) + iVar4;
      iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10) - (param_2->ComparisonIndex).Value;
      if (iVar6 == 0) {
        iVar6 = *(int *)(pFVar2 + (longlong)iVar5 * 0x10 + 4) - param_2->Number;
      }
      if (iVar6 < 0) {
        iVar4 = iVar5 + (uVar7 & 1);
      }
      uVar3 = uVar7 >> 1;
      uVar7 = uVar7 >> 1;
    } while (uVar3 != 0);
    if (iVar4 < (int)uVar1) {
      iVar5 = (param_2->ComparisonIndex).Value - *(int *)(pFVar2 + (longlong)iVar4 * 0x10);
      if (iVar5 == 0) {
        iVar5 = param_2->Number - *(int *)(pFVar2 + (longlong)iVar4 * 0x10 + 4);
      }
      iVar6 = -1;
      if (-1 < iVar5) {
        iVar6 = iVar4;
      }
      return iVar6;
    }
  }
  return -1;
}

// CastChecked<UTypedElementRegistry,UObject> @ 142c8c280

UTypedElementRegistry * __cdecl CastChecked<UTypedElementRegistry,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UTypedElementRegistry>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UTypedElementRegistry::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UTypedElementRegistry *)param_1;
  }
  pFVar3 = GetTypeName<UTypedElementRegistry>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<UE::Editor::DataStorage::FColumnMetaData,UE::Editor::DataStorage::FColumnMetaData,int> @ 142c8c340

void __cdecl
ConstructItems<UE::Editor::DataStorage::FColumnMetaData,UE::Editor::DataStorage::FColumnMetaData,int>
          (void *param_1,FColumnMetaData *param_2,int param_3)

{
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
  *pTVar1;
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
  *pTVar2;
  TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
  *this;
  
  if (param_3 != 0) {
    pTVar2 = (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&param_2->_padding_;
    this = (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
            *)((longlong)param_1 + 0x58);
    do {
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x58 - (longlong)param_2)) =
           &___7FMetaDataBase_DataStorage_Editor_UE__6B_;
      TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
      ::
      TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                (this + -1,pTVar2 + -1);
      TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
      ::
      TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                (this,pTVar2);
      *(undefined ***)((longlong)pTVar2 + (longlong)param_1 + (-0x58 - (longlong)param_2)) =
           &___7FColumnMetaData_DataStorage_Editor_UE__6B_;
      *(undefined8 *)(this + 1) = *(undefined8 *)(pTVar2 + 1);
      pTVar1 = pTVar2 + 1;
      pTVar2 = (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
                *)&pTVar2[2].field_0x18;
      *(undefined4 *)&this[1].field_0x8 = *(undefined4 *)&pTVar1->field_0x8;
      this = (TMap<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TVariant<bool,unsigned___int64,__int64,double,FString>,0>_>
              *)&this[2].field_0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CreateLambda<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::$$V::XZ::`UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>'::__l2::<lambda_1>,XZ::`UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>'::__l2::$$QEAV<lambda_1>::AV0_*_const_volatile,_??_> @ 142c8c860

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
CreateLambda<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::__V::XZ::_UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>_::__l2::<lambda_1>,XZ::_UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>_::__l2::__QEAV<lambda_1>::AV0_*_const_volatile,____>
          (TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *__return_storage_ptr__,
          <lambda_1> *param_1)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  puVar1 = &__return_storage_ptr__->field_0x8;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)__return_storage_ptr__,
             (FWriteAccessScope *)&local_28);
  local_10 = puVar1;
  puVar3 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)puVar1);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = TBaseFunctorDelegateInstance<class_FText___cdecl(void),FDefaultDelegateUserPolicy,`public:___cdecl_UE::Editor::DataStorage::FTextAttributeFormatted::operator_class_TAttribute<class_FText>(void)___ptr64'::`2'::<lambda_1>_>
              ::_vftable_;
    puVar3[3] = (param_1->Format).TextFormatData.Object;
    pTVar2 = (param_1->Format).TextFormatData.SharedReferenceCount.ReferenceController;
    puVar3[4] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
                *)(puVar3 + 5),
               (TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
                *)&param_1->NamedProperties);
    puVar3[0xf] = param_1->Storage;
    puVar3[0x10] = param_1->Row;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return __return_storage_ptr__;
}

// DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int> @ 142c8ca10

void __cdecl
DestructItems<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>,int>
          (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
           *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x8;
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTypedElementOwner<FTestTypedElementData>,int> @ 142c8ca50

void __cdecl
DestructItems<TTypedElementOwner<FTestTypedElementData>,int>
          (TTypedElementOwner<FTestTypedElementData> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->DataPtr != (TTypedElementInternalData<FTestTypedElementData> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                           ,0x1b5,
                           L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                          ), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<TTypedElementOwner<void>,int> @ 142c8cab0

void __cdecl
DestructItems<TTypedElementOwner<void>,int>(TTypedElementOwner<void> *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    if ((param_1->DataPtr != (TTypedElementInternalData<void> *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("!IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementHandle.h"
                           ,0x1b5,
                           L"Element owner was still set during destruction! This will leak an element, and you should destroy this element prior to destruction!"
                          ), bVar2)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// DestructItems<FTypedElementHandle,int> @ 142c8cb10

void __cdecl DestructItems<FTypedElementHandle,int>(FTypedElementHandle *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1->DataPtr != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef(param_1->DataPtr,param_1->ReferenceId);
    }
    param_1->DataPtr = (FTypedElementInternalData *)0x0;
    param_1->ReferenceId = -1;
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<UE::Editor::DataStorage::FColumnMetaData,int> @ 142c8cb70

void __cdecl
DestructItems<UE::Editor::DataStorage::FColumnMetaData,int>(FColumnMetaData *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = &param_1->_padding_;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(plVar1 + -8));
      *(undefined4 *)(plVar1 + -9) = 0;
      if ((void *)plVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)plVar1[-10]);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(plVar1 + -0x12));
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UTypedElementRegistry> @ 142c8f680

FString * __cdecl GetTypeName<UTypedElementRegistry>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UTypedElementRegistry::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypedElementCounterKeyName<unsigned_char> @ 142c8f6c0

FName __cdecl GetTypedElementCounterKeyName<unsigned_char>(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::
                         __l3::_thread_safe_static_guard_0__);
    if (`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
        _thread_safe_static_guard_0__ == -1) {
      FName::FName(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::
                    KeyTypeName,L"uint8");
      _Init_thread_footer(&`class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'
                           ::__l3::_thread_safe_static_guard_0__);
    }
  }
  *(FName *)in_RCX =
       `class_FName___cdecl_GetTypedElementCounterKeyName<unsigned_char>(void)'::__l3::KeyTypeName;
  return in_RCX;
}

// IndexOfBy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,unsigned___int64,FIdentityFunctor> @ 142c8f7e0

int __cdecl
AlgoImpl::
IndexOfBy<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,unsigned___int64,FIdentityFunctor>
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1,ulong64 *param_2,
          FIdentityFunctor param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (0 < param_1->ArrayNum) {
    uVar2 = uVar1;
    do {
      if (*(ulong64 *)((param_1->AllocatorInstance).Data + uVar1 * 8) == *param_2) {
        return (int)uVar2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)param_1->ArrayNum);
  }
  return -1;
}

// InternalConstructor<UTestTypedElementInterfaceA> @ 142c8f820

void __cdecl InternalConstructor<UTestTypedElementInterfaceA>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UTestTypedElementInterfaceA__6B_;
  }
  return;
}

// InternalConstructor<UTestTypedElementInterfaceA_ImplTyped> @ 142c8f850

void __cdecl InternalConstructor<UTestTypedElementInterfaceA_ImplTyped>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UTestTypedElementInterfaceA_ImplTyped::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UTestTypedElementInterfaceA_ImplTyped::_vftable__for__ITestTypedElementInterfaceA__;
  }
  return;
}

// InternalConstructor<UTestTypedElementInterfaceA_ImplUntyped> @ 142c8f890

void __cdecl
InternalConstructor<UTestTypedElementInterfaceA_ImplUntyped>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UTestTypedElementInterfaceA_ImplUntyped::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UTestTypedElementInterfaceA_ImplUntyped::_vftable__for__ITestTypedElementInterfaceA__;
  }
  return;
}

// InternalConstructor<UTestTypedElementInterfaceB> @ 142c8f8d0

void __cdecl InternalConstructor<UTestTypedElementInterfaceB>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UTestTypedElementInterfaceB__6B_;
  }
  return;
}

// InternalConstructor<UTestTypedElementInterfaceBAndC_Typed> @ 142c8f900

void __cdecl InternalConstructor<UTestTypedElementInterfaceBAndC_Typed>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__ITestTypedElementInterfaceB__;
    *(undefined ***)&this[1].field_0x8 =
         &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__ITestTypedElementInterfaceC__;
  }
  return;
}

// InternalConstructor<UTestTypedElementInterfaceC> @ 142c8f950

void __cdecl InternalConstructor<UTestTypedElementInterfaceC>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UTestTypedElementInterfaceC__6B_;
  }
  return;
}

// InternalConstructor<UTypedElementCounterInterface> @ 142c8f980

void __cdecl InternalConstructor<UTypedElementCounterInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UTypedElementCounterInterface__6B_;
  }
  return;
}

// InternalConstructor<UTypedElementRegistry> @ 142c8f9b0

void __cdecl InternalConstructor<UTypedElementRegistry>(FObjectInitializer *param_1)

{
  pmf_ef70b916 this;
  undefined8 *puVar1;
  undefined8 *puVar2;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong lVar3;
  FLLMScope aFStackX_8 [2];
  FMemScope aFStackX_10 [2];
  
  this = (pmf_ef70b916)param_1->Obj;
  if (this == (pmf_ef70b916)0x0) {
    return;
  }
  UObject::UObject((UObject *)this);
  lVar3 = 0x1f;
  *(undefined ***)this = &___7UTypedElementRegistry__6B_;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  puVar1 = (undefined8 *)((longlong)this + 0x30);
  do {
    puVar2 = puVar1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    lVar3 = lVar3 + -1;
    puVar1 = puVar2 + 8;
  } while (lVar3 != 0);
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  *(undefined8 *)((longlong)this + 0x820) = 0;
  *(undefined8 *)((longlong)this + 0x828) = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((longlong)this + 0x830),4000);
  *(undefined8 *)((longlong)this + 0x858) = 0;
  *(undefined8 *)((longlong)this + 0x860) = 0;
  *(undefined8 *)((longlong)this + 0x878) = 0;
  *(undefined4 *)((longlong)this + 0x880) = 0;
  *(undefined4 *)((longlong)this + 0x884) = 0x80;
  *(undefined4 *)((longlong)this + 0x888) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x88c) = 0;
  *(undefined8 *)((longlong)this + 0x898) = 0;
  *(undefined4 *)((longlong)this + 0x8a0) = 0;
  *(undefined8 *)((longlong)this + 0x8a8) = 0;
  *(undefined8 *)((longlong)this + 0x8b0) = 0;
  *(undefined8 *)((longlong)this + 0x8c8) = 0;
  *(undefined4 *)((longlong)this + 0x8d0) = 0;
  *(undefined4 *)((longlong)this + 0x8d4) = 0x80;
  *(undefined4 *)((longlong)this + 0x8d8) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x8dc) = 0;
  *(undefined8 *)((longlong)this + 0x8e8) = 0;
  *(undefined4 *)((longlong)this + 0x8f0) = 0;
  *(undefined2 *)((longlong)this + 0x8f8) = 0;
  *(undefined8 *)((longlong)this + 0x900) = 0;
  *(undefined8 *)((longlong)this + 0x908) = 0;
  *(undefined8 *)((longlong)this + 0x910) = 0;
  *(undefined8 *)((longlong)this + 0x918) = 2;
  *(undefined8 *)((longlong)this + 0x920) = 0;
  *(undefined8 *)((longlong)this + 0x928) = 0;
  *(undefined8 *)((longlong)this + 0x930) = 0;
  *(undefined8 *)((longlong)this + 0x938) = 2;
  *(undefined8 *)((longlong)this + 0x940) = 0;
  *(undefined8 *)((longlong)this + 0x948) = 0;
  *(undefined8 *)((longlong)this + 0x950) = 0;
  *(undefined8 *)((longlong)this + 0x958) = 2;
  FLLMScope::FLLMScope(aFStackX_8,EngineMisc,false,None,Default,true);
  FMemScope::FMemScope(aFStackX_10,EngineMisc,true);
  if ((*(uint *)((longlong)this + 8) & 0x10) == 0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnBeginFrame,(UTypedElementRegistry *)(aFStackX_10 + 1),this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnEndFrame,(UTypedElementRegistry *)(aFStackX_10 + 1),this);
    this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UTypedElementRegistry>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UTypedElementRegistry *)(aFStackX_10 + 1),this);
  }
  FMemScope::~FMemScope(aFStackX_10);
  FLLMScope::~FLLMScope(aFStackX_8);
  return;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA> @ 142c8f9d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceA::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTestTypedElementInterfaceA__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplTyped> @ 142c8fa80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplTyped>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceA_ImplTyped::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UTestTypedElementInterfaceA_ImplTyped::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UTestTypedElementInterfaceA_ImplTyped::_vftable__for__ITestTypedElementInterfaceA__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplUntyped> @ 142c8fb40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplUntyped>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceA_ImplUntyped::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UTestTypedElementInterfaceA_ImplUntyped::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UTestTypedElementInterfaceA_ImplUntyped::_vftable__for__ITestTypedElementInterfaceA__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceB> @ 142c8fc00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceB>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceB::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTestTypedElementInterfaceB__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceBAndC_Typed> @ 142c8fcb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceBAndC_Typed>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceBAndC_Typed::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) =
         &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__ITestTypedElementInterfaceB__;
    *(undefined ***)&pUVar1[1].field_0x8 =
         &UTestTypedElementInterfaceBAndC_Typed::_vftable__for__ITestTypedElementInterfaceC__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTestTypedElementInterfaceC> @ 142c8fd70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTestTypedElementInterfaceC>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTestTypedElementInterfaceC::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTestTypedElementInterfaceC__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTypedElementCounterInterface> @ 142c8fe20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTypedElementCounterInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTypedElementCounterInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTypedElementCounterInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTypedElementRegistry> @ 142c8fed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTypedElementRegistry>(FVTableHelper *param_1)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UTypedElementRegistry::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    lVar5 = 0x1f;
    *(undefined ***)pUVar2 = &___7UTypedElementRegistry__6B_;
    *(undefined8 *)(pUVar2 + 1) = 0;
    puVar1 = (undefined8 *)&pUVar2[1].field_0x8;
    do {
      puVar4 = puVar1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      lVar5 = lVar5 + -1;
      puVar1 = puVar4 + 8;
    } while (lVar5 != 0);
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *(undefined8 *)(pUVar2 + 0x34) = 0;
    *(undefined8 *)&pUVar2[0x34].field_0x8 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar2[0x34].field_0x10,4000);
    *(undefined8 *)&pUVar2[0x35].field_0x10 = 0;
    *(undefined8 *)&pUVar2[0x35].field_0x18 = 0;
    *(undefined8 *)&pUVar2[0x36].field_0x8 = 0;
    *(undefined4 *)&pUVar2[0x36].field_0x10 = 0;
    *(undefined4 *)&pUVar2[0x36].field_0x14 = 0x80;
    *(undefined4 *)&pUVar2[0x36].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar2[0x36].field_0x1c = 0;
    *(undefined8 *)(pUVar2 + 0x37) = 0;
    *(undefined4 *)&pUVar2[0x37].field_0x8 = 0;
    *(undefined8 *)&pUVar2[0x37].field_0x10 = 0;
    *(undefined8 *)&pUVar2[0x37].field_0x18 = 0;
    *(undefined8 *)&pUVar2[0x38].field_0x8 = 0;
    *(undefined4 *)&pUVar2[0x38].field_0x10 = 0;
    *(undefined4 *)&pUVar2[0x38].field_0x14 = 0x80;
    *(undefined4 *)&pUVar2[0x38].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar2[0x38].field_0x1c = 0;
    *(undefined8 *)(pUVar2 + 0x39) = 0;
    *(undefined4 *)&pUVar2[0x39].field_0x8 = 0;
    *(undefined2 *)&pUVar2[0x39].field_0x10 = 0;
    *(undefined8 *)&pUVar2[0x39].field_0x18 = 0;
    *(undefined8 *)&pUVar2[0x39].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 0x3a) = 0;
    *(undefined8 *)&pUVar2[0x3a].field_0x8 = 2;
    *(undefined8 *)&pUVar2[0x3a].field_0x10 = 0;
    *(undefined8 *)&pUVar2[0x3a].field_0x18 = 0;
    *(undefined8 *)&pUVar2[0x3a].field_0x20 = 0;
    *(undefined8 *)(pUVar2 + 0x3b) = 2;
    *(undefined8 *)&pUVar2[0x3b].field_0x8 = 0;
    *(undefined8 *)&pUVar2[0x3b].field_0x10 = 0;
    *(undefined8 *)&pUVar2[0x3b].field_0x18 = 0;
    *(undefined8 *)&pUVar2[0x3b].field_0x20 = 2;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// LowerBoundInternal<TTuple<FName,unsigned_char>_const_,int,FName,TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c90130

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,unsigned_char>_const_,int,FName,TSortedMap<FName,unsigned_char,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,unsigned_char> *param_1,int param_2,FName *param_3,FKeyForward param_4,
          FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,TObjectPtr<UObject>_>_const_,int,FName,TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c901a0

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TObjectPtr<UObject>_>_const_,int,FName,TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TObjectPtr<UObject>_> *param_1,int param_2,FName *param_3,
          FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>_const_,int,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess> @ 142c90200

int __cdecl
AlgoImpl::
LowerBoundInternal<TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>_const_,int,FName,TSortedMap<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
          (TTuple<FName,TUniquePtr<FTypedElementCounter::ICounterCategory,TDefaultDelete<FTypedElementCounter::ICounterCategory>_>_>
           *param_1,int param_2,FName *param_3,FKeyForward param_4,FNameFastLess param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      iVar4 = *(int *)(param_1 + iVar1) - (param_3->ComparisonIndex).Value;
      if (iVar4 == 0) {
        iVar4 = *(int *)&param_1[iVar1].field_0x4 - param_3->Number;
      }
      if (iVar4 < 0) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// LowerBoundInternal<unsigned___int64_const_,int,unsigned___int64,FIdentityFunctor,TLess<void>_> @ 142c90260

int __cdecl
AlgoImpl::
LowerBoundInternal<unsigned___int64_const_,int,unsigned___int64,FIdentityFunctor,TLess<void>_>
          (ulong64 *param_1,int param_2,ulong64 *param_3,FIdentityFunctor param_4,
          TLess<void> param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar3;
      if (param_1[iVar1] < *param_3) {
        iVar3 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar3;
}

// NewObject<UTestTypedElementInterfaceA_ImplTyped> @ 142c902b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestTypedElementInterfaceA_ImplTyped * __cdecl
NewObject<UTestTypedElementInterfaceA_ImplTyped>(UObject *param_1)

{
  UClass *pUVar1;
  UTestTypedElementInterfaceA_ImplTyped *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTestTypedElementInterfaceA_ImplTyped::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTestTypedElementInterfaceA_ImplTyped *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTestTypedElementInterfaceA_ImplUntyped> @ 142c90350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestTypedElementInterfaceA_ImplUntyped * __cdecl
NewObject<UTestTypedElementInterfaceA_ImplUntyped>(UObject *param_1)

{
  UClass *pUVar1;
  UTestTypedElementInterfaceA_ImplUntyped *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTestTypedElementInterfaceA_ImplUntyped::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTestTypedElementInterfaceA_ImplUntyped *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTestTypedElementInterfaceBAndC_Typed> @ 142c903f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTestTypedElementInterfaceBAndC_Typed * __cdecl
NewObject<UTestTypedElementInterfaceBAndC_Typed>(UObject *param_1)

{
  UClass *pUVar1;
  UTestTypedElementInterfaceBAndC_Typed *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTestTypedElementInterfaceBAndC_Typed::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTestTypedElementInterfaceBAndC_Typed *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UTypedElementRegistry> @ 142c90490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UTypedElementRegistry * __cdecl NewObject<UTypedElementRegistry>(UObject *param_1)

{
  UClass *pUVar1;
  UTypedElementRegistry *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UTypedElementRegistry::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UTypedElementRegistry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// Visit<UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93510

ulong64 __cdecl
Visit<UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  double dVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  uint7 uVar16;
  float *pfVar8;
  double *pdVar9;
  undefined4 extraout_var_01;
  ulonglong uVar10;
  undefined4 extraout_var_02;
  FString *pFVar11;
  FHasher *pFVar12;
  undefined8 *puVar13;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FSoftObjectPath *pFVar14;
  ulong64 uVar15;
  longlong lVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  longlong *plVar22;
  float fVar23;
  FSoftObjectPath FStack_28;
  
  pdVar9 = (double *)
           `UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
           ::__l2::Invokers[param_2->TypeIndex];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    return 0;
  case '\x01':
    return param_2->_padding_;
  case '\x02':
    return param_2->_padding_;
  case '\x03':
    return param_2->_padding_;
  case '\x04':
    return param_2->_padding_;
  case '\x05':
    fVar23 = *(float *)&param_2->_padding_;
    lVar17 = 0;
    if ((__real_5f000000 <= fVar23) && (fVar23 = fVar23 - __real_5f000000, fVar23 < __real_5f000000)
       ) {
      lVar17 = -0x8000000000000000;
    }
    return (longlong)fVar23 + lVar17;
  case '\x06':
    dVar1 = (double)param_2->_padding_;
    lVar17 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar17 = -0x8000000000000000;
    }
    return (longlong)dVar1 + lVar17;
  case '\a':
    uVar15 = CityHash64((char *)param_2->_padding_,(int)param_2->_padding_ * 2);
    return uVar15;
  case '\b':
    return *(ulong64 *)param_2->_padding_;
  case '\t':
    uVar15 = UE::Editor::DataStorage::FHasher::operator()
                       (param_1,(FSoftObjectPath *)param_2->_padding_);
    return uVar15;
  case '\n':
    FString::FString((FString *)param_1,L"Empty");
    return (ulong64)param_1;
  case '\v':
    FString::PrintfImpl((FString *)param_1,L"Pointer(0x%p)");
    return (ulong64)param_1;
  case '\f':
    FString::PrintfImpl((FString *)param_1,L"UObject(0x%p)");
    return (ulong64)param_1;
  case '\r':
    FString::PrintfImpl((FString *)param_1,L"%lld");
    return (ulong64)param_1;
  case '\x0e':
    FString::PrintfImpl((FString *)param_1,L"%llu");
    return (ulong64)param_1;
  case '\x0f':
    FString::SanitizeFloat((FString *)param_1,(double)*(float *)pdVar9,1);
    return (ulong64)param_1;
  case '\x10':
    FString::SanitizeFloat((FString *)param_1,*pdVar9,1);
    return (ulong64)param_1;
  case '\x11':
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    pFVar12 = (FHasher *)
              FString::ConstructFromPtrSize
                        ((FString *)&FStack_28.SubPathString,(wchar_t *)*pdVar9,SUB84(pdVar9[1],0));
    if (param_1 != pFVar12) {
      if (*(void **)param_1 != (void *)0x0) {
        FMemory::Free(*(void **)param_1);
      }
      *(undefined8 *)param_1 = *(undefined8 *)pFVar12;
      *(undefined8 *)pFVar12 = 0;
      *(int *)(param_1 + 8) = *(int *)(pFVar12 + 8);
      *(int *)(param_1 + 0xc) = *(int *)(pFVar12 + 0xc);
      *(undefined8 *)(pFVar12 + 8) = 0;
    }
    if (FStack_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.SubPathString.Data.AllocatorInstance.Data);
    }
    return (ulong64)param_1;
  case '\x12':
    FName::ToString((FName *)*pdVar9,(FString *)param_1);
    return (ulong64)param_1;
  case '\x13':
    FSoftObjectPath::ToString((FSoftObjectPath *)*pdVar9,(FString *)param_1);
    return (ulong64)param_1;
  case '\x14':
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return (ulong64)param_1;
  case '\x15':
    *(double *)param_1 = *pdVar9;
    param_1[0x10] = (FHasher)0x1;
    return (ulong64)param_1;
  case '\x16':
    *(double *)param_1 = *pdVar9;
    param_1[0x10] = (FHasher)0x2;
    return (ulong64)param_1;
  case '\x17':
    *(double *)param_1 = *pdVar9;
    param_1[0x10] = (FHasher)0x3;
    return (ulong64)param_1;
  case '\x18':
    *(double *)param_1 = *pdVar9;
    param_1[0x10] = (FHasher)0x4;
    return (ulong64)param_1;
  case '\x19':
    *(float *)param_1 = *(float *)pdVar9;
    param_1[0x10] = (FHasher)0x5;
    return (ulong64)param_1;
  case '\x1a':
    *(double *)param_1 = *pdVar9;
    param_1[0x10] = (FHasher)0x6;
    return (ulong64)param_1;
  case '\x1b':
    pFVar11 = FString::ConstructFromPtrSize
                        ((FString *)&FStack_28,(wchar_t *)*pdVar9,SUB84(pdVar9[1],0));
    pFVar21 = (FScriptContainerElement *)0x0;
    iVar20 = 0;
    iVar19 = iVar20;
    if (&FStack_28.SubPathString != (FUtf8String *)pFVar11) {
      pFVar21 = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar20 = (pFVar11->Data).ArrayNum;
      iVar19 = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (FStack_28.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)FStack_28.AssetPath.PackageName);
    }
    *(FScriptContainerElement **)param_1 = pFVar21;
    *(int *)(param_1 + 8) = iVar20;
    *(int *)(param_1 + 0xc) = iVar19;
    param_1[0x10] = (FHasher)0x7;
    return (ulong64)param_1;
  case '\x1c':
    *(undefined8 *)param_1 = *(undefined8 *)*pdVar9;
    param_1[0x10] = (FHasher)0x8;
    return (ulong64)param_1;
  case '\x1d':
    pFVar14 = FSoftObjectPath::FSoftObjectPath(&FStack_28,(FSoftObjectPath *)*pdVar9);
    UE::Editor::DataStorage::FMapKey::FMapKey((FMapKey *)param_1,pFVar14);
    return (ulong64)param_1;
  case '\x1e':
    bVar2 = *(byte *)(*(longlong *)param_1 + 0x10);
    if ((9 < (ulonglong)bVar2) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return uVar15;
    }
    return (ulonglong)
           *(byte *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + (ulonglong)bVar2);
  case '\x1f':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x01') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case ' ':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x02') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '!':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x03') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '\"':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x04') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '#':
    pfVar8 = *(float **)param_1;
    if (*(char *)(*(float **)param_1 + 4) != '\x05') {
      pfVar8 = (float *)0x0;
    }
    uVar16 = (uint7)((ulonglong)pfVar8 >> 8);
    if ((pfVar8 != (float *)0x0) && (*(float *)&param_2->_padding_ == *pfVar8)) {
      return CONCAT71(uVar16,1);
    }
    return (ulonglong)uVar16 << 8;
  case '$':
    pdVar9 = *(double **)param_1;
    if (*(char *)(*(double **)param_1 + 2) != '\x06') {
      pdVar9 = (double *)0x0;
    }
    uVar16 = (uint7)((ulonglong)pdVar9 >> 8);
    if ((pdVar9 != (double *)0x0) && ((double)param_2->_padding_ == *pdVar9)) {
      return CONCAT71(uVar16,1);
    }
    return (ulonglong)uVar16 << 8;
  case '&':
    puVar13 = (undefined8 *)0x0;
    puVar18 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\b') {
      puVar18 = puVar13;
    }
    if (puVar18 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),
                         *(longlong *)*puVar18 == param_2->_padding_);
    }
    return (ulong64)puVar13;
  case '\'':
    if ((FSoftObjectPath *)param_2->_padding_ != (FSoftObjectPath *)0x0) {
      puVar18 = *(undefined8 **)param_1;
      if (*(char *)(*(undefined8 **)param_1 + 2) != '\t') {
        puVar18 = (undefined8 *)0x0;
      }
      if (puVar18 != (undefined8 *)0x0) {
        bVar5 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)*puVar18,(FSoftObjectPath *)param_2->_padding_);
        return CONCAT71(extraout_var_00,bVar5);
      }
    }
    return 0;
  case '(':
    bVar2 = *(byte *)(*(longlong *)param_1 + 0x10);
    if ((9 < (ulonglong)bVar2) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return uVar15;
    }
    return (ulonglong)
           *(byte *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + (ulonglong)bVar2);
  case ')':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x01') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '*':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x02') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '+':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x03') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case ',':
    plVar7 = (longlong *)0x0;
    plVar22 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x04') {
      plVar22 = plVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      plVar7 = (longlong *)
               CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar22 == param_2->_padding_);
    }
    return (ulong64)plVar7;
  case '-':
    pfVar8 = *(float **)param_1;
    if (*(char *)(*(float **)param_1 + 4) != '\x05') {
      pfVar8 = (float *)0x0;
    }
    uVar16 = (uint7)((ulonglong)pfVar8 >> 8);
    if ((pfVar8 != (float *)0x0) && (*(float *)&param_2->_padding_ == *pfVar8)) {
      return CONCAT71(uVar16,1);
    }
    return (ulonglong)uVar16 << 8;
  case '.':
    pdVar9 = *(double **)param_1;
    if (*(char *)(*(double **)param_1 + 2) != '\x06') {
      pdVar9 = (double *)0x0;
    }
    uVar16 = (uint7)((ulonglong)pdVar9 >> 8);
    if ((pdVar9 != (double *)0x0) && ((double)param_2->_padding_ == *pdVar9)) {
      return CONCAT71(uVar16,1);
    }
    return (ulonglong)uVar16 << 8;
  case '/':
    puVar13 = (undefined8 *)0x0;
    puVar18 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\a') {
      puVar18 = puVar13;
    }
    if (puVar18 == (undefined8 *)0x0) {
      return 0;
    }
    iVar20 = *(int *)(puVar18 + 1);
    iVar19 = (int)param_2->_padding_;
    if (iVar20 == iVar19) {
      if ((iVar20 != 0) && (iVar19 != 0)) {
        iVar6 = iVar19;
        if (iVar20 < iVar19) {
          iVar6 = iVar20;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)*puVar18,(wchar_t *)param_2->_padding_,(longlong)iVar6);
        puVar13 = (undefined8 *)CONCAT44(extraout_var_01,iVar6);
        if (iVar6 != 0) goto LAB_142c94548;
      }
      if (iVar20 == iVar19) {
        return CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
      }
    }
LAB_142c94548:
    return (ulonglong)puVar13 & 0xffffffffffffff00;
  case '0':
    puVar13 = (undefined8 *)0x0;
    puVar18 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\b') {
      puVar18 = puVar13;
    }
    if (puVar18 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),
                         *(longlong *)*puVar18 == *(longlong *)param_2->_padding_);
    }
    return (ulong64)puVar13;
  case '1':
    puVar18 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\t') {
      puVar18 = (undefined8 *)0x0;
    }
    if (puVar18 != (undefined8 *)0x0) {
      bVar5 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)*puVar18,(FSoftObjectPath *)param_2->_padding_);
      return CONCAT71(extraout_var,bVar5);
    }
    return 0;
  }
  puVar18 = *(undefined8 **)param_1;
  if (*(char *)(*(undefined8 **)param_1 + 2) != '\a') {
    puVar18 = (undefined8 *)0x0;
  }
  if (puVar18 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = (uint)param_2->_padding_;
  uVar10 = (ulonglong)uVar3;
  iVar20 = uVar3 - 1;
  if (uVar3 == 0) {
    iVar20 = 0;
  }
  iVar19 = (int)puVar18[1];
  if (iVar19 == iVar20) {
    if ((iVar19 != 0) && (iVar20 != 0)) {
      iVar6 = iVar20;
      if (iVar19 < iVar20) {
        iVar6 = iVar19;
      }
      iVar6 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)*puVar18,(wchar_t *)param_2->_padding_,(longlong)iVar6);
      uVar10 = CONCAT44(extraout_var_02,iVar6);
      if (iVar6 != 0) goto LAB_142c945d2;
    }
    if (iVar19 == iVar20) {
      return CONCAT71((int7)(uVar10 >> 8),1);
    }
  }
LAB_142c945d2:
  return uVar10 & 0xffffffffffffff00;
}

// Visit<UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93530

ulong64 __cdecl
Visit<UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  double dVar1;
  byte bVar2;
  FName *this;
  ulonglong *puVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_var_01;
  ulonglong uVar9;
  longlong *plVar10;
  uint7 uVar19;
  float *pfVar11;
  double *pdVar12;
  undefined4 extraout_var_02;
  undefined8 *puVar13;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FString *pFVar14;
  FHasher *pFVar15;
  undefined8 *puVar16;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  FSoftObjectPath *pFVar17;
  ulong64 uVar18;
  longlong lVar20;
  int iVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  longlong *plVar24;
  float fVar25;
  FSoftObjectPath FStack_28;
  
  this = (FName *)`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
                  ::__l2::Invokers[param_2->TypeIndex];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    return 0;
  case '\x01':
    return param_2->_padding_;
  case '\x02':
    return param_2->_padding_;
  case '\x03':
    return param_2->_padding_;
  case '\x04':
    return param_2->_padding_;
  case '\x05':
    fVar25 = *(float *)&param_2->_padding_;
    lVar20 = 0;
    if ((__real_5f000000 <= fVar25) && (fVar25 = fVar25 - __real_5f000000, fVar25 < __real_5f000000)
       ) {
      lVar20 = -0x8000000000000000;
    }
    return (longlong)fVar25 + lVar20;
  case '\x06':
    dVar1 = (double)param_2->_padding_;
    lVar20 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar20 = -0x8000000000000000;
    }
    return (longlong)dVar1 + lVar20;
  case '\a':
    iVar22 = (int)param_2->_padding_;
    if (iVar22 != 0) {
      uVar18 = CityHash64((char *)param_2->_padding_,(iVar22 + -1) * 2);
      return uVar18;
    }
    uVar18 = CityHash64((char *)L"",0);
    return uVar18;
  case '\b':
    return param_2->_padding_;
  case '\t':
    uVar18 = UE::Editor::DataStorage::FHasher::operator()
                       (param_1,(FSoftObjectPath *)param_2->_padding_);
    return uVar18;
  case '\n':
    FString::FString((FString *)param_1,L"Empty");
    return (ulong64)param_1;
  case '\v':
    FString::PrintfImpl((FString *)param_1,L"Pointer(0x%p)");
    return (ulong64)param_1;
  case '\f':
    FString::PrintfImpl((FString *)param_1,L"UObject(0x%p)");
    return (ulong64)param_1;
  case '\r':
    FString::PrintfImpl((FString *)param_1,L"%lld");
    return (ulong64)param_1;
  case '\x0e':
    FString::PrintfImpl((FString *)param_1,L"%llu");
    return (ulong64)param_1;
  case '\x0f':
    FString::SanitizeFloat((FString *)param_1,(double)(float)(this->ComparisonIndex).Value,1);
    return (ulong64)param_1;
  case '\x10':
    FString::SanitizeFloat((FString *)param_1,(double)*this,1);
    return (ulong64)param_1;
  case '\x11':
    FString::FString((FString *)param_1,(FString *)this);
    return (ulong64)param_1;
  case '\x12':
    FName::ToString(this,(FString *)param_1);
    return (ulong64)param_1;
  case '\x13':
    bVar6 = *this == (FName)0x0;
    if (bVar6) {
      pFVar14 = FString::FString((FString *)&FStack_28,L"Empty path");
    }
    else {
      pFVar14 = FSoftObjectPath::ToString
                          ((FSoftObjectPath *)*this,(FString *)&FStack_28.SubPathString);
    }
    *(undefined8 *)param_1 = 0;
    *(FScriptContainerElement **)param_1 = (pFVar14->Data).AllocatorInstance.Data;
    (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(param_1 + 8) = (pFVar14->Data).ArrayNum;
    *(int *)(param_1 + 0xc) = (pFVar14->Data).ArrayMax;
    (pFVar14->Data).ArrayNum = 0;
    (pFVar14->Data).ArrayMax = 0;
    if ((bVar6) && (FStack_28.AssetPath.PackageName != (FName)0x0)) {
      FMemory::Free((void *)FStack_28.AssetPath.PackageName);
    }
    if ((!bVar6) &&
       (FStack_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(FStack_28.SubPathString.Data.AllocatorInstance.Data);
    }
    return (ulong64)param_1;
  case '\x14':
    bVar2 = *(byte *)(*(longlong *)param_1 + 0x10);
    if ((9 < (ulonglong)bVar2) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return uVar18;
    }
    return (ulonglong)
           *(byte *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + (ulonglong)bVar2);
  case '\x15':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x01') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case '\x16':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x02') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case '\x17':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x03') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case '\x18':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x04') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case '\x19':
    pfVar11 = *(float **)param_1;
    if (*(char *)(*(float **)param_1 + 4) != '\x05') {
      pfVar11 = (float *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pfVar11 >> 8);
    if ((pfVar11 != (float *)0x0) && (*(float *)&param_2->_padding_ == *pfVar11)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case '\x1a':
    pdVar12 = *(double **)param_1;
    if (*(char *)(*(double **)param_1 + 2) != '\x06') {
      pdVar12 = (double *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pdVar12 >> 8);
    if ((pdVar12 != (double *)0x0) && ((double)param_2->_padding_ == *pdVar12)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case '\x1b':
    puVar13 = (undefined8 *)0x0;
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\a') {
      puVar16 = puVar13;
    }
    if (puVar16 != (undefined8 *)0x0) {
      iVar22 = *(int *)(puVar16 + 1);
      iVar21 = (int)param_2->_padding_;
      if (iVar22 != iVar21) {
        iVar22 = iVar22 + iVar21;
        return (ulonglong)CONCAT31((int3)((uint)iVar22 >> 8),iVar22 == 1);
      }
      if (1 < iVar22) {
        iVar22 = FGenericPlatformStricmp::Stricmp((wchar_t *)*puVar16,(wchar_t *)param_2->_padding_)
        ;
        return CONCAT71((int7)(CONCAT44(extraout_var_02,iVar22) >> 8),iVar22 == 0);
      }
      puVar13 = (undefined8 *)CONCAT71((uint7)(uint3)((uint)iVar22 >> 8),1);
    }
    return (ulong64)puVar13;
  case '\x1c':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\b') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case '\x1e':
    param_1[0x10] = (FHasher)0x0;
    return (ulong64)param_1;
  case '\x1f':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x1;
    return (ulong64)param_1;
  case ' ':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x2;
    return (ulong64)param_1;
  case '!':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x3;
    return (ulong64)param_1;
  case '\"':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x4;
    return (ulong64)param_1;
  case '#':
    *(uint *)param_1 = (this->ComparisonIndex).Value;
    param_1[0x10] = (FHasher)0x5;
    return (ulong64)param_1;
  case '$':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x6;
    return (ulong64)param_1;
  case '%':
    *(FName *)param_1 = *this;
    uVar7 = this[1].ComparisonIndex.Value;
    iVar22 = uVar7 - 1;
    if (uVar7 == 0) {
      iVar22 = 0;
    }
    *(int *)(param_1 + 8) = iVar22;
    param_1[0x10] = (FHasher)0x7;
    return (ulong64)param_1;
  case '&':
    *(FName **)param_1 = this;
    param_1[0x10] = (FHasher)0x8;
    return (ulong64)param_1;
  case '\'':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x9;
    return (ulong64)param_1;
  case '(':
    return 0;
  case ')':
    return param_2->_padding_;
  case '*':
    return param_2->_padding_;
  case '+':
    return param_2->_padding_;
  case ',':
    return param_2->_padding_;
  case '-':
    fVar25 = *(float *)&param_2->_padding_;
    lVar20 = 0;
    if ((__real_5f000000 <= fVar25) && (fVar25 = fVar25 - __real_5f000000, fVar25 < __real_5f000000)
       ) {
      lVar20 = -0x8000000000000000;
    }
    return (longlong)fVar25 + lVar20;
  case '.':
    dVar1 = (double)param_2->_padding_;
    lVar20 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar20 = -0x8000000000000000;
    }
    return (longlong)dVar1 + lVar20;
  case '/':
    uVar18 = CityHash64((char *)param_2->_padding_,(int)param_2->_padding_ * 2);
    return uVar18;
  case '0':
    return *(ulong64 *)param_2->_padding_;
  case '1':
    uVar18 = UE::Editor::DataStorage::FHasher::operator()
                       (param_1,(FSoftObjectPath *)param_2->_padding_);
    return uVar18;
  case '2':
    FString::FString((FString *)param_1,L"Empty");
    return (ulong64)param_1;
  case '3':
    FString::PrintfImpl((FString *)param_1,L"Pointer(0x%p)");
    return (ulong64)param_1;
  case '4':
    FString::PrintfImpl((FString *)param_1,L"UObject(0x%p)");
    return (ulong64)param_1;
  case '5':
    FString::PrintfImpl((FString *)param_1,L"%lld");
    return (ulong64)param_1;
  case '6':
    FString::PrintfImpl((FString *)param_1,L"%llu");
    return (ulong64)param_1;
  case '7':
    FString::SanitizeFloat((FString *)param_1,(double)(float)(this->ComparisonIndex).Value,1);
    return (ulong64)param_1;
  case '8':
    FString::SanitizeFloat((FString *)param_1,(double)*this,1);
    return (ulong64)param_1;
  case '9':
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    pFVar15 = (FHasher *)
              FString::ConstructFromPtrSize
                        ((FString *)&FStack_28.SubPathString,(wchar_t *)*this,
                         this[1].ComparisonIndex.Value);
    if (param_1 != pFVar15) {
      if (*(void **)param_1 != (void *)0x0) {
        FMemory::Free(*(void **)param_1);
      }
      *(undefined8 *)param_1 = *(undefined8 *)pFVar15;
      *(undefined8 *)pFVar15 = 0;
      *(int *)(param_1 + 8) = *(int *)(pFVar15 + 8);
      *(int *)(param_1 + 0xc) = *(int *)(pFVar15 + 0xc);
      *(undefined8 *)(pFVar15 + 8) = 0;
    }
    if (FStack_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.SubPathString.Data.AllocatorInstance.Data);
    }
    return (ulong64)param_1;
  case ':':
    FName::ToString((FName *)*this,(FString *)param_1);
    return (ulong64)param_1;
  case ';':
    FSoftObjectPath::ToString((FSoftObjectPath *)*this,(FString *)param_1);
    return (ulong64)param_1;
  case '<':
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    return (ulong64)param_1;
  case '=':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x1;
    return (ulong64)param_1;
  case '>':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x2;
    return (ulong64)param_1;
  case '?':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x3;
    return (ulong64)param_1;
  case '@':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x4;
    return (ulong64)param_1;
  case 'A':
    *(uint *)param_1 = (this->ComparisonIndex).Value;
    param_1[0x10] = (FHasher)0x5;
    return (ulong64)param_1;
  case 'B':
    *(FName *)param_1 = *this;
    param_1[0x10] = (FHasher)0x6;
    return (ulong64)param_1;
  case 'C':
    pFVar14 = FString::ConstructFromPtrSize
                        ((FString *)&FStack_28,(wchar_t *)*this,this[1].ComparisonIndex.Value);
    pFVar23 = (FScriptContainerElement *)0x0;
    iVar22 = 0;
    iVar21 = iVar22;
    if (&FStack_28.SubPathString != (FUtf8String *)pFVar14) {
      pFVar23 = (pFVar14->Data).AllocatorInstance.Data;
      (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar22 = (pFVar14->Data).ArrayNum;
      iVar21 = (pFVar14->Data).ArrayMax;
      (pFVar14->Data).ArrayNum = 0;
      (pFVar14->Data).ArrayMax = 0;
    }
    if (FStack_28.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)FStack_28.AssetPath.PackageName);
    }
    *(FScriptContainerElement **)param_1 = pFVar23;
    *(int *)(param_1 + 8) = iVar22;
    *(int *)(param_1 + 0xc) = iVar21;
    param_1[0x10] = (FHasher)0x7;
    return (ulong64)param_1;
  case 'D':
    *(undefined8 *)param_1 = *(undefined8 *)*this;
    param_1[0x10] = (FHasher)0x8;
    return (ulong64)param_1;
  case 'E':
    pFVar17 = FSoftObjectPath::FSoftObjectPath(&FStack_28,(FSoftObjectPath *)*this);
    UE::Editor::DataStorage::FMapKey::FMapKey((FMapKey *)param_1,pFVar17);
    return (ulong64)param_1;
  case 'F':
    bVar2 = *(byte *)(*(longlong *)param_1 + 0x10);
    if ((9 < (ulonglong)bVar2) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return uVar18;
    }
    return (ulonglong)
           *(byte *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + (ulonglong)bVar2);
  case 'G':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x01') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'H':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x02') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'I':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x03') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'J':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x04') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'K':
    pfVar11 = *(float **)param_1;
    if (*(char *)(*(float **)param_1 + 4) != '\x05') {
      pfVar11 = (float *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pfVar11 >> 8);
    if ((pfVar11 != (float *)0x0) && (*(float *)&param_2->_padding_ == *pfVar11)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case 'L':
    pdVar12 = *(double **)param_1;
    if (*(char *)(*(double **)param_1 + 2) != '\x06') {
      pdVar12 = (double *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pdVar12 >> 8);
    if ((pdVar12 != (double *)0x0) && ((double)param_2->_padding_ == *pdVar12)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case 'M':
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\a') {
      puVar16 = (undefined8 *)0x0;
    }
    if (puVar16 == (undefined8 *)0x0) {
      return 0;
    }
    uVar7 = (uint)param_2->_padding_;
    uVar9 = (ulonglong)uVar7;
    iVar22 = uVar7 - 1;
    if (uVar7 == 0) {
      iVar22 = 0;
    }
    iVar21 = (int)puVar16[1];
    if (iVar21 == iVar22) {
      if ((iVar21 != 0) && (iVar22 != 0)) {
        iVar8 = iVar22;
        if (iVar21 < iVar22) {
          iVar8 = iVar21;
        }
        iVar8 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)*puVar16,(wchar_t *)param_2->_padding_,(longlong)iVar8);
        uVar9 = CONCAT44(extraout_var_04,iVar8);
        if (iVar8 != 0) goto LAB_142c945d2;
      }
      if (iVar21 == iVar22) {
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
    }
LAB_142c945d2:
    return uVar9 & 0xffffffffffffff00;
  case 'N':
    puVar13 = (undefined8 *)0x0;
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\b') {
      puVar16 = puVar13;
    }
    if (puVar16 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),
                         *(longlong *)*puVar16 == param_2->_padding_);
    }
    return (ulong64)puVar13;
  case 'O':
    if ((FSoftObjectPath *)param_2->_padding_ != (FSoftObjectPath *)0x0) {
      puVar16 = *(undefined8 **)param_1;
      if (*(char *)(*(undefined8 **)param_1 + 2) != '\t') {
        puVar16 = (undefined8 *)0x0;
      }
      if (puVar16 != (undefined8 *)0x0) {
        bVar6 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)*puVar16,(FSoftObjectPath *)param_2->_padding_);
        return CONCAT71(extraout_var_00,bVar6);
      }
    }
    return 0;
  case 'P':
    bVar2 = *(byte *)(*(longlong *)param_1 + 0x10);
    if ((9 < (ulonglong)bVar2) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar18 = (*pcVar5)();
      return uVar18;
    }
    return (ulonglong)
           *(byte *)((longlong)
                     &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                      ::__l2::bIsSameType + (ulonglong)bVar2);
  case 'Q':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x01') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'R':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x02') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'S':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x03') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'T':
    plVar10 = (longlong *)0x0;
    plVar24 = *(longlong **)param_1;
    if ((char)(*(longlong **)param_1)[2] != '\x04') {
      plVar24 = plVar10;
    }
    if (plVar24 != (longlong *)0x0) {
      plVar10 = (longlong *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),*plVar24 == param_2->_padding_);
    }
    return (ulong64)plVar10;
  case 'U':
    pfVar11 = *(float **)param_1;
    if (*(char *)(*(float **)param_1 + 4) != '\x05') {
      pfVar11 = (float *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pfVar11 >> 8);
    if ((pfVar11 != (float *)0x0) && (*(float *)&param_2->_padding_ == *pfVar11)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case 'V':
    pdVar12 = *(double **)param_1;
    if (*(char *)(*(double **)param_1 + 2) != '\x06') {
      pdVar12 = (double *)0x0;
    }
    uVar19 = (uint7)((ulonglong)pdVar12 >> 8);
    if ((pdVar12 != (double *)0x0) && ((double)param_2->_padding_ == *pdVar12)) {
      return CONCAT71(uVar19,1);
    }
    return (ulonglong)uVar19 << 8;
  case 'W':
    puVar13 = (undefined8 *)0x0;
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\a') {
      puVar16 = puVar13;
    }
    if (puVar16 == (undefined8 *)0x0) {
      return 0;
    }
    iVar22 = *(int *)(puVar16 + 1);
    iVar21 = (int)param_2->_padding_;
    if (iVar22 == iVar21) {
      if ((iVar22 != 0) && (iVar21 != 0)) {
        iVar8 = iVar21;
        if (iVar22 < iVar21) {
          iVar8 = iVar22;
        }
        iVar8 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)*puVar16,(wchar_t *)param_2->_padding_,(longlong)iVar8);
        puVar13 = (undefined8 *)CONCAT44(extraout_var_03,iVar8);
        if (iVar8 != 0) goto LAB_142c94548;
      }
      if (iVar22 == iVar21) {
        return CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
      }
    }
LAB_142c94548:
    return (ulonglong)puVar13 & 0xffffffffffffff00;
  case 'X':
    puVar13 = (undefined8 *)0x0;
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\b') {
      puVar16 = puVar13;
    }
    if (puVar16 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)
                CONCAT71((int7)((ulonglong)param_2->_padding_ >> 8),
                         *(longlong *)*puVar16 == *(longlong *)param_2->_padding_);
    }
    return (ulong64)puVar13;
  case 'Y':
    puVar16 = *(undefined8 **)param_1;
    if (*(char *)(*(undefined8 **)param_1 + 2) != '\t') {
      puVar16 = (undefined8 *)0x0;
    }
    if (puVar16 == (undefined8 *)0x0) {
      return 0;
    }
    bVar6 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)*puVar16,(FSoftObjectPath *)param_2->_padding_);
    return CONCAT71(extraout_var,bVar6);
  }
  puVar16 = *(undefined8 **)param_1;
  if (*(char *)(*(undefined8 **)param_1 + 2) != '\t') {
    puVar16 = (undefined8 *)0x0;
  }
  if (((puVar16 == (undefined8 *)0x0) ||
      (puVar3 = (ulonglong *)*puVar16, puVar3 == (ulonglong *)0x0)) ||
     (puVar4 = (ulonglong *)param_2->_padding_, puVar4 == (ulonglong *)0x0)) {
    return (ulonglong)puVar16 & 0xffffffffffffff00;
  }
  uVar9 = *puVar4;
  if ((*puVar3 == uVar9) && (uVar9 = puVar4[1], puVar3[1] == uVar9)) {
    uVar7 = (uint)puVar3[3];
    uVar9 = (ulonglong)uVar7;
    if (uVar7 == (uint)puVar4[3]) {
      if ((int)uVar7 < 2) goto LAB_142202315;
      iVar22 = FGenericPlatformStricmp::Stricmp((uchar *)puVar3[2],(uchar *)puVar4[2]);
      uVar9 = CONCAT44(extraout_var_01,iVar22);
      bVar6 = iVar22 == 0;
    }
    else {
      uVar7 = uVar7 + (uint)puVar4[3];
      uVar9 = (ulonglong)uVar7;
      bVar6 = uVar7 == 1;
    }
    uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar6);
    if (bVar6 != false) {
LAB_142202315:
      return CONCAT71((int7)(uVar9 >> 8),1);
    }
  }
  return uVar9 & 0xffffffffffffff00;
}

// Visit<UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93550

bool __cdecl
Visit<UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  double dVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar9;
  FString *pFVar10;
  ulong64 uVar11;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar12;
  FSoftObjectPath *pFVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  FSoftObjectPath FStack_28;
  
  pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
             *)`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
               ::__l2::Invokers[param_2->TypeIndex];
  bVar5 = SUB81(param_1,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    uVar15 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar15) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar15);
  case '\x01':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '\x02':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '\x03':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '\x04':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '\x05':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar12->_padding_)) {
      return true;
    }
    return false;
  case '\x06':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x06') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && ((double)param_2->_padding_ == (double)pTVar12->_padding_)) {
      return true;
    }
    return false;
  case '\b':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '\t':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\t') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if (((pTVar12 ==
          (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
           *)0x0) || (plVar2 = (longlong *)pTVar12->_padding_, plVar2 == (longlong *)0x0)) ||
       (plVar3 = (longlong *)param_2->_padding_, plVar3 == (longlong *)0x0)) {
      return false;
    }
    if ((*plVar2 == *plVar3) && (plVar2[1] == plVar3[1])) {
      iVar7 = (int)plVar2[3];
      if (iVar7 == (int)plVar3[3]) {
        if (iVar7 < 2) {
          return true;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp((uchar *)plVar2[2],(uchar *)plVar3[2]);
        bVar5 = iVar7 == 0;
      }
      else {
        bVar5 = iVar7 + (int)plVar3[3] == 1;
      }
      if (bVar5) {
        return true;
      }
    }
    return false;
  case '\n':
    *(undefined1 *)&param_1[2].Key = 0;
    return bVar5;
  case '\v':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 1;
    return bVar5;
  case '\f':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 2;
    return bVar5;
  case '\r':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 3;
    return bVar5;
  case '\x0e':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 4;
    return bVar5;
  case '\x0f':
    *(int *)&param_1->Key = (int)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 5;
    return bVar5;
  case '\x10':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 6;
    return bVar5;
  case '\x11':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    iVar14 = (int)pTVar12->_padding_;
    iVar7 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar7 = 0;
    }
    *(int *)&param_1[1].Key = iVar7;
    *(undefined1 *)&param_1[2].Key = 7;
    return bVar5;
  case '\x12':
    param_1->Key = pTVar12;
    *(undefined1 *)&param_1[2].Key = 8;
    return bVar5;
  case '\x13':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 9;
    return bVar5;
  case '\x14':
    return false;
  case '\x15':
    return SUB81(param_2->_padding_,0);
  case '\x16':
    return SUB81(param_2->_padding_,0);
  case '\x17':
    return SUB81(param_2->_padding_,0);
  case '\x18':
    return SUB81(param_2->_padding_,0);
  case '\x19':
    fVar16 = *(float *)&param_2->_padding_;
    if (__real_5f000000 <= fVar16) {
      fVar16 = fVar16 - __real_5f000000;
    }
    return (bool)(char)(longlong)fVar16;
  case '\x1a':
    dVar1 = (double)param_2->_padding_;
    if (__real_43e0000000000000 <= dVar1) {
      dVar1 = dVar1 - __real_43e0000000000000;
    }
    return (bool)(char)(longlong)dVar1;
  case '\x1b':
    uVar11 = CityHash64((char *)param_2->_padding_,(int)param_2->_padding_ * 2);
    return SUB81(uVar11,0);
  case '\x1c':
    return SUB81(*(undefined8 *)param_2->_padding_,0);
  case '\x1d':
    uVar11 = UE::Editor::DataStorage::FHasher::operator()
                       ((FHasher *)param_1,(FSoftObjectPath *)param_2->_padding_);
    return SUB81(uVar11,0);
  case '\x1e':
    FString::FString((FString *)param_1,L"Empty");
    return bVar5;
  case '\x1f':
    FString::PrintfImpl((FString *)param_1,L"Pointer(0x%p)");
    return bVar5;
  case ' ':
    FString::PrintfImpl((FString *)param_1,L"UObject(0x%p)");
    return bVar5;
  case '!':
    FString::PrintfImpl((FString *)param_1,L"%lld");
    return bVar5;
  case '\"':
    FString::PrintfImpl((FString *)param_1,L"%llu");
    return bVar5;
  case '#':
    FString::SanitizeFloat((FString *)param_1,(double)*(float *)&pTVar12->_padding_,1);
    return bVar5;
  case '$':
    FString::SanitizeFloat((FString *)param_1,(double)pTVar12->_padding_,1);
    return bVar5;
  case '%':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)0x0;
    param_1[1].Key =
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0;
    pFVar10 = FString::ConstructFromPtrSize
                        ((FString *)&FStack_28.SubPathString,(wchar_t *)pTVar12->_padding_,
                         (int)pTVar12->_padding_);
    if ((FString *)param_1 != pFVar10) {
      if (param_1->Key !=
          (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
           *)0x0) {
        FMemory::Free(param_1->Key);
      }
      param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                      *)(pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&param_1[1].Key = (pFVar10->Data).ArrayNum;
      *(int *)((longlong)&param_1[1].Key + 4) = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (FStack_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.SubPathString.Data.AllocatorInstance.Data);
    }
    return bVar5;
  case '&':
    FName::ToString((FName *)pTVar12->_padding_,(FString *)param_1);
    return bVar5;
  case '\'':
    FSoftObjectPath::ToString((FSoftObjectPath *)pTVar12->_padding_,(FString *)param_1);
    return bVar5;
  case '(':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)0x0;
    param_1[1].Key =
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0;
    param_1[2].Key =
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0;
    return bVar5;
  case ')':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 1;
    return bVar5;
  case '*':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 2;
    return bVar5;
  case '+':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 3;
    return bVar5;
  case ',':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 4;
    return bVar5;
  case '-':
    *(int *)&param_1->Key = (int)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 5;
    return bVar5;
  case '.':
    param_1->Key = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 6;
    return bVar5;
  case '/':
    pFVar10 = FString::ConstructFromPtrSize
                        ((FString *)&FStack_28,(wchar_t *)pTVar12->_padding_,(int)pTVar12->_padding_
                        );
    pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
               *)0x0;
    iVar7 = 0;
    iVar14 = iVar7;
    if (&FStack_28.SubPathString != (FUtf8String *)pFVar10) {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)(pFVar10->Data).AllocatorInstance.Data;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar7 = (pFVar10->Data).ArrayNum;
      iVar14 = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (FStack_28.AssetPath.PackageName != (FName)0x0) {
      FMemory::Free((void *)FStack_28.AssetPath.PackageName);
    }
    param_1->Key = pTVar12;
    *(int *)&param_1[1].Key = iVar7;
    *(int *)((longlong)&param_1[1].Key + 4) = iVar14;
    *(undefined1 *)&param_1[2].Key = 7;
    return bVar5;
  case '0':
    param_1->Key = *(TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     **)pTVar12->_padding_;
    *(undefined1 *)&param_1[2].Key = 8;
    return bVar5;
  case '1':
    pFVar13 = FSoftObjectPath::FSoftObjectPath(&FStack_28,(FSoftObjectPath *)pTVar12->_padding_);
    UE::Editor::DataStorage::FMapKey::FMapKey((FMapKey *)param_1,pFVar13);
    return bVar5;
  case '2':
    uVar15 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar15) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar15);
  case '3':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '4':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '5':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '6':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '7':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar12->_padding_)) {
      return true;
    }
    return false;
  case '8':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x06') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && ((double)param_2->_padding_ == (double)pTVar12->_padding_)) {
      return true;
    }
    return false;
  case '9':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\a') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if (pTVar12 ==
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      return false;
    }
    iVar14 = (int)param_2->_padding_;
    iVar7 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar7 = 0;
    }
    iVar14 = (int)pTVar12->_padding_;
    if (iVar14 == iVar7) {
      if ((iVar14 != 0) && (iVar7 != 0)) {
        iVar8 = iVar7;
        if (iVar14 < iVar7) {
          iVar8 = iVar14;
        }
        iVar8 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)pTVar12->_padding_,(wchar_t *)param_2->_padding_,
                           (longlong)iVar8);
        if (iVar8 != 0) {
          return false;
        }
      }
      if (iVar14 == iVar7) {
        return true;
      }
    }
    return false;
  case ':':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(*(longlong *)pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case ';':
    if ((FSoftObjectPath *)param_2->_padding_ != (FSoftObjectPath *)0x0) {
      pTVar12 = param_1->Key;
      if (param_1->Key->TypeIndex != '\t') {
        pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                   *)0x0;
      }
      if (pTVar12 !=
          (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
           *)0x0) {
        bVar5 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)pTVar12->_padding_,
                           (FSoftObjectPath *)param_2->_padding_);
        return bVar5;
      }
    }
    return false;
  case '<':
    uVar15 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar15) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar15);
  case '=':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '>':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '?':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case '@':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(pTVar12->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case 'A':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar12->_padding_)) {
      return true;
    }
    return false;
  case 'B':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x06') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if ((pTVar12 !=
         (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *)0x0) && ((double)param_2->_padding_ == (double)pTVar12->_padding_)) {
      return true;
    }
    return false;
  case 'C':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\a') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      iVar7 = (int)pTVar12->_padding_;
      iVar14 = (int)param_2->_padding_;
      if (iVar7 == iVar14) {
        if ((iVar7 != 0) && (iVar14 != 0)) {
          iVar8 = iVar14;
          if (iVar7 < iVar14) {
            iVar8 = iVar7;
          }
          iVar8 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)pTVar12->_padding_,(wchar_t *)param_2->_padding_,
                             (longlong)iVar8);
          if (iVar8 != 0) {
            return false;
          }
        }
        if (iVar7 == iVar14) {
          return true;
        }
      }
    }
    return false;
  case 'D':
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar12 = pTVar9;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                *)(ulonglong)(*(longlong *)pTVar12->_padding_ == *(longlong *)param_2->_padding_);
    }
    return SUB81(pTVar9,0);
  case 'E':
    pTVar12 = param_1->Key;
    if (param_1->Key->TypeIndex != '\t') {
      pTVar12 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0;
    }
    if (pTVar12 !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
         *)0x0) {
      bVar5 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)pTVar12->_padding_,(FSoftObjectPath *)param_2->_padding_
                        );
      return bVar5;
    }
    return false;
  }
  pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar12 = param_1->Key;
  if (param_1->Key->TypeIndex != '\a') {
    pTVar12 = pTVar9;
  }
  if (pTVar12 !=
      (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
       *)0x0) {
    iVar7 = (int)pTVar12->_padding_;
    iVar14 = (int)param_2->_padding_;
    if (iVar7 != iVar14) {
      return iVar7 + iVar14 == 1;
    }
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)pTVar12->_padding_,(wchar_t *)param_2->_padding_);
      return iVar7 == 0;
    }
    pTVar9 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)&DAT_00000001;
  }
  return SUB81(pTVar9,0);
}

// Visit<UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93570

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl Visit<UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c935a0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl Visit<UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>(unsigned___int64,UE::Editor::DataStorage::FKeyMove&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>&&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c935d0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl Visit<UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyToKeyViewConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93600

bool __cdecl
Visit<UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar6;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar7;
  ulonglong uVar8;
  int iVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    uVar8 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar8) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar8);
  case '\x01':
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar7 = pTVar6;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar7->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar6,0);
  case '\x02':
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar7 = pTVar6;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar7->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar6,0);
  case '\x03':
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar7 = pTVar6;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar7->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar6,0);
  case '\x04':
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar7 = pTVar6;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar7->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar6,0);
  case '\x05':
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if ((pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                    *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar7->_padding_)) {
      return true;
    }
    return false;
  case '\a':
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\a') {
      pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      iVar1 = (int)pTVar7->_padding_;
      iVar9 = (int)param_2->_padding_;
      if (iVar1 == iVar9) {
        if ((iVar1 != 0) && (iVar9 != 0)) {
          iVar5 = iVar9;
          if (iVar1 < iVar9) {
            iVar5 = iVar1;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)pTVar7->_padding_,(wchar_t *)param_2->_padding_,
                             (longlong)iVar5);
          if (iVar5 != 0) {
            return false;
          }
        }
        if (iVar1 == iVar9) {
          return true;
        }
      }
    }
    return false;
  case '\b':
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar7 = pTVar6;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(*(longlong *)pTVar7->_padding_ == *(longlong *)param_2->_padding_);
    }
    return SUB81(pTVar6,0);
  case '\t':
    pTVar7 = param_1->Key;
    if (param_1->Key->TypeIndex != '\t') {
      pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      bVar3 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)pTVar7->_padding_,(FSoftObjectPath *)param_2->_padding_)
      ;
      return bVar3;
    }
    return false;
  }
  pTVar7 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x06') {
    pTVar7 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar7 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && ((double)param_2->_padding_ == (double)pTVar7->_padding_)) {
    return true;
  }
  return false;
}

// Visit<UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93620

bool __cdecl
Visit<UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar5;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\0':
    uVar8 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar8) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar8);
  case '\x01':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x02':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x03':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x04':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x05':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if ((pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                    *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar6->_padding_)) {
      return true;
    }
    return false;
  case '\x06':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x06') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if ((pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                    *)0x0) && ((double)param_2->_padding_ == (double)pTVar6->_padding_)) {
      return true;
    }
    return false;
  case '\a':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\a') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar6 == (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      return false;
    }
    iVar7 = (int)param_2->_padding_;
    iVar9 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar9 = 0;
    }
    iVar7 = (int)pTVar6->_padding_;
    if (iVar7 == iVar9) {
      if ((iVar7 != 0) && (iVar9 != 0)) {
        iVar4 = iVar9;
        if (iVar7 < iVar9) {
          iVar4 = iVar7;
        }
        iVar4 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)pTVar6->_padding_,(wchar_t *)param_2->_padding_,
                           (longlong)iVar4);
        if (iVar4 != 0) {
          return false;
        }
      }
      if (iVar7 == iVar9) {
        return true;
      }
    }
    return false;
  case '\b':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(*(longlong *)pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\t':
    if ((FSoftObjectPath *)param_2->_padding_ != (FSoftObjectPath *)0x0) {
      pTVar6 = param_1->Key;
      if (param_1->Key->TypeIndex != '\t') {
        pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0;
      }
      if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *)0x0) {
        bVar2 = FSoftObjectPath::operator==
                          ((FSoftObjectPath *)pTVar6->_padding_,
                           (FSoftObjectPath *)param_2->_padding_);
        return bVar2;
      }
    }
    return false;
  case '\n':
    uVar8 = (ulonglong)param_1->Key->TypeIndex;
    if ((9 < uVar8) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    return (bool)*(undefined1 *)
                  ((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + uVar8);
  case '\v':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x01') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\f':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x02') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\r':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x03') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x0e':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x04') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(pTVar6->_padding_ == param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x0f':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\x05') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if ((pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                    *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar6->_padding_)) {
      return true;
    }
    return false;
  case '\x11':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\a') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      iVar9 = (int)pTVar6->_padding_;
      iVar7 = (int)param_2->_padding_;
      if (iVar9 == iVar7) {
        if ((iVar9 != 0) && (iVar7 != 0)) {
          iVar4 = iVar7;
          if (iVar9 < iVar7) {
            iVar4 = iVar9;
          }
          iVar4 = FGenericPlatformStricmp::Strnicmp
                            ((wchar_t *)pTVar6->_padding_,(wchar_t *)param_2->_padding_,
                             (longlong)iVar4);
          if (iVar4 != 0) {
            return false;
          }
        }
        if (iVar9 == iVar7) {
          return true;
        }
      }
    }
    return false;
  case '\x12':
    pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\b') {
      pTVar6 = pTVar5;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      pTVar5 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)(ulonglong)(*(longlong *)pTVar6->_padding_ == *(longlong *)param_2->_padding_);
    }
    return SUB81(pTVar5,0);
  case '\x13':
    pTVar6 = param_1->Key;
    if (param_1->Key->TypeIndex != '\t') {
      pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      bVar2 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)pTVar6->_padding_,(FSoftObjectPath *)param_2->_padding_)
      ;
      return bVar2;
    }
    return false;
  }
  pTVar6 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x06') {
    pTVar6 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar6 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && ((double)param_2->_padding_ == (double)pTVar6->_padding_)) {
    return true;
  }
  return false;
}

// Visit<UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93640

FMapKey * __cdecl
Visit<UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewToKeyConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewToKeyConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93670

FString * __cdecl
Visit<UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c936a0

FString * __cdecl
Visit<UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_2->TypeIndex])(__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Visit<`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&> @ 142c936d0

FText * __cdecl
Visit<_UE::Editor::DataStorage::Private::TProperty<FText>::Get_::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&>
          (<lambda_2> *param_1,
          TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  FText *pFVar4;
  longlong *plVar5;
  void *pvStackX_8;
  FText FStack_18;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2->TypeIndex) {
  case '\x01':
    return (FText *)((longlong)param_1->Object + *(longlong *)param_2);
  case '\x02':
    pvStackX_8 = param_1->Object;
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar1 = *(code **)param_2;
    plVar5 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_2->field_0x28;
    }
    uVar3 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(&FStack_18,uVar3,&pvStackX_8);
    FText::operator=((FText *)&param_2->field_0x30,&FStack_18);
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
    }
    return (FText *)&param_2->field_0x30;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                     ,0x85,L"Empty properties shouldn\'t be accessed.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FText *)(*pcVar1)();
    return pFVar4;
  }
  return (FText *)0x0;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::TOverloaded<`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_1>,`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&> @ 142c936f0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>
          (TOverloaded<_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_1>,_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_2>_>
           *param_1,TVariant<bool,unsigned___int64,__int64,double,FString> *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar2 = *(longlong **)param_1;
  bVar1 = *(byte *)(plVar2 + 1);
  if (5 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(plVar2);
  *plVar2 = param_2->_padding_;
  *(undefined1 *)(plVar2 + 1) = 2;
  return;
}

// VisitApplyEncoded<1,0,`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&> @ 142c93900

FText * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,_UE::Editor::DataStorage::Private::TProperty<FText>::Get_::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&>
          (<lambda_2> *param_1,
          TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
          *param_2)

{
  return (FText *)((longlong)param_1->Object + *(longlong *)param_2);
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::TOverloaded<`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_1>,`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&> @ 142c93910

void __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>
          (TOverloaded<_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_1>,_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_2>_>
           *param_1,TVariant<bool,unsigned___int64,__int64,double,FString> *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar2 = *(longlong **)param_1;
  bVar1 = *(byte *)(plVar2 + 1);
  if (5 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(plVar2);
  *plVar2 = param_2->_padding_;
  *(undefined1 *)(plVar2 + 1) = 3;
  return;
}

// VisitApplyEncoded<2,0,`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&> @ 142c93b20

FText * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,_UE::Editor::DataStorage::Private::TProperty<FText>::Get_::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&>
          (<lambda_2> *param_1,
          TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
          *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *local_res8;
  FText local_18;
  
  local_res8 = param_1->Object;
  Function::CheckCallable(*(void **)param_2);
  pcVar1 = *(code **)param_2;
  plVar3 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar3 = *(longlong **)&param_2->field_0x28;
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_18,uVar2,&local_res8);
  FText::operator=((FText *)&param_2->field_0x30,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return (FText *)&param_2->field_0x30;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::TOverloaded<`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_1>,`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&> @ 142c93ba0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>
          (TOverloaded<_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_1>,_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_2>_>
           *param_1,TVariant<bool,unsigned___int64,__int64,double,FString> *param_2)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  plVar2 = *(longlong **)param_1;
  bVar1 = *(byte *)(plVar2 + 1);
  if (5 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(plVar2);
  *plVar2 = param_2->_padding_;
  *(undefined1 *)(plVar2 + 1) = 4;
  return;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::TOverloaded<`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_1>,`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&> @ 142c93db0

void __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>
          (TOverloaded<_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_1>,_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_2>_>
           *param_1,TVariant<bool,unsigned___int64,__int64,double,FString> *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  
  puVar2 = *(undefined8 **)&param_1->field_0x8;
  bVar1 = *(byte *)(puVar2 + 1);
  if (5 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(puVar2);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 5;
  return;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_1>,`UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView'::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&> @ 142c94b10

void __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::TOverloaded<_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_1>,_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView_::__l2::<lambda_2>_>,TVariant<bool,unsigned___int64,__int64,double,FString>_const_&>
          (TOverloaded<_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_1>,_public:___cdecl_UE::Editor::DataStorage::FMetaDataEntryView::FMetaDataEntryView(TVariant<bool,unsigned___int64,__int64,double,FString>_const_&)_::_2_::<lambda_2>_>
           *param_1,TVariant<bool,unsigned___int64,__int64,double,FString> *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  
  puVar2 = *(undefined1 **)param_1;
  bVar1 = puVar2[8];
  if (5 < (ulonglong)bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,bool,unsigned___int64,__int64,double,FString_const*___ptr64>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(puVar2);
  *puVar2 = (char)param_2->_padding_;
  puVar2[8] = 1;
  return;
}

// VisitApplyEncoded<0,0,`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&> @ 142c94d50

FText * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,_UE::Editor::DataStorage::Private::TProperty<FText>::Get_::__l2::<lambda_2>,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&>
          (<lambda_2> *param_1,
          TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                     ,0x85,L"Empty properties shouldn\'t be accessed.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FText *)(*pcVar1)();
    return pFVar3;
  }
  return (FText *)0x0;
}

// VisitImpl<`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_2>,0,1,2,0,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&> @ 142c94f50

FText * __cdecl
UE::Core::Private::
VisitImpl<_UE::Editor::DataStorage::Private::TProperty<FText>::Get_::__l2::<lambda_2>,0,1,2,0,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const_&>
          (ulong64 param_1,<lambda_2> *param_2,TIntegerSequence<unsigned___int64,0,1,2> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
          *param_5)

{
  FText *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94f66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>,0,1,2,0,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64>(unsigned___int64,`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64)'
             ::__l2::Invokers[param_1])(param_2,param_5);
  return pFVar1;
}

// ??0?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@QEAA@AEBV0@@Z @ 142c94f70

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,_public:___cdecl_UE::Editor::DataStorage::FTextAttributeFormatted::operator_class_TAttribute<FText>(void)_::_2_::<lambda_1>_>
* __thiscall
__0__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__QEAA_AEBV0__Z
          (void *this,
          TBaseFunctorDelegateInstance<FText___cdecl(void),FDefaultDelegateUserPolicy,_public:___cdecl_UE::Editor::DataStorage::FTextAttributeFormatted::operator_class_TAttribute<FText>(void)_::_2_::<lambda_1>_>
          *param_1)

{
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this_00;
  TMap<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6A_AVFText__XZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(_func___cdecl_void ***)this =
       TBaseFunctorDelegateInstance<class_FText___cdecl(void),FDefaultDelegateUserPolicy,`public:___cdecl_UE::Editor::DataStorage::FTextAttributeFormatted::operator_class_TAttribute<class_FText>(void)___ptr64'::`2'::<lambda_1>_>
       ::_vftable_;
  *(FTextFormatData **)((longlong)this + 0x18) = (param_1->Functor).Format.TextFormatData.Object;
  pTVar2 = (param_1->Functor).Format.TextFormatData.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 0x20) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = (TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)((longlong)this + 0x28);
  *(undefined8 *)this_00 = 0;
  pTVar1 = &(param_1->Functor).NamedProperties;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined4 *)((longlong)this + 0x50) = 0;
  *(undefined4 *)((longlong)this + 0x54) = 0x80;
  *(undefined4 *)((longlong)this + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x5c) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(int *)((longlong)this + 0x70) = 0;
  if ((TMap<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>_>
       *)this_00 != pTVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)((longlong)this + 0x60),
               (int *)((longlong)this + 0x70),
               (ForElementType<FSetElementId> *)&(param_1->Functor).NamedProperties.field_0x38,
               *(int *)&(param_1->Functor).NamedProperties.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(this_00,(TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)pTVar1);
  }
  *(ICoreProvider **)((longlong)this + 0x78) = (param_1->Functor).Storage;
  *(ulong64 *)((longlong)this + 0x80) = (param_1->Functor).Row;
  return this;
}

// operator() @ 142c9dde0

bool __thiscall
`TypedElementUtil::BatchElementsByType'::__l2::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  FTypedElementInternalData *this_01;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  byte *pbVar5;
  ForElementType<FSetElementId> FVar6;
  FScriptContainerElement *pFVar7;
  FTypedElementId *pFVar8;
  byte local_res8 [8];
  int local_res10 [2];
  byte *local_res18;
  
  this_00 = *(TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              **)this;
  if (param_1->DataPtr == (FTypedElementInternalData *)0x0) {
    pFVar8 = &FTypedElementId::Unset;
  }
  else {
    pFVar8 = &param_1->DataPtr->Id;
  }
  local_res8[0] = (pFVar8->field0_0x0)._s_0.TypeId;
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar6 = (this_00->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    ((ulonglong)(this_00->HashSize - 1) & (ulonglong)local_res8[0]) * 4);
    if (iVar4 != -1) {
      do {
        pbVar5 = (byte *)((longlong)iVar4 * 0x20 + *(longlong *)&this_00->Elements);
        if (*pbVar5 == local_res8[0]) {
          if (pbVar5 != (byte *)0x0) goto LAB_142c9de8f;
          break;
        }
        iVar4 = *(int *)(pbVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  local_res18 = local_res8;
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_char_&&>_>
            (this_00,(uint)local_res10,(TKeyInitializer<unsigned_char_&&> *)(ulonglong)local_res8[0]
             ,(bool *)&local_res18);
  pbVar5 = (byte *)((longlong)local_res10[0] * 0x20 + *(longlong *)&this_00->Elements);
LAB_142c9de8f:
  if (((*(FTypedElementHandle **)(pbVar5 + 8) <= param_1) &&
      (param_1 < *(FTypedElementHandle **)(pbVar5 + 8) + *(int *)(pbVar5 + 0x14))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  iVar4 = *(int *)(pbVar5 + 0x10);
  if (iVar4 == *(int *)(pbVar5 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)(pbVar5 + 8),(int *)(pbVar5 + 0x14));
  }
  *(int *)(pbVar5 + 0x10) = iVar4 + 1;
  pFVar7 = ((ForAnyElementType *)(pbVar5 + 8))->Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
  this_01 = param_1->DataPtr;
  if (this_01 != (FTypedElementInternalData *)0x0) {
    *(FTypedElementInternalData **)pFVar7 = this_01;
    iVar4 = FTypedElementInternalData::AddRef(this_01,true);
    *(int *)(pFVar7 + 8) = iVar4;
  }
  return true;
}

// `vector_deleting_destructor'`adjustor{40}' @ 142ca0fa0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTestTypedElementInterfaceA_ImplTyped::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTestTypedElementInterfaceA_ImplTyped::_vector_deleting_destructor__adjustor_40__
          (UTestTypedElementInterfaceA_ImplTyped *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTestTypedElementInterfaceA_ImplTyped *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 142ca0fb0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTestTypedElementInterfaceA_ImplUntyped::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::_vector_deleting_destructor__adjustor_40__
          (UTestTypedElementInterfaceA_ImplUntyped *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTestTypedElementInterfaceA_ImplUntyped *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 142ca0fc0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTestTypedElementInterfaceBAndC_Typed::`vector
   deleting destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UTestTypedElementInterfaceBAndC_Typed::_vector_deleting_destructor__adjustor_40__
          (UTestTypedElementInterfaceBAndC_Typed *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTestTypedElementInterfaceBAndC_Typed *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 142ca0fd0

/* [thunk]:public: virtual void * __ptr64 __cdecl UTestTypedElementInterfaceBAndC_Typed::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UTestTypedElementInterfaceBAndC_Typed::_vector_deleting_destructor__adjustor_48__
          (UTestTypedElementInterfaceBAndC_Typed *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UTestTypedElementInterfaceBAndC_Typed *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142ca0fe0

void * __thiscall _??_::_??_::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0x70) = 0;
  if (*(void **)((longlong)this + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1050

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UTypedElementRegistry,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UTypedElementRegistry,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1080

void * __thiscall
FTypedElementCounter::TCounterCategory<unsigned_char>::_scalar_deleting_destructor_
          (TCounterCategory<unsigned_char> *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Counters).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Counters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_char,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_char,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_char,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Counters);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca10e0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypedElementList<FScriptTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FScriptTypedElementHandle>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TTypedElementList<FScriptTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FScriptTypedElementHandle>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1120

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypedElementList<FTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FTypedElementHandle>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TTypedElementList<FTypedElementHandle>,SharedPointerInternals::DefaultDeleter<TTypedElementList<FTypedElementHandle>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1160

void * __thiscall
UTypedElementRegistry::TRegisteredElementType<FTestTypedElementData,1>::_scalar_deleting_destructor_
          (TRegisteredElementType<FTestTypedElementData,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<FTestTypedElementData>::
  ~TTypedElementInternalDataStore<FTestTypedElementData>(&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca11d0

void * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,1>::_scalar_deleting_destructor_
          (TRegisteredElementType<void,1> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<void>::~TTypedElementInternalDataStore<void>
            (&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1240

void * __thiscall
UTypedElementRegistry::TRegisteredElementType<void,0>::_scalar_deleting_destructor_
          (TRegisteredElementType<void,0> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DeferredElementsToRemove).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DeferredElementsToRemoveCS);
  TTypedElementInternalDataStore<void>::~TTypedElementInternalDataStore<void>
            (&this->HandleDataStore);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca12b0

void * __thiscall
TTypedElementInternalData<FTestTypedElementData>::_scalar_deleting_destructor_
          (TTypedElementInternalData<FTestTypedElementData> *this,uint param_1)

{
  FTypedElementInternalData::~FTypedElementInternalData((FTypedElementInternalData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca12f0

void * __thiscall
TTypedElementInternalData<void>::_scalar_deleting_destructor_
          (TTypedElementInternalData<void> *this,uint param_1)

{
  FTypedElementInternalData::~FTypedElementInternalData((FTypedElementInternalData *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1330

void * __thiscall
TTypedElementList<FScriptTypedElementHandle>::_scalar_deleting_destructor_
          (TTypedElementList<FScriptTypedElementHandle> *this,uint param_1)

{
  ~TTypedElementList<FScriptTypedElementHandle>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1370

void * __thiscall
TTypedElementList<FTypedElementHandle>::_scalar_deleting_destructor_
          (TTypedElementList<FTypedElementHandle> *this,uint param_1)

{
  ~TTypedElementList<FTypedElementHandle>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca13b0

void * __thiscall
UE::Editor::DataStorage::FColumnMetaData::_scalar_deleting_destructor_
          (FColumnMetaData *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1440

void * __thiscall
UE::Editor::DataStorage::FColumnsMetaDataView::_scalar_deleting_destructor_
          (FColumnsMetaDataView *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1470

void * __thiscall
UE::Editor::DataStorage::Queries::FEditorStorageQueryConditionCompileContext::
_scalar_deleting_destructor_(FEditorStorageQueryConditionCompileContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca14a0

void * __thiscall
UE::Editor::DataStorage::FForwardingMetaDataView::_scalar_deleting_destructor_
          (FForwardingMetaDataView *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca14d0

void * __thiscall
UE::Editor::DataStorage::FGenericMetaDataView::_scalar_deleting_destructor_
          (FGenericMetaDataView *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1500

void * __thiscall
TTypedElementList<FScriptTypedElementHandle>::FLegacySync::_scalar_deleting_destructor_
          (FLegacySync *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSyncEventDelegate).field_0x8,*(int *)&(this->OnSyncEventDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSyncEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSyncEventDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1570

void * __thiscall
TTypedElementList<FTypedElementHandle>::FLegacySync::_scalar_deleting_destructor_
          (FLegacySync *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSyncEventDelegate).field_0x8,*(int *)&(this->OnSyncEventDelegate).field_0x10
            );
  pvVar1 = *(void **)&(this->OnSyncEventDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSyncEventDelegate);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca15e0

void * __thiscall
UE::Editor::DataStorage::FMetaData::_scalar_deleting_destructor_(FMetaData *this,uint param_1)

{
  *(undefined4 *)&this->field_0xa0 = 0;
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x58);
  *(undefined4 *)&this->field_0x50 = 0;
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1670

void * __thiscall
UE::Editor::DataStorage::FMetaDataBase::_scalar_deleting_destructor_
          (FMetaDataBase *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->MutableData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MutableData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MutableData);
  *(undefined4 *)&(this->ImmutableData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ImmutableData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ImmutableData);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1700

void * __thiscall
UE::Editor::DataStorage::FMetaDataView::_scalar_deleting_destructor_
          (FMetaDataView *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1730

void * __thiscall
UE::Editor::DataStorage::FQueryMetaDataView::_scalar_deleting_destructor_
          (FQueryMetaDataView *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1760

void * __thiscall
UTypedElementRegistry::FRegisteredElementType::_scalar_deleting_destructor_
          (FRegisteredElementType *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Interfaces).Pairs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca17b0

void * __thiscall
FTypedElementInternalData::_scalar_deleting_destructor_
          (FTypedElementInternalData *this,uint param_1)

{
  ~FTypedElementInternalData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca17f0

void * __thiscall
FTypedElementCounter::ICounterCategory::_scalar_deleting_destructor_
          (ICounterCategory *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1820

void * __thiscall
UE::Editor::DataStorage::Queries::IQueryConditionCompileContext::_scalar_deleting_destructor_
          (IQueryConditionCompileContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1850

void * __thiscall
ITestTypedElementInterfaceA::_scalar_deleting_destructor_
          (ITestTypedElementInterfaceA *this,uint param_1)

{
  *this = (ITestTypedElementInterfaceA)&___7ITestTypedElementInterfaceA__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1890

void * __thiscall
ITestTypedElementInterfaceB::_scalar_deleting_destructor_
          (ITestTypedElementInterfaceB *this,uint param_1)

{
  *this = (ITestTypedElementInterfaceB)&___7ITestTypedElementInterfaceB__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca18d0

void * __thiscall
ITestTypedElementInterfaceC::_scalar_deleting_destructor_
          (ITestTypedElementInterfaceC *this,uint param_1)

{
  *this = (ITestTypedElementInterfaceC)&___7ITestTypedElementInterfaceC__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1910

void * __thiscall
UTestTypedElementInterfaceA::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceA *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142ca1970

void * __thiscall
UTestTypedElementInterfaceA_ImplTyped::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceA_ImplTyped *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceA__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca19e0

void * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceA_ImplUntyped *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceA__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1a50

void * __thiscall
UTestTypedElementInterfaceB::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceB *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142ca1ab0

void * __thiscall
UTestTypedElementInterfaceBAndC_Typed::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceBAndC_Typed *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &___7ITestTypedElementInterfaceC__6B_;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceB__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142ca1b30

void * __thiscall
UTestTypedElementInterfaceC::_scalar_deleting_destructor_
          (UTestTypedElementInterfaceC *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142ca1b90

void * __thiscall
UTypedElementCounterInterface::_scalar_deleting_destructor_
          (UTypedElementCounterInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 142ca1bf0

void * __thiscall
UTypedElementRegistry::_scalar_deleting_destructor_(UTypedElementRegistry *this,uint param_1)

{
  ~UTypedElementRegistry(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x960);
  }
  return this;
}

// operator_""__Type @ 142ca1c50

UScriptStruct * __cdecl
UE::Editor::DataStorage::Queries::operator_____Type(char *param_1,ulong64 param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  int iVar7;
  FTopLevelAssetPath local_78;
  char *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<char> local_58;
  FTopLevelAssetPath local_48;
  FTopLevelAssetPath local_38;
  FString local_28 [2];
  
  iVar7 = (int)param_2;
  if (((param_2 != (longlong)iVar7) || (iVar7 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar5 = (UScriptStruct *)(*pcVar1)();
    return pUVar5;
  }
  local_58._12_4_ = uStack_5c;
  local_58.Size = iVar7;
  local_78.PackageName.ComparisonIndex.Value = 0;
  local_78.PackageName.Number = 0;
  local_78.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetName.Number = 0;
  local_68 = param_1;
  iStack_60 = iVar7;
  local_58.DataPtr = param_1;
  FTopLevelAssetPath::TrySetPath(&local_78,&local_58);
  FVar3 = local_78.AssetName;
  FVar2 = local_78.PackageName;
  local_38.PackageName = local_78.PackageName;
  local_38.AssetName = local_78.AssetName;
  pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_48.PackageName = FVar2;
  local_48.AssetName = FVar3;
  pUVar5 = (UScriptStruct *)StaticFindObject(pUVar6,&local_48,ExactClass);
  if (pUVar5 == (UScriptStruct *)0x0) {
    FTopLevelAssetPath::ToString(&local_38,local_28);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x12,
                       L"Type name \'%s\' used as part of building a typed element query was not found."
                      );
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UScriptStruct *)(*pcVar1)();
      return pUVar5;
    }
  }
  return pUVar5;
}

// operator_""__TypeOptional @ 142ca1d90

UScriptStruct * __cdecl
UE::Editor::DataStorage::Queries::operator_____TypeOptional(char *param_1,ulong64 param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  UScriptStruct *pUVar5;
  UClass *pUVar6;
  int iVar7;
  FTopLevelAssetPath local_58;
  char *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TStringView<char> local_38;
  FTopLevelAssetPath local_28 [2];
  
  iVar7 = (int)param_2;
  if ((param_2 != (longlong)iVar7) || (iVar7 < 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UScriptStruct *)(*pcVar1)();
      return pUVar5;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.Size = iVar7;
  local_58.PackageName.ComparisonIndex.Value = 0;
  local_58.PackageName.Number = 0;
  local_58.AssetName.ComparisonIndex.Value = 0;
  local_58.AssetName.Number = 0;
  local_48 = param_1;
  iStack_40 = iVar7;
  local_38.DataPtr = param_1;
  FTopLevelAssetPath::TrySetPath(&local_58,&local_38);
  FVar3 = local_58.AssetName;
  FVar2 = local_58.PackageName;
  pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_28[0].PackageName = FVar2;
  local_28[0].AssetName = FVar3;
  pUVar5 = (UScriptStruct *)StaticFindObject(pUVar6,local_28,ExactClass);
  return pUVar5;
}

// BatchElementsByType @ 142ca6c50

void __cdecl
TypedElementUtil::BatchElementsByType
          (TArrayView<FTypedElementHandle_const_,int> *param_1,
          TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  FTypedElementInternalData *this;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypedElementId *pFVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FTypedElementHandle *pFVar8;
  FTypedElementHandle *pFVar9;
  byte local_res8 [8];
  int local_res10 [2];
  byte *local_res18;
  
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)param_2);
  pFVar9 = param_1->DataPtr;
  pFVar8 = pFVar9 + param_1->ArrayNum;
  do {
    if (pFVar9 == pFVar8) {
      return;
    }
    if (pFVar9->DataPtr == (FTypedElementInternalData *)0x0) {
      pFVar4 = &FTypedElementId::Unset;
    }
    else {
      pFVar4 = &pFVar9->DataPtr->Id;
    }
    local_res8[0] = (pFVar4->field0_0x0)._s_0.TypeId;
    if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
      puVar6 = &param_2->field_0x38;
      if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&param_2->field_0x40;
      }
      iVar3 = *(int *)(puVar6 + ((ulonglong)(*(int *)&param_2->field_0x48 - 1) &
                                (ulonglong)local_res8[0]) * 4);
      if (iVar3 != -1) {
        do {
          pbVar5 = (byte *)((longlong)iVar3 * 0x20 + *(longlong *)param_2);
          if (*pbVar5 == local_res8[0]) {
            if (pbVar5 != (byte *)0x0) goto LAB_142ca6d39;
            break;
          }
          iVar3 = *(int *)(pbVar5 + 0x18);
        } while (iVar3 != -1);
      }
    }
    local_res18 = local_res8;
    TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned_char_&&>_>
              ((TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)param_2,(uint)local_res10,
               (TKeyInitializer<unsigned_char_&&> *)(ulonglong)local_res8[0],(bool *)&local_res18);
    pbVar5 = (byte *)((longlong)local_res10[0] * 0x20 + *(longlong *)param_2);
LAB_142ca6d39:
    if (((*(FTypedElementHandle **)(pbVar5 + 8) <= pFVar9) &&
        (pFVar9 < *(FTypedElementHandle **)(pbVar5 + 8) + *(int *)(pbVar5 + 0x14))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = *(int *)(pbVar5 + 0x10);
    if (iVar3 == *(int *)(pbVar5 + 0x14)) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)(pbVar5 + 8),(int *)(pbVar5 + 0x14));
    }
    *(int *)(pbVar5 + 0x10) = iVar3 + 1;
    pFVar7 = ((ForAnyElementType *)(pbVar5 + 8))->Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
    this = pFVar9->DataPtr;
    if (this != (FTypedElementInternalData *)0x0) {
      *(FTypedElementInternalData **)pFVar7 = this;
      iVar3 = FTypedElementInternalData::AddRef(this,true);
      *(int *)(pFVar7 + 8) = iVar3;
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// BatchElementsByType @ 142ca6e20

void __cdecl
TypedElementUtil::BatchElementsByType
          (TSharedRef<TTypedElementList<FTypedElementHandle>_const_,1> *param_1,
          TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int iVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  bool bVar3;
  FTypedElementHandle *pFVar4;
  FTypedElementHandle *pFVar5;
  undefined1 local_res8 [8];
  TMap<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>_>
  *local_res10;
  
  TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)param_2);
  pTVar2 = param_1->Object;
  iVar1 = (pTVar2->ElementHandles).ArrayNum;
  pFVar4 = (FTypedElementHandle *)(pTVar2->ElementHandles).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  local_res10 = param_2;
  while( true ) {
    if ((pTVar2->ElementHandles).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (pFVar4->DataPtr != (FTypedElementInternalData *)0x0) {
      bVar3 = `TypedElementUtil::BatchElementsByType'::__l2::<lambda_1>::operator()
                        (&local_res10,pFVar4);
      if (!bVar3) break;
    }
    pFVar4 = pFVar4 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ConvertToNativeElementArray @ 142ca8b90

TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> * __cdecl
TypedElementUtil::ConvertToNativeElementArray
          (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FTypedElementInternalData *local_38;
  int local_30;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar3 = param_1->ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar4 = param_1->ArrayNum;
  pFVar2 = pFVar10 + (longlong)iVar4 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FScriptTypedElementHandle_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    local_30 = 0xffffffff;
    if ((*(undefined8 **)pFVar10 != (undefined8 *)0x0) &&
       (local_38 = (FTypedElementInternalData *)**(undefined8 **)pFVar10,
       local_38 != (FTypedElementInternalData *)0x0)) {
      local_30 = FTypedElementInternalData::AddRef(local_38,true);
      if (local_38 != (FTypedElementInternalData *)0x0) {
        pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar9 <= (FScriptContainerElement *)&local_38) &&
           ((FScriptContainerElement *)&local_38 < pFVar9 + (longlong)*piVar1 * 0x10)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar8;
          }
        }
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(FTypedElementInternalData **)pFVar9 = local_38;
        *(int *)(pFVar9 + 8) = local_30;
      }
    }
    local_38 = (FTypedElementInternalData *)0x0;
    pFVar10 = pFVar10 + 8;
    local_30 = 0xffffffff;
  }
  return __return_storage_ptr__;
}

// ConvertToScriptElementArray @ 142ca8f80

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> * __cdecl
TypedElementUtil::ConvertToScriptElementArray
          (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<FTypedElementHandle,TSizedDefaultAllocator<32>_> *param_1,
          UTypedElementRegistry *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FTypedElementId_u_0 FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRegisteredElementType *pFVar9;
  longlong *plVar10;
  TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *pTVar11;
  FTypedElementId *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  void *local_res10;
  longlong local_48 [2];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar15 = (param_1->AllocatorInstance).Data;
  pFVar14 = pFVar15 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar14) break;
    if (*(longlong *)pFVar15 == 0) {
      pFVar12 = &FTypedElementId::Unset;
    }
    else {
      pFVar12 = (FTypedElementId *)(*(longlong *)pFVar15 + 8);
    }
    FVar4._0_3_ = *(uint3 *)pFVar12;
    FVar4._3_1_ = *(byte *)((longlong)pFVar12 + 3);
    if ((FTypedElementId_u_0)FVar4.CombinedId == FTypedElementId::Unset.field0_0x0) {
      lVar13 = 0;
    }
    else {
      pFVar9 = UTypedElementRegistry::GetRegisteredElementTypeFromId(param_2,FVar4._3_1_);
      if (pFVar9 == (FRegisteredElementType *)0x0) {
        lVar13 = 0;
        FFrame::KismetExecutionMessage
                  (L"Element type ID has not been registered to this registry!",Error,(FName)0x0);
      }
      else {
        plVar10 = (longlong *)
                  (**(code **)(pFVar9->_padding_ + 0x20))
                            (pFVar9,&local_res10,pFVar12->field0_0x0 & 0xffffff);
        lVar13 = *plVar10;
        if (lVar13 != 0) {
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        }
        if (local_res10 != (void *)0x0) {
          *(int *)((longlong)local_res10 + 8) = *(int *)((longlong)local_res10 + 8) + -1;
          if (*(int *)((longlong)local_res10 + 8) == 0) {
            ::operator_delete(local_res10,0x10);
            local_res10 = (void *)0x0;
          }
        }
      }
    }
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_48[0] = lVar13;
    if ((pFVar5 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 < pFVar5 + (longlong)*piVar1 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TArray<FScriptTypedElementHandle,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
        return pTVar11;
      }
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    pFVar15 = pFVar15 + 0x10;
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
         local_48[0];
    local_48[0] = 0;
  }
  return __return_storage_ptr__;
}

// ?CreateCopy@?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@UEBAXAEAV?$TDelegateBase@UFNotThreadSafeDelegateMode@@@@@Z @ 142ca9910

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
_CreateCopy___TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__UEBAXAEAV__TDelegateBase_UFNotThreadSafeDelegateMode_____Z
          (void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  void *this_00;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  this_00 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)local_10);
  if (this_00 != (void *)0x0) {
    __0__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__QEAA_AEBV0__Z
              (this_00,this);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// ?CreateCopy@?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@UEBAXAEAV?$TDelegateBase@UFNotThreadSafeNotCheckedDelegateMode@@@@@Z @ 142ca9980

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
_CreateCopy___TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__UEBAXAEAV__TDelegateBase_UFNotThreadSafeNotCheckedDelegateMode_____Z
          (void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  void *this_00;
  
  this_00 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)param_1);
  if (this_00 != (void *)0x0) {
    __0__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__QEAA_AEBV0__Z
              (this_00,this);
    return;
  }
  return;
}

// ?CreateCopy@?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@UEBAXAEAV?$TDelegateBase@UFThreadSafeDelegateMode@@@@@Z @ 142ca99c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
_CreateCopy___TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__UEBAXAEAV__TDelegateBase_UFThreadSafeDelegateMode_____Z
          (void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *this_00;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  this_00 = UE::Core::Private::DelegateAllocate(0x88,(FDelegateAllocation *)&param_1->field_0x28);
  if (this_00 != (void *)0x0) {
    __0__TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__QEAA_AEBV0__Z
              (this_00,this);
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeCommonTypes @ 142cab3b0

void __cdecl EmptyLinkFunctionForGeneratedCodeCommonTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeDecoratorWidgetConstructor @ 142cab3c0

void __cdecl EmptyLinkFunctionForGeneratedCodeDecoratorWidgetConstructor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementCounter @ 142cab3d0

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementCounter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageUiInterface @ 142cab3e0

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageUiInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementFrameworkTests @ 142cab3f0

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementFrameworkTests(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementRegistry @ 142cab400

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementRegistry(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementSelectionColumns @ 142cab410

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementSelectionColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetColumns @ 142cab420

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementSlateWidgetColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementTestColumns @ 142cab430

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementTestColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementTransformColumns @ 142cab440

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementTransformColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementTypeInfoColumns @ 142cab450

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementTypeInfoColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementUIColumns @ 142cab460

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementUIColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementValueCacheColumns @ 142cab470

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementValueCacheColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementViewportColumns @ 142cab480

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementViewportColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementVisibilityColumns @ 142cab490

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementVisibilityColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTypedElementWebColumns @ 142cab4a0

void __cdecl EmptyLinkFunctionForGeneratedCodeTypedElementWebColumns(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWidgetPurposeColumns @ 142cab4b0

void __cdecl EmptyLinkFunctionForGeneratedCodeWidgetPurposeColumns(void)

{
  return;
}

// ?Execute@?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@UEBA?AVFText@@XZ @ 142cab940

FText * __thiscall
_Execute___TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__UEBA_AVFText__XZ
          (void *this,FText *__return_storage_ptr__)

{
  _??_::XZ::QEBA::XZ::`UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>'
  ::__l2::<lambda_1>::operator()((void *)((longlong)this + 0x18),__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ExecuteIfSafe @ 142cab9b0

bool __thiscall _??_::_??_::ExecuteIfSafe(void *this)

{
  FText local_18;
  
  XZ::QEBA::XZ::`UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>'::__l2
  ::<lambda_1>::operator()((void *)((longlong)this + 0x18),&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return true;
}

// GetBoundProgramCounterForTimerManager @ 142cace00

ulong64 __thiscall _??_::_??_::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetElementImpl @ 142cad7e0

void __cdecl
TypedElementList_Private::GetElementImpl
          (UTypedElementRegistry *param_1,FScriptTypedElementHandle *param_2,
          TSubclassOf<UInterface> *param_3,TTypedElement<void> *param_4)

{
  uint *puVar1;
  FScriptTypedElementInternalDataControlBlock *pFVar2;
  FTypedElementInternalData *this;
  UClass *pUVar3;
  TObjectPtr<UObject> this_00;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar4;
  undefined1 *puVar5;
  LPCRITICAL_SECTION lpCriticalSection_00;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FRegisteredElementType *pFVar12;
  UClass *pUVar13;
  TObjectPtr<UObject>_u_0 *pTVar14;
  UClass *pUVar15;
  void *pvVar16;
  uint uVar17;
  UClass *pUVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  HANDLE *ppvVar21;
  undefined4 uVar22;
  LONG LVar23;
  
  if (((param_1 == (UTypedElementRegistry *)0x0) ||
      (pFVar2 = (param_2->InternalData).ControlBlock,
      pFVar2 == (FScriptTypedElementInternalDataControlBlock *)0x0)) ||
     (this = pFVar2->Data, this == (FTypedElementInternalData *)0x0)) {
    lVar4 = *(longlong *)param_4;
    LVar23 = -1;
    if (lVar4 != 0) {
      iVar10 = *(int *)&param_4->field_0x8;
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + -1;
      UNLOCK();
      lpCriticalSection_00 = *(LPCRITICAL_SECTION *)(lVar4 + 0x10);
      if ((lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) && (iVar10 != -1)) {
        EnterCriticalSection(lpCriticalSection_00);
        p_Var6 = lpCriticalSection_00[1].DebugInfo;
        bVar8 = (byte)iVar10 & 0x1f;
        uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
        if (((iVar10 < 0) || (*(int *)&lpCriticalSection_00[2].DebugInfo <= iVar10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ppvVar21 = &lpCriticalSection_00[1].OwningThread;
        if ((HANDLE *)lpCriticalSection_00[1].SpinCount != (HANDLE *)0x0) {
          ppvVar21 = (HANDLE *)lpCriticalSection_00[1].SpinCount;
        }
        if (((*(uint *)((longlong)ppvVar21 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) & uVar17) == 0
            ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("AllocationFlags[Index]",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                     ,0xc5,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (lpCriticalSection_00[2].RecursionCount != 0) {
          *(int *)((longlong)lpCriticalSection_00[2].LockCount * 0x108 + (longlong)p_Var6) = iVar10;
        }
        *(undefined4 *)((longlong)iVar10 * 0x108 + (longlong)p_Var6) = 0xffffffff;
        if (0 < lpCriticalSection_00[2].RecursionCount) {
          LVar23 = lpCriticalSection_00[2].LockCount;
        }
        *(LONG *)((longlong)iVar10 * 0x108 + 4 + (longlong)p_Var6) = LVar23;
        lpCriticalSection_00[2].RecursionCount = lpCriticalSection_00[2].RecursionCount + 1;
        lpCriticalSection_00[2].LockCount = iVar10;
        if (((iVar10 < 0) || (*(int *)&lpCriticalSection_00[2].DebugInfo <= iVar10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ppvVar21 = &lpCriticalSection_00[1].OwningThread;
        if ((HANDLE *)lpCriticalSection_00[1].SpinCount != (HANDLE *)0x0) {
          ppvVar21 = (HANDLE *)lpCriticalSection_00[1].SpinCount;
        }
        puVar1 = (uint *)((longlong)ppvVar21 +
                         (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & ~uVar17;
        LeaveCriticalSection(lpCriticalSection_00);
      }
    }
    *(undefined4 *)&param_4->field_0x8 = 0xffffffff;
    *(undefined8 *)param_4 = 0;
    *(undefined8 *)&param_4->field_0x10 = 0;
  }
  else {
    iVar10 = FTypedElementInternalData::AddRef(this,true);
    if (*(FTypedElementInternalData **)param_4 != (FTypedElementInternalData *)0x0) {
      FTypedElementInternalData::ReleaseRef
                (*(FTypedElementInternalData **)param_4,*(int *)&param_4->field_0x8);
    }
    pUVar18 = (UClass *)0x0;
    uVar22 = 0xffffffff;
    *(undefined8 *)param_4 = 0;
    *(undefined4 *)&param_4->field_0x8 = 0xffffffff;
    *(undefined8 *)&param_4->field_0x10 = 0;
    pFVar12 = UTypedElementRegistry::GetRegisteredElementTypeFromId
                        (param_1,(this->Id).field0_0x0._s_0.TypeId);
    if ((pFVar12 == (FRegisteredElementType *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("RegisteredElementType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementRegistry.h"
                           ,0x250,L"Element type ID \'%d\' has not been registered!"), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar3 = (param_3->Class).field0_0x0.DebugPtr;
    pUVar15 = pUVar18;
    if ((pUVar3 != (UClass *)0x0) &&
       (pUVar13 = Z_Construct_UClass_UInterface_NoRegister(), pUVar13 != (UClass *)0x0)) {
      iVar11 = (int)pUVar13->_padding_;
      if (((int)pUVar3->_padding_ < iVar11) ||
         ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar11 * 8) !=
          &pUVar13->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar15 = (param_3->Class).field0_0x0.DebugPtr;
      }
    }
    pTVar14 = &TSortedMap<FName,TObjectPtr<UObject>,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         (&pFVar12->Interfaces,(FName)pUVar15->_padding_)->field0_0x0;
    if ((pTVar14 != (TObjectPtr<UObject>_u_0 *)0x0) &&
       (this_00.field0_0x0 = (TObjectPtr<UObject>_u_0)pTVar14->DebugPtr,
       this_00.field0_0x0 != (UObject *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00.field0_0x0);
      }
      pUVar3 = (param_3->Class).field0_0x0.DebugPtr;
      if ((pUVar3 != (UClass *)0x0) &&
         (pUVar15 = Z_Construct_UClass_UInterface_NoRegister(), pUVar15 != (UClass *)0x0)) {
        iVar11 = (int)pUVar15->_padding_;
        if (((int)pUVar3->_padding_ < iVar11) ||
           ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar11 * 8) !=
            &pUVar15->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar18 = (param_3->Class).field0_0x0.DebugPtr;
        }
      }
      pvVar16 = UObjectBaseUtility::GetInterfaceAddress
                          ((UObjectBaseUtility *)this_00.field0_0x0,pUVar18);
      *(FTypedElementInternalData **)param_4 = this;
      iVar11 = FTypedElementInternalData::AddRef(this,true);
      *(int *)&param_4->field_0x8 = iVar11;
      *(void **)&param_4->field_0x10 = pvVar16;
    }
    LOCK();
    this->RefCount = this->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (this->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (iVar10 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar4 = *(longlong *)&lpCriticalSection->References;
      puVar19 = &(lpCriticalSection->References).field_0x10;
      bVar8 = (byte)iVar10 & 0x1f;
      uVar17 = 1 << bVar8 | 1U >> 0x20 - bVar8;
      if (((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar5 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      puVar20 = puVar19;
      if (puVar5 != (undefined1 *)0x0) {
        puVar20 = puVar5;
      }
      if (((*(uint *)(puVar20 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) &
           uVar17) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar4) =
             iVar10;
      }
      *(undefined4 *)((longlong)iVar10 * 0x108 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar22 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      *(undefined4 *)((longlong)iVar10 * 0x108 + 4 + lVar4) = uVar22;
      puVar5 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar5 = *(int *)puVar5 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar10;
      if (((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar5 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar5 != (undefined1 *)0x0) {
        puVar19 = puVar5;
      }
      *(uint *)(puVar19 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) =
           *(uint *)(puVar19 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4) &
           ~uVar17;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// GetElementImpl @ 142cadc30

void __cdecl
TypedElementList_Private::GetElementImpl
          (UTypedElementRegistry *param_1,FTypedElementHandle *param_2,
          TSubclassOf<UInterface> *param_3,TTypedElement<void> *param_4)

{
  if (param_1 != (UTypedElementRegistry *)0x0) {
    UTypedElementRegistry::GetElementImpl<void>(param_1,param_2,param_3,param_4);
    return;
  }
  if (*(FTypedElementInternalData **)param_4 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              (*(FTypedElementInternalData **)param_4,*(int *)&param_4->field_0x8);
  }
  *(undefined8 *)param_4 = 0;
  *(undefined8 *)&param_4->field_0x10 = 0;
  *(undefined4 *)&param_4->field_0x8 = 0xffffffff;
  return;
}

// GetObjectForTimerManager @ 142cae500

void * __thiscall _??_::_??_::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetTypedElementRegistryInstance @ 142caee60

TStrongObjectPtr<UTypedElementRegistry,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
* __cdecl GetTypedElementRegistryInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      atexit(`GetTypedElementRegistryInstance'::__l2::
             _dynamic_atexit_destructor_for__TypedElementRegistryInstance__);
      _Init_thread_footer(&_TSS0);
    }
  }
  return &TypedElementRegistryInstance;
}

// GetUObject @ 142caeed0

UObject * __thiscall _??_::_??_::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 142caf1c0

bool __thiscall _??_::_??_::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 142cafb20

bool __thiscall _??_::_??_::IsSafeToExecute(void *this)

{
  return true;
}

// ?TryGetBoundFunctionName@?$TBaseFunctorDelegateInstance@$$A6A?AVFText@@XZUFDefaultDelegateUserPolicy@@V<lambda_1>@?1???BFTextAttributeFormatted@DataStorage@Editor@UE@@QEAA?AV?$TAttribute@VFText@@@@XZ@$$V@@UEBA?AVFName@@XZ @ 142cc0a30

FName __thiscall
_TryGetBoundFunctionName___TBaseFunctorDelegateInstance___A6A_AVFText__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1___BFTextAttributeFormatted_DataStorage_Editor_UE__QEAA_AV__TAttribute_VFText____XZ___V__UEBA_AVFName__XZ
          (void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister @ 142cc2600

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA_ImplTyped_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplTyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton,
               UTestTypedElementInterfaceA_ImplTyped::
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplTyped>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplTyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister @ 142cc26b0

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA_ImplUntyped_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplUntyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton,
               UTestTypedElementInterfaceA_ImplUntyped::
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplUntyped>
               ,InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplUntyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister @ 142cc2760

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceA_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton,
               UTestTypedElementInterfaceA::StaticRegisterNativesUTestTypedElementInterfaceA,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceA>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA.InnerSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister @ 142cc2820

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceBAndC_Typed_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceBAndC_Typed",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton,
               UTestTypedElementInterfaceBAndC_Typed::
               StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceBAndC_Typed>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceBAndC_Typed>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister @ 142cc28d0

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceB_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceB",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton,
               UTestTypedElementInterfaceB::StaticRegisterNativesUTestTypedElementInterfaceB,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceB>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceB>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton;
}

// Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister @ 142cc2990

UClass * __cdecl Z_Construct_UClass_UTestTypedElementInterfaceC_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceC",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton,
               UTestTypedElementInterfaceC::StaticRegisterNativesUTestTypedElementInterfaceC,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceC>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceC>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceC.InnerSingleton;
}

// Z_Construct_UClass_UTypedElementCounterInterface_NoRegister @ 142cc2a50

UClass * __cdecl Z_Construct_UClass_UTypedElementCounterInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TypedElementCounterInterface",
               &Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton,
               UTypedElementCounterInterface::StaticRegisterNativesUTypedElementCounterInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTypedElementCounterInterface>,
               InternalVTableHelperCtorCaller<UTypedElementCounterInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTypedElementCounterInterface.InnerSingleton;
}

// Z_Construct_UScriptStruct_FDescriptionColumn @ 142cc2b10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDescriptionColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDescriptionColumn.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDescriptionColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FDescriptionColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDescriptionColumn.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDescriptionColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FDisplayNameColumn @ 142cc2b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDisplayNameColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FDisplayNameColumn.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FDisplayNameColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FDisplayNameColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FDisplayNameColumn.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FDisplayNameColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEditorDataStorageUrlColumn @ 142cc2c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageUrlColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageUrlColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditorDataStorageUrlColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditorDataStorageUrlColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageUrlColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEditorDataStorageUrlColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FEditorDataStorageWebImageColumn @ 142cc2c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FEditorDataStorageWebImageColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FEditorDataStorageWebImageColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FEditorDataStorageWebImageColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FHideRowFromUITag @ 142cc2d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FHideRowFromUITag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FHideRowFromUITag.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FHideRowFromUITag.InnerSingleton,
               &Z_Construct_UScriptStruct_FHideRowFromUITag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FHideRowFromUITag.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FHideRowFromUITag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FIsInEditingModeTag @ 142cc2d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIsInEditingModeTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FIsInEditingModeTag.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FIsInEditingModeTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FIsInEditingModeTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FIsInEditingModeTag.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FIsInEditingModeTag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSimpleWidgetConstructor @ 142cc2e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSimpleWidgetConstructor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.InnerSingleton,
               &Z_Construct_UScriptStruct_FSimpleWidgetConstructor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSlateColorColumn @ 142cc2e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSlateColorColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSlateColorColumn.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSlateColorColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FSlateColorColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSlateColorColumn.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSlateColorColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn @ 142cc2f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FTEDSProcessorTestsReferenceColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTEDSProcessorTestsReferenceColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked @ 142cc2f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_Linked.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_Linked.InnerSingleton,
               &Z_Construct_UScriptStruct_FTEDSProcessorTests_Linked_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_Linked.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_Linked.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag @ 142cc3010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_PrimaryTag.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_PrimaryTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FTEDSProcessorTests_PrimaryTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_PrimaryTag.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_PrimaryTag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag @ 142cc3090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_SecondaryTag.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_SecondaryTag.InnerSingleton,
               &Z_Construct_UScriptStruct_FTEDSProcessorTests_SecondaryTag_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_SecondaryTag.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTEDSProcessorTests_SecondaryTag.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTedsDecoratorWidgetConstructor @ 142cc3110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTedsDecoratorWidgetConstructor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.InnerSingleton,
               &Z_Construct_UScriptStruct_FTedsDecoratorWidgetConstructor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnA @ 142cc3190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnA(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnA.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnA.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnA_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnA.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnA.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnB @ 142cc3210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnB(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnB.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnB.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnB_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnB.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnB.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnC @ 142cc3290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnC(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnC.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnC.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnC_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnC.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnC.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnD @ 142cc3310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnD(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnD.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnD.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnD_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnD.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnD.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnDynamic @ 142cc3390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnDynamic(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnDynamic.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnDynamic.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnDynamic_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnDynamic.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnDynamic.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnE @ 142cc3410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnE(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnE.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnE.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnE_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnE.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnE.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnF @ 142cc3490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnF(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnF.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnF.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnF_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnF.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnF.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnG @ 142cc3510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnG(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnG.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnG.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnG_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnG.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnG.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnInt @ 142cc3590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnInt(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnInt.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnInt.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnInt_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnInt.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnInt.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestColumnString @ 142cc3610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestColumnString(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestColumnString.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestColumnString.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestColumnString_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestColumnString.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestColumnString.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestTagColumnA @ 142cc3690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestTagColumnA(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnA.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestTagColumnA.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestTagColumnA_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnA.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestTagColumnA.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestTagColumnB @ 142cc3710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestTagColumnB(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnB.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestTagColumnB.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestTagColumnB_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnB.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestTagColumnB.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestTagColumnC @ 142cc3790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestTagColumnC(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnC.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestTagColumnC.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestTagColumnC_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnC.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestTagColumnC.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestTagColumnD @ 142cc3810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestTagColumnD(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnD.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestTagColumnD.InnerSingleton,
               &Z_Construct_UScriptStruct_FTestTagColumnD_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestTagColumnD.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestTagColumnD.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn @ 142cc3890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementClassTypeInfoColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementClassTypeInfoColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementClassTypeInfoColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementClassTypeInfoColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementClassTypeInfoColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn @ 142cc3910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementFloatValueCacheColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementFloatValueCacheColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementFloatValueCacheColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementFloatValueCacheColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementFloatValueCacheColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn @ 142cc3990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementI32IntValueCacheColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementI32IntValueCacheColumn.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTypedElementI32IntValueCacheColumn_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementI32IntValueCacheColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementI32IntValueCacheColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn @ 142cc3a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementI64IntValueCacheColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementI64IntValueCacheColumn.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTypedElementI64IntValueCacheColumn_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementI64IntValueCacheColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementI64IntValueCacheColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn @ 142cc3a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementLocalTransformColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementLocalTransformColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementLocalTransformColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementLocalTransformColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementLocalTransformColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn @ 142cc3b10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementScriptStructTypeInfoColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementScriptStructTypeInfoColumn.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementScriptStructTypeInfoColumn_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementScriptStructTypeInfoColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementScriptStructTypeInfoColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementSelectionColumn @ 142cc3b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementSelectionColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementSelectionColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementSelectionColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementSelectionColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementSelectionColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementSelectionColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn @ 142cc3c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceColumn_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag @ 142cc3c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementSlateWidgetReferenceDeletesRowTag.
           InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn @ 142cc3d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementU32IntValueCacheColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementU32IntValueCacheColumn.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTypedElementU32IntValueCacheColumn_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementU32IntValueCacheColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementU32IntValueCacheColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn @ 142cc3d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.InnerSingleton
               ,&Z_Construct_UScriptStruct_FTypedElementU64IntValueCacheColumn_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementU64IntValueCacheColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn @ 142cc3e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementViewportOutlineColorColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementViewportOutlineColorColumn.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementViewportOutlineColorColumn_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementViewportOutlineColorColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementViewportOutlineColorColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn @ 142cc3e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementViewportOverlayColorColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTypedElementViewportOverlayColorColumn.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTypedElementViewportOverlayColorColumn_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTypedElementViewportOverlayColorColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTypedElementViewportOverlayColorColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVisibleInEditorColumn @ 142cc3f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVisibleInEditorColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVisibleInEditorColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVisibleInEditorColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FVisibleInEditorColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVisibleInEditorColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVisibleInEditorColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetConstructorNameColumn @ 142cc3f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetConstructorNameColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetConstructorNameColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetConstructorNameColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetConstructorNameColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetConstructorNameColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetConstructorNameColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetFactoryColumn @ 142cc4010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetFactoryColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWidgetFactoryColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn @ 142cc4090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetFactoryConditionsColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetFactoryConditionsColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetFactoryConstructorColumn @ 142cc4110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryConstructorColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetFactoryConstructorColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn @ 142cc4190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetFactoryConstructorTypeInfoColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetPurposeColumn @ 142cc4210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeColumn.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetPurposeColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetPurposeColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeColumn.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWidgetPurposeColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetPurposeNameColumn @ 142cc4290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeNameColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeNameColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetPurposeNameColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetPurposeNameColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeNameColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetPurposeNameColumn.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn @ 142cc4310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.InnerSingleton,
               &Z_Construct_UScriptStruct_FWidgetPurposeReferenceColumn_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWidgetPurposeReferenceColumn.InnerSingleton;
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

// IMPLEMENT_MODULE_TypedElementFramework @ 142cc49e0

void __cdecl IMPLEMENT_MODULE_TypedElementFramework(void)

{
  return;
}

// Unset'' @ 15035e900

void __cdecl `dynamic_atexit_destructor_for_'FTypedElementId::Unset__(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (FTypedElementId::Unset.field0_0x0._s_0.TypeId != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementId.h"
                       ,0x2e,
                       L"Element ID was still set during destruction! This will leak an element reference, and you should release this ID prior to destruction!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableReferenceTracking'' @ 15035e940

void __cdecl
TypedElementReferences::_dynamic_atexit_destructor_for__CVarEnableReferenceTracking__(void)

{
  CVarEnableReferenceTracking._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableReferenceTracking);
  return;
}

// `dynamic_atexit_destructor_for_'FMapKeyView_TestsInstance'' @ 15035e960

void __cdecl
UE::Editor::DataStorage::Tests::Private::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMapKeyView_TestsInstance__(void)

{
  if (FMapKeyView_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMapKeyView_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FMapKeyView_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FMapKey_TestsInstance'' @ 15035e990

void __cdecl
UE::Editor::DataStorage::Tests::Private::`anonymous_namespace'::
_dynamic_atexit_destructor_for__FMapKey_TestsInstance__(void)

{
  if (FMapKey_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMapKey_TestsInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FMapKey_TestsInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementRegistryPerfTestAutomationTestInstance'' @ 15035e9c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementRegistryPerfTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementRegistryPerfTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FTypedElementRegistrySmokeTestAutomationTestInstance'' @ 15035e9e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FTypedElementRegistrySmokeTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FTypedElementRegistrySmokeTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogEditorDataStorage'' @ 15035ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogEditorDataStorage__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogEditorDataStorage);
  return;
}

// `dynamic_atexit_destructor_for_'NextTypeIdCS'' @ 15035ea20

void __cdecl
`UTypedElementRegistry::RegisterElementTypeImpl'::__l5::
_dynamic_atexit_destructor_for__NextTypeIdCS__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035ea27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&NextTypeIdCS);
  return;
}

// `dynamic_atexit_destructor_for_'OnTedsFeaturesEnabled'' @ 15035ea40

void __cdecl
`UE::Editor::DataStorage::OnEditorDataStorageFeaturesEnabled'::__l2::
_dynamic_atexit_destructor_for__OnTedsFeaturesEnabled__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnTedsFeaturesEnabled._8_8_,
             OnTedsFeaturesEnabled._16_4_);
  if (OnTedsFeaturesEnabled._8_8_ != 0) {
    FMemory::Free((void *)OnTedsFeaturesEnabled._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnTedsFeaturesEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'TestPath'' @ 15035ea80

void __cdecl
UE::Editor::DataStorage::Tests::Private::_dynamic_atexit_destructor_for__TestPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = TestPath.SubPathString.Data.AllocatorInstance.Data;
  if (TestPath.SubPathString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (TestPath.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'TypedElementRegistryInstance'' @ 15035eaa0

void __cdecl
`GetTypedElementRegistryInstance'::__l2::
_dynamic_atexit_destructor_for__TypedElementRegistryInstance__(void)

{
  if (TypedElementRegistryInstance.Object != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(TypedElementRegistryInstance.Object);
    TypedElementRegistryInstance.Object = (UObject *)0x0;
  }
  return;
}

