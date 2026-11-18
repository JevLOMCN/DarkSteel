// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 371

// `dynamic_initializer_for_'AssetBundleData_Ops'' @ 140f1cdc0

void __cdecl _dynamic_initializer_for__AssetBundleData_Ops__(void)

{
  FName FVar1;
  FName *pFVar2;
  ICppStructOps *pIVar3;
  ICppStructOps *pIVar4;
  FName local_res8;
  FName local_res10;
  FTopLevelAssetPath local_28;
  FTopLevelAssetPath local_18;
  
  pFVar2 = FName::FName(&local_res8,L"AssetBundleData");
  FVar1 = *pFVar2;
  pFVar2 = FName::FName(&local_res10,L"/Script/CoreUObject");
  pIVar4 = (ICppStructOps *)0x0;
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&local_28,*pFVar2,FVar1);
  AssetBundleData_Ops.Name.AssetName = local_28.AssetName;
  AssetBundleData_Ops.Name.PackageName = local_28.PackageName;
  pIVar3 = operator_new(0x10);
  if (pIVar3 != (ICppStructOps *)0x0) {
    pIVar3->Size = 0x10;
    pIVar3->FakeVPtr =
         (FStructOpsFakeVTable *)
         &UE::CoreUObject::Private::
          TStructOpsFakeVTableInstance<FAssetBundleData,&UE::CoreUObject::Private::Construct<FAssetBundleData>,&UE::CoreUObject::Private::ConstructForTests<FAssetBundleData>,&UE::CoreUObject::Private::Destruct<FAssetBundleData>,&UE::CoreUObject::Private::Copy<FAssetBundleData>,&UE::CoreUObject::Private::ExportTextItem<FAssetBundleData>,&UE::CoreUObject::Private::ImportTextItem<FAssetBundleData>_>
    ;
    pIVar3->Alignment = 8;
    pIVar4 = pIVar3;
  }
  local_18 = AssetBundleData_Ops.Name;
  UScriptStruct::DeferCppStructOps(&local_18,pIVar4);
  atexit(_dynamic_atexit_destructor_for__AssetBundleData_Ops__);
  return;
}

// `dynamic_initializer_for_'FAssetBundlDataImportExportTextTestAutomationTestInstance'' @ 140f1ce80

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAssetBundlDataImportExportTextTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAssetBundlDataImportExportTextTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAssetBundlDataImportExportTextTestAutomationTestInstance,
             &local_18,false);
  FAssetBundlDataImportExportTextTestAutomationTestInstance._0_8_ =
       &___7FAssetBundlDataImportExportTextTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FAssetBundlDataImportExportTextTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FAssetBundleEntryImportExportTextTestAutomationTestInstance'' @ 140f1cee0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FAssetBundleEntryImportExportTextTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FAssetBundleEntryImportExportTextTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FAssetBundleEntryImportExportTextTestAutomationTestInstance,
             &local_18,false);
  FAssetBundleEntryImportExportTextTestAutomationTestInstance._0_8_ =
       &___7FAssetBundleEntryImportExportTextTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FAssetBundleEntryImportExportTextTestAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FLegacyAssetBundleEntryTestAutomationTestInstance'' @ 140f1cf40

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FLegacyAssetBundleEntryTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLegacyAssetBundleEntryTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLegacyAssetBundleEntryTestAutomationTestInstance,&local_18,
             false);
  FLegacyAssetBundleEntryTestAutomationTestInstance._0_8_ = &___7FLegacyAssetBundleEntryTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLegacyAssetBundleEntryTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'NAME_UObject_ExecuteUbergraph'' @ 140f1cfa0

void __cdecl _dynamic_initializer_for__NAME_UObject_ExecuteUbergraph__(void)

{
  FName::FName(&NAME_UObject_ExecuteUbergraph,L"ExecuteUbergraph");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h__Script_CoreUObject_1861764947'' @ 140f1cfc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h__Script_CoreUObject_1861764947__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_GarbageCollectionInternal_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_TestUninitializedScriptStructMembersTest_h__Script_CoreUObject_3111509260'' @ 140f1d000

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_TestUninitializedScriptStructMembersTest_h__Script_CoreUObject_3111509260__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_TestUninitializedScriptStructMembersTest_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_ARFilter_h__Script_CoreUObject_194189457'' @ 140f1d040

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_ARFilter_h__Script_CoreUObject_194189457__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_ARFilter_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_AssetBundleData_h__Script_CoreUObject_1870890213'' @ 140f1d080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_AssetBundleData_h__Script_CoreUObject_1870890213__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_AssetRegistry_AssetBundleData_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Serialization_TestUndeclaredScriptStructObjectReferences_h__Script_CoreUObject_44293159'' @ 140f1d0c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Serialization_TestUndeclaredScriptStructObjectReferences_h__Script_CoreUObject_44293159__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_Serialization_TestUndeclaredScriptStructObjectReferences_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructBaseStructQueryParams_h__Script_CoreUObject_337352431'' @ 140f1d100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructBaseStructQueryParams_h__Script_CoreUObject_337352431__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_StructUtils_InstancedStructBaseStructQueryParams_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNetTypes_h__Script_CoreUObject_172578336'' @ 140f1d140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNetTypes_h__Script_CoreUObject_172578336__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNetTypes_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h__Script_CoreUObject_300060013'' @ 140f1d190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h__Script_CoreUObject_300060013__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_GCObject_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h__Script_CoreUObject_2753735794'' @ 140f1d1d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h__Script_CoreUObject_2753735794__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Object_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h__Script_CoreUObject_3342843327'' @ 140f1d210

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h__Script_CoreUObject_3342843327__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyText_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyWrapper_h__Script_CoreUObject_1720058319'' @ 140f1d250

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyWrapper_h__Script_CoreUObject_1720058319__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_PropertyWrapper_h__Script_CoreUObject_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_UnrealTypePrivate_h__Script_CoreUObject_745229827'' @ 140f1d290

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_UnrealTypePrivate_h__Script_CoreUObject_745229827__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_UnrealTypePrivate_h__Script_CoreUObject_Statics
             ::ClassInfo,0x21,(FStructRegisterCompiledInInfo *)0x0,0,
             (FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMNativeRational_h__Script_CoreUObject_4230360158'' @ 140f1d2d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMNativeRational_h__Script_CoreUObject_4230360158__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMNativeRational_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseConstraints_h__Script_CoreUObject_1647093773'' @ 140f1d310

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseConstraints_h__Script_CoreUObject_1647093773__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseConstraints_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h__Script_CoreUObject_2619364668'' @ 140f1d350

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h__Script_CoreUObject_2619364668__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_ObjectPtrTestClass_h__Script_CoreUObject_Statics
             ::ClassInfo,0xb,(FStructRegisterCompiledInInfo *)0x0,0,
             (FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h__Script_CoreUObject_834414176'' @ 140f1d390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h__Script_CoreUObject_834414176__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Tests_OptionalPropertyTestObject_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_CoreUObject'' @ 140f1d3d0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_CoreUObject__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xf38d12d5;
  local_res8[0].DeclarationsHash = 0x9960cd67;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_CoreUObject,L"/Script/CoreUObject",
             &Z_Registration_Info_UPackage__Script_CoreUObject,local_res8);
  return;
}

// Z_Construct_UPackage__Script_CoreUObject @ 141e47f60

UPackage * __cdecl Z_Construct_UPackage__Script_CoreUObject(void)

{
  if (Z_Registration_Info_UPackage__Script_CoreUObject.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_CoreUObject.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_CoreUObject.OuterSingleton;
}

// ELifetimeCondition_StaticEnum @ 141e47fa0

UEnum * __cdecl ELifetimeCondition_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELifetimeCondition,(UObject *)pUVar1,
                       L"ELifetimeCondition");
  }
  return Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton;
}

// Z_Construct_UClass_UGCBarrier @ 141e488d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGCBarrier(void)

