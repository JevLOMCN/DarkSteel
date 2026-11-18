// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 152

// AllEnumNames'' @ 140f219f0

void __cdecl `dynamic_initializer_for_'UEnum::AllEnumNames__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UEnum::AllEnumNames__);
  return;
}

// AllEnumNamesLock'' @ 140f21a10

void __cdecl `dynamic_initializer_for_'UEnum::AllEnumNamesLock__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UEnum::AllEnumNamesLock__);
  return;
}

// RootNodeID'' @ 140f21a30

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'FCoreRedirectObjectNameTestAutomationTestInstance'' @ 140f21a60

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCoreRedirectObjectNameTestAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCoreRedirectObjectNameTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCoreRedirectObjectNameTestAutomationTestInstance,&local_18,
             false);
  FCoreRedirectObjectNameTestAutomationTestInstance._0_8_ = &___7FCoreRedirectObjectNameTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCoreRedirectObjectNameTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FCoreRedirectTestAutomationTestInstance'' @ 140f21ac0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FCoreRedirectTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FCoreRedirectTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FCoreRedirectTestAutomationTestInstance,&local_18,false);
  FCoreRedirectTestAutomationTestInstance._0_8_ = &___7FCoreRedirectTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FCoreRedirectTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FEnumBitfieldTestAutomationTestInstance'' @ 140f21b20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FEnumBitfieldTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FEnumBitfieldTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FEnumBitfieldTestAutomationTestInstance,&local_18,false);
  FEnumBitfieldTestAutomationTestInstance._0_8_ = &___7FEnumBitfieldTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FEnumBitfieldTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FFieldCastTestAutomationTestInstance'' @ 140f21b80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FFieldCastTestAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFieldCastTest");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FFieldCastTestAutomationTestInstance,&local_18,false);
  FFieldCastTestAutomationTestInstance._0_8_ = &___7FFieldCastTest__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FFieldCastTestAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FFieldVariantTestInstance'' @ 140f21be0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FFieldVariantTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FFieldVariantTest");
  FFieldVariantTest::FFieldVariantTest(&FFieldVariantTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FFieldVariantTestInstance__);
  return;
}

// `dynamic_initializer_for_'GlobalCoreRedirectContext'' @ 140f21c30

void __cdecl UE::CoreRedirects::Private::_dynamic_initializer_for__GlobalCoreRedirectContext__(void)

{
  atexit(_dynamic_atexit_destructor_for__GlobalCoreRedirectContext__);
  return;
}

// `dynamic_initializer_for_'LogCoreNet'' @ 140f21c50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCoreNet__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCoreNet,L"LogCoreNet",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCoreNet__);
  return;
}

// `dynamic_initializer_for_'LogCoreRedirects'' @ 140f21c90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCoreRedirects__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCoreRedirects,L"LogCoreRedirects",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCoreRedirects__);
  return;
}

// `dynamic_initializer_for_'LogEnum'' @ 140f21cd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogEnum__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogEnum,L"LogEnum",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogEnum__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCoreUObject'' @ 140f21d10

void __cdecl _dynamic_initializer_for__ModuleRegistrantCoreUObject__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CoreUObject";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CoreUObject",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCoreUObjectModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h__Script_CoreUObject_2485976884'' @ 140f21d60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h__Script_CoreUObject_2485976884__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h__Script_CoreUObject_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CookedMetaData_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,5,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h__Script_CoreUObject_3907835232'' @ 140f21db0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h__Script_CoreUObject_3907835232__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_CoreNet_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UClassCookedMetaData @ 141fb1a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UClassCookedMetaData(void)