{
  if (Z_Registration_Info_UClass_UGCBarrier.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGCBarrier.OuterSingleton,
               &Z_Construct_UClass_UGCBarrier_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGCBarrier.OuterSingleton;
}

// Z_Construct_UClass_UObject @ 141e48910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObject(void)

{
  if (Z_Registration_Info_UClass_UObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObject.OuterSingleton,
               &Z_Construct_UClass_UObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObject.OuterSingleton;
}

// Z_Construct_UClass_UGCObjectReferencer @ 141e48ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGCObjectReferencer(void)

{
  if (Z_Registration_Info_UClass_UGCObjectReferencer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGCObjectReferencer.OuterSingleton,
               &Z_Construct_UClass_UGCObjectReferencer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGCObjectReferencer.OuterSingleton;
}

// NewStructOps @ 141e48c10

void * __cdecl
Z_Construct_UScriptStruct_FInstancedStructBaseStructQueryParams_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<UE::StructUtils::FInstancedStructBaseStructQueryParams,&UE::CoreUObject::Private::Construct<UE::StructUtils::FInstancedStructBaseStructQueryParams>,&UE::CoreUObject::Private::ConstructForTests<UE::StructUtils::FInstancedStructBaseStructQueryParams>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UObject_ExecuteUbergraph @ 141e48d10

UFunction * __cdecl Z_Construct_UFunction_UObject_ExecuteUbergraph(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UObject_ExecuteUbergraph_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UObjectPtrTestClass_NoRegister @ 141e48e10

UClass * __cdecl Z_Construct_UClass_UObjectPtrTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClass",
               &Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton,
               UObjectPtrTestClass::StaticRegisterNativesUObjectPtrTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClass.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrAbstractTestClass_NoRegister @ 141e48ec0

UClass * __cdecl Z_Construct_UClass_UObjectPtrAbstractTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton,
               UObjectPtrAbstractTestClass::StaticRegisterNativesUObjectPtrAbstractTestClass,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrAbstractTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAssetBundleEntry @ 141e49550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetBundleEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetBundleEntry.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetBundleEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetBundleEntry.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetBundleEntry.InnerSingleton;
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

// NewStructOps @ 141e495d0

void * __cdecl Z_Construct_UScriptStruct_FAssetBundleEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetBundleEntry,&UE::CoreUObject::Private::Construct<FAssetBundleEntry>,&UE::CoreUObject::Private::ConstructForTests<FAssetBundleEntry>,&UE::CoreUObject::Private::Destruct<FAssetBundleEntry>,&UE::CoreUObject::Private::Copy<FAssetBundleEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141e49830

void * __cdecl Z_Construct_UScriptStruct_FAssetBundleData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetBundleData,&UE::CoreUObject::Private::Construct<FAssetBundleData>,&UE::CoreUObject::Private::ConstructForTests<FAssetBundleData>,&UE::CoreUObject::Private::Destruct<FAssetBundleData>,&UE::CoreUObject::Private::Copy<FAssetBundleData>,&UE::CoreUObject::Private::ExportTextItem<FAssetBundleData>,&UE::CoreUObject::Private::ImportTextItem<FAssetBundleData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UArrayProperty @ 141e49ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UArrayProperty(void)

{
  if (Z_Registration_Info_UClass_UArrayProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UArrayProperty.OuterSingleton,
               &Z_Construct_UClass_UArrayProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UArrayProperty.OuterSingleton;
}

// Z_Construct_UClass_UBoolProperty @ 141e49af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UBoolProperty(void)

{
  if (Z_Registration_Info_UClass_UBoolProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UBoolProperty.OuterSingleton,
               &Z_Construct_UClass_UBoolProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UBoolProperty.OuterSingleton;
}

// Z_Construct_UClass_UByteProperty @ 141e49b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UByteProperty(void)

{
  if (Z_Registration_Info_UClass_UByteProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UByteProperty.OuterSingleton,
               &Z_Construct_UClass_UByteProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UByteProperty.OuterSingleton;
}

// Z_Construct_UClass_UClassProperty @ 141e49b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClassProperty(void)

{
  if (Z_Registration_Info_UClass_UClassProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClassProperty.OuterSingleton,
               &Z_Construct_UClass_UClassProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClassProperty.OuterSingleton;
}

// Z_Construct_UClass_UDelegateProperty @ 141e49bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDelegateProperty(void)

{
  if (Z_Registration_Info_UClass_UDelegateProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDelegateProperty.OuterSingleton,
               &Z_Construct_UClass_UDelegateProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDelegateProperty.OuterSingleton;
}

// Z_Construct_UClass_UDoubleProperty @ 141e49bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDoubleProperty(void)

{
  if (Z_Registration_Info_UClass_UDoubleProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDoubleProperty.OuterSingleton,
               &Z_Construct_UClass_UDoubleProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDoubleProperty.OuterSingleton;
}

// Z_Construct_UClass_UEnumProperty @ 141e49c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnumProperty(void)

{
  if (Z_Registration_Info_UClass_UEnumProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnumProperty.OuterSingleton,
               &Z_Construct_UClass_UEnumProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnumProperty.OuterSingleton;
}

// Z_Construct_UClass_UFloatProperty @ 141e49c70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UFloatProperty(void)

{
  if (Z_Registration_Info_UClass_UFloatProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UFloatProperty.OuterSingleton,
               &Z_Construct_UClass_UFloatProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UFloatProperty.OuterSingleton;
}

// Z_Construct_UClass_UInt16Property @ 141e49cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInt16Property(void)

{
  if (Z_Registration_Info_UClass_UInt16Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInt16Property.OuterSingleton,
               &Z_Construct_UClass_UInt16Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInt16Property.OuterSingleton;
}

// Z_Construct_UClass_UInt64Property @ 141e49cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInt64Property(void)

{
  if (Z_Registration_Info_UClass_UInt64Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInt64Property.OuterSingleton,
               &Z_Construct_UClass_UInt64Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInt64Property.OuterSingleton;
}

// Z_Construct_UClass_UInt8Property @ 141e49d30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInt8Property(void)

{
  if (Z_Registration_Info_UClass_UInt8Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInt8Property.OuterSingleton,
               &Z_Construct_UClass_UInt8Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInt8Property.OuterSingleton;
}

// Z_Construct_UClass_UInterfaceProperty @ 141e49d70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterfaceProperty(void)

{
  if (Z_Registration_Info_UClass_UInterfaceProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterfaceProperty.OuterSingleton,
               &Z_Construct_UClass_UInterfaceProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterfaceProperty.OuterSingleton;
}

// Z_Construct_UClass_UIntProperty @ 141e49db0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UIntProperty(void)

{
  if (Z_Registration_Info_UClass_UIntProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UIntProperty.OuterSingleton,
               &Z_Construct_UClass_UIntProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UIntProperty.OuterSingleton;
}

// Z_Construct_UClass_ULazyObjectProperty @ 141e49df0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULazyObjectProperty(void)

{
  if (Z_Registration_Info_UClass_ULazyObjectProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULazyObjectProperty.OuterSingleton,
               &Z_Construct_UClass_ULazyObjectProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULazyObjectProperty.OuterSingleton;
}

// Z_Construct_UClass_UMapProperty @ 141e49e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMapProperty(void)

{
  if (Z_Registration_Info_UClass_UMapProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMapProperty.OuterSingleton,
               &Z_Construct_UClass_UMapProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMapProperty.OuterSingleton;
}

// Z_Construct_UClass_UMulticastDelegateProperty @ 141e49e70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMulticastDelegateProperty(void)

{
  if (Z_Registration_Info_UClass_UMulticastDelegateProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMulticastDelegateProperty.OuterSingleton,
               &Z_Construct_UClass_UMulticastDelegateProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMulticastDelegateProperty.OuterSingleton;
}

// Z_Construct_UClass_UMulticastInlineDelegateProperty @ 141e49eb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMulticastInlineDelegateProperty(void)

{
  if (Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.OuterSingleton,
               &Z_Construct_UClass_UMulticastInlineDelegateProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.OuterSingleton;
}

// Z_Construct_UClass_UMulticastSparseDelegateProperty @ 141e49ef0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMulticastSparseDelegateProperty(void)

{
  if (Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.OuterSingleton,
               &Z_Construct_UClass_UMulticastSparseDelegateProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.OuterSingleton;
}

// Z_Construct_UClass_UNameProperty @ 141e49f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNameProperty(void)

{
  if (Z_Registration_Info_UClass_UNameProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNameProperty.OuterSingleton,
               &Z_Construct_UClass_UNameProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNameProperty.OuterSingleton;
}

// Z_Construct_UClass_UNumericProperty @ 141e49f70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNumericProperty(void)

{
  if (Z_Registration_Info_UClass_UNumericProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNumericProperty.OuterSingleton,
               &Z_Construct_UClass_UNumericProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNumericProperty.OuterSingleton;
}

// Z_Construct_UClass_UObjectProperty @ 141e49fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectProperty(void)

{
  if (Z_Registration_Info_UClass_UObjectProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectProperty.OuterSingleton,
               &Z_Construct_UClass_UObjectProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectProperty.OuterSingleton;
}

// Z_Construct_UClass_UObjectPropertyBase @ 141e49ff0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPropertyBase(void)

{
  if (Z_Registration_Info_UClass_UObjectPropertyBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPropertyBase.OuterSingleton,
               &Z_Construct_UClass_UObjectPropertyBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPropertyBase.OuterSingleton;
}

// Z_Construct_UClass_UProperty @ 141e4a030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UProperty(void)

{
  if (Z_Registration_Info_UClass_UProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UProperty.OuterSingleton,
               &Z_Construct_UClass_UProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UProperty.OuterSingleton;
}

// Z_Construct_UClass_USetProperty @ 141e4a070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USetProperty(void)

{
  if (Z_Registration_Info_UClass_USetProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USetProperty.OuterSingleton,
               &Z_Construct_UClass_USetProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USetProperty.OuterSingleton;
}

// Z_Construct_UClass_USoftClassProperty @ 141e4a0b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoftClassProperty(void)

{
  if (Z_Registration_Info_UClass_USoftClassProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoftClassProperty.OuterSingleton,
               &Z_Construct_UClass_USoftClassProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoftClassProperty.OuterSingleton;
}

// Z_Construct_UClass_USoftObjectProperty @ 141e4a0f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USoftObjectProperty(void)

{
  if (Z_Registration_Info_UClass_USoftObjectProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USoftObjectProperty.OuterSingleton,
               &Z_Construct_UClass_USoftObjectProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USoftObjectProperty.OuterSingleton;
}

// Z_Construct_UClass_UStrProperty @ 141e4a130

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStrProperty(void)

{
  if (Z_Registration_Info_UClass_UStrProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStrProperty.OuterSingleton,
               &Z_Construct_UClass_UStrProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStrProperty.OuterSingleton;
}

// Z_Construct_UClass_UStructProperty @ 141e4a170

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStructProperty(void)

{
  if (Z_Registration_Info_UClass_UStructProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStructProperty.OuterSingleton,
               &Z_Construct_UClass_UStructProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStructProperty.OuterSingleton;
}

// Z_Construct_UClass_UTextProperty @ 141e4a1b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTextProperty(void)

{
  if (Z_Registration_Info_UClass_UTextProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTextProperty.OuterSingleton,
               &Z_Construct_UClass_UTextProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTextProperty.OuterSingleton;
}

// Z_Construct_UClass_UUInt16Property @ 141e4a1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUInt16Property(void)

{
  if (Z_Registration_Info_UClass_UUInt16Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUInt16Property.OuterSingleton,
               &Z_Construct_UClass_UUInt16Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUInt16Property.OuterSingleton;
}

// Z_Construct_UClass_UUInt32Property @ 141e4a230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUInt32Property(void)

{
  if (Z_Registration_Info_UClass_UUInt32Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUInt32Property.OuterSingleton,
               &Z_Construct_UClass_UUInt32Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUInt32Property.OuterSingleton;
}

// Z_Construct_UClass_UUInt64Property @ 141e4a270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UUInt64Property(void)

{
  if (Z_Registration_Info_UClass_UUInt64Property.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UUInt64Property.OuterSingleton,
               &Z_Construct_UClass_UUInt64Property_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UUInt64Property.OuterSingleton;
}

// Z_Construct_UClass_UWeakObjectProperty @ 141e4a2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWeakObjectProperty(void)

{
  if (Z_Registration_Info_UClass_UWeakObjectProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWeakObjectProperty.OuterSingleton,
               &Z_Construct_UClass_UWeakObjectProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWeakObjectProperty.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141e4bae0

void * __thiscall
FAssetBundleEntryImportExportTextTest::_scalar_deleting_destructor_
          (FAssetBundleEntryImportExportTextTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e4cda0

void * __thiscall
FLegacyAssetBundleEntryTest::_scalar_deleting_destructor_
          (FLegacyAssetBundleEntryTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UDerrivedClass @ 141e4cde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDerrivedClass(void)

{
  if (Z_Registration_Info_UClass_UDerrivedClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDerrivedClass.OuterSingleton,
               &Z_Construct_UClass_UDerrivedClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDerrivedClass.OuterSingleton;
}

// Z_Construct_UClass_UMiddleClass @ 141e4ce20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMiddleClass(void)

{
  if (Z_Registration_Info_UClass_UMiddleClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMiddleClass.OuterSingleton,
               &Z_Construct_UClass_UMiddleClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMiddleClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass @ 141e4ce60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrAbstractTestClass @ 141e4cea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrAbstractTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrAbstractTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrDerrivedTestClass @ 141e4cee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrDerrivedTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrDerrivedTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrNotLazyTestClass @ 141e4cf20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrNotLazyTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrNotLazyTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrStressTestClass @ 141e4cf60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrStressTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrStressTestClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrStressTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrStressTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrStressTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrTestClass @ 141e4cfa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrTestClass(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrTestClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrTestClass.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrTestClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClass.OuterSingleton;
}

// Z_Construct_UClass_UObjectPtrTestClassWithRef @ 141e4cfe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectPtrTestClassWithRef(void)

{
  if (Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.OuterSingleton,
               &Z_Construct_UClass_UObjectPtrTestClassWithRef_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.OuterSingleton;
}

// Z_Construct_UClass_UObjectWithClassProperty @ 141e4d020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectWithClassProperty(void)

{
  if (Z_Registration_Info_UClass_UObjectWithClassProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectWithClassProperty.OuterSingleton,
               &Z_Construct_UClass_UObjectWithClassProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectWithClassProperty.OuterSingleton;
}

// Z_Construct_UClass_UObjectWithRawProperty @ 141e4d060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectWithRawProperty(void)

{
  if (Z_Registration_Info_UClass_UObjectWithRawProperty.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectWithRawProperty.OuterSingleton,
               &Z_Construct_UClass_UObjectWithRawProperty_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectWithRawProperty.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141e4dec0

void * __thiscall
FAssetBundlDataImportExportTextTest::_scalar_deleting_destructor_
          (FAssetBundlDataImportExportTextTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewProp_bRecursivePaths_SetBit @ 141e4e0a0

void __cdecl
Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursivePaths_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x140) = 1;
  return;
}

// NewProp_bRecursiveClasses_SetBit @ 141e4e0b0

void __cdecl
Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bRecursiveClasses_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x141) = 1;
  return;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 141e4e0c0

void __cdecl
Z_Construct_UScriptStruct_FARFilter_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x142) = 1;
  return;
}

// NewStructOps @ 141e4e0d0

void * __cdecl Z_Construct_UScriptStruct_FARFilter_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARFilter,&UE::CoreUObject::Private::Construct<FARFilter>,&UE::CoreUObject::Private::ConstructForTests<FARFilter>,&UE::CoreUObject::Private::Destruct<FARFilter>,&UE::CoreUObject::Private::PostSerialize<FARFilter>,&UE::CoreUObject::Private::Copy<FARFilter>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UOptionalPropertyTestObject @ 141e4e480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOptionalPropertyTestObject(void)

{
  if (Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton,
               &Z_Construct_UClass_UOptionalPropertyTestObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOptionalPropertyTestObject.OuterSingleton;
}

// NewStructOps @ 141e4e540

void * __cdecl Z_Construct_UScriptStruct_FPropertyTextFName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyTextFName,&UE::CoreUObject::Private::Construct<FPropertyTextFName>,&UE::CoreUObject::Private::ConstructForTests<FPropertyTextFName>,&UE::CoreUObject::Private::Destruct<FPropertyTextFName>,&UE::CoreUObject::Private::Copy<FPropertyTextFName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141e4e720

void * __cdecl Z_Construct_UScriptStruct_FPropertyTextString_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPropertyTextString,&UE::CoreUObject::Private::Construct<FPropertyTextString>,&UE::CoreUObject::Private::ConstructForTests<FPropertyTextString>,&UE::CoreUObject::Private::Destruct<FPropertyTextString>,&UE::CoreUObject::Private::Copy<FPropertyTextString>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMulticastDelegatePropertyWrapper @ 141e4e760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMulticastDelegatePropertyWrapper(void)

{
  if (Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.OuterSingleton,
               &Z_Construct_UClass_UMulticastDelegatePropertyWrapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.OuterSingleton;
}

// Z_Construct_UClass_UMulticastInlineDelegatePropertyWrapper @ 141e4e7a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMulticastInlineDelegatePropertyWrapper(void)

{
  if (Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.OuterSingleton,
               &Z_Construct_UClass_UMulticastInlineDelegatePropertyWrapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.OuterSingleton;
}

// Z_Construct_UClass_UPropertyWrapper @ 141e4e7e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPropertyWrapper(void)

{
  if (Z_Registration_Info_UClass_UPropertyWrapper.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPropertyWrapper.OuterSingleton,
               &Z_Construct_UClass_UPropertyWrapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPropertyWrapper.OuterSingleton;
}

// Z_Construct_UClass_UObject_NoRegister @ 141e4e820

UClass * __cdecl Z_Construct_UClass_UObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Object",&Z_Registration_Info_UClass_UObject.InnerSingleton,
               UObject::StaticRegisterNativesUObject,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UObject>,
               InternalVTableHelperCtorCaller<UObject>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObject.InnerSingleton;
}

// NewStructOps @ 141e4eb00

void * __cdecl
Z_Construct_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest_Statics::NewStructOps
          (void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestUndeclaredScriptStructObjectReferencesTest,&UE::CoreUObject::Private::Construct<FTestUndeclaredScriptStructObjectReferencesTest>,&UE::CoreUObject::Private::ConstructForTests<FTestUndeclaredScriptStructObjectReferencesTest>,&UE::CoreUObject::Private::Destruct<FTestUndeclaredScriptStructObjectReferencesTest>,&UE::CoreUObject::Private::SerializeArchive<FTestUndeclaredScriptStructObjectReferencesTest>,&UE::CoreUObject::Private::Copy<FTestUndeclaredScriptStructObjectReferencesTest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141e4eb40

void * __cdecl Z_Construct_UScriptStruct_FVerseRational_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseRational,&UE::CoreUObject::Private::Construct<FVerseRational>,&UE::CoreUObject::Private::ConstructForTests<FVerseRational>,&UE::CoreUObject::Private::Destruct<FVerseRational>,&UE::CoreUObject::Private::Copy<FVerseRational>,&UE::CoreUObject::Private::GetStructTypeHash<FVerseRational>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141e4ebc0

void * __cdecl
Z_Construct_UScriptStruct_FTestUninitializedScriptStructMembersTest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTestUninitializedScriptStructMembersTest,&UE::CoreUObject::Private::Construct<FTestUninitializedScriptStructMembersTest>,&UE::CoreUObject::Private::ConstructForTests<FTestUninitializedScriptStructMembersTest>,&UE::CoreUObject::Private::Destruct<FTestUninitializedScriptStructMembersTest>,&UE::CoreUObject::Private::Copy<FTestUninitializedScriptStructMembersTest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141e4ee40

void * __cdecl Z_Construct_UScriptStruct_FVerseIntConstraints_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseIntConstraints,&UE::CoreUObject::Private::Construct<FVerseIntConstraints>,&UE::CoreUObject::Private::ConstructForTests<FVerseIntConstraints>,&UE::CoreUObject::Private::Destruct<FVerseIntConstraints>,&UE::CoreUObject::Private::Copy<FVerseIntConstraints>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UProperty_NoRegister @ 141e4eec0

UClass * __cdecl Z_Construct_UClass_UProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Property",
               &Z_Registration_Info_UClass_UProperty.InnerSingleton,
               UProperty::StaticRegisterNativesUProperty,0x70,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_FProperty,L"Engine",InternalConstructor<UProperty>,
               InternalVTableHelperCtorCaller<UProperty>,local_res8,UField::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProperty.InnerSingleton;
}

// Z_Construct_UClass_UNumericProperty_NoRegister @ 141e4ef80

UClass * __cdecl Z_Construct_UClass_UNumericProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNumericProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NumericProperty",
               &Z_Registration_Info_UClass_UNumericProperty.InnerSingleton,
               UNumericProperty::StaticRegisterNativesUNumericProperty,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_FNumericProperty,L"Engine",
               InternalConstructor<UNumericProperty>,
               InternalVTableHelperCtorCaller<UNumericProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNumericProperty.InnerSingleton;
}

// NewStructOps @ 141e4f040

void * __cdecl Z_Construct_UScriptStruct_FVerseDoubleConstraints_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseDoubleConstraints,&UE::CoreUObject::Private::Construct<FVerseDoubleConstraints>,&UE::CoreUObject::Private::ConstructForTests<FVerseDoubleConstraints>,&UE::CoreUObject::Private::Destruct<FVerseDoubleConstraints>,&UE::CoreUObject::Private::Copy<FVerseDoubleConstraints>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// CastChecked<UScriptStruct,UScriptStruct> @ 141e4f570

UScriptStruct * __cdecl CastChecked<UScriptStruct,UScriptStruct>(UScriptStruct *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  if (param_1 != (UScriptStruct *)0x0) {
    return param_1;
  }
  pFVar1 = GetTypeName<UScriptStruct>(&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// CompareAsInt<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,FSoftObjectPathLexicalLess> @ 141e4f5b0

int __cdecl
Algo::
CompareAsInt<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,FSoftObjectPathLexicalLess>
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_2,
          FSoftObjectPathLexicalLess param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  FName *pFVar4;
  ulonglong uVar5;
  FName *this;
  FName *this_00;
  
  uVar5 = (ulonglong)param_1->ArrayNum;
  if (uVar5 != (longlong)param_2->ArrayNum) {
    iVar1 = 1;
    if (uVar5 < (ulonglong)(longlong)param_2->ArrayNum) {
      iVar1 = -1;
    }
    return iVar1;
  }
  pFVar4 = (FName *)(param_2->AllocatorInstance).Data;
  this = (FName *)(param_1->AllocatorInstance).Data;
  if (uVar5 != 0) {
    this_00 = this + 1;
    do {
      iVar1 = ::FName::Compare(this,pFVar4);
      if ((iVar1 == 0) && (iVar1 = ::FName::Compare(this_00,pFVar4 + 1), iVar1 == 0)) {
        if (pFVar4[3].ComparisonIndex.Value == 0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = *(char **)(pFVar4 + 2);
        }
        if (this_00[2].ComparisonIndex.Value == 0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = *(char **)(this_00 + 1);
        }
        iVar1 = strcmp(pcVar2,pcVar3);
      }
      if (iVar1 < 0) {
        return -1;
      }
      iVar1 = ::FName::Compare(this,pFVar4);
      if ((iVar1 == 0) && (iVar1 = ::FName::Compare(this_00,pFVar4 + 1), iVar1 == 0)) {
        if (pFVar4[3].ComparisonIndex.Value == 0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = *(char **)(pFVar4 + 2);
        }
        if (this_00[2].ComparisonIndex.Value == 0) {
          pcVar2 = "";
        }
        else {
          pcVar2 = *(char **)(this_00 + 1);
        }
        iVar1 = strcmp(pcVar2,pcVar3);
      }
      if (iVar1 < 0) {
        return 1;
      }
      this = this + 4;
      this_00 = this_00 + 4;
      pFVar4 = pFVar4 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}

// CompareAsInt<TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,FTopLevelAssetPathLexicalLess> @ 141e4f6f0

int __cdecl
Algo::
CompareAsInt<TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>_const_&,FTopLevelAssetPathLexicalLess>
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2,
          FTopLevelAssetPathLexicalLess param_3)

{
  int iVar1;
  FName *this;
  FName *pFVar2;
  FName *this_00;
  FName *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1->ArrayNum;
  if (uVar4 != (longlong)param_2->ArrayNum) {
    iVar1 = 1;
    if (uVar4 < (ulonglong)(longlong)param_2->ArrayNum) {
      iVar1 = -1;
    }
    return iVar1;
  }
  this = (FName *)(param_1->AllocatorInstance).Data;
  pFVar3 = (FName *)(param_2->AllocatorInstance).Data;
  if (uVar4 != 0) {
    this_00 = this + 1;
    pFVar2 = pFVar3 + 1;
    do {
      iVar1 = ::FName::Compare(this,pFVar3);
      if (iVar1 == 0) {
        iVar1 = ::FName::Compare(this_00,pFVar2);
      }
      if (iVar1 < 0) {
        return -1;
      }
      iVar1 = ::FName::Compare(this,pFVar3);
      if (iVar1 == 0) {
        iVar1 = ::FName::Compare(this_00,pFVar2);
      }
      if (iVar1 < 0) {
        return 1;
      }
      this = this + 2;
      this_00 = this_00 + 2;
      pFVar3 = pFVar3 + 2;
      pFVar2 = pFVar2 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}

// CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess> @ 141e4f7d0

int __cdecl
Algo::
CompareAsInt<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,TArray<FName,TSizedDefaultAllocator<32>_>_const_&,FNameLexicalLess>
          (TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,FNameLexicalLess param_3)

{
  int iVar1;
  FName *this;
  ulonglong uVar2;
  FName *pFVar3;
  
  uVar2 = (ulonglong)param_1->ArrayNum;
  if (uVar2 != (longlong)param_2->ArrayNum) {
    iVar1 = 1;
    if (uVar2 < (ulonglong)(longlong)param_2->ArrayNum) {
      iVar1 = -1;
    }
    return iVar1;
  }
  this = (FName *)(param_1->AllocatorInstance).Data;
  pFVar3 = (FName *)(param_2->AllocatorInstance).Data;
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    iVar1 = ::FName::Compare(this,pFVar3);
    if (iVar1 < 0) break;
    iVar1 = ::FName::Compare(this,pFVar3);
    if (iVar1 < 0) {
      return 1;
    }
    this = this + 1;
    pFVar3 = pFVar3 + 1;
    uVar2 = uVar2 - 1;
  }
  return -1;
}

// CompareItems<FAssetBundleEntry,int> @ 141e4f890

bool __cdecl
CompareItems<FAssetBundleEntry,int>
          (FAssetBundleEntry *param_1,FAssetBundleEntry *param_2,int param_3)

{
  FAssetBundleEntry *pFVar1;
  FAssetBundleEntry *pFVar2;
  bool bVar3;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar1 = param_1;
    pFVar2 = param_2;
    do {
      pTVar5 = &pFVar2->AssetPaths;
      pTVar4 = &pFVar1->AssetPaths;
      if (((*(longlong *)((longlong)(pTVar4 + -1) + 8) !=
            *(longlong *)((longlong)pTVar4 + (longlong)param_2 + (-8 - (longlong)param_1))) ||
          (pTVar4->ArrayNum != pTVar5->ArrayNum)) ||
         (bVar3 = CompareItems<FTopLevelAssetPath,int>
                            ((FTopLevelAssetPath *)(pTVar4->AllocatorInstance).Data,
                             (FTopLevelAssetPath *)(pTVar5->AllocatorInstance).Data,pTVar4->ArrayNum
                            ), !bVar3)) {
        return false;
      }
      pFVar1 = (FAssetBundleEntry *)(pTVar4 + 1);
      pFVar2 = (FAssetBundleEntry *)(pTVar5 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareItems<FTopLevelAssetPath,int> @ 141e4f920

bool __cdecl
CompareItems<FTopLevelAssetPath,int>
          (FTopLevelAssetPath *param_1,FTopLevelAssetPath *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      if ((*(FName *)(lVar1 + (longlong)param_2) != param_2->PackageName) ||
         (*(FName *)(lVar1 + 8 + (longlong)param_2) != param_2->AssetName)) {
        return false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess> @ 141e4f960

int __cdecl
Algo::
CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>
          (TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
           *param_1,
          TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
          *param_2,FNameLexicalLess param_3,FOptionalFStringIgnoreCaseLess param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType this;
  ForAnyElementType this_00;
  int iVar4;
  ulonglong uVar5;
  FIdentityFunctor local_res8;
  FNameLexicalLess local_res18 [8];
  FOptionalFStringIgnoreCaseLess local_res20 [8];
  TArray<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_> local_48;
  <lambda_1> local_38;
  
  iVar4 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  iVar2 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (iVar2 != iVar4) {
    iVar3 = 1;
    if (iVar2 < iVar4) {
      iVar3 = -1;
    }
    return iVar3;
  }
  if (*(int *)&param_1->field_0x8 == *(int *)&param_1->field_0x34) {
    return 0;
  }
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
           *)param_1,&local_48);
  TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
           *)param_2,&local_58);
  local_38.KeyLessThan = local_res18;
  local_38.ValueLessThan = local_res20;
  AlgoImpl::
  IntroSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,_Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>_::__l2::<lambda_1>_>
            ((TTuple<FName,TOptional<FString>_> *)local_48.AllocatorInstance.Data,local_48.ArrayNum,
             local_res8,&local_38);
  local_38.KeyLessThan = local_res18;
  local_38.ValueLessThan = local_res20;
  AlgoImpl::
  IntroSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,_Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>_::__l2::<lambda_1>_>
            ((TTuple<FName,TOptional<FString>_> *)local_58.AllocatorInstance.Data,local_58.ArrayNum,
             local_res8,&local_38);
  uVar5 = (ulonglong)local_48.ArrayNum;
  if (local_48.ArrayNum == local_58.ArrayNum) {
    this.Data = local_48.AllocatorInstance.Data;
    this_00.Data = local_58.AllocatorInstance.Data;
    if (local_48.ArrayNum != 0) {
      do {
        iVar2 = ::FName::Compare((FName *)this.Data,(FName *)this_00.Data);
        if (iVar2 < 0) {
LAB_141e4fb64:
          iVar2 = -1;
          goto LAB_141e4fb1b;
        }
        iVar2 = ::FName::Compare((FName *)this_00.Data,(FName *)this.Data);
        if (-1 < iVar2) {
          bVar1 = FOptionalFStringIgnoreCaseLess::operator()
                            (local_res20,
                             (TOptional<FString> *)
                             &((TTuple<FName,TOptional<FString>_> *)this.Data)->field_0x8,
                             (TOptional<FString> *)
                             &((TTuple<FName,TOptional<FString>_> *)this_00.Data)->field_0x8);
          if (bVar1) goto LAB_141e4fb64;
          FOptionalFStringIgnoreCaseLess::operator()
                    (local_res20,
                     (TOptional<FString> *)
                     &((TTuple<FName,TOptional<FString>_> *)this_00.Data)->field_0x8,
                     (TOptional<FString> *)
                     &((TTuple<FName,TOptional<FString>_> *)this.Data)->field_0x8);
        }
        iVar2 = ::FName::Compare((FName *)this.Data,(FName *)this_00.Data);
        if (iVar2 < 0) {
LAB_141e4fb5d:
          iVar2 = 1;
          goto LAB_141e4fb1b;
        }
        iVar2 = ::FName::Compare((FName *)this_00.Data,(FName *)this.Data);
        if (-1 < iVar2) {
          bVar1 = FOptionalFStringIgnoreCaseLess::operator()
                            (local_res20,
                             (TOptional<FString> *)
                             &((TTuple<FName,TOptional<FString>_> *)this.Data)->field_0x8,
                             (TOptional<FString> *)
                             &((TTuple<FName,TOptional<FString>_> *)this_00.Data)->field_0x8);
          if (bVar1) goto LAB_141e4fb5d;
          FOptionalFStringIgnoreCaseLess::operator()
                    (local_res20,
                     (TOptional<FString> *)
                     &((TTuple<FName,TOptional<FString>_> *)this_00.Data)->field_0x8,
                     (TOptional<FString> *)
                     &((TTuple<FName,TOptional<FString>_> *)this.Data)->field_0x8);
        }
        this.Data = this.Data + 0x18;
        this_00.Data = this_00.Data + 0x18;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
    if (uVar5 < (ulonglong)(longlong)local_58.ArrayNum) {
      iVar2 = -1;
    }
  }
LAB_141e4fb1b:
  DestructItems<TTuple<FName,TOptional<FString>_>,int>
            ((TTuple<FName,TOptional<FString>_> *)local_58.AllocatorInstance.Data,local_58.ArrayNum)
  ;
  if ((TTuple<FName,TOptional<FString>_> *)local_58.AllocatorInstance.Data !=
      (TTuple<FName,TOptional<FString>_> *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FName,TOptional<FString>_>,int>
            ((TTuple<FName,TOptional<FString>_> *)local_48.AllocatorInstance.Data,local_48.ArrayNum)
  ;
  if ((TTuple<FName,TOptional<FString>_> *)local_48.AllocatorInstance.Data !=
      (TTuple<FName,TOptional<FString>_> *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return iVar2;
}

// CompareSet<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FTopLevelAssetPathLexicalLess> @ 141e4fb80

/* WARNING: Type propagation algorithm not settling */

int __cdecl
Algo::
CompareSet<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>,FTopLevelAssetPathLexicalLess>
          (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
           *param_1,
          TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>
          *param_2,FTopLevelAssetPathLexicalLess param_3)

{
  FName *pFVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  FName FVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  FName *pFVar22;
  undefined1 local_138 [4];
  uint local_134;
  undefined1 local_130 [8];
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_128;
  int iStack_120;
  uint uStack_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  int iStack_10c;
  int local_108;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar18 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  iStack_100 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if (iStack_100 != iVar18) {
    iVar15 = 1;
    if (iStack_100 < iVar18) {
      iVar15 = -1;
    }
    return iVar15;
  }
  if (iStack_100 == 0) {
    return 0;
  }
  iVar18 = *(int *)&(param_1->Elements).field_0x28;
  bVar7 = false;
  pFVar22 = (FName *)0x0;
  iStack_120 = 0;
  uStack_11c = 1;
  local_108 = 0;
  iStack_10c = 0;
  if (iVar18 != 0) {
    puVar21 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)&(param_1->Elements).field_0x10;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      iStack_10c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_141e4fc92;
      uVar16 = puVar21[lVar13 + 1];
    }
    uStack_11c = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_11c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f8 = (int)lVar13;
    iStack_10c = local_108 + -1 + local_f8;
    if (iVar18 < iStack_10c) {
      iStack_10c = iVar18;
    }
  }
LAB_141e4fc92:
  local_118 = &(param_1->Elements).field_0x10;
  local_134 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_110 = 0xffffffff;
  uVar16 = local_134 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uStack_11c,iStack_120);
  TStack_b0.CurrentBitIndex = iStack_10c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = local_108;
  uStack_90 = CONCAT44(uStack_fc,iStack_100);
  iVar15 = (int)local_134 >> 5;
  bVar12 = (byte)local_134;
  local_128 = param_1;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118;
  if ((((int)local_134 < 0) || (iVar18 < (int)local_134)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar18 = (*pcVar6)();
    return iVar18;
  }
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar17 = local_134;
  if (local_134 != uVar10) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(param_1->Elements).field_0x10;
    }
    uVar17 = -1 << (bVar12 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      local_134 = uVar10;
      uVar17 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_141e4fdb0;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f4 = (int)lVar13;
    local_134 = local_f4 + -1 + uVar16;
    uVar17 = local_134;
    if ((int)uVar10 < (int)local_134) {
      local_134 = uVar10;
      uVar17 = uVar10;
    }
  }
LAB_141e4fdb0:
  do {
    pTVar8 = local_b8;
    if (*(int *)&(local_b8->Elements).field_0x8 - *(int *)&(local_b8->Elements).field_0x34 !=
        (int)uStack_90) {
      local_138[0] = 0;
      `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (((TStack_b0.CurrentBitIndex == uVar17) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar8 == param_1)) break;
    lVar13 = *(longlong *)&pTVar8->Elements;
    uVar3 = *(undefined8 *)(lVar13 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    pFVar1 = (FName *)(lVar13 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    uVar16 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    FVar4 = *pFVar1;
    uVar10 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar10 = uVar10 + FVar4.Number;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      FVar5 = (param_2->Hash).SecondaryData;
      FVar14 = (ForElementType<FSetElementId>)&param_2->Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = FVar5;
      }
      iVar18 = *(int *)((longlong)FVar14 +
                       (ulonglong)
                       (param_2->HashSize - 1U &
                       (uVar10 * 0x40 + uVar16 + (int)((ulonglong)uVar3 >> 0x20) + -0x61c88647 +
                        (uVar10 >> 2) ^ uVar10)) * 4);
      if (iVar18 != -1) {
        lVar13 = *(longlong *)&param_2->Elements;
        do {
          lVar11 = (longlong)iVar18;
          if ((*(FName *)(lVar13 + lVar11 * 0x18) == *pFVar1) &&
             (*(FName *)(lVar13 + 8 + lVar11 * 0x18) == pFVar1[1])) {
            if (iVar18 != -1) goto LAB_141e4feca;
            break;
          }
          iVar18 = *(int *)(lVar13 + 0x10 + lVar11 * 0x18);
        } while (iVar18 != -1);
      }
    }
    if (pFVar22 == (FName *)0x0) {
LAB_141e4fec3:
      bVar7 = true;
      pFVar22 = pFVar1;
    }
    else {
      iVar18 = ::FName::Compare(pFVar1,pFVar22);
      if (iVar18 == 0) {
        iVar18 = ::FName::Compare(pFVar1 + 1,pFVar22 + 1);
      }
      if (iVar18 < 0) goto LAB_141e4fec3;
    }
LAB_141e4feca:
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
  iStack_e0 = 0;
  if (pFVar22 == (FName *)0x0) {
    return 0;
  }
  iVar18 = *(int *)&(param_2->Elements).field_0x28;
  puVar19 = &(param_2->Elements).field_0x10;
  uStack_dc = 1;
  local_c8 = 0;
  iStack_cc = 0;
  if (iVar18 != 0) {
    puVar21 = *(uint **)&(param_2->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar19;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_141e4ff70;
      uVar16 = puVar21[lVar13 + 1];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_f0 = (int)lVar13;
    iStack_cc = local_c8 + -1 + local_f0;
    if (iVar18 < iStack_cc) {
      iStack_cc = iVar18;
    }
  }
LAB_141e4ff70:
  iStack_c4 = iStack_10c;
  iStack_c0 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  uVar16 = *(uint *)&(param_2->Elements).field_0x28;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  uStack_d0 = 0xffffffff;
  uVar10 = uVar16 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_10c;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = param_2;
  local_d8 = puVar19;
  local_88 = param_2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar19;
  if ((((int)uVar16 < 0) || (iVar18 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    iVar18 = (*pcVar6)();
    return iVar18;
  }
  uVar17 = *(uint *)&(param_2->Elements).field_0x28;
  if (uVar16 != uVar17) {
    puVar20 = *(undefined1 **)&(param_2->Elements).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar19;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar10 = uVar10 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_141e50070;
      uVar16 = *(uint *)(puVar20 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar10;
    if ((int)uVar17 < (int)uVar16) {
      uVar16 = uVar17;
    }
  }
LAB_141e50070:
  do {
    pTVar8 = local_88;
    if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
        (int)uStack_60) {
      `TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_130);
    }
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar19)) && (pTVar8 == param_2)
       ) {
      if (pFVar22 == (FName *)0x0) {
        return 0;
      }
      if (bVar7) {
        return -1;
      }
      return 1;
    }
    lVar13 = *(longlong *)&pTVar8->Elements;
    uVar3 = *(undefined8 *)(lVar13 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    pFVar1 = (FName *)(lVar13 + (longlong)TStack_80.CurrentBitIndex * 0x18);
    uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    FVar4 = *pFVar1;
    uVar17 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    uVar17 = uVar17 + FVar4.Number;
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar5 = (param_1->Hash).SecondaryData;
      FVar14 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar14 = FVar5;
      }
      iVar18 = *(int *)((longlong)FVar14 +
                       (ulonglong)
                       (param_1->HashSize - 1U &
                       (uVar17 * 0x40 + uVar10 + (int)((ulonglong)uVar3 >> 0x20) + -0x61c88647 +
                        (uVar17 >> 2) ^ uVar17)) * 4);
      if (iVar18 != -1) {
        lVar13 = *(longlong *)&param_1->Elements;
        do {
          lVar11 = (longlong)iVar18;
          if ((*(FName *)(lVar13 + lVar11 * 0x18) == *pFVar1) &&
             (*(FName *)(lVar13 + 8 + lVar11 * 0x18) == pFVar1[1])) {
            if (iVar18 != -1) goto LAB_141e5018a;
            break;
          }
          iVar18 = *(int *)(lVar13 + 0x10 + lVar11 * 0x18);
        } while (iVar18 != -1);
      }
    }
    if (pFVar22 == (FName *)0x0) {
LAB_141e50183:
      bVar7 = false;
      pFVar22 = pFVar1;
    }
    else {
      iVar18 = ::FName::Compare(pFVar1,pFVar22);
      if (iVar18 == 0) {
        iVar18 = ::FName::Compare(pFVar1 + 1,pFVar22 + 1);
      }
      if (iVar18 < 0) goto LAB_141e50183;
    }
LAB_141e5018a:
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// ConstructItems<FAssetBundleEntry,FAssetBundleEntry,int> @ 141e50200

void __cdecl
ConstructItems<FAssetBundleEntry,FAssetBundleEntry,int>
          (void *param_1,FAssetBundleEntry *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  FAssetBundleEntry *pFVar3;
  ForAnyElementType *pFVar4;
  TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *pTVar5;
  
  if (param_3 != 0) {
    pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
    pFVar3 = param_2;
    do {
      pTVar5 = &pFVar3->AssetPaths;
      *(undefined8 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)pTVar5) =
           *(undefined8 *)((longlong)(pTVar5 + -1) + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      iVar2 = pTVar5->ArrayNum;
      _Src = (pTVar5->AllocatorInstance).Data;
      *(int *)&pFVar4[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,pFVar4,iVar2,piVar1);
        memcpy(pFVar4->Data,_Src,(longlong)iVar2 << 4);
      }
      pFVar3 = (FAssetBundleEntry *)(pTVar5 + 1);
      pFVar4 = pFVar4 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FSoftObjectPath,FSoftObjectPath,int> @ 141e502d0

void __cdecl
ConstructItems<FSoftObjectPath,FSoftObjectPath,int>
          (void *param_1,FSoftObjectPath *param_2,int param_3)

{
  int *piVar1;
  FName *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  ForAnyElementType *pFVar5;
  FUtf8String *pFVar6;
  
  if (param_3 != 0) {
    pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pFVar6 = &param_2->SubPathString;
    do {
      FVar4 = (((FSoftObjectPath *)(pFVar6 + -1))->AssetPath).AssetName;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      pFVar2 = (FName *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)pFVar6);
      *pFVar2 = (((FSoftObjectPath *)(pFVar6 + -1))->AssetPath).PackageName;
      pFVar2[1] = FVar4;
      pFVar5->Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar6->Data).ArrayNum;
      _Src = (pFVar6->Data).AllocatorInstance.Data;
      *(int *)&pFVar5[1].Data = iVar3;
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,iVar3,0,pFVar5,iVar3,piVar1);
        memcpy(pFVar5->Data,_Src,(longlong)iVar3);
      }
      pFVar6 = pFVar6 + 2;
      pFVar5 = pFVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<TTuple<FName,TOptional<FString>_>,int> @ 141e503a0

void __cdecl
DestructItems<TTuple<FName,TOptional<FString>_>,int>
          (TTuple<FName,TOptional<FString>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((*(int *)((longlong)puVar1 + 0xc) != -1) && ((void *)*puVar1 != (void *)0x0)) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAssetBundleEntry,int> @ 141e503f0

void __cdecl DestructItems<FAssetBundleEntry,int>(FAssetBundleEntry *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AssetPaths).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FAssetBundleEntry *)(&param_1->AssetPaths + 1);
  }
  return;
}

// DestructItems<FSoftObjectPath,int> @ 141e50430

void __cdecl DestructItems<FSoftObjectPath,int>(FSoftObjectPath *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->SubPathString;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<UScriptStruct> @ 141e507e0

FString * __cdecl
GetFullNameForCastLogError<UScriptStruct>(FString *__return_storage_ptr__,UScriptStruct *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeHash<FSoftObjectPath,TSizedDefaultAllocator<32>_> @ 141e50810

uint __cdecl
GetTypeHash<FSoftObjectPath,TSizedDefaultAllocator<32>_>
          (TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar7 = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0x20;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSoftObjectPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar8) break;
    uVar2 = *(undefined8 *)(pFVar6 + 8);
    uVar4 = GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar3 = *(undefined8 *)pFVar6;
    uVar5 = GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
    uVar5 = uVar5 * 0x40 + uVar4 + (int)((ulonglong)uVar2 >> 0x20) + (uVar5 >> 2) + 0x9e3779b9 ^
            uVar5;
    if (1 < *(int *)(pFVar6 + 0x18)) {
      uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                        (*(int *)(pFVar6 + 0x18) + -1,*(uchar **)(pFVar6 + 0x10));
      uVar5 = uVar5 ^ uVar4 + uVar5 * 0x40 + -0x61c88647 + (uVar5 >> 2);
    }
    uVar7 = uVar7 ^ (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + uVar5;
    pFVar6 = pFVar6 + 0x20;
  }
  return uVar7;
}

// GetTypeHash<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> @ 141e50900

uint __cdecl
GetTypeHash<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>
          (TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  uVar8 = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FTopLevelAssetPath_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    uVar2 = *(undefined8 *)(pFVar6 + 8);
    uVar4 = GetTypeHash((FNameEntryId)(uint)uVar2);
    uVar3 = *(undefined8 *)pFVar6;
    uVar5 = GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar5 = uVar5 + (int)((ulonglong)uVar3 >> 0x20);
    uVar8 = uVar8 ^ (uVar8 >> 2) +
                    (uVar5 * 0x40 + -0x61c88647 + uVar4 + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar5 >> 2) ^ uVar5) + uVar8 * 0x40 + -0x61c88647;
    pFVar6 = pFVar6 + 0x10;
  }
  return uVar8;
}

// GetTypeHash<FName,TSizedDefaultAllocator<32>_> @ 141e509d0

uint __cdecl
GetTypeHash<FName,TSizedDefaultAllocator<32>_>(TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  uVar6 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar5;
    uVar4 = GetTypeHash((FNameEntryId)(uint)uVar3);
    uVar6 = uVar6 ^ (uVar6 >> 2) + 0x9e3779b9 + (int)((ulonglong)uVar3 >> 0x20) + uVar6 * 0x40 +
                    uVar4;
    pFVar5 = pFVar5 + 8;
  }
  return uVar6;
}

// GetTypeName<UScriptStruct> @ 141e50a60

FString * __cdecl GetTypeName<UScriptStruct>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_> @ 141e50aa0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *this;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_s_1 TVar6;
  undefined8 uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  FNameEntryId FVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  FElementCompareClass<FTopLevelAssetPathLexicalLess> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar12) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>_>
            (param_1,param_2,param_3,
             (FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>
              *)&local_res20);
  iVar17 = param_2 + -1;
  lVar18 = (longlong)iVar17;
  if (0 < iVar17) {
    pTVar15 = param_1 + lVar18;
    do {
      uVar5 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8);
      uVar2 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
      TVar6 = param_1->_s_1;
      uVar7 = *(undefined8 *)((param_1->ElementData).Pad + 8);
      param_1->_s_1 = pTVar15->_s_1;
      *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar5;
      *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
           *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10);
      pTVar15->_s_1 = TVar6;
      *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8) = uVar7;
      *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10) = uVar2;
      iVar14 = 0;
      if (1 < iVar17) {
        do {
          iVar4 = iVar14 * 2;
          iVar16 = iVar4 + 1;
          if (iVar4 + 2 < iVar17) {
            iVar13 = ::FName::Compare((FName *)&param_1[iVar4 + 2].ElementData,
                                      (FName *)&param_1[iVar16].ElementData);
            if (iVar13 == 0) {
              iVar13 = ::FName::Compare((FName *)((FNameEntryId *)param_1[iVar4 + 2].ElementData.Pad
                                                 + 2),
                                        (FName *)((FNameEntryId *)param_1[iVar16].ElementData.Pad +
                                                 2));
            }
            if (iVar13 < 0) {
              iVar16 = iVar4;
            }
            iVar16 = iVar16 + 1;
          }
          pTVar1 = param_1 + iVar16;
          this = param_1 + iVar14;
          iVar14 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar1->ElementData);
          if (iVar14 == 0) {
            iVar14 = ::FName::Compare((FName *)((FNameEntryId *)(this->ElementData).Pad + 2),
                                      (FName *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2));
          }
          if (-1 < iVar14) break;
          FVar8.Value = *(int *)pTVar1;
          uVar9 = *(int *)((longlong)pTVar1 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
          uVar2 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 4);
          FVar10.Value = *(int *)this;
          uVar11 = *(int *)((longlong)this + 4);
          uVar7 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2);
          *(int *)this = FVar8.Value;
          *(uint *)((longlong)this + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2) = uVar5;
          *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 4);
          *(int *)pTVar1 = FVar10.Value;
          *(uint *)((longlong)pTVar1 + 4) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar7;
          *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 4) = uVar2;
          iVar14 = iVar16;
        } while (iVar16 * 2 + 1 < iVar17);
      }
      pTVar15 = pTVar15 + -1;
      iVar17 = iVar17 + -1;
      lVar18 = lVar18 + -1;
    } while (0 < lVar18);
  }
  return;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 141e50c70

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  longlong lVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar10 = iVar8 * 2 + 1;
  iVar11 = iVar10;
  iVar13 = iVar8;
  do {
    while (param_2 <= iVar10) {
LAB_141e50da6:
      if (iVar13 == 0) {
        iVar10 = param_2 + -1;
        lVar16 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar17 = param_1 + lVar16;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8);
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar17->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            pTVar17->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar17->ElementData).Pad + 0x18) = uVar6;
            iVar11 = 0;
            if (1 < iVar10) {
              do {
                iVar8 = iVar11 * 2;
                iVar13 = iVar8 + 1;
                if (iVar8 + 2 < iVar10) {
                  iVar12 = ::FName::Compare((FName *)&param_1[iVar8 + 2].ElementData,
                                            (FName *)&param_1[iVar13].ElementData);
                  if (iVar12 < 0) {
                    iVar13 = iVar8;
                  }
                  iVar13 = iVar13 + 1;
                }
                pTVar15 = param_1 + iVar13;
                pTVar14 = param_1 + iVar11;
                iVar11 = ::FName::Compare((FName *)&pTVar14->ElementData,
                                          (FName *)&pTVar15->ElementData);
                if (-1 < iVar11) break;
                uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
                TVar3 = pTVar14->_s_1;
                uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
                pTVar14->_s_1 = pTVar15->_s_1;
                *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
                *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
                *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar2;
                pTVar15->_s_1 = TVar3;
                *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar6;
                iVar11 = iVar13;
              } while (iVar13 * 2 + 1 < iVar10);
            }
            iVar10 = iVar10 + -1;
            lVar16 = lVar16 + -1;
            pTVar17 = pTVar17 + -1;
          } while (0 < lVar16);
        }
        return;
      }
      iVar8 = iVar13 + -1;
      iVar10 = iVar11 + -2;
      iVar11 = iVar10;
      iVar13 = iVar8;
    }
    iVar10 = iVar8 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      iVar9 = ::FName::Compare((FName *)&param_1[iVar10 + 2].ElementData,
                               (FName *)&param_1[iVar12].ElementData);
      if (iVar9 < 0) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar14 = param_1 + iVar12;
    pTVar17 = param_1 + iVar8;
    iVar10 = ::FName::Compare((FName *)&pTVar17->ElementData,(FName *)&pTVar14->ElementData);
    if (-1 < iVar10) goto LAB_141e50da6;
    uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    iVar10 = iVar12 * 2 + 1;
    TVar3 = pTVar17->_s_1;
    uVar4 = *(undefined8 *)((pTVar17->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((pTVar17->ElementData).Pad + 0x18);
    pTVar17->_s_1 = pTVar14->_s_1;
    *(undefined8 *)((pTVar17->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
    *(undefined8 *)((pTVar17->ElementData).Pad + 0x18) = uVar2;
    pTVar14->_s_1 = TVar3;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
    iVar8 = iVar12;
  } while( true );
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>_> @ 141e50ed0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>
          param_4)

{
  code *pcVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar11 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_141e5101d:
      if (iVar11 == 0) {
        iVar9 = param_2 + -1;
        lVar12 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar13 = param_1 + lVar12;
          do {
            uVar3 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
            TVar2 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar13->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar3;
            uVar3 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar3;
            pTVar13->_s_1 = TVar2;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar6;
            iVar14 = 0;
            if (1 < iVar9) {
              do {
                iVar11 = iVar14 * 2;
                iVar8 = iVar11 + 1;
                if (iVar11 + 2 < iVar9) {
                  bVar7 = FOptionalFStringIgnoreCaseLess::operator()
                                    (((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                     Predicate,
                                     (TOptional<FString> *)
                                     ((longlong)(iVar11 + 2) * 0x20 + 8 + (longlong)param_1),
                                     (TOptional<FString> *)
                                     ((longlong)iVar8 * 0x20 + 8 + (longlong)param_1));
                  if (bVar7) {
                    iVar8 = iVar11;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar15 = param_1 + iVar8;
                pTVar16 = param_1 + iVar14;
                bVar7 = FOptionalFStringIgnoreCaseLess::operator()
                                  (((((param_4.Predicate)->Predicate).Predicate)->Predicate).
                                   Predicate,
                                   (TOptional<FString> *)((longlong)(pTVar16->ElementData).Pad + 8),
                                   (TOptional<FString> *)((pTVar15->ElementData).Pad + 8));
                if (!bVar7) break;
                TVar2 = pTVar16->_s_1;
                uVar3 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
                uVar4 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
                uVar5 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
                uVar6 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
                pTVar16->_s_1 = pTVar15->_s_1;
                *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar6;
                uVar6 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar6;
                pTVar15->_s_1 = TVar2;
                *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar3;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar4;
                *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar5;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar12 = lVar12 + -1;
            pTVar13 = pTVar13 + -1;
          } while (0 < lVar12);
        }
        return;
      }
      iVar8 = iVar11 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar11 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      bVar7 = FOptionalFStringIgnoreCaseLess::operator()
                        (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                         (TOptional<FString> *)
                         ((longlong)(iVar9 + 2) * 0x20 + 8 + (longlong)param_1),
                         (TOptional<FString> *)((longlong)iVar10 * 0x20 + 8 + (longlong)param_1));
      if (bVar7) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar13 = param_1 + iVar10;
    pTVar15 = param_1 + iVar8;
    bVar7 = FOptionalFStringIgnoreCaseLess::operator()
                      (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                       (TOptional<FString> *)((longlong)(pTVar15->ElementData).Pad + 8),
                       (TOptional<FString> *)((pTVar13->ElementData).Pad + 8));
    if (!bVar7) goto LAB_141e5101d;
    TVar2 = pTVar15->_s_1;
    uVar3 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8);
    iVar9 = iVar10 * 2 + 1;
    uVar4 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10);
    uVar5 = *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18);
    uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
    pTVar15->_s_1 = pTVar13->_s_1;
    *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 8) = uVar6;
    uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar15->ElementData).Pad + 0x18) = uVar6;
    pTVar13->_s_1 = TVar2;
    *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar3;
    *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar4;
    *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar5;
    iVar8 = iVar10;
  } while( true );
}

// HeapSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,`Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'::__l2::<lambda_1>_> @ 141e51160

void __cdecl
AlgoImpl::
HeapSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,_Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>_::__l2::<lambda_1>_>
          (TTuple<FName,TOptional<FString>_> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> *param_4)

{
  TTuple<FName,TOptional<FString>_> *pTVar1;
  TTuple<FName,TOptional<FString>_> *pTVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  TTuple<FName,TOptional<FString>_> *pTVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar10 = iVar9 * 2 + 1;
  iVar15 = iVar10;
  iVar13 = iVar9;
  do {
    while (param_2 <= iVar10) {
LAB_141e512a5:
      if (iVar13 == 0) {
        iVar10 = param_2 + -1;
        lVar14 = (longlong)iVar10;
        if (0 < iVar10) {
          pTVar11 = param_1 + lVar14;
          do {
            uVar5 = *(undefined8 *)&pTVar11->field_0x8;
            uVar3 = *(undefined8 *)&param_1->field_0x10;
            uVar6 = *(undefined8 *)param_1;
            uVar7 = *(undefined8 *)&param_1->field_0x8;
            *(undefined8 *)param_1 = *(undefined8 *)pTVar11;
            *(undefined8 *)&param_1->field_0x8 = uVar5;
            *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar11->field_0x10;
            *(undefined8 *)pTVar11 = uVar6;
            *(undefined8 *)&pTVar11->field_0x8 = uVar7;
            *(undefined8 *)&pTVar11->field_0x10 = uVar3;
            iVar15 = 0;
            if (1 < iVar10) {
              do {
                iVar9 = iVar15 * 2;
                iVar13 = iVar9 + 1;
                if (iVar9 + 2 < iVar10) {
                  bVar8 = `Algo::
                          CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'
                          ::__l2::<lambda_1>::operator()
                                    (param_4,param_1 + (iVar9 + 2),param_1 + iVar13);
                  if (bVar8) {
                    iVar13 = iVar9;
                  }
                  iVar13 = iVar13 + 1;
                }
                pTVar1 = param_1 + iVar13;
                pTVar2 = param_1 + iVar15;
                bVar8 = `Algo::
                        CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'
                        ::__l2::<lambda_1>::operator()(param_4,pTVar2,pTVar1);
                if (!bVar8) break;
                uVar5 = *(undefined8 *)&pTVar1->field_0x8;
                uVar3 = *(undefined8 *)&pTVar2->field_0x10;
                uVar6 = *(undefined8 *)pTVar2;
                uVar7 = *(undefined8 *)&pTVar2->field_0x8;
                *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
                *(undefined8 *)&pTVar2->field_0x8 = uVar5;
                *(undefined8 *)&pTVar2->field_0x10 = *(undefined8 *)&pTVar1->field_0x10;
                *(undefined8 *)pTVar1 = uVar6;
                *(undefined8 *)&pTVar1->field_0x8 = uVar7;
                *(undefined8 *)&pTVar1->field_0x10 = uVar3;
                iVar15 = iVar13;
              } while (iVar13 * 2 + 1 < iVar10);
            }
            pTVar11 = pTVar11 + -1;
            iVar10 = iVar10 + -1;
            lVar14 = lVar14 + -1;
          } while (0 < lVar14);
        }
        return;
      }
      iVar9 = iVar13 + -1;
      iVar10 = iVar15 + -2;
      iVar15 = iVar10;
      iVar13 = iVar9;
    }
    iVar10 = iVar9 * 2;
    iVar12 = iVar10 + 1;
    if (iVar10 + 2 < param_2) {
      bVar8 = `Algo::
              CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'
              ::__l2::<lambda_1>::operator()(param_4,param_1 + (iVar10 + 2),param_1 + iVar12);
      if (bVar8) {
        iVar12 = iVar10;
      }
      iVar12 = iVar12 + 1;
    }
    pTVar11 = param_1 + iVar12;
    pTVar1 = param_1 + iVar9;
    bVar8 = `Algo::
            CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'
            ::__l2::<lambda_1>::operator()(param_4,pTVar1,pTVar11);
    if (!bVar8) goto LAB_141e512a5;
    uVar5 = *(undefined8 *)&pTVar11->field_0x8;
    iVar10 = iVar12 * 2 + 1;
    uVar3 = *(undefined8 *)&pTVar1->field_0x10;
    uVar6 = *(undefined8 *)pTVar1;
    uVar7 = *(undefined8 *)&pTVar1->field_0x8;
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar11;
    *(undefined8 *)&pTVar1->field_0x8 = uVar5;
    *(undefined8 *)&pTVar1->field_0x10 = *(undefined8 *)&pTVar11->field_0x10;
    *(undefined8 *)pTVar11 = uVar6;
    *(undefined8 *)&pTVar11->field_0x8 = uVar7;
    *(undefined8 *)&pTVar11->field_0x10 = uVar3;
    iVar9 = iVar12;
  } while( true );
}

// HeapSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess> @ 141e513f0

void __cdecl
AlgoImpl::HeapSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess>
          (FSoftObjectPath *param_1,int param_2,FIdentityFunctor param_3,
          FSoftObjectPathLexicalLess param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  FSoftObjectPath *pFVar14;
  FSoftObjectPath *pFVar15;
  int iVar16;
  FSoftObjectPath *pFVar17;
  int iVar18;
  FSoftObjectPathLexicalLess local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<FSoftObjectPath,int,FIdentityFunctor,TReversePredicate<FSoftObjectPathLexicalLess>_>
            (param_1,param_2,param_3,local_res20);
  iVar16 = param_2 + -1;
  lVar10 = (longlong)iVar16;
  if (0 < iVar16) {
    pFVar17 = param_1 + lVar10;
    do {
      FVar2 = (pFVar17->AssetPath).AssetName;
      iVar18 = 0;
      FVar3 = (param_1->AssetPath).PackageName;
      FVar4 = (param_1->AssetPath).AssetName;
      pFVar5 = (param_1->SubPathString).Data.AllocatorInstance.Data;
      iVar8 = (param_1->SubPathString).Data.ArrayNum;
      iVar6 = (param_1->SubPathString).Data.ArrayMax;
      (param_1->AssetPath).PackageName = (pFVar17->AssetPath).PackageName;
      (param_1->AssetPath).AssetName = FVar2;
      iVar13 = (pFVar17->SubPathString).Data.ArrayNum;
      iVar9 = (pFVar17->SubPathString).Data.ArrayMax;
      (param_1->SubPathString).Data.AllocatorInstance.Data =
           (pFVar17->SubPathString).Data.AllocatorInstance.Data;
      (param_1->SubPathString).Data.ArrayNum = iVar13;
      (param_1->SubPathString).Data.ArrayMax = iVar9;
      (pFVar17->AssetPath).PackageName = FVar3;
      (pFVar17->AssetPath).AssetName = FVar4;
      (pFVar17->SubPathString).Data.AllocatorInstance.Data = pFVar5;
      (pFVar17->SubPathString).Data.ArrayNum = iVar8;
      (pFVar17->SubPathString).Data.ArrayMax = iVar6;
      if (1 < iVar16) {
        do {
          iVar9 = iVar18 * 2;
          iVar13 = iVar9 + 1;
          if (iVar9 + 2 < iVar16) {
            pFVar14 = param_1 + (iVar9 + 2);
            pFVar15 = param_1 + iVar13;
            iVar8 = ::FName::Compare((FName *)pFVar14,(FName *)pFVar15);
            if ((iVar8 == 0) &&
               (iVar8 = ::FName::Compare(&(pFVar14->AssetPath).AssetName,
                                         &(pFVar15->AssetPath).AssetName), iVar8 == 0)) {
              if ((pFVar15->SubPathString).Data.ArrayNum == 0) {
                pcVar12 = "";
              }
              else {
                pcVar12 = (char *)(pFVar15->SubPathString).Data.AllocatorInstance.Data;
              }
              if ((pFVar14->SubPathString).Data.ArrayNum == 0) {
                pcVar11 = "";
              }
              else {
                pcVar11 = (char *)(pFVar14->SubPathString).Data.AllocatorInstance.Data;
              }
              iVar8 = strcmp(pcVar11,pcVar12);
            }
            if (iVar8 < 0) {
              iVar13 = iVar9;
            }
            iVar13 = iVar13 + 1;
          }
          pFVar15 = param_1 + iVar18;
          pFVar14 = param_1 + iVar13;
          iVar9 = ::FName::Compare((FName *)pFVar15,(FName *)pFVar14);
          if ((iVar9 == 0) &&
             (iVar9 = ::FName::Compare(&(pFVar15->AssetPath).AssetName,
                                       &(pFVar14->AssetPath).AssetName), iVar9 == 0)) {
            if ((pFVar14->SubPathString).Data.ArrayNum == 0) {
              pcVar12 = "";
            }
            else {
              pcVar12 = (char *)(pFVar14->SubPathString).Data.AllocatorInstance.Data;
            }
            if ((pFVar15->SubPathString).Data.ArrayNum == 0) {
              pcVar11 = "";
            }
            else {
              pcVar11 = (char *)(pFVar15->SubPathString).Data.AllocatorInstance.Data;
            }
            iVar9 = strcmp(pcVar11,pcVar12);
          }
          if (-1 < iVar9) break;
          FVar2 = (pFVar14->AssetPath).AssetName;
          FVar3 = (pFVar15->AssetPath).PackageName;
          FVar4 = (pFVar15->AssetPath).AssetName;
          pFVar5 = (pFVar15->SubPathString).Data.AllocatorInstance.Data;
          iVar6 = (pFVar15->SubPathString).Data.ArrayNum;
          iVar18 = (pFVar15->SubPathString).Data.ArrayMax;
          (pFVar15->AssetPath).PackageName = (pFVar14->AssetPath).PackageName;
          (pFVar15->AssetPath).AssetName = FVar2;
          iVar9 = (pFVar14->SubPathString).Data.ArrayNum;
          iVar8 = (pFVar14->SubPathString).Data.ArrayMax;
          (pFVar15->SubPathString).Data.AllocatorInstance.Data =
               (pFVar14->SubPathString).Data.AllocatorInstance.Data;
          (pFVar15->SubPathString).Data.ArrayNum = iVar9;
          (pFVar15->SubPathString).Data.ArrayMax = iVar8;
          (pFVar14->AssetPath).PackageName = FVar3;
          (pFVar14->AssetPath).AssetName = FVar4;
          (pFVar14->SubPathString).Data.AllocatorInstance.Data = pFVar5;
          (pFVar14->SubPathString).Data.ArrayNum = iVar6;
          (pFVar14->SubPathString).Data.ArrayMax = iVar18;
          iVar18 = iVar13;
        } while (iVar13 * 2 + 1 < iVar16);
      }
      lVar10 = lVar10 + -1;
      iVar16 = iVar16 + -1;
      pFVar17 = pFVar17 + -1;
    } while (0 < lVar10);
  }
  return;
}

// HeapSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess> @ 141e51620

void __cdecl
AlgoImpl::HeapSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess>
          (FTopLevelAssetPath *param_1,int param_2,FIdentityFunctor param_3,
          FTopLevelAssetPathLexicalLess param_4)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  FTopLevelAssetPath *pFVar12;
  FTopLevelAssetPath *pFVar13;
  int iVar14;
  FTopLevelAssetPath *pFVar15;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar9 = iVar8;
  iVar14 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_141e51772:
      if (iVar14 == 0) {
        iVar8 = param_2 + -1;
        lVar10 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar15 = param_1 + lVar10;
          do {
            FVar2 = pFVar15->AssetName;
            FVar3 = param_1->PackageName;
            FVar4 = param_1->AssetName;
            param_1->PackageName = pFVar15->PackageName;
            param_1->AssetName = FVar2;
            pFVar15->PackageName = FVar3;
            pFVar15->AssetName = FVar4;
            iVar9 = 0;
            if (1 < iVar8) {
              do {
                iVar14 = iVar9 * 2;
                iVar6 = iVar14 + 1;
                if (iVar14 + 2 < iVar8) {
                  iVar11 = ::FName::Compare(&param_1[iVar14 + 2].PackageName,
                                            &param_1[iVar6].PackageName);
                  if (iVar11 == 0) {
                    iVar11 = ::FName::Compare(&param_1[iVar14 + 2].AssetName,
                                              &param_1[iVar6].AssetName);
                  }
                  if (iVar11 < 0) {
                    iVar6 = iVar14;
                  }
                  iVar6 = iVar6 + 1;
                }
                pFVar12 = param_1 + iVar9;
                pFVar13 = param_1 + iVar6;
                iVar9 = ::FName::Compare(&pFVar12->PackageName,&pFVar13->PackageName);
                if (iVar9 == 0) {
                  iVar9 = ::FName::Compare(&pFVar12->AssetName,&pFVar13->AssetName);
                }
                if (-1 < iVar9) break;
                FVar2 = pFVar13->AssetName;
                FVar3 = pFVar12->PackageName;
                FVar4 = pFVar12->AssetName;
                pFVar12->PackageName = pFVar13->PackageName;
                pFVar12->AssetName = FVar2;
                pFVar13->PackageName = FVar3;
                pFVar13->AssetName = FVar4;
                iVar9 = iVar6;
              } while (iVar6 * 2 + 1 < iVar8);
            }
            lVar10 = lVar10 + -1;
            iVar8 = iVar8 + -1;
            pFVar15 = pFVar15 + -1;
          } while (0 < lVar10);
        }
        return;
      }
      iVar6 = iVar14 + -1;
      iVar8 = iVar9 + -2;
      iVar9 = iVar8;
      iVar14 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar11 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = ::FName::Compare(&param_1[iVar8 + 2].PackageName,&param_1[iVar11].PackageName);
      if (iVar7 == 0) {
        iVar7 = ::FName::Compare(&param_1[iVar8 + 2].AssetName,&param_1[iVar11].AssetName);
      }
      if (iVar7 < 0) {
        iVar11 = iVar8;
      }
      iVar11 = iVar11 + 1;
    }
    pFVar15 = param_1 + iVar6;
    pFVar12 = param_1 + iVar11;
    iVar8 = ::FName::Compare(&pFVar15->PackageName,&pFVar12->PackageName);
    if (iVar8 == 0) {
      iVar8 = ::FName::Compare(&pFVar15->AssetName,&pFVar12->AssetName);
    }
    if (-1 < iVar8) goto LAB_141e51772;
    FVar2 = pFVar12->AssetName;
    iVar8 = iVar11 * 2 + 1;
    FVar3 = pFVar15->PackageName;
    FVar4 = pFVar15->AssetName;
    pFVar15->PackageName = pFVar12->PackageName;
    pFVar15->AssetName = FVar2;
    pFVar12->PackageName = FVar3;
    pFVar12->AssetName = FVar4;
    iVar6 = iVar11;
  } while( true );
}

// HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>_> @ 141e518b0

void __cdecl
AlgoImpl::
HeapifyInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TReversePredicate<TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          TReversePredicate<TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *this;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  FNameEntryId FVar5;
  uint uVar6;
  undefined8 uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  if (param_2 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar12 = (param_2 + -2) / 2;
  iVar14 = iVar12 * 2 + 1;
  iVar4 = iVar14;
  iVar16 = iVar12;
  do {
    while (param_2 <= iVar14) {
LAB_141e519f8:
      if (iVar16 == 0) {
        return;
      }
      iVar12 = iVar16 + -1;
      iVar14 = iVar4 + -2;
      iVar4 = iVar14;
      iVar16 = iVar12;
    }
    iVar14 = iVar12 * 2;
    iVar15 = iVar14 + 1;
    if (iVar14 + 2 < param_2) {
      iVar13 = ::FName::Compare((FName *)&param_1[iVar14 + 2].ElementData,
                                (FName *)&param_1[iVar15].ElementData);
      if (iVar13 == 0) {
        iVar13 = ::FName::Compare((FName *)((FNameEntryId *)param_1[iVar14 + 2].ElementData.Pad + 2)
                                  ,(FName *)((FNameEntryId *)param_1[iVar15].ElementData.Pad + 2));
      }
      if (iVar13 < 0) {
        iVar15 = iVar14;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar1 = param_1 + iVar15;
    this = param_1 + iVar12;
    iVar14 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar1->ElementData);
    if (iVar14 == 0) {
      iVar14 = ::FName::Compare((FName *)((FNameEntryId *)(this->ElementData).Pad + 2),
                                (FName *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2));
    }
    if (-1 < iVar14) goto LAB_141e519f8;
    FVar5.Value = *(int *)pTVar1;
    uVar6 = *(int *)((longlong)pTVar1 + 4);
    uVar7 = *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2);
    iVar14 = iVar15 * 2 + 1;
    uVar2 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 4);
    FVar8.Value = *(int *)this;
    uVar9 = *(int *)((longlong)this + 4);
    uVar10 = *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2);
    *(int *)this = FVar5.Value;
    *(uint *)((longlong)this + 4) = uVar6;
    *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 2) = uVar7;
    *(undefined8 *)((FNameEntryId *)(this->ElementData).Pad + 4) =
         *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 4);
    *(int *)pTVar1 = FVar8.Value;
    *(uint *)((longlong)pTVar1 + 4) = uVar9;
    *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 2) = uVar10;
    *(undefined8 *)((FNameEntryId *)(pTVar1->ElementData).Pad + 4) = uVar2;
    iVar12 = iVar15;
  } while( true );
}

// HeapifyInternal<FSoftObjectPath,int,FIdentityFunctor,TReversePredicate<FSoftObjectPathLexicalLess>_> @ 141e51a40

void __cdecl
AlgoImpl::
HeapifyInternal<FSoftObjectPath,int,FIdentityFunctor,TReversePredicate<FSoftObjectPathLexicalLess>_>
          (FSoftObjectPath *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<FSoftObjectPathLexicalLess> param_4)

{
  code *pcVar1;
  int iVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  FSoftObjectPath *pFVar16;
  FSoftObjectPath *pFVar17;
  int iVar18;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar2 = iVar12;
  iVar18 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_141e51bdf:
      if (iVar18 == 0) {
        return;
      }
      iVar10 = iVar18 + -1;
      iVar12 = iVar2 + -2;
      iVar2 = iVar12;
      iVar18 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar15 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      pFVar16 = param_1 + (iVar12 + 2);
      pFVar17 = param_1 + iVar15;
      iVar11 = ::FName::Compare((FName *)pFVar16,(FName *)pFVar17);
      if ((iVar11 == 0) &&
         (iVar11 = ::FName::Compare(&(pFVar16->AssetPath).AssetName,&(pFVar17->AssetPath).AssetName)
         , iVar11 == 0)) {
        if ((pFVar17->SubPathString).Data.ArrayNum == 0) {
          pcVar14 = "";
        }
        else {
          pcVar14 = (char *)(pFVar17->SubPathString).Data.AllocatorInstance.Data;
        }
        if ((pFVar16->SubPathString).Data.ArrayNum == 0) {
          pcVar13 = "";
        }
        else {
          pcVar13 = (char *)(pFVar16->SubPathString).Data.AllocatorInstance.Data;
        }
        iVar11 = strcmp(pcVar13,pcVar14);
      }
      if (iVar11 < 0) {
        iVar15 = iVar12;
      }
      iVar15 = iVar15 + 1;
    }
    pFVar17 = param_1 + iVar10;
    pFVar16 = param_1 + iVar15;
    iVar12 = ::FName::Compare((FName *)pFVar17,(FName *)pFVar16);
    if ((iVar12 == 0) &&
       (iVar12 = ::FName::Compare(&(pFVar17->AssetPath).AssetName,&(pFVar16->AssetPath).AssetName),
       iVar12 == 0)) {
      if ((pFVar16->SubPathString).Data.ArrayNum == 0) {
        pcVar14 = "";
      }
      else {
        pcVar14 = (char *)(pFVar16->SubPathString).Data.AllocatorInstance.Data;
      }
      if ((pFVar17->SubPathString).Data.ArrayNum == 0) {
        pcVar13 = "";
      }
      else {
        pcVar13 = (char *)(pFVar17->SubPathString).Data.AllocatorInstance.Data;
      }
      iVar12 = strcmp(pcVar13,pcVar14);
    }
    if (-1 < iVar12) goto LAB_141e51bdf;
    FVar3 = (pFVar16->AssetPath).AssetName;
    iVar12 = iVar15 * 2 + 1;
    FVar4 = (pFVar17->AssetPath).PackageName;
    FVar5 = (pFVar17->AssetPath).AssetName;
    pFVar6 = (pFVar17->SubPathString).Data.AllocatorInstance.Data;
    iVar7 = (pFVar17->SubPathString).Data.ArrayNum;
    iVar8 = (pFVar17->SubPathString).Data.ArrayMax;
    (pFVar17->AssetPath).PackageName = (pFVar16->AssetPath).PackageName;
    (pFVar17->AssetPath).AssetName = FVar3;
    iVar10 = (pFVar16->SubPathString).Data.ArrayNum;
    iVar11 = (pFVar16->SubPathString).Data.ArrayMax;
    (pFVar17->SubPathString).Data.AllocatorInstance.Data =
         (pFVar16->SubPathString).Data.AllocatorInstance.Data;
    (pFVar17->SubPathString).Data.ArrayNum = iVar10;
    (pFVar17->SubPathString).Data.ArrayMax = iVar11;
    (pFVar16->AssetPath).PackageName = FVar4;
    (pFVar16->AssetPath).AssetName = FVar5;
    (pFVar16->SubPathString).Data.AllocatorInstance.Data = pFVar6;
    (pFVar16->SubPathString).Data.ArrayNum = iVar7;
    (pFVar16->SubPathString).Data.ArrayMax = iVar8;
    iVar10 = iVar15;
  } while( true );
}

// InternalConstructor<UArrayProperty> @ 141e51c20

void __cdecl InternalConstructor<UArrayProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UArrayProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UBoolProperty> @ 141e51c60

void __cdecl InternalConstructor<UBoolProperty>(FObjectInitializer *param_1)

{
  if ((UBoolProperty *)param_1->Obj != (UBoolProperty *)0x0) {
    UBoolProperty::UBoolProperty((UBoolProperty *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UByteProperty> @ 141e51c80

void __cdecl InternalConstructor<UByteProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UByteProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UClassProperty> @ 141e51cc0

void __cdecl InternalConstructor<UClassProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UClassProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDelegateProperty> @ 141e51d00

void __cdecl InternalConstructor<UDelegateProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UDelegateProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UDerrivedClass> @ 141e51d40

void __cdecl InternalConstructor<UDerrivedClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UDerrivedClass::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UDerrivedClass::_vftable__for__FTestBaseClass__;
    *(undefined ***)&this[1].field_0x8 = &___7UDerrivedClass__6B_;
  }
  return;
}

// InternalConstructor<UDoubleProperty> @ 141e51d90

void __cdecl InternalConstructor<UDoubleProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UDoubleProperty__6B_;
  }
  return;
}

// InternalConstructor<UEnumProperty> @ 141e51dc0

void __cdecl InternalConstructor<UEnumProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UEnumProperty__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UFloatProperty> @ 141e51e00

void __cdecl InternalConstructor<UFloatProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UFloatProperty__6B_;
  }
  return;
}

// InternalConstructor<UGCBarrier> @ 141e51e30

void __cdecl InternalConstructor<UGCBarrier>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UGCBarrier__6B_;
  }
  return;
}

// InternalConstructor<UGCObjectReferencer> @ 141e51e60

void __cdecl InternalConstructor<UGCObjectReferencer>(FObjectInitializer *param_1)

{
  if ((UGCObjectReferencer *)param_1->Obj != (UGCObjectReferencer *)0x0) {
    UGCObjectReferencer::UGCObjectReferencer((UGCObjectReferencer *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UInt16Property> @ 141e51e80

void __cdecl InternalConstructor<UInt16Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UInt16Property__6B_;
  }
  return;
}

// InternalConstructor<UInt64Property> @ 141e51eb0

void __cdecl InternalConstructor<UInt64Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UInt64Property__6B_;
  }
  return;
}

// InternalConstructor<UInt8Property> @ 141e51ee0

void __cdecl InternalConstructor<UInt8Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UInt8Property__6B_;
  }
  return;
}

// InternalConstructor<UIntProperty> @ 141e51f10

void __cdecl InternalConstructor<UIntProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UIntProperty__6B_;
  }
  return;
}

// InternalConstructor<UInterfaceProperty> @ 141e51f40

void __cdecl InternalConstructor<UInterfaceProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UInterfaceProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<ULazyObjectProperty> @ 141e51f80

void __cdecl InternalConstructor<ULazyObjectProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ULazyObjectProperty__6B_;
  }
  return;
}

// InternalConstructor<UMapProperty> @ 141e51fc0

void __cdecl InternalConstructor<UMapProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UMapProperty__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMiddleClass> @ 141e52000

void __cdecl InternalConstructor<UMiddleClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &UMiddleClass::_vftable__for__UObject__;
    *(undefined ***)(this + 1) = &UMiddleClass::_vftable__for__FTestBaseClass__;
  }
  return;
}

// InternalConstructor<UMulticastDelegateProperty> @ 141e52040

void __cdecl InternalConstructor<UMulticastDelegateProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UMulticastDelegateProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMulticastDelegatePropertyWrapper> @ 141e52080

void __cdecl InternalConstructor<UMulticastDelegatePropertyWrapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMulticastDelegatePropertyWrapper__6B_;
  }
  return;
}

// InternalConstructor<UMulticastInlineDelegateProperty> @ 141e520b0

void __cdecl InternalConstructor<UMulticastInlineDelegateProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMulticastInlineDelegateProperty__6B_;
  }
  return;
}

// InternalConstructor<UMulticastInlineDelegatePropertyWrapper> @ 141e520f0

void __cdecl
InternalConstructor<UMulticastInlineDelegatePropertyWrapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UMulticastInlineDelegatePropertyWrapper__6B_;
  }
  return;
}

// InternalConstructor<UMulticastSparseDelegateProperty> @ 141e52120

void __cdecl InternalConstructor<UMulticastSparseDelegateProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMulticastSparseDelegateProperty__6B_;
  }
  return;
}

// InternalConstructor<UNameProperty> @ 141e52160

void __cdecl InternalConstructor<UNameProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UNameProperty__6B_;
  }
  return;
}

// InternalConstructor<UNumericProperty> @ 141e52190

void __cdecl InternalConstructor<UNumericProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UNumericProperty__6B_;
  }
  return;
}

// InternalConstructor<UObject> @ 141e521c0

void __cdecl InternalConstructor<UObject>(FObjectInitializer *param_1)

{
  if (param_1->Obj != (UObject *)0x0) {
    UObject::UObject(param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UObjectProperty> @ 141e521e0

void __cdecl InternalConstructor<UObjectProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UObjectProperty__6B_;
  }
  return;
}

// InternalConstructor<UObjectPropertyBase> @ 141e52220

void __cdecl InternalConstructor<UObjectPropertyBase>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UObjectPropertyBase__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UObjectPtrAbstractDerivedTestClass> @ 141e52260

void __cdecl InternalConstructor<UObjectPtrAbstractDerivedTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrAbstractDerivedTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrAbstractTestClass> @ 141e52290

void __cdecl InternalConstructor<UObjectPtrAbstractTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrAbstractTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrDerrivedTestClass> @ 141e522c0

void __cdecl InternalConstructor<UObjectPtrDerrivedTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrDerrivedTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrNotLazyTestClass> @ 141e522f0

void __cdecl InternalConstructor<UObjectPtrNotLazyTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrNotLazyTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrStressTestClass> @ 141e52320

void __cdecl InternalConstructor<UObjectPtrStressTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrStressTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrTestClass> @ 141e52350

void __cdecl InternalConstructor<UObjectPtrTestClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrTestClass__6B_;
  }
  return;
}