{
  if (Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton,
               &Z_Construct_UClass_UClassCookedMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UClassCookedMetaData.OuterSingleton;
}

// Z_Construct_UClass_UEnumCookedMetaData @ 141fb1a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UEnumCookedMetaData(void)

{
  if (Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton,
               &Z_Construct_UClass_UEnumCookedMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UEnumCookedMetaData.OuterSingleton;
}

// Z_Construct_UClass_UStructCookedMetaData @ 141fb1aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStructCookedMetaData(void)

{
  if (Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton,
               &Z_Construct_UClass_UStructCookedMetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStructCookedMetaData.OuterSingleton;
}

// Z_Construct_UScriptStruct_FFieldCookedMetaDataKey @ 141fb1ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FFieldCookedMetaDataKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataKey.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFieldCookedMetaDataStore @ 141fb1b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FFieldCookedMetaDataValue @ 141fb1be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataValue(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.InnerSingleton,
               &Z_Construct_UScriptStruct_FFieldCookedMetaDataValue_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataValue.InnerSingleton;
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

// Z_Construct_UScriptStruct_FObjectCookedMetaDataStore @ 141fb1c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FObjectCookedMetaDataStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructCookedMetaDataStore @ 141fb1ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructCookedMetaDataStore(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.InnerSingleton;
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

// NewStructOps @ 141fb1d60

void * __cdecl Z_Construct_UScriptStruct_FObjectCookedMetaDataStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FObjectCookedMetaDataStore,&UE::CoreUObject::Private::Construct<FObjectCookedMetaDataStore>,&UE::CoreUObject::Private::ConstructForTests<FObjectCookedMetaDataStore>,&UE::CoreUObject::Private::Destruct<FObjectCookedMetaDataStore>,&UE::CoreUObject::Private::Copy<FObjectCookedMetaDataStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141fb1da0

void * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFieldCookedMetaDataKey,&UE::CoreUObject::Private::Construct<FFieldCookedMetaDataKey>,&UE::CoreUObject::Private::ConstructForTests<FFieldCookedMetaDataKey>,&UE::CoreUObject::Private::Destruct<FFieldCookedMetaDataKey>,&UE::CoreUObject::Private::Copy<FFieldCookedMetaDataKey>,&UE::CoreUObject::Private::GetStructTypeHash<FFieldCookedMetaDataKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141fb1de0

void * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataValue_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFieldCookedMetaDataValue,&UE::CoreUObject::Private::Construct<FFieldCookedMetaDataValue>,&UE::CoreUObject::Private::ConstructForTests<FFieldCookedMetaDataValue>,&UE::CoreUObject::Private::Destruct<FFieldCookedMetaDataValue>,&UE::CoreUObject::Private::Copy<FFieldCookedMetaDataValue>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 141fb2870

void * __cdecl Z_Construct_UScriptStruct_FFieldCookedMetaDataStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FFieldCookedMetaDataStore,&UE::CoreUObject::Private::Construct<FFieldCookedMetaDataStore>,&UE::CoreUObject::Private::ConstructForTests<FFieldCookedMetaDataStore>,&UE::CoreUObject::Private::Destruct<FFieldCookedMetaDataStore>,&UE::CoreUObject::Private::Copy<FFieldCookedMetaDataStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 141fb28b0

void * __thiscall
FEnumBitfieldTest::_scalar_deleting_destructor_(FEnumBitfieldTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// NewStructOps @ 141fb2a60

void * __cdecl Z_Construct_UScriptStruct_FStructCookedMetaDataStore_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructCookedMetaDataStore,&UE::CoreUObject::Private::Construct<FStructCookedMetaDataStore>,&UE::CoreUObject::Private::ConstructForTests<FStructCookedMetaDataStore>,&UE::CoreUObject::Private::Destruct<FStructCookedMetaDataStore>,&UE::CoreUObject::Private::Copy<FStructCookedMetaDataStore>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// RunTest @ 141fb2cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141fb33fc) */
/* WARNING: Removing unreachable block (ram,0x000141fb3108) */
/* WARNING: Removing unreachable block (ram,0x000141fb310d) */
/* WARNING: Removing unreachable block (ram,0x000141fb3122) */
/* WARNING: Removing unreachable block (ram,0x000141fb3115) */
/* WARNING: Removing unreachable block (ram,0x000141fb2fd3) */
/* WARNING: Removing unreachable block (ram,0x000141fb2ffe) */
/* WARNING: Removing unreachable block (ram,0x000141fb3010) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e36) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e50) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e90) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e96) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e9a) */
/* WARNING: Removing unreachable block (ram,0x000141fb2ea3) */
/* WARNING: Removing unreachable block (ram,0x000141fb2eab) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f23) */
/* WARNING: Removing unreachable block (ram,0x000141fb2ed7) */
/* WARNING: Removing unreachable block (ram,0x000141fb2ee3) */
/* WARNING: Removing unreachable block (ram,0x000141fb2ee6) */
/* WARNING: Removing unreachable block (ram,0x000141fb2eea) */
/* WARNING: Removing unreachable block (ram,0x000141fb2eee) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f03) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f06) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f08) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f0b) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f33) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f72) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f9a) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f76) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f9d) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f3d) */
/* WARNING: Removing unreachable block (ram,0x000141fb2f5b) */
/* WARNING: Removing unreachable block (ram,0x000141fb305c) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e09) */
/* WARNING: Removing unreachable block (ram,0x000141fb2dfc) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e11) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e16) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e1e) */
/* WARNING: Removing unreachable block (ram,0x000141fb2e2e) */
/* WARNING: Removing unreachable block (ram,0x000141fb30fd) */
/* WARNING: Removing unreachable block (ram,0x000141fb312d) */
/* WARNING: Removing unreachable block (ram,0x000141fb32d4) */
/* WARNING: Removing unreachable block (ram,0x000141fb3307) */
/* WARNING: Removing unreachable block (ram,0x000141fb3319) */
/* WARNING: Removing unreachable block (ram,0x000141fb313f) */
/* WARNING: Removing unreachable block (ram,0x000141fb3185) */
/* WARNING: Removing unreachable block (ram,0x000141fb318b) */
/* WARNING: Removing unreachable block (ram,0x000141fb318f) */
/* WARNING: Removing unreachable block (ram,0x000141fb3198) */
/* WARNING: Removing unreachable block (ram,0x000141fb31a0) */
/* WARNING: Removing unreachable block (ram,0x000141fb3223) */
/* WARNING: Removing unreachable block (ram,0x000141fb31d2) */
/* WARNING: Removing unreachable block (ram,0x000141fb31e0) */
/* WARNING: Removing unreachable block (ram,0x000141fb31e3) */
/* WARNING: Removing unreachable block (ram,0x000141fb31e8) */
/* WARNING: Removing unreachable block (ram,0x000141fb31ec) */
/* WARNING: Removing unreachable block (ram,0x000141fb3203) */
/* WARNING: Removing unreachable block (ram,0x000141fb3206) */
/* WARNING: Removing unreachable block (ram,0x000141fb3208) */
/* WARNING: Removing unreachable block (ram,0x000141fb320b) */
/* WARNING: Removing unreachable block (ram,0x000141fb3233) */
/* WARNING: Removing unreachable block (ram,0x000141fb3273) */
/* WARNING: Removing unreachable block (ram,0x000141fb329b) */
/* WARNING: Removing unreachable block (ram,0x000141fb3277) */
/* WARNING: Removing unreachable block (ram,0x000141fb329e) */
/* WARNING: Removing unreachable block (ram,0x000141fb323d) */
/* WARNING: Removing unreachable block (ram,0x000141fb325c) */
/* WARNING: Removing unreachable block (ram,0x000141fb3365) */
/* WARNING: Removing unreachable block (ram,0x000141fb342f) */
/* WARNING: Removing unreachable block (ram,0x000141fb35db) */
/* WARNING: Removing unreachable block (ram,0x000141fb360e) */
/* WARNING: Removing unreachable block (ram,0x000141fb3620) */
/* WARNING: Removing unreachable block (ram,0x000141fb3441) */
/* WARNING: Removing unreachable block (ram,0x000141fb3490) */
/* WARNING: Removing unreachable block (ram,0x000141fb3496) */
/* WARNING: Removing unreachable block (ram,0x000141fb3499) */
/* WARNING: Removing unreachable block (ram,0x000141fb34a2) */
/* WARNING: Removing unreachable block (ram,0x000141fb34aa) */
/* WARNING: Removing unreachable block (ram,0x000141fb352a) */
/* WARNING: Removing unreachable block (ram,0x000141fb34d9) */
/* WARNING: Removing unreachable block (ram,0x000141fb34e7) */
/* WARNING: Removing unreachable block (ram,0x000141fb34ea) */
/* WARNING: Removing unreachable block (ram,0x000141fb34ef) */
/* WARNING: Removing unreachable block (ram,0x000141fb34f3) */
/* WARNING: Removing unreachable block (ram,0x000141fb350a) */
/* WARNING: Removing unreachable block (ram,0x000141fb350d) */
/* WARNING: Removing unreachable block (ram,0x000141fb350f) */
/* WARNING: Removing unreachable block (ram,0x000141fb3512) */
/* WARNING: Removing unreachable block (ram,0x000141fb353a) */
/* WARNING: Removing unreachable block (ram,0x000141fb357a) */
/* WARNING: Removing unreachable block (ram,0x000141fb35a2) */
/* WARNING: Removing unreachable block (ram,0x000141fb357e) */
/* WARNING: Removing unreachable block (ram,0x000141fb35a5) */
/* WARNING: Removing unreachable block (ram,0x000141fb3544) */
/* WARNING: Removing unreachable block (ram,0x000141fb3563) */
/* WARNING: Removing unreachable block (ram,0x000141fb366c) */
/* WARNING: Removing unreachable block (ram,0x000141fb308b) */

bool __thiscall
FCoreRedirectObjectNameTest::RunTest(FCoreRedirectObjectNameTest *this,FString *param_1)

{
  FName FVar1;
  FCoreRedirectObjectName *pFVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  undefined1 auStack_948 [32];
  undefined8 local_928;
  undefined8 local_918;
  FCoreRedirectObjectName local_908;
  FCoreRedirectObjectName local_8f0;
  FName local_8d8;
  FCoreRedirectObjectName local_8d0;
  undefined8 local_8b8;
  FName local_8a8;
  FName local_8a0;
  FName local_898;
  undefined8 local_890;
  FName local_888;
  FName local_880;
  FName local_878 [262];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_948;
  ::FName::FName(&local_8a8,L"/Root/Package");
  ::FName::FName(&local_8d8,L"A");
  ::FName::FName(&local_8a0,L"B");
  ::FName::FName(&local_898,L"C");
  ::FName::FName(&local_880,L"D");
  ::FName::FName(&local_888,L"A.B");
  ::FName::FName(local_878,L"A.B.C");
  FVar1.ComparisonIndex.Value = 0;
  FVar1.Number = 0;
  local_8f0.OuterName.ComparisonIndex.Value = 0;
  local_8f0.OuterName.Number = 0;
  local_8f0.PackageName.ComparisonIndex.Value = 0;
  local_8f0.PackageName.Number = 0;
  local_8f0.ObjectName.ComparisonIndex.Value = 0;
  local_8f0.ObjectName.Number = 0;
  local_928 = 0;
  local_890 = 0;
  local_918 = 0;
  local_8b8 = 0;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AppendObjectName(Empty + Package)",true);
  local_8f0.ObjectName.ComparisonIndex.Value = 0;
  local_8f0.ObjectName.Number = 0;
  local_8f0.OuterName.ComparisonIndex.Value = 0;
  local_8f0.OuterName.Number = 0;
  local_8f0.PackageName = local_8a8;
  local_8b8 = 0;
  local_928 = 0;
  FVar3 = local_8a8;
  FVar4 = local_8d8;
  if (local_8a8 == (FName)0x0) {
    FVar3 = local_8d8;
    FVar4 = FVar1;
  }
  local_918 = 0;
  if ((FVar4 == local_8d8) && (FVar3 == local_8a8)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"AppendObjectName(Package + A)",bVar5);
  local_8f0.OuterName.ComparisonIndex.Value = 0;
  local_8f0.OuterName.Number = 0;
  local_8f0.ObjectName = local_8d8;
  local_8f0.PackageName = local_8a8;
  FVar3 = local_8a8;
  FVar4 = local_8a0;
  if (local_8d8 == (FName)0x0) {
    if (local_8a8 == (FName)0x0) {
      local_918 = 0;
      FVar3 = local_8a0;
      FVar4 = FVar1;
    }
    else {
      FVar1.ComparisonIndex.Value = 0;
      FVar1.Number = 0;
    }
  }
  else {
    FVar1 = local_8d8;
    if (local_8a8 == (FName)0x0) {
      FVar1.ComparisonIndex.Value = 0;
      FVar1.Number = 0;
      FVar3 = local_8d8;
    }
  }
  local_928 = 0;
  if (((FVar4 == local_8a0) && (FVar1 == local_8d8)) && (FVar3 == local_8a8)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AppendObjectName(Package.A + B)",bVar5);
  FVar4 = local_888;
  FVar3 = local_898;
  FVar1 = local_8a8;
  local_8f0.ObjectName = local_8a0;
  local_8f0.OuterName = local_8d8;
  local_8f0.PackageName = local_8a8;
  pFVar2 = FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_898);
  local_908.PackageName = pFVar2->PackageName;
  if (((pFVar2->ObjectName == FVar3) && (pFVar2->OuterName == FVar4)) &&
     (local_908.PackageName == FVar1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AppendObjectName(Package.A.B + C)",bVar5);
  FVar4 = local_878[0];
  FVar3 = local_880;
  FVar1 = local_8a8;
  local_8f0.ObjectName = local_898;
  local_8f0.OuterName = local_888;
  local_8f0.PackageName = local_8a8;
  pFVar2 = FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_880);
  local_908.ObjectName = pFVar2->ObjectName;
  local_908.OuterName = pFVar2->OuterName;
  local_908.PackageName = pFVar2->PackageName;
  if (((local_908.ObjectName == FVar3) && (local_908.OuterName == FVar4)) &&
     (local_908.PackageName == FVar1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AppendObjectName(Package.A.B.C + D)",bVar5);
  local_8f0.ObjectName = local_8d8;
  local_8f0.OuterName.ComparisonIndex.Value = 0;
  local_8f0.OuterName.Number = 0;
  local_8f0.PackageName.ComparisonIndex.Value = 0;
  local_8f0.PackageName.Number = 0;
  local_918 = 0;
  local_928 = 0;
  FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_8a0);
  local_8f0.ObjectName = local_8a0;
  local_8f0.OuterName = local_8d8;
  local_8f0.PackageName.ComparisonIndex.Value = 0;
  local_8f0.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_898);
  local_918 = 0;
  local_8f0.ObjectName.ComparisonIndex.Value = 0;
  local_8f0.ObjectName.Number = 0;
  local_8f0.OuterName = local_8d8;
  local_8f0.PackageName.ComparisonIndex.Value = 0;
  local_8f0.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_8a0);
  local_8f0.ObjectName = local_8a0;
  local_8f0.OuterName = local_8d8;
  local_8f0.PackageName.ComparisonIndex.Value = 0;
  local_8f0.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_898);
  local_928 = 0;
  local_8f0.ObjectName.ComparisonIndex.Value = 0;
  local_8f0.ObjectName.Number = 0;
  local_8f0.OuterName = local_8d8;
  local_8f0.PackageName = local_8a8;
  FCoreRedirectObjectName::AppendObjectName(&local_8d0,&local_8f0,local_8a0);
  local_908.ObjectName.ComparisonIndex.Value = 0;
  local_908.ObjectName.Number = 0;
  local_908.OuterName.ComparisonIndex.Value = 0;
  local_908.OuterName.Number = 0;
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_8b8 = 0;
  local_918 = 0;
  local_928 = 0;
  pFVar2 = FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_8f0.ObjectName = pFVar2->ObjectName;
  local_8f0.OuterName = pFVar2->OuterName;
  local_8f0.PackageName = pFVar2->PackageName;
  if (((local_8f0.ObjectName == (FName)0x0) && (local_8f0.OuterName == (FName)0x0)) &&
     (local_8f0.PackageName == (FName)0x0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"GetParent(Empty)",bVar5);
  local_908.ObjectName.ComparisonIndex.Value = 0;
  local_908.ObjectName.Number = 0;
  local_908.OuterName.ComparisonIndex.Value = 0;
  local_908.OuterName.Number = 0;
  local_908.PackageName = local_8a8;
  local_8b8 = 0;
  local_918 = 0;
  local_928 = 0;
  pFVar2 = FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_8f0.ObjectName = pFVar2->ObjectName;
  local_8f0.OuterName = pFVar2->OuterName;
  local_8f0.PackageName = pFVar2->PackageName;
  if (((local_8f0.ObjectName == (FName)0x0) && (local_8f0.OuterName == (FName)0x0)) &&
     (local_8f0.PackageName == (FName)0x0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"GetParent(Package)",bVar5);
  FVar1 = local_8a8;
  local_908.ObjectName = local_8d8;
  local_908.OuterName.ComparisonIndex.Value = 0;
  local_908.OuterName.Number = 0;
  local_908.PackageName = local_8a8;
  local_918 = 0;
  local_928 = 0;
  pFVar2 = FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_8f0.ObjectName = pFVar2->ObjectName;
  local_8f0.OuterName = pFVar2->OuterName;
  local_8f0.PackageName = pFVar2->PackageName;
  if (((local_8f0.ObjectName == (FName)0x0) && (local_8f0.OuterName == (FName)0x0)) &&
     (local_8f0.PackageName == FVar1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"GetParent(Package.A)",bVar5);
  FVar4 = local_8a0;
  FVar3 = local_8a8;
  FVar1 = local_8d8;
  local_908.ObjectName = local_898;
  local_908.OuterName = local_888;
  local_908.PackageName = local_8a8;
  pFVar2 = FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_8f0.ObjectName = pFVar2->ObjectName;
  local_8f0.OuterName = pFVar2->OuterName;
  local_8f0.PackageName = pFVar2->PackageName;
  if (((local_8f0.ObjectName == FVar4) && (local_8f0.OuterName == FVar1)) &&
     (local_8f0.PackageName == FVar3)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"GetParent(Package.A.B)",bVar5);
  FVar1 = local_8a8;
  local_908.ObjectName = local_880;
  local_908.OuterName = local_878[0];
  local_908.PackageName = local_8a8;
  pFVar2 = FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_8f0.ObjectName = pFVar2->ObjectName;
  local_8f0.OuterName = pFVar2->OuterName;
  local_8f0.PackageName = pFVar2->PackageName;
  if (((local_8f0.ObjectName == local_898) && (local_8f0.OuterName == local_888)) &&
     (local_8f0.PackageName == FVar1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"GetParent(Package.A.B.C)",bVar5);
  local_908.ObjectName = local_8d8;
  local_918 = 0;
  local_908.OuterName.ComparisonIndex.Value = 0;
  local_908.OuterName.Number = 0;
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_908.ObjectName = local_8a0;
  local_908.OuterName = local_8d8;
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_918 = 0;
  local_908.ObjectName.ComparisonIndex.Value = 0;
  local_908.ObjectName.Number = 0;
  local_908.OuterName = local_8d8;
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_908.ObjectName = local_8a0;
  local_908.OuterName = local_8d8;
  local_908.PackageName.ComparisonIndex.Value = 0;
  local_908.PackageName.Number = 0;
  local_928 = 0;
  FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  local_928 = 0;
  local_908.ObjectName.ComparisonIndex.Value = 0;
  local_908.ObjectName.Number = 0;
  local_908.OuterName = local_8d8;
  local_908.PackageName = local_8a8;
  FCoreRedirectObjectName::GetParent(&local_8d0,&local_908);
  return true;
}

// `scalar_deleting_destructor' @ 141fb3ce0

void * __thiscall
FCoreRedirectObjectNameTest::_scalar_deleting_destructor_
          (FCoreRedirectObjectNameTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fb4260

void * __thiscall
FCoreRedirectTest::_scalar_deleting_destructor_(FCoreRedirectTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// Z_Construct_UClass_UPackageMap @ 141fb42b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPackageMap(void)

{
  if (Z_Registration_Info_UClass_UPackageMap.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPackageMap.OuterSingleton,
               &Z_Construct_UClass_UPackageMap_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPackageMap.OuterSingleton;
}

// `scalar_deleting_destructor' @ 141fb47a0

void * __thiscall
FFieldVariantTest::_scalar_deleting_destructor_(FFieldVariantTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 141fb47f0

void * __thiscall
FCoreUObjectModule::_scalar_deleting_destructor_(FCoreUObjectModule *this,uint param_1)

{
  *this = (FCoreUObjectModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fb4de0

void * __thiscall FFieldCastTest::_scalar_deleting_destructor_(FFieldCastTest *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fb4e20

void * __thiscall
IBaseDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fb4f30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fb51a0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_ELogVerbosity::Type,char_const_*,int,FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// operator<<<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> @ 141fb5420

FArchive * __cdecl
operator<<<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TTuple<FName,unsigned_char> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<<FName,unsigned_char>
                        (param_1,(TTuple<FName,unsigned_char> *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TTuple<FName,unsigned_char>,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pTVar2 = (TTuple<FName,unsigned_char> *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<TTuple<FName,unsigned_char>,int>(pTVar2,1);
              operator<<<FName,unsigned_char>(param_1,pTVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<FFieldPath,0> @ 141fb5430

void __cdecl operator<<<FFieldPath,0>(FStructuredArchiveSlot param_1,FFieldPath *param_2)

{
  FArchive *pFVar1;
  FSlotBase local_res8 [4];
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  operator<<(pFVar1,param_2);
  return;
}

// operator<<<FName,unsigned_char> @ 141fb5460

FArchive * __cdecl
operator<<<FName,unsigned_char>(FArchive *param_1,TTuple<FName,unsigned_char> *param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    return param_1;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,1);
  return param_1;
}

// operator<<<FName,__int64> @ 141fb54d0

FArchive * __cdecl operator<<<FName,__int64>(FArchive *param_1,TTuple<FName,__int64> *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  puVar1 = (undefined8 *)**(longlong **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined8 *)(*(longlong **)&param_1->field_0x8)[1]) {
    *(undefined8 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 8;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,8);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(ulong64 *)&param_2->field_0x8);
  return param_1;
}

// CastChecked<UField,UObject> @ 141fb57f0

UField * __cdecl CastChecked<UField,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UField>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UField_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UField *)param_1;
  }
  pFVar3 = GetTypeName<UField>(&local_28);
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

// CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_> @ 141fb58b0

int __cdecl
Algo::
CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  int iVar1;
  undefined1 local_res18;
  
  iVar1 = CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,TLess<void>,TLess<void>_>
                    (param_1,param_2,local_res18,local_res18);
  return iVar1;
}

// CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,TLess<void>,TLess<void>_> @ 141fb58d0

int __cdecl
Algo::
CompareMap<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>,TLess<void>,TLess<void>_>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TLess<void> param_3,TLess<void> param_4)

{
  undefined1 *puVar1;
  FString *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<unsigned_int> FVar7;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar8
  ;
  bool bVar9;
  bool bVar10;
  FString *pFVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  int iVar15;
  uint uVar16;
  FString *pFVar17;
  int iVar18;
  ForElementType<unsigned_int> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 local_136;
  undefined1 local_135 [5];
  ForElementType<unsigned_int> local_130;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_128;
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
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar18 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  iStack_100 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
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
  iStack_120 = 0;
  pFVar17 = (FString *)0x0;
  uStack_11c = 1;
  local_130 = (ForElementType<unsigned_int>)&param_1->field_0x10;
  iVar18 = *(int *)&param_1->field_0x28;
  bVar10 = true;
  local_108 = 0;
  bVar6 = false;
  iStack_10c = 0;
  if (iVar18 != 0) {
    puVar21 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)local_130;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_120;
      local_108 = local_108 + 0x20;
      iStack_120 = iStack_120 + 1;
      iStack_10c = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_120) goto LAB_141fb59ee;
      uVar16 = (puVar21 + 1)[lVar12];
    }
    uStack_11c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_11c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f8 = (int)lVar12;
    iStack_10c = local_108 + -1 + local_f8;
    if (iVar18 < iStack_10c) {
      iStack_10c = iVar18;
    }
  }
LAB_141fb59ee:
  uVar16 = *(uint *)&param_1->field_0x28;
  TStack_b0._padding_ = CONCAT44(uStack_11c,iStack_120);
  uStack_110 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_10c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  uVar22 = uVar16 & 0xffffffe0;
  TStack_b0._28_4_ = local_3c;
  TStack_b0.BaseBitIndex = local_108;
  uStack_90 = CONCAT44(uStack_fc,iStack_100);
  iVar15 = (int)uVar16 >> 5;
  local_128 = param_1;
  local_118 = (undefined1 *)local_130;
  local_b8 = param_1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_130;
  if ((((int)uVar16 < 0) || (iVar18 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    iVar18 = (*pcVar5)();
    return iVar18;
  }
  FVar7 = local_130;
  uVar4 = *(int *)((longlong)local_130 + 0x18);
  if (uVar16 != uVar4) {
    FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_130 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar19 = local_130;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141fb5b10;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar12 * 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f4 = (int)lVar12;
    uVar16 = local_f4 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_141fb5b10:
  do {
    pTVar8 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_136 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_136);
    }
    if (((TStack_b0.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_b0.Array == FVar7)) && (pTVar8 == param_1)) break;
    pFVar2 = (FString *)(*(longlong *)pTVar8 + (longlong)TStack_b0.CurrentBitIndex * 0x28);
    pFVar11 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)param_2,pFVar2);
    if (pFVar11 == (FString *)0x0) {
      bVar10 = false;
      bVar9 = true;
LAB_141fb5bd7:
      if (pFVar17 != (FString *)0x0) {
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        if ((pFVar2->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        }
        iVar18 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
        if (-1 < iVar18) goto LAB_141fb5c14;
      }
      pFVar17 = pFVar2;
      bVar6 = bVar9;
    }
    else {
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      if (pFVar2[1].Data.ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)pFVar2[1].Data.AllocatorInstance.Data;
      }
      iVar18 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
      if (iVar18 < 0) {
        bVar9 = true;
        goto LAB_141fb5bd7;
      }
      if (pFVar2[1].Data.ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)pFVar2[1].Data.AllocatorInstance.Data;
      }
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      iVar18 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
      if (iVar18 < 0) {
        bVar9 = false;
        goto LAB_141fb5bd7;
      }
    }
LAB_141fb5c14:
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
  if (bVar10) {
LAB_141fb5e81:
    if (pFVar17 == (FString *)0x0) {
      return 0;
    }
    iVar18 = 1;
    if (bVar6) {
      iVar18 = -1;
    }
    return iVar18;
  }
  iStack_e0 = 0;
  iVar18 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  uStack_dc = 1;
  iStack_cc = iStack_e0;
  local_c8 = iStack_e0;
  if (iVar18 != 0) {
    puVar21 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_141fb5cbe;
      uVar16 = puVar21[lVar12 + 1];
    }
    uStack_dc = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_dc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_f0 = (int)lVar12;
    iStack_cc = local_c8 + -1 + local_f0;
    if (iVar18 < iStack_cc) {
      iStack_cc = iVar18;
    }
  }
LAB_141fb5cbe:
  uVar16 = *(uint *)&param_2->field_0x28;
  iStack_c4 = iStack_10c;
  iStack_c0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar22 = uVar16 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_80.CurrentBitIndex = iStack_cc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_80._28_4_ = iStack_10c;
  TStack_80.BaseBitIndex = local_c8;
  uStack_60 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = param_2;
  local_d8 = puVar1;
  local_88 = param_2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar18 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    iVar18 = (*pcVar5)();
    return iVar18;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar16 != uVar4) {
    puVar20 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar15;
      uVar22 = uVar22 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_141fb5dc0;
      uVar16 = *(uint *)(puVar20 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar22;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_141fb5dc0:
  do {
    pTVar8 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_135);
    }
    if (((TStack_80.CurrentBitIndex == uVar16) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == param_2))
    goto LAB_141fb5e81;
    lVar12 = *(longlong *)pTVar8;
    pFVar2 = (FString *)(lVar12 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    iVar15 = *(int *)(lVar12 + 8 + (longlong)TStack_80.CurrentBitIndex * 0x28);
    iVar18 = iVar15 + -1;
    if (iVar15 == 0) {
      pwVar14 = L"";
      iVar18 = 0;
    }
    else {
      pwVar14 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    }
    uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar18,pwVar14);
    iVar18 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)param_1,uVar22,pFVar2);
    if (iVar18 == -1) {
      if (pFVar17 != (FString *)0x0) {
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        if ((pFVar2->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
        }
        iVar18 = FGenericPlatformStricmp::Stricmp(pwVar13,pwVar14);
        if (-1 < iVar18) goto LAB_141fb5e6b;
      }
      bVar6 = false;
      pFVar17 = pFVar2;
    }
LAB_141fb5e6b:
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// ConstructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int> @ 141fb5ef0

void __cdecl
ConstructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
          (void *param_1,TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *param_2,
          int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  longlong lVar1;
  undefined8 *puVar2;
  ForElementType<FSetElementId> *pFVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)((longlong)param_1 + 0x10);
    pFVar3 = (ForElementType<FSetElementId> *)&param_2->field_0x40;
    do {
      this = (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(puVar2 + -1);
      *(undefined4 *)((longlong)param_1 + (-0x40 - (longlong)param_2) + (longlong)pFVar3) =
           *(undefined4 *)pFVar3[-4].InlineData;
      *(undefined8 *)this = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80;
      *(undefined4 *)(puVar2 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
      puVar2[7] = 0;
      *(int *)(puVar2 + 8) = 0;
      if (this != (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar3[-4].SecondaryData) {
        UE::Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(puVar2 + 6),(int *)(puVar2 + 8),pFVar3,
                   *(int *)pFVar3[1].InlineData);
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,(TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)&pFVar3[-4].SecondaryData);
      }
      *(ForElementType<FSetElementId> *)(puVar2 + 9) = pFVar3[1].SecondaryData;
      lVar1 = *(longlong *)(pFVar3 + 2);
      puVar2[10] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pFVar3 = (ForElementType<FSetElementId> *)&pFVar3[6].SecondaryData;
      puVar2 = puVar2 + 0xd;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FCoreRedirect,FCoreRedirect,int> @ 141fb5fe0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
ConstructItems<FCoreRedirect,FCoreRedirect,int>(void *param_1,FCoreRedirect *param_2,int param_3)

{
  FName FVar1;
  FName *pFVar2;
  FCoreRedirectObjectName *pFVar3;
  
  if (param_3 != 0) {
    pFVar2 = (FName *)((longlong)param_1 + 0x1c);
    pFVar3 = &param_2->NewName;
    do {
      *(undefined4 *)((longlong)param_1 + (-0x1c - (longlong)param_2) + (longlong)pFVar3) =
           *(undefined4 *)((longlong)(pFVar3 + -2) + 0x14);
      FVar1 = pFVar3[-1].OuterName;
      pFVar2[-3] = pFVar3[-1].ObjectName;
      pFVar2[-2] = FVar1;
      pFVar2[-1] = pFVar3[-1].PackageName;
      FVar1 = pFVar3->OuterName;
      *pFVar2 = pFVar3->ObjectName;
      pFVar2[1] = FVar1;
      pFVar2[2] = pFVar3->PackageName;
      FVar1 = pFVar3[1].OuterName;
      pFVar2[3] = pFVar3[1].ObjectName;
      pFVar2[4] = FVar1;
      pFVar2[5] = pFVar3[1].PackageName;
      *(undefined8 *)&pFVar2[6].Number = 0;
      *(undefined8 *)&pFVar2[7].Number = 0;
      *(undefined8 *)&pFVar2[10].Number = 0;
      pFVar2[0xb].Number = 0;
      pFVar2[0xc].ComparisonIndex.Value = 0x80;
      pFVar2[0xc].Number = 0xffffffff;
      pFVar2[0xd].ComparisonIndex.Value = 0;
      *(undefined8 *)&pFVar2[0xe].Number = 0;
      pFVar2[0xf].Number = 0;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)&pFVar2[6].Number,
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)(pFVar3 + 2) + 4));
      pFVar2 = pFVar2 + 0x14;
      pFVar3 = (FCoreRedirectObjectName *)((longlong)(pFVar3 + 6) + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<FName,unsigned_char>,int> @ 141fb76f0

void __cdecl DefaultConstructItems<TTuple<FName,unsigned_char>,int>(void *param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<`UE::CoreRedirects::Private::RunAssetRedirectTests'::__l2::FTestDefinition,int> @ 141fb7720

void __cdecl
DefaultConstructItems<_UE::CoreRedirects::Private::RunAssetRedirectTests_::__l2::FTestDefinition,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 1;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int> @ 141fb7760

void __cdecl
DestructItems<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,int>
          (TTuple<ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap> *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)&param_1->field_0x50;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(puVar1 + 4));
      *puVar1 = 0;
      if (*(void **)(puVar1 + -2) != (void *)0x0) {
        FMemory::Free(*(void **)(puVar1 + -2));
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FCoreRedirect,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -0x12));
      puVar1 = puVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FCoreRedirect,int> @ 141fb77d0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl DestructItems<FCoreRedirect,int>(FCoreRedirect *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->ValueChanges).field_0x40;
    do {
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<`FCoreRedirects::RunTests'::__l2::FRedirectTest,int> @ 141fb7830

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
DestructItems<_FCoreRedirects::RunTests_::__l2::FRedirectTest,int>
          (FRedirectTest *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->NewName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->OldName).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// FindFProperty<FField> @ 141fb9200

FField * __cdecl
FindFProperty<FField>(UStruct *param_1,wchar_t *param_2,EFieldIterationFlags param_3)

{
  FField *pFVar1;
  FName local_res20;
  
  FName::FName(&local_res20,param_2,FNAME_Find);
  pFVar1 = FindFProperty<FField>(param_1,local_res20,param_3);
  return pFVar1;
}

// FindFProperty<FField> @ 141fb9240

FField * __cdecl FindFProperty<FField>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FField *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  TFieldIterator<FField> local_28;
  
  if (param_2 == (FName)0x0) {
    return (FField *)0x0;
  }
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_141fb92d0;
  }
  local_28.bIncludeInterface = false;
LAB_141fb92d0:
  TFieldIterator<FField>::IterateToNext(&local_28);
  pFVar2 = local_28.Field;
  while( true ) {
    if (pFVar2 == (FField *)0x0) {
      return (FField *)0x0;
    }
    local_28.Field = pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = pFVar2->NamePrivate;
    }
    if (FVar5 == param_2) break;
    local_28.Field = pFVar2->Next;
    TFieldIterator<FField>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
  }
  return pFVar2;
}

// FindOrLoadObject<UPackage> @ 141fb9660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UPackage * __cdecl
ConstructorHelpersInternal::FindOrLoadObject<UPackage>(FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  UPackage *pUVar2;
  FUObjectItem *this;
  int iVar3;
  FScriptContainerElement *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  do {
    if (pFVar4 == pFVar1 + (longlong)(param_1->Data).ArrayNum * 2) {
LAB_141fb96b7:
      pwVar6 = L"";
      if ((param_1->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      pUVar2 = FindPackage((UObject *)0x0,pwVar5);
      if (pUVar2 == (UPackage *)0x0) {
        if ((param_1->Data).ArrayNum != 0) {
          pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        }
        pUVar2 = LoadPackage((UPackage *)0x0,pwVar6,param_2,(FArchive *)0x0,
                             (FLinkerInstancingContext *)0x0);
        if (pUVar2 == (UPackage *)0x0) {
          return (UPackage *)0x0;
        }
      }
      this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4))
      ;
      FUObjectItem::SetRootFlags(this,RootSet);
      return pUVar2;
    }
    if (*(short *)pFVar4 == 0x2e) {
      iVar3 = (int)((longlong)pFVar4 - (longlong)pFVar1 >> 1);
      if (iVar3 != -1) {
        ::FString::RemoveAt(param_1,iVar3,No);
      }
      goto LAB_141fb96b7;
    }
    pFVar4 = pFVar4 + 2;
  } while( true );
}

// GetTypeName<UField> @ 141fb9b50

FString * __cdecl GetTypeName<UField>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UField_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<`FClassNetCacheMgr::SortProperties'::__l2::FCompareUFieldOffsets>_> @ 141fb9b90

void __cdecl
AlgoImpl::
HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>_>
          (FProperty **param_1,int param_2,int param_3,FIdentityFunctor *param_4,
          TReversePredicate<_public:_void___cdecl_FClassNetCacheMgr::SortProperties(TArray<FProperty_*,TSizedDefaultAllocator<32>_>_&)const_::_2_::FCompareUFieldOffsets>
          *param_5)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  while( true ) {
    if (param_3 <= param_2 * 2 + 1) {
      return;
    }
    iVar5 = param_2 * 2;
    iVar8 = iVar5 + 1;
    if (iVar5 + 2 < param_3) {
      pFVar1 = param_1[iVar8];
      pFVar2 = param_1[(longlong)iVar5 + 2];
      if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
        bVar3 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_58);
        }
        else {
          ::FString::FString(&local_58,L"None");
        }
        bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar7.Data = local_58.Data.AllocatorInstance.Data;
        }
        FVar6.Data = (FScriptContainerElement *)L"";
        if (local_68.Data.ArrayNum != 0) {
          FVar6.Data = local_68.Data.AllocatorInstance.Data;
        }
        uVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
        uVar4 = uVar4 >> 0x1f;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar4 = (uint)(pFVar2->Offset_Internal < pFVar1->Offset_Internal);
      }
      if (uVar4 != 0) {
        iVar8 = iVar5;
      }
      iVar8 = iVar8 + 1;
    }
    pFVar1 = param_1[iVar8];
    pFVar2 = param_1[param_2];
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar3 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_38);
      }
      else {
        ::FString::FString(&local_38,L"None");
      }
      bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_48);
      }
      else {
        ::FString::FString(&local_48,L"None");
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar7.Data = local_38.Data.AllocatorInstance.Data;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar6.Data = local_48.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
      bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar3 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
    if (bVar3 == false) break;
    pFVar1 = param_1[param_2];
    param_1[param_2] = param_1[iVar8];
    param_1[iVar8] = pFVar1;
    param_2 = iVar8;
  }
  return;
}

// HeapSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,`FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l8::<lambda_2>_>_> @ 141fb9e10

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,_FCoreRedirects::RedirectNameAndValuesUnderReadLock_::__l8::<lambda_2>_>_>
          (FCoreRedirect **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCoreRedirect_const_*,_private:_static_bool___cdecl_FCoreRedirects::RedirectNameAndValuesUnderReadLock(ECoreRedirectFlags,FCoreRedirectObjectName_const_&,FCoreRedirectObjectName_&,FCoreRedirect_const_*_*,ECoreRedirectMatchFlags,FScopeCoreRedirectsReadLockedContext_&)_::_8_::<lambda_2>_>
          param_4)

{
  ECoreRedirectMatchFlags *pEVar1;
  FCoreRedirect **ppFVar2;
  FCoreRedirect *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar10 = iVar6 * 2 + 1;
  do {
    if (iVar10 < param_2) {
      pEVar1 = &(param_4.Predicate)->MatchFlags;
      iVar13 = iVar6;
      do {
        iVar9 = iVar13 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          pFVar3 = param_1[iVar12];
          iVar7 = FCoreRedirectObjectName::MatchScore
                            (&param_1[(longlong)iVar9 + 2]->OldName,
                             (param_4.Predicate)->OldObjectName,
                             param_1[(longlong)iVar9 + 2]->RedirectFlags,*pEVar1);
          iVar8 = FCoreRedirectObjectName::MatchScore
                            (&pFVar3->OldName,(param_4.Predicate)->OldObjectName,
                             pFVar3->RedirectFlags,*pEVar1);
          if (iVar8 < iVar7) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        ppFVar2 = param_1 + iVar12;
        pFVar3 = *ppFVar2;
        iVar9 = FCoreRedirectObjectName::MatchScore
                          (&param_1[iVar13]->OldName,(param_4.Predicate)->OldObjectName,
                           param_1[iVar13]->RedirectFlags,*pEVar1);
        iVar7 = FCoreRedirectObjectName::MatchScore
                          (&pFVar3->OldName,(param_4.Predicate)->OldObjectName,pFVar3->RedirectFlags
                           ,*pEVar1);
        if (iVar9 <= iVar7) break;
        pFVar3 = param_1[iVar13];
        param_1[iVar13] = *ppFVar2;
        *ppFVar2 = pFVar3;
        iVar13 = iVar12;
      } while (iVar12 * 2 + 1 < param_2);
    }
    if (iVar6 == 0) {
      iVar10 = param_2 + -1;
      lVar11 = (longlong)iVar10;
      if (0 < iVar10) {
        do {
          pFVar3 = *param_1;
          *param_1 = param_1[lVar11];
          param_1[lVar11] = pFVar3;
          if (1 < iVar10) {
            pEVar1 = &(param_4.Predicate)->MatchFlags;
            iVar6 = 0;
            do {
              iVar12 = iVar6 * 2;
              iVar13 = iVar12 + 1;
              if (iVar12 + 2 < iVar10) {
                pFVar3 = param_1[iVar13];
                iVar9 = FCoreRedirectObjectName::MatchScore
                                  (&param_1[(longlong)iVar12 + 2]->OldName,
                                   (param_4.Predicate)->OldObjectName,
                                   param_1[(longlong)iVar12 + 2]->RedirectFlags,*pEVar1);
                iVar7 = FCoreRedirectObjectName::MatchScore
                                  (&pFVar3->OldName,(param_4.Predicate)->OldObjectName,
                                   pFVar3->RedirectFlags,*pEVar1);
                if (iVar7 < iVar9) {
                  iVar13 = iVar12;
                }
                iVar13 = iVar13 + 1;
              }
              pFVar3 = param_1[iVar13];
              iVar12 = FCoreRedirectObjectName::MatchScore
                                 (&param_1[iVar6]->OldName,(param_4.Predicate)->OldObjectName,
                                  param_1[iVar6]->RedirectFlags,*pEVar1);
              iVar9 = FCoreRedirectObjectName::MatchScore
                                (&pFVar3->OldName,(param_4.Predicate)->OldObjectName,
                                 pFVar3->RedirectFlags,*pEVar1);
              if (iVar12 <= iVar9) break;
              pFVar3 = param_1[iVar6];
              param_1[iVar6] = param_1[iVar13];
              param_1[iVar13] = pFVar3;
              iVar6 = iVar13;
            } while (iVar13 * 2 + 1 < iVar10);
          }
          lVar11 = lVar11 + -1;
          iVar10 = iVar10 + -1;
        } while (0 < lVar11);
      }
      return;
    }
    iVar6 = iVar6 + -1;
    iVar10 = iVar10 + -2;
  } while( true );
}

// HeapSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_> @ 141fba110

void __cdecl
AlgoImpl::HeapSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_>
          (TTuple<FString,FString> *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4
          )

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TTuple<FString,FString> *pTVar14;
  int iVar15;
  TTuple<FString,FString> *pTVar16;
  int iVar17;
  TTuple<FString,FString> *pTVar18;
  TLess<void> local_res20 [8];
  
  local_res20[0] = param_4;
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<TTuple<FString,FString>,int,FIdentityFunctor,TReversePredicate<TLess<void>_>_>
            (param_1,param_2,param_3,local_res20);
  iVar17 = param_2 + -1;
  lVar11 = (longlong)iVar17;
  if (0 < iVar17) {
    pTVar18 = param_1 + lVar11;
    do {
      uVar3 = *(undefined8 *)&pTVar18->field_0x8;
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)&param_1->field_0x8;
      uVar6 = *(undefined8 *)&param_1->field_0x10;
      uVar7 = *(undefined8 *)&param_1->field_0x18;
      *(undefined8 *)param_1 = *(undefined8 *)pTVar18;
      *(undefined8 *)&param_1->field_0x8 = uVar3;
      uVar3 = *(undefined8 *)&pTVar18->field_0x18;
      *(undefined8 *)&param_1->field_0x10 = *(undefined8 *)&pTVar18->field_0x10;
      *(undefined8 *)&param_1->field_0x18 = uVar3;
      *(undefined8 *)pTVar18 = uVar4;
      *(undefined8 *)&pTVar18->field_0x8 = uVar5;
      *(undefined8 *)&pTVar18->field_0x10 = uVar6;
      *(undefined8 *)&pTVar18->field_0x18 = uVar7;
      iVar10 = 0;
      if (1 < iVar17) {
        do {
          iVar2 = iVar10 * 2;
          iVar15 = iVar2 + 1;
          if (iVar2 + 2 < iVar17) {
            pTVar16 = param_1 + (longlong)iVar2 + 1;
            pTVar14 = param_1 + (longlong)iVar2 + 2;
            if (*(int *)&pTVar16->field_0x8 == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = *(wchar_t **)pTVar16;
            }
            if (*(int *)&pTVar14->field_0x8 == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = *(wchar_t **)pTVar14;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
            if (iVar9 < 0) {
LAB_141fba2a5:
              bVar8 = true;
            }
            else {
              if (*(int *)&pTVar14->field_0x8 == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = *(wchar_t **)pTVar14;
              }
              if (*(int *)&pTVar16->field_0x8 == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = *(wchar_t **)pTVar16;
              }
              iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
              if (-1 < iVar9) {
                if (*(int *)&pTVar16->field_0x18 == 0) {
                  pwVar13 = L"";
                }
                else {
                  pwVar13 = *(wchar_t **)&pTVar16->field_0x10;
                }
                if (*(int *)&pTVar14->field_0x18 == 0) {
                  pwVar12 = L"";
                }
                else {
                  pwVar12 = *(wchar_t **)&pTVar14->field_0x10;
                }
                iVar9 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
                if (iVar9 < 0) goto LAB_141fba2a5;
              }
              bVar8 = false;
            }
            if (bVar8) {
              iVar15 = iVar2;
            }
            iVar15 = iVar15 + 1;
          }
          pTVar16 = param_1 + iVar15;
          pTVar14 = param_1 + iVar10;
          if (*(int *)&pTVar16->field_0x8 == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)pTVar16;
          }
          if (*(int *)&pTVar14->field_0x8 == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)pTVar14;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
          if (-1 < iVar10) {
            if (*(int *)&pTVar14->field_0x8 == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = *(wchar_t **)pTVar14;
            }
            if (*(int *)&pTVar16->field_0x8 == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = *(wchar_t **)pTVar16;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
            if (iVar10 < 0) break;
            if (*(int *)&pTVar16->field_0x18 == 0) {
              pwVar13 = L"";
            }
            else {
              pwVar13 = *(wchar_t **)&pTVar16->field_0x10;
            }
            if (*(int *)&pTVar14->field_0x18 == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = *(wchar_t **)&pTVar14->field_0x10;
            }
            iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
            if (-1 < iVar10) break;
          }
          uVar3 = *(undefined8 *)&pTVar16->field_0x8;
          uVar4 = *(undefined8 *)pTVar14;
          uVar5 = *(undefined8 *)&pTVar14->field_0x8;
          uVar6 = *(undefined8 *)&pTVar14->field_0x10;
          uVar7 = *(undefined8 *)&pTVar14->field_0x18;
          *(undefined8 *)pTVar14 = *(undefined8 *)pTVar16;
          *(undefined8 *)&pTVar14->field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&pTVar16->field_0x18;
          *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
          *(undefined8 *)&pTVar14->field_0x18 = uVar3;
          *(undefined8 *)pTVar16 = uVar4;
          *(undefined8 *)&pTVar16->field_0x8 = uVar5;
          *(undefined8 *)&pTVar16->field_0x10 = uVar6;
          *(undefined8 *)&pTVar16->field_0x18 = uVar7;
          iVar10 = iVar15;
        } while (iVar15 * 2 + 1 < iVar17);
      }
      lVar11 = lVar11 + -1;
      iVar17 = iVar17 + -1;
      pTVar18 = pTVar18 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<`FClassNetCacheMgr::SortProperties'::__l2::FCompareUFieldOffsets>_> @ 141fba3d0

void __cdecl
AlgoImpl::
HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>_>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<_public:_void___cdecl_FClassNetCacheMgr::SortProperties(TArray<FProperty_*,TSizedDefaultAllocator<32>_>_&)const_::_2_::FCompareUFieldOffsets>
          param_4)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar9 = iVar6 * 2 + 1;
  iVar4 = iVar9;
  iVar7 = iVar6;
  do {
    while (param_2 <= iVar9) {
LAB_141fba670:
      if (iVar7 == 0) {
        return;
      }
      iVar6 = iVar7 + -1;
      iVar9 = iVar4 + -2;
      iVar4 = iVar9;
      iVar7 = iVar6;
    }
    iVar9 = iVar6 * 2;
    iVar12 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      pFVar1 = param_1[iVar12];
      pFVar2 = param_1[(longlong)iVar9 + 2];
      if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
        bVar5 = IsThisNotNull(pFVar1,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)&pFVar1->_padding_,&local_60);
        }
        else {
          ::FString::FString(&local_60,L"None");
        }
        bVar5 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar5) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_70);
        }
        else {
          ::FString::FString(&local_70,L"None");
        }
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_60.Data.ArrayNum != 0) {
          FVar11.Data = local_60.Data.AllocatorInstance.Data;
        }
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_70.Data.ArrayNum != 0) {
          FVar10.Data = local_70.Data.AllocatorInstance.Data;
        }
        uVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
        uVar8 = uVar8 >> 0x1f;
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
      }
      else {
        uVar8 = (uint)(pFVar2->Offset_Internal < pFVar1->Offset_Internal);
      }
      if (uVar8 != 0) {
        iVar12 = iVar9;
      }
      iVar12 = iVar12 + 1;
    }
    pFVar1 = param_1[iVar12];
    pFVar2 = param_1[iVar6];
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar5 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_40);
      }
      else {
        ::FString::FString(&local_40,L"None");
      }
      bVar5 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar5) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_50);
      }
      else {
        ::FString::FString(&local_50,L"None");
      }
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_40.Data.ArrayNum != 0) {
        FVar11.Data = local_40.Data.AllocatorInstance.Data;
      }
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar10.Data = local_50.Data.AllocatorInstance.Data;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,(wchar_t *)FVar11.Data);
      bVar5 = SUB41((uint)iVar9 >> 0x1f,0);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar5 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
    if (bVar5 == false) goto LAB_141fba670;
    pFVar1 = param_1[iVar6];
    param_1[iVar6] = param_1[iVar12];
    iVar9 = iVar12 * 2 + 1;
    param_1[iVar12] = pFVar1;
    iVar6 = iVar12;
  } while( true );
}

// HeapifyInternal<TTuple<FString,FString>,int,FIdentityFunctor,TReversePredicate<TLess<void>_>_> @ 141fba6c0

void __cdecl
AlgoImpl::
HeapifyInternal<TTuple<FString,FString>,int,FIdentityFunctor,TReversePredicate<TLess<void>_>_>
          (TTuple<FString,FString> *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TLess<void>_> param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  TTuple<FString,FString> *pTVar14;
  int iVar15;
  TTuple<FString,FString> *pTVar16;
  int iVar17;
  
  if (param_2 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar9 = (param_2 + -2) / 2;
  iVar11 = iVar9 * 2 + 1;
  iVar2 = iVar11;
  iVar17 = iVar9;
  do {
    while (param_2 <= iVar11) {
LAB_141fba8f7:
      if (iVar17 == 0) {
        return;
      }
      iVar9 = iVar17 + -1;
      iVar11 = iVar2 + -2;
      iVar2 = iVar11;
      iVar17 = iVar9;
    }
    iVar11 = iVar9 * 2;
    iVar15 = iVar11 + 1;
    if (iVar11 + 2 < param_2) {
      pTVar16 = param_1 + (longlong)iVar11 + 1;
      pTVar14 = param_1 + (longlong)iVar11 + 2;
      if (*(int *)&pTVar16->field_0x8 == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pTVar16;
      }
      if (*(int *)&pTVar14->field_0x8 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pTVar14;
      }
      iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
      if (iVar10 < 0) {
LAB_141fba812:
        bVar8 = true;
      }
      else {
        if (*(int *)&pTVar14->field_0x8 == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)pTVar14;
        }
        if (*(int *)&pTVar16->field_0x8 == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)pTVar16;
        }
        iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
        if (-1 < iVar10) {
          if (*(int *)&pTVar16->field_0x18 == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = *(wchar_t **)&pTVar16->field_0x10;
          }
          if (*(int *)&pTVar14->field_0x18 == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)&pTVar14->field_0x10;
          }
          iVar10 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
          if (iVar10 < 0) goto LAB_141fba812;
        }
        bVar8 = false;
      }
      if (bVar8) {
        iVar15 = iVar11;
      }
      iVar15 = iVar15 + 1;
    }
    pTVar16 = param_1 + iVar15;
    pTVar14 = param_1 + iVar9;
    if (*(int *)&pTVar16->field_0x8 == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = *(wchar_t **)pTVar16;
    }
    if (*(int *)&pTVar14->field_0x8 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)pTVar14;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
    if (-1 < iVar11) {
      if (*(int *)&pTVar14->field_0x8 == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = *(wchar_t **)pTVar14;
      }
      if (*(int *)&pTVar16->field_0x8 == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)pTVar16;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
      if (-1 < iVar11) {
        if (*(int *)&pTVar16->field_0x18 == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = *(wchar_t **)&pTVar16->field_0x10;
        }
        if (*(int *)&pTVar14->field_0x18 == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = *(wchar_t **)&pTVar14->field_0x10;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp(pwVar12,pwVar13);
        if (iVar11 < 0) goto LAB_141fba8c4;
      }
      goto LAB_141fba8f7;
    }
LAB_141fba8c4:
    uVar3 = *(undefined8 *)&pTVar16->field_0x8;
    iVar11 = iVar15 * 2 + 1;
    uVar4 = *(undefined8 *)pTVar14;
    uVar5 = *(undefined8 *)&pTVar14->field_0x8;
    uVar6 = *(undefined8 *)&pTVar14->field_0x10;
    uVar7 = *(undefined8 *)&pTVar14->field_0x18;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar16;
    *(undefined8 *)&pTVar14->field_0x8 = uVar3;
    uVar3 = *(undefined8 *)&pTVar16->field_0x18;
    *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
    *(undefined8 *)&pTVar14->field_0x18 = uVar3;
    *(undefined8 *)pTVar16 = uVar4;
    *(undefined8 *)&pTVar16->field_0x8 = uVar5;
    *(undefined8 *)&pTVar16->field_0x10 = uVar6;
    *(undefined8 *)&pTVar16->field_0x18 = uVar7;
    iVar9 = iVar15;
  } while( true );
}

// InternalConstructor<UClassCookedMetaData> @ 141fba940

void __cdecl InternalConstructor<UClassCookedMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UClassCookedMetaData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UEnumCookedMetaData> @ 141fbaa20

void __cdecl InternalConstructor<UEnumCookedMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UEnumCookedMetaData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<UPackageMap> @ 141fbaa80

void __cdecl InternalConstructor<UPackageMap>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UPackageMap__6B_;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x8 = 0;
    *(undefined4 *)&this[2].field_0xc = 0x80;
    *(undefined4 *)&this[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x14 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined4 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x8 = 0;
    *(undefined4 *)&this[4].field_0xc = 0x80;
    *(undefined4 *)&this[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x14 = 0;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined4 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UStructCookedMetaData> @ 141fbab30

void __cdecl InternalConstructor<UStructCookedMetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UStructCookedMetaData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UClassCookedMetaData> @ 141fbabd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UClassCookedMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UClassCookedMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UClassCookedMetaData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0xc = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UEnumCookedMetaData> @ 141fbad30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UEnumCookedMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UEnumCookedMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UEnumCookedMetaData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPackageMap> @ 141fbae10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPackageMap>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPackageMap::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPackageMap__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0;
    *(undefined4 *)&pUVar1[4].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x14 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStructCookedMetaData> @ 141fbaf40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStructCookedMetaData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStructCookedMetaData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UStructCookedMetaData__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<FProperty_*,int,FIdentityFunctor,`FClassNetCacheMgr::SortProperties'::__l2::FCompareUFieldOffsets> @ 141fbb060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FProperty_*,int,FIdentityFunctor,_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>
          (FProperty **param_1,int param_2,FIdentityFunctor param_3,FCompareUFieldOffsets param_4)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FProperty **ppFVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  FProperty **ppFVar9;
  FProperty **ppFVar10;
  FProperty **ppFVar11;
  int iVar12;
  FProperty **ppFVar13;
  float fVar14;
  undefined1 auStackY_438 [32];
  FCompareUFieldOffsets local_408 [8];
  FIdentityFunctor local_400 [8];
  FProperty ***local_3f8;
  FProperty **local_3f0;
  int local_3e8;
  FProperty **local_3e0;
  FString local_3d8;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  TReversePredicate<_public:_void___cdecl_FClassNetCacheMgr::SortProperties(TArray<FProperty_*,TSizedDefaultAllocator<32>_>_&)const_::_2_::FCompareUFieldOffsets>
  local_378 [3];
  FProperty **local_360;
  FProperty **local_358;
  FProperty **local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = __security_cookie.value ^ (ulonglong)auStackY_438;
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar14 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar14;
    memset(local_340,0,0x2e8);
    local_3f8 = &local_358;
    do {
      local_3f0 = local_3f8[1];
      ppFVar5 = *local_3f8;
      local_360 = local_3f8[2];
      iVar12 = (int)((longlong)local_3f0 - (longlong)ppFVar5 >> 3) + 1;
      local_3e8 = (int)local_360;
      ppFVar11 = ppFVar5;
      local_3e0 = ppFVar5;
      if ((int)local_360 != 0) {
LAB_141fbb130:
        if (8 < iVar12) {
          if (iVar12 < 0) {
            iVar12 = iVar12 + 1;
          }
          ppFVar10 = local_3f0 + 1;
          pFVar1 = ppFVar11[iVar12 >> 1];
          ppFVar11[iVar12 >> 1] = *ppFVar11;
          *ppFVar11 = pFVar1;
          ppFVar9 = local_3f0;
          ppFVar5 = ppFVar11;
LAB_141fbb161:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar9) goto code_r0x000141fbb16e;
          goto LAB_141fbb250;
        }
        if (ppFVar11 < local_3f0) {
          do {
            ppFVar10 = local_3f0;
            ppFVar9 = local_3e0;
            ppFVar5 = local_3e0;
            ppFVar13 = ppFVar11 + 1;
            if (ppFVar11 + 1 <= local_3f0) {
              do {
                pFVar1 = *ppFVar13;
                pFVar2 = *ppFVar9;
                if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
                  bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
                  if (bVar4) {
                    ::FName::ToString((FName *)&pFVar1->_padding_,&local_388);
                  }
                  else {
                    ::FString::FString(&local_388,L"None");
                  }
                  bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
                  if (bVar4) {
                    ::FName::ToString((FName *)&pFVar2->_padding_,&local_398);
                  }
                  else {
                    ::FString::FString(&local_398,L"None");
                  }
                  FVar7.Data = (FScriptContainerElement *)L"";
                  if (local_388.Data.ArrayNum != 0) {
                    FVar7.Data = local_388.Data.AllocatorInstance.Data;
                  }
                  FVar6.Data = (FScriptContainerElement *)L"";
                  if (local_398.Data.ArrayNum != 0) {
                    FVar6.Data = local_398.Data.AllocatorInstance.Data;
                  }
                  iVar12 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
                  bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
                  if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_398.Data.AllocatorInstance.Data);
                  }
                  ppFVar10 = local_3f0;
                  if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_388.Data.AllocatorInstance.Data);
                    ppFVar10 = local_3f0;
                  }
                }
                else {
                  bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
                }
                ppFVar5 = ppFVar13;
                if (bVar4 == false) {
                  ppFVar5 = ppFVar9;
                }
                ppFVar13 = ppFVar13 + 1;
                ppFVar9 = ppFVar5;
              } while (ppFVar13 <= ppFVar10);
            }
            pFVar1 = *ppFVar5;
            local_3f0 = ppFVar10 + -1;
            *ppFVar5 = *ppFVar10;
            *ppFVar10 = pFVar1;
          } while (local_3e0 < local_3f0);
        }
        goto LAB_141fbb5ec;
      }
LAB_141fbb3f7:
      local_408[0] = param_4;
      local_400[0] = param_3;
      if (iVar12 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Num >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                           ,0xb9,L"Algo::HeapSortInternal called with negative count");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
LAB_141fbb57d:
        local_378[0].Predicate = local_408;
        HeapifyInternal<FProperty_*,int,FIdentityFunctor,TReversePredicate<_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>_>
                  (ppFVar5,iVar12,param_3,local_408);
        iVar12 = iVar12 + -1;
        if (0 < iVar12) {
          lVar8 = (longlong)iVar12 * 8;
          do {
            pFVar1 = *ppFVar5;
            *ppFVar5 = *(FProperty **)(lVar8 + (longlong)ppFVar5);
            *(FProperty **)(lVar8 + (longlong)ppFVar5) = pFVar1;
            HeapSiftDown<FProperty_*,int,FIdentityFunctor,TReversePredicate<_FClassNetCacheMgr::SortProperties_::__l2::FCompareUFieldOffsets>_>
                      (ppFVar5,0,iVar12,local_400,local_378);
            iVar12 = iVar12 + -1;
            lVar8 = lVar8 + -8;
          } while (0 < iVar12);
        }
      }
      else if (iVar12 != 0) goto LAB_141fbb57d;
LAB_141fbb5ec:
      local_3f8 = local_3f8 + -3;
    } while (&local_358 <= local_3f8);
  }
  return;
code_r0x000141fbb16e:
  pFVar1 = *ppFVar5;
  pFVar2 = *ppFVar11;
  if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
    bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar1->_padding_,&local_3c8);
    }
    else {
      ::FString::FString(&local_3c8,L"None");
    }
    bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar4) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&local_3d8);
    }
    else {
      ::FString::FString(&local_3d8,L"None");
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_3c8.Data.ArrayNum != 0) {
      FVar7.Data = local_3c8.Data.AllocatorInstance.Data;
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3d8.Data.ArrayNum != 0) {
      FVar6.Data = local_3d8.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
    bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    ppFVar9 = local_3f0;
    if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
      ppFVar9 = local_3f0;
    }
  }
  else {
    bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
  }
  if (bVar4 == false) goto LAB_141fbb161;