// InternalConstructor<UObjectPtrTestClassWithRef> @ 141e52380

void __cdecl InternalConstructor<UObjectPtrTestClassWithRef>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectPtrTestClassWithRef__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UObjectWithClassProperty> @ 141e523d0

void __cdecl InternalConstructor<UObjectWithClassProperty>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectWithClassProperty__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UObjectWithRawProperty> @ 141e52410

void __cdecl InternalConstructor<UObjectWithRawProperty>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectWithRawProperty__6B_;
  }
  return;
}

// InternalConstructor<UOptionalPropertyTestObject> @ 141e52440

void __cdecl InternalConstructor<UOptionalPropertyTestObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOptionalPropertyTestObject__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x8 = 0;
    *(undefined4 *)&this[1].field_0xc = 0xffffffff;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined4 *)&this[1].field_0x18 = 0;
    *(undefined4 *)&this[1].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[1].field_0x24 = 0;
    this[2].field_0x4 = 0;
  }
  return;
}

// InternalConstructor<UProperty> @ 141e524a0

void __cdecl InternalConstructor<UProperty>(FObjectInitializer *param_1)

{
  if ((UProperty *)param_1->Obj != (UProperty *)0x0) {
    UProperty::UProperty((UProperty *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UPropertyWrapper> @ 141e524c0

void __cdecl InternalConstructor<UPropertyWrapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPropertyWrapper__6B_;
  }
  return;
}

// InternalConstructor<USetProperty> @ 141e524f0

void __cdecl InternalConstructor<USetProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7USetProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoftClassProperty> @ 141e52530

void __cdecl InternalConstructor<USoftClassProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoftClassProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USoftObjectProperty> @ 141e52570

void __cdecl InternalConstructor<USoftObjectProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoftObjectProperty__6B_;
  }
  return;
}

// InternalConstructor<UStrProperty> @ 141e525b0

void __cdecl InternalConstructor<UStrProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UStrProperty__6B_;
  }
  return;
}

// InternalConstructor<UStructProperty> @ 141e525e0

void __cdecl InternalConstructor<UStructProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UStructProperty__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UTextProperty> @ 141e52620

void __cdecl InternalConstructor<UTextProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UTextProperty__6B_;
  }
  return;
}

// InternalConstructor<UUInt16Property> @ 141e52650

void __cdecl InternalConstructor<UUInt16Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UUInt16Property__6B_;
  }
  return;
}

// InternalConstructor<UUInt32Property> @ 141e52680

void __cdecl InternalConstructor<UUInt32Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UUInt32Property__6B_;
  }
  return;
}

// InternalConstructor<UUInt64Property> @ 141e526b0

void __cdecl InternalConstructor<UUInt64Property>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this->_padding_ = (longlong)&___7UUInt64Property__6B_;
  }
  return;
}

// InternalConstructor<UWeakObjectProperty> @ 141e526e0

void __cdecl InternalConstructor<UWeakObjectProperty>(FObjectInitializer *param_1)