LAB_141fbb250:
  do {
    ppFVar9 = ppFVar10;
    ppFVar10 = ppFVar9 + -1;
    if (ppFVar10 <= ppFVar11) break;
    pFVar1 = *ppFVar11;
    pFVar2 = *ppFVar10;
    if (pFVar2->Offset_Internal == pFVar1->Offset_Internal) {
      bVar4 = IsThisNotNull(pFVar1,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&pFVar1->_padding_,&local_3a8);
      }
      else {
        ::FString::FString(&local_3a8,L"None");
      }
      bVar4 = IsThisNotNull(pFVar2,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)&pFVar2->_padding_,&local_3b8);
      }
      else {
        ::FString::FString(&local_3b8,L"None");
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_3a8.Data.ArrayNum != 0) {
        FVar7.Data = local_3a8.Data.AllocatorInstance.Data;
      }
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_3b8.Data.ArrayNum != 0) {
        FVar6.Data = local_3b8.Data.AllocatorInstance.Data;
      }
      iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,(wchar_t *)FVar7.Data);
      bVar4 = SUB41((uint)iVar12 >> 0x1f,0);
      if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
      }
      if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar4 = pFVar2->Offset_Internal < pFVar1->Offset_Internal;
    }
  } while (bVar4 == false);
  if (ppFVar5 <= ppFVar10) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar10;
    *ppFVar10 = pFVar1;
    ppFVar9 = local_3f0;
    goto LAB_141fbb161;
  }
  pFVar1 = *ppFVar11;
  local_3e8 = local_3e8 + -1;
  *ppFVar11 = *ppFVar10;
  *ppFVar10 = pFVar1;
  if ((longlong)((longlong)ppFVar10 + (-8 - (longlong)ppFVar11) & 0xfffffffffffffff8U) <
      (longlong)((longlong)local_3f0 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < local_3f0) {
      *local_3f8 = ppFVar5;
      local_3f8[1] = local_3f0;
      *(int *)(local_3f8 + 2) = local_3e8;
      local_3f8 = local_3f8 + 3;
    }
    if (ppFVar10 <= ppFVar11 + 1) goto LAB_141fbb5ec;
    local_3f0 = ppFVar9 + -2;
    ppFVar5 = ppFVar11;
  }
  else {
    if (ppFVar11 + 1 < ppFVar10) {
      *local_3f8 = ppFVar11;
      local_3f8[1] = ppFVar9 + -2;
      *(int *)(local_3f8 + 2) = local_3e8;
      local_3f8 = local_3f8 + 3;
    }
    local_3e0 = ppFVar5;
    if (local_3f0 <= ppFVar5) goto LAB_141fbb5ec;
  }
  iVar12 = (int)((longlong)local_3f0 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar11 = ppFVar5;
  if (local_3e8 == 0) goto LAB_141fbb3f7;
  goto LAB_141fbb130;
}

// IntroSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,`FCoreRedirects::RedirectNameAndValuesUnderReadLock'::__l8::<lambda_2>_>_> @ 141fbb650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,_FCoreRedirects::RedirectNameAndValuesUnderReadLock_::__l8::<lambda_2>_>_>
          (FCoreRedirect **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FCoreRedirect_const_*,_private:_static_bool___cdecl_FCoreRedirects::RedirectNameAndValuesUnderReadLock(ECoreRedirectFlags,FCoreRedirectObjectName_const_&,FCoreRedirectObjectName_&,FCoreRedirect_const_*_*,ECoreRedirectMatchFlags,FScopeCoreRedirectsReadLockedContext_&)_::_8_::<lambda_2>_>
          param_4)

{
  FCoreRedirect *pFVar1;
  int iVar2;
  int iVar3;
  FCoreRedirect **ppFVar4;
  FCoreRedirect **ppFVar5;
  FCoreRedirect **ppFVar6;
  FCoreRedirect **ppFVar7;
  FCoreRedirect **ppFVar8;
  float fVar9;
  undefined1 auStack_398 [32];
  FIdentityFunctor local_378;
  FCoreRedirect ***local_370;
  int local_368;
  FCoreRedirect **local_350;
  FCoreRedirect **local_348;
  FCoreRedirect **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_398;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_378 = param_3;
    local_348 = param_1;
    fVar9 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar9;
    memset(local_330,0,0x2e8);
    local_370 = &local_348;
    do {
      ppFVar8 = local_370[1];
      ppFVar7 = *local_370;
      local_350 = local_370[2];
      iVar2 = (int)((longlong)ppFVar8 - (longlong)ppFVar7 >> 3) + 1;
      local_368 = (int)local_350;
      ppFVar6 = ppFVar7;
      if ((int)local_350 != 0) {
LAB_141fbb720:
        if (8 < iVar2) {
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          ppFVar4 = ppFVar8 + 1;
          pFVar1 = ppFVar6[iVar2 >> 1];
          ppFVar6[iVar2 >> 1] = *ppFVar6;
          *ppFVar6 = pFVar1;
          ppFVar7 = ppFVar6;
LAB_141fbb750:
          ppFVar7 = ppFVar7 + 1;
          if (ppFVar7 <= ppFVar8) goto code_r0x000141fbb759;
          goto LAB_141fbb790;
        }
        for (; ppFVar4 = ppFVar6, ppFVar7 = ppFVar6, ppFVar6 < ppFVar8; ppFVar8 = ppFVar8 + -1) {
          while (ppFVar5 = ppFVar4, ppFVar7 = ppFVar7 + 1, ppFVar7 <= ppFVar8) {
            pFVar1 = *ppFVar7;
            iVar2 = FCoreRedirectObjectName::MatchScore
                              (&(*ppFVar5)->OldName,(param_4.Predicate)->OldObjectName,
                               (*ppFVar5)->RedirectFlags,(param_4.Predicate)->MatchFlags);
            iVar3 = FCoreRedirectObjectName::MatchScore
                              (&pFVar1->OldName,(param_4.Predicate)->OldObjectName,
                               pFVar1->RedirectFlags,(param_4.Predicate)->MatchFlags);
            ppFVar4 = ppFVar7;
            if (iVar2 <= iVar3) {
              ppFVar4 = ppFVar5;
            }
          }
          pFVar1 = *ppFVar5;
          *ppFVar5 = *ppFVar8;
          *ppFVar8 = pFVar1;
          param_3 = local_378;
        }
        goto LAB_141fbb89d;
      }
LAB_141fbb887:
      HeapSortInternal<FCoreRedirect_const_*,int,FIdentityFunctor,TDereferenceWrapper<FCoreRedirect_const_*,_FCoreRedirects::RedirectNameAndValuesUnderReadLock_::__l8::<lambda_2>_>_>
                (ppFVar7,iVar2,param_3,param_4);
LAB_141fbb89d:
      local_370 = local_370 + -3;
    } while (&local_348 <= local_370);
  }
  return;
code_r0x000141fbb759:
  pFVar1 = *ppFVar7;
  iVar2 = FCoreRedirectObjectName::MatchScore
                    (&(*ppFVar6)->OldName,(param_4.Predicate)->OldObjectName,
                     (*ppFVar6)->RedirectFlags,(param_4.Predicate)->MatchFlags);
  iVar3 = FCoreRedirectObjectName::MatchScore
                    (&pFVar1->OldName,(param_4.Predicate)->OldObjectName,pFVar1->RedirectFlags,
                     (param_4.Predicate)->MatchFlags);
  if (iVar2 <= iVar3) goto LAB_141fbb750;
LAB_141fbb790:
  do {
    ppFVar5 = ppFVar4;
    ppFVar4 = ppFVar5 + -1;
    if (ppFVar4 <= ppFVar6) break;
    pFVar1 = *ppFVar6;
    iVar2 = FCoreRedirectObjectName::MatchScore
                      (&(*ppFVar4)->OldName,(param_4.Predicate)->OldObjectName,
                       (*ppFVar4)->RedirectFlags,(param_4.Predicate)->MatchFlags);
    iVar3 = FCoreRedirectObjectName::MatchScore
                      (&pFVar1->OldName,(param_4.Predicate)->OldObjectName,pFVar1->RedirectFlags,
                       (param_4.Predicate)->MatchFlags);
  } while (iVar2 <= iVar3);
  if (ppFVar7 <= ppFVar4) {
    pFVar1 = *ppFVar7;
    *ppFVar7 = *ppFVar4;
    *ppFVar4 = pFVar1;
    goto LAB_141fbb750;
  }
  pFVar1 = *ppFVar6;
  *ppFVar6 = *ppFVar4;
  local_368 = local_368 + -1;
  *ppFVar4 = pFVar1;
  if ((longlong)((longlong)ppFVar4 + (-8 - (longlong)ppFVar6) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar8 - (longlong)ppFVar7 & 0xfffffffffffffff8U)) {
    if (ppFVar7 < ppFVar8) {
      *local_370 = ppFVar7;
      local_370[1] = ppFVar8;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (ppFVar4 <= ppFVar6 + 1) goto LAB_141fbb89d;
    ppFVar8 = ppFVar5 + -2;
    ppFVar7 = ppFVar6;
  }
  else {
    if (ppFVar6 + 1 < ppFVar4) {
      *local_370 = ppFVar6;
      local_370[1] = ppFVar5 + -2;
      *(int *)(local_370 + 2) = local_368;
      local_370 = local_370 + 3;
    }
    if (ppFVar8 <= ppFVar7) goto LAB_141fbb89d;
  }
  iVar2 = (int)((longlong)ppFVar8 - (longlong)ppFVar7 >> 3) + 1;
  ppFVar6 = ppFVar7;
  if (local_368 == 0) goto LAB_141fbb887;
  goto LAB_141fbb720;
}

// IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_> @ 141fbb990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::IntroSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_>
          (TTuple<FString,FString> *param_1,int param_2,FIdentityFunctor param_3,TLess<void> param_4
          )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  TTuple<FString,FString> *pTVar7;
  int iVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  TTuple<FString,FString> *pTVar11;
  TTuple<FString,FString> **ppTVar12;
  TTuple<FString,FString> *pTVar13;
  TTuple<FString,FString> *pTVar14;
  TTuple<FString,FString> *pTVar15;
  TTuple<FString,FString> *pTVar16;
  float fVar17;
  undefined1 auStack_398 [32];
  int local_378;
  TTuple<FString,FString> *local_360;
  TTuple<FString,FString> *local_358;
  TTuple<FString,FString> *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (param_2 < 2) {
    return;
  }
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_350 = param_1 + (longlong)param_2 + -1;
  local_358 = param_1;
  fVar17 = logf((float)param_2 * (float)param_2);
  local_348 = (undefined4)(longlong)fVar17;
  memset(local_340,0,0x2e8);
  ppTVar12 = &local_358;
LAB_141fbba20:
  pTVar13 = ppTVar12[1];
  local_360 = ppTVar12[2];
  iVar8 = (int)((longlong)pTVar13 - (longlong)*ppTVar12 >> 5);
  pTVar7 = *ppTVar12;
  local_378 = (int)local_360;
  while (iVar8 = iVar8 + 1, local_378 != 0) {
    if (iVar8 < 9) goto joined_r0x000141fbbd29;
    uVar1 = *(undefined8 *)&pTVar7->field_0x8;
    pTVar15 = pTVar13 + 1;
    pTVar11 = pTVar7 + iVar8 / 2;
    uVar2 = *(undefined8 *)pTVar11;
    uVar3 = *(undefined8 *)&pTVar11->field_0x8;
    uVar4 = *(undefined8 *)&pTVar11->field_0x10;
    uVar5 = *(undefined8 *)&pTVar11->field_0x18;
    *(undefined8 *)pTVar11 = *(undefined8 *)pTVar7;
    *(undefined8 *)&pTVar11->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar7->field_0x18;
    *(undefined8 *)&pTVar11->field_0x10 = *(undefined8 *)&pTVar7->field_0x10;
    *(undefined8 *)&pTVar11->field_0x18 = uVar1;
    *(undefined8 *)pTVar7 = uVar2;
    *(undefined8 *)&pTVar7->field_0x8 = uVar3;
    *(undefined8 *)&pTVar7->field_0x10 = uVar4;
    *(undefined8 *)&pTVar7->field_0x18 = uVar5;
    pTVar11 = pTVar7;
LAB_141fbba90:
    do {
      do {
        pTVar14 = pTVar11;
        pTVar11 = pTVar14 + 1;
        if (pTVar13 < pTVar11) goto LAB_141fbbb40;
        if (*(int *)&pTVar14[1].field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pTVar11;
        }
        if (*(int *)&pTVar7->field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)pTVar7;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (iVar8 < 0) goto LAB_141fbbb40;
        if (*(int *)&pTVar7->field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pTVar7;
        }
        if (*(int *)&pTVar14[1].field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)pTVar11;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      } while (iVar8 < 0);
      if (*(int *)&pTVar14[1].field_0x18 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)&pTVar14[1].field_0x10;
      }
      if (*(int *)&pTVar7->field_0x18 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)&pTVar7->field_0x10;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
    } while (-1 < iVar8);
LAB_141fbbb40:
    do {
      do {
        pTVar16 = pTVar15;
        pTVar15 = pTVar16 + -1;
        if (pTVar15 <= pTVar7) goto LAB_141fbbbe6;
        if (*(int *)&pTVar7->field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pTVar7;
        }
        if (*(int *)&pTVar16[-1].field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)pTVar15;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (iVar8 < 0) goto LAB_141fbbbe6;
        if (*(int *)&pTVar16[-1].field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pTVar15;
        }
        if (*(int *)&pTVar7->field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)pTVar7;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      } while (iVar8 < 0);
      if (*(int *)&pTVar7->field_0x18 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)&pTVar7->field_0x10;
      }
      if (*(int *)&pTVar16[-1].field_0x18 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)&pTVar16[-1].field_0x10;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
    } while (-1 < iVar8);
LAB_141fbbbe6:
    uVar1 = *(undefined8 *)&pTVar16[-1].field_0x8;
    if (pTVar11 <= pTVar15) {
      uVar2 = *(undefined8 *)pTVar11;
      uVar3 = *(undefined8 *)&pTVar14[1].field_0x8;
      uVar4 = *(undefined8 *)&pTVar14[1].field_0x10;
      uVar5 = *(undefined8 *)&pTVar14[1].field_0x18;
      *(undefined8 *)pTVar11 = *(undefined8 *)pTVar15;
      *(undefined8 *)&pTVar14[1].field_0x8 = uVar1;
      uVar1 = *(undefined8 *)&pTVar16[-1].field_0x18;
      *(undefined8 *)&pTVar14[1].field_0x10 = *(undefined8 *)&pTVar16[-1].field_0x10;
      *(undefined8 *)&pTVar14[1].field_0x18 = uVar1;
      *(undefined8 *)pTVar15 = uVar2;
      *(undefined8 *)&pTVar16[-1].field_0x8 = uVar3;
      *(undefined8 *)&pTVar16[-1].field_0x10 = uVar4;
      *(undefined8 *)&pTVar16[-1].field_0x18 = uVar5;
      goto LAB_141fbba90;
    }
    uVar2 = *(undefined8 *)pTVar7;
    uVar3 = *(undefined8 *)&pTVar7->field_0x8;
    uVar4 = *(undefined8 *)&pTVar7->field_0x10;
    uVar5 = *(undefined8 *)&pTVar7->field_0x18;
    local_378 = local_378 + -1;
    *(undefined8 *)pTVar7 = *(undefined8 *)pTVar15;
    *(undefined8 *)&pTVar7->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&pTVar16[-1].field_0x18;
    *(undefined8 *)&pTVar7->field_0x10 = *(undefined8 *)&pTVar16[-1].field_0x10;
    *(undefined8 *)&pTVar7->field_0x18 = uVar1;
    *(undefined8 *)pTVar15 = uVar2;
    *(undefined8 *)&pTVar16[-1].field_0x8 = uVar3;
    *(undefined8 *)&pTVar16[-1].field_0x10 = uVar4;
    *(undefined8 *)&pTVar16[-1].field_0x18 = uVar5;
    if ((longlong)((longlong)pTVar15 + (-0x20 - (longlong)pTVar7) & 0xffffffffffffffe0U) <
        (longlong)((longlong)pTVar13 - (longlong)pTVar11 & 0xffffffffffffffe0U)) {
      if (pTVar11 < pTVar13) {
        *ppTVar12 = pTVar11;
        ppTVar12[1] = pTVar13;
        *(int *)(ppTVar12 + 2) = local_378;
        ppTVar12 = ppTVar12 + 3;
      }
      if (pTVar15 <= pTVar7 + 1) goto LAB_141fbbcca;
      pTVar13 = pTVar16 + -2;
      pTVar11 = pTVar7;
    }
    else {
      if (pTVar7 + 1 < pTVar15) {
        *ppTVar12 = pTVar7;
        ppTVar12[1] = pTVar16 + -2;
        *(int *)(ppTVar12 + 2) = local_378;
        ppTVar12 = ppTVar12 + 3;
      }
      if (pTVar13 <= pTVar11) goto LAB_141fbbcca;
    }
    iVar8 = (int)((longlong)pTVar13 - (longlong)pTVar11 >> 5);
    pTVar7 = pTVar11;
  }
  HeapSortInternal<TTuple<FString,FString>,int,FIdentityFunctor,TLess<void>_>
            (pTVar7,iVar8,param_3,param_4);
  goto LAB_141fbbcca;
joined_r0x000141fbbd29:
  for (; pTVar15 = pTVar7, pTVar11 = pTVar7, pTVar7 < pTVar13; pTVar13 = pTVar13 + -1) {
    while (pTVar14 = pTVar15, pTVar15 = pTVar11 + 1, pTVar15 <= pTVar13) {
      if (*(int *)&pTVar11[1].field_0x8 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)pTVar15;
      }
      if (*(int *)&pTVar14->field_0x8 == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = *(wchar_t **)pTVar14;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
      if (iVar8 < 0) {
LAB_141fbbddc:
        bVar6 = true;
      }
      else {
        if (*(int *)&pTVar14->field_0x8 == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)pTVar14;
        }
        if (*(int *)&pTVar11[1].field_0x8 == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)pTVar15;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
        if (-1 < iVar8) {
          if (*(int *)&pTVar11[1].field_0x18 == 0) {
            pwVar10 = L"";
          }
          else {
            pwVar10 = *(wchar_t **)&pTVar11[1].field_0x10;
          }
          if (*(int *)&pTVar14->field_0x18 == 0) {
            pwVar9 = L"";
          }
          else {
            pwVar9 = *(wchar_t **)&pTVar14->field_0x10;
          }
          iVar8 = FGenericPlatformStricmp::Stricmp(pwVar9,pwVar10);
          if (iVar8 < 0) goto LAB_141fbbddc;
        }
        bVar6 = false;
      }
      pTVar11 = pTVar15;
      if (!bVar6) {
        pTVar15 = pTVar14;
      }
    }
    uVar1 = *(undefined8 *)pTVar14;
    uVar2 = *(undefined8 *)&pTVar14->field_0x8;
    uVar3 = *(undefined8 *)&pTVar14->field_0x10;
    uVar4 = *(undefined8 *)&pTVar14->field_0x18;
    uVar5 = *(undefined8 *)&pTVar13->field_0x8;
    *(undefined8 *)pTVar14 = *(undefined8 *)pTVar13;
    *(undefined8 *)&pTVar14->field_0x8 = uVar5;
    uVar5 = *(undefined8 *)&pTVar13->field_0x18;
    *(undefined8 *)&pTVar14->field_0x10 = *(undefined8 *)&pTVar13->field_0x10;
    *(undefined8 *)&pTVar14->field_0x18 = uVar5;
    *(undefined8 *)pTVar13 = uVar1;
    *(undefined8 *)&pTVar13->field_0x8 = uVar2;
    *(undefined8 *)&pTVar13->field_0x10 = uVar3;
    *(undefined8 *)&pTVar13->field_0x18 = uVar4;
  }
LAB_141fbbcca:
  ppTVar12 = ppTVar12 + -3;
  if (ppTVar12 < &local_358) {
    return;
  }
  goto LAB_141fbba20;
}

// NewObject<UEnum> @ 141fbbe40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UEnum * __cdecl
NewObject<UEnum>(UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
                FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UEnum *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UEnum *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// ObjectPtrWrap<UObject_*,TObjectPtr<UObject>_> @ 141fbbf30

TObjectPtr<UObject> * __cdecl ObjectPtrWrap<UObject_*,TObjectPtr<UObject>_>(UObject **param_1)

{
  return (TObjectPtr<UObject> *)param_1;
}

// PostLoadCookedMetaData<UClass,UClassCookedMetaData> @ 141fbbf40

void __cdecl
CookedMetaDataUtil::Internal::PostLoadCookedMetaData<UClass,UClassCookedMetaData>
          (UClassCookedMetaData *param_1)

{
  return;
}

// PostLoadCookedMetaData<UEnum,UEnumCookedMetaData> @ 141fbbf50

void __cdecl
CookedMetaDataUtil::Internal::PostLoadCookedMetaData<UEnum,UEnumCookedMetaData>
          (UEnumCookedMetaData *param_1)

{
  return;
}

// PostLoadCookedMetaData<UScriptStruct,UStructCookedMetaData> @ 141fbbf60

void __cdecl
CookedMetaDataUtil::Internal::PostLoadCookedMetaData<UScriptStruct,UStructCookedMetaData>
          (UStructCookedMetaData *param_1)

{
  return;
}

// SerializeSingleField<FNumericProperty> @ 141fbc7d0

void __cdecl
SerializeSingleField<FNumericProperty>
          (FArchive *param_1,FNumericProperty **param_2,FFieldVariant param_3)

{
  code *pcVar1;
  bool bVar2;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FName,FFieldClass_*> *pTVar3;
  FNumericProperty *pFVar4;
  longlong *plVar5;
  FName local_res8;
  undefined8 local_res20;
  undefined8 local_48;
  FString local_40;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (*param_2 == (FNumericProperty *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = **(undefined8 **)&(*param_2)->field_0x8;
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_48);
    pFVar4 = *param_2;
    if (pFVar4 == (FNumericProperty *)0x0) {
      return;
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    if (local_res8 == (FName)0x0) {
      *param_2 = (FNumericProperty *)0x0;
      return;
    }
    local_res20 = 0;
    this = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
            *)FFieldClass::GetNameToFieldClassMap();
    pTVar3 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
             ::Find(this,local_res8);
    plVar5 = (longlong *)&pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FName,FFieldClass_*> *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 == (longlong *)0x0) {
      FName::ToString(&local_res8,&local_40);
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("FieldClassPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                         ,0x359,L"Field type %s does not exist");
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = (FNumericProperty *)(**(code **)(*plVar5 + 0x30))(param_3.Container,&local_res20,0);
    if ((pFVar4 == (FNumericProperty *)0x0) ||
       ((*(uint *)(*(longlong *)&pFVar4->field_0x8 + 0x18) >> 0x18 & 1) == 0)) {
      *param_2 = (FNumericProperty *)0x0;
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Field",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x4aa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = *param_2;
    }
    else {
      *param_2 = pFVar4;
    }
  }
  (**(code **)(*(longlong *)pFVar4 + 0x10))(pFVar4,param_1);
  return;
}

// WriteToString<1024,FName_const_&> @ 141fbca20

TStringBuilderWithBuffer<wchar_t,1024> * __cdecl
WriteToString<1024,FName_const_&>
          (TStringBuilderWithBuffer<wchar_t,1024> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_FCoreRedirectsContext::EFlags>_> @ 141fbca70

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_FCoreRedirectsContext::EFlags>_>
          (_Atomic_padded<FCoreRedirectsContext::EFlags> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<enum_FCoreRedirectsContext::EFlags>_> @ 141fbca80

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<enum_FCoreRedirectsContext::EFlags>_>
          (_Atomic_padded<FCoreRedirectsContext::EFlags> *param_1)

{
  return (int *)param_1;
}

// _Atomic_reinterpret_as<int,enum_FCoreRedirectsContext::EFlags> @ 141fbca90

int __cdecl std::_Atomic_reinterpret_as<int,enum_FCoreRedirectsContext::EFlags>(EFlags *param_1)

{
  return *param_1;
}

// operator<< @ 141fc0ee0

FArchive * __cdecl operator<<(FArchive *param_1,FFieldClass **param_2)

{
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this;
  TTuple<FName,FFieldClass_*> *pTVar1;
  FName FVar2;
  FName local_res8;
  
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  local_res8 = FVar2;
  if (*param_2 != (FFieldClass *)0x0) {
    local_res8 = (*param_2)->Name;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
  if ((param_1->field_0x28 & 1) != 0) {
    if (local_res8 != (FName)0x0) {
      this = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
              *)FFieldClass::GetNameToFieldClassMap();
      pTVar1 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
               ::Find(this,local_res8);
      if (pTVar1 != (TTuple<FName,FFieldClass_*> *)0x0) {
        FVar2.ComparisonIndex.Value = *(uint *)&pTVar1->field_0x8;
        FVar2.Number = *(uint *)&pTVar1->field_0xc;
      }
    }
    *param_2 = (FFieldClass *)FVar2;
  }
  return param_1;
}

// operator<< @ 141fc0f60

/* WARNING: Enum "Type": Some values do not have unique names */

FArchive * __cdecl operator<<(FArchive *param_1,FFieldPath *param_2)

{
  TWeakObjectPtr<UStruct,FWeakObjectPtr> *this;
  int *piVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FFieldClass *pFVar7;
  UStruct *pUVar8;
  FField *pFVar9;
  FField *pFVar10;
  UObject *pUVar11;
  FArchive *pFVar12;
  FLinkerLoad *pFVar13;
  uint uVar14;
  uint uVar15;
  UObject *local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  code *local_b0;
  undefined8 local_a8;
  UStruct *local_a0;
  undefined8 local_98;
  UObject *local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1);
  if ((param_1->field_0x28 & 4) == 0) {
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->Path);
    if (((param_2->Path).ArrayNum == 1) &&
       (*(longlong *)(param_2->Path).AllocatorInstance.Data == 0)) {
      piVar1 = &(param_2->Path).ArrayMax;
      (param_2->Path).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(param_2->Path).AllocatorInstance,0,piVar1);
      }
    }
    iVar6 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if ((iVar6 < 0x21) &&
       (iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
       iVar6 < 0x1e)) {
      if ((param_2->Path).ArrayNum == 0) {
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_98 = 0;
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_98);
        (param_2->ResolvedOwner).WeakPtr = local_res20;
      }
      else {
        pFVar13 = (FLinkerLoad *)(**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        if ((pFVar13 == (FLinkerLoad *)0x0) || ((int)pFVar13->_padding_ != 1)) {
          pFVar13 = (FLinkerLoad *)0x0;
        }
        pUVar8 = FFieldPath::TryToResolveOwnerFromStruct
                           (param_2,(UStruct *)0x0,UseStructIfOuterNotFound);
        if ((pUVar8 == (UStruct *)0x0) && (pFVar13 != (FLinkerLoad *)0x0)) {
          pUVar8 = FFieldPath::TryToResolveOwnerFromLinker(param_2,pFVar13);
        }
        if (((5 < (byte)LogProperty._0_1_) && (pUVar8 == (UStruct *)0x0)) &&
           ((param_2->Path).ArrayNum != 0)) {
          PathToString(&local_68,&param_2->Path);
          UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        local_a0 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        FWeakObjectPtr::operator=(&(param_2->ResolvedOwner).WeakPtr,(FObjectPtr)&local_a0);
        if ((5 < (byte)LogProperty._0_1_) && (pUVar8 == (UStruct *)0x0)) {
          PathToString(&local_58,&param_2->Path);
          UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    else {
      local_d8 = FWeakObjectPtr::Get(&(param_2->ResolvedOwner).WeakPtr);
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_d8);
      local_90 = local_d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d8);
      }
      FWeakObjectPtr::operator=(&(param_2->ResolvedOwner).WeakPtr,(FObjectPtr)&local_90);
      if (local_d8 == (UObject *)0x0) {
        if ((5 < (byte)LogProperty._0_1_) && ((param_2->Path).ArrayNum != 0)) {
          PathToString(&local_48,&param_2->Path);
          UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogProperty);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        piVar1 = &(param_2->Path).ArrayMax;
        (param_2->Path).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,0,&(param_2->Path).AllocatorInstance,0,piVar1);
        }
      }
    }
    if ((param_1->field_0x2b & 1) != 0) {
      return param_1;
    }
    param_2->ResolvedField = (FField *)0x0;
    return param_1;
  }
  this = &param_2->ResolvedOwner;
  local_res18 = FWeakObjectPtr::Get(&this->WeakPtr);
  bVar4 = false;
  pFVar10 = (FField *)0x0;
  if ((local_res18 == (UObject *)0x0) || ((param_1->field_0x2b & 0x10) == 0)) goto LAB_141fc1176;
  pFVar7 = FProperty::StaticClass();
  pFVar9 = pFVar10;
  if (param_2->ResolvedField == (FField *)0x0) {
LAB_141fc103b:
    if ((param_2->Path).ArrayNum != 0) {
      pUVar8 = (UStruct *)FWeakObjectPtr::Get(&this->WeakPtr);
      if (((pUVar8 != (UStruct *)0x0) ||
          (pUVar8 = FFieldPath::TryToResolveOwnerFromStruct
                              (param_2,(UStruct *)0x0,UseStructIfOuterNotFound),
          pUVar8 != (UStruct *)0x0)) && (iVar6 = (param_2->Path).ArrayNum, 0 < iVar6)) {
        uVar15 = iVar6 - 1;
        uVar14 = 0;
        if ((int)uVar15 < iVar6) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar12 = (FArchive *)(*pcVar3)();
          return pFVar12;
        }
        for (pFVar9 = FindFProperty<FField>
                                (pUVar8,*(FName *)((param_2->Path).AllocatorInstance.Data +
                                                  (longlong)(int)uVar15 * 8),Default);
            pFVar9 != (FField *)0x0;
            pFVar9 = (FField *)
                     (*local_b0)(pFVar9,(param_2->Path).AllocatorInstance.Data +
                                        (longlong)(int)uVar15 * 8)) {
          uVar15 = uVar15 - 1;
          if ((int)uVar15 < 0) {
            if ((pFVar7 == (FFieldClass *)0x0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar12 = (FArchive *)(*pcVar3)();
              return pFVar12;
            }
            pFVar2 = pFVar9->ClassPrivate;
            if (pFVar7->Id == CASTCLASS_None) goto joined_r0x000141fc11e9;
            pFVar10 = (FField *)(ulonglong)((pFVar2->CastFlags & pFVar7->Id) != CASTCLASS_None);
            goto LAB_141fc1200;
          }
          local_b0 = *(code **)(pFVar9->_padding_ + 0x50);
          uVar14 = 0;
          if ((int)uVar15 < (param_2->Path).ArrayNum) {
            uVar14 = ~uVar15 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar4 = FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar12 = (FArchive *)(*pcVar3)();
            return pFVar12;
          }
        }
      }
      goto LAB_141fc1165;
    }
  }
  else {
    bVar4 = FWeakObjectPtr::IsValid(&this->WeakPtr);
    pFVar9 = param_2->ResolvedField;
    if (!bVar4) goto LAB_141fc103b;
  }
  if (pFVar9 != (FField *)0x0) {
LAB_141fc100a:
    if (((uint)(int)pFVar9->ClassPrivate->CastFlags >> 0xf & 1) != 0) {
      bVar4 = ((ulonglong)pFVar9[1].ClassPrivate & 0x800000000) != 0;
      goto LAB_141fc1176;
    }
  }
  goto LAB_141fc1173;
joined_r0x000141fc11e9:
  if (pFVar2 == (FFieldClass *)0x0) goto LAB_141fc1200;
  if (pFVar2 == pFVar7) {
    cVar5 = '\x01';
    goto LAB_141fc1205;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x000141fc11e9;
LAB_141fc1200:
  cVar5 = (char)pFVar10;
LAB_141fc1205:
  if (cVar5 != '\0') {
    param_2->ResolvedField = pFVar9;
    goto LAB_141fc100a;
  }
LAB_141fc1165:
  if (param_2->ResolvedField != (FField *)0x0) {
    (param_2->ResolvedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    param_2->ResolvedField = (FField *)0x0;
  }
LAB_141fc1173:
  bVar4 = false;
LAB_141fc1176:
  if ((local_res18 == (UObject *)0x0) || (bVar4)) {
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    local_a8 = 0;
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&local_d0);
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_a8);
    if ((5 < (byte)LogProperty._0_1_) && ((param_2->Path).ArrayNum != 0)) {
      PathToString(&local_88,&param_2->Path);
      UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  else {
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(param_1,&param_2->Path);
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res18);
  }
  pUVar11 = FWeakObjectPtr::Get(&(param_2->ResolvedOwner).WeakPtr);
  if (local_res18 != pUVar11) {
    if (local_res18 == (UObject *)0x0) {
      FString::FString(&local_c0,L"None");
    }
    else {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)local_res18,&local_c0,(UObject *)0x0);
    }
    FFieldPath::ToString(param_2,&local_78);
    bVar4 = FDebug::CheckVerifyFailedImpl2
                      ("Owner == InOutPropertyPath.ResolvedOwner.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\FieldPath.cpp"
                       ,0x15e,
                       L"FFieldPath owner has changed when saving, this is not allowed (Path: \"%s\", new owner: \"%s\")"
                      );
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar12 = (FArchive *)(*pcVar3)();
      return pFVar12;
    }
  }
  return param_1;
}

// `scalar_deleting_destructor' @ 141fc2ae0

void * __thiscall
TProperty<FFieldPath,FProperty>::_scalar_deleting_destructor_
          (TProperty<FFieldPath,FProperty> *this,uint param_1)

{
  *(undefined ***)this = &___7FField__6B_;
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2b30

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCoreRedirects::FWildcardData,SharedPointerInternals::DefaultDeleter<FCoreRedirects::FWildcardData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FCoreRedirects::FWildcardData,SharedPointerInternals::DefaultDeleter<FCoreRedirects::FWildcardData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2b70

void * __thiscall FField::_scalar_deleting_destructor_(FField *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FField__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2bb0

void * __thiscall
FFieldPathProperty::_scalar_deleting_destructor_(FFieldPathProperty *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FField__6B_;
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2c00

void * __thiscall FNetBitReader::_scalar_deleting_destructor_(FNetBitReader *this,uint param_1)

{
  TPimplPtr<UE::Net::FNetResult,1> TVar1;
  
  this->_padding_ = (longlong)&___7FNetBitReader__6B_;
  TVar1 = this->ExtendedError;
  if (TVar1 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
    (**(code **)((longlong)TVar1 + -0x10))((longlong)TVar1 + -0x10);
  }
  FBitReader::~FBitReader((FBitReader *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2c60

void * __thiscall FNetBitWriter::_scalar_deleting_destructor_(FNetBitWriter *this,uint param_1)

{
  FBitWriter::~FBitWriter((FBitWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2ca0

void * __thiscall
UClassCookedMetaData::_scalar_deleting_destructor_(UClassCookedMetaData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UClassCookedMetaData__6B_;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FunctionsMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionsMetaData);
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClassMetaData).PropertiesMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ClassMetaData).PropertiesMetaData);
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassMetaData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x118);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2d80

void * __thiscall
UEnumCookedMetaData::_scalar_deleting_destructor_(UEnumCookedMetaData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UEnumCookedMetaData__6B_;
  *(undefined4 *)&(this->EnumMetaData).ObjectMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->EnumMetaData).ObjectMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EnumMetaData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2e10

void * __thiscall UPackageMap::_scalar_deleting_destructor_(UPackageMap *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  this->_padding_ = (longlong)&___7UPackageMap__6B_;
  pFVar1 = (this->DebugContextString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TrackedMappedDynamicNetGuids).HashSize = 0;
  FVar2 = (this->TrackedMappedDynamicNetGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrackedMappedDynamicNetGuids).Elements);
  (this->TrackedUnmappedNetGuids).HashSize = 0;
  FVar2 = (this->TrackedUnmappedNetGuids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FNetworkGUID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TrackedUnmappedNetGuids).Elements);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 141fc2ee0

void * __thiscall
UStructCookedMetaData::_scalar_deleting_destructor_(UStructCookedMetaData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UStructCookedMetaData__6B_;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMetaData).PropertiesMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StructMetaData).PropertiesMetaData);
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructMetaData);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,200);
    }
  }
  return this;
}

// ClassRedirectImpl @ 141fc6900

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
ClassRedirectImpl(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
                 wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Class,pFVar4,pFVar3);
  return pFVar5;
}

// ClassRedirectInstancesImpl @ 141fc69a0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
ClassRedirectInstancesImpl
          (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),
                      Category_InstanceOnly|Type_Class,pFVar4,pFVar3);
  return pFVar5;
}

// EmptyLinkFunctionForGeneratedCodeCookedMetaData @ 141fca290

void __cdecl EmptyLinkFunctionForGeneratedCodeCookedMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeCoreNet @ 141fca2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeCoreNet(void)

{
  return;
}

// EnumRedirectImpl @ 141fca2b0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
EnumRedirectImpl(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
                wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Enum,pFVar4,pFVar3);
  return pFVar5;
}

// FindFPropertyByPath @ 141fcbb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FField * __cdecl FindFPropertyByPath(wchar_t *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  int iVar3;
  UClass *pUVar4;
  UStruct *pUVar5;
  FField *pFVar6;
  FField *pFVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  FField *pFVar11;
  size_t sVar12;
  bool bVar13;
  undefined1 auStack_878 [32];
  wchar_t *local_858;
  FName local_848 [2];
  wchar_t *local_838;
  int iStack_830;
  undefined4 uStack_82c;
  TStringView<wchar_t> local_828;
  wchar_t local_818 [1024];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_878;
  pFVar7 = (FField *)0x0;
  wVar8 = *param_1;
  sVar12 = 0xffffffff;
  pFVar6 = pFVar7;
  pFVar11 = pFVar7;
  if (wVar8 != L'\0') {
    do {
      bVar13 = wVar8 != L':';
      pFVar6 = (FField *)((longlong)&pFVar6->_padding_ + 1);
      wVar8 = param_1[(longlong)pFVar6];
      iVar3 = (int)pFVar11;
      if (bVar13) {
        iVar3 = (int)sVar12;
      }
      sVar12 = (size_t)iVar3;
      pFVar11 = (FField *)(ulonglong)((int)pFVar11 + 1);
    } while (wVar8 != L'\0');
    if (-1 < iVar3) {
      wcsncpy(local_818,param_1,sVar12);
      local_818[sVar12] = L'\0';
      pwVar10 = param_1 + sVar12 + 1;
      local_838 = local_818;
      sVar12 = wcslen(local_818);
      iStack_830 = (int)sVar12;
      pUVar4 = Z_Construct_UClass_UStruct_NoRegister();
      local_828._12_4_ = uStack_82c;
      local_828.Size = iStack_830;
      local_828.DataPtr = local_838;
      pUVar5 = (UStruct *)StaticFindObject(pUVar4,(UObject *)0x0,&local_828,None);
      if (pUVar5 != (UStruct *)0x0) {
        wVar8 = *pwVar10;
        pwVar9 = pwVar10;
        while (wVar8 != L'\0') {
          if (((wVar8 == L':') || (wVar8 == L'.')) &&
             (local_858 = pwVar10,
             bVar13 = FDebug::CheckVerifyFailedImpl2
                                ("*TestChar != \':\' && *TestChar != \'.\'",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                                 ,0x4a6,L"FindFieldByPath can\'t resolve nested properties: %s"),
             bVar13)) {
            pcVar2 = (code *)swi(3);
            pFVar6 = (FField *)(*pcVar2)();
            return pFVar6;
          }
          pwVar1 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
          wVar8 = *pwVar1;
        }
        FName::FName(local_848,pwVar10,FNAME_Find);
        pFVar7 = FindFProperty<FField>(pUVar5,local_848[0],Default);
      }
    }
  }
  return pFVar7;
}

// FunctionRedirectImpl @ 141fccbf0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
FunctionRedirectImpl
          (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Function,pFVar4,pFVar3
                     );
  return pFVar5;
}

// GetFullNameSafe @ 141fcf720

FString * __cdecl GetFullNameSafe(FString *__return_storage_ptr__,FField *param_1)