{
  UProperty *this;
  
  this = (UProperty *)param_1->Obj;
  if (this != (UProperty *)0x0) {
    UProperty::UProperty(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWeakObjectProperty__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UArrayProperty> @ 141e52720

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UArrayProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UArrayProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UArrayProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UBoolProperty> @ 141e527e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UBoolProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UBoolProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UBoolProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UByteProperty> @ 141e52890

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UByteProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UByteProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UByteProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UClassProperty> @ 141e52950

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClassProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClassProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UClassProperty__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDelegateProperty> @ 141e52a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDelegateProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDelegateProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDelegateProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDerrivedClass> @ 141e52ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDerrivedClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDerrivedClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UDerrivedClass::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UDerrivedClass::_vftable__for__FTestBaseClass__;
    *(undefined ***)&pUVar1[1].field_0x8 = &___7UDerrivedClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UDoubleProperty> @ 141e52b90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDoubleProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UDoubleProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UDoubleProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnumProperty> @ 141e52c40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnumProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnumProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UEnumProperty__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UFloatProperty> @ 141e52d00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UFloatProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UFloatProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UFloatProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGCBarrier> @ 141e52db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGCBarrier>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGCBarrier::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UGCBarrier__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UGCObjectReferencer> @ 141e52e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UGCObjectReferencer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGCObjectReferencer *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UGCObjectReferencer::GetPrivateStaticClass();
  pUVar3 = (UGCObjectReferencer *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UGCObjectReferencer *)0x0) {
    pUVar3 = UGCObjectReferencer::UGCObjectReferencer(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInt16Property> @ 141e52f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInt16Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInt16Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInt16Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInt64Property> @ 141e52fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInt64Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInt64Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInt64Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInt8Property> @ 141e53060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInt8Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInt8Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInt8Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UIntProperty> @ 141e53110

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UIntProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UIntProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UIntProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UInterfaceProperty> @ 141e531c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterfaceProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterfaceProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UInterfaceProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULazyObjectProperty> @ 141e53280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULazyObjectProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULazyObjectProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7ULazyObjectProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMapProperty> @ 141e53340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMapProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMapProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMapProperty__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMiddleClass> @ 141e53400

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMiddleClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMiddleClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &UMiddleClass::_vftable__for__UObject__;
    *(undefined ***)(pUVar1 + 1) = &UMiddleClass::_vftable__for__FTestBaseClass__;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMulticastDelegateProperty> @ 141e534c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMulticastDelegateProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMulticastDelegateProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMulticastDelegateProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMulticastDelegatePropertyWrapper> @ 141e53580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMulticastDelegatePropertyWrapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMulticastDelegatePropertyWrapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMulticastDelegatePropertyWrapper__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMulticastInlineDelegateProperty> @ 141e53630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMulticastInlineDelegateProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMulticastInlineDelegateProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMulticastInlineDelegateProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMulticastInlineDelegatePropertyWrapper> @ 141e536f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMulticastInlineDelegatePropertyWrapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMulticastInlineDelegatePropertyWrapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMulticastInlineDelegatePropertyWrapper__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMulticastSparseDelegateProperty> @ 141e537a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMulticastSparseDelegateProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMulticastSparseDelegateProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UMulticastSparseDelegateProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNameProperty> @ 141e53860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNameProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNameProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNameProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNumericProperty> @ 141e53910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNumericProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNumericProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UNumericProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObject> @ 141e539c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    pUVar1 = UObject::UObject(pUVar1,param_1);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectProperty> @ 141e53a60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UObjectProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPropertyBase> @ 141e53b20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectPropertyBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPropertyBase::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UObjectPropertyBase__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrAbstractDerivedTestClass> @ 141e53be0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectPtrAbstractDerivedTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrAbstractDerivedTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrAbstractDerivedTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrAbstractTestClass> @ 141e53c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectPtrAbstractTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrAbstractTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrAbstractTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrDerrivedTestClass> @ 141e53d40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UObjectPtrDerrivedTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrDerrivedTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrDerrivedTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrNotLazyTestClass> @ 141e53df0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectPtrNotLazyTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrNotLazyTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrNotLazyTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrStressTestClass> @ 141e53ea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectPtrStressTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrStressTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrStressTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrTestClass> @ 141e53f50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectPtrTestClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrTestClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrTestClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectPtrTestClassWithRef> @ 141e54000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectPtrTestClassWithRef>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectPtrTestClassWithRef::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectPtrTestClassWithRef__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectWithClassProperty> @ 141e540c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectWithClassProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectWithClassProperty::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectWithClassProperty__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UObjectWithRawProperty> @ 141e54180

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectWithRawProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectWithRawProperty::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectWithRawProperty__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UOptionalPropertyTestObject> @ 141e54230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOptionalPropertyTestObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOptionalPropertyTestObject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOptionalPropertyTestObject__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0;
    *(undefined4 *)&pUVar1[1].field_0xc = 0xffffffff;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[1].field_0x24 = 0;
    pUVar1[2].field_0x4 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UProperty> @ 141e54300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this->_padding_ = (longlong)&___7UProperty__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPropertyWrapper> @ 141e543b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPropertyWrapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPropertyWrapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPropertyWrapper__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USetProperty> @ 141e54460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USetProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USetProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USetProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoftClassProperty> @ 141e54520

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoftClassProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoftClassProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoftClassProperty__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USoftObjectProperty> @ 141e545e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USoftObjectProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USoftObjectProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7USoftObjectProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStrProperty> @ 141e546a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStrProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStrProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UStrProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStructProperty> @ 141e54750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStructProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStructProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UStructProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTextProperty> @ 141e54810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UTextProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTextProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UTextProperty__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUInt16Property> @ 141e548c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUInt16Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUInt16Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UUInt16Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUInt32Property> @ 141e54970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUInt32Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUInt32Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UUInt32Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UUInt64Property> @ 141e54a20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UUInt64Property>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UUInt64Property::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UUInt64Property__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWeakObjectProperty> @ 141e54ad0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWeakObjectProperty>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UField *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWeakObjectProperty::GetPrivateStaticClass();
  this = (UField *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UField *)0x0) {
    UField::UField(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UWeakObjectProperty__6B_;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_> @ 141e54b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>
          param_4)

{
  undefined8 uVar1;
  FName FVar2;
  undefined8 uVar3;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>_s_1 TVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  FNameEntryId FVar8;
  uint uVar9;
  FNameEntryId FVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> **ppTVar17;
  int iVar18;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *pTVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar21 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar21;
    memset(local_330,0,0x2e8);
    ppTVar17 = &local_348;
    do {
      pTVar20 = ppTVar17[1];
      pTVar19 = *ppTVar17;
      local_358 = ppTVar17[2];
      iVar13 = (int)(((longlong)pTVar20 - (longlong)pTVar19) / 0x18) + 1;
      this = pTVar19;
      iVar18 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141e54c70:
        if (8 < iVar13) {
          uVar3 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar14 = pTVar20 + 1;
          lVar12 = (longlong)(iVar13 / 2);
          TVar4 = this[lVar12]._s_1;
          uVar5 = *(undefined8 *)((longlong)this[lVar12].ElementData.Pad + 8);
          uVar1 = *(undefined8 *)((longlong)this + lVar12 * 0x18 + 0x10);
          this[lVar12]._s_1 = this->_s_1;
          *(undefined8 *)((longlong)this[lVar12].ElementData.Pad + 8) = uVar3;
          *(undefined8 *)((longlong)this + lVar12 * 0x18 + 0x10) =
               *(undefined8 *)((this->ElementData).Pad + 0x10);
          this->_s_1 = TVar4;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar5;
          *(undefined8 *)((this->ElementData).Pad + 0x10) = uVar1;
          pTVar19 = this;
LAB_141e54cc0:
          pTVar16 = pTVar19;
          pTVar19 = pTVar16 + 1;
          if (pTVar19 <= pTVar20) goto code_r0x000141e54cc9;
          goto LAB_141e54cf0;
        }
        for (; pTVar14 = this, pTVar19 = this, this < pTVar20; pTVar20 = pTVar20 + -1) {
          while (pTVar16 = pTVar14, pTVar19 = pTVar19 + 1, pTVar19 <= pTVar20) {
            iVar18 = ::FName::Compare((FName *)&pTVar16->ElementData,(FName *)&pTVar19->ElementData)
            ;
            if (iVar18 == 0) {
              iVar18 = ::FName::Compare((FName *)((FNameEntryId *)(pTVar16->ElementData).Pad + 2),
                                        (FName *)((FNameEntryId *)(pTVar19->ElementData).Pad + 2));
            }
            pTVar14 = pTVar19;
            if (-1 < iVar18) {
              pTVar14 = pTVar16;
            }
          }
          FVar8.Value = *(int *)pTVar16;
          uVar9 = *(int *)((longlong)pTVar16 + 4);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar16->ElementData).Pad + 2);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar16->ElementData).Pad + 4);
          FVar10.Value = *(int *)pTVar20;
          uVar11 = *(int *)((longlong)pTVar20 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar20->ElementData).Pad + 2);
          *(int *)pTVar16 = FVar10.Value;
          *(uint *)((longlong)pTVar16 + 4) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar16->ElementData).Pad + 2) = uVar5;
          *(undefined8 *)((FNameEntryId *)(pTVar16->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar20->ElementData).Pad + 4);
          *(int *)pTVar20 = FVar8.Value;
          *(uint *)((longlong)pTVar20 + 4) = uVar9;
          *(undefined8 *)((FNameEntryId *)(pTVar20->ElementData).Pad + 2) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar20->ElementData).Pad + 4) = uVar1;
        }
        goto LAB_141e54e42;
      }
LAB_141e54e29:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,4>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::FElementCompareClass<FTopLevelAssetPathLexicalLess>_>_>
                (pTVar19,iVar13,param_3,param_4);
LAB_141e54e42:
      ppTVar17 = ppTVar17 + -3;
    } while (&local_348 <= ppTVar17);
  }
  return;
code_r0x000141e54cc9:
  iVar13 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar19->ElementData);
  if (iVar13 == 0) {
    iVar13 = ::FName::Compare((FName *)((this->ElementData).Pad + 8),
                              (FName *)((longlong)pTVar16 + 0x20));
  }
  if (-1 < iVar13) goto LAB_141e54cc0;
LAB_141e54cf0:
  do {
    pTVar15 = pTVar14;
    pTVar14 = pTVar15 + -1;
    if (pTVar14 <= this) break;
    iVar13 = ::FName::Compare((FName *)&pTVar14->ElementData,(FName *)&this->ElementData);
    if (iVar13 == 0) {
      iVar13 = ::FName::Compare((FName *)((longlong)pTVar15 + -0x10),
                                (FName *)((this->ElementData).Pad + 8));
    }
  } while (-1 < iVar13);
  FVar6 = *(FName *)((longlong)pTVar15 + -0x10);
  if (pTVar19 <= pTVar14) {
    TVar4 = pTVar19->_s_1;
    FVar7 = *(FName *)((longlong)pTVar16 + 0x20);
    FVar2 = *(FName *)((longlong)pTVar16 + 0x28);
    pTVar19->_s_1 = pTVar14->_s_1;
    *(FName *)((longlong)pTVar16 + 0x20) = FVar6;
    *(FName *)((longlong)pTVar16 + 0x28) = *(FName *)((longlong)pTVar15 + -8);
    pTVar14->_s_1 = TVar4;
    *(FName *)((longlong)pTVar15 + -0x10) = FVar7;
    *(FName *)((longlong)pTVar15 + -8) = FVar2;
    goto LAB_141e54cc0;
  }
  TVar4 = this->_s_1;
  FVar7 = *(FName *)((this->ElementData).Pad + 8);
  FVar2 = *(FName *)((this->ElementData).Pad + 0x10);
  lVar12 = (longlong)pTVar14 + (-0x18 - (longlong)this);
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  this->_s_1 = pTVar14->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar6;
  *(FName *)((this->ElementData).Pad + 0x10) = *(FName *)((longlong)pTVar15 + -8);
  iVar18 = iVar18 + -1;
  pTVar14->_s_1 = TVar4;
  *(FName *)((longlong)pTVar15 + -0x10) = FVar7;
  *(FName *)((longlong)pTVar15 + -8) = FVar2;
  if ((lVar12 >> 2) - (lVar12 >> 0x3f) < ((longlong)pTVar20 - (longlong)pTVar19) / 0x18) {
    if (pTVar19 < pTVar20) {
      *ppTVar17 = pTVar19;
      ppTVar17[1] = pTVar20;
      *(int *)(ppTVar17 + 2) = iVar18;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar14 <= this + 1) goto LAB_141e54e42;
    pTVar20 = pTVar15 + -2;
    pTVar19 = this;
  }
  else {
    if (this + 1 < pTVar14) {
      *ppTVar17 = this;
      ppTVar17[1] = pTVar15 + -2;
      *(int *)(ppTVar17 + 2) = iVar18;
      ppTVar17 = ppTVar17 + 3;
    }
    if (pTVar20 <= pTVar19) goto LAB_141e54e42;
  }
  iVar13 = (int)(((longlong)pTVar20 - (longlong)pTVar19) / 0x18) + 1;
  this = pTVar19;
  if (iVar18 == 0) goto LAB_141e54e29;
  goto LAB_141e54c70;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_> @ 141e54f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  uint uVar11;
  FNameEntryId FVar12;
  uint uVar13;
  int iVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar17;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar18;
  int iVar19;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *this;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar20;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar21;
  float fVar22;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar22 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar22;
    memset(local_330,0,0x2e8);
    ppTVar18 = &local_348;
    do {
      pTVar21 = ppTVar18[1];
      pTVar20 = *ppTVar18;
      local_358 = ppTVar18[2];
      iVar14 = (int)((longlong)pTVar21 - (longlong)pTVar20 >> 5) + 1;
      this = pTVar20;
      iVar19 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141e54ff0:
        if (8 < iVar14) {
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 8);
          pTVar15 = pTVar21 + 1;
          pTVar20 = this + iVar14 / 2;
          TVar2 = pTVar20->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18);
          pTVar20->_s_1 = this->_s_1;
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((this->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x10) =
               *(undefined8 *)((this->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar20->ElementData).Pad + 0x18) = uVar1;
          this->_s_1 = TVar2;
          *(undefined8 *)((this->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((this->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((this->ElementData).Pad + 0x18) = uVar5;
          pTVar20 = this;
LAB_141e55030:
          pTVar17 = pTVar20;
          pTVar20 = pTVar17 + 1;
          if (pTVar20 <= pTVar21) goto code_r0x000141e55039;
          goto LAB_141e55050;
        }
        for (; pTVar15 = this, pTVar20 = this, this < pTVar21; pTVar21 = pTVar21 + -1) {
          while (pTVar17 = pTVar15, pTVar20 = pTVar20 + 1, pTVar20 <= pTVar21) {
            iVar19 = ::FName::Compare((FName *)&pTVar17->ElementData,(FName *)&pTVar20->ElementData)
            ;
            pTVar15 = pTVar20;
            if (-1 < iVar19) {
              pTVar15 = pTVar17;
            }
          }
          FVar10.Value = *(int *)pTVar17;
          uVar11 = *(int *)((longlong)pTVar17 + 4);
          uVar1 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2);
          uVar3 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 4);
          uVar4 = *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 6);
          FVar12.Value = *(int *)pTVar21;
          uVar13 = *(int *)((longlong)pTVar21 + 4);
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 2);
          *(int *)pTVar17 = FVar12.Value;
          *(uint *)((longlong)pTVar17 + 4) = uVar13;
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 2) = uVar5;
          uVar5 = *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 6);
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 4) =
               *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 4);
          *(undefined8 *)((FNameEntryId *)(pTVar17->ElementData).Pad + 6) = uVar5;
          *(int *)pTVar21 = FVar10.Value;
          *(uint *)((longlong)pTVar21 + 4) = uVar11;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 2) = uVar1;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 4) = uVar3;
          *(undefined8 *)((FNameEntryId *)(pTVar21->ElementData).Pad + 6) = uVar4;
        }
        goto LAB_141e55141;
      }
LAB_141e55130:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FKeyComparisonClass<FNameLexicalLess>_>_>_>
                (pTVar20,iVar14,param_3,param_4);
LAB_141e55141:
      ppTVar18 = ppTVar18 + -3;
    } while (&local_348 <= ppTVar18);
  }
  return;
code_r0x000141e55039:
  iVar14 = ::FName::Compare((FName *)&this->ElementData,(FName *)&pTVar20->ElementData);
  if (-1 < iVar14) goto LAB_141e55030;
LAB_141e55050:
  do {
    pTVar16 = pTVar15;
    pTVar15 = pTVar16 + -1;
    if (pTVar15 <= this) break;
    iVar14 = ::FName::Compare((FName *)&pTVar15->ElementData,(FName *)&this->ElementData);
  } while (-1 < iVar14);
  FVar6 = *(FName *)((longlong)pTVar16 + -0x18);
  if (pTVar20 <= pTVar15) {
    TVar2 = pTVar20->_s_1;
    FVar7 = *(FName *)((longlong)pTVar17 + 0x28);
    FVar8 = *(FName *)((longlong)pTVar17 + 0x30);
    FVar9 = *(FName *)((longlong)pTVar17 + 0x38);
    pTVar20->_s_1 = pTVar15->_s_1;
    *(FName *)((longlong)pTVar17 + 0x28) = FVar6;
    FVar6 = *(FName *)((longlong)pTVar16 + -8);
    *(FName *)((longlong)pTVar17 + 0x30) = *(FName *)((longlong)pTVar16 + -0x10);
    *(FName *)((longlong)pTVar17 + 0x38) = FVar6;
    pTVar15->_s_1 = TVar2;
    *(FName *)((longlong)pTVar16 + -0x18) = FVar7;
    *(FName *)((longlong)pTVar16 + -0x10) = FVar8;
    *(FName *)((longlong)pTVar16 + -8) = FVar9;
    goto LAB_141e55030;
  }
  TVar2 = this->_s_1;
  FVar7 = *(FName *)((this->ElementData).Pad + 8);
  FVar8 = *(FName *)((this->ElementData).Pad + 0x10);
  FVar9 = *(FName *)((this->ElementData).Pad + 0x18);
  this->_s_1 = pTVar15->_s_1;
  *(FName *)((this->ElementData).Pad + 8) = FVar6;
  iVar19 = iVar19 + -1;
  FVar6 = *(FName *)((longlong)pTVar16 + -8);
  *(FName *)((this->ElementData).Pad + 0x10) = *(FName *)((longlong)pTVar16 + -0x10);
  *(FName *)((this->ElementData).Pad + 0x18) = FVar6;
  pTVar15->_s_1 = TVar2;
  *(FName *)((longlong)pTVar16 + -0x18) = FVar7;
  *(FName *)((longlong)pTVar16 + -0x10) = FVar8;
  *(FName *)((longlong)pTVar16 + -8) = FVar9;
  if ((longlong)((longlong)pTVar15 + (-0x20 - (longlong)this) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar21 - (longlong)pTVar20 & 0xffffffffffffffe0U)) {
    if (pTVar20 < pTVar21) {
      *ppTVar18 = pTVar20;
      ppTVar18[1] = pTVar21;
      *(int *)(ppTVar18 + 2) = iVar19;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar15 <= this + 1) goto LAB_141e55141;
    pTVar21 = pTVar16 + -2;
    pTVar20 = this;
  }
  else {
    if (this + 1 < pTVar15) {
      *ppTVar18 = this;
      ppTVar18[1] = pTVar16 + -2;
      *(int *)(ppTVar18 + 2) = iVar19;
      ppTVar18 = ppTVar18 + 3;
    }
    if (pTVar21 <= pTVar20) goto LAB_141e55141;
  }
  iVar14 = (int)((longlong)pTVar21 - (longlong)pTVar20 >> 5) + 1;
  this = pTVar20;
  if (iVar19 == 0) goto LAB_141e55130;
  goto LAB_141e54ff0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>_> @ 141e55220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>
          param_4)

{
  undefined8 uVar1;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar11;
  int iVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar16 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar16;
    memset(local_330,0,0x2e8);
    ppTVar11 = &local_348;
    do {
      pTVar15 = ppTVar11[1];
      pTVar14 = *ppTVar11;
      local_358 = ppTVar11[2];
      iVar7 = (int)((longlong)pTVar15 - (longlong)pTVar14 >> 5) + 1;
      pTVar13 = pTVar14;
      iVar12 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_141e552e0:
        if (8 < iVar7) {
          uVar1 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar8 = pTVar15 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar2 = pTVar14->_s_1;
          uVar3 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar1;
          uVar1 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar1;
          pTVar13->_s_1 = TVar2;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar5;
          pTVar14 = pTVar13;
LAB_141e55320:
          pTVar10 = pTVar14;
          pTVar14 = pTVar10 + 1;
          if (pTVar14 <= pTVar15) goto code_r0x000141e55329;
          goto LAB_141e55340;
        }
        for (; pTVar8 = pTVar13, pTVar14 = pTVar13, pTVar13 < pTVar15; pTVar15 = pTVar15 + -1) {
          while (pTVar10 = pTVar8, pTVar14 = pTVar14 + 1, pTVar14 <= pTVar15) {
            bVar6 = FOptionalFStringIgnoreCaseLess::operator()
                              (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                               (TOptional<FString> *)((pTVar10->ElementData).Pad + 8),
                               (TOptional<FString> *)((pTVar14->ElementData).Pad + 8));
            pTVar8 = pTVar14;
            if (!bVar6) {
              pTVar8 = pTVar10;
            }
          }
          TVar2 = pTVar10->_s_1;
          uVar1 = *(undefined8 *)((pTVar10->ElementData).Pad + 8);
          uVar3 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x10);
          uVar4 = *(undefined8 *)((pTVar10->ElementData).Pad + 0x18);
          uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 8);
          pTVar10->_s_1 = pTVar15->_s_1;
          *(undefined8 *)((pTVar10->ElementData).Pad + 8) = uVar5;
          uVar5 = *(undefined8 *)((pTVar15->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar15->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar10->ElementData).Pad + 0x18) = uVar5;
          pTVar15->_s_1 = TVar2;
          *(undefined8 *)((pTVar15->ElementData).Pad + 8) = uVar1;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x10) = uVar3;
          *(undefined8 *)((pTVar15->ElementData).Pad + 0x18) = uVar4;
        }
        goto LAB_141e55436;
      }
LAB_141e55425:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>::FValueComparisonClass<FOptionalFStringIgnoreCaseLess>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_141e55436:
      ppTVar11 = ppTVar11 + -3;
    } while (&local_348 <= ppTVar11);
  }
  return;
code_r0x000141e55329:
  bVar6 = FOptionalFStringIgnoreCaseLess::operator()
                    (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                     (TOptional<FString> *)((pTVar13->ElementData).Pad + 8),
                     (TOptional<FString> *)((longlong)pTVar10 + 0x28));
  if (!bVar6) goto LAB_141e55320;
LAB_141e55340:
  do {
    pTVar9 = pTVar8;
    pTVar8 = pTVar9 + -1;
    if (pTVar8 <= pTVar13) break;
    bVar6 = FOptionalFStringIgnoreCaseLess::operator()
                      (((((param_4.Predicate)->Predicate).Predicate)->Predicate).Predicate,
                       (TOptional<FString> *)((longlong)pTVar9 + -0x18),
                       (TOptional<FString> *)((pTVar13->ElementData).Pad + 8));
  } while (!bVar6);
  uVar1 = *(undefined8 *)((longlong)pTVar9 + -0x18);
  if (pTVar14 <= pTVar8) {
    TVar2 = pTVar14->_s_1;
    uVar3 = *(undefined8 *)((longlong)pTVar10 + 0x28);
    uVar4 = *(undefined8 *)((longlong)pTVar10 + 0x30);
    uVar5 = *(undefined8 *)((longlong)pTVar10 + 0x38);
    pTVar14->_s_1 = pTVar8->_s_1;
    *(undefined8 *)((longlong)pTVar10 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((longlong)pTVar9 + -8);
    *(undefined8 *)((longlong)pTVar10 + 0x30) = *(undefined8 *)((longlong)pTVar9 + -0x10);
    *(undefined8 *)((longlong)pTVar10 + 0x38) = uVar1;
    pTVar8->_s_1 = TVar2;
    *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar3;
    *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar4;
    *(undefined8 *)((longlong)pTVar9 + -8) = uVar5;
    goto LAB_141e55320;
  }
  TVar2 = pTVar13->_s_1;
  uVar3 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar8->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar1;
  iVar12 = iVar12 + -1;
  uVar1 = *(undefined8 *)((longlong)pTVar9 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar9 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar1;
  pTVar8->_s_1 = TVar2;
  *(undefined8 *)((longlong)pTVar9 + -0x18) = uVar3;
  *(undefined8 *)((longlong)pTVar9 + -0x10) = uVar4;
  *(undefined8 *)((longlong)pTVar9 + -8) = uVar5;
  if ((longlong)((longlong)pTVar8 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar15 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar15) {
      *ppTVar11 = pTVar14;
      ppTVar11[1] = pTVar15;
      *(int *)(ppTVar11 + 2) = iVar12;
      ppTVar11 = ppTVar11 + 3;
    }
    if (pTVar8 <= pTVar13 + 1) goto LAB_141e55436;
    pTVar15 = pTVar9 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar8) {
      *ppTVar11 = pTVar13;
      ppTVar11[1] = pTVar9 + -2;
      *(int *)(ppTVar11 + 2) = iVar12;
      ppTVar11 = ppTVar11 + 3;
    }
    if (pTVar15 <= pTVar14) goto LAB_141e55436;
  }
  iVar7 = (int)((longlong)pTVar15 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if (iVar12 == 0) goto LAB_141e55425;
  goto LAB_141e552e0;
}

// IntroSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,`Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'::__l2::<lambda_1>_> @ 141e55510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,_Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>_::__l2::<lambda_1>_>
          (TTuple<FName,TOptional<FString>_> *param_1,int param_2,FIdentityFunctor param_3,
          <lambda_1> *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FOptionalFStringIgnoreCaseLess *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FNameEntryId FVar6;
  uint uVar7;
  FNameEntryId FVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  TTuple<FName,TOptional<FString>_> *pTVar13;
  TTuple<FName,TOptional<FString>_> *pTVar14;
  TTuple<FName,TOptional<FString>_> *pTVar15;
  TTuple<FName,TOptional<FString>_> *this;
  TTuple<FName,TOptional<FString>_> *pTVar16;
  TTuple<FName,TOptional<FString>_> *pTVar17;
  float fVar18;
  undefined1 auStack_3c8 [32];
  FIdentityFunctor local_3a8;
  TTuple<FName,TOptional<FString>_> **local_3a0;
  <lambda_1> *local_398;
  int local_390;
  <lambda_1> local_388 [2];
  TTuple<FName,TOptional<FString>_> *local_368;
  TTuple<FName,TOptional<FString>_> *local_358;
  TTuple<FName,TOptional<FString>_> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (param_2 < 2) {
    return;
  }
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  local_350 = param_1 + (longlong)param_2 + -1;
  local_3a8 = param_3;
  local_398 = param_4;
  local_358 = param_1;
  fVar18 = logf((float)param_2 * (float)param_2);
  local_348 = (undefined4)(longlong)fVar18;
  memset(local_340,0,0x2e8);
  local_3a0 = &local_358;
LAB_141e555c0:
  pTVar17 = local_3a0[1];
  pTVar16 = *local_3a0;
  local_368 = local_3a0[2];
  iVar12 = (int)(((longlong)pTVar17 - (longlong)pTVar16) / 0x18) + 1;
  local_390 = (int)local_368;
  this = pTVar16;
  if ((int)local_368 != 0) {
LAB_141e55600:
    param_4 = local_398;
    if (8 < iVar12) {
      uVar2 = *(undefined8 *)&this->field_0x8;
      pTVar14 = pTVar17 + 1;
      iVar12 = iVar12 / 2;
      uVar4 = *(undefined8 *)(this + iVar12);
      uVar5 = *(undefined8 *)&this[iVar12].field_0x8;
      uVar1 = *(undefined8 *)&this[iVar12].field_0x10;
      *(undefined8 *)(this + iVar12) = *(undefined8 *)this;
      *(undefined8 *)&this[iVar12].field_0x8 = uVar2;
      *(undefined8 *)&this[iVar12].field_0x10 = *(undefined8 *)&this->field_0x10;
      *(undefined8 *)this = uVar4;
      *(undefined8 *)&this->field_0x8 = uVar5;
      *(undefined8 *)&this->field_0x10 = uVar1;
      pTVar16 = this;
LAB_141e55647:
      pTVar13 = pTVar16;
      pTVar16 = pTVar13 + 1;
      if ((pTVar16 <= pTVar17) &&
         (iVar12 = ::FName::Compare((FName *)this,(FName *)pTVar16), -1 < iVar12))
      goto code_r0x000141e55662;
      goto LAB_141e556a0;
    }
    for (; pTVar14 = this, pTVar16 = this, this < pTVar17; pTVar17 = pTVar17 + -1) {
      while (pTVar13 = pTVar14, pTVar16 = pTVar16 + 1, pTVar16 <= pTVar17) {
        iVar12 = ::FName::Compare((FName *)pTVar13,(FName *)pTVar16);
        if (iVar12 < 0) {
          bVar10 = true;
        }
        else {
          iVar12 = ::FName::Compare((FName *)pTVar16,(FName *)pTVar13);
          if (-1 < iVar12) {
            pFVar3 = param_4->ValueLessThan;
            bVar10 = FOptionalFStringIgnoreCaseLess::operator()
                               (pFVar3,(TOptional<FString> *)&pTVar13->field_0x8,
                                (TOptional<FString> *)&pTVar16->field_0x8);
            if (bVar10) {
              bVar10 = true;
              goto LAB_141e558d6;
            }
            FOptionalFStringIgnoreCaseLess::operator()
                      (pFVar3,(TOptional<FString> *)&pTVar16->field_0x8,
                       (TOptional<FString> *)&pTVar13->field_0x8);
          }
          bVar10 = false;
        }
LAB_141e558d6:
        pTVar14 = pTVar16;
        if (!bVar10) {
          pTVar14 = pTVar13;
        }
      }
      FVar6.Value = *(uint *)&pTVar13->field_0x0;
      uVar7 = *(uint *)&pTVar13->field_0x4;
      uVar2 = *(undefined8 *)&pTVar13->field_0x8;
      uVar1 = *(undefined8 *)&pTVar13->field_0x10;
      FVar8.Value = *(uint *)&pTVar17->field_0x0;
      uVar9 = *(uint *)&pTVar17->field_0x4;
      uVar4 = *(undefined8 *)&pTVar17->field_0x8;
      *(uint *)&pTVar13->field_0x0 = FVar8.Value;
      *(uint *)&pTVar13->field_0x4 = uVar9;
      *(undefined8 *)&pTVar13->field_0x8 = uVar4;
      *(undefined8 *)&pTVar13->field_0x10 = *(undefined8 *)&pTVar17->field_0x10;
      *(uint *)&pTVar17->field_0x0 = FVar6.Value;
      *(uint *)&pTVar17->field_0x4 = uVar7;
      *(undefined8 *)&pTVar17->field_0x8 = uVar2;
      *(undefined8 *)&pTVar17->field_0x10 = uVar1;
      param_3 = local_3a8;
    }
    goto LAB_141e55938;
  }
  goto LAB_141e55829;
code_r0x000141e55662:
  iVar12 = ::FName::Compare((FName *)pTVar16,(FName *)this);
  if (iVar12 < 0) goto LAB_141e55647;
  pFVar3 = param_4->ValueLessThan;
  bVar10 = FOptionalFStringIgnoreCaseLess::operator()
                     (pFVar3,(TOptional<FString> *)&this->field_0x8,
                      (TOptional<FString> *)&pTVar13[1].field_0x8);
  if (!bVar10) {
    FOptionalFStringIgnoreCaseLess::operator()
              (pFVar3,(TOptional<FString> *)&pTVar13[1].field_0x8,
               (TOptional<FString> *)&this->field_0x8);
    goto LAB_141e55647;
  }
LAB_141e556a0:
  while( true ) {
    do {
      pTVar15 = pTVar14;
      pTVar14 = pTVar15 + -1;
      if ((pTVar14 <= this) ||
         (iVar12 = ::FName::Compare((FName *)pTVar14,(FName *)this), iVar12 < 0))
      goto LAB_141e556f7;
      iVar12 = ::FName::Compare((FName *)this,(FName *)pTVar14);
    } while (iVar12 < 0);
    pFVar3 = param_4->ValueLessThan;
    bVar10 = FOptionalFStringIgnoreCaseLess::operator()
                       (pFVar3,(TOptional<FString> *)&pTVar15[-1].field_0x8,
                        (TOptional<FString> *)&this->field_0x8);
    if (bVar10) break;
    FOptionalFStringIgnoreCaseLess::operator()
              (pFVar3,(TOptional<FString> *)&this->field_0x8,
               (TOptional<FString> *)&pTVar15[-1].field_0x8);
  }
LAB_141e556f7:
  uVar1 = *(undefined8 *)&pTVar15[-1].field_0x8;
  if (pTVar16 <= pTVar14) {
    uVar4 = *(undefined8 *)pTVar16;
    uVar5 = *(undefined8 *)&pTVar13[1].field_0x8;
    uVar2 = *(undefined8 *)&pTVar13[1].field_0x10;
    *(undefined8 *)pTVar16 = *(undefined8 *)pTVar14;
    *(undefined8 *)&pTVar13[1].field_0x8 = uVar1;
    *(undefined8 *)&pTVar13[1].field_0x10 = *(undefined8 *)&pTVar15[-1].field_0x10;
    *(undefined8 *)pTVar14 = uVar4;
    *(undefined8 *)&pTVar15[-1].field_0x8 = uVar5;
    *(undefined8 *)&pTVar15[-1].field_0x10 = uVar2;
    goto LAB_141e55647;
  }
  uVar4 = *(undefined8 *)this;
  uVar5 = *(undefined8 *)&this->field_0x8;
  uVar2 = *(undefined8 *)&this->field_0x10;
  lVar11 = (longlong)pTVar14 + (-0x18 - (longlong)this);
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  *(undefined8 *)this = *(undefined8 *)pTVar14;
  *(undefined8 *)&this->field_0x8 = uVar1;
  *(undefined8 *)&this->field_0x10 = *(undefined8 *)&pTVar15[-1].field_0x10;
  local_390 = local_390 + -1;
  *(undefined8 *)pTVar14 = uVar4;
  *(undefined8 *)&pTVar15[-1].field_0x8 = uVar5;
  *(undefined8 *)&pTVar15[-1].field_0x10 = uVar2;
  param_4 = local_398;
  param_3 = local_3a8;
  if ((lVar11 >> 2) - (lVar11 >> 0x3f) < ((longlong)pTVar17 - (longlong)pTVar16) / 0x18) {
    if (pTVar16 < pTVar17) {
      *local_3a0 = pTVar16;
      local_3a0[1] = pTVar17;
      *(int *)(local_3a0 + 2) = local_390;
      local_3a0 = local_3a0 + 3;
    }
    if (pTVar14 <= this + 1) goto LAB_141e55938;
    pTVar17 = pTVar15 + -2;
    pTVar16 = this;
  }
  else {
    if (this + 1 < pTVar14) {
      *local_3a0 = this;
      local_3a0[1] = pTVar15 + -2;
      *(int *)(local_3a0 + 2) = local_390;
      local_3a0 = local_3a0 + 3;
    }
    if (pTVar17 <= pTVar16) goto LAB_141e55938;
  }
  iVar12 = (int)(((longlong)pTVar17 - (longlong)pTVar16) / 0x18) + 1;
  this = pTVar16;
  if (local_390 == 0) goto code_r0x000141e55824;
  goto LAB_141e55600;
code_r0x000141e55824:
  local_390 = 0;
LAB_141e55829:
  local_388[0].KeyLessThan = param_4->KeyLessThan;
  local_388[0].ValueLessThan = param_4->ValueLessThan;
  HeapSortInternal<TTuple<FName,TOptional<FString>_>,int,FIdentityFunctor,_Algo::CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>_::__l2::<lambda_1>_>
            (pTVar16,iVar12,param_3,local_388);
LAB_141e55938:
  local_3a0 = local_3a0 + -3;
  if (local_3a0 < &local_358) {
    return;
  }
  goto LAB_141e555c0;
}

// IntroSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess> @ 141e559a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess>
          (FSoftObjectPath *param_1,int param_2,FIdentityFunctor param_3,
          FSoftObjectPathLexicalLess param_4)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  FName FVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  FSoftObjectPath *pFVar12;
  FSoftObjectPath *pFVar13;
  FSoftObjectPath *this;
  FSoftObjectPath *pFVar14;
  FSoftObjectPath **ppFVar15;
  FSoftObjectPath *pFVar16;
  FSoftObjectPath *pFVar17;
  float fVar18;
  undefined1 auStack_398 [32];
  int local_378;
  FSoftObjectPath *local_360;
  FSoftObjectPath *local_358;
  FSoftObjectPath *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar18 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar18;
    memset(local_340,0,0x2e8);
    ppFVar15 = &local_358;
    do {
      pFVar16 = ppFVar15[1];
      pFVar14 = *ppFVar15;
      local_360 = ppFVar15[2];
      iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar14 >> 5) + 1;
      local_378 = (int)local_360;
      this = pFVar14;
      if ((int)local_360 != 0) {
LAB_141e55a62:
        if (8 < iVar9) {
          FVar1 = (this->AssetPath).AssetName;
          pFVar12 = pFVar16 + 1;
          pFVar14 = this + iVar9 / 2;
          FVar2 = (pFVar14->AssetPath).PackageName;
          FVar3 = (pFVar14->AssetPath).AssetName;
          pFVar4 = (pFVar14->SubPathString).Data.AllocatorInstance.Data;
          iVar7 = (pFVar14->SubPathString).Data.ArrayNum;
          iVar8 = (pFVar14->SubPathString).Data.ArrayMax;
          (pFVar14->AssetPath).PackageName = (this->AssetPath).PackageName;
          (pFVar14->AssetPath).AssetName = FVar1;
          iVar9 = (this->SubPathString).Data.ArrayNum;
          iVar6 = (this->SubPathString).Data.ArrayMax;
          (pFVar14->SubPathString).Data.AllocatorInstance.Data =
               (this->SubPathString).Data.AllocatorInstance.Data;
          (pFVar14->SubPathString).Data.ArrayNum = iVar9;
          (pFVar14->SubPathString).Data.ArrayMax = iVar6;
          (this->AssetPath).PackageName = FVar2;
          (this->AssetPath).AssetName = FVar3;
          (this->SubPathString).Data.AllocatorInstance.Data = pFVar4;
          (this->SubPathString).Data.ArrayNum = iVar7;
          (this->SubPathString).Data.ArrayMax = iVar8;
          pFVar14 = this;
LAB_141e55aa0:
          pFVar17 = pFVar14;
          pFVar14 = pFVar17 + 1;
          if (pFVar14 <= pFVar16) goto code_r0x000141e55aac;
          goto LAB_141e55b00;
        }
        for (; pFVar14 = this, pFVar12 = this, this < pFVar16; pFVar16 = pFVar16 + -1) {
          while (pFVar17 = pFVar14, pFVar14 = pFVar12 + 1, pFVar14 <= pFVar16) {
            iVar9 = ::FName::Compare((FName *)pFVar17,(FName *)pFVar14);
            if ((iVar9 == 0) &&
               (iVar9 = ::FName::Compare(&(pFVar17->AssetPath).AssetName,
                                         &pFVar12[1].AssetPath.AssetName), iVar9 == 0)) {
              if (pFVar12[1].SubPathString.Data.ArrayNum == 0) {
                pcVar11 = "";
              }
              else {
                pcVar11 = (char *)pFVar12[1].SubPathString.Data.AllocatorInstance.Data;
              }
              if ((pFVar17->SubPathString).Data.ArrayNum == 0) {
                pcVar10 = "";
              }
              else {
                pcVar10 = (char *)(pFVar17->SubPathString).Data.AllocatorInstance.Data;
              }
              iVar9 = strcmp(pcVar10,pcVar11);
            }
            pFVar12 = pFVar14;
            if (-1 < iVar9) {
              pFVar14 = pFVar17;
            }
          }
          FVar1 = (pFVar17->AssetPath).PackageName;
          FVar2 = (pFVar17->AssetPath).AssetName;
          pFVar4 = (pFVar17->SubPathString).Data.AllocatorInstance.Data;
          iVar7 = (pFVar17->SubPathString).Data.ArrayNum;
          iVar8 = (pFVar17->SubPathString).Data.ArrayMax;
          FVar3 = (pFVar16->AssetPath).AssetName;
          (pFVar17->AssetPath).PackageName = (pFVar16->AssetPath).PackageName;
          (pFVar17->AssetPath).AssetName = FVar3;
          iVar9 = (pFVar16->SubPathString).Data.ArrayNum;
          iVar6 = (pFVar16->SubPathString).Data.ArrayMax;
          (pFVar17->SubPathString).Data.AllocatorInstance.Data =
               (pFVar16->SubPathString).Data.AllocatorInstance.Data;
          (pFVar17->SubPathString).Data.ArrayNum = iVar9;
          (pFVar17->SubPathString).Data.ArrayMax = iVar6;
          (pFVar16->AssetPath).PackageName = FVar1;
          (pFVar16->AssetPath).AssetName = FVar2;
          (pFVar16->SubPathString).Data.AllocatorInstance.Data = pFVar4;
          (pFVar16->SubPathString).Data.ArrayNum = iVar7;
          (pFVar16->SubPathString).Data.ArrayMax = iVar8;
        }
        goto LAB_141e55c3e;
      }
LAB_141e55c2c:
      HeapSortInternal<FSoftObjectPath,int,FIdentityFunctor,FSoftObjectPathLexicalLess>
                (pFVar14,iVar9,param_3,param_4);
LAB_141e55c3e:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_358 <= ppFVar15);
  }
  return;
code_r0x000141e55aac:
  iVar9 = ::FName::Compare((FName *)this,(FName *)pFVar14);
  if ((iVar9 == 0) &&
     (iVar9 = ::FName::Compare(&(this->AssetPath).AssetName,&pFVar17[1].AssetPath.AssetName),
     iVar9 == 0)) {
    if (pFVar17[1].SubPathString.Data.ArrayNum == 0) {
      pcVar11 = "";
    }
    else {
      pcVar11 = (char *)pFVar17[1].SubPathString.Data.AllocatorInstance.Data;
    }
    if ((this->SubPathString).Data.ArrayNum == 0) {
      pcVar10 = "";
    }
    else {
      pcVar10 = (char *)(this->SubPathString).Data.AllocatorInstance.Data;
    }
    iVar9 = strcmp(pcVar10,pcVar11);
  }
  if (-1 < iVar9) goto LAB_141e55aa0;
LAB_141e55b00:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= this) break;
    iVar9 = ::FName::Compare((FName *)pFVar12,(FName *)this);
    if ((iVar9 == 0) &&
       (iVar9 = ::FName::Compare(&pFVar13[-1].AssetPath.AssetName,&(this->AssetPath).AssetName),
       iVar9 == 0)) {
      if ((this->SubPathString).Data.ArrayNum == 0) {
        pcVar11 = "";
      }
      else {
        pcVar11 = (char *)(this->SubPathString).Data.AllocatorInstance.Data;
      }
      if (pFVar13[-1].SubPathString.Data.ArrayNum == 0) {
        pcVar10 = "";
      }
      else {
        pcVar10 = (char *)pFVar13[-1].SubPathString.Data.AllocatorInstance.Data;
      }
      iVar9 = strcmp(pcVar10,pcVar11);
    }
  } while (-1 < iVar9);
  FVar1 = (pFVar12->AssetPath).PackageName;
  FVar2 = pFVar13[-1].AssetPath.AssetName;
  if (pFVar14 <= pFVar12) {
    FVar3 = (pFVar14->AssetPath).PackageName;
    FVar5 = pFVar17[1].AssetPath.AssetName;
    pFVar4 = pFVar17[1].SubPathString.Data.AllocatorInstance.Data;
    iVar7 = pFVar17[1].SubPathString.Data.ArrayNum;
    iVar8 = pFVar17[1].SubPathString.Data.ArrayMax;
    (pFVar14->AssetPath).PackageName = FVar1;
    pFVar17[1].AssetPath.AssetName = FVar2;
    iVar9 = pFVar13[-1].SubPathString.Data.ArrayNum;
    iVar6 = pFVar13[-1].SubPathString.Data.ArrayMax;
    pFVar17[1].SubPathString.Data.AllocatorInstance.Data =
         pFVar13[-1].SubPathString.Data.AllocatorInstance.Data;
    pFVar17[1].SubPathString.Data.ArrayNum = iVar9;
    pFVar17[1].SubPathString.Data.ArrayMax = iVar6;
    (pFVar12->AssetPath).PackageName = FVar3;
    pFVar13[-1].AssetPath.AssetName = FVar5;
    pFVar13[-1].SubPathString.Data.AllocatorInstance.Data = pFVar4;
    pFVar13[-1].SubPathString.Data.ArrayNum = iVar7;
    pFVar13[-1].SubPathString.Data.ArrayMax = iVar8;
    goto LAB_141e55aa0;
  }
  FVar3 = (this->AssetPath).PackageName;
  FVar5 = (this->AssetPath).AssetName;
  pFVar4 = (this->SubPathString).Data.AllocatorInstance.Data;
  iVar7 = (this->SubPathString).Data.ArrayNum;
  iVar8 = (this->SubPathString).Data.ArrayMax;
  local_378 = local_378 + -1;
  (this->AssetPath).PackageName = FVar1;
  (this->AssetPath).AssetName = FVar2;
  iVar9 = pFVar13[-1].SubPathString.Data.ArrayNum;
  iVar6 = pFVar13[-1].SubPathString.Data.ArrayMax;
  (this->SubPathString).Data.AllocatorInstance.Data =
       pFVar13[-1].SubPathString.Data.AllocatorInstance.Data;
  (this->SubPathString).Data.ArrayNum = iVar9;
  (this->SubPathString).Data.ArrayMax = iVar6;
  (pFVar12->AssetPath).PackageName = FVar3;
  pFVar13[-1].AssetPath.AssetName = FVar5;
  pFVar13[-1].SubPathString.Data.AllocatorInstance.Data = pFVar4;
  pFVar13[-1].SubPathString.Data.ArrayNum = iVar7;
  pFVar13[-1].SubPathString.Data.ArrayMax = iVar8;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)this) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar16 - (longlong)pFVar14 & 0xffffffffffffffe0U)) {
    if (pFVar14 < pFVar16) {
      *ppFVar15 = pFVar14;
      ppFVar15[1] = pFVar16;
      *(int *)(ppFVar15 + 2) = local_378;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= this + 1) goto LAB_141e55c3e;
    pFVar16 = pFVar13 + -2;
    pFVar14 = this;
  }
  else {
    if (this + 1 < pFVar12) {
      *ppFVar15 = this;
      ppFVar15[1] = pFVar13 + -2;
      *(int *)(ppFVar15 + 2) = local_378;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar16 <= pFVar14) goto LAB_141e55c3e;
  }
  iVar9 = (int)((longlong)pFVar16 - (longlong)pFVar14 >> 5) + 1;
  this = pFVar14;
  if (local_378 == 0) goto LAB_141e55c2c;
  goto LAB_141e55a62;
}

// IntroSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess> @ 141e55d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess>
          (FTopLevelAssetPath *param_1,int param_2,FIdentityFunctor param_3,
          FTopLevelAssetPathLexicalLess param_4)

{
  FName FVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  FTopLevelAssetPath *pFVar5;
  FTopLevelAssetPath *pFVar6;
  FTopLevelAssetPath *pFVar7;
  int iVar8;
  FTopLevelAssetPath **ppFVar9;
  FTopLevelAssetPath *this;
  FTopLevelAssetPath *pFVar10;
  FTopLevelAssetPath *pFVar11;
  float fVar12;
  undefined1 auStack_398 [48];
  FTopLevelAssetPath *local_368;
  FTopLevelAssetPath *local_358;
  FTopLevelAssetPath *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar12 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar12;
    memset(local_340,0,0x2e8);
    ppFVar9 = &local_358;
    do {
      pFVar11 = ppFVar9[1];
      pFVar10 = *ppFVar9;
      local_368 = ppFVar9[2];
      iVar4 = (int)((longlong)pFVar11 - (longlong)pFVar10 >> 4) + 1;
      this = pFVar10;
      iVar8 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_141e55e20:
        if (8 < iVar4) {
          FVar1 = this->AssetName;
          pFVar5 = pFVar11 + 1;
          FVar2 = this[iVar4 / 2].PackageName;
          FVar3 = this[iVar4 / 2].AssetName;
          this[iVar4 / 2].PackageName = this->PackageName;
          this[iVar4 / 2].AssetName = FVar1;
          this->PackageName = FVar2;
          this->AssetName = FVar3;
          pFVar10 = this;
LAB_141e55e50:
          pFVar7 = pFVar10;
          pFVar10 = pFVar7 + 1;
          if (pFVar10 <= pFVar11) goto code_r0x000141e55e59;
          goto LAB_141e55e80;
        }
        for (; pFVar10 = this, pFVar5 = this, this < pFVar11; pFVar11 = pFVar11 + -1) {
          while (pFVar7 = pFVar10, pFVar10 = pFVar5 + 1, pFVar10 <= pFVar11) {
            iVar8 = ::FName::Compare(&pFVar7->PackageName,&pFVar10->PackageName);
            if (iVar8 == 0) {
              iVar8 = ::FName::Compare(&pFVar7->AssetName,&pFVar5[1].AssetName);
            }
            pFVar5 = pFVar10;
            if (-1 < iVar8) {
              pFVar10 = pFVar7;
            }
          }
          FVar1 = pFVar7->PackageName;
          FVar2 = pFVar7->AssetName;
          FVar3 = pFVar11->AssetName;
          pFVar7->PackageName = pFVar11->PackageName;
          pFVar7->AssetName = FVar3;
          pFVar11->PackageName = FVar1;
          pFVar11->AssetName = FVar2;
        }
        goto LAB_141e55f5d;
      }
LAB_141e55f4b:
      HeapSortInternal<FTopLevelAssetPath,int,FIdentityFunctor,FTopLevelAssetPathLexicalLess>
                (pFVar10,iVar4,param_3,param_4);
LAB_141e55f5d:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_358 <= ppFVar9);
  }
  return;
code_r0x000141e55e59:
  iVar4 = ::FName::Compare(&this->PackageName,&pFVar10->PackageName);
  if (iVar4 == 0) {
    iVar4 = ::FName::Compare(&this->AssetName,&pFVar7[1].AssetName);
  }
  if (-1 < iVar4) goto LAB_141e55e50;