{
  if (param_1 != (FField *)0x0) {
    FField::GetFullName(param_1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"none");
  return __return_storage_ptr__;
}

// GetInnerFields @ 141fd0970

void __cdecl
CookedMetaDataUtil::Internal::GetInnerFields
          (FField *param_1,
          TArray<FField_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  FFieldClass *pFVar1;
  ForElementType<FField_*> FVar2;
  int iVar3;
  FProperty *pFVar4;
  ForElementType<FField_*> FVar5;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FField_*>_>
              (8,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (param_1 == (FField *)0x0) {
    return;
  }
  if (((uint)(int)param_1->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
    if (param_1 == (FField *)0x0) {
      return;
    }
    pFVar1 = param_1->ClassPrivate;
    if ((pFVar1->CastFlags & CASTCLASS_FSetProperty) != CASTCLASS_None) {
      iVar3 = param_2->ArrayNum;
      if (iVar3 == param_2->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FField_*>_>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar3 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<FField_*>)0x0) {
        param_2 = (TArray<FField_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2
        ;
      }
      *(FFieldObjectUnion *)((longlong)param_2 + (longlong)iVar3 * 8) = param_1[2].Owner.Container;
      return;
    }
    if ((pFVar1->CastFlags & CASTCLASS_FMapProperty) == CASTCLASS_None) {
      if ((pFVar1->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None) {
        return;
      }
      pFVar4 = FOptionalPropertyLayout::GetValueProperty
                         ((FOptionalPropertyLayout *)&param_1[2].Owner);
      iVar3 = param_2->ArrayNum;
      if (iVar3 == param_2->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FField_*>_>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar3 + 1;
      FVar2 = (param_2->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<FField_*>)0x0) {
        param_2 = (TArray<FField_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2
        ;
      }
      *(FProperty **)((longlong)param_2 + (longlong)iVar3 * 8) = pFVar4;
      return;
    }
    iVar3 = param_2->ArrayNum;
    if (iVar3 == param_2->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FField_*>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar3 + 1;
    FVar2 = (param_2->AllocatorInstance).SecondaryData;
    FVar5 = (ForElementType<FField_*>)param_2;
    if (FVar2 != (ForElementType<FField_*>)0x0) {
      FVar5 = FVar2;
    }
    *(FFieldObjectUnion *)((longlong)FVar5 + (longlong)iVar3 * 8) = param_1[2].Owner.Container;
    iVar3 = param_2->ArrayNum;
    if (iVar3 != param_2->ArrayMax) goto LAB_141fd0a9d;
  }
  else {
    iVar3 = param_2->ArrayNum;
    if (iVar3 != param_2->ArrayMax) goto LAB_141fd0a9d;
  }
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FField_*>_>
                    (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
LAB_141fd0a9d:
  param_2->ArrayNum = iVar3 + 1;
  FVar2 = (param_2->AllocatorInstance).SecondaryData;
  if (FVar2 != (ForElementType<FField_*>)0x0) {
    param_2 = (TArray<FField_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
  }
  *(FField **)((longlong)param_2 + (longlong)iVar3 * 8) = param_1[2].Next;
  return;
}

// GetPathNameSafe @ 141fd2640

FString * __cdecl GetPathNameSafe(FString *__return_storage_ptr__,FField *param_1,UObject *param_2)

{
  if (param_1 != (FField *)0x0) {
    FField::GetPathName(param_1,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  FString::FString(__return_storage_ptr__,L"none");
  return __return_storage_ptr__;
}

// GetTypeHash @ 141fd3160

uint __cdecl GetTypeHash(FFieldCookedMetaDataKey *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->FieldPath).AllocatorInstance.Data;
  iVar2 = (param_1->FieldPath).ArrayNum;
  uVar6 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->FieldPath).ArrayNum != iVar2) {
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

// GetTypeHash @ 141fd31f0

uint __cdecl GetTypeHash(FSoftObjectPath *param_1)

{
  int iVar1;
  FName FVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  
  FVar2 = (param_1->AssetPath).AssetName;
  uVar4 = GetTypeHash(FVar2.ComparisonIndex.Value);
  FVar3 = (param_1->AssetPath).PackageName;
  uVar5 = GetTypeHash(FVar3.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar3.Number;
  iVar1 = (param_1->SubPathString).Data.ArrayNum;
  uVar5 = uVar5 * 0x40 + uVar4 + FVar2.Number + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5;
  if (1 < iVar1) {
    uVar4 = FCrc::Strihash_DEPRECATED<char8_t>
                      (iVar1 + -1,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data);
    return uVar4 + 0x9e3779b9 + uVar5 * 0x40 + (uVar5 >> 2) ^ uVar5;
  }
  return uVar5;
}

// LexToString @ 141fd65a0

wchar_t * __cdecl LexToString(EChannelCloseReason param_1)

{
  switch(param_1) {
  case Destroyed:
    return L"Destroyed";
  case Dormancy:
    return L"Dormancy";
  case LevelUnloaded:
    return L"LevelUnloaded";
  case Relevancy:
    return L"Relevancy";
  case TearOff:
    return L"TearOff";
  case Migrated:
    return L"Migrated";
  default:
    return L"Unknown";
  }
}

// PackageRedirectImpl @ 141fd8b60

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
PackageRedirectImpl(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
                   wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Package,pFVar4,pFVar3)
  ;
  return pFVar5;
}

// PathToString @ 141fd8e60

FString * __cdecl
PathToString(FString *__return_storage_ptr__,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FString *pFVar7;
  uint uVar8;
  FName *pFVar9;
  wchar_t wVar10;
  int iVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  FString local_48;
  FString local_38;
  
  iVar2 = param_1->ArrayNum;
  pFVar9 = (FName *)(param_1->AllocatorInstance).Data;
  iVar11 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar11 = 0;
  }
  pFVar1 = pFVar9 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar1) break;
    local_res10 = *pFVar9;
    uVar5 = FName::GetStringLength(&local_res10);
    iVar11 = iVar11 + uVar5;
    pFVar9 = pFVar9 + 1;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (iVar11 == 0) {
    return __return_storage_ptr__;
  }
  FString::Reserve(__return_storage_ptr__,iVar11);
  uVar8 = param_1->ArrayNum - 1;
  uVar5 = 0;
  if ((int)uVar8 < param_1->ArrayNum) {
    uVar5 = ~uVar8 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  pFVar7 = FName::ToString((FName *)((param_1->AllocatorInstance).Data +
                                    (longlong)param_1->ArrayNum * 8 + -8),&local_48);
  iVar2 = (pFVar7->Data).ArrayNum;
  uVar8 = 0;
  uVar5 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = uVar8;
  }
  FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,uVar5);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (param_1->ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  iVar2 = (__return_storage_ptr__->Data).ArrayNum;
  uVar5 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar5 = uVar8;
  }
  if (uVar5 != 0) {
    if (((int)uVar5 < 1) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x107,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar3)();
      return pFVar7;
    }
    if (*(short *)(__return_storage_ptr__->Data).AllocatorInstance.Data == 0x2f) {
      wVar10 = L'.';
      goto LAB_141fd8fdf;
    }
  }
  wVar10 = L':';
LAB_141fd8fdf:
  FString::AppendChar(__return_storage_ptr__,wVar10);
  uVar5 = param_1->ArrayNum - 2;
  if (-1 < (int)uVar5) {
    lVar12 = (longlong)(int)uVar5;
    do {
      uVar6 = uVar8;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      pFVar7 = FName::ToString((FName *)((param_1->AllocatorInstance).Data + lVar12 * 8),&local_38);
      iVar2 = (pFVar7->Data).ArrayNum;
      uVar6 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar6 = uVar8;
      }
      FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,uVar6);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (uVar5 != 0) {
        FString::AppendChar(__return_storage_ptr__,L':');
      }
      lVar12 = lVar12 + -1;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return __return_storage_ptr__;
}

// PrepareCookedMetaDataForPurge @ 141fd94a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl CookedMetaDataUtil::Internal::PrepareCookedMetaDataForPurge(UObject *param_1)

{
  code *pcVar1;
  FName FVar2;
  UPackage *pUVar3;
  void *pvVar4;
  FName *pFVar5;
  undefined1 auStack_10d8 [32];
  undefined4 local_10b8;
  FName local_10a8;
  undefined1 local_10a0 [8];
  TStringBuilderBase<wchar_t> local_1098;
  wchar_t local_1078 [1035];
  wchar_t local_862 [5];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141fd94b8;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_10d8;
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (((uint)pUVar3->PackageFlagsPrivate >> 9 & 1) == 0) {
    local_10a8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_10a8.Number = *(uint *)&param_1->field_0x1c;
    local_1098.Base = local_1078;
    local_1098.CurPos = local_1078;
    local_1098.End = local_862;
    local_1098.bIsDynamic = false;
    local_1098.bIsExternal = false;
    ::FName::AppendString(&local_10a8,&local_1098);
    if (local_1098.End < local_1098.CurPos + 7) {
      TStringBuilderBase<wchar_t>::Extend(&local_1098,7);
    }
    pvVar4 = FGenericPlatformString::Memcpy(local_1098.CurPos,L"_PURGED",0xe);
    local_1098.CurPos = (wchar_t *)((longlong)pvVar4 + 0xe);
    pcVar1 = *(code **)(*(longlong *)param_1 + 0x170);
    pFVar5 = ::FName::FName(&local_10a8,
                            (int)((longlong)local_1098.CurPos - (longlong)local_1098.Base >> 1),
                            local_1098.Base,FNAME_Add);
    FVar2.ComparisonIndex.Value = *(uint *)&param_1->field_0x10;
    FVar2.Number = *(uint *)&param_1->field_0x14;
    local_10b8 = 0;
    local_10a8 = MakeUniqueObjectName
                           ((UObject *)local_10a0,*(UClass **)&param_1->field_0x20,FVar2,
                            (*pFVar5).ComparisonIndex.Value);
    local_10a8 = *(FName *)local_10a8;
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = local_22;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    ::FName::AppendString(&local_10a8,&local_858);
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    (*pcVar1)(param_1,local_858.Base,0,0x34);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1098);
  }
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  return;
}

// PropertyRedirectImpl @ 141fd96b0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
PropertyRedirectImpl
          (TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Property,pFVar4,pFVar3
                     );
  return pFVar5;
}

// RPC_GetLastFailedReason @ 141fd9750

wchar_t * __cdecl RPC_GetLastFailedReason(void)

{
  return GLastRPCFailedReason;
}

// RPC_ResetLastFailedReason @ 141fd9760

void __cdecl RPC_ResetLastFailedReason(void)

{
  GLastRPCFailedReason = (wchar_t *)0x0;
  return;
}

// RPC_ValidateFailed @ 141fd9780

void __cdecl RPC_ValidateFailed(wchar_t *param_1)

{
  GLastRPCFailedReason = param_1;
  return;
}

// RegisterNativeRedirects40 @ 141fdb840

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl RegisterNativeRedirects40(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1)

{
  FCoreRedirect *pFVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  undefined1 local_38 [16];
  FString local_28;
  undefined1 local_18 [16];
  
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm",L"/Script/Engine.AnimCompress");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_BitwiseCompressOnly",
                    L"/Script/Engine.AnimCompress_BitwiseCompressOnly");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_LeastDestructive",
                    L"/Script/Engine.AnimCompress_LeastDestructive");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_PerTrackCompression",
                    L"/Script/Engine.AnimCompress_PerTrackCompression");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_RemoveEverySecondKey",
                    L"/Script/Engine.AnimCompress_RemoveEverySecondKey");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_RemoveLinearKeys",
                    L"/Script/Engine.AnimCompress_RemoveLinearKeys");
  ClassRedirectImpl(param_1,L"AnimationCompressionAlgorithm_RemoveTrivialKeys",
                    L"/Script/Engine.AnimCompress_RemoveTrivialKeys");
  ClassRedirectImpl(param_1,L"DefaultPawnMovement",L"/Script/Engine.FloatingPawnMovement");
  ClassRedirectImpl(param_1,L"DirectionalLightMovable",L"/Script/Engine.DirectionalLight");
  ClassRedirectImpl(param_1,L"DirectionalLightStatic",L"/Script/Engine.DirectionalLight");
  ClassRedirectImpl(param_1,L"DirectionalLightStationary",L"/Script/Engine.DirectionalLight");
  ClassRedirectImpl(param_1,L"DynamicBlockingVolume",L"/Script/Engine.BlockingVolume");
  ClassRedirectImpl(param_1,L"DynamicPhysicsVolume",L"/Script/Engine.PhysicsVolume");
  ClassRedirectImpl(param_1,L"DynamicTriggerVolume",L"/Script/Engine.TriggerVolume");
  ClassRedirectImpl(param_1,L"InterpActor",L"/Script/Engine.StaticMeshActor");
  ClassRedirectImpl(param_1,L"K2Node_CallSuperFunction",
                    L"/Script/BlueprintGraph.K2Node_CallParentFunction");
  ClassRedirectImpl(param_1,L"MaterialSpriteComponent",L"/Script/Engine.MaterialBillboardComponent")
  ;
  ClassRedirectImpl(param_1,L"MovementComp_Character",L"/Script/Engine.CharacterMovementComponent");
  ClassRedirectImpl(param_1,L"MovementComp_Projectile",L"/Script/Engine.ProjectileMovementComponent"
                   );
  ClassRedirectImpl(param_1,L"MovementComp_Rotating",L"/Script/Engine.RotatingMovementComponent");
  ClassRedirectImpl(param_1,L"NavAreaDefault",L"/Script/NavigationSystem.NavArea_Default");
  ClassRedirectImpl(param_1,L"NavAreaDefinition",L"/Script/NavigationSystem.NavArea");
  ClassRedirectImpl(param_1,L"NavAreaNull",L"/Script/NavigationSystem.NavArea_Null");
  ClassRedirectImpl(param_1,L"PhysicsActor",L"/Script/Engine.StaticMeshActor");
  ClassRedirectImpl(param_1,L"PhysicsBSJointActor",L"/Script/Engine.PhysicsConstraintActor");
  ClassRedirectImpl(param_1,L"PhysicsHingeActor",L"/Script/Engine.PhysicsConstraintActor");
  ClassRedirectImpl(param_1,L"PhysicsPrismaticActor",L"/Script/Engine.PhysicsConstraintActor");
  ClassRedirectImpl(param_1,L"PointLightMovable",L"/Script/Engine.PointLight");
  ClassRedirectImpl(param_1,L"PointLightStatic",L"/Script/Engine.PointLight");
  ClassRedirectImpl(param_1,L"PointLightStationary",L"/Script/Engine.PointLight");
  ClassRedirectImpl(param_1,L"RB_BSJointSetup",L"/Script/Engine.PhysicsConstraintTemplate");
  ClassRedirectImpl(param_1,L"RB_BodySetup",L"/Script/Engine.BodySetup");
  ClassRedirectImpl(param_1,L"RB_ConstraintActor",L"/Script/Engine.PhysicsConstraintActor");
  ClassRedirectImpl(param_1,L"RB_ConstraintComponent",L"/Script/Engine.PhysicsConstraintComponent");
  ClassRedirectImpl(param_1,L"RB_ConstraintSetup",L"/Script/Engine.PhysicsConstraintTemplate");
  ClassRedirectImpl(param_1,L"RB_Handle",L"/Script/Engine.PhysicsHandleComponent");
  ClassRedirectImpl(param_1,L"RB_HingeSetup",L"/Script/Engine.PhysicsConstraintTemplate");
  ClassRedirectImpl(param_1,L"RB_PrismaticSetup",L"/Script/Engine.PhysicsConstraintTemplate");
  ClassRedirectImpl(param_1,L"RB_RadialForceComponent",L"/Script/Engine.RadialForceComponent");
  ClassRedirectImpl(param_1,L"RB_SkelJointSetup",L"/Script/Engine.PhysicsConstraintTemplate");
  ClassRedirectImpl(param_1,L"RB_Thruster",L"/Script/Engine.PhysicsThruster");
  ClassRedirectImpl(param_1,L"RB_ThrusterComponent",L"/Script/Engine.PhysicsThrusterComponent");
  ClassRedirectImpl(param_1,L"SensingComponent",L"/Script/AIModule.PawnSensingComponent");
  ClassRedirectImpl(param_1,L"SingleAnimSkeletalActor",L"/Script/Engine.SkeletalMeshActor");
  ClassRedirectImpl(param_1,L"SingleAnimSkeletalComponent",L"/Script/Engine.SkeletalMeshComponent");
  ClassRedirectImpl(param_1,L"SkeletalMeshReplicatedComponent",
                    L"/Script/Engine.SkeletalMeshComponent");
  ClassRedirectImpl(param_1,L"SkeletalPhysicsActor",L"/Script/Engine.SkeletalMeshActor");
  ClassRedirectImpl(param_1,L"SoundMode",L"/Script/Engine.SoundMix");
  ClassRedirectImpl(param_1,L"SpotLightMovable",L"/Script/Engine.SpotLight");
  ClassRedirectImpl(param_1,L"SpotLightStatic",L"/Script/Engine.SpotLight");
  ClassRedirectImpl(param_1,L"SpotLightStationary",L"/Script/Engine.SpotLight");
  ClassRedirectImpl(param_1,L"SpriteComponent",L"/Script/Engine.BillboardComponent");
  ClassRedirectImpl(param_1,L"StaticMeshReplicatedComponent",L"/Script/Engine.StaticMeshComponent");
  ClassRedirectImpl(param_1,L"VimBlueprint",L"/Script/Engine.AnimBlueprint");
  ClassRedirectImpl(param_1,L"VimGeneratedClass",L"/Script/Engine.AnimBlueprintGeneratedClass");
  ClassRedirectImpl(param_1,L"VimInstance",L"/Script/Engine.AnimInstance");
  ClassRedirectImpl(param_1,L"WorldInfo",L"/Script/Engine.WorldSettings");
  ClassRedirectInstancesImpl(param_1,L"NavAreaMeta",L"/Script/NavigationSystem.NavArea_Default");
  StructRedirectImpl(param_1,L"VimDebugData",L"/Script/Engine.AnimBlueprintDebugData");
  FunctionRedirectImpl(param_1,L"Actor.GetController",L"Pawn.GetController");
  FunctionRedirectImpl(param_1,L"Actor.GetTouchingActors",L"Actor.GetOverlappingActors");
  PropertyRedirectImpl(param_1,L"Actor.GetOverlappingActors.OutTouchingActors",L"OverlappingActors")
  ;
  FunctionRedirectImpl(param_1,L"Actor.GetTouchingComponents",L"Actor.GetOverlappingComponents");
  PropertyRedirectImpl
            (param_1,L"Actor.GetOverlappingComponents.TouchingComponents",L"OverlappingComponents");
  FunctionRedirectImpl(param_1,L"Actor.HasTag",L"Actor.ActorHasTag");
  FunctionRedirectImpl(param_1,L"Actor.ReceiveActorTouch",L"Actor.ReceiveActorBeginOverlap");
  PropertyRedirectImpl(param_1,L"Actor.ReceiveActorBeginOverlap.Other",L"OtherActor");
  FunctionRedirectImpl(param_1,L"Actor.ReceiveActorUntouch",L"Actor.ReceiveActorEndOverlap");
  PropertyRedirectImpl(param_1,L"Actor.ReceiveActorEndOverlap.Other",L"OtherActor");
  PropertyRedirectImpl(param_1,L"Actor.ReceiveHit.NormalForce",L"NormalImpulse");
  FunctionRedirectImpl(param_1,L"Actor.SetActorHidden",L"Actor.SetActorHiddenInGame");
  PropertyRedirectImpl(param_1,L"Actor.LifeSpan",L"Actor.InitialLifeSpan");
  PropertyRedirectImpl(param_1,L"Actor.OnActorTouch",L"OnActorBeginOverlap");
  PropertyRedirectImpl(param_1,L"Actor.OnActorUnTouch",L"OnActorEndOverlap");
  FunctionRedirectImpl(param_1,L"AnimInstance.GetSequencePlayerLength",L"GetAnimAssetPlayerLength");
  FunctionRedirectImpl
            (param_1,L"AnimInstance.GetSequencePlayerTimeFraction",L"GetAnimAssetPlayerTimeFraction"
            );
  FunctionRedirectImpl
            (param_1,L"AnimInstance.GetSequencePlayerTimeFromEnd",L"GetAnimAssetPlayerTimeFromEnd");
  FunctionRedirectImpl
            (param_1,L"AnimInstance.GetSequencePlayerTimeFromEndFraction",
             L"GetAnimAssetPlayerTimeFromEndFraction");
  FunctionRedirectImpl
            (param_1,L"AnimInstance.KismetInitializeAnimation",
             L"AnimInstance.BlueprintInitializeAnimation");
  FunctionRedirectImpl
            (param_1,L"AnimInstance.KismetUpdateAnimation",L"AnimInstance.BlueprintUpdateAnimation")
  ;
  PropertyRedirectImpl(param_1,L"AnimInstance.GetAnimAssetPlayerLength.Sequence",L"AnimAsset");
  PropertyRedirectImpl(param_1,L"AnimInstance.GetAnimAssetPlayerTimeFraction.Sequence",L"AnimAsset")
  ;
  PropertyRedirectImpl(param_1,L"AnimInstance.GetAnimAssetPlayerTimeFromEnd.Sequence",L"AnimAsset");
  PropertyRedirectImpl
            (param_1,L"AnimInstance.GetAnimAssetPlayerTimeFromEndFraction.Sequence",L"AnimAsset");
  PropertyRedirectImpl(param_1,L"AnimInstance.VimVertexAnims",L"AnimInstance.VertexAnims");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.ClearSoundMode",L"GameplayStatics.ClearSoundMixModifiers");
  FunctionRedirectImpl(param_1,L"GameplayStatics.GetGameInfo",L"GetGameMode");
  FunctionRedirectImpl(param_1,L"GameplayStatics.GetGameReplicationInfo",L"GetGameState");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.GetPlayerCamera",L"GameplayStatics.GetPlayerCameraManager");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.K2_SetSoundMode",L"GameplayStatics.SetBaseSoundMix");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PopSoundMixModifier.InSoundMode",L"InSoundMixModifier");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PopSoundMode",L"GameplayStatics.PopSoundMixModifier");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PushSoundMixModifier.InSoundMode",L"InSoundMixModifier");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PushSoundMode",L"GameplayStatics.PushSoundMixModifier");
  FunctionRedirectImpl(param_1,L"GameplayStatics.SetBaseSoundMix.InSoundMode",L"InSoundMix");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.SetTimeDilation",L"GameplayStatics.SetGlobalTimeDilation");
  FunctionRedirectImpl
            (param_1,L"KismetMaterialLibrary.CreateMaterialInstanceDynamic",
             L"KismetMaterialLibrary.CreateDynamicMaterialInstance");
  FunctionRedirectImpl
            (param_1,L"KismetMaterialParameterCollectionLibrary.GetScalarParameterValue",
             L"KismetMaterialLibrary.GetScalarParameterValue");
  FunctionRedirectImpl
            (param_1,L"KismetMaterialParameterCollectionLibrary.GetVectorParameterValue",
             L"KismetMaterialLibrary.GetVectorParameterValue");
  FunctionRedirectImpl
            (param_1,L"KismetMaterialParameterCollectionLibrary.SetScalarParameterValue",
             L"KismetMaterialLibrary.SetScalarParameterValue");
  FunctionRedirectImpl
            (param_1,L"KismetMaterialParameterCollectionLibrary.SetVectorParameterValue",
             L"KismetMaterialLibrary.SetVectorParameterValue");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.BreakTransform.Translation",L"Location");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.Conv_VectorToTransform.InTranslation",L"InLocation");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.FRand",L"RandomFloat");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.FRandFromStream",L"RandomFloatFromStream");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.FRandRange",L"RandomFloatInRange");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.FRandRangeFromStream",L"RandomFloatInRangeFromStream");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.InverseTransformPosition",
             L"KismetMathLibrary.InverseTransformLocation");
  PropertyRedirectImpl(param_1,L"KismetMathLibrary.InverseTransformLocation.Position",L"Location");
  PropertyRedirectImpl(param_1,L"KismetMathLibrary.MakeTransform.Translation",L"Location");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.Rand",L"RandomInteger");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RandBool",L"RandomBool");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RandBoolFromStream",L"RandomBoolFromStream");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RandFromStream",L"RandomIntegerFromStream");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RandRange",L"RandomIntegerInRange");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.RandRangeFromStream",L"RandomIntegerInRangeFromStream");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RotRand",L"RandomRotator");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.RotRandFromStream",L"RandomRotatorFromStream");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.TransformPosition",L"KismetMathLibrary.TransformLocation");
  PropertyRedirectImpl(param_1,L"KismetMathLibrary.TransformLocation.Position",L"Location");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.VRand",L"RandomUnitVector");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.VRandFromStream",L"RandomUnitVectorFromStream");
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.CapsuleTraceMultiForObjects.ObjectsToTrace",
             L"ObjectTypes");
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.CapsuleTraceSingleForObjects.ObjectsToTrace",
             L"ObjectTypes");
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.LineTraceMultiForObjects.ObjectsToTrace",L"ObjectTypes");
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.LineTraceSingleForObjects.ObjectsToTrace",L"ObjectTypes")
  ;
  PropertyRedirectImpl(param_1,L"KismetSystemLibrary.PrintKismetWarning",L"PrintWarning");
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.SphereTraceMultiForObjects.ObjectsToTrace",L"ObjectTypes"
            );
  PropertyRedirectImpl
            (param_1,L"KismetSystemLibrary.SphereTraceSingleForObjects.ObjectsToTrace",
             L"ObjectTypes");
  FunctionRedirectImpl(param_1,L"AIController.ClearFocus",L"AIController.K2_ClearFocus");
  FunctionRedirectImpl(param_1,L"AIController.SetFocalPoint",L"AIController.K2_SetFocalPoint");
  FunctionRedirectImpl(param_1,L"AIController.SetFocus",L"AIController.K2_SetFocus");
  FunctionRedirectImpl(param_1,L"ArrowComponent.SetArrowColor_New",L"ArrowComponent.SetArrowColor");
  FunctionRedirectImpl(param_1,L"Character.Launch",L"Character.LaunchCharacter");
  FunctionRedirectImpl(param_1,L"Controller.K2_GetActorRotation",L"Controller.GetControlRotation");
  FunctionRedirectImpl
            (param_1,L"DecalActor.CreateMIDForDecal",L"DecalActor.CreateDynamicMaterialInstance");
  FunctionRedirectImpl
            (param_1,L"DecalComponent.CreateMIDForDecal",
             L"DecalComponent.CreateDynamicMaterialInstance");
  PropertyRedirectImpl(param_1,L"HUD.AddHitBox.InPos",L"Position");
  PropertyRedirectImpl(param_1,L"HUD.AddHitBox.InPriority",L"Priority");
  PropertyRedirectImpl(param_1,L"HUD.AddHitBox.InSize",L"Size");
  PropertyRedirectImpl(param_1,L"HUD.AddHitBox.bInConsumesInput",L"bConsumesInput");
  FunctionRedirectImpl(param_1,L"LevelScriptActor.BeginGame",L"Actor.ReceiveBeginPlay");
  FunctionRedirectImpl
            (param_1,L"LevelScriptActor.LoadStreamLevel",L"GameplayStatics.LoadStreamLevel");
  FunctionRedirectImpl(param_1,L"LevelScriptActor.OpenLevel",L"GameplayStatics.OpenLevel");
  FunctionRedirectImpl
            (param_1,L"LevelScriptActor.UnloadStreamLevel",L"GameplayStatics.UnloadStreamLevel");
  FunctionRedirectImpl
            (param_1,L"MovementComponent.ConstrainPositionToPlane",
             L"MovementComponent.ConstrainLocationToPlane");
  PropertyRedirectImpl(param_1,L"MovementComponent.ConstrainLocationToPlane.Position",L"Location");
  FunctionRedirectImpl(param_1,L"PlayerCameraManager.KismetUpdateCamera",L"BlueprintUpdateCamera");
  FunctionRedirectImpl(param_1,L"PlayerController.AddLookUpInput",L"PlayerController.AddPitchInput")
  ;
  FunctionRedirectImpl(param_1,L"PlayerController.AddTurnInput",L"PlayerController.AddYawInput");
  PropertyRedirectImpl
            (param_1,L"PlayerController.DeprojectMousePositionToWorld.Direction",L"WorldDirection");
  PropertyRedirectImpl
            (param_1,L"PlayerController.DeprojectMousePositionToWorld.WorldPosition",
             L"WorldLocation");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.AddForceAtPosition",
             L"PrimitiveComponent.AddForceAtLocation");
  PropertyRedirectImpl(param_1,L"PrimitiveComponent.AddForceAtLocation.Position",L"Location");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.AddImpulseAtPosition",
             L"PrimitiveComponent.AddImpulseAtLocation");
  PropertyRedirectImpl(param_1,L"PrimitiveComponent.AddImpulseAtLocation.Position",L"Location");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.CreateAndSetMaterialInstanceDynamic",
             L"PrimitiveComponent.CreateDynamicMaterialInstance");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial",
             L"PrimitiveComponent.CreateDynamicMaterialInstance");
  PropertyRedirectImpl
            (param_1,L"PrimitiveComponent.CreateDynamicMaterialInstance.Parent",L"SourceMaterial");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.GetRBAngularVelocity",L"GetPhysicsAngularVelocity");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.GetRBLinearVelocity",L"GetPhysicsLinearVelocity");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.GetTouchingActors",
             L"PrimitiveComponent.GetOverlappingActors");
  PropertyRedirectImpl
            (param_1,L"PrimitiveComponent.GetOverlappingActors.TouchingActors",L"OverlappingActors")
  ;
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.GetTouchingComponents",
             L"PrimitiveComponent.GetOverlappingComponents");
  PropertyRedirectImpl
            (param_1,L"PrimitiveComponent.GetOverlappingComponents.TouchingComponents",
             L"OverlappingComponents");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.KismetTraceComponent",
             L"PrimitiveComponent.K2_LineTraceComponent");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.SetAllRBLinearVelocity",L"SetAllPhysicsLinearVelocity");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.SetMovementChannel",
             L"PrimitiveComponent.SetCollisionObjectType");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.SetRBAngularVelocity",L"SetPhysicsAngularVelocity");
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.SetRBLinearVelocity",L"SetPhysicsLinearVelocity");
  FunctionRedirectImpl
            (param_1,L"ProjectileMovementComponent.StopMovement",
             L"ProjectileMovementComponent.StopSimulating");
  FunctionRedirectImpl(param_1,L"SceneComponent.GetComponentToWorld",L"K2_GetComponentToWorld");
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.GetPlayRate",L"SkeletalMeshComponent.GetPlayRate"
            );
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.GetPosition",L"SkeletalMeshComponent.GetPosition"
            );
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.IsPlaying",L"SkeletalMeshComponent.IsPlaying");
  FunctionRedirectImpl(param_1,L"SingleAnimSkeletalComponent.Play",L"SkeletalMeshComponent.Play");
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.SetAnim",L"SkeletalMeshComponent.SetAnimation");
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.SetPlayRate",L"SkeletalMeshComponent.SetPlayRate"
            );
  FunctionRedirectImpl
            (param_1,L"SingleAnimSkeletalComponent.SetPosition",L"SkeletalMeshComponent.SetPosition"
            );
  FunctionRedirectImpl(param_1,L"SingleAnimSkeletalComponent.Stop",L"SkeletalMeshComponent.Stop");
  FunctionRedirectImpl
            (param_1,L"SkinnedMeshComponent.MatchRefBone",L"SkinnedMeshComponent.GetBoneIndex");
  PropertyRedirectImpl(param_1,L"AnimNotifyEvent.Time",L"AnimNotifyEvent.DisplayTime");
  PropertyRedirectImpl(param_1,L"AnimSequence.BasePose",L"AnimSequence.RetargetSource");
  PropertyRedirectImpl
            (param_1,L"AudioComponent.PitchMultiplierMax",L"AudioComponent.PitchModulationMax");
  PropertyRedirectImpl
            (param_1,L"AudioComponent.PitchMultiplierMin",L"AudioComponent.PitchModulationMin");
  PropertyRedirectImpl
            (param_1,L"AudioComponent.VolumeMultiplierMax",L"AudioComponent.VolumeModulationMax");
  PropertyRedirectImpl
            (param_1,L"AudioComponent.VolumeMultiplierMin",L"AudioComponent.VolumeModulationMin");
  PropertyRedirectImpl(param_1,L"BodyInstance.MovementChannel",L"BodyInstance.ObjectType");
  PropertyRedirectImpl(param_1,L"BranchingPoint.Time",L"BranchingPoint.DisplayTime");
  PropertyRedirectImpl
            (param_1,L"CapsuleComponent.CapsuleHeight",L"CapsuleComponent.CapsuleHalfHeight");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.AccelRate",
             L"CharacterMovementComponent.MaxAcceleration");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.BrakingDeceleration",
             L"CharacterMovementComponent.BrakingDecelerationWalking");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.CrouchHeight",
             L"CharacterMovementComponent.CrouchedHalfHeight");
  PropertyRedirectImpl
            (param_1,L"CollisionResponseContainer.Dynamic",
             L"CollisionResponseContainer.WorldDynamic");
  PropertyRedirectImpl
            (param_1,L"CollisionResponseContainer.RigidBody",
             L"CollisionResponseContainer.PhysicsBody");
  PropertyRedirectImpl
            (param_1,L"CollisionResponseContainer.Static",L"CollisionResponseContainer.WorldStatic")
  ;
  PropertyRedirectImpl(param_1,L"Controller.PlayerReplicationInfo",L"Controller.PlayerState");
  PropertyRedirectImpl(param_1,L"DefaultPawn.DefaultPawnMovement",L"DefaultPawn.MovementComponent");
  PropertyRedirectImpl
            (param_1,L"DirectionalLightComponent.MovableWholeSceneDynamicShadowRadius",
             L"DirectionalLightComponent.DynamicShadowDistanceMovableLight");
  PropertyRedirectImpl
            (param_1,L"DirectionalLightComponent.StationaryWholeSceneDynamicShadowRadius",
             L"DirectionalLightComponent.DynamicShadowDistanceStationaryLight");
  PropertyRedirectImpl
            (param_1,L"FloatingPawnMovement.AccelRate",L"FloatingPawnMovement.Acceleration");
  PropertyRedirectImpl
            (param_1,L"FloatingPawnMovement.DecelRate",L"FloatingPawnMovement.Deceleration");
  PropertyRedirectImpl(param_1,L"GameMode.GameReplicationInfoClass",L"GameMode.GameStateClass");
  PropertyRedirectImpl(param_1,L"GameMode.PlayerReplicationInfoClass",L"GameMode.PlayerStateClass");
  PropertyRedirectImpl(param_1,L"GameState.GameClass",L"GameState.GameModeClass");
  PropertyRedirectImpl
            (param_1,L"K2Node_TransitionRuleGetter.AssociatedSequencePlayerNode",
             L"K2Node_TransitionRuleGetter.AssociatedAnimAssetPlayerNode");
  PropertyRedirectImpl
            (param_1,L"LightComponent.InverseSquaredFalloff",
             L"PointLightComponent.bUseInverseSquaredFalloff");
  PropertyRedirectImpl(param_1,L"LightComponentBase.Brightness",L"LightComponentBase.Intensity");
  PropertyRedirectImpl(param_1,L"Material.RefractionBias",L"Material.RefractionDepthBias");
  PropertyRedirectImpl
            (param_1,L"MaterialEditorInstanceConstant.RefractionBias",
             L"MaterialEditorInstanceConstant.RefractionDepthBias");
  PropertyRedirectImpl(param_1,L"NavLinkProxy.NavLinks",L"NavLinkProxy.PointLinks");
  PropertyRedirectImpl(param_1,L"NavLinkProxy.NavSegmentLinks",L"NavLinkProxy.SegmentLinks");
  PropertyRedirectImpl(param_1,L"Pawn.ControllerClass",L"Pawn.AIControllerClass");
  PropertyRedirectImpl(param_1,L"Pawn.PlayerReplicationInfo",L"Pawn.PlayerState");
  PropertyRedirectImpl
            (param_1,L"PawnSensingComponent.SightCounterInterval",
             L"PawnSensingComponent.SensingInterval");
  PropertyRedirectImpl
            (param_1,L"PawnSensingComponent.bWantsSeePlayerNotify",L"PawnSensingComponent.bSeePawns"
            );
  PropertyRedirectImpl(param_1,L"PlayerController.LookRightScale",L"PlayerController.InputYawScale")
  ;
  PropertyRedirectImpl(param_1,L"PlayerController.LookUpScale",L"PlayerController.InputPitchScale");
  PropertyRedirectImpl
            (param_1,L"PlayerController.InputYawScale",L"PlayerController.InputYawScale_DEPRECATED")
  ;
  PropertyRedirectImpl
            (param_1,L"PlayerController.InputPitchScale",
             L"PlayerController.InputPitchScale_DEPRECATED");
  PropertyRedirectImpl
            (param_1,L"PlayerController.InputRollScale",
             L"PlayerController.InputRollScale_DEPRECATED");
  PropertyRedirectImpl
            (param_1,L"PlayerController.PlayerCamera",L"PlayerController.PlayerCameraManager");
  PropertyRedirectImpl
            (param_1,L"PlayerController.PlayerCameraClass",
             L"PlayerController.PlayerCameraManagerClass");
  PropertyRedirectImpl
            (param_1,L"PointLightComponent.Radius",L"PointLightComponent.AttenuationRadius");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.ExposureOffset",L"PostProcessSettings.AutoExposureBias");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptationHighPercent",
             L"PostProcessSettings.AutoExposureHighPercent");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptationLowPercent",
             L"PostProcessSettings.AutoExposureLowPercent");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptationMaxBrightness",
             L"PostProcessSettings.AutoExposureMaxBrightness");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptationMinBrightness",
             L"PostProcessSettings.AutoExposureMinBrightness");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptionSpeedDown",
             L"PostProcessSettings.AutoExposureSpeedDown");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.EyeAdaptionSpeedUp",
             L"PostProcessSettings.AutoExposureSpeedUp");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_ExposureOffset",
             L"PostProcessSettings.bOverride_AutoExposureBias");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptationHighPercent",
             L"PostProcessSettings.bOverride_AutoExposureHighPercent");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptationLowPercent",
             L"PostProcessSettings.bOverride_AutoExposureLowPercent");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptationMaxBrightness",
             L"PostProcessSettings.bOverride_AutoExposureMaxBrightness");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptationMinBrightness",
             L"PostProcessSettings.bOverride_AutoExposureMinBrightness");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptionSpeedDown",
             L"PostProcessSettings.bOverride_AutoExposureSpeedDown");
  PropertyRedirectImpl
            (param_1,L"PostProcessSettings.bOverride_EyeAdaptionSpeedUp",
             L"PostProcessSettings.bOverride_AutoExposureSpeedUp");
  PropertyRedirectImpl(param_1,L"SceneComponent.ModifyFrequency",L"SceneComponent.Mobility");
  PropertyRedirectImpl
            (param_1,L"SceneComponent.RelativeTranslation",L"SceneComponent.RelativeLocation");
  PropertyRedirectImpl
            (param_1,L"SceneComponent.bAbsoluteTranslation",L"SceneComponent.bAbsoluteLocation");
  PropertyRedirectImpl
            (param_1,L"SceneComponent.bComputeBoundsOnceDuringCook",
             L"SceneComponent.bComputeBoundsOnceForGame");
  PropertyRedirectImpl
            (param_1,L"SkeletalMeshComponent.AnimationBlueprint",
             L"SkeletalMeshComponent.AnimBlueprintGeneratedClass");
  PropertyRedirectImpl(param_1,L"SlateBrush.TextureName",L"SlateBrush.ResourceName");
  PropertyRedirectImpl(param_1,L"SlateBrush.TextureObject",L"SlateBrush.ResourceObject");
  PropertyRedirectImpl(param_1,L"WorldSettings.DefaultGameType",L"WorldSettings.DefaultGameMode");
  pFVar1 = ClassRedirectImpl(param_1,L"PointLightComponent",L"/Script/Engine.PointLightComponent");
  FString::FString((FString *)local_18,L"LightComponent0");
  FString::FString(&local_28,L"PointLightComponent0");
  local_38._0_8_ = &local_28;
  local_38._8_8_ = local_18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  pFVar1 = ClassRedirectImpl(param_1,L"DirectionalLightComponent",
                             L"/Script/Engine.DirectionalLightComponent");
  FString::FString((FString *)local_38,L"LightComponent0");
  FString::FString(&local_28,L"DirectionalLightComponent0");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = ClassRedirectImpl(param_1,L"SpotLightComponent",L"/Script/Engine.SpotLightComponent");
  FString::FString((FString *)local_38,L"LightComponent0");
  FString::FString(&local_28,L"SpotLightComponent0");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"ETransitionGetterType",L"/Script/AnimGraph.ETransitionGetter")
  ;
  FString::FString((FString *)local_38,L"ETransitionGetter::ArbitraryState_GetBlendWeight");
  FString::FString(&local_28,L"TGT_ArbitraryState_GetBlendWeight");
  local_18._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::CurrentState_ElapsedTime");
  FString::FString(&local_28,L"TGT_CurrentState_ElapsedTime");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::CurrentState_GetBlendWeight");
  FString::FString(&local_28,L"TGT_CurrentState_GetBlendWeight");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::CurrentTransitionDuration");
  FString::FString(&local_28,L"TGT_CurrentTransitionDuration");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::AnimationAsset_GetCurrentTime");
  FString::FString(&local_28,L"TGT_SequencePlayer_GetCurrentTime");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::AnimationAsset_GetCurrentTimeFraction");
  FString::FString(&local_28,L"TGT_SequencePlayer_GetCurrentTimeFraction");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::AnimationAsset_GetLength");
  FString::FString(&local_28,L"TGT_SequencePlayer_GetLength");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::AnimationAsset_GetTimeFromEnd");
  FString::FString(&local_28,L"TGT_SequencePlayer_GetTimeFromEnd");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ETransitionGetter::AnimationAsset_GetTimeFromEndFraction");
  FString::FString(&local_28,L"TGT_SequencePlayer_GetTimeFromEndFraction");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EModifyFrequency",L"/Script/Engine.EComponentMobility");
  FString::FString((FString *)local_38,L"EComponentMobility::Movable");
  FString::FString(&local_28,L"MF_Dynamic");
  local_18._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EComponentMobility::Stationary");
  FString::FString(&local_28,L"MF_OccasionallyModified");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EComponentMobility::Static");
  FString::FString(&local_28,L"MF_Static");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EAttachLocationType",L"/Script/Engine.EAttachLocation");
  FString::FString((FString *)local_38,L"EAttachLocation::KeepWorldPosition");
  FString::FString(&local_28,L"EAttachLocationType_AbsoluteWorld");
  local_18._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAttachLocation::KeepRelativeOffset");
  FString::FString(&local_28,L"EAttachLocationType_RelativeOffset");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAttachLocation::SnapToTarget");
  FString::FString(&local_28,L"EAttachLocationType_SnapTo");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EAxis",L"/Script/CoreUObject.EAxis");
  FString::FString((FString *)local_38,L"EAxis::None");
  FString::FString(&local_28,L"AXIS_BLANK");
  local_18._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAxis::None");
  FString::FString(&local_28,L"AXIS_NONE");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAxis::X");
  FString::FString(&local_28,L"AXIS_X");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAxis::Y");
  FString::FString(&local_28,L"AXIS_Y");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EAxis::Z");
  FString::FString(&local_28,L"AXIS_Z");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EMaxConcurrentResolutionRule",
                            L"/Script/Engine.EMaxConcurrentResolutionRule");
  FString::FString((FString *)local_38,L"EMaxConcurrentResolutionRule::StopFarthestThenPreventNew");
  FString::FString(&local_28,L"EMaxConcurrentResolutionRule::StopFarthest");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EParticleEventType",L"/Script/Engine.EParticleEventType");
  FString::FString((FString *)local_38,L"EPET_Blueprint");
  FString::FString(&local_28,L"EPET_Kismet");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"ETranslucencyLightingMode",
                            L"/Script/Engine.ETranslucencyLightingMode");
  FString::FString((FString *)local_38,L"TLM_VolumetricDirectional");
  FString::FString(&local_28,L"TLM_PerPixel");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"TLM_VolumetricNonDirectional");
  FString::FString(&local_28,L"TLM_PerPixelNonDirectional");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  return;
}

// RegisterNativeRedirects46 @ 141fdd8b0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl RegisterNativeRedirects46(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1)

{
  FCoreRedirect *pFVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *this;
  undefined1 local_38 [16];
  FString local_28;
  undefined1 local_18 [16];
  
  ClassRedirectImpl(param_1,L"K2Node_CastToInterface",L"/Script/BlueprintGraph.K2Node_DynamicCast");
  ClassRedirectImpl(param_1,L"K2Node_MathExpression",L"/Script/BlueprintGraph.K2Node_MathExpression"
                   );
  ClassRedirectImpl(param_1,L"EmitterSpawnable",L"/Script/Engine.Emitter");
  ClassRedirectImpl(param_1,L"SlateWidgetStyleAsset",L"/Script/SlateCore.SlateWidgetStyleAsset");
  ClassRedirectImpl(param_1,L"SlateWidgetStyleContainerBase",
                    L"/Script/SlateCore.SlateWidgetStyleContainerBase");
  ClassRedirectImpl(param_1,L"SmartNavLinkComponent",
                    L"/Script/NavigationSystem.NavLinkCustomComponent");
  ClassRedirectImpl(param_1,L"WidgetBlueprint",L"/Script/UMGEditor.WidgetBlueprint");
  PropertyRedirectImpl(param_1,L"AnimNotify.Received_Notify.AnimSeq",L"Animation");
  PropertyRedirectImpl(param_1,L"AnimNotifyState.Received_NotifyBegin.AnimSeq",L"Animation");
  PropertyRedirectImpl(param_1,L"AnimNotifyState.Received_NotifyEnd.AnimSeq",L"Animation");
  PropertyRedirectImpl(param_1,L"AnimNotifyState.Received_NotifyTick.AnimSeq",L"Animation");
  FunctionRedirectImpl(param_1,L"Character.IsJumping",L"Character.IsJumpProvidingForce");
  PropertyRedirectImpl(param_1,L"CharacterMovementComponent.AddImpulse.InMomentum",L"Impulse");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.AddImpulse.bMassIndependent",L"bVelocityChange");
  FunctionRedirectImpl
            (param_1,L"CharacterMovementComponent.AddMomentum",
             L"CharacterMovementComponent.AddImpulse");
  FunctionRedirectImpl(param_1,L"Controller.GetControlledPawn",L"Controller.K2_GetPawn");
  FunctionRedirectImpl(param_1,L"DefaultPawn.LookUp",L"Pawn.AddControllerPitchInput");
  FunctionRedirectImpl(param_1,L"DefaultPawn.Turn",L"Pawn.AddControllerYawInput");
  FunctionRedirectImpl
            (param_1,L"KismetSystemLibrary.EXPERIMENTAL_ShowGameCenterLeaderboard",
             L"KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen");
  FunctionRedirectImpl
            (param_1,L"MovementComponent.GetMaxSpeedModifier",
             L"MovementComponent.K2_GetMaxSpeedModifier");
  FunctionRedirectImpl
            (param_1,L"MovementComponent.GetModifiedMaxSpeed",
             L"MovementComponent.K2_GetModifiedMaxSpeed");
  FunctionRedirectImpl(param_1,L"Pawn.AddLookUpInput",L"Pawn.AddControllerPitchInput");
  FunctionRedirectImpl(param_1,L"Pawn.AddPitchInput",L"Pawn.AddControllerPitchInput");
  FunctionRedirectImpl(param_1,L"Pawn.AddRollInput",L"Pawn.AddControllerRollInput");
  FunctionRedirectImpl(param_1,L"Pawn.AddTurnInput",L"Pawn.AddControllerYawInput");
  FunctionRedirectImpl(param_1,L"Pawn.AddYawInput",L"Pawn.AddControllerYawInput");
  FunctionRedirectImpl
            (param_1,L"PawnMovementComponent.StopActiveMovement",
             L"NavMovementComponent.StopActiveMovement");
  FunctionRedirectImpl
            (param_1,L"PointLightComponent.SetRadius",L"PointLightComponent.SetAttenuationRadius");
  FunctionRedirectImpl
            (param_1,L"SkeletalMeshComponent.SetAnimBlueprint",
             L"SkeletalMeshComponent.SetAnimInstanceClass");
  FunctionRedirectImpl
            (param_1,L"SkeletalMeshComponent.SetAnimClass",
             L"SkeletalMeshComponent.SetAnimInstanceClass");
  PropertyRedirectImpl
            (param_1,L"SkeletalMeshComponent.SetAnimInstanceClass.NewBlueprint",L"NewClass");
  PropertyRedirectImpl
            (param_1,L"StringClassReference.ClassName",L"StringClassReference.AssetLongPathname");
  PropertyRedirectImpl(param_1,L"Material.LightingModel",L"Material.ShadingModel");
  PropertyRedirectImpl
            (param_1,L"MaterialInstanceBasePropertyOverrides.LightingModel",
             L"MaterialInstanceBasePropertyOverrides.ShadingModel");
  PropertyRedirectImpl
            (param_1,L"MaterialInstanceBasePropertyOverrides.bOverride_LightingModel",
             L"MaterialInstanceBasePropertyOverrides.bOverride_ShadingModel");
  PropertyRedirectImpl
            (param_1,L"PassiveSoundMixModifier.VolumeThreshold",
             L"PassiveSoundMixModifier.MinVolumeThreshold");
  PropertyRedirectImpl
            (param_1,L"PrimitiveComponent.CanBeCharacterBase",
             L"PrimitiveComponent.CanCharacterStepUpOn");
  PropertyRedirectImpl
            (param_1,L"SkeletalMeshLODInfo.DisplayFactor",L"SkeletalMeshLODInfo.ScreenSize");
  PropertyRedirectImpl(param_1,L"SplineMeshComponent.SplineXDir",L"SplineMeshComponent.SplineUpDir")
  ;
  PropertyRedirectImpl(param_1,L"TextureFactory.LightingModel",L"TextureFactory.ShadingModel");
  pFVar1 = EnumRedirectImpl(param_1,L"EKinematicBonesUpdateToPhysics",
                            L"/Script/Engine.EKinematicBonesUpdateToPhysics");
  FString::FString((FString *)local_18,L"EKinematicBonesUpdateToPhysics::SkipAllBones");
  FString::FString(&local_28,L"EKinematicBonesUpdateToPhysics::SkipFixedAndSimulatingBones");
  local_38._0_8_ = &local_28;
  local_38._8_8_ = local_18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EMaterialLightingModel",
                            L"/Script/Engine.EMaterialShadingModel");
  FString::FString((FString *)local_38,L"MSM_DefaultLit");
  FString::FString(&local_28,L"MLM_DefaultLit");
  local_18._0_8_ = &local_28;
  this = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"MSM_PreintegratedSkin");
  FString::FString(&local_28,L"MLM_PreintegratedSkin");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"MSM_Subsurface");
  FString::FString(&local_28,L"MLM_Subsurface");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"MSM_Unlit");
  FString::FString(&local_28,L"MLM_Unlit");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"ESmartNavLinkDir",L"/Script/Engine.ENavLinkDirection");
  FString::FString((FString *)local_38,L"ENavLinkDirection::BothWays");
  FString::FString(&local_28,L"ESmartNavLinkDir::BothWays");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ENavLinkDirection::LeftToRight");
  FString::FString(&local_28,L"ESmartNavLinkDir::OneWay");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  ClassRedirectImpl(param_1,L"AIController",L"/Script/AIModule.AIController");
  ClassRedirectImpl(param_1,L"AIResourceInterface",L"/Script/AIModule.AIResourceInterface");
  ClassRedirectImpl(param_1,L"AISystem",L"/Script/AIModule.AISystem");
  ClassRedirectImpl(param_1,L"BTAuxiliaryNode",L"/Script/AIModule.BTAuxiliaryNode");
  ClassRedirectImpl(param_1,L"BTCompositeNode",L"/Script/AIModule.BTCompositeNode");
  ClassRedirectImpl(param_1,L"BTComposite_Selector",L"/Script/AIModule.BTComposite_Selector");
  ClassRedirectImpl(param_1,L"BTComposite_Sequence",L"/Script/AIModule.BTComposite_Sequence");
  ClassRedirectImpl(param_1,L"BTComposite_SimpleParallel",
                    L"/Script/AIModule.BTComposite_SimpleParallel");
  ClassRedirectImpl(param_1,L"BTDecorator",L"/Script/AIModule.BTDecorator");
  ClassRedirectImpl(param_1,L"BTDecorator_Blackboard",L"/Script/AIModule.BTDecorator_Blackboard");
  ClassRedirectImpl(param_1,L"BTDecorator_BlackboardBase",
                    L"/Script/AIModule.BTDecorator_BlackboardBase");
  ClassRedirectImpl(param_1,L"BTDecorator_BlueprintBase",
                    L"/Script/AIModule.BTDecorator_BlueprintBase");
  ClassRedirectImpl(param_1,L"BTDecorator_CompareBBEntries",
                    L"/Script/AIModule.BTDecorator_CompareBBEntries");
  ClassRedirectImpl(param_1,L"BTDecorator_ConeCheck",L"/Script/AIModule.BTDecorator_ConeCheck");
  ClassRedirectImpl(param_1,L"BTDecorator_Cooldown",L"/Script/AIModule.BTDecorator_Cooldown");
  ClassRedirectImpl(param_1,L"BTDecorator_DoesPathExist",
                    L"/Script/AIModule.BTDecorator_DoesPathExist");
  ClassRedirectImpl(param_1,L"BTDecorator_ForceSuccess",L"/Script/AIModule.BTDecorator_ForceSuccess"
                   );
  ClassRedirectImpl(param_1,L"BTDecorator_KeepInCone",L"/Script/AIModule.BTDecorator_KeepInCone");
  ClassRedirectImpl(param_1,L"BTDecorator_Loop",L"/Script/AIModule.BTDecorator_Loop");
  ClassRedirectImpl(param_1,L"BTDecorator_Optional",L"/Script/AIModule.BTDecorator_ForceSuccess");
  ClassRedirectImpl(param_1,L"BTDecorator_ReachedMoveGoal",
                    L"/Script/AIModule.BTDecorator_ReachedMoveGoal");
  ClassRedirectImpl(param_1,L"BTDecorator_TimeLimit",L"/Script/AIModule.BTDecorator_TimeLimit");
  ClassRedirectImpl(param_1,L"BTFunctionLibrary",L"/Script/AIModule.BTFunctionLibrary");
  ClassRedirectImpl(param_1,L"BTNode",L"/Script/AIModule.BTNode");
  ClassRedirectImpl(param_1,L"BTService",L"/Script/AIModule.BTService");
  ClassRedirectImpl(param_1,L"BTService_BlackboardBase",L"/Script/AIModule.BTService_BlackboardBase"
                   );
  ClassRedirectImpl(param_1,L"BTService_BlueprintBase",L"/Script/AIModule.BTService_BlueprintBase");
  ClassRedirectImpl(param_1,L"BTService_DefaultFocus",L"/Script/AIModule.BTService_DefaultFocus");
  ClassRedirectImpl(param_1,L"BTTaskNode",L"/Script/AIModule.BTTaskNode");
  ClassRedirectImpl(param_1,L"BTTask_BlackboardBase",L"/Script/AIModule.BTTask_BlackboardBase");
  ClassRedirectImpl(param_1,L"BTTask_BlueprintBase",L"/Script/AIModule.BTTask_BlueprintBase");
  ClassRedirectImpl(param_1,L"BTTask_MakeNoise",L"/Script/AIModule.BTTask_MakeNoise");
  ClassRedirectImpl(param_1,L"BTTask_MoveDirectlyToward",
                    L"/Script/AIModule.BTTask_MoveDirectlyToward");
  ClassRedirectImpl(param_1,L"BTTask_MoveTo",L"/Script/AIModule.BTTask_MoveTo");
  ClassRedirectImpl(param_1,L"BTTask_PlaySound",L"/Script/AIModule.BTTask_PlaySound");
  ClassRedirectImpl(param_1,L"BTTask_RunBehavior",L"/Script/AIModule.BTTask_RunBehavior");
  ClassRedirectImpl(param_1,L"BTTask_RunEQSQuery",L"/Script/AIModule.BTTask_RunEQSQuery");
  ClassRedirectImpl(param_1,L"BTTask_Wait",L"/Script/AIModule.BTTask_Wait");
  ClassRedirectImpl(param_1,L"BehaviorTree",L"/Script/AIModule.BehaviorTree");
  ClassRedirectImpl(param_1,L"BehaviorTreeComponent",L"/Script/AIModule.BehaviorTreeComponent");
  ClassRedirectImpl(param_1,L"BehaviorTreeManager",L"/Script/AIModule.BehaviorTreeManager");
  ClassRedirectImpl(param_1,L"BehaviorTreeTypes",L"/Script/AIModule.BehaviorTreeTypes");
  ClassRedirectImpl(param_1,L"BlackboardComponent",L"/Script/AIModule.BlackboardComponent");
  ClassRedirectImpl(param_1,L"BlackboardData",L"/Script/AIModule.BlackboardData");
  ClassRedirectImpl(param_1,L"BlackboardKeyType",L"/Script/AIModule.BlackboardKeyType");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Bool",L"/Script/AIModule.BlackboardKeyType_Bool");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Class",L"/Script/AIModule.BlackboardKeyType_Class");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Enum",L"/Script/AIModule.BlackboardKeyType_Enum");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Float",L"/Script/AIModule.BlackboardKeyType_Float");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Int",L"/Script/AIModule.BlackboardKeyType_Int");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Name",L"/Script/AIModule.BlackboardKeyType_Name");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_NativeEnum",
                    L"/Script/AIModule.BlackboardKeyType_NativeEnum");
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Object",L"/Script/AIModule.BlackboardKeyType_Object"
                   );
  ClassRedirectImpl(param_1,L"BlackboardKeyType_String",L"/Script/AIModule.BlackboardKeyType_String"
                   );
  ClassRedirectImpl(param_1,L"BlackboardKeyType_Vector",L"/Script/AIModule.BlackboardKeyType_Vector"
                   );
  ClassRedirectImpl(param_1,L"BrainComponent",L"/Script/AIModule.BrainComponent");
  ClassRedirectImpl(param_1,L"CrowdAgentInterface",L"/Script/AIModule.CrowdAgentInterface");
  ClassRedirectImpl(param_1,L"CrowdFollowingComponent",L"/Script/AIModule.CrowdFollowingComponent");
  ClassRedirectImpl(param_1,L"CrowdManager",L"/Script/AIModule.CrowdManager");
  ClassRedirectImpl(param_1,L"EQSQueryResultSourceInterface",
                    L"/Script/AIModule.EQSQueryResultSourceInterface");
  ClassRedirectImpl(param_1,L"EQSRenderingComponent",L"/Script/AIModule.EQSRenderingComponent");
  ClassRedirectImpl(param_1,L"EQSTestingPawn",L"/Script/AIModule.EQSTestingPawn");
  ClassRedirectImpl(param_1,L"EnvQuery",L"/Script/AIModule.EnvQuery");
  ClassRedirectImpl(param_1,L"EnvQueryContext",L"/Script/AIModule.EnvQueryContext");
  ClassRedirectImpl(param_1,L"EnvQueryContext_BlueprintBase",
                    L"/Script/AIModule.EnvQueryContext_BlueprintBase");
  ClassRedirectImpl(param_1,L"EnvQueryContext_Item",L"/Script/AIModule.EnvQueryContext_Item");
  ClassRedirectImpl(param_1,L"EnvQueryContext_Querier",L"/Script/AIModule.EnvQueryContext_Querier");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator",L"/Script/AIModule.EnvQueryGenerator");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator_Composite",
                    L"/Script/AIModule.EnvQueryGenerator_Composite");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator_OnCircle",
                    L"/Script/AIModule.EnvQueryGenerator_OnCircle");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator_PathingGrid",
                    L"/Script/AIModule.EnvQueryGenerator_PathingGrid");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator_ProjectedPoints",
                    L"/Script/AIModule.EnvQueryGenerator_ProjectedPoints");
  ClassRedirectImpl(param_1,L"EnvQueryGenerator_SimpleGrid",
                    L"/Script/AIModule.EnvQueryGenerator_SimpleGrid");
  ClassRedirectImpl(param_1,L"EnvQueryItemType",L"/Script/AIModule.EnvQueryItemType");
  ClassRedirectImpl(param_1,L"EnvQueryItemType_Actor",L"/Script/AIModule.EnvQueryItemType_Actor");
  ClassRedirectImpl(param_1,L"EnvQueryItemType_ActorBase",
                    L"/Script/AIModule.EnvQueryItemType_ActorBase");
  ClassRedirectImpl(param_1,L"EnvQueryItemType_Direction",
                    L"/Script/AIModule.EnvQueryItemType_Direction");
  ClassRedirectImpl(param_1,L"EnvQueryItemType_Point",L"/Script/AIModule.EnvQueryItemType_Point");
  ClassRedirectImpl(param_1,L"EnvQueryItemType_VectorBase",
                    L"/Script/AIModule.EnvQueryItemType_VectorBase");
  ClassRedirectImpl(param_1,L"EnvQueryManager",L"/Script/AIModule.EnvQueryManager");
  ClassRedirectImpl(param_1,L"EnvQueryOption",L"/Script/AIModule.EnvQueryOption");
  ClassRedirectImpl(param_1,L"EnvQueryTest",L"/Script/AIModule.EnvQueryTest");
  ClassRedirectImpl(param_1,L"EnvQueryTest_Distance",L"/Script/AIModule.EnvQueryTest_Distance");
  ClassRedirectImpl(param_1,L"EnvQueryTest_Dot",L"/Script/AIModule.EnvQueryTest_Dot");
  ClassRedirectImpl(param_1,L"EnvQueryTest_Pathfinding",L"/Script/AIModule.EnvQueryTest_Pathfinding"
                   );
  ClassRedirectImpl(param_1,L"EnvQueryTest_Trace",L"/Script/AIModule.EnvQueryTest_Trace");
  ClassRedirectImpl(param_1,L"EnvQueryTypes",L"/Script/AIModule.EnvQueryTypes");
  ClassRedirectImpl(param_1,L"KismetAIAsyncTaskProxy",L"/Script/AIModule.AIAsyncTaskBlueprintProxy")
  ;
  ClassRedirectImpl(param_1,L"KismetAIHelperLibrary",L"/Script/AIModule.AIBlueprintHelperLibrary");
  ClassRedirectImpl(param_1,L"PathFollowingComponent",L"/Script/AIModule.PathFollowingComponent");
  ClassRedirectImpl(param_1,L"PawnSensingComponent",L"/Script/AIModule.PawnSensingComponent");
  StructRedirectImpl(param_1,L"SReply",L"/Script/UMG.EventReply");
  PropertyRedirectImpl
            (param_1,L"Actor.AddTickPrerequisiteActor.DependentActor",L"PrerequisiteActor");
  FunctionRedirectImpl(param_1,L"Actor.AttachRootComponentTo",L"Actor.K2_AttachRootComponentTo");
  FunctionRedirectImpl
            (param_1,L"Actor.AttachRootComponentToActor",L"Actor.K2_AttachRootComponentToActor");
  FunctionRedirectImpl(param_1,L"Actor.SetTickPrerequisite",L"Actor.AddTickPrerequisiteActor");
  PropertyRedirectImpl
            (param_1,L"BTTask_MoveDirectlyToward.bForceMoveToLocation",
             L"bDisablePathUpdateOnGoalLocationChange");
  PropertyRedirectImpl(param_1,L"KismetSystemLibrary.DrawDebugPlane.Loc",L"Location");
  PropertyRedirectImpl(param_1,L"KismetSystemLibrary.DrawDebugPlane.P",L"PlaneCoordinates");
  FunctionRedirectImpl
            (param_1,L"KismetSystemLibrary.EXPERIMENTAL_CloseAdBanner",
             L"KismetSystemLibrary.ForceCloseAdBanner");
  FunctionRedirectImpl
            (param_1,L"KismetSystemLibrary.EXPERIMENTAL_HideAdBanner",
             L"KismetSystemLibrary.HideAdBanner");
  FunctionRedirectImpl
            (param_1,L"KismetSystemLibrary.EXPERIMENTAL_ShowAdBanner",
             L"KismetSystemLibrary.ShowAdBanner");
  FunctionRedirectImpl(param_1,L"LightComponent.SetBrightness",L"LightComponent.SetIntensity");
  FunctionRedirectImpl(param_1,L"NavigationPath.GetPathLenght",L"NavigationPath.GetPathLength");
  FunctionRedirectImpl(param_1,L"Pawn.GetMovementInputVector",L"Pawn.K2_GetMovementInputVector");
  FunctionRedirectImpl
            (param_1,L"PawnMovementComponent.GetInputVector",
             L"PawnMovementComponent.GetPendingInputVector");
  FunctionRedirectImpl(param_1,L"SceneComponent.AttachTo",L"SceneComponent.K2_AttachTo");
  FunctionRedirectImpl(param_1,L"SkyLightComponent.SetBrightness",L"SkyLightComponent.SetIntensity")
  ;
  ClassRedirectImpl(param_1,L"ControlPointMeshComponent",
                    L"/Script/Landscape.ControlPointMeshComponent");
  ClassRedirectImpl(param_1,L"Landscape",L"/Script/Landscape.Landscape");
  ClassRedirectImpl(param_1,L"LandscapeComponent",L"/Script/Landscape.LandscapeComponent");
  ClassRedirectImpl(param_1,L"LandscapeGizmoActiveActor",
                    L"/Script/Landscape.LandscapeGizmoActiveActor");
  ClassRedirectImpl(param_1,L"LandscapeGizmoActor",L"/Script/Landscape.LandscapeGizmoActor");
  ClassRedirectImpl(param_1,L"LandscapeGizmoRenderComponent",
                    L"/Script/Landscape.LandscapeGizmoRenderComponent");
  ClassRedirectImpl(param_1,L"LandscapeHeightfieldCollisionComponent",
                    L"/Script/Landscape.LandscapeHeightfieldCollisionComponent");
  ClassRedirectImpl(param_1,L"LandscapeInfo",L"/Script/Landscape.LandscapeInfo");
  ClassRedirectImpl(param_1,L"LandscapeInfoMap",L"/Script/Landscape.LandscapeInfoMap");
  ClassRedirectImpl(param_1,L"LandscapeLayerInfoObject",
                    L"/Script/Landscape.LandscapeLayerInfoObject");
  ClassRedirectImpl(param_1,L"LandscapeMaterialInstanceConstant",
                    L"/Script/Landscape.LandscapeMaterialInstanceConstant");
  ClassRedirectImpl(param_1,L"LandscapeMeshCollisionComponent",
                    L"/Script/Landscape.LandscapeMeshCollisionComponent");
  ClassRedirectImpl(param_1,L"LandscapeProxy",L"/Script/Landscape.LandscapeProxy");
  ClassRedirectImpl(param_1,L"LandscapeSplineControlPoint",
                    L"/Script/Landscape.LandscapeSplineControlPoint");
  ClassRedirectImpl(param_1,L"LandscapeSplineSegment",L"/Script/Landscape.LandscapeSplineSegment");
  ClassRedirectImpl(param_1,L"LandscapeSplinesComponent",
                    L"/Script/Landscape.LandscapeSplinesComponent");
  ClassRedirectImpl(param_1,L"MaterialExpressionLandscapeLayerBlend",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerBlend");
  ClassRedirectImpl(param_1,L"MaterialExpressionLandscapeLayerCoords",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerCoords");
  ClassRedirectImpl(param_1,L"MaterialExpressionLandscapeLayerSwitch",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerSwitch");
  ClassRedirectImpl(param_1,L"MaterialExpressionLandscapeLayerWeight",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerWeight");
  ClassRedirectImpl(param_1,L"MaterialExpressionLandscapeVisibilityMask",
                    L"/Script/Landscape.MaterialExpressionLandscapeVisibilityMask");
  ClassRedirectImpl(param_1,L"MaterialExpressionTerrainLayerCoords",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerCoords");
  ClassRedirectImpl(param_1,L"MaterialExpressionTerrainLayerSwitch",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerSwitch");
  ClassRedirectImpl(param_1,L"MaterialExpressionTerrainLayerWeight",
                    L"/Script/Landscape.MaterialExpressionLandscapeLayerWeight");
  ClassRedirectImpl(param_1,L"ReverbVolume",L"/Script/Engine.AudioVolume");
  ClassRedirectImpl(param_1,L"ReverbVolumeToggleable",L"/Script/Engine.AudioVolume");
  StructRedirectImpl(param_1,L"KeyboardEvent",L"/Script/SlateCore.KeyEvent");
  StructRedirectImpl(param_1,L"KeyboardFocusEvent",L"/Script/SlateCore.FocusEvent");
  FunctionRedirectImpl(param_1,L"Actor.AddActorLocalOffset",L"Actor.K2_AddActorLocalOffset");
  FunctionRedirectImpl(param_1,L"Actor.AddActorLocalRotation",L"Actor.K2_AddActorLocalRotation");
  FunctionRedirectImpl(param_1,L"Actor.AddActorLocalTransform",L"Actor.K2_AddActorLocalTransform");
  FunctionRedirectImpl(param_1,L"Actor.AddActorLocalTranslation",L"Actor.K2_AddActorLocalOffset");
  PropertyRedirectImpl(param_1,L"Actor.K2_AddActorLocalOffset.DeltaTranslation",L"DeltaLocation");
  FunctionRedirectImpl(param_1,L"Actor.AddActorWorldOffset",L"Actor.K2_AddActorWorldOffset");
  FunctionRedirectImpl(param_1,L"Actor.AddActorWorldRotation",L"Actor.K2_AddActorWorldRotation");
  FunctionRedirectImpl(param_1,L"Actor.AddActorWorldTransform",L"Actor.K2_AddActorWorldTransform");
  FunctionRedirectImpl(param_1,L"Actor.SetActorLocation",L"Actor.K2_SetActorLocation");
  FunctionRedirectImpl
            (param_1,L"Actor.SetActorLocationAndRotation",L"Actor.K2_SetActorLocationAndRotation");
  FunctionRedirectImpl
            (param_1,L"Actor.SetActorRelativeLocation",L"Actor.K2_SetActorRelativeLocation");
  PropertyRedirectImpl
            (param_1,L"Actor.K2_SetActorRelativeLocation.NewRelativeTranslation",
             L"NewRelativeLocation");
  FunctionRedirectImpl
            (param_1,L"Actor.SetActorRelativeRotation",L"Actor.K2_SetActorRelativeRotation");
  FunctionRedirectImpl
            (param_1,L"Actor.SetActorRelativeTransform",L"Actor.K2_SetActorRelativeTransform");
  FunctionRedirectImpl
            (param_1,L"Actor.SetActorRelativeTranslation",L"Actor.K2_SetActorRelativeLocation");
  FunctionRedirectImpl(param_1,L"Actor.SetActorTransform",L"Actor.K2_SetActorTransform");
  FunctionRedirectImpl
            (param_1,L"BTFunctionLibrary.GetBlackboard",L"BTFunctionLibrary.GetOwnersBlackboard");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.NearlyEqual_RotatorRotator",L"EqualEqual_RotatorRotator");
  FunctionRedirectImpl
            (param_1,L"KismetMathLibrary.NearlyEqual_VectorVector",L"EqualEqual_VectorVector");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.ProjectOnTo",L"ProjectVectorOnToVector");
  PropertyRedirectImpl(param_1,L"KismetMathLibrary.ProjectVectorOnToVector.X",L"V");
  PropertyRedirectImpl(param_1,L"KismetMathLibrary.ProjectVectorOnToVector.Y",L"Target");
  PropertyRedirectImpl(param_1,L"LightComponent.SetIntensity.NewBrightness",L"NewIntensity");
  FunctionRedirectImpl(param_1,L"SceneComponent.AddLocalOffset",L"SceneComponent.K2_AddLocalOffset")
  ;
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddLocalRotation",L"SceneComponent.K2_AddLocalRotation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddLocalTransform",L"SceneComponent.K2_AddLocalTransform");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddLocalTranslation",L"SceneComponent.K2_AddLocalOffset");
  PropertyRedirectImpl
            (param_1,L"SceneComponent.K2_AddLocalOffset.DeltaTranslation",L"DeltaLocation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddRelativeLocation",L"SceneComponent.K2_AddRelativeLocation")
  ;
  PropertyRedirectImpl
            (param_1,L"SceneComponent.K2_AddRelativeLocation.DeltaTranslation",L"DeltaLocation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddRelativeRotation",L"SceneComponent.K2_AddRelativeRotation")
  ;
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddRelativeTranslation",
             L"SceneComponent.K2_AddRelativeLocation");
  FunctionRedirectImpl(param_1,L"SceneComponent.AddWorldOffset",L"SceneComponent.K2_AddWorldOffset")
  ;
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddWorldRotation",L"SceneComponent.K2_AddWorldRotation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.AddWorldTransform",L"SceneComponent.K2_AddWorldTransform");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetRelativeLocation",L"SceneComponent.K2_SetRelativeLocation")
  ;
  PropertyRedirectImpl
            (param_1,L"SceneComponent.K2_SetRelativeLocation.NewTranslation",L"NewLocation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetRelativeRotation",L"SceneComponent.K2_SetRelativeRotation")
  ;
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetRelativeTransform",
             L"SceneComponent.K2_SetRelativeTransform");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetRelativeTranslation",
             L"SceneComponent.K2_SetRelativeLocation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetWorldLocation",L"SceneComponent.K2_SetWorldLocation");
  PropertyRedirectImpl(param_1,L"SceneComponent.K2_SetWorldLocation.NewTranslation",L"NewLocation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetWorldRotation",L"SceneComponent.K2_SetWorldRotation");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetWorldTransform",L"SceneComponent.K2_SetWorldTransform");
  FunctionRedirectImpl
            (param_1,L"SceneComponent.SetWorldTranslation",L"SceneComponent.K2_SetWorldLocation");
  PropertyRedirectImpl(param_1,L"SkyLightComponent.SetIntensity.NewBrightness",L"NewIntensity");
  return;
}