LAB_141e55e80:
  do {
    pFVar6 = pFVar5;
    pFVar5 = pFVar6 + -1;
    if (pFVar5 <= this) break;
    iVar4 = ::FName::Compare(&pFVar5->PackageName,&this->PackageName);
    if (iVar4 == 0) {
      iVar4 = ::FName::Compare(&pFVar6[-1].AssetName,&this->AssetName);
    }
  } while (-1 < iVar4);
  FVar1 = pFVar6[-1].AssetName;
  if (pFVar10 <= pFVar5) {
    FVar2 = pFVar10->PackageName;
    FVar3 = pFVar7[1].AssetName;
    pFVar10->PackageName = pFVar5->PackageName;
    pFVar7[1].AssetName = FVar1;
    pFVar5->PackageName = FVar2;
    pFVar6[-1].AssetName = FVar3;
    goto LAB_141e55e50;
  }
  FVar2 = this->PackageName;
  FVar3 = this->AssetName;
  iVar8 = iVar8 + -1;
  this->PackageName = pFVar5->PackageName;
  this->AssetName = FVar1;
  pFVar5->PackageName = FVar2;
  pFVar6[-1].AssetName = FVar3;
  if ((longlong)((longlong)pFVar5 + (-0x10 - (longlong)this) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pFVar11 - (longlong)pFVar10 & 0xfffffffffffffff0U)) {
    if (pFVar10 < pFVar11) {
      *ppFVar9 = pFVar10;
      ppFVar9[1] = pFVar11;
      *(int *)(ppFVar9 + 2) = iVar8;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar5 <= this + 1) goto LAB_141e55f5d;
    pFVar11 = pFVar6 + -2;
    pFVar10 = this;
  }
  else {
    if (this + 1 < pFVar5) {
      *ppFVar9 = this;
      ppFVar9[1] = pFVar6 + -2;
      *(int *)(ppFVar9 + 2) = iVar8;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar11 <= pFVar10) goto LAB_141e55f5d;
  }
  iVar4 = (int)((longlong)pFVar11 - (longlong)pFVar10 >> 4) + 1;
  this = pFVar10;
  if (iVar8 == 0) goto LAB_141e55f4b;
  goto LAB_141e55e20;
}

// LoadFromCompactBinary<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_> @ 141e56030

bool __cdecl
LoadFromCompactBinary<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_>
          (FCbFieldView *param_1,
          TArray<TTuple<FName,TOptional<FString>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FName *pFVar2;
  FName *pFVar3;
  TTuple<FName,TOptional<FString>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FCbArrayView *this;
  ulong64 uVar9;
  longlong lVar10;
  bool bVar11;
  FCbFieldView local_98;
  TCbFieldIterator<FCbFieldView> local_88;
  TCbFieldIterator<FCbFieldView> local_70;
  FCbFieldView local_58;
  FCbFieldView local_48 [3];
  
  this = FCbFieldView::AsArrayView(param_1,(FCbArrayView *)&local_98);
  uVar9 = FCbArrayView::Num(this);
  if (uVar9 < 0x80000000) {
    iVar8 = (int)uVar9;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9 & 0xffffffff);
    }
    pTVar4 = (TTuple<FName,TOptional<FString>_> *)(param_2->AllocatorInstance).Data;
    piVar1 = &param_2->ArrayMax;
    if (param_2->ArrayMax < iVar8) {
      DestructItems<TTuple<FName,TOptional<FString>_>,int>(pTVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != iVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar8,&param_2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<TTuple<FName,TOptional<FString>_>,int>(pTVar4,param_2->ArrayNum);
      param_2->ArrayNum = 0;
    }
    bVar11 = param_1->Error == None;
    FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)&local_70);
    while (((byte)local_70._padding_ & 0x1f) != 0) {
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&param_2->AllocatorInstance,piVar1);
      }
      lVar10 = (longlong)iVar8;
      param_2->ArrayNum = iVar8 + 1;
      pFVar5 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + lVar10 * 0x18) = 0;
      *(undefined4 *)(pFVar5 + lVar10 * 0x18 + 0x10) = 0;
      *(undefined4 *)(pFVar5 + lVar10 * 0x18 + 0x14) = 0xffffffff;
      pFVar3 = (FName *)(pFVar5 + lVar10 * 0x18);
      pFVar3[1].ComparisonIndex = 0;
      pFVar3[1].Number = 0;
      pFVar2 = pFVar3 + 1;
      local_48[0].Value = (void *)local_70._padding_;
      FCbFieldView::CreateViewIterator(local_48,(FCbFieldViewIterator *)&local_88);
      local_98.TypeWithFlags = (undefined1)local_88._padding_;
      local_98.Error = local_88._padding_._1_1_;
      local_98._2_2_ = local_88._padding_._2_2_;
      local_98.NameLen = local_88._padding_._4_4_;
      local_98.Value = (void *)local_88._padding_;
      TCbFieldIterator<FCbFieldView>::operator++(&local_88);
      bVar6 = LoadFromCompactBinary(&local_98,pFVar3);
      local_98.TypeWithFlags = (undefined1)local_88._padding_;
      local_98.Error = local_88._padding_._1_1_;
      local_98._2_2_ = local_88._padding_._2_2_;
      local_98.NameLen = local_88._padding_._4_4_;
      local_98.Value = (void *)local_88._padding_;
      TCbFieldIterator<FCbFieldView>::operator++(&local_88);
      local_58.TypeWithFlags = local_98.TypeWithFlags;
      local_58.Error = local_98.Error;
      local_58._2_2_ = local_98._2_2_;
      local_58.NameLen = local_98.NameLen;
      local_58.Value = local_98.Value;
      bVar7 = FCbFieldView::AsBool(&local_58,false);
      if (local_58.Error == None) {
        if (bVar7) {
          if (*pFVar2 != (FName)0x0) {
            FMemory::Free((void *)*pFVar2);
          }
          pFVar2->ComparisonIndex = 0;
          pFVar2->Number = 0;
          pFVar3[2].ComparisonIndex = 0;
          pFVar3[2].Number = 0;
          local_98.TypeWithFlags = (undefined1)local_88._padding_;
          local_98.Error = local_88._padding_._1_1_;
          local_98._2_2_ = local_88._padding_._2_2_;
          local_98.NameLen = local_88._padding_._4_4_;
          local_98.Value = (void *)local_88._padding_;
          TCbFieldIterator<FCbFieldView>::operator++(&local_88);
          bVar6 = LoadFromCompactBinary(&local_98,(FString *)pFVar2);
        }
      }
      else {
        bVar6 = false;
      }
      bVar11 = (bool)(bVar11 & bVar6);
      TCbFieldIterator<FCbFieldView>::operator++(&local_70);
    }
  }
  else {
    UE::Serialization::Private::LogFieldTooLargeForArrayWarning(uVar9);
    bVar11 = false;
  }
  return bVar11;
}

// LoadFromCompactBinary<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> @ 141e56250

bool __cdecl
LoadFromCompactBinary<FTopLevelAssetPath,TSizedDefaultAllocator<32>_>
          (FCbFieldView *param_1,TArray<FTopLevelAssetPath,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  FCbArrayView *this;
  ulong64 uVar4;
  FTopLevelAssetPath *pFVar5;
  bool bVar6;
  FCbFieldView local_38;
  TCbFieldIterator<FCbFieldView> local_28;
  
  this = FCbFieldView::AsArrayView(param_1,(FCbArrayView *)&local_38);
  uVar4 = FCbArrayView::Num(this);
  if (0x7fffffff < uVar4) {
    UE::Serialization::Private::LogFieldTooLargeForArrayWarning(uVar4);
    return false;
  }
  iVar3 = (int)uVar4;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar4 & 0xffffffff);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,&param_2->AllocatorInstance,0,piVar1);
  }
  bVar6 = param_1->Error == None;
  FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)&local_28);
  while (((byte)local_28._padding_ & 0x1f) != 0) {
    iVar3 = param_2->ArrayNum;
    if (iVar3 == *piVar1) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar3 + 1;
    pFVar5 = (FTopLevelAssetPath *)((param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10);
    (pFVar5->PackageName).ComparisonIndex = 0;
    (pFVar5->PackageName).Number = 0;
    (pFVar5->AssetName).ComparisonIndex = 0;
    (pFVar5->AssetName).Number = 0;
    local_38.Value = (void *)local_28._padding_;
    bVar2 = LoadFromCompactBinary(&local_38,pFVar5);
    bVar6 = (bool)(bVar6 & bVar2);
    TCbFieldIterator<FCbFieldView>::operator++(&local_28);
  }
  return bVar6;
}

// StaticEnum<enum_ELifetimeCondition> @ 141e564b0

UEnum * __cdecl StaticEnum<enum_ELifetimeCondition>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELifetimeCondition,(UObject *)pUVar1,
                       L"ELifetimeCondition");
  }
  return Z_Registration_Info_UEnum_ELifetimeCondition.OuterSingleton;
}

// operator() @ 141e583b0

bool __thiscall
`Algo::
CompareMultiMap<TMultiMap<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>,FNameLexicalLess,FOptionalFStringIgnoreCaseLess>'
::__l2::<lambda_1>::operator()
          (void *this,TTuple<FName,TOptional<FString>_> *param_1,
          TTuple<FName,TOptional<FString>_> *param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ::FName::Compare((FName *)param_1,(FName *)param_2);
  if (iVar2 < 0) {
    return true;
  }
  iVar2 = ::FName::Compare((FName *)param_2,(FName *)param_1);
  if (-1 < iVar2) {
    bVar1 = FOptionalFStringIgnoreCaseLess::operator()
                      (*(FOptionalFStringIgnoreCaseLess **)((longlong)this + 8),
                       (TOptional<FString> *)&param_1->field_0x8,
                       (TOptional<FString> *)&param_2->field_0x8);
    if (bVar1) {
      return true;
    }
    FOptionalFStringIgnoreCaseLess::operator()
              (*(FOptionalFStringIgnoreCaseLess **)((longlong)this + 8),
               (TOptional<FString> *)&param_2->field_0x8,(TOptional<FString> *)&param_1->field_0x8);
  }
  return false;
}

// `vector_deleting_destructor'`adjustor{40}' @ 141e5851c

/* [thunk]:public: virtual void * __ptr64 __cdecl UDerrivedClass::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UDerrivedClass::_vector_deleting_destructor__adjustor_40__(UDerrivedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDerrivedClass *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 141e5852c

/* [thunk]:public: virtual void * __ptr64 __cdecl UDerrivedClass::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UDerrivedClass::_vector_deleting_destructor__adjustor_48__(UDerrivedClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UDerrivedClass *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 141e5853c

/* [thunk]:public: virtual void * __ptr64 __cdecl UMiddleClass::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMiddleClass::_vector_deleting_destructor__adjustor_40__(UMiddleClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMiddleClass *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 141e58550

void * __thiscall
FAnotherBaseClass::_scalar_deleting_destructor_(FAnotherBaseClass *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58580

void * __thiscall FTestBaseClass::_scalar_deleting_destructor_(FTestBaseClass *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e585b0

void * __thiscall UArrayProperty::_scalar_deleting_destructor_(UArrayProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58610

void * __thiscall UBoolProperty::_scalar_deleting_destructor_(UBoolProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58670

void * __thiscall UByteProperty::_scalar_deleting_destructor_(UByteProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e586d0

void * __thiscall UClassProperty::_scalar_deleting_destructor_(UClassProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58730

void * __thiscall
UDelegateProperty::_scalar_deleting_destructor_(UDelegateProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58790

void * __thiscall UDerrivedClass::_scalar_deleting_destructor_(UDerrivedClass *this,uint param_1)

{
  *(undefined ***)&this->field_0x30 = &___7UDerrivedClass__6B_;
  *(undefined ***)&this->field_0x28 = &UMiddleClass::_vftable__for__FTestBaseClass__;
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58810

void * __thiscall UDoubleProperty::_scalar_deleting_destructor_(UDoubleProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58870

void * __thiscall UEnumProperty::_scalar_deleting_destructor_(UEnumProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e588d0

void * __thiscall UFloatProperty::_scalar_deleting_destructor_(UFloatProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58930

void * __thiscall UGCBarrier::_scalar_deleting_destructor_(UGCBarrier *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58990

void * __thiscall UInt16Property::_scalar_deleting_destructor_(UInt16Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e589f0

void * __thiscall UInt64Property::_scalar_deleting_destructor_(UInt64Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58a50

void * __thiscall UInt8Property::_scalar_deleting_destructor_(UInt8Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58ab0

void * __thiscall UIntProperty::_scalar_deleting_destructor_(UIntProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58b10

void * __thiscall
UInterfaceProperty::_scalar_deleting_destructor_(UInterfaceProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58b70

void * __thiscall
ULazyObjectProperty::_scalar_deleting_destructor_(ULazyObjectProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58bd0

void * __thiscall UMapProperty::_scalar_deleting_destructor_(UMapProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x98);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58c30

void * __thiscall UMiddleClass::_scalar_deleting_destructor_(UMiddleClass *this,uint param_1)

{
  *(undefined ***)&this->field_0x28 = &_vftable__for__FTestBaseClass__;
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58ca0

void * __thiscall
UMulticastDelegateProperty::_scalar_deleting_destructor_
          (UMulticastDelegateProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58d00

void * __thiscall
UMulticastDelegatePropertyWrapper::_scalar_deleting_destructor_
          (UMulticastDelegatePropertyWrapper *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58d60

void * __thiscall
UMulticastInlineDelegateProperty::_scalar_deleting_destructor_
          (UMulticastInlineDelegateProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58dc0

void * __thiscall
UMulticastInlineDelegatePropertyWrapper::_scalar_deleting_destructor_
          (UMulticastInlineDelegatePropertyWrapper *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58e20

void * __thiscall
UMulticastSparseDelegateProperty::_scalar_deleting_destructor_
          (UMulticastSparseDelegateProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58e80

void * __thiscall UNameProperty::_scalar_deleting_destructor_(UNameProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58ee0

void * __thiscall
UNumericProperty::_scalar_deleting_destructor_(UNumericProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58f40

void * __thiscall UObject::_scalar_deleting_destructor_(UObject *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e58fa0

void * __thiscall UObjectProperty::_scalar_deleting_destructor_(UObjectProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59000

void * __thiscall
UObjectPropertyBase::_scalar_deleting_destructor_(UObjectPropertyBase *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59060

void * __thiscall
UObjectPtrAbstractDerivedTestClass::_scalar_deleting_destructor_
          (UObjectPtrAbstractDerivedTestClass *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e590c0

void * __thiscall
UObjectPtrAbstractTestClass::_scalar_deleting_destructor_
          (UObjectPtrAbstractTestClass *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59120

void * __thiscall
UObjectPtrDerrivedTestClass::_scalar_deleting_destructor_
          (UObjectPtrDerrivedTestClass *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59180

void * __thiscall
UObjectPtrNotLazyTestClass::_scalar_deleting_destructor_
          (UObjectPtrNotLazyTestClass *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e591e0

void * __thiscall
UObjectPtrStressTestClass::_scalar_deleting_destructor_
          (UObjectPtrStressTestClass *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59240

void * __thiscall
UObjectPtrTestClass::_scalar_deleting_destructor_(UObjectPtrTestClass *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e592a0

void * __thiscall
UObjectPtrTestClassWithRef::_scalar_deleting_destructor_
          (UObjectPtrTestClassWithRef *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UObjectPtrTestClassWithRef__6B_;
  pFVar1 = (this->ArrayObjPtr).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59320

void * __thiscall
UObjectWithClassProperty::_scalar_deleting_destructor_(UObjectWithClassProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59380

void * __thiscall
UObjectWithRawProperty::_scalar_deleting_destructor_(UObjectWithRawProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e593e0

void * __thiscall
UOptionalPropertyTestObject::_scalar_deleting_destructor_
          (UOptionalPropertyTestObject *this,uint param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UOptionalPropertyTestObject__6B_;
  plVar1 = *(longlong **)&(this->OptionalText).field0_0x0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((*(int *)((longlong)&(this->OptionalString).field0_0x0 + 0xc) != -1) &&
     (pFVar2 = (this->OptionalString).field0_0x0.TypedValue.Data.AllocatorInstance.Data,
     pFVar2 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59470

void * __thiscall UProperty::_scalar_deleting_destructor_(UProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e594d0

void * __thiscall
UPropertyWrapper::_scalar_deleting_destructor_(UPropertyWrapper *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59530

void * __thiscall USetProperty::_scalar_deleting_destructor_(USetProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59590

void * __thiscall
USoftClassProperty::_scalar_deleting_destructor_(USoftClassProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e595f0

void * __thiscall
USoftObjectProperty::_scalar_deleting_destructor_(USoftObjectProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59650

void * __thiscall UStrProperty::_scalar_deleting_destructor_(UStrProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e596b0

void * __thiscall UStructProperty::_scalar_deleting_destructor_(UStructProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59710

void * __thiscall UTextProperty::_scalar_deleting_destructor_(UTextProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59770

void * __thiscall UUInt16Property::_scalar_deleting_destructor_(UUInt16Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e597d0

void * __thiscall UUInt32Property::_scalar_deleting_destructor_(UUInt32Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59830

void * __thiscall UUInt64Property::_scalar_deleting_destructor_(UUInt64Property *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141e59890

void * __thiscall
UWeakObjectProperty::_scalar_deleting_destructor_(UWeakObjectProperty *this,uint param_1)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeARFilter @ 141e5aec0

void __cdecl EmptyLinkFunctionForGeneratedCodeARFilter(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetBundleData @ 141e5aed0

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetBundleData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreNetTypes @ 141e5aee0

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreNetTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreUObject_init @ 141e5aef0

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreUObject_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGCObject @ 141e5af00

void __cdecl EmptyLinkFunctionForGeneratedCodeGCObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeGarbageCollectionInternal @ 141e5af10

void __cdecl EmptyLinkFunctionForGeneratedCodeGarbageCollectionInternal(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeInstancedStructBaseStructQueryParams @ 141e5af20

void __cdecl EmptyLinkFunctionForGeneratedCodeInstancedStructBaseStructQueryParams(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObject @ 141e5af30

void __cdecl EmptyLinkFunctionForGeneratedCodeObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeObjectPtrTestClass @ 141e5af40

void __cdecl EmptyLinkFunctionForGeneratedCodeObjectPtrTestClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOptionalPropertyTestObject @ 141e5af50

void __cdecl EmptyLinkFunctionForGeneratedCodeOptionalPropertyTestObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyText @ 141e5af60

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyText(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePropertyWrapper @ 141e5af70

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyWrapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTestUndeclaredScriptStructObjectReferences @ 141e5af80

void __cdecl EmptyLinkFunctionForGeneratedCodeTestUndeclaredScriptStructObjectReferences(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTestUninitializedScriptStructMembersTest @ 141e5af90

void __cdecl EmptyLinkFunctionForGeneratedCodeTestUninitializedScriptStructMembersTest(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeUnrealTypePrivate @ 141e5afa0

void __cdecl EmptyLinkFunctionForGeneratedCodeUnrealTypePrivate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMNativeRational @ 141e5afb0

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMNativeRational(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseConstraints @ 141e5afc0

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseConstraints(void)

{
  return;
}

// LoadFromCompactBinary @ 141e5ef00

bool __cdecl LoadFromCompactBinary(FCbFieldView *param_1,FSoftObjectPath *param_2)

{
  ForAnyElementType FVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  FUtf8String *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  FString local_e8;
  FSoftObjectPath local_d8;
  ForAnyElementType local_b8;
  undefined8 uStack_b0;
  FTopLevelAssetPath local_a8;
  TCbFieldIterator<FCbFieldView> local_98;
  FTopLevelAssetPath local_78;
  void *local_68;
  FUtf8String local_58;
  FUtf8String local_48 [2];
  
  pFVar7 = (FScriptContainerElement *)0x0;
  local_a8.PackageName.ComparisonIndex.Value = 0;
  local_a8.PackageName.Number = 0;
  local_a8.AssetName.ComparisonIndex.Value = 0;
  local_a8.AssetName.Number = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  FCbFieldView::CreateViewIterator(param_1,(FCbFieldViewIterator *)&local_98);
  lVar3 = local_98._padding_;
  lVar2 = local_98._padding_;
  local_68 = local_98.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_98);
  local_b8.Data = (FScriptContainerElement *)lVar2;
  uStack_b0 = (void *)lVar3;
  bVar4 = LoadFromCompactBinary((FCbFieldView *)&local_b8,&local_a8);
  local_68 = local_98.FieldsEnd;
  TCbFieldIterator<FCbFieldView>::operator++(&local_98);
  local_b8.Data = (FScriptContainerElement *)local_98._padding_;
  uStack_b0 = (void *)local_98._padding_;
  bVar5 = LoadFromCompactBinary((FCbFieldView *)&local_b8,&local_e8);
  FVar1.Data = local_e8.Data.AllocatorInstance.Data;
  local_78.PackageName = local_a8.PackageName;
  local_78.AssetName = local_a8.AssetName;
  iVar8 = local_e8.Data.ArrayNum;
  bVar10 = local_e8.Data.ArrayNum == 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_d8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.PackageName.Number = 0;
  iVar9 = 0;
  iVar8 = iVar8 + -1;
  if (bVar10) {
    iVar8 = iVar9;
  }
  local_d8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_d8.AssetPath.AssetName.Number = 0;
  local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.SubPathString.Data.ArrayNum = 0;
  local_d8.SubPathString.Data.ArrayMax = 0;
  pFVar6 = FUtf8String::ConstructFromPtrSize(&local_58,(wchar_t *)FVar1.Data,iVar8);
  iVar8 = iVar9;
  if (local_48 != pFVar6) {
    pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar9 = (pFVar6->Data).ArrayNum;
    iVar8 = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  uStack_b0 = (void *)CONCAT44(iVar8,iVar9);
  local_b8.Data = pFVar7;
  FSoftObjectPath::SetPath(&local_d8,&local_78,(TStringOverload<FUtf8String> *)&local_b8);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  pFVar6 = &param_2->SubPathString;
  (param_2->AssetPath).PackageName = local_d8.AssetPath.PackageName;
  (param_2->AssetPath).AssetName = local_d8.AssetPath.AssetName;
  if (pFVar6 != &local_d8.SubPathString) {
    pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_d8.SubPathString.Data.AllocatorInstance.Data;
    (param_2->SubPathString).Data.ArrayNum = local_d8.SubPathString.Data.ArrayNum;
    (param_2->SubPathString).Data.ArrayMax = local_d8.SubPathString.Data.ArrayMax;
    local_d8.SubPathString.Data.ArrayNum = 0;
    local_d8.SubPathString.Data.ArrayMax = 0;
    local_d8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return bVar5 && bVar4;
}

// Z_Construct_UClass_UArrayProperty_NoRegister @ 141e61f00

UClass * __cdecl Z_Construct_UClass_UArrayProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UArrayProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ArrayProperty",
               &Z_Registration_Info_UClass_UArrayProperty.InnerSingleton,
               UArrayProperty::StaticRegisterNativesUArrayProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FArrayProperty,L"Engine",InternalConstructor<UArrayProperty>,
               InternalVTableHelperCtorCaller<UArrayProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UArrayProperty.InnerSingleton;
}

// Z_Construct_UClass_UBoolProperty_NoRegister @ 141e61fc0

UClass * __cdecl Z_Construct_UClass_UBoolProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBoolProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"BoolProperty",
               &Z_Registration_Info_UClass_UBoolProperty.InnerSingleton,
               UBoolProperty::StaticRegisterNativesUBoolProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FBoolProperty,L"Engine",InternalConstructor<UBoolProperty>,
               InternalVTableHelperCtorCaller<UBoolProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBoolProperty.InnerSingleton;
}

// Z_Construct_UClass_UByteProperty_NoRegister @ 141e62080

UClass * __cdecl Z_Construct_UClass_UByteProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UByteProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ByteProperty",
               &Z_Registration_Info_UClass_UByteProperty.InnerSingleton,
               UByteProperty::StaticRegisterNativesUByteProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FByteProperty,L"Engine",InternalConstructor<UByteProperty>,
               InternalVTableHelperCtorCaller<UByteProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UByteProperty.InnerSingleton;
}

// Z_Construct_UClass_UClassProperty_NoRegister @ 141e62140

UClass * __cdecl Z_Construct_UClass_UClassProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClassProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ClassProperty",
               &Z_Registration_Info_UClass_UClassProperty.InnerSingleton,
               UClassProperty::StaticRegisterNativesUClassProperty,0x80,8,CLASS_Intrinsic,
               CASTCLASS_FClassProperty,L"Engine",InternalConstructor<UClassProperty>,
               InternalVTableHelperCtorCaller<UClassProperty>,local_res8,
               UObjectProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClassProperty.InnerSingleton;
}

// Z_Construct_UClass_UDelegateProperty_NoRegister @ 141e62200

UClass * __cdecl Z_Construct_UClass_UDelegateProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DelegateProperty",
               &Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton,
               UDelegateProperty::StaticRegisterNativesUDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FDelegateProperty,L"Engine",InternalConstructor<UDelegateProperty>,
               InternalVTableHelperCtorCaller<UDelegateProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDelegateProperty.InnerSingleton;
}

// Z_Construct_UClass_UDerrivedClass_NoRegister @ 141e622c0

UClass * __cdecl Z_Construct_UClass_UDerrivedClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DerrivedClass",
               &Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton,
               UDerrivedClass::StaticRegisterNativesUDerrivedClass,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDerrivedClass>,
               InternalVTableHelperCtorCaller<UDerrivedClass>,local_res8,UMiddleClass::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDerrivedClass.InnerSingleton;
}

// Z_Construct_UClass_UDoubleProperty_NoRegister @ 141e62380

UClass * __cdecl Z_Construct_UClass_UDoubleProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"DoubleProperty",
               &Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton,
               UDoubleProperty::StaticRegisterNativesUDoubleProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FDoubleProperty,L"Engine",InternalConstructor<UDoubleProperty>,
               InternalVTableHelperCtorCaller<UDoubleProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDoubleProperty.InnerSingleton;
}

// Z_Construct_UClass_UEnumProperty_NoRegister @ 141e62440

UClass * __cdecl Z_Construct_UClass_UEnumProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnumProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EnumProperty",
               &Z_Registration_Info_UClass_UEnumProperty.InnerSingleton,
               UEnumProperty::StaticRegisterNativesUEnumProperty,0x80,8,CLASS_Intrinsic,
               CASTCLASS_FEnumProperty,L"Engine",InternalConstructor<UEnumProperty>,
               InternalVTableHelperCtorCaller<UEnumProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnumProperty.InnerSingleton;
}

// Z_Construct_UClass_UFloatProperty_NoRegister @ 141e62500

UClass * __cdecl Z_Construct_UClass_UFloatProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFloatProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"FloatProperty",
               &Z_Registration_Info_UClass_UFloatProperty.InnerSingleton,
               UFloatProperty::StaticRegisterNativesUFloatProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FFloatProperty,L"Engine",InternalConstructor<UFloatProperty>,
               InternalVTableHelperCtorCaller<UFloatProperty>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFloatProperty.InnerSingleton;
}

// Z_Construct_UClass_UGCBarrier_NoRegister @ 141e625c0

UClass * __cdecl Z_Construct_UClass_UGCBarrier_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGCBarrier.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCBarrier",
               &Z_Registration_Info_UClass_UGCBarrier.InnerSingleton,
               UGCBarrier::StaticRegisterNativesUGCBarrier,0x28,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGCBarrier>,
               InternalVTableHelperCtorCaller<UGCBarrier>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCBarrier.InnerSingleton;
}

// Z_Construct_UClass_UGCObjectReferencer_NoRegister @ 141e62670

UClass * __cdecl Z_Construct_UClass_UGCObjectReferencer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UGCObjectReferencer::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"GCObjectReferencer",
               &Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton,
               UGCObjectReferencer::StaticRegisterNativesUGCObjectReferencer,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UGCObjectReferencer>,
               InternalVTableHelperCtorCaller<UGCObjectReferencer>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGCObjectReferencer.InnerSingleton;
}

// Z_Construct_UClass_UInt16Property_NoRegister @ 141e62680

UClass * __cdecl Z_Construct_UClass_UInt16Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int16Property",
               &Z_Registration_Info_UClass_UInt16Property.InnerSingleton,
               UInt16Property::StaticRegisterNativesUInt16Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FInt16Property,L"Engine",InternalConstructor<UInt16Property>,
               InternalVTableHelperCtorCaller<UInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt16Property.InnerSingleton;
}

// Z_Construct_UClass_UInt64Property_NoRegister @ 141e62740

UClass * __cdecl Z_Construct_UClass_UInt64Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int64Property",
               &Z_Registration_Info_UClass_UInt64Property.InnerSingleton,
               UInt64Property::StaticRegisterNativesUInt64Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FInt64Property,L"Engine",InternalConstructor<UInt64Property>,
               InternalVTableHelperCtorCaller<UInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt64Property.InnerSingleton;
}

// Z_Construct_UClass_UInt8Property_NoRegister @ 141e62800

UClass * __cdecl Z_Construct_UClass_UInt8Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInt8Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Int8Property",
               &Z_Registration_Info_UClass_UInt8Property.InnerSingleton,
               UInt8Property::StaticRegisterNativesUInt8Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FInt8Property,L"Engine",InternalConstructor<UInt8Property>,
               InternalVTableHelperCtorCaller<UInt8Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInt8Property.InnerSingleton;
}

// Z_Construct_UClass_UIntProperty_NoRegister @ 141e628c0

UClass * __cdecl Z_Construct_UClass_UIntProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIntProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"IntProperty",
               &Z_Registration_Info_UClass_UIntProperty.InnerSingleton,
               UIntProperty::StaticRegisterNativesUIntProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FIntProperty,L"Engine",InternalConstructor<UIntProperty>,
               InternalVTableHelperCtorCaller<UIntProperty>,local_res8,UNumericProperty::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIntProperty.InnerSingleton;
}

// Z_Construct_UClass_UInterfaceProperty_NoRegister @ 141e62980

UClass * __cdecl Z_Construct_UClass_UInterfaceProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"InterfaceProperty",
               &Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton,
               UInterfaceProperty::StaticRegisterNativesUInterfaceProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FInterfaceProperty,L"Engine",InternalConstructor<UInterfaceProperty>,
               InternalVTableHelperCtorCaller<UInterfaceProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterfaceProperty.InnerSingleton;
}

// Z_Construct_UClass_ULazyObjectProperty_NoRegister @ 141e62a40

UClass * __cdecl Z_Construct_UClass_ULazyObjectProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LazyObjectProperty",
               &Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton,
               ULazyObjectProperty::StaticRegisterNativesULazyObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FLazyObjectProperty,L"Engine",InternalConstructor<ULazyObjectProperty>,
               InternalVTableHelperCtorCaller<ULazyObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULazyObjectProperty.InnerSingleton;
}

// Z_Construct_UClass_UMapProperty_NoRegister @ 141e62b00

UClass * __cdecl Z_Construct_UClass_UMapProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMapProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MapProperty",
               &Z_Registration_Info_UClass_UMapProperty.InnerSingleton,
               UMapProperty::StaticRegisterNativesUMapProperty,0x98,8,CLASS_Intrinsic,
               CASTCLASS_FMapProperty,L"Engine",InternalConstructor<UMapProperty>,
               InternalVTableHelperCtorCaller<UMapProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMapProperty.InnerSingleton;
}

// Z_Construct_UClass_UMiddleClass_NoRegister @ 141e62bc0

UClass * __cdecl Z_Construct_UClass_UMiddleClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMiddleClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MiddleClass",
               &Z_Registration_Info_UClass_UMiddleClass.InnerSingleton,
               UMiddleClass::StaticRegisterNativesUMiddleClass,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMiddleClass>,
               InternalVTableHelperCtorCaller<UMiddleClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMiddleClass.InnerSingleton;
}

// Z_Construct_UClass_UMulticastDelegatePropertyWrapper_NoRegister @ 141e62c70

UClass * __cdecl Z_Construct_UClass_UMulticastDelegatePropertyWrapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton,
               UMulticastDelegatePropertyWrapper::
               StaticRegisterNativesUMulticastDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastDelegatePropertyWrapper>,local_res8,
               UPropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastDelegatePropertyWrapper.InnerSingleton;
}

// Z_Construct_UClass_UMulticastDelegateProperty_NoRegister @ 141e62d30

UClass * __cdecl Z_Construct_UClass_UMulticastDelegateProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastDelegateProperty.InnerSingleton,
               UMulticastDelegateProperty::StaticRegisterNativesUMulticastDelegateProperty,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_FMulticastDelegateProperty,L"Engine",
               InternalConstructor<UMulticastDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastDelegateProperty>,local_res8,
               UProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastDelegateProperty.InnerSingleton;
}

// Z_Construct_UClass_UMulticastInlineDelegatePropertyWrapper_NoRegister @ 141e62df0

UClass * __cdecl Z_Construct_UClass_UMulticastInlineDelegatePropertyWrapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegatePropertyWrapper",
               &Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton,
               UMulticastInlineDelegatePropertyWrapper::
               StaticRegisterNativesUMulticastInlineDelegatePropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMulticastInlineDelegatePropertyWrapper>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegatePropertyWrapper>,aFStackX_8,
               UMulticastDelegatePropertyWrapper::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegatePropertyWrapper.InnerSingleton;
}

// Z_Construct_UClass_UMulticastInlineDelegateProperty_NoRegister @ 141e62e00

UClass * __cdecl Z_Construct_UClass_UMulticastInlineDelegateProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastInlineDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton,
               UMulticastInlineDelegateProperty::
               StaticRegisterNativesUMulticastInlineDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastInlineDelegateProperty,L"Engine",
               InternalConstructor<UMulticastInlineDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastInlineDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastInlineDelegateProperty.InnerSingleton;
}

// Z_Construct_UClass_UMulticastSparseDelegateProperty_NoRegister @ 141e62ec0

UClass * __cdecl Z_Construct_UClass_UMulticastSparseDelegateProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MulticastSparseDelegateProperty",
               &Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton,
               UMulticastSparseDelegateProperty::
               StaticRegisterNativesUMulticastSparseDelegateProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FMulticastSparseDelegateProperty,L"Engine",
               InternalConstructor<UMulticastSparseDelegateProperty>,
               InternalVTableHelperCtorCaller<UMulticastSparseDelegateProperty>,local_res8,
               UMulticastDelegateProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMulticastSparseDelegateProperty.InnerSingleton;
}

// Z_Construct_UClass_UNameProperty_NoRegister @ 141e62f80

UClass * __cdecl Z_Construct_UClass_UNameProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNameProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"NameProperty",
               &Z_Registration_Info_UClass_UNameProperty.InnerSingleton,
               UNameProperty::StaticRegisterNativesUNameProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FNameProperty,L"Engine",InternalConstructor<UNameProperty>,
               InternalVTableHelperCtorCaller<UNameProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNameProperty.InnerSingleton;
}

// Z_Construct_UClass_UObjectPropertyBase_NoRegister @ 141e63040

UClass * __cdecl Z_Construct_UClass_UObjectPropertyBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPropertyBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPropertyBase",
               &Z_Registration_Info_UClass_UObjectPropertyBase.InnerSingleton,
               UObjectPropertyBase::StaticRegisterNativesUObjectPropertyBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_FObjectPropertyBase,L"Engine",
               InternalConstructor<UObjectPropertyBase>,
               InternalVTableHelperCtorCaller<UObjectPropertyBase>,local_res8,UProperty::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPropertyBase.InnerSingleton;
}

// Z_Construct_UClass_UObjectProperty_NoRegister @ 141e63100

UClass * __cdecl Z_Construct_UClass_UObjectProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectProperty",
               &Z_Registration_Info_UClass_UObjectProperty.InnerSingleton,
               UObjectProperty::StaticRegisterNativesUObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FObjectProperty,L"Engine",InternalConstructor<UObjectProperty>,
               InternalVTableHelperCtorCaller<UObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectProperty.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_NoRegister @ 141e631c0

UClass * __cdecl Z_Construct_UClass_UObjectPtrAbstractDerivedTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrAbstractDerivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton,
               UObjectPtrAbstractDerivedTestClass::
               StaticRegisterNativesUObjectPtrAbstractDerivedTestClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectPtrAbstractDerivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrAbstractDerivedTestClass>,local_res8,
               UObjectPtrAbstractTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrAbstractDerivedTestClass.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrDerrivedTestClass_NoRegister @ 141e63280

UClass * __cdecl Z_Construct_UClass_UObjectPtrDerrivedTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrDerrivedTestClass",
               &Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton,
               UObjectPtrDerrivedTestClass::StaticRegisterNativesUObjectPtrDerrivedTestClass,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrDerrivedTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrDerrivedTestClass>,local_res8,
               UObjectPtrTestClass::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrDerrivedTestClass.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrNotLazyTestClass_NoRegister @ 141e63340

UClass * __cdecl Z_Construct_UClass_UObjectPtrNotLazyTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrNotLazyTestClass",
               &Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton,
               UObjectPtrNotLazyTestClass::StaticRegisterNativesUObjectPtrNotLazyTestClass,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrNotLazyTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrNotLazyTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrNotLazyTestClass.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrStressTestClass_NoRegister @ 141e633f0

UClass * __cdecl Z_Construct_UClass_UObjectPtrStressTestClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrStressTestClass",
               &Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton,
               UObjectPtrStressTestClass::StaticRegisterNativesUObjectPtrStressTestClass,0x68,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrStressTestClass>,
               InternalVTableHelperCtorCaller<UObjectPtrStressTestClass>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrStressTestClass.InnerSingleton;
}

// Z_Construct_UClass_UObjectPtrTestClassWithRef_NoRegister @ 141e634a0

UClass * __cdecl Z_Construct_UClass_UObjectPtrTestClassWithRef_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectPtrTestClassWithRef",
               &Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton,
               UObjectPtrTestClassWithRef::StaticRegisterNativesUObjectPtrTestClassWithRef,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectPtrTestClassWithRef>,
               InternalVTableHelperCtorCaller<UObjectPtrTestClassWithRef>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectPtrTestClassWithRef.InnerSingleton;
}

// Z_Construct_UClass_UObjectWithClassProperty_NoRegister @ 141e63550

UClass * __cdecl Z_Construct_UClass_UObjectWithClassProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithClassProperty",
               &Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton,
               UObjectWithClassProperty::StaticRegisterNativesUObjectWithClassProperty,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UObjectWithClassProperty>,
               InternalVTableHelperCtorCaller<UObjectWithClassProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithClassProperty.InnerSingleton;
}

// Z_Construct_UClass_UObjectWithRawProperty_NoRegister @ 141e63600

UClass * __cdecl Z_Construct_UClass_UObjectWithRawProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ObjectWithRawProperty",
               &Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton,
               UObjectWithRawProperty::StaticRegisterNativesUObjectWithRawProperty,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UObjectWithRawProperty>,
               InternalVTableHelperCtorCaller<UObjectWithRawProperty>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectWithRawProperty.InnerSingleton;
}

// Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister @ 141e636b0

UClass * __cdecl Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"OptionalPropertyTestObject",
               &Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton,
               UOptionalPropertyTestObject::StaticRegisterNativesUOptionalPropertyTestObject,0x58,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptionalPropertyTestObject>,
               InternalVTableHelperCtorCaller<UOptionalPropertyTestObject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptionalPropertyTestObject.InnerSingleton;
}

// Z_Construct_UClass_UPropertyWrapper_NoRegister @ 141e63760

UClass * __cdecl Z_Construct_UClass_UPropertyWrapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PropertyWrapper",
               &Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton,
               UPropertyWrapper::StaticRegisterNativesUPropertyWrapper,0x30,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPropertyWrapper>,
               InternalVTableHelperCtorCaller<UPropertyWrapper>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPropertyWrapper.InnerSingleton;
}

// Z_Construct_UClass_USetProperty_NoRegister @ 141e63810

UClass * __cdecl Z_Construct_UClass_USetProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USetProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SetProperty",
               &Z_Registration_Info_UClass_USetProperty.InnerSingleton,
               USetProperty::StaticRegisterNativesUSetProperty,0x90,8,CLASS_Intrinsic,
               CASTCLASS_FSetProperty,L"Engine",InternalConstructor<USetProperty>,
               InternalVTableHelperCtorCaller<USetProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USetProperty.InnerSingleton;
}

// Z_Construct_UClass_USoftClassProperty_NoRegister @ 141e638d0

UClass * __cdecl Z_Construct_UClass_USoftClassProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoftClassProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SoftClassProperty",
               &Z_Registration_Info_UClass_USoftClassProperty.InnerSingleton,
               USoftClassProperty::StaticRegisterNativesUSoftClassProperty,0x80,8,CLASS_Intrinsic,
               CASTCLASS_FSoftClassProperty,L"Engine",InternalConstructor<USoftClassProperty>,
               InternalVTableHelperCtorCaller<USoftClassProperty>,local_res8,
               USoftObjectProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoftClassProperty.InnerSingleton;
}

// Z_Construct_UClass_USoftObjectProperty_NoRegister @ 141e63990

UClass * __cdecl Z_Construct_UClass_USoftObjectProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"SoftObjectProperty",
               &Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton,
               USoftObjectProperty::StaticRegisterNativesUSoftObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FSoftObjectProperty,L"Engine",InternalConstructor<USoftObjectProperty>,
               InternalVTableHelperCtorCaller<USoftObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoftObjectProperty.InnerSingleton;
}

// Z_Construct_UClass_UStrProperty_NoRegister @ 141e63a50

UClass * __cdecl Z_Construct_UClass_UStrProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStrProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StrProperty",
               &Z_Registration_Info_UClass_UStrProperty.InnerSingleton,
               UStrProperty::StaticRegisterNativesUStrProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FStrProperty,L"Engine",InternalConstructor<UStrProperty>,
               InternalVTableHelperCtorCaller<UStrProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStrProperty.InnerSingleton;
}

// Z_Construct_UClass_UStructProperty_NoRegister @ 141e63b10

UClass * __cdecl Z_Construct_UClass_UStructProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructProperty",
               &Z_Registration_Info_UClass_UStructProperty.InnerSingleton,
               UStructProperty::StaticRegisterNativesUStructProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FStructProperty,L"Engine",InternalConstructor<UStructProperty>,
               InternalVTableHelperCtorCaller<UStructProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructProperty.InnerSingleton;
}

// Z_Construct_UClass_UTextProperty_NoRegister @ 141e63bd0

UClass * __cdecl Z_Construct_UClass_UTextProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"TextProperty",
               &Z_Registration_Info_UClass_UTextProperty.InnerSingleton,
               UTextProperty::StaticRegisterNativesUTextProperty,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FTextProperty,L"Engine",InternalConstructor<UTextProperty>,
               InternalVTableHelperCtorCaller<UTextProperty>,local_res8,UProperty::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextProperty.InnerSingleton;
}

// Z_Construct_UClass_UUInt16Property_NoRegister @ 141e63c90

UClass * __cdecl Z_Construct_UClass_UUInt16Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt16Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt16Property",
               &Z_Registration_Info_UClass_UUInt16Property.InnerSingleton,
               UUInt16Property::StaticRegisterNativesUUInt16Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FUInt16Property,L"Engine",InternalConstructor<UUInt16Property>,
               InternalVTableHelperCtorCaller<UUInt16Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt16Property.InnerSingleton;
}

// Z_Construct_UClass_UUInt32Property_NoRegister @ 141e63d50

UClass * __cdecl Z_Construct_UClass_UUInt32Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt32Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt32Property",
               &Z_Registration_Info_UClass_UUInt32Property.InnerSingleton,
               UUInt32Property::StaticRegisterNativesUUInt32Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FUInt32Property,L"Engine",InternalConstructor<UUInt32Property>,
               InternalVTableHelperCtorCaller<UUInt32Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt32Property.InnerSingleton;
}

// Z_Construct_UClass_UUInt64Property_NoRegister @ 141e63e10

UClass * __cdecl Z_Construct_UClass_UUInt64Property_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUInt64Property.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"UInt64Property",
               &Z_Registration_Info_UClass_UUInt64Property.InnerSingleton,
               UUInt64Property::StaticRegisterNativesUUInt64Property,0x70,8,CLASS_Intrinsic,
               CASTCLASS_FUInt64Property,L"Engine",InternalConstructor<UUInt64Property>,
               InternalVTableHelperCtorCaller<UUInt64Property>,local_res8,
               UNumericProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUInt64Property.InnerSingleton;
}

// Z_Construct_UClass_UWeakObjectProperty_NoRegister @ 141e63ed0

UClass * __cdecl Z_Construct_UClass_UWeakObjectProperty_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"WeakObjectProperty",
               &Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton,
               UWeakObjectProperty::StaticRegisterNativesUWeakObjectProperty,0x78,8,CLASS_Intrinsic,
               CASTCLASS_FWeakObjectProperty,L"Engine",InternalConstructor<UWeakObjectProperty>,
               InternalVTableHelperCtorCaller<UWeakObjectProperty>,local_res8,
               UObjectPropertyBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeakObjectProperty.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ELifetimeCondition @ 141e63f90

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ELifetimeCondition(void)

{
  if (Z_Registration_Info_UEnum_ELifetimeCondition.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELifetimeCondition.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ELifetimeCondition_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELifetimeCondition.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARFilter @ 141e63fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARFilter(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARFilter.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARFilter.InnerSingleton,
               &Z_Construct_UScriptStruct_FARFilter_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARFilter.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARFilter.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAssetBundleData @ 141e64050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetBundleData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetBundleData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetBundleData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetBundleData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetBundleData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetBundleData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FInstancedStructBaseStructQueryParams @ 141e640d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInstancedStructBaseStructQueryParams(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FInstancedStructBaseStructQueryParams_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FInstancedStructBaseStructQueryParams.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyTextFName @ 141e64150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyTextFName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyTextFName.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyTextFName.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyTextFName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyTextFName.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPropertyTextFName.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPropertyTextString @ 141e641d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPropertyTextString(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPropertyTextString.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPropertyTextString.InnerSingleton,
               &Z_Construct_UScriptStruct_FPropertyTextString_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPropertyTextString.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPropertyTextString.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest @ 141e64250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl
Z_Construct_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
      InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
      InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestUndeclaredScriptStructObjectReferencesTest.
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

// Z_Construct_UScriptStruct_FTestUninitializedScriptStructMembersTest @ 141e642d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTestUninitializedScriptStructMembersTest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTestUninitializedScriptStructMembersTest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTestUninitializedScriptStructMembersTest.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FTestUninitializedScriptStructMembersTest_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTestUninitializedScriptStructMembersTest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTestUninitializedScriptStructMembersTest.
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

// Z_Construct_UScriptStruct_FVerseDoubleConstraints @ 141e64350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseDoubleConstraints(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseDoubleConstraints.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseDoubleConstraints.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseDoubleConstraints_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseDoubleConstraints.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVerseDoubleConstraints.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVerseIntConstraints @ 141e643d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseIntConstraints(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseIntConstraints.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseIntConstraints.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseIntConstraints_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseIntConstraints.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FVerseIntConstraints.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVerseRational @ 141e64450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseRational(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseRational.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseRational.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseRational_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseRational.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVerseRational.InnerSingleton;
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

// `dynamic_atexit_destructor_for_'AssetBundleData_Ops'' @ 15034d1e0

void __cdecl _dynamic_atexit_destructor_for__AssetBundleData_Ops__(void)

{
  FTopLevelAssetPath local_18;
  
  local_18 = AssetBundleData_Ops.Name;
  UScriptStruct::RemoveDeferredCppStructOps(&local_18);
  return;
}

// `dynamic_atexit_destructor_for_'FAssetBundlDataImportExportTextTestAutomationTestInstance'' @ 15034d210

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAssetBundlDataImportExportTextTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAssetBundlDataImportExportTextTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FAssetBundleEntryImportExportTextTestAutomationTestInstance'' @ 15034d230

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FAssetBundleEntryImportExportTextTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FAssetBundleEntryImportExportTextTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FLegacyAssetBundleEntryTestAutomationTestInstance'' @ 15034d250

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLegacyAssetBundleEntryTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLegacyAssetBundleEntryTestAutomationTestInstance);
  return;
}