// RegisterNativeRedirects49 @ 141fdeee0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __cdecl RegisterNativeRedirects49(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1)

{
  FCoreRedirect *pFVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  undefined1 local_38 [16];
  FString local_28;
  undefined1 local_18 [16];
  
  ClassRedirectImpl(param_1,L"EdGraphNode_Comment",L"/Script/UnrealEd.EdGraphNode_Comment");
  ClassRedirectImpl(param_1,L"K2Node_Comment",L"/Script/UnrealEd.EdGraphNode_Comment");
  ClassRedirectImpl(param_1,L"VimBlueprintFactory",L"/Script/UnrealEd.AnimBlueprintFactory");
  FunctionRedirectImpl(param_1,L"Actor.SetTickEnabled",L"Actor.SetActorTickEnabled");
  PropertyRedirectImpl
            (param_1,L"UserWidget.OnKeyboardFocusLost.InKeyboardFocusEvent",L"InFocusEvent");
  PropertyRedirectImpl
            (param_1,L"UserWidget.OnControllerAnalogValueChanged.ControllerEvent",
             L"InAnalogInputEvent");
  PropertyRedirectImpl
            (param_1,L"UserWidget.OnControllerButtonPressed.ControllerEvent",L"InKeyEvent");
  PropertyRedirectImpl
            (param_1,L"UserWidget.OnControllerButtonReleased.ControllerEvent",L"InKeyEvent");
  PropertyRedirectImpl(param_1,L"UserWidget.OnKeyDown.InKeyboardEvent",L"InKeyEvent");
  PropertyRedirectImpl(param_1,L"UserWidget.OnKeyUp.InKeyboardEvent",L"InKeyEvent");
  PropertyRedirectImpl
            (param_1,L"UserWidget.OnKeyboardFocusReceived.InKeyboardFocusEvent",L"InFocusEvent");
  PropertyRedirectImpl(param_1,L"UserWidget.OnPreviewKeyDown.InKeyboardEvent",L"InKeyEvent");
  PropertyRedirectImpl(param_1,L"MeshComponent.Materials",L"MeshComponent.OverrideMaterials");
  PropertyRedirectImpl(param_1,L"Pawn.AutoPossess",L"Pawn.AutoPossessPlayer");
  pFVar1 = EnumRedirectImpl(param_1,L"ECollisionChannel",L"/Script/Engine.ECollisionChannel");
  FString::FString((FString *)local_18,L"ECC_Visibility");
  FString::FString(&local_28,L"ECC_Default");
  local_38._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_38._8_8_ = local_18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_38)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_18._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_18._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_WorldDynamic");
  FString::FString(&local_28,L"ECC_Dynamic");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_OverlapAll");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_OverlapAllDynamic");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_OverlapAllDynamic_Deprecated");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_OverlapAllStatic");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_OverlapAllStatic_Deprecated");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_Pawn");
  FString::FString(&local_28,L"ECC_PawnMovement");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_PhysicsBody");
  FString::FString(&local_28,L"ECC_RigidBody");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_PhysicsBody");
  FString::FString(&local_28,L"ECC_RigidBodyInteractable");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_TouchAll");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_TouchAllDynamic");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_OverlapAll_Deprecated");
  FString::FString(&local_28,L"ECC_TouchAllStatic");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_Vehicle");
  FString::FString(&local_28,L"ECC_VehicleMovement");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"ECC_WorldStatic");
  FString::FString(&local_28,L"ECC_WorldTrace");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  ClassRedirectImpl(param_1,L"EditorGameAgnosticSettings",L"/Script/UnrealEd.EditorSettings");
  ClassRedirectImpl(param_1,L"FoliageType",L"/Script/Foliage.FoliageType");
  ClassRedirectImpl(param_1,L"FoliageType_InstancedStaticMesh",
                    L"/Script/Foliage.FoliageType_InstancedStaticMesh");
  ClassRedirectImpl(param_1,L"InstancedFoliageActor",L"/Script/Foliage.InstancedFoliageActor");
  ClassRedirectImpl(param_1,L"InstancedFoliageSettings",
                    L"/Script/Foliage.FoliageType_InstancedStaticMesh");
  ClassRedirectImpl(param_1,L"InteractiveFoliageComponent",
                    L"/Script/Foliage.InteractiveFoliageComponent");
  ClassRedirectImpl(param_1,L"ProceduralFoliage",L"/Script/Foliage.ProceduralFoliageSpawner");
  ClassRedirectImpl(param_1,L"ProceduralFoliageActor",L"/Script/Foliage.ProceduralFoliageVolume");
  StructRedirectImpl(param_1,L"ProceduralFoliageTypeData",L"/Script/Foliage.FoliageTypeObject");
  pFVar1 = EnumRedirectImpl(param_1,L"EComponentCreationMethod",
                            L"/Script/Engine.EComponentCreationMethod");
  FString::FString((FString *)local_38,L"EComponentCreationMethod::SimpleConstructionScript");
  FString::FString(&local_28,L"EComponentCreationMethod::ConstructionScript");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EConstraintTransform",L"/Script/Engine.EConstraintTransform");
  FString::FString((FString *)local_38,L"EConstraintTransform::Absolute");
  FString::FString(&local_28,L"EConstraintTransform::Absoluate");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"ELockedAxis",L"/Script/Engine.EDOFMode");
  FString::FString((FString *)local_38,L"EDOFMode::CustomPlane");
  FString::FString(&local_28,L"Custom");
  local_18._0_8_ = &local_28;
  pTVar2 = &pFVar1->ValueChanges;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EDOFMode::YZPlane");
  FString::FString(&local_28,L"X");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EDOFMode::XZPlane");
  FString::FString(&local_28,L"Y");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FString::FString((FString *)local_38,L"EDOFMode::XYPlane");
  FString::FString(&local_28,L"Z");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)pTVar2,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_18)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  pFVar1 = EnumRedirectImpl(param_1,L"EEndPlayReason",L"/Script/Engine.EEndPlayReason");
  FString::FString((FString *)local_38,L"EEndPlayReason::Destroyed");
  FString::FString(&local_28,L"EEndPlayReason::ActorDestroyed");
  local_18._0_8_ = &local_28;
  local_18._8_8_ = local_38;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&pFVar1->ValueChanges,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,
             (bool *)local_18);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FunctionRedirectImpl
            (param_1,L"ActorComponent.ReceiveInitializeComponent",L"ActorComponent.ReceiveBeginPlay"
            );
  FunctionRedirectImpl
            (param_1,L"ActorComponent.ReceiveUninitializeComponent",L"ActorComponent.ReceiveEndPlay"
            );
  PropertyRedirectImpl
            (param_1,L"CameraComponent.bUseControllerViewRotation",
             L"CameraComponent.bUsePawnControlRotation");
  PropertyRedirectImpl
            (param_1,L"CameraComponent.bUsePawnViewRotation",
             L"CameraComponent.bUsePawnControlRotation");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.AirSpeed",
             L"CharacterMovementComponent.MaxFlySpeed");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.CrouchedSpeedPercent",
             L"CharacterMovementComponent.CrouchedSpeedMultiplier");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.GroundSpeed",
             L"CharacterMovementComponent.MaxWalkSpeed");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.JumpZ",L"CharacterMovementComponent.JumpZVelocity"
            );
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.WaterSpeed",
             L"CharacterMovementComponent.MaxSwimSpeed");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.bCrouchMovesCharacterDown",
             L"CharacterMovementComponent.bCrouchMaintainsBaseLocation");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.bOrientToMovement",
             L"CharacterMovementComponent.bOrientRotationToMovement");
  PropertyRedirectImpl
            (param_1,L"FunctionalTest.GetAdditionalTestFinishedMessage",
             L"FunctionalTest.OnAdditionalTestFinishedMessageRequest");
  PropertyRedirectImpl
            (param_1,L"FunctionalTest.WantsToRunAgain",L"FunctionalTest.OnWantsReRunCheck");
  PropertyRedirectImpl
            (param_1,L"ProjectileMovementComponent.Speed",
             L"ProjectileMovementComponent.InitialSpeed");
  PropertyRedirectImpl
            (param_1,L"SpringArmComponent.bUseControllerViewRotation",
             L"SpringArmComponent.bUsePawnControlRotation");
  PropertyRedirectImpl
            (param_1,L"SpringArmComponent.bUsePawnViewRotation",
             L"SpringArmComponent.bUsePawnControlRotation");
  PropertyRedirectImpl
            (param_1,L"BodyInstance.CustomLockedAxis",L"BodyInstance.CustomDOFPlaneNormal");
  PropertyRedirectImpl(param_1,L"BodyInstance.LockedAxisMode",L"BodyInstance.DOFMode");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.NavMeshProjectionCapsuleHeightScaleDown",
             L"CharacterMovementComponent.NavMeshProjectionHeightScaleDown");
  PropertyRedirectImpl
            (param_1,L"CharacterMovementComponent.NavMeshProjectionCapsuleHeightScaleUp",
             L"CharacterMovementComponent.NavMeshProjectionHeightScaleUp");
  PropertyRedirectImpl
            (param_1,L"LandscapeSplineControlPoint.MeshComponent",
             L"LandscapeSplineControlPoint.LocalMeshComponent");
  PropertyRedirectImpl
            (param_1,L"LandscapeSplineSegment.MeshComponents",
             L"LandscapeSplineSegment.LocalMeshComponents");
  PropertyRedirectImpl
            (param_1,L"ProceduralFoliageComponent.Overlap",L"ProceduralFoliageComponent.TileOverlap"
            );
  PropertyRedirectImpl
            (param_1,L"ProceduralFoliageComponent.ProceduralFoliage",
             L"ProceduralFoliageComponent.FoliageSpawner");
  PropertyRedirectImpl
            (param_1,L"ProceduralFoliageSpawner.Types",L"ProceduralFoliageSpawner.FoliageTypes");
  PropertyRedirectImpl
            (param_1,L"SpriteGeometryCollection.Polygons",L"SpriteGeometryCollection.Shapes");
  ClassRedirectImpl(param_1,L"EditorUserSettings",L"/Script/UnrealEd.EditorPerProjectUserSettings");
  ClassRedirectImpl(param_1,L"MovieScene",L"/Script/MovieScene.MovieScene");
  ClassRedirectImpl(param_1,L"MovieScene3DTransformSection",
                    L"/Script/MovieSceneTracks.MovieScene3DTransformSection");
  ClassRedirectImpl(param_1,L"MovieScene3DTransformTrack",
                    L"/Script/MovieSceneTracks.MovieScene3DTransformTrack");
  ClassRedirectImpl(param_1,L"MovieSceneAudioSection",
                    L"/Script/MovieSceneTracks.MovieSceneAudioSection");
  ClassRedirectImpl(param_1,L"MovieSceneAudioTrack",L"/Script/MovieSceneTracks.MovieSceneAudioTrack"
                   );
  ClassRedirectImpl(param_1,L"MovieSceneBoolTrack",L"/Script/MovieSceneTracks.MovieSceneBoolTrack");
  ClassRedirectImpl(param_1,L"MovieSceneByteSection",
                    L"/Script/MovieSceneTracks.MovieSceneByteSection");
  ClassRedirectImpl(param_1,L"MovieSceneByteTrack",L"/Script/MovieSceneTracks.MovieSceneByteTrack");
  ClassRedirectImpl(param_1,L"MovieSceneColorSection",
                    L"/Script/MovieSceneTracks.MovieSceneColorSection");
  ClassRedirectImpl(param_1,L"MovieSceneColorTrack",L"/Script/MovieSceneTracks.MovieSceneColorTrack"
                   );
  ClassRedirectImpl(param_1,L"MovieSceneFloatSection",
                    L"/Script/MovieSceneTracks.MovieSceneFloatSection");
  ClassRedirectImpl(param_1,L"MovieSceneFloatTrack",L"/Script/MovieSceneTracks.MovieSceneFloatTrack"
                   );
  ClassRedirectImpl(param_1,L"MovieSceneParticleSection",
                    L"/Script/MovieSceneTracks.MovieSceneParticleSection");
  ClassRedirectImpl(param_1,L"MovieSceneParticleTrack",
                    L"/Script/MovieSceneTracks.MovieSceneParticleTrack");
  ClassRedirectImpl(param_1,L"MovieScenePropertyTrack",
                    L"/Script/MovieSceneTracks.MovieScenePropertyTrack");
  ClassRedirectImpl(param_1,L"MovieSceneSection",L"/Script/MovieScene.MovieSceneSection");
  ClassRedirectImpl(param_1,L"MovieSceneTrack",L"/Script/MovieScene.MovieSceneTrack");
  PackageRedirectImpl(param_1,L"/Script/MovieSceneCore",L"/Script/MovieScene");
  PackageRedirectImpl(param_1,L"/Script/MovieSceneCoreTypes",L"/Script/MovieSceneTracks");
  StructRedirectImpl(param_1,L"Anchors",L"/Script/Slate.Anchors");
  StructRedirectImpl(param_1,L"AnimNode_BoneDrivenController",
                     L"/Script/AnimGraphRuntime.AnimNode_BoneDrivenController");
  StructRedirectImpl(param_1,L"AnimNode_CopyBone",L"/Script/AnimGraphRuntime.AnimNode_CopyBone");
  StructRedirectImpl(param_1,L"AnimNode_HandIKRetargeting",
                     L"/Script/AnimGraphRuntime.AnimNode_HandIKRetargeting");
  StructRedirectImpl(param_1,L"AnimNode_LookAt",L"/Script/AnimGraphRuntime.AnimNode_LookAt");
  StructRedirectImpl(param_1,L"AnimNode_ModifyBone",L"/Script/AnimGraphRuntime.AnimNode_ModifyBone")
  ;
  StructRedirectImpl(param_1,L"AnimNode_RotationMultiplier",
                     L"/Script/AnimGraphRuntime.AnimNode_RotationMultiplier");
  StructRedirectImpl(param_1,L"AnimNode_SkeletalControlBase",
                     L"/Script/AnimGraphRuntime.AnimNode_SkeletalControlBase");
  StructRedirectImpl(param_1,L"AnimNode_SpringBone",L"/Script/AnimGraphRuntime.AnimNode_SpringBone")
  ;
  StructRedirectImpl(param_1,L"AnimNode_Trail",L"/Script/AnimGraphRuntime.AnimNode_Trail");
  StructRedirectImpl(param_1,L"AnimNode_TwoBoneIK",L"/Script/AnimGraphRuntime.AnimNode_TwoBoneIK");
  StructRedirectImpl(param_1,L"MovieSceneEditorData",L"/Script/MovieScene.MovieSceneEditorData");
  StructRedirectImpl(param_1,L"MovieSceneObjectBinding",L"/Script/MovieScene.MovieSceneBinding");
  StructRedirectImpl(param_1,L"MovieScenePossessable",L"/Script/MovieScene.MovieScenePossessable");
  StructRedirectImpl(param_1,L"MovieSceneSpawnable",L"/Script/MovieScene.MovieSceneSpawnable");
  StructRedirectImpl(param_1,L"SpritePolygon",L"/Script/Paper2D.SpriteGeometryShape");
  StructRedirectImpl(param_1,L"SpritePolygonCollection",L"/Script/Paper2D.SpriteGeometryCollection")
  ;
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PlayDialogueAttached",
             L"GameplayStatics.SpawnDialogueAttached");
  FunctionRedirectImpl
            (param_1,L"GameplayStatics.PlaySoundAttached",L"GameplayStatics.SpawnSoundAttached");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.BreakRot",L"KismetMathLibrary.BreakRotator");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.MakeRot",L"KismetMathLibrary.MakeRotator");
  FunctionRedirectImpl(param_1,L"KismetMathLibrary.MapRange",L"KismetMathLibrary.MapRangeUnclamped")
  ;
  FunctionRedirectImpl
            (param_1,L"PrimitiveComponent.GetMoveIgnoreActors",
             L"PrimitiveComponent.CopyArrayOfMoveIgnoreActors");
  FunctionRedirectImpl
            (param_1,L"SplineComponent.GetNumSplinePoints",
             L"SplineComponent.GetNumberOfSplinePoints");
  FunctionRedirectImpl
            (param_1,L"VerticalBox.AddChildVerticalBox",L"VerticalBox.AddChildToVerticalBox");
  PropertyRedirectImpl(param_1,L"ComponentKey.VariableGuid",L"ComponentKey.AssociatedGuid");
  PropertyRedirectImpl(param_1,L"ComponentKey.VariableName",L"ComponentKey.SCSVariableName");
  PropertyRedirectImpl(param_1,L"FoliageType.InitialMaxAge",L"FoliageType.MaxInitialAge");
  PropertyRedirectImpl(param_1,L"FoliageType.bGrowsInShade",L"FoliageType.bSpawnsInShade");
  PropertyRedirectImpl(param_1,L"MemberReference.MemberParentClass",L"MemberReference.MemberParent")
  ;
  PropertyRedirectImpl
            (param_1,L"SimpleMemberReference.MemberParentClass",
             L"SimpleMemberReference.MemberParent");
  PropertyRedirectImpl
            (param_1,L"SoundNodeModPlayer.SoundMod",L"SoundNodeModPlayer.SoundModAssetPtr");
  PropertyRedirectImpl
            (param_1,L"SoundNodeWavePlayer.SoundWave",L"SoundNodeWavePlayer.SoundWaveAssetPtr");
  EnumRedirectImpl(param_1,L"ECheckBoxState",L"/Script/SlateCore.ECheckBoxState");
  EnumRedirectImpl(param_1,L"ESlateCheckBoxState",L"/Script/SlateCore.ECheckBoxState");
  EnumRedirectImpl(param_1,L"EAxisOption",L"/Script/Engine.EAxisOption");
  EnumRedirectImpl(param_1,L"EBoneAxis",L"/Script/Engine.EBoneAxis");
  EnumRedirectImpl(param_1,L"EBoneModificationMode",
                   L"/Script/AnimGraphRuntime.EBoneModificationMode");
  EnumRedirectImpl(param_1,L"EComponentType",L"/Script/Engine.EComponentType");
  EnumRedirectImpl(param_1,L"EInterpolationBlend",L"/Script/AnimGraphRuntime.EInterpolationBlend");
  return;
}

// ReloadProcessObject @ 141fe1690

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ReloadProcessObject(UClass *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UEnum *this;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  longlong lVar7;
  UClass *pUVar8;
  FUObjectItem *pFVar9;
  FName *pFVar10;
  UPackage *pUVar11;
  FString *pFVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FString local_48;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  GetObjectsWithOuter((UObjectBase *)param_1,&local_68,true,RF_NoFlags,Borrowed);
  iVar3 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
  FVar13.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    if (local_68.ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (FVar13.Data == pFVar1) break;
    this = *(UEnum **)FVar13.Data;
    if (this != (UEnum *)0x0) {
      pUVar8 = Z_Construct_UClass_UEnum_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
          == &pUVar8->_padding_)) {
        UEnum::RemoveNamesFromPrimaryList(this);
      }
    }
    FVar13.Data = FVar13.Data + 8;
  }
  pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  FUObjectItem::ClearRootFlags(pFVar9,RootSet);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pFVar9 = FUObjectArray::IndexToObject
                     (&GUObjectArray,
                      *(int *)&((param_1->ClassDefaultObject).field0_0x0.DebugPtr)->field_0xc);
  FUObjectItem::ClearRootFlags(pFVar9,RootSet);
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  UObjectBase::AtomicallyClearFlags
            ((UObjectBase *)(param_1->ClassDefaultObject).field0_0x0.DebugPtr,
             RF_Standalone|RF_Public);
  local_res8 = (FName)param_1->_padding_;
  FName::ToString(&local_res8,&local_48);
  pwVar14 = L"";
  FString::PrintfImpl(&local_58,L"%s_%s");
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar13.Data = local_58.Data.AllocatorInstance.Data;
  }
  pFVar10 = FName::FName(&local_res20,(wchar_t *)FVar13.Data);
  FVar4 = (FName)param_1->_padding_;
  FVar5 = *pFVar10;
  pUVar8 = (UClass *)GetTransientPackage();
  MakeUniqueObjectName((UObject *)&local_res18,pUVar8,FVar4,FVar5.ComparisonIndex.Value.Value);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pcVar6 = *(code **)(param_1->_padding_ + 0x170);
  pUVar11 = GetTransientPackage();
  pFVar12 = FName::ToString(&local_res18,&local_48);
  if ((pFVar12->Data).ArrayNum != 0) {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  (*pcVar6)(param_1,pwVar14,pUVar11,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)param_1,RF_Transient);
  pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  FUObjectItem::SetRootFlags(pFVar9,RootSet);
  for (lVar7 = param_1->_padding_; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x28)) {
    pUVar8 = Z_Construct_UClass_UFunction_NoRegister();
    iVar3 = (int)pUVar8->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar3 * 8)
         == &pUVar8->_padding_)) && (*(undefined8 **)(lVar7 + 0xd8) != (undefined8 *)0x0)) {
      **(undefined8 **)(lVar7 + 0xd8) = 0;
    }
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// ReloadProcessObject @ 141fe1920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ReloadProcessObject(UEnum *param_1,wchar_t *param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  FUObjectItem *this;
  FName *pFVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  UEnum::RemoveNamesFromPrimaryList(param_1);
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this,RootSet);
  local_res8 = (FName)param_1->_padding_;
  FName::ToString(&local_res8,&local_28);
  pwVar9 = L"";
  FString::PrintfImpl(&local_38,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar4 = FName::FName(&local_res20,(wchar_t *)FVar8.Data);
  FVar1 = (FName)param_1->_padding_;
  FVar2 = *pFVar4;
  pUVar5 = (UClass *)GetTransientPackage();
  MakeUniqueObjectName((UObject *)&local_res18,pUVar5,FVar1,FVar2.ComparisonIndex.Value.Value);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x170);
  pUVar6 = GetTransientPackage();
  pFVar7 = FName::ToString(&local_res18,&local_28);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(param_1,pwVar9,pUVar6,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ReloadProcessObject @ 141fe1a70

void __cdecl ReloadProcessObject(UPackage *param_1,wchar_t *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->Delegates).AllocatorInstance.Data;
  iVar2 = (param_1->Delegates).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Delegates).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UFunction_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(undefined8 **)(*(longlong *)pFVar3 + 0xd8) != (undefined8 *)0x0) {
      **(undefined8 **)(*(longlong *)pFVar3 + 0xd8) = 0;
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ReloadProcessObject @ 141fe1ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ReloadProcessObject(UScriptStruct *param_1,wchar_t *param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  FUObjectItem *this;
  FName *pFVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FString local_38;
  FString local_28;
  
  UObjectBase::AtomicallyClearFlags((UObjectBase *)param_1,RF_Standalone|RF_Public);
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this,RootSet);
  local_res8 = (FName)param_1->_padding_;
  FName::ToString(&local_res8,&local_28);
  pwVar9 = L"";
  FString::PrintfImpl(&local_38,L"%s_%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar4 = FName::FName(&local_res20,(wchar_t *)FVar8.Data);
  FVar1 = (FName)param_1->_padding_;
  FVar2 = *pFVar4;
  pUVar5 = (UClass *)GetTransientPackage();
  MakeUniqueObjectName((UObject *)&local_res18,pUVar5,FVar1,FVar2.ComparisonIndex.Value.Value);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar3 = *(code **)(param_1->_padding_ + 0x170);
  pUVar6 = GetTransientPackage();
  pFVar7 = FName::ToString(&local_res18,&local_28);
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  (*pcVar3)(param_1,pwVar9,pUVar6,0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SerializeChecksum @ 141fe8850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl SerializeChecksum(FArchive *param_1,uint param_2,bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint local_res8 [2];
  uint local_res20 [2];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
      *plVar1 = *plVar1 + 4;
      return;
    }
    local_res20[0] = param_2;
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
      return;
    }
    FArchive::SerializeByteOrderSwapped(param_1,local_res20);
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (((!param_3) || ((param_1->field_0x29 & 2) == 0)) && (local_res8[0] != param_2)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7521859453361062275>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\CoreNet.cpp"
                         ,0x183,"Magic==x");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (2 < (byte)LogCoreNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogCoreNet);
        return;
      }
    }
  }
  return;
}

// StructRedirectImpl @ 141fe9c60

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FCoreRedirect * __cdecl
StructRedirectImpl(TArray<FCoreRedirect,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
                  wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  FCoreRedirect *pFVar5;
  FString local_28;
  FString local_18;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  pFVar3 = FString::FString(&local_28,param_3);
  pFVar4 = FString::FString(&local_18,param_2);
  pFVar5 = FCoreRedirect::FCoreRedirect
                     ((FCoreRedirect *)(pFVar1 + (longlong)iVar2 * 0xa0),Type_Struct,pFVar4,pFVar3);
  return pFVar5;
}

// TryLoadEnumValueByName @ 141fe9f30

bool __cdecl
TryLoadEnumValueByName
          (FStructuredArchiveSlot param_1,FArchive *param_2,UEnum *param_3,FName *param_4,
          long64 *param_5)

{
  int iVar1;
  FString *pFVar2;
  size_t sVar3;
  long64 lVar4;
  char local_res8 [8];
  long64 local_res18 [2];
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  code *local_48;
  UEnum **local_40;
  FString local_38;
  UEnum *local_28;
  char *local_20;
  long64 *local_18;
  undefined4 local_10;
  
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),param_4);
  if (param_3 == (UEnum *)0x0) {
LAB_141fea0f5:
    *param_5 = 0;
    return false;
  }
  UObject::ConditionalPreload((UObject *)param_3);
  if ((param_3->EnumFlags & Flags) == None) {
    iVar1 = UEnum::GetIndexByName(param_3,*param_4,ErrorIfNotFound);
    if (iVar1 != -1) {
      lVar4 = UEnum::GetValueByIndex(param_3,iVar1);
      *param_5 = lVar4;
      return true;
    }
    lVar4 = UE::GetMaxEnumValue<UEnum::FNameData>(&param_3->Names,param_3->EnumFlags);
    *param_5 = lVar4;
    return false;
  }
  if (*param_4 == (FName)0x0) goto LAB_141fea0f5;
  pFVar2 = FName::ToString(param_4,&local_38);
  local_68.Size = 0;
  if ((pFVar2->Data).ArrayNum == 0) {
    local_68.DataPtr = L"";
  }
  else {
    local_68.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_68.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_141fe9fb1;
  }
  sVar3 = wcslen(local_68.DataPtr);
  local_68.Size = (int)sVar3;
LAB_141fe9fb1:
  local_20 = local_res8;
  local_58.Size = 1;
  local_18 = local_res18;
  local_40 = &local_28;
  local_res8[0] = '\x01';
  local_res18[0] = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnum::GetValueOrBitfieldFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_58.DataPtr = L"|";
  local_10 = 0;
  local_28 = param_3;
  UE::String::ParseTokens
            (&local_68,&local_58,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_48,
             Trim|SkipEmpty);
  lVar4 = -1;
  if (local_res8[0] != '\0') {
    lVar4 = local_res18[0];
  }
  *param_5 = lVar4;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return *param_5 != -1;
}

// Z_Construct_UClass_UClassCookedMetaData_NoRegister @ 141fecbf0

UClass * __cdecl Z_Construct_UClass_UClassCookedMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ClassCookedMetaData",
               &Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton,
               UClassCookedMetaData::StaticRegisterNativesUClassCookedMetaData,0x118,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UClassCookedMetaData>,
               InternalVTableHelperCtorCaller<UClassCookedMetaData>,local_res8,UObject::StaticClass,
               UClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton;
}

// Z_Construct_UClass_UEnumCookedMetaData_NoRegister @ 141feccb0

UClass * __cdecl Z_Construct_UClass_UEnumCookedMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnumCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"EnumCookedMetaData",
               &Z_Registration_Info_UClass_UEnumCookedMetaData.InnerSingleton,
               UEnumCookedMetaData::StaticRegisterNativesUEnumCookedMetaData,0x78,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UEnumCookedMetaData>,
               InternalVTableHelperCtorCaller<UEnumCookedMetaData>,local_res8,UObject::StaticClass,
               UEnum::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnumCookedMetaData.InnerSingleton;
}

// Z_Construct_UClass_UPackageMap_NoRegister @ 141fecd70

UClass * __cdecl Z_Construct_UClass_UPackageMap_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPackageMap.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"PackageMap",
               &Z_Registration_Info_UClass_UPackageMap.InnerSingleton,
               UPackageMap::StaticRegisterNativesUPackageMap,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPackageMap>,InternalVTableHelperCtorCaller<UPackageMap>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPackageMap.InnerSingleton;
}

// Z_Construct_UClass_UStructCookedMetaData_NoRegister @ 141fecd80

UClass * __cdecl Z_Construct_UClass_UStructCookedMetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructCookedMetaData",
               &Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton,
               UStructCookedMetaData::StaticRegisterNativesUStructCookedMetaData,200,8,
               CLASS_Intrinsic|CLASS_Optional,CASTCLASS_None,L"Engine",
               InternalConstructor<UStructCookedMetaData>,
               InternalVTableHelperCtorCaller<UStructCookedMetaData>,local_res8,UObject::StaticClass
               ,UScriptStruct::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton;
}

// IMPLEMENT_MODULE_CoreUObject @ 141fece40

void __cdecl IMPLEMENT_MODULE_CoreUObject(void)

{
  return;
}

// AllEnumNames'' @ 15034f070

void __cdecl `dynamic_atexit_destructor_for_'UEnum::AllEnumNames__(void)

{
  UEnum::AllEnumNames._72_4_ = 0;
  if (UEnum::AllEnumNames._64_8_ != 0) {
    FMemory::Free((void *)UEnum::AllEnumNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<FName,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnum_*,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UEnum::AllEnumNames);
  return;
}

// AllEnumNamesLock'' @ 15034f0b0

void __cdecl `dynamic_atexit_destructor_for_'UEnum::AllEnumNamesLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&UEnum::AllEnumNamesLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00015034f0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&UEnum::AllEnumNamesLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RootNodeID'' @ 15034f110

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'AllClasses'' @ 15034f130

void __cdecl
`FFieldClass::GetAllFieldClasses'::__l2::_dynamic_atexit_destructor_for__AllClasses__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = AllClasses.AllocatorInstance.Data;
  if (AllClasses.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (AllClasses.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FCoreRedirectObjectNameTestAutomationTestInstance'' @ 15034f150

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FCoreRedirectObjectNameTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCoreRedirectObjectNameTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FCoreRedirectTestAutomationTestInstance'' @ 15034f170

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FCoreRedirectTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FCoreRedirectTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FEnumBitfieldTestAutomationTestInstance'' @ 15034f190

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FEnumBitfieldTestAutomationTestInstance__
          (void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FEnumBitfieldTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FFieldCastTestAutomationTestInstance'' @ 15034f1b0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FFieldCastTestAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FFieldCastTestAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FFieldVariantTestInstance'' @ 15034f1d0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FFieldVariantTestInstance__(void)

{
  if (FFieldVariantTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FFieldVariantTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FFieldVariantTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GlobalCoreRedirectContext'' @ 15034f200

void __cdecl
UE::CoreRedirects::Private::_dynamic_atexit_destructor_for__GlobalCoreRedirectContext__(void)

{
  FCoreRedirectsContext::~FCoreRedirectsContext(&GlobalCoreRedirectContext);
  return;
}

// `dynamic_atexit_destructor_for_'Instance'' @ 15034f220

void __cdecl
`UE::Net::Private::FCoreNetContext::Get'::__l5::_dynamic_atexit_destructor_for__Instance__(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'InvalidObjectNameCharacters'' @ 15034f230

void __cdecl
`FCoreRedirectObjectName::HasValidCharacters'::__l2::
_dynamic_atexit_destructor_for__InvalidObjectNameCharacters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidObjectNameCharacters.Data.AllocatorInstance.Data;
  if (InvalidObjectNameCharacters.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidObjectNameCharacters.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InvalidRedirectNameCharacters'' @ 15034f250

void __cdecl
`FCoreRedirectObjectName::HasValidCharacters'::__l2::
_dynamic_atexit_destructor_for__InvalidRedirectNameCharacters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidRedirectNameCharacters.Data.AllocatorInstance.Data;
  if (InvalidRedirectNameCharacters.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidRedirectNameCharacters.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'InvalidVerseCharacters'' @ 15034f270

void __cdecl
`FCoreRedirectObjectName::HasValidCharacters'::__l5::
_dynamic_atexit_destructor_for__InvalidVerseCharacters__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InvalidVerseCharacters.Data.AllocatorInstance.Data;
  if (InvalidVerseCharacters.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InvalidVerseCharacters.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogCoreNet'' @ 15034f290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCoreNet__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCoreNet);
  return;
}

// `dynamic_atexit_destructor_for_'LogCoreRedirects'' @ 15034f2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCoreRedirects__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCoreRedirects);
  return;
}

// `dynamic_atexit_destructor_for_'LogEnum'' @ 15034f2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogEnum__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogEnum);
  return;
}

// `dynamic_atexit_destructor_for_'NameToFieldClassMap'' @ 15034f2f0

void __cdecl
`FFieldClass::GetNameToFieldClassMap'::__l2::_dynamic_atexit_destructor_for__NameToFieldClassMap__
          (void)

{
  NameToFieldClassMap._72_4_ = 0;
  if (NameToFieldClassMap._64_8_ != 0) {
    FMemory::Free((void *)NameToFieldClassMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FFieldClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FFieldClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FFieldClass_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&NameToFieldClassMap);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 15034f330

void __cdecl
`FEnumProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  if (::StaticFieldClass.DefaultObject != (FField *)0x0) {
    (**(code **)((::StaticFieldClass.DefaultObject)->_padding_ + 8))
              (::StaticFieldClass.DefaultObject,1);
  }
  ::StaticFieldClass.DefaultObject = (FField *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 15034f370

void __cdecl `FField::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  if (::StaticFieldClass.DefaultObject != (FField *)0x0) {
    (**(code **)((::StaticFieldClass.DefaultObject)->_padding_ + 8))
              (::StaticFieldClass.DefaultObject,1);
  }
  ::StaticFieldClass.DefaultObject = (FField *)0x0;
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 15034f3b0

void __cdecl
`FFieldPathProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  if (::StaticFieldClass.DefaultObject != (FField *)0x0) {
    (**(code **)((::StaticFieldClass.DefaultObject)->_padding_ + 8))
              (::StaticFieldClass.DefaultObject,1);
  }
  ::StaticFieldClass.DefaultObject = (FField *)0x0;
  return;
}

// operator() @ 1504842d0

bool __thiscall
``UEnum::LookupAllEnumNamesWithOptions'::__l2::<lambda_1>::operator()'::__l15::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3611869622497705381>);
  if (bVar4) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)((longlong)this + 8) + 8),&local_18,
               (UObject *)0x0);
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3611869622497705381>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150484376;
    }
  }
  bVar4 = false;
LAB_150484376:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

