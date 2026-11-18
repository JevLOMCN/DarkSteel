// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 142

// `dynamic_initializer_for_'FStructElementSerializerTestInstance'' @ 141164790

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStructElementSerializerTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStructElementSerializerTest");
  FStructElementSerializerTest::FStructElementSerializerTest
            (&FStructElementSerializerTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStructElementSerializerTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStructSerializerCborByteArrayTestInstance'' @ 1411647e0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FStructSerializerCborByteArrayTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStructSerializerCborByteArrayTest");
  FStructSerializerCborByteArrayTest::FStructSerializerCborByteArrayTest
            (&FStructSerializerCborByteArrayTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStructSerializerCborByteArrayTestInstance__);
  return;
}

// `dynamic_initializer_for_'FStructSerializerTestInstance'' @ 141164830

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__FStructSerializerTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FStructSerializerTest");
  FStructSerializerTest::FStructSerializerTest(&FStructSerializerTestInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FStructSerializerTestInstance__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSerialization'' @ 141164880

void __cdecl _dynamic_initializer_for__ModuleRegistrantSerialization__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Serialization";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Serialization",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSerializationModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h__Script_Serialization_863877439'' @ 1411648d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h__Script_Serialization_863877439__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Serialization",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h__Script_Serialization_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Serialization_Private_Tests_StructSerializerTestTypes_h__Script_Serialization_Statics
             ::ScriptStructInfo,0xd,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_Serialization'' @ 141164920

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_Serialization__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xe0cd72e8;
  local_res8[0].DeclarationsHash = 0xc0568938;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_Serialization,L"/Script/Serialization",
             &Z_Registration_Info_UPackage__Script_Serialization,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 148b855b0

void * __thiscall
FStructElementSerializerTest::_scalar_deleting_destructor_
          (FStructElementSerializerTest *this,uint param_1)

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

// `scalar_deleting_destructor' @ 148b85870

void * __thiscall
FStructSerializerCborByteArrayTest::_scalar_deleting_destructor_
          (FStructSerializerCborByteArrayTest *this,uint param_1)

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

// Z_Construct_UClass_UObjectTest @ 148b85f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UObjectTest(void)

{
  if (Z_Registration_Info_UClass_UObjectTest.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UObjectTest.OuterSingleton,
               &Z_Construct_UClass_UObjectTest_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UObjectTest.OuterSingleton;
}

// Z_Construct_UScriptStruct_FOrientedBoxFloat @ 148b85f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOrientedBoxFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.InnerSingleton,
               &Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOrientedBoxFloat.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct @ 148b85fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerArrayTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct @ 148b86060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerBooleanTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct @ 148b860e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerBuiltinTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest @ 148b86160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerMapTestStruct @ 148b861e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerMapTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerMapTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct @ 148b86260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerNumericTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct @ 148b862e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerObjectTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct @ 148b86360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.InnerSingleton
               ,&Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerOptionalTestStruct.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerSetTestStruct @ 148b863e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerSetTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerSetTestStruct.InnerSingleton;
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

// NewStructOps @ 148b86460

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerNumericTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerNumericTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerNumericTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerNumericTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerNumericTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerNumericTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_BoolFalse_SetBit @ 148b864a0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolFalse_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_BoolTrue_SetBit @ 148b864b0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_BoolTrue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_Bitfield0_SetBit @ 148b864c0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield0_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 1;
  return;
}

// NewProp_Bitfield1_SetBit @ 148b864d0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield1_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 2;
  return;
}

// NewProp_Bitfield2Set_SetBit @ 148b864e0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield2Set_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 4;
  return;
}

// NewProp_Bitfield3_SetBit @ 148b864f0

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield3_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 8;
  return;
}

// NewProp_Bitfield4Set_SetBit @ 148b86500

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield4Set_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 0x10;
  return;
}

// NewProp_Bitfield5Set_SetBit @ 148b86510

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield5Set_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 0x20;
  return;
}

// NewProp_Bitfield6_SetBit @ 148b86520

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield6_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 0x40;
  return;
}

// NewProp_Bitfield7Set_SetBit @ 148b86530

void __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewProp_Bitfield7Set_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 2) = *(byte *)((longlong)param_1 + 2) | 0x80;
  return;
}

// NewStructOps @ 148b86540

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerBooleanTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerBooleanTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerBooleanTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerBooleanTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerBooleanTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerBooleanTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b867a0

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerObjectTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerObjectTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerObjectTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerObjectTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerObjectTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerObjectTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b867e0

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerBuiltinTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerBuiltinTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerBuiltinTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerBuiltinTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerBuiltinTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerBuiltinTestStruct>,&UE::CoreUObject::Private::GetStructTypeHash<FStructSerializerBuiltinTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b869d0

void * __cdecl Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x360;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerLWCTypesTest,&UE::CoreUObject::Private::Construct<FStructSerializerLWCTypesTest>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerLWCTypesTest>,&UE::CoreUObject::Private::Destruct<FStructSerializerLWCTypesTest>,&UE::CoreUObject::Private::Copy<FStructSerializerLWCTypesTest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b86a10

void * __cdecl Z_Construct_UScriptStruct_FOrientedBoxFloat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x3c;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOrientedBoxFloat,&UE::CoreUObject::Private::Construct<FOrientedBoxFloat>,&UE::CoreUObject::Private::ConstructForTests<FOrientedBoxFloat>,&UE::CoreUObject::Private::Destruct<FOrientedBoxFloat>,&UE::CoreUObject::Private::Copy<FOrientedBoxFloat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UPackage__Script_Serialization @ 148b86e10

UPackage * __cdecl Z_Construct_UPackage__Script_Serialization(void)

{
  if (Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_Serialization.OuterSingleton;
}

// NewStructOps @ 148b86e50

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x220;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerNonLWCTypesTest,&UE::CoreUObject::Private::Construct<FStructSerializerNonLWCTypesTest>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerNonLWCTypesTest>,&UE::CoreUObject::Private::Destruct<FStructSerializerNonLWCTypesTest>,&UE::CoreUObject::Private::Copy<FStructSerializerNonLWCTypesTest>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UObjectTest_NoRegister @ 148b86e90

UClass * __cdecl Z_Construct_UClass_UObjectTest_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Serialization",L"ObjectTest",
               &Z_Registration_Info_UClass_UObjectTest.InnerSingleton,
               UObjectTest::StaticRegisterNativesUObjectTest,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UObjectTest>,
               InternalVTableHelperCtorCaller<UObjectTest>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectTest.InnerSingleton;
}

// NewStructOps @ 148b870b0

void * __cdecl Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerByteArray,&UE::CoreUObject::Private::Construct<FStructSerializerByteArray>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerByteArray>,&UE::CoreUObject::Private::Destruct<FStructSerializerByteArray>,&UE::CoreUObject::Private::Copy<FStructSerializerByteArray>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148b87120

void * __thiscall
FSerializationModule::_scalar_deleting_destructor_(FSerializationModule *this,uint param_1)

{
  *this = (FSerializationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 148b87160

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerArrayTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerArrayTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerArrayTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerArrayTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerArrayTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerArrayTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b872e0

void * __cdecl Z_Construct_UScriptStruct_FStructSerializerMapTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerMapTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerMapTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerMapTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerMapTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerMapTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b87360

void * __cdecl Z_Construct_UScriptStruct_FStructSerializerSetTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x140;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerSetTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerSetTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerSetTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerSetTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerSetTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b87410

void * __cdecl
Z_Construct_UScriptStruct_FStructSerializerOptionalTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x200;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerOptionalTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerOptionalTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerOptionalTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerOptionalTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerOptionalTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 148b87750

void * __cdecl Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FStructSerializerTestStruct,&UE::CoreUObject::Private::Construct<FStructSerializerTestStruct>,&UE::CoreUObject::Private::ConstructForTests<FStructSerializerTestStruct>,&UE::CoreUObject::Private::Destruct<FStructSerializerTestStruct>,&UE::CoreUObject::Private::Copy<FStructSerializerTestStruct>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 148b87f90

void * __thiscall
FStructSerializerTest::_scalar_deleting_destructor_(FStructSerializerTest *this,uint param_1)

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

// CastFieldChecked<FNameProperty> @ 148b883a0

FNameProperty * __cdecl CastFieldChecked<FNameProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FNameProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0xd & 1) == 0))
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNameProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FNameProperty *)param_1;
}

// CastFieldChecked<FSoftClassProperty> @ 148b88400

FSoftClassProperty * __cdecl CastFieldChecked<FSoftClassProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftClassProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) ||
     ((param_1->ClassPrivate->CastFlags & CASTCLASS_FSoftClassProperty) == CASTCLASS_None)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftClassProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FSoftClassProperty *)param_1;
}

// CastFieldChecked<FSoftObjectProperty> @ 148b88460

FSoftObjectProperty * __cdecl CastFieldChecked<FSoftObjectProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSoftObjectProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0x1d & 1) == 0)
     ) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSoftObjectProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FSoftObjectProperty *)param_1;
}

// CastFieldChecked<FStrProperty> @ 148b884c0

FStrProperty * __cdecl CastFieldChecked<FStrProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FStrProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0xe & 1) == 0))
  {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStrProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FStrProperty *)param_1;
}

// CastFieldChecked<FTextProperty> @ 148b88520

FTextProperty * __cdecl CastFieldChecked<FTextProperty>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTextProperty *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 0x1e & 1) == 0)
     ) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTextProperty *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FTextProperty *)param_1;
}

// CastFieldChecked<FUInt64Property> @ 148b88580

FUInt64Property * __cdecl CastFieldChecked<FUInt64Property>(FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FUInt64Property *pFVar3;
  
  if ((param_1 == (FField *)0x0) || (((uint)(int)param_1->ClassPrivate->CastFlags >> 9 & 1) == 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FUInt64Property *)(*pcVar1)();
      return pFVar3;
    }
    param_1 = (FField *)0x0;
  }
  return (FUInt64Property *)param_1;
}

// ConstructItems<FStructSerializerBuiltinTestStruct,FStructSerializerBuiltinTestStruct,int> @ 148b885e0

void __cdecl
ConstructItems<FStructSerializerBuiltinTestStruct,FStructSerializerBuiltinTestStruct,int>
          (void *param_1,FStructSerializerBuiltinTestStruct *param_2,int param_3)

{
  undefined8 *puVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  FString *pFVar7;
  longlong *plVar8;
  undefined1 local_res18 [16];
  
  if (param_3 != 0) {
    pFVar7 = &param_2->String;
    plVar8 = (longlong *)((longlong)param_1 + 0x28);
    do {
      uVar3 = *(undefined8 *)(pFVar7 + -1);
      puVar1 = (undefined8 *)((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pFVar7);
      *puVar1 = *(undefined8 *)((longlong)(pFVar7 + -2) + 8);
      puVar1[1] = uVar3;
      plVar8[-3] = *(longlong *)((longlong)(pFVar7 + -1) + 8);
      FString::FString((FString *)(plVar8 + -2),pFVar7);
      *plVar8 = 0;
      pIVar2 = (((FText *)(pFVar7 + 1))->TextData).Reference;
      *plVar8 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      *(uint *)(plVar8 + 1) = ((FText *)(pFVar7 + 1))->Flags;
      plVar8[2] = ((FDateTime *)(pFVar7 + 2))->Ticks;
      plVar8[3] = ((FTimespan *)((FDateTime *)(pFVar7 + 2) + 1))->Ticks;
      dVar4 = (((TVector<double> *)(pFVar7 + 3))->field0_0x0)._s_0.Y;
      plVar8[4] = (longlong)(((TVector<double> *)(pFVar7 + 3))->field0_0x0)._s_0.X;
      plVar8[5] = (longlong)dVar4;
      plVar8[6] = *(longlong *)(pFVar7 + 4);
      lVar5 = *(longlong *)(pFVar7 + 5);
      plVar8[7] = *(longlong *)((longlong)(pFVar7 + 4) + 8);
      plVar8[8] = lVar5;
      lVar5 = *(longlong *)(pFVar7 + 6);
      plVar8[9] = *(longlong *)((longlong)(pFVar7 + 5) + 8);
      plVar8[10] = lVar5;
      dVar4 = *(double *)(pFVar7 + 7);
      plVar8[0xb] = *(longlong *)((longlong)(pFVar7 + 6) + 8);
      plVar8[0xc] = (longlong)dVar4;
      plVar8[0xd] = (longlong)*(double *)((longlong)(pFVar7 + 7) + 8);
      dVar4 = *(double *)(pFVar7 + 9);
      plVar8[0xf] = (longlong)((TQuat<double> *)((longlong)(pFVar7 + 8) + 8))->X;
      plVar8[0x10] = (longlong)dVar4;
      dVar4 = *(double *)(pFVar7 + 10);
      plVar8[0x11] = (longlong)*(double *)((longlong)(pFVar7 + 9) + 8);
      plVar8[0x12] = (longlong)dVar4;
      pdVar6 = (double *)(pFVar7 + 10);
      pFVar7 = pFVar7 + 0xd;
      *(undefined4 *)(plVar8 + 0x13) = *(undefined4 *)(pdVar6 + 1);
      plVar8 = plVar8 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CopyKeys<int,FString> @ 148b88700

void __cdecl
StructSerializerTest::CopyKeys<int,FString>
          (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *param_1,
          TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
          *param_2)

{
  TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::Empty
            ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
              *)param_1,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  Algo::
  ForEach<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>_const_&,_StructSerializerTest::CopyKeys<int,FString>_::__l2::<lambda_1>_>
            (param_2,(<lambda_1>)param_1);
  return;
}

// CopyKeys<FString,UE::Math::TVector<double>_> @ 148b88740

void __cdecl
StructSerializerTest::CopyKeys<FString,UE::Math::TVector<double>_>
          (TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *param_1,
          TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
          *param_2)

{
  TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
           *)param_1,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  Algo::
  ForEach<TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,UE::Math::TVector<double>_>_::__l2::<lambda_1>_>
            (param_2,(<lambda_1>)param_1);
  return;
}

// CopyKeys<FString,FStructSerializerBuiltinTestStruct> @ 148b88780

void __cdecl
StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>
          (TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
           *param_1,
          TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
          *param_2)

{
  TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
           *)param_1,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  Algo::
  ForEach<TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>_::__l2::<lambda_1>_>
            (param_2,(<lambda_1>)param_1);
  return;
}

// CopyKeys<FString,FString> @ 148b887c0

void __cdecl
StructSerializerTest::CopyKeys<FString,FString>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)param_1,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  Algo::
  ForEach<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,FString>_::__l2::<lambda_1>_>
            (param_2,(<lambda_1>)param_1);
  return;
}

// DefaultConstructItems<FStructSerializerBuiltinTestStruct,int> @ 148b88800

void __cdecl
DefaultConstructItems<FStructSerializerBuiltinTestStruct,int>(void *param_1,int param_2)

{
  FString *this;
  
  if (param_2 != 0) {
    this = (FString *)((longlong)param_1 + 0x18);
    do {
      FGuid::NewGuid((FGuid *)&this[-2].Data.ArrayNum);
      FName::FName((FName *)&this[-1].Data.ArrayNum,L"Test FName");
      FString::FString(this,"Test String");
      FText::FromString((FText *)(this + 1),"Test Text");
      FDateTime::FDateTime((FDateTime *)(this + 2),0x800,2,4,8,0x10,0x20,0x40);
      FTimespan::Assign((FTimespan *)&this[2].Data.ArrayNum,1,2,3,4,5);
      this[3].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x3ff0000000000000;
      this[6].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x401c000000000000;
      this[6].Data.ArrayNum = 0;
      this[6].Data.ArrayMax = 0x40b00000;
      this[7].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x40c0000000000000;
      this[7].Data.ArrayNum = 0;
      this[7].Data.ArrayMax = 0x40d00000;
      this[10].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x3fdd70a3e0000000;
      this[3].Data.ArrayNum = 0;
      this[3].Data.ArrayMax = 0x40000000;
      this[4].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x4008000000000000;
      this[4].Data.ArrayNum = 0;
      this[4].Data.ArrayMax = 0x40100000;
      this[5].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x4014000000000000;
      this[5].Data.ArrayNum = 0;
      this[5].Data.ArrayMax = 0x40180000;
      this[8].Data.ArrayNum = 0;
      this[8].Data.ArrayMax = 0x3ff00000;
      this[9].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x4000000000000000;
      this[9].Data.ArrayNum = 0;
      this[9].Data.ArrayMax = 0x40080000;
      this[10].Data.ArrayNum = -0xfc00c4;
      this = this + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FStructSerializerBuiltinTestStruct,int> @ 148b889d0

void __cdecl
DestructItems<FStructSerializerBuiltinTestStruct,int>
          (FStructSerializerBuiltinTestStruct *param_1,int param_2)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  
  if (param_2 != 0) {
    pFVar3 = &param_1->String;
    do {
      pIVar1 = (((FText *)(pFVar3 + 1))->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar3 = pFVar3 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ExpandForIndex<FScriptMapHelper> @ 148b899f0

int __cdecl
StructDeserializer::ExpandForIndex<FScriptMapHelper>(FScriptMapHelper *param_1,int param_2)

{
  FScriptSparseArrayLayout *pFVar1;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  FScriptMapHelper *local_28;
  int local_20;
  FScriptMapHelper *local_18;
  int local_10;
  
  local_28 = param_1;
  local_20 = param_2;
  iVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                    (param_1,(<lambda_1> *)&local_28);
  if (iVar5 == -1) {
    pTVar2 = (param_1->field2_0x10).FreezableMap;
    if ((param_1->MapFlags & UsesMemoryImageAllocator) == None) {
      iVar5 = *(int *)&(pTVar2->Pairs).field_0x34;
    }
    else {
      iVar5 = (pTVar2->Pairs).Elements.NumFreeIndices;
    }
    uVar6 = (param_2 - ((pTVar2->Pairs).Elements.Data.ArrayNum - iVar5)) + 1;
    if (0 < (int)uVar6) {
      uVar7 = (ulonglong)uVar6;
      do {
        pFVar1 = &(param_1->MapLayout).SetLayout.SparseArrayLayout;
        if ((param_1->MapFlags & UsesMemoryImageAllocator) == None) {
          iVar5 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                  ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                      *)(param_1->field2_0x10).HeapMap,pFVar1);
        }
        else {
          iVar5 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                  ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                      *)(param_1->field2_0x10).HeapMap,pFVar1);
        }
        FScriptMapHelper::ConstructItem(param_1,iVar5);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    local_18 = param_1;
    local_10 = param_2;
    iVar5 = FScriptMapHelper::
            WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                      (param_1,(<lambda_1> *)&local_18);
    if ((iVar5 == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                           ,0x5e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return iVar5;
}

// ExpandForIndex<FScriptSetHelper> @ 148b89ae0

int __cdecl
StructDeserializer::ExpandForIndex<FScriptSetHelper>(FScriptSetHelper *param_1,int param_2)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  ulonglong uVar8;
  ForElementType<unsigned_int> FVar9;
  
  iVar5 = FScriptSetHelper::FindInternalIndex(param_1,param_2);
  if (iVar5 == -1) {
    uVar6 = param_2 + 1 +
            ((param_1->Set->Elements).NumFreeIndices - (param_1->Set->Elements).Data.ArrayNum);
    if (0 < (int)uVar6) {
      uVar8 = (ulonglong)uVar6;
      do {
        uVar6 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                ::AddUninitialized(&param_1->Set->Elements,&(param_1->SetLayout).SparseArrayLayout);
        pTVar1 = param_1->Set;
        if (((int)uVar6 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar6)) {
LAB_148b89ba1:
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(InternalIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1841,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
        }
        else {
          if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar6) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            iVar5 = (*pcVar3)();
            return iVar5;
          }
          FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar2;
          }
          uVar7 = uVar6;
          if ((int)uVar6 < 0) {
            uVar7 = uVar6 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar9 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar6 & 0x1f) & 1)
              == 0) goto LAB_148b89ba1;
        }
        _Dst = (void *)((longlong)(int)(uVar6 * (param_1->SetLayout).SparseArrayLayout.Size) +
                       (param_1->Set->Elements).Data._padding_);
        if (((uint)(int)param_1->ElementProp->PropertyFlags >> 9 & 1) == 0) {
          FProperty::InitializeValue_InContainer(param_1->ElementProp,_Dst);
        }
        else {
          memset(_Dst,0,(longlong)(param_1->SetLayout).Size);
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar5 = FScriptSetHelper::FindInternalIndex(param_1,param_2);
    if ((iVar5 == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InternalIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructDeserializer.cpp"
                           ,0x5e,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  return iVar5;
}

// ForEach<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>_const_&,`StructSerializerTest::CopyKeys<int,FString>'::__l2::<lambda_1>_> @ 148b89f30

void __cdecl
Algo::
ForEach<TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>_const_&,_StructSerializerTest::CopyKeys<int,FString>_::__l2::<lambda_1>_>
          (TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TKeyInitializer<int_const_&> local_res20;
  longlong local_a8;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    while (uVar9 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_148b89fce;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_148b89fce:
  uVar9 = *(uint *)&param_1->field_0x28;
  uVar13 = uVar9 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148b8a0d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148b8a0d0:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<int,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar9) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TKeyInitializer<int_const_&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)param_2.OutMap,&local_res20,(bool *)&local_a8);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// ForEach<TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>_const_&,`StructSerializerTest::CopyKeys<FString,UE::Math::TVector<double>_>'::__l2::<lambda_1>_> @ 148b8a150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Algo::
ForEach<TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,UE::Math::TVector<double>_>_::__l2::<lambda_1>_>
          (TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_d8;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_b8 = 0;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar12 = *puVar15;
    while (uVar12 == 0) {
      lVar11 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_148b8a1fe;
      uVar12 = puVar15[lVar11 + 1];
    }
    uStack_b4 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_a4 = (int)lVar11 + -1 + local_a0;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_148b8a1fe:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_98 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_1;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar8 = _UNK_151c790e8;
  dVar7 = ___xmm_40532cccc000000040532cccc0000000;
  dVar6 = __real_40532cccc0000000;
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar4) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_148b8a310;
      uVar12 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar12 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_148b8a310:
  while( true ) {
    pTVar9 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar12) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == param_1))
    break;
    local_d8._s_0.Z = dVar6;
    local_d8._s_0.X = dVar7;
    local_d8._s_0.Y = dVar8;
    TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
    ::Emplace<FString_const_&,UE::Math::TVector<double>_>
              ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                *)param_2.OutMap,
               (FString *)((longlong)TStack_88.CurrentBitIndex * 0x30 + *(longlong *)pTVar9),
               (TVector<double> *)&local_d8._s_0);
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  return;
}

// ForEach<TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>_const_&,`StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>'::__l2::<lambda_1>_> @ 148b8a3a0

void __cdecl
Algo::
ForEach<TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>_::__l2::<lambda_1>_>
          (TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  TMap<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  *local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148b8a43d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_148b8a43d:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res10 = param_2.OutMap;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_148b8a540;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_148b8a540:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    `StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>'::__l2::<lambda_1>::
    operator()(&local_res10,
               (TTuple<FString,FStructSerializerBuiltinTestStruct> *)
               ((longlong)TStack_60.CurrentBitIndex * 0xf0 + *(longlong *)param_1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,`StructSerializerTest::CopyKeys<FString,FString>'::__l2::<lambda_1>_> @ 148b8a5b0

void __cdecl
Algo::
ForEach<TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&,_StructSerializerTest::CopyKeys<FString,FString>_::__l2::<lambda_1>_>
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TKeyInitializer<FString_const_&> local_res20;
  longlong local_a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    while (uVar9 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_148b8a64e;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_148b8a64e:
  uVar9 = *(uint *)&param_1->field_0x28;
  uVar13 = uVar9 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&param_1->field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148b8a750;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_148b8a750:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar9) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_a8 = *(longlong *)pTVar6 + (longlong)TStack_68.CurrentBitIndex * 0x28;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_2.OutMap,&local_res20,(bool *)&local_a8);
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GenerateStatesForIteratable<FArrayProperty> @ 148b8ac90

TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> * __cdecl
StructSerializer::GenerateStatesForIteratable<FArrayProperty>
          (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FStructSerializerState *param_1,FStructSerializerPolicies *param_2)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong *puVar15;
  uint uVar16;
  FProperty *pFVar17;
  FScriptContainerElement local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pFVar17 = param_1->ValueProperty;
  if (((pFVar17 == (FProperty *)0x0) || ((*(uint *)(pFVar17->_padding_ + 0x18) >> 0x15 & 1) == 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"),
        pFVar17 = (FProperty *)0x0, bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  pvVar2 = param_1->ValueData;
  if ((pFVar17->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  if ((pvVar2 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  lVar6 = pFVar17[1]._padding_;
  iVar8 = pFVar17->Offset_Internal;
  (**(code **)(*(longlong *)pFVar17[1]._padding_ + 0x168))();
  lVar12 = pFVar17[1]._padding_;
  puVar15 = (ulonglong *)((longlong)pvVar2 + (longlong)iVar8);
  iVar8 = *(int *)(lVar12 + 0x34);
  if ((iVar8 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  if ((lVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar10;
  }
  if (param_1->ElementIndex == -1) {
    uVar16 = 1;
  }
  else {
    uVar16 = (uint)puVar15[1];
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
    }
  }
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar16,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  iVar14 = param_1->ElementIndex;
  if (iVar14 == -1) {
    iVar14 = (int)puVar15[1] + -1;
    if (-1 < iVar14) {
      lVar12 = (longlong)iVar14;
      do {
        if (iVar14 < (int)puVar15[1]) {
          local_58 = pFVar17[1]._padding_;
          if ((int)puVar15[1] == 0) {
            lStack_60 = 0;
          }
          else {
            uVar11 = *puVar15;
            if (((lVar6 & 1) != 0) && ((uVar11 & 1) != 0)) {
              uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar15;
            }
            lStack_60 = iVar8 * lVar12 + uVar11;
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          uStack_70 = 0;
          uStack_68 = 0;
          local_78 = (FScriptContainerElement)0x0;
          uStack_50 = 0;
          local_48 = *(undefined8 *)(local_58 + 8);
          uStack_40 = 0xffffffff;
          uStack_3c = 0;
          if (((pFVar3 <= &local_78) && (&local_78 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar10;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
          lVar13 = (longlong)iVar9 * 0x40;
          *(ulonglong *)(pFVar4 + lVar13) = CONCAT71(uStack_77,local_78);
          *(undefined8 *)(pFVar4 + lVar13 + 8) = uStack_70;
          *(undefined8 *)(pFVar4 + lVar13 + 0x10) = uStack_68;
          *(longlong *)(pFVar4 + lVar13 + 0x10 + 8) = lStack_60;
          pFVar3 = pFVar4 + lVar13 + 0x20;
          *(undefined4 *)pFVar3 = (undefined4)local_58;
          *(undefined4 *)(pFVar3 + 4) = local_58._4_4_;
          *(undefined4 *)(pFVar3 + 8) = (undefined4)uStack_50;
          *(undefined4 *)(pFVar3 + 0xc) = uStack_50._4_4_;
          *(undefined8 *)(pFVar4 + lVar13 + 0x30) = local_48;
          *(ulonglong *)(pFVar4 + lVar13 + 0x30 + 8) = CONCAT44(uStack_3c,uStack_40);
        }
        lVar12 = lVar12 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
  }
  else if ((-1 < iVar14) && (iVar14 < (int)puVar15[1])) {
    local_98 = pFVar17[1]._padding_;
    if ((int)puVar15[1] == 0) {
      lStack_a0 = 0;
    }
    else {
      uVar11 = *puVar15;
      if (((lVar6 & 1) != 0) && ((uVar11 & 1) != 0)) {
        uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar15;
      }
      lStack_a0 = (longlong)iVar14 * (longlong)iVar8 + uVar11;
    }
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    uStack_b0 = 0;
    uStack_a8 = 0;
    local_b8 = (FScriptContainerElement)0x0;
    lStack_90 = 0;
    local_88 = *(undefined8 *)(local_98 + 8);
    uStack_80 = 0xffffffff;
    uStack_7c = 1;
    if (((pFVar3 <= &local_b8) && (&local_b8 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar10;
    }
    iVar8 = __return_storage_ptr__->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar8 + 1;
    pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
    lVar12 = (longlong)iVar8 * 0x40;
    *(ulonglong *)(pFVar3 + lVar12) = CONCAT71(uStack_b7,local_b8);
    *(undefined8 *)(pFVar3 + lVar12 + 8) = uStack_b0;
    *(undefined8 *)(pFVar3 + lVar12 + 0x10) = uStack_a8;
    *(longlong *)(pFVar3 + lVar12 + 0x10 + 8) = lStack_a0;
    *(longlong *)(pFVar3 + lVar12 + 0x20) = local_98;
    *(longlong *)(pFVar3 + lVar12 + 0x20 + 8) = lStack_90;
    *(undefined8 *)(pFVar3 + lVar12 + 0x30) = local_88;
    *(ulonglong *)(pFVar3 + lVar12 + 0x30 + 8) = CONCAT44(uStack_7c,uStack_80);
  }
  return __return_storage_ptr__;
}

// GenerateStatesForIteratable<FMapProperty> @ 148b8b0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> * __cdecl
StructSerializer::GenerateStatesForIteratable<FMapProperty>
          (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FStructSerializerState *param_1,FStructSerializerPolicies *param_2)

{
  int *piVar1;
  void *pvVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  FMapProperty *pFVar12;
  undefined1 auStackY_158 [32];
  int local_108;
  int local_104;
  FScriptContainerElement local_100;
  undefined7 uStack_ff;
  uchar *puStack_f8;
  FProperty *pFStack_f0;
  uchar *puStack_e8;
  FProperty *local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  FScriptContainerElement local_c0;
  undefined7 uStack_bf;
  uchar *puStack_b8;
  FProperty *pFStack_b0;
  uchar *puStack_a8;
  FProperty *local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  FScriptMapHelper local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pFVar12 = (FMapProperty *)param_1->ValueProperty;
  if (((pFVar12 == (FMapProperty *)0x0) ||
      ((*(ulonglong *)(pFVar12->_padding_ + 0x18) & 0x400000000000) == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar12 = (FMapProperty *)0x0, bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  pvVar2 = param_1->ValueData;
  if (((int)pFVar12->_padding_ < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  if ((pvVar2 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar9;
  }
  FScriptMapHelper::FScriptMapHelper
            (&local_80,pFVar12,
             (void *)((longlong)*(int *)((longlong)&pFVar12->_padding_ + 4) + (longlong)pvVar2));
  if (param_1->ElementIndex == -1) {
    uVar11 = 1;
  }
  else {
    if ((local_80.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar7 = *(int *)&((local_80.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar7 = ((local_80.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    uVar11 = ((local_80.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar7;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar11,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  local_108 = param_1->ElementIndex;
  if (local_108 == -1) {
    if ((local_80.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar7 = *(int *)&((local_80.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar7 = ((local_80.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    iVar7 = ((local_80.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar7;
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      local_104 = iVar7;
      bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_80,(<lambda_1> *)&local_104);
      if (bVar6) {
        pFVar3 = pFVar12->ValueProp;
        puStack_a8 = FScriptMapHelper::GetPairPtr(&local_80,iVar7);
        local_c0 = (FScriptContainerElement)0x0;
        puStack_b8 = (uchar *)0x0;
        pFStack_b0 = (FProperty *)0x0;
        lStack_98 = 0;
        local_90 = pFVar3->_padding_;
        uStack_88 = 0xffffffff;
        uStack_84 = 0;
        local_a0 = pFVar3;
        if (param_2->MapSerialization == KeyValuePair) {
          puStack_b8 = FScriptMapHelper::GetPairPtr(&local_80,iVar7);
          pFStack_b0 = pFVar12->KeyProp;
          puStack_a8 = puStack_b8;
        }
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar4 <= &local_c0) &&
            (&local_c0 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar9;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        lVar10 = (longlong)iVar8 * 0x40;
        *(ulonglong *)(pFVar4 + lVar10) = CONCAT71(uStack_bf,local_c0);
        *(uchar **)(pFVar4 + lVar10 + 8) = puStack_b8;
        *(FProperty **)(pFVar4 + lVar10 + 0x10) = pFStack_b0;
        *(uchar **)(pFVar4 + lVar10 + 0x10 + 8) = puStack_a8;
        *(FProperty **)(pFVar4 + lVar10 + 0x20) = local_a0;
        *(longlong *)(pFVar4 + lVar10 + 0x20 + 8) = lStack_98;
        *(longlong *)(pFVar4 + lVar10 + 0x30) = local_90;
        *(ulonglong *)(pFVar4 + lVar10 + 0x30 + 8) = CONCAT44(uStack_84,uStack_88);
      }
    }
  }
  else {
    bVar6 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (&local_80,(<lambda_1> *)&local_108);
    if (bVar6) {
      iVar7 = param_1->ElementIndex;
      pFVar3 = pFVar12->ValueProp;
      puStack_e8 = FScriptMapHelper::GetPairPtr(&local_80,iVar7);
      local_100 = (FScriptContainerElement)0x0;
      puStack_f8 = (uchar *)0x0;
      pFStack_f0 = (FProperty *)0x0;
      lStack_d8 = 0;
      local_d0 = pFVar3->_padding_;
      uStack_c8 = 0xffffffff;
      uStack_c4 = 1;
      local_e0 = pFVar3;
      if (param_2->MapSerialization == KeyValuePair) {
        puStack_f8 = FScriptMapHelper::GetPairPtr(&local_80,iVar7);
        pFStack_f0 = pFVar12->KeyProp;
        puStack_e8 = puStack_f8;
      }
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= &local_100) &&
          (&local_100 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar9;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar10 = (longlong)iVar7 * 0x40;
      *(ulonglong *)(pFVar4 + lVar10) = CONCAT71(uStack_ff,local_100);
      *(uchar **)(pFVar4 + lVar10 + 8) = puStack_f8;
      *(FProperty **)(pFVar4 + lVar10 + 0x10) = pFStack_f0;
      *(uchar **)(pFVar4 + lVar10 + 0x10 + 8) = puStack_e8;
      *(FProperty **)(pFVar4 + lVar10 + 0x20) = local_e0;
      *(longlong *)(pFVar4 + lVar10 + 0x20 + 8) = lStack_d8;
      *(longlong *)(pFVar4 + lVar10 + 0x30) = local_d0;
      *(ulonglong *)(pFVar4 + lVar10 + 0x30 + 8) = CONCAT44(uStack_c4,uStack_c8);
    }
  }
  return __return_storage_ptr__;
}

// GenerateStatesForIteratable<FSetProperty> @ 148b8b550

TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> * __cdecl
StructSerializer::GenerateStatesForIteratable<FSetProperty>
          (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FStructSerializerState *param_1,FStructSerializerPolicies *param_2)

{
  int *piVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  FProperty *pFVar13;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar14;
  uint uVar15;
  FScriptContainerElement local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uchar *puStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uchar *puStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  FScriptSetHelper local_58;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  pFVar13 = param_1->ValueProperty;
  if (((pFVar13 == (FProperty *)0x0) ||
      ((*(ulonglong *)(pFVar13->_padding_ + 0x18) & 0x800000000000) == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar13 = (FProperty *)0x0, bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  pvVar2 = param_1->ValueData;
  if ((pFVar13->ArrayDim < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar6))
  {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if ((pvVar2 == (void *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  local_58.ElementProp = (FProperty *)pFVar13[1]._padding_;
  local_58.SetLayout._0_8_ = pFVar13[1]._padding_;
  local_58.SetLayout._8_8_ = pFVar13[1]._padding_;
  local_58.SetLayout.SparseArrayLayout.Size = (int)pFVar13[1]._padding_;
  pTVar14 = (TScriptSparseSet<FDefaultSetAllocator> *)
            ((longlong)pFVar13->Offset_Internal + (longlong)pvVar2);
  local_58.Set = pTVar14;
  if ((local_58.ElementProp == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar11 = 1;
  if ((param_1->ElementIndex != -1) &&
     (uVar11 = (pTVar14->Elements).Data.ArrayNum - (pTVar14->Elements).NumFreeIndices,
     (int)uVar11 < 0)) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar11,&__return_storage_ptr__->AllocatorInstance,
               __return_storage_ptr__->ArrayNum,piVar1);
  }
  uVar11 = param_1->ElementIndex;
  if (uVar11 == 0xffffffff) {
    uVar11 = ((pTVar14->Elements).Data.ArrayNum - (pTVar14->Elements).NumFreeIndices) - 1;
    if (-1 < (int)uVar11) {
      bVar5 = (byte)uVar11 & 0x1f;
      uVar15 = 1 << bVar5 | 1U >> 0x20 - bVar5;
      do {
        if ((int)uVar11 < (pTVar14->Elements).AllocationFlags.NumBits) {
          if (((pTVar14->Elements).AllocationFlags.NumBits <= (int)uVar11) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          FVar12 = (pTVar14->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<unsigned_int>)&(pTVar14->Elements).AllocationFlags;
          if (FVar12 != (ForElementType<unsigned_int>)0x0) {
            FVar10 = FVar12;
          }
          if ((*(uint *)((longlong)FVar10 + (ulonglong)(uVar11 >> 5) * 4) & uVar15) != 0) {
            lVar9 = pFVar13[1]._padding_;
            puStack_80 = FScriptSetHelper::GetElementPtr(&local_58,uVar11);
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            uStack_90 = 0;
            uStack_88 = 0;
            lStack_70 = 0;
            local_98 = (FScriptContainerElement)0x0;
            local_68 = *(undefined8 *)(lVar9 + 8);
            uStack_60 = 0xffffffff;
            uStack_5c = 0;
            local_78 = lVar9;
            if (((pFVar3 <= &local_98) && (&local_98 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar8;
            }
            iVar7 = __return_storage_ptr__->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            __return_storage_ptr__->ArrayNum = iVar7 + 1;
            pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
            lVar9 = (longlong)iVar7 * 0x40;
            *(ulonglong *)(pFVar3 + lVar9) = CONCAT71(uStack_97,local_98);
            *(undefined8 *)(pFVar3 + lVar9 + 8) = uStack_90;
            *(undefined8 *)(pFVar3 + lVar9 + 0x10) = uStack_88;
            *(uchar **)(pFVar3 + lVar9 + 0x10 + 8) = puStack_80;
            *(longlong *)(pFVar3 + lVar9 + 0x20) = local_78;
            *(longlong *)(pFVar3 + lVar9 + 0x20 + 8) = lStack_70;
            *(undefined8 *)(pFVar3 + lVar9 + 0x30) = local_68;
            *(ulonglong *)(pFVar3 + lVar9 + 0x30 + 8) = CONCAT44(uStack_5c,uStack_60);
          }
        }
        uVar15 = uVar15 >> 1 | (uint)((uVar15 & 1) != 0) << 0x1f;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
  }
  else if ((-1 < (int)uVar11) && ((int)uVar11 < (pTVar14->Elements).AllocationFlags.NumBits)) {
    FVar12 = (pTVar14->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)&(pTVar14->Elements).AllocationFlags;
    }
    if ((*(uint *)((longlong)FVar12 +
                  (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) != 0) {
      lVar9 = pFVar13[1]._padding_;
      puStack_c0 = FScriptSetHelper::GetElementPtr(&local_58,param_1->ElementIndex);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      uStack_d0 = 0;
      uStack_c8 = 0;
      local_d8 = (FScriptContainerElement)0x0;
      lStack_b0 = 0;
      local_a8 = *(undefined8 *)(lVar9 + 8);
      uStack_a0 = 0xffffffff;
      uStack_9c = 1;
      local_b8 = lVar9;
      if (((pFVar3 <= &local_d8) && (&local_d8 < pFVar3 + (longlong)*piVar1 * 0x40)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar9 = (longlong)iVar7 * 0x40;
      *(ulonglong *)(pFVar3 + lVar9) = CONCAT71(uStack_d7,local_d8);
      *(undefined8 *)(pFVar3 + lVar9 + 8) = uStack_d0;
      *(undefined8 *)(pFVar3 + lVar9 + 0x10) = uStack_c8;
      *(uchar **)(pFVar3 + lVar9 + 0x10 + 8) = puStack_c0;
      *(longlong *)(pFVar3 + lVar9 + 0x20) = local_b8;
      *(longlong *)(pFVar3 + lVar9 + 0x20 + 8) = lStack_b0;
      *(undefined8 *)(pFVar3 + lVar9 + 0x30) = local_a8;
      *(ulonglong *)(pFVar3 + lVar9 + 0x30 + 8) = CONCAT44(uStack_9c,uStack_a0);
    }
  }
  return __return_storage_ptr__;
}

// HasDestinationJsonStringCharRepresentation<unsigned_short,char> @ 148b8ba60

bool __cdecl HasDestinationJsonStringCharRepresentation<unsigned_short,char>(char param_1)

{
  return '\x1f' < param_1;
}

// HasDestinationJsonStringCharRepresentation<unsigned_short,char8_t> @ 148b8ba70

bool __cdecl HasDestinationJsonStringCharRepresentation<unsigned_short,char8_t>(uchar param_1)

{
  return 0x1f < param_1;
}

// HasDestinationJsonStringCharRepresentation<unsigned_short,wchar_t> @ 148b8ba80

bool __cdecl HasDestinationJsonStringCharRepresentation<unsigned_short,wchar_t>(wchar_t param_1)

{
  return 0x1f < (ushort)param_1;
}

// InternalConstructor<UObjectTest> @ 148b8ba90

void __cdecl InternalConstructor<UObjectTest>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectTest__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UObjectTest> @ 148b8bac0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectTest>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UObjectTest::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UObjectTest__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UObjectTest> @ 148b8bb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectTest * __cdecl NewObject<UObjectTest>(UObject *param_1)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UObjectTest::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return (UObjectTest *)pUVar2;
}

// SerializeIterable<FArrayProperty> @ 148b8bc10

void __cdecl
StructSerializer::SerializeIterable<FArrayProperty>
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3,FStructSerializerPolicies *param_4)

{
  ulonglong uVar1;
  FStructSerializerState *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  UStruct *pUVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> local_28;
  
  uVar9 = (char)param_1->StateFlags & WritingContainerElement;
  if (param_1->HasBeenProcessed == false) {
    if (uVar9 == None) {
      uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
      if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
         (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
        (**(code **)((longlong)*param_3 + 8))(param_3,param_1);
      }
      else {
        (**(code **)*param_3)(param_3,param_1);
      }
    }
    if (((*(uint *)(param_1->ValueProperty->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (cVar10 = (**(code **)((longlong)*param_3 + 0x30))(param_3,param_1), cVar10 != '\0')) {
      return;
    }
    param_1->HasBeenProcessed = true;
    pFVar2 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + param_2->ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == param_2->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar12 + 1;
    pvVar6 = param_1->KeyData;
    pFVar16 = (param_2->AllocatorInstance).Data;
    lVar14 = (longlong)iVar12 * 0x40;
    *(undefined8 *)(pFVar16 + lVar14) = *(undefined8 *)param_1;
    *(void **)(pFVar16 + lVar14 + 8) = pvVar6;
    pvVar6 = param_1->ValueData;
    *(FProperty **)(pFVar16 + lVar14 + 0x10) = param_1->KeyProperty;
    *(void **)(pFVar16 + lVar14 + 0x10 + 8) = pvVar6;
    pUVar7 = param_1->ValueType;
    *(FProperty **)(pFVar16 + lVar14 + 0x20) = param_1->ValueProperty;
    *(UStruct **)(pFVar16 + lVar14 + 0x20 + 8) = pUVar7;
    uVar8 = *(undefined8 *)&param_1->ElementIndex;
    *(FFieldClass **)(pFVar16 + lVar14 + 0x30) = param_1->FieldType;
    *(undefined8 *)(pFVar16 + lVar14 + 0x30 + 8) = uVar8;
    GenerateStatesForIteratable<FArrayProperty>(&local_28,param_1,param_4);
    iVar12 = local_28.ArrayNum;
    pFVar16 = local_28.AllocatorInstance.Data + (longlong)iVar12 * 0x40;
    FVar15.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStructSerializerState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar16) break;
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= FVar15.Data) && (FVar15.Data < pFVar3 + (longlong)param_2->ArrayMax * 0x40))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == param_2->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar13 + 1;
      uVar8 = *(undefined8 *)(FVar15.Data + 8);
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar14 = (longlong)iVar13 * 0x40;
      *(undefined8 *)(pFVar4 + lVar14) = *(undefined8 *)FVar15.Data;
      *(undefined8 *)(pFVar4 + lVar14 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x18);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10) = *(undefined8 *)(FVar15.Data + 0x10);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x28);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20) = *(undefined8 *)(FVar15.Data + 0x20);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20 + 8) = uVar8;
      pFVar3 = FVar15.Data + 0x30;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x38);
      FVar15.Data = FVar15.Data + 0x40;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30) = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30 + 8) = uVar8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  else if (uVar9 == None) {
    uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
    if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
       (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
                    /* WARNING: Could not recover jumptable at 0x000148b8beca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*param_3 + 0x18))(param_3,param_1);
      return;
    }
    (**(code **)((longlong)*param_3 + 0x10))(param_3,param_1);
  }
  return;
}

// SerializeIterable<FMapProperty> @ 148b8bef0

void __cdecl
StructSerializer::SerializeIterable<FMapProperty>
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3,FStructSerializerPolicies *param_4)

{
  ulonglong uVar1;
  FStructSerializerState *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  UStruct *pUVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> local_28;
  
  uVar9 = (char)param_1->StateFlags & WritingContainerElement;
  if (param_1->HasBeenProcessed == false) {
    if (uVar9 == None) {
      uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
      if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
         (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
        (**(code **)((longlong)*param_3 + 8))(param_3,param_1);
      }
      else {
        (**(code **)*param_3)(param_3,param_1);
      }
    }
    if (((*(uint *)(param_1->ValueProperty->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (cVar10 = (**(code **)((longlong)*param_3 + 0x30))(param_3,param_1), cVar10 != '\0')) {
      return;
    }
    param_1->HasBeenProcessed = true;
    pFVar2 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + param_2->ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == param_2->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar12 + 1;
    pvVar6 = param_1->KeyData;
    pFVar16 = (param_2->AllocatorInstance).Data;
    lVar14 = (longlong)iVar12 * 0x40;
    *(undefined8 *)(pFVar16 + lVar14) = *(undefined8 *)param_1;
    *(void **)(pFVar16 + lVar14 + 8) = pvVar6;
    pvVar6 = param_1->ValueData;
    *(FProperty **)(pFVar16 + lVar14 + 0x10) = param_1->KeyProperty;
    *(void **)(pFVar16 + lVar14 + 0x10 + 8) = pvVar6;
    pUVar7 = param_1->ValueType;
    *(FProperty **)(pFVar16 + lVar14 + 0x20) = param_1->ValueProperty;
    *(UStruct **)(pFVar16 + lVar14 + 0x20 + 8) = pUVar7;
    uVar8 = *(undefined8 *)&param_1->ElementIndex;
    *(FFieldClass **)(pFVar16 + lVar14 + 0x30) = param_1->FieldType;
    *(undefined8 *)(pFVar16 + lVar14 + 0x30 + 8) = uVar8;
    GenerateStatesForIteratable<FMapProperty>(&local_28,param_1,param_4);
    iVar12 = local_28.ArrayNum;
    pFVar16 = local_28.AllocatorInstance.Data + (longlong)iVar12 * 0x40;
    FVar15.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStructSerializerState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar16) break;
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= FVar15.Data) && (FVar15.Data < pFVar3 + (longlong)param_2->ArrayMax * 0x40))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == param_2->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar13 + 1;
      uVar8 = *(undefined8 *)(FVar15.Data + 8);
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar14 = (longlong)iVar13 * 0x40;
      *(undefined8 *)(pFVar4 + lVar14) = *(undefined8 *)FVar15.Data;
      *(undefined8 *)(pFVar4 + lVar14 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x18);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10) = *(undefined8 *)(FVar15.Data + 0x10);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x28);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20) = *(undefined8 *)(FVar15.Data + 0x20);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20 + 8) = uVar8;
      pFVar3 = FVar15.Data + 0x30;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x38);
      FVar15.Data = FVar15.Data + 0x40;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30) = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30 + 8) = uVar8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  else if (uVar9 == None) {
    uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
    if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
       (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
                    /* WARNING: Could not recover jumptable at 0x000148b8c1aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*param_3 + 0x18))(param_3,param_1);
      return;
    }
    (**(code **)((longlong)*param_3 + 0x10))(param_3,param_1);
  }
  return;
}

// SerializeIterable<FSetProperty> @ 148b8c1d0

void __cdecl
StructSerializer::SerializeIterable<FSetProperty>
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3,FStructSerializerPolicies *param_4)

{
  ulonglong uVar1;
  FStructSerializerState *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  UStruct *pUVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> local_28;
  
  uVar9 = (char)param_1->StateFlags & WritingContainerElement;
  if (param_1->HasBeenProcessed == false) {
    if (uVar9 == None) {
      uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
      if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
         (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
        (**(code **)((longlong)*param_3 + 8))(param_3,param_1);
      }
      else {
        (**(code **)*param_3)(param_3,param_1);
      }
    }
    if (((*(uint *)(param_1->ValueProperty->_padding_ + 0x18) >> 0x15 & 1) != 0) &&
       (cVar10 = (**(code **)((longlong)*param_3 + 0x30))(param_3,param_1), cVar10 != '\0')) {
      return;
    }
    param_1->HasBeenProcessed = true;
    pFVar2 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= param_1) && (param_1 < pFVar2 + param_2->ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == param_2->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar12 + 1;
    pvVar6 = param_1->KeyData;
    pFVar16 = (param_2->AllocatorInstance).Data;
    lVar14 = (longlong)iVar12 * 0x40;
    *(undefined8 *)(pFVar16 + lVar14) = *(undefined8 *)param_1;
    *(void **)(pFVar16 + lVar14 + 8) = pvVar6;
    pvVar6 = param_1->ValueData;
    *(FProperty **)(pFVar16 + lVar14 + 0x10) = param_1->KeyProperty;
    *(void **)(pFVar16 + lVar14 + 0x10 + 8) = pvVar6;
    pUVar7 = param_1->ValueType;
    *(FProperty **)(pFVar16 + lVar14 + 0x20) = param_1->ValueProperty;
    *(UStruct **)(pFVar16 + lVar14 + 0x20 + 8) = pUVar7;
    uVar8 = *(undefined8 *)&param_1->ElementIndex;
    *(FFieldClass **)(pFVar16 + lVar14 + 0x30) = param_1->FieldType;
    *(undefined8 *)(pFVar16 + lVar14 + 0x30 + 8) = uVar8;
    GenerateStatesForIteratable<FSetProperty>(&local_28,param_1,param_4);
    iVar12 = local_28.ArrayNum;
    pFVar16 = local_28.AllocatorInstance.Data + (longlong)iVar12 * 0x40;
    FVar15.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStructSerializerState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar16) break;
      pFVar3 = (param_2->AllocatorInstance).Data;
      if (((pFVar3 <= FVar15.Data) && (FVar15.Data < pFVar3 + (longlong)param_2->ArrayMax * 0x40))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar13 = param_2->ArrayNum;
      if (iVar13 == param_2->ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar13 + 1;
      uVar8 = *(undefined8 *)(FVar15.Data + 8);
      pFVar4 = (param_2->AllocatorInstance).Data;
      lVar14 = (longlong)iVar13 * 0x40;
      *(undefined8 *)(pFVar4 + lVar14) = *(undefined8 *)FVar15.Data;
      *(undefined8 *)(pFVar4 + lVar14 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x18);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10) = *(undefined8 *)(FVar15.Data + 0x10);
      *(undefined8 *)(pFVar4 + lVar14 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x28);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20) = *(undefined8 *)(FVar15.Data + 0x20);
      *(undefined8 *)(pFVar4 + lVar14 + 0x20 + 8) = uVar8;
      pFVar3 = FVar15.Data + 0x30;
      uVar8 = *(undefined8 *)(FVar15.Data + 0x38);
      FVar15.Data = FVar15.Data + 0x40;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30) = *(undefined8 *)pFVar3;
      *(undefined8 *)(pFVar4 + lVar14 + 0x30 + 8) = uVar8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  else if (uVar9 == None) {
    uVar1 = *(ulonglong *)(param_1->ValueProperty->_padding_ + 0x18);
    if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
       (((uVar1 >> 0x2e & 1) == 0 || (param_4->MapSerialization != Array)))) {
                    /* WARNING: Could not recover jumptable at 0x000148b8c48a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((longlong)*param_3 + 0x18))(param_3,param_1);
      return;
    }
    (**(code **)((longlong)*param_3 + 0x10))(param_3,param_1);
  }
  return;
}

// SetPropertyValue<FBoolProperty,bool> @ 148b8c4b0

bool __cdecl
StructDeserializerBackendUtilities::SetPropertyValue<FBoolProperty,bool>
          (FBoolProperty *param_1,FProperty *param_2,void *param_3,int param_4,bool *param_5)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  ulonglong uVar6;
  
  pvVar5 = GetPropertyValuePtr((FProperty *)param_1,param_2,param_3,param_4);
  if (pvVar5 == (void *)0x0) {
    return false;
  }
  bVar1 = *param_5;
  if (param_1->FieldSize == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xa61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar6 = (ulonglong)param_1->ByteOffset;
  if (bVar1 != false) {
    *(byte *)(uVar6 + (longlong)pvVar5) =
         ~param_1->FieldMask & *(byte *)(uVar6 + (longlong)pvVar5) | param_1->ByteMask;
    return true;
  }
  *(byte *)(uVar6 + (longlong)pvVar5) = ~param_1->FieldMask & *(byte *)(uVar6 + (longlong)pvVar5);
  return true;
}

// SetPropertyValue<FSoftClassProperty,FSoftObjectPtr> @ 148b8c560

bool __cdecl
StructDeserializerBackendUtilities::SetPropertyValue<FSoftClassProperty,FSoftObjectPtr>
          (FSoftClassProperty *param_1,FProperty *param_2,void *param_3,int param_4,
          FSoftObjectPtr *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = GetPropertyValuePtr((FProperty *)param_1,param_2,param_3,param_4);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *(undefined8 *)param_5;
    uVar1 = *(undefined8 *)&param_5->field_0x10;
    puVar2[1] = *(undefined8 *)&param_5->field_0x8;
    puVar2[2] = uVar1;
    FUtf8String::operator=((FUtf8String *)(puVar2 + 3),(FUtf8String *)&param_5->field_0x18);
    return true;
  }
  return false;
}

// SetPropertyValue<FSoftObjectProperty,FSoftObjectPtr> @ 148b8c5a0

bool __cdecl
StructDeserializerBackendUtilities::SetPropertyValue<FSoftObjectProperty,FSoftObjectPtr>
          (FSoftObjectProperty *param_1,FProperty *param_2,void *param_3,int param_4,
          FSoftObjectPtr *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = GetPropertyValuePtr((FProperty *)param_1,param_2,param_3,param_4);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *(undefined8 *)param_5;
    uVar1 = *(undefined8 *)&param_5->field_0x10;
    puVar2[1] = *(undefined8 *)&param_5->field_0x8;
    puVar2[2] = uVar1;
    FUtf8String::operator=((FUtf8String *)(puVar2 + 3),(FUtf8String *)&param_5->field_0x18);
    return true;
  }
  return false;
}

// WritePropertyValue<float> @ 148b99a40

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<float>
          (FCborWriter *param_1,FStructSerializerState *param_2,float *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b99b89;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b99ac4;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b99ac4;
  }
  else {
LAB_148b99ac4:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b99b89;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,*param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b99b89:
  FCborWriter::WriteValue(param_1,*param_3);
  return;
}

// WritePropertyValue<double> @ 148b99f70

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<double>
          (FCborWriter *param_1,FStructSerializerState *param_2,double *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9a0b9;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b99ff4;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b99ff4;
  }
  else {
LAB_148b99ff4:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9a0b9;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,*param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9a0b9:
  FCborWriter::WriteValue(param_1,*param_3);
  return;
}

// WritePropertyValue<FAnsiString> @ 148b9a4a0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<FAnsiString>
          (FCborWriter *param_1,FStructSerializerState *param_2,FAnsiString *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9a5e7;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b9a523;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b9a523;
  }
  else {
LAB_148b9a523:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9a5e7;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9a5e7:
  FCborWriter::WriteValue(param_1,param_3);
  return;
}

// WritePropertyValue<FString> @ 148b9a610

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<FString>
          (FCborWriter *param_1,FStructSerializerState *param_2,FString *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9a757;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b9a693;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b9a693;
  }
  else {
LAB_148b9a693:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9a757;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9a757:
  FCborWriter::WriteValue(param_1,param_3);
  return;
}

// WritePropertyValue<FUtf8String> @ 148b9aba0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<FUtf8String>
          (FCborWriter *param_1,FStructSerializerState *param_2,FUtf8String *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9ace7;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b9ac23;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b9ac23;
  }
  else {
LAB_148b9ac23:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9ace7;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9ace7:
  FCborWriter::WriteValue(param_1,param_3);
  return;
}

// WritePropertyValue<__int64> @ 148b9ad10

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<__int64>
          (FCborWriter *param_1,FStructSerializerState *param_2,long64 *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9ae58;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b9ad94;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b9ad94;
  }
  else {
LAB_148b9ad94:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9ae58;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,*param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9ae58:
  FCborWriter::WriteValue(param_1,*param_3);
  return;
}

// WritePropertyValue<bool> @ 148b9b600

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WritePropertyValue<bool>
          (FCborWriter *param_1,FStructSerializerState *param_2,bool *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148b9b748;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148b9b684;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148b9b684;
  }
  else {
LAB_148b9b684:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148b9b748;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteValue(param_1,*param_3);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148b9b748:
  FCborWriter::WriteValue(param_1,*param_3);
  return;
}

// operator() @ 148ba1c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`StructSerializerTest::CopyKeys<FString,FStructSerializerBuiltinTestStruct>'::__l2::<lambda_1>::
operator()(void *this,TTuple<FString,FStructSerializerBuiltinTestStruct> *param_1)

{
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  *this_00;
  FStructSerializerBuiltinTestStruct local_d8;
  
  this_00 = *(TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
              **)this;
  local_d8.Guid.A = 0;
  local_d8.Guid.B = 0;
  local_d8.Guid.C = 0;
  local_d8.Guid.D = 0;
  local_d8.Name.ComparisonIndex.Value = 0;
  local_d8.Name.Number = 0;
  local_d8.String.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.String.Data.ArrayNum = 0;
  local_d8.String.Data.ArrayMax = 0;
  FText::FText(&local_d8.Text);
  local_d8.Vector4.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_d8.Vector4.field0_0x0._s_0.W = _UNK_15061cbc8;
  local_d8.Vector4.field0_0x0._s_0.X = 0.0;
  local_d8.Vector4.field0_0x0._s_0.Y = 0.0;
  local_d8.Datetime.Ticks = 0;
  local_d8.Timespan.Ticks = 0;
  TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
  ::Emplace<FString_const_&,FStructSerializerBuiltinTestStruct>
            (this_00,(FString *)param_1,&local_d8);
  if (local_d8.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.Text.TextData.Reference + 0x10))();
  }
  if (local_d8.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.String.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 148ba1cf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<bool_(__cdecl*)(FProperty_const_*,FProperty_const_*),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6A_NPEBVFProperty__0_Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1d30

void * __thiscall
TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>::_scalar_deleting_destructor_
          (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__TJsonWriter_GU__TPrettyJsonPrintPolicy_G____6B_;
  pFVar1 = (this->Stack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1d80

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,SharedPointerInternals::DefaultDeleter<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1dc0

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void * __thiscall
FCborStructDeserializerBackend::_scalar_deleting_destructor_
          (FCborStructDeserializerBackend *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCborStructDeserializerBackend__6B_;
  pFVar1 = (this->LastMapKey).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastContext).RawTextValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCborReader::~FCborReader(&this->CborReader);
  this->_padding_ = (longlong)&___7IStructDeserializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1e30

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void * __thiscall
FCborStructSerializerBackend::_scalar_deleting_destructor_
          (FCborStructSerializerBackend *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FCborStructSerializerBackend__6B_;
  pFVar1 = (this->AccumulatedBytes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCborWriter::~FCborWriter(&this->CborWriter);
  this->_padding_ = (longlong)&___7IStructSerializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1ea0

void * __thiscall
FJsonStructDeserializerBackend::_scalar_deleting_destructor_
          (FJsonStructDeserializerBackend *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonReader).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->LastIdentifier).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IStructDeserializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1f00

/* WARNING: Enum "EStructSerializerBackendFlags": Some values do not have unique names */

void * __thiscall
FJsonStructSerializerBackend::_scalar_deleting_destructor_
          (FJsonStructSerializerBackend *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->JsonWriter).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IStructSerializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1f50

void * __thiscall
IStructDeserializerBackend::_scalar_deleting_destructor_
          (IStructDeserializerBackend *this,uint param_1)

{
  *this = (IStructDeserializerBackend)&___7IStructDeserializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1f90

void * __thiscall
IStructSerializerBackend::_scalar_deleting_destructor_(IStructSerializerBackend *this,uint param_1)

{
  *this = (IStructSerializerBackend)&___7IStructSerializerBackend__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ba1fd0

void * __thiscall UObjectTest::_scalar_deleting_destructor_(UObjectTest *this,uint param_1)

{
  *(undefined ***)this = &___7UObjectTest__6B_;
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

// BeginIteratable @ 148ba26c0

void __cdecl
StructSerializer::BeginIteratable
          (IStructSerializerBackend *param_1,FStructSerializerState *param_2,
          FStructSerializerPolicies *param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2->ValueProperty->_padding_ + 0x18);
  if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
     (((uVar1 >> 0x2e & 1) == 0 || (param_3->MapSerialization != Array)))) {
                    /* WARNING: Could not recover jumptable at 0x000148ba26eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ba26f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}

// ClearPropertyValue @ 148ba2aa0

bool __cdecl
StructDeserializerBackendUtilities::ClearPropertyValue
          (FProperty *param_1,FProperty *param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  TScriptArray<TMemoryImageAllocator<0>_> *this;
  void *_Dst;
  byte bVar10;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
    if ((FProperty *)param_2[1]._padding_ != param_1) {
      return false;
    }
    _Dst = (void *)0x0;
    if ((param_2->ArrayDim < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((param_3 == (void *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    iVar1 = param_2->Offset_Internal;
    lVar4 = param_2[1]._padding_;
    uVar7 = (**(code **)(*(longlong *)param_2[1]._padding_ + 0x168))();
    plVar2 = (longlong *)param_2[1]._padding_;
    this = (TScriptArray<TMemoryImageAllocator<0>_> *)((longlong)iVar1 + (longlong)param_3);
    iVar1 = *(int *)((longlong)plVar2 + 0x34);
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if ((plVar2 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    param_4 = this->ArrayNum;
    iVar8 = param_4 + 1;
    this->ArrayNum = iVar8;
    bVar10 = (byte)lVar4 & 1;
    if (bVar10 == 0) {
      if (this->ArrayMax < iVar8) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this,param_4,iVar1,uVar7);
      }
    }
    else if (this->ArrayMax < iVar8) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(this,param_4,iVar1,uVar7);
    }
    if (this->ArrayNum != 0) {
      uVar9 = this->_padding_;
      if ((bVar10 != 0) && ((uVar9 & 1) != 0)) {
        uVar9 = (longlong)&this->_padding_ + ((longlong)uVar9 >> 0x18);
      }
      _Dst = (void *)((longlong)iVar1 * (longlong)param_4 + uVar9);
    }
    if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar2 + 0x150))(plVar2,_Dst);
    }
    else {
      memset(_Dst,0,(longlong)iVar1);
    }
  }
  FProperty::ClearValue_InContainer(param_1,param_3,param_4);
  return true;
}

// CreateItemState @ 148ba2e90

FStructSerializerState * __cdecl
StructSerializer::CreateItemState
          (FStructSerializerState *__return_storage_ptr__,FScriptArrayHelper *param_1,
          FArrayProperty *param_2,int param_3,FStructSerializerPolicies *param_4,
          EStructSerializerStateFlags param_5)

{
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar1;
  FProperty *pFVar2;
  ulonglong uVar3;
  void *pvVar4;
  
  pTVar1 = (param_1->field1_0x8).FreezableArray;
  pFVar2 = param_2->Inner;
  if (pTVar1->ArrayNum == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    uVar3 = pTVar1->_padding_;
    if (((param_1->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar3 & 1) != 0)) {
      uVar3 = (longlong)&pTVar1->_padding_ + ((longlong)uVar3 >> 0x18);
    }
    pvVar4 = (void *)((longlong)param_1->ElementSize * (longlong)param_3 + uVar3);
  }
  __return_storage_ptr__->FieldType = (FFieldClass *)pFVar2->_padding_;
  __return_storage_ptr__->StateFlags = param_5;
  __return_storage_ptr__->HasBeenProcessed = false;
  __return_storage_ptr__->KeyData = (void *)0x0;
  __return_storage_ptr__->KeyProperty = (FProperty *)0x0;
  __return_storage_ptr__->ValueData = pvVar4;
  __return_storage_ptr__->ValueProperty = pFVar2;
  __return_storage_ptr__->ValueType = (UStruct *)0x0;
  __return_storage_ptr__->ElementIndex = -1;
  return __return_storage_ptr__;
}

// CreateItemState @ 148ba2f10

FStructSerializerState * __cdecl
StructSerializer::CreateItemState
          (FStructSerializerState *__return_storage_ptr__,FScriptMapHelper *param_1,
          FMapProperty *param_2,int param_3,FStructSerializerPolicies *param_4,
          EStructSerializerStateFlags param_5)

{
  FProperty *pFVar1;
  uchar *puVar2;
  
  pFVar1 = param_2->ValueProp;
  puVar2 = FScriptMapHelper::GetPairPtr(param_1,param_3);
  __return_storage_ptr__->ValueData = puVar2;
  __return_storage_ptr__->FieldType = (FFieldClass *)pFVar1->_padding_;
  __return_storage_ptr__->StateFlags = param_5;
  __return_storage_ptr__->HasBeenProcessed = false;
  __return_storage_ptr__->KeyData = (void *)0x0;
  __return_storage_ptr__->KeyProperty = (FProperty *)0x0;
  __return_storage_ptr__->ValueProperty = pFVar1;
  __return_storage_ptr__->ValueType = (UStruct *)0x0;
  __return_storage_ptr__->ElementIndex = -1;
  if (param_4->MapSerialization == KeyValuePair) {
    puVar2 = FScriptMapHelper::GetPairPtr(param_1,param_3);
    __return_storage_ptr__->KeyData = puVar2;
    __return_storage_ptr__->ValueData = puVar2;
    __return_storage_ptr__->KeyProperty = param_2->KeyProp;
  }
  return __return_storage_ptr__;
}

// CreateItemState @ 148ba2fc0

FStructSerializerState * __cdecl
StructSerializer::CreateItemState
          (FStructSerializerState *__return_storage_ptr__,FScriptSetHelper *param_1,
          FSetProperty *param_2,int param_3,FStructSerializerPolicies *param_4,
          EStructSerializerStateFlags param_5)

{
  FProperty *pFVar1;
  uchar *puVar2;
  
  pFVar1 = param_2->ElementProp;
  puVar2 = FScriptSetHelper::GetElementPtr(param_1,param_3);
  __return_storage_ptr__->ValueData = puVar2;
  __return_storage_ptr__->FieldType = (FFieldClass *)pFVar1->_padding_;
  __return_storage_ptr__->StateFlags = param_5;
  __return_storage_ptr__->ValueProperty = pFVar1;
  __return_storage_ptr__->HasBeenProcessed = false;
  __return_storage_ptr__->KeyData = (void *)0x0;
  __return_storage_ptr__->KeyProperty = (FProperty *)0x0;
  __return_storage_ptr__->ValueType = (UStruct *)0x0;
  __return_storage_ptr__->ElementIndex = -1;
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeSerialization_init @ 148ba7d00

void __cdecl EmptyLinkFunctionForGeneratedCodeSerialization_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes @ 148ba7d10

void __cdecl EmptyLinkFunctionForGeneratedCodeStructSerializerTestTypes(void)

{
  return;
}

// EndIteratable @ 148ba7d70

void __cdecl
StructSerializer::EndIteratable
          (IStructSerializerBackend *param_1,FStructSerializerState *param_2,
          FStructSerializerPolicies *param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2->ValueProperty->_padding_ + 0x18);
  if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
     (((uVar1 >> 0x2e & 1) == 0 || (param_3->MapSerialization != Array)))) {
                    /* WARNING: Could not recover jumptable at 0x000148ba7d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_1 + 0x18))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148ba7da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x10))();
  return;
}

// FindClass @ 148ba7ee0

UStruct * __cdecl StructDeserializer::FindClass(FReadState *param_1)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  
  pFVar1 = param_1->Property;
  if (pFVar1 == (FProperty *)0x0) {
    return *(UStruct **)((longlong)param_1->Data + 0x10);
  }
  if (((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x15 & 1) == 0) ||
     (pFVar1 = (FProperty *)pFVar1[1]._padding_, pFVar1 != (FProperty *)0x0)) {
    plVar2 = &pFVar1->_padding_;
    pFVar3 = pFVar1;
    if ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x14 & 1) == 0) goto LAB_148ba7f04;
LAB_148ba7f0c:
    if ((*(uint *)(*plVar2 + 0x18) >> 0x1a & 1) != 0) goto LAB_148ba7f1b;
  }
  else {
    plVar2 = (longlong *)&DAT_00000008;
LAB_148ba7f04:
    pFVar3 = (FProperty *)0x0;
    if (pFVar1 != (FProperty *)0x0) goto LAB_148ba7f0c;
  }
  pFVar1 = (FProperty *)0x0;
LAB_148ba7f1b:
  if (pFVar3 != (FProperty *)0x0) {
    return (UStruct *)pFVar3[1]._padding_;
  }
  if (pFVar1 == (FProperty *)0x0) {
    return (UStruct *)0x0;
  }
  return (UStruct *)pFVar1[1]._padding_;
}

// GenerateStructureArrayStates @ 148ba7f60

TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> * __cdecl
StructSerializer::GenerateStructureArrayStates
          (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FStructSerializerState *param_1,FStructSerializerPolicies *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  FScriptContainerElement local_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 local_38;
  void *pvStack_30;
  FProperty *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  int iStack_10;
  undefined4 uStack_c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = param_1->ValueProperty->ArrayDim;
  while( true ) {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return __return_storage_ptr__;
    }
    pvStack_30 = param_1->ValueData;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_28 = param_1->ValueProperty;
    local_48 = (FScriptContainerElement)0x0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_c = 0;
    iStack_10 = iVar1;
    if (((pFVar2 <= &local_48) &&
        (&local_48 < pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) break;
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    lVar7 = (longlong)iVar5 * 0x40;
    *(ulonglong *)(pFVar2 + lVar7) = CONCAT71(uStack_47,local_48);
    *(undefined8 *)(pFVar2 + lVar7 + 8) = uStack_40;
    *(undefined8 *)(pFVar2 + lVar7 + 0x10) = local_38;
    *(void **)(pFVar2 + lVar7 + 0x10 + 8) = pvStack_30;
    *(FProperty **)(pFVar2 + lVar7 + 0x20) = local_28;
    *(undefined8 *)(pFVar2 + lVar7 + 0x20 + 8) = uStack_20;
    *(undefined8 *)(pFVar2 + lVar7 + 0x30) = local_18;
    *(ulonglong *)(pFVar2 + lVar7 + 0x30 + 8) = CONCAT44(uStack_c,iStack_10);
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
  return pTVar6;
}

// GenerateStructureStates @ 148ba80e0

TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> * __cdecl
StructSerializer::GenerateStructureStates
          (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FStructSerializerState *param_1,FStructSerializerPolicies *param_2)

{
  ulonglong uVar1;
  FFieldClass *pFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FFieldClass *pFVar10;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  void *pvVar15;
  FProperty *local_res8;
  FField *local_res10;
  TFieldIterator<FProperty> local_98;
  FScriptContainerElement local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_68;
  void *pvStack_60;
  FField *local_58;
  longlong lStack_50;
  FFieldClass *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pvVar15 = param_1->ValueData;
  if (param_1->ValueType == (UStruct *)0x0) {
    return __return_storage_ptr__;
  }
  if (param_1->ValueProperty == (FProperty *)0x0) goto LAB_148ba81ff;
  uVar1 = param_1->ValueProperty->_padding_;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 != 0) &&
       (pFVar2 = *(FFieldClass **)(uVar1 + 8), pFVar10 = FArrayProperty::StaticClass(),
       pFVar2 == pFVar10)) goto LAB_148ba81ff;
  }
  else if (((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0) &&
          (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  iVar9 = param_1->ElementIndex;
  pFVar3 = param_1->ValueProperty;
  pvVar15 = param_1->ValueData;
  if (iVar9 == -1) {
    iVar9 = 0;
LAB_148ba8189:
    if (pFVar3->ArrayDim <= iVar9) goto LAB_148ba818e;
  }
  else {
    if (-1 < iVar9) goto LAB_148ba8189;
LAB_148ba818e:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
  }
  if ((pvVar15 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  pvVar15 = (void *)((longlong)pvVar15 +
                    (longlong)pFVar3->Offset_Internal +
                    (longlong)iVar9 * (longlong)pFVar3->ElementSize);
LAB_148ba81ff:
  local_98.Struct = param_1->ValueType;
  if (local_98.Struct == (UStruct *)0x0) {
    local_98.Field = (FField *)0x0;
  }
  else {
    local_98.Field = (local_98.Struct)->ChildProperties;
  }
  local_98.InterfaceIndex = -1;
  local_98.bIncludeSuper = true;
  local_98.bIncludeDeprecated = true;
  local_98.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_98);
  pFVar6 = local_98.Field;
  do {
    if (pFVar6 == (FField *)0x0) {
      return __return_storage_ptr__;
    }
    local_98.Field = pFVar6;
    if (*(void **)&param_2->PropertyFilter == (void *)0x0) {
LAB_148ba828d:
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      uStack_70 = 0;
      local_68 = 0;
      lStack_50 = 0;
      uStack_3c = 0;
      local_78 = (FScriptContainerElement)0x0;
      uStack_40 = 0xffffffff;
      local_48 = pFVar6->ClassPrivate;
      pvStack_60 = pvVar15;
      local_58 = pFVar6;
      if (((pFVar4 <= &local_78) &&
          (&local_78 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x40)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar11;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar14 = (longlong)iVar9 * 0x40;
      *(ulonglong *)(pFVar4 + lVar14) = CONCAT71(uStack_77,local_78);
      *(undefined8 *)(pFVar4 + lVar14 + 8) = uStack_70;
      *(undefined8 *)(pFVar4 + lVar14 + 0x10) = local_68;
      *(void **)(pFVar4 + lVar14 + 0x10 + 8) = pvStack_60;
      *(FField **)(pFVar4 + lVar14 + 0x20) = local_58;
      *(longlong *)(pFVar4 + lVar14 + 0x20 + 8) = lStack_50;
      *(FFieldClass **)(pFVar4 + lVar14 + 0x30) = local_48;
      *(ulonglong *)(pFVar4 + lVar14 + 0x30 + 8) = CONCAT44(uStack_3c,uStack_40);
    }
    else {
      local_res8 = param_1->ValueProperty;
      local_res10 = pFVar6;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_2->PropertyFilter);
      plVar13 = *(longlong **)&(param_2->PropertyFilter).field_0x28;
      pcVar5 = *(code **)&param_2->PropertyFilter;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)&(param_2->PropertyFilter).field_0x10;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar8 = (*pcVar5)(uVar12,&local_res10,&local_res8);
      if (cVar8 != '\0') goto LAB_148ba828d;
    }
    local_98.Field = pFVar6->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_98);
    pFVar6 = local_98.Field;
  } while( true );
}

// GetPropertyValuePtr @ 148ba8c00

void * __cdecl
StructDeserializerBackendUtilities::GetPropertyValuePtr
          (FProperty *param_1,FProperty *param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  ulonglong uVar10;
  TScriptArray<TMemoryImageAllocator<0>_> *this;
  byte bVar11;
  void *_Dst;
  size_t _Size;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\Backends\\StructDeserializerBackendUtilities.h"
                         ,0x3a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pvVar9 = (void *)(*pcVar5)();
    return pvVar9;
  }
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (param_4 < param_1->ArrayDim) {
      if ((param_4 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pvVar9 = (void *)(*pcVar5)();
        return pvVar9;
      }
      if ((param_3 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pvVar9 = (void *)(*pcVar5)();
        return pvVar9;
      }
      return (void *)((longlong)param_3 +
                     (longlong)param_1->Offset_Internal +
                     (longlong)param_1->ElementSize * (longlong)param_4);
    }
  }
  else if ((FProperty *)param_2[1]._padding_ == param_1) {
    pvVar9 = (void *)0x0;
    if ((param_2->ArrayDim < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
    if ((param_3 == (void *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
    iVar2 = param_2->Offset_Internal;
    lVar6 = param_2[1]._padding_;
    uVar8 = (**(code **)(*(longlong *)param_2[1]._padding_ + 0x168))();
    plVar4 = (longlong *)param_2[1]._padding_;
    this = (TScriptArray<TMemoryImageAllocator<0>_> *)((longlong)iVar2 + (longlong)param_3);
    iVar2 = *(int *)((longlong)plVar4 + 0x34);
    _Size = (size_t)iVar2;
    if ((iVar2 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
    if ((plVar4 == (longlong *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
    iVar3 = this->ArrayNum;
    iVar1 = iVar3 + 1;
    this->ArrayNum = iVar1;
    bVar11 = (byte)lVar6 & 1;
    if (bVar11 == 0) {
      if (this->ArrayMax < iVar1) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this,iVar3,iVar2,uVar8);
      }
    }
    else if (this->ArrayMax < iVar1) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow(this,iVar3,iVar2,uVar8);
    }
    _Dst = pvVar9;
    if (this->ArrayNum != 0) {
      uVar10 = this->_padding_;
      if ((bVar11 != 0) && ((uVar10 & 1) != 0)) {
        uVar10 = (longlong)&this->_padding_ + ((longlong)uVar10 >> 0x18);
      }
      _Dst = (void *)((longlong)iVar3 * _Size + uVar10);
    }
    if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar4 + 0x150))(plVar4,_Dst);
    }
    else {
      memset(_Dst,0,_Size);
    }
    if (this->ArrayNum != 0) {
      uVar10 = this->_padding_;
      if ((bVar11 != 0) && ((uVar10 & 1) != 0)) {
        uVar10 = (longlong)&this->_padding_ + ((longlong)uVar10 >> 0x18);
      }
      pvVar9 = (void *)((longlong)iVar3 * _Size + uVar10);
    }
    return pvVar9;
  }
  return (void *)0x0;
}

// GetValueType @ 148ba8f20

UStruct * __cdecl StructSerializer::GetValueType(FStructSerializerState *param_1)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  
  pFVar1 = param_1->ValueProperty;
  if ((pFVar1 != (FProperty *)0x0) &&
     ((uVar2 = *(ulonglong *)(pFVar1->_padding_ + 0x18), (uVar2 >> 0x14 & 1) != 0 ||
      ((uVar2 >> 0x1a & 1) != 0)))) {
    return (UStruct *)pFVar1[1]._padding_;
  }
  return (UStruct *)0x0;
}

// IsArrayLike @ 148ba8f80

bool __cdecl StructSerializer::IsArrayLike(FProperty *param_1,FStructSerializerPolicies *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if ((((uVar1 >> 0x15 & 1) == 0) && ((uVar1 >> 0x2f & 1) == 0)) &&
     (((uVar1 >> 0x2e & 1) == 0 || (param_2->MapSerialization != Array)))) {
    return false;
  }
  return true;
}

// IsLWCType @ 148ba8fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl StructSerializationUtilities::IsLWCType(UStruct *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  initializer_list<FName> local_88;
  FName local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  FName local_20;
  FName local_18 [2];
  
  local_18[0] = (FName)(__security_cookie.value ^ (ulonglong)auStack_b8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_78.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
    local_78.Number = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_70 = *(undefined4 *)CONCAT44(extraout_var_00,FVar4.Value);
    local_6c = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_68 = *(undefined4 *)CONCAT44(extraout_var_01,FVar4.Value);
    local_64 = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_60 = *(undefined4 *)CONCAT44(extraout_var_02,FVar4.Value);
    local_5c = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_58 = *(undefined4 *)CONCAT44(extraout_var_03,FVar4.Value);
    local_54 = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_50 = *(undefined4 *)CONCAT44(extraout_var_04,FVar4.Value);
    local_4c = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_48 = *(undefined4 *)CONCAT44(extraout_var_05,FVar4.Value);
    local_44 = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_40 = *(undefined4 *)CONCAT44(extraout_var_06,FVar4.Value);
    local_3c = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_38 = *(undefined4 *)CONCAT44(extraout_var_07,FVar4.Value);
    local_34 = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_30 = *(undefined4 *)CONCAT44(extraout_var_08,FVar4.Value);
    local_2c = 0;
    FVar4 = FNameEntryId::FromValidEName((EName)local_98);
    local_28 = *(undefined4 *)CONCAT44(extraout_var_09,FVar4.Value);
    local_24 = 0;
    ::FName::FName(&local_20,L"OrientedBox");
    local_88._First = &local_78;
    local_88._Last = local_18;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&LWCTypes,&local_88);
    atexit(`StructSerializationUtilities::IsLWCType'::__l2::
           _dynamic_atexit_destructor_for__LWCTypes__);
    _Init_thread_footer(&::_TSS0);
  }
  if (param_1 == (UStruct *)0x0) {
    bVar6 = false;
  }
  else {
    lVar1 = param_1->_padding_;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
    if (LWCTypes.Elements._8_4_ != LWCTypes.Elements._52_4_) {
      FVar5 = (ForElementType<FSetElementId>)0x1552601c8;
      if (LWCTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar5 = LWCTypes.Hash.SecondaryData;
      }
      for (iVar3 = *(int *)((longlong)FVar5 +
                           (ulonglong)
                           (LWCTypes.HashSize - 1U & (int)((ulonglong)lVar1 >> 0x20) + uVar2) * 4);
          iVar3 != -1; iVar3 = *(int *)(LWCTypes.Elements._0_8_ + 8 + (longlong)iVar3 * 0x10)) {
        if (*(longlong *)(LWCTypes.Elements._0_8_ + (longlong)iVar3 * 0x10) == lVar1)
        goto LAB_148ba906e;
      }
    }
    iVar3 = -1;
LAB_148ba906e:
    bVar6 = iVar3 != -1;
  }
  return bVar6;
}

// Serialize @ 148bacf40

void __cdecl
StructSerializer::Serialize
          (FStructSerializerState *param_1,IStructSerializerBackend *param_2,
          FStructSerializerPolicies *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  void *pvVar3;
  UStruct *pUVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  longlong lVar8;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> local_f8;
  FStructSerializerState local_e8;
  undefined1 local_a8;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_67;
  undefined2 local_63;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x840,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
  pvVar3 = param_1->KeyData;
  local_a7 = 0;
  local_a3 = 0;
  local_a1 = 0;
  local_f8.ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x40;
  local_a8 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar8) = *(undefined8 *)param_1;
  *(void **)(local_f8.AllocatorInstance.Data + lVar8 + 8) = pvVar3;
  pvVar3 = param_1->ValueData;
  *(FProperty **)(local_f8.AllocatorInstance.Data + lVar8 + 0x10) = param_1->KeyProperty;
  *(void **)(local_f8.AllocatorInstance.Data + lVar8 + 0x10 + 8) = pvVar3;
  pUVar4 = param_1->ValueType;
  *(FProperty **)(local_f8.AllocatorInstance.Data + lVar8 + 0x20) = param_1->ValueProperty;
  *(UStruct **)(local_f8.AllocatorInstance.Data + lVar8 + 0x20 + 8) = pUVar4;
  uVar5 = *(undefined8 *)&param_1->ElementIndex;
  *(FFieldClass **)(local_f8.AllocatorInstance.Data + lVar8 + 0x30) = param_1->FieldType;
  *(undefined8 *)(local_f8.AllocatorInstance.Data + lVar8 + 0x30 + 8) = uVar5;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (**(code **)((longlong)*param_2 + 8))(param_2,&local_a8);
  while( true ) {
    if (local_f8.ArrayNum < 1) {
      local_67 = 0;
      local_63 = 0;
      local_61 = 0;
      local_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_30 = 0xffffffff;
      local_50 = 0;
      uStack_48 = 0;
      local_2c = 0;
      local_40 = 0;
      uStack_38 = 0;
      (**(code **)((longlong)*param_2 + 0x18))(param_2,&local_68);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return;
    }
    if ((local_f8.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    _Dst = local_f8.AllocatorInstance.Data + (longlong)(local_f8.ArrayNum + -1) * 0x40;
    local_e8._0_8_ = *(undefined8 *)_Dst;
    local_e8.KeyData = *(void **)(_Dst + 8);
    local_e8.KeyProperty = *(FProperty **)(_Dst + 0x10);
    local_e8.ValueData = *(void **)(_Dst + 0x18);
    local_e8.ValueProperty._0_4_ = *(undefined4 *)(_Dst + 0x20);
    local_e8.ValueProperty._4_4_ = *(undefined4 *)(_Dst + 0x24);
    local_e8.ValueType._0_4_ = *(undefined4 *)(_Dst + 0x28);
    local_e8.ValueType._4_4_ = *(undefined4 *)(_Dst + 0x2c);
    local_e8.FieldType._0_4_ = *(undefined4 *)(_Dst + 0x30);
    local_e8.FieldType._4_4_ = *(undefined4 *)(_Dst + 0x34);
    local_e8.ElementIndex = *(int *)(_Dst + 0x38);
    local_e8.StateFlags = *(EStructSerializerStateFlags *)(_Dst + 0x3c);
    iVar7 = (local_f8.ArrayNum - (local_f8.ArrayNum + -1)) + -1;
    if (iVar7 != 0) {
      memmove(_Dst,_Dst + 0x40,(longlong)iVar7 << 6);
    }
    local_f8.ArrayNum = local_f8.ArrayNum + -1;
    lVar8 = CONCAT44(local_e8.ValueProperty._4_4_,local_e8.ValueProperty._0_4_);
    if ((lVar8 == 0) ||
       (uVar1 = *(ulonglong *)(*(longlong *)(lVar8 + 8) + 0x18), (uVar1 >> 0x14 & 1) != 0)) {
      SerializeStruct(&local_e8,&local_f8,param_2,param_3);
    }
    else if ((uVar1 >> 0x15 & 1) == 0) {
      if ((uVar1 >> 0x2e & 1) == 0) {
        if ((uVar1 >> 0x2f & 1) == 0) {
          if ((uVar1 >> 0x38 & 1) == 0) {
            if (*(int *)(lVar8 + 0x30) < 2) {
              (**(code **)((longlong)*param_2 + 0x28))(param_2,&local_e8,0);
            }
            else if (local_e8.ElementIndex == -1) {
              (**(code **)*param_2)(param_2,&local_e8);
              iVar7 = 0;
              if (0 < *(int *)(CONCAT44(local_e8.ValueProperty._4_4_,local_e8.ValueProperty._0_4_) +
                              0x30)) {
                do {
                  (**(code **)((longlong)*param_2 + 0x28))(param_2,&local_e8,iVar7);
                  iVar7 = iVar7 + 1;
                } while (iVar7 < *(int *)(CONCAT44(local_e8.ValueProperty._4_4_,
                                                   local_e8.ValueProperty._0_4_) + 0x30));
              }
              (**(code **)((longlong)*param_2 + 0x10))(param_2,&local_e8);
            }
            else if (local_e8.ElementIndex < *(int *)(lVar8 + 0x30)) {
              (**(code **)((longlong)*param_2 + 0x28))(param_2,&local_e8);
            }
          }
          else {
            SerializeOptional(&local_e8,&local_f8,param_2);
          }
        }
        else {
          SerializeIterable<FSetProperty>(&local_e8,&local_f8,param_2,param_3);
        }
      }
      else {
        SerializeIterable<FMapProperty>(&local_e8,&local_f8,param_2,param_3);
      }
    }
    else {
      SerializeIterable<FArrayProperty>(&local_e8,&local_f8,param_2,param_3);
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SerializeOptional @ 148bad420

void __cdecl
StructSerializer::SerializeOptional
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3)

{
  FStructSerializerState *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  UStruct *pUVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FProperty *pFVar10;
  FProperty *pFVar11;
  FScriptContainerElement local_58;
  undefined7 uStack_57;
  undefined8 uStack_50;
  undefined8 local_48;
  FProperty *pFStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1->HasBeenProcessed != false) {
                    /* WARNING: Could not recover jumptable at 0x000148bad759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_3 + 0x18))(param_3,param_1);
    return;
  }
  (**(code **)((longlong)*param_3 + 8))();
  param_1->HasBeenProcessed = true;
  pFVar1 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + param_2->ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = param_2->ArrayNum;
  if (iVar8 == param_2->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar8 + 1;
  pvVar3 = param_1->KeyData;
  pFVar2 = (param_2->AllocatorInstance).Data;
  lVar9 = (longlong)iVar8 * 0x40;
  *(undefined8 *)(pFVar2 + lVar9) = *(undefined8 *)param_1;
  *(void **)(pFVar2 + lVar9 + 8) = pvVar3;
  pvVar3 = param_1->ValueData;
  *(FProperty **)(pFVar2 + lVar9 + 0x10) = param_1->KeyProperty;
  *(void **)(pFVar2 + lVar9 + 0x10 + 8) = pvVar3;
  pUVar5 = param_1->ValueType;
  *(FProperty **)(pFVar2 + lVar9 + 0x20) = param_1->ValueProperty;
  *(UStruct **)(pFVar2 + lVar9 + 0x20 + 8) = pUVar5;
  uVar6 = *(undefined8 *)&param_1->ElementIndex;
  *(FFieldClass **)(pFVar2 + lVar9 + 0x30) = param_1->FieldType;
  *(undefined8 *)(pFVar2 + lVar9 + 0x30 + 8) = uVar6;
  pFVar11 = param_1->ValueProperty;
  if (((pFVar11 == (FProperty *)0x0) ||
      ((*(ulonglong *)(pFVar11->_padding_ + 0x18) & 0x100000000000000) == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar11 = (FProperty *)0x0, bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar11[1]._padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                         ,0x18,L"Expected ValueProperty to be initialized"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = param_1->ValueProperty;
  lVar9 = pFVar11[1]._padding_;
  pvVar3 = param_1->ValueData;
  if ((pFVar10->ArrayDim < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pvVar3 == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar10 = (FProperty *)((longlong)pvVar3 + (longlong)pFVar10->Offset_Internal);
  bVar7 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)(pFVar11 + 1),pFVar10);
  pFStack_40 = (FProperty *)0x0;
  if (bVar7) {
    pFStack_40 = pFVar10;
  }
  if (pFStack_40 != (FProperty *)0x0) {
    local_28 = *(undefined8 *)(lVar9 + 8);
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_58 = (FScriptContainerElement)0x0;
    uStack_50 = 0;
    local_48 = 0;
    lStack_30 = 0;
    uStack_20 = 0xffffffff;
    uStack_1c = 0;
    local_38 = lVar9;
    if (((pFVar2 <= &local_58) && (&local_58 < pFVar2 + (longlong)param_2->ArrayMax * 0x40)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == param_2->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar8 + 1;
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar9 = (longlong)iVar8 * 0x40;
    *(ulonglong *)(pFVar2 + lVar9) = CONCAT71(uStack_57,local_58);
    *(undefined8 *)(pFVar2 + lVar9 + 8) = uStack_50;
    *(undefined8 *)(pFVar2 + lVar9 + 0x10) = local_48;
    *(FProperty **)(pFVar2 + lVar9 + 0x10 + 8) = pFStack_40;
    *(longlong *)(pFVar2 + lVar9 + 0x20) = local_38;
    *(longlong *)(pFVar2 + lVar9 + 0x20 + 8) = lStack_30;
    *(undefined8 *)(pFVar2 + lVar9 + 0x30) = local_28;
    *(ulonglong *)(pFVar2 + lVar9 + 0x30 + 8) = CONCAT44(uStack_1c,uStack_20);
  }
  return;
}

// SerializeStaticArray @ 148bad770

void __cdecl
StructSerializer::SerializeStaticArray
          (FStructSerializerState *param_1,IStructSerializerBackend *param_2)

{
  int iVar1;
  
  if (param_1->ElementIndex == -1) {
    (**(code **)*param_2)(param_2,param_1);
    iVar1 = 0;
    if (0 < param_1->ValueProperty->ArrayDim) {
      do {
        (**(code **)((longlong)*param_2 + 0x28))(param_2,param_1,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1->ValueProperty->ArrayDim);
    }
    (**(code **)((longlong)*param_2 + 0x10))(param_2,param_1);
  }
  else if (param_1->ElementIndex < param_1->ValueProperty->ArrayDim) {
                    /* WARNING: Could not recover jumptable at 0x000148bad7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*param_2 + 0x28))(param_2,param_1);
    return;
  }
  return;
}

// SerializeStruct @ 148bad810

void __cdecl
StructSerializer::SerializeStruct
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3,FStructSerializerPolicies *param_4)

{
  FProperty *pFVar1;
  ulonglong uVar2;
  FStructSerializerState *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  void *pvVar6;
  UStruct *pUVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar1 = param_1->ValueProperty;
  if (((pFVar1 != (FProperty *)0x0) && (1 < pFVar1->ArrayDim)) && (param_1->ElementIndex == -1)) {
    SerializeStructInStaticArray(param_1,param_2,param_3,param_4);
    return;
  }
  if (param_1->HasBeenProcessed == false) {
    if (pFVar1 != (FProperty *)0x0) {
      uVar2 = *(ulonglong *)(pFVar1->_padding_ + 0x18);
      if ((((uVar2 >> 0x14 & 1) != 0) || ((uVar2 >> 0x1a & 1) != 0)) &&
         ((UStruct *)pFVar1[1]._padding_ != (UStruct *)0x0)) {
        param_1->ValueType = (UStruct *)pFVar1[1]._padding_;
      }
      (**(code **)((longlong)*param_3 + 8))(param_3,param_1);
    }
    param_1->HasBeenProcessed = true;
    pFVar3 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
    if (((pFVar3 <= param_1) && (param_1 < pFVar3 + param_2->ArrayMax)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    pvVar6 = param_1->KeyData;
    pFVar4 = (param_2->AllocatorInstance).Data;
    lVar12 = (longlong)iVar10 * 0x40;
    *(undefined8 *)(pFVar4 + lVar12) = *(undefined8 *)param_1;
    *(void **)(pFVar4 + lVar12 + 8) = pvVar6;
    pvVar6 = param_1->ValueData;
    *(FProperty **)(pFVar4 + lVar12 + 0x10) = param_1->KeyProperty;
    *(void **)(pFVar4 + lVar12 + 0x10 + 8) = pvVar6;
    pUVar7 = param_1->ValueType;
    *(FProperty **)(pFVar4 + lVar12 + 0x20) = param_1->ValueProperty;
    *(UStruct **)(pFVar4 + lVar12 + 0x20 + 8) = pUVar7;
    uVar8 = *(undefined8 *)&param_1->ElementIndex;
    *(FFieldClass **)(pFVar4 + lVar12 + 0x30) = param_1->FieldType;
    *(undefined8 *)(pFVar4 + lVar12 + 0x30 + 8) = uVar8;
    GenerateStructureStates(&local_28,param_1,param_4);
    uVar15 = local_28.ArrayNum - 1;
    if (-1 < (int)uVar15) {
      lVar12 = (longlong)(int)uVar15 << 6;
      do {
        uVar11 = 0;
        if ((int)uVar15 < local_28.ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar14 = local_28.AllocatorInstance.Data + lVar12;
        if (((pFVar4 <= pFVar14) && (pFVar14 < pFVar4 + (longlong)param_2->ArrayMax * 0x40)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        lVar12 = lVar12 + -0x40;
        uVar8 = *(undefined8 *)(pFVar14 + 8);
        pFVar4 = (param_2->AllocatorInstance).Data;
        lVar13 = (longlong)iVar10 * 0x40;
        uVar15 = uVar15 - 1;
        *(undefined8 *)(pFVar4 + lVar13) = *(undefined8 *)pFVar14;
        *(undefined8 *)(pFVar4 + lVar13 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar14 + 0x18);
        *(undefined8 *)(pFVar4 + lVar13 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
        *(undefined8 *)(pFVar4 + lVar13 + 0x10 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar14 + 0x28);
        *(undefined8 *)(pFVar4 + lVar13 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
        *(undefined8 *)(pFVar4 + lVar13 + 0x20 + 8) = uVar8;
        uVar8 = *(undefined8 *)(pFVar14 + 0x38);
        *(undefined8 *)(pFVar4 + lVar13 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
        *(undefined8 *)(pFVar4 + lVar13 + 0x30 + 8) = uVar8;
      } while (-1 < (int)uVar15);
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      return;
    }
  }
  else if (pFVar1 != (FProperty *)0x0) {
    (**(code **)((longlong)*param_3 + 0x18))(param_3,param_1);
  }
  return;
}

// SerializeStructInStaticArray @ 148badae0

void __cdecl
StructSerializer::SerializeStructInStaticArray
          (FStructSerializerState *param_1,
          TArray<FStructSerializerState,TSizedDefaultAllocator<32>_> *param_2,
          IStructSerializerBackend *param_3,FStructSerializerPolicies *param_4)

{
  FStructSerializerState *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EStructSerializerStateFlags EVar8;
  void *pvVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FScriptContainerElement local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  FProperty *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (param_1->HasBeenProcessed == false) {
    param_1->HasBeenProcessed = true;
    pFVar1 = (FStructSerializerState *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= param_1) && (param_1 < pFVar1 + param_2->ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar12 = param_2->ArrayNum;
    if (iVar12 == param_2->ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar12 + 1;
    pvVar9 = param_1->KeyData;
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar14 = (longlong)iVar12 * 0x40;
    *(undefined8 *)(pFVar2 + lVar14) = *(undefined8 *)param_1;
    *(void **)(pFVar2 + lVar14 + 8) = pvVar9;
    pvVar9 = param_1->ValueData;
    *(FProperty **)(pFVar2 + lVar14 + 0x10) = param_1->KeyProperty;
    *(void **)(pFVar2 + lVar14 + 0x10 + 8) = pvVar9;
    uVar5 = *(undefined4 *)((longlong)&param_1->ValueProperty + 4);
    uVar6 = *(undefined4 *)&param_1->ValueType;
    uVar7 = *(undefined4 *)((longlong)&param_1->ValueType + 4);
    pFVar16 = pFVar2 + lVar14 + 0x20;
    *(undefined4 *)pFVar16 = *(undefined4 *)&param_1->ValueProperty;
    *(undefined4 *)(pFVar16 + 4) = uVar5;
    *(undefined4 *)(pFVar16 + 8) = uVar6;
    *(undefined4 *)(pFVar16 + 0xc) = uVar7;
    uVar5 = *(undefined4 *)((longlong)&param_1->FieldType + 4);
    iVar12 = param_1->ElementIndex;
    EVar8 = param_1->StateFlags;
    pFVar2 = pFVar2 + lVar14 + 0x30;
    *(undefined4 *)pFVar2 = *(undefined4 *)&param_1->FieldType;
    *(undefined4 *)(pFVar2 + 4) = uVar5;
    *(int *)(pFVar2 + 8) = iVar12;
    *(EStructSerializerStateFlags *)(pFVar2 + 0xc) = EVar8;
    (**(code **)*param_3)(param_3,param_1);
    local_6c = 0;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    iVar12 = param_1->ValueProperty->ArrayDim;
    FVar15.Data = local_78.Data;
    iVar13 = local_70;
    while (iVar12 = iVar12 + -1, local_78.Data = FVar15.Data, local_70 = iVar13, -1 < iVar12) {
      pvStack_50 = param_1->ValueData;
      local_48 = param_1->ValueProperty;
      local_68 = (FScriptContainerElement)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_2c = 0;
      iStack_30 = iVar12;
      if (((FVar15.Data <= &local_68) && (&local_68 < FVar15.Data + (longlong)local_6c * 0x40)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_70 == local_6c) {
        local_70 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&local_78,&local_6c);
      }
      iVar13 = local_70 + 1;
      lVar14 = (longlong)local_70 * 0x40;
      *(ulonglong *)(local_78.Data + lVar14) = CONCAT71(uStack_67,local_68);
      *(undefined8 *)(local_78.Data + lVar14 + 8) = uStack_60;
      *(undefined8 *)(local_78.Data + lVar14 + 0x10) = local_58;
      *(void **)(local_78.Data + lVar14 + 0x10 + 8) = pvStack_50;
      *(FProperty **)(local_78.Data + lVar14 + 0x20) = local_48;
      *(undefined8 *)(local_78.Data + lVar14 + 0x20 + 8) = uStack_40;
      *(undefined8 *)(local_78.Data + lVar14 + 0x30) = local_38;
      *(ulonglong *)(local_78.Data + lVar14 + 0x30 + 8) = CONCAT44(uStack_2c,iStack_30);
      FVar15.Data = local_78.Data;
    }
    pFVar16 = FVar15.Data + (longlong)iVar13 * 0x40;
    while( true ) {
      if (local_70 != iVar13) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStructSerializerState,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar15.Data == pFVar16) break;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= FVar15.Data) && (FVar15.Data < pFVar2 + (longlong)param_2->ArrayMax * 0x40))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == param_2->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar12 + 1;
      uVar10 = *(undefined8 *)(FVar15.Data + 8);
      pFVar3 = (param_2->AllocatorInstance).Data;
      lVar14 = (longlong)iVar12 * 0x40;
      *(undefined8 *)(pFVar3 + lVar14) = *(undefined8 *)FVar15.Data;
      *(undefined8 *)(pFVar3 + lVar14 + 8) = uVar10;
      uVar10 = *(undefined8 *)(FVar15.Data + 0x18);
      *(undefined8 *)(pFVar3 + lVar14 + 0x10) = *(undefined8 *)(FVar15.Data + 0x10);
      *(undefined8 *)(pFVar3 + lVar14 + 0x10 + 8) = uVar10;
      uVar10 = *(undefined8 *)(FVar15.Data + 0x28);
      *(undefined8 *)(pFVar3 + lVar14 + 0x20) = *(undefined8 *)(FVar15.Data + 0x20);
      *(undefined8 *)(pFVar3 + lVar14 + 0x20 + 8) = uVar10;
      pFVar2 = FVar15.Data + 0x30;
      uVar10 = *(undefined8 *)(FVar15.Data + 0x38);
      FVar15.Data = FVar15.Data + 0x40;
      *(undefined8 *)(pFVar3 + lVar14 + 0x30) = *(undefined8 *)pFVar2;
      *(undefined8 *)(pFVar3 + lVar14 + 0x30 + 8) = uVar10;
    }
    if (local_78.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data);
      return;
    }
  }
  else {
    (**(code **)((longlong)*param_3 + 0x10))(param_3,param_1);
  }
  return;
}

// TestLWCDeserialization @ 148bb0440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StructSerializerTest::TestLWCDeserialization
          (IStructSerializerBackend *param_1,IStructDeserializerBackend *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FAutomationTestFramework *pFVar5;
  longlong *plVar6;
  undefined1 auStack_698 [32];
  undefined1 local_678;
  uint7 uStack_677;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined1 *puStack_660;
  undefined8 local_658;
  UScriptStruct *pUStack_650;
  undefined8 local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  FString local_638;
  FStructSerializerState local_628;
  undefined1 local_5e8 [56];
  longlong *local_5b0;
  undefined1 local_5a8 [440];
  void *local_3f0;
  undefined4 local_3e8;
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_3e0;
  ForElementType<FSetElementId> local_3a0;
  int local_398;
  undefined1 local_388 [768];
  void *local_88;
  undefined4 local_80;
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_698;
  FStructSerializerNonLWCTypesTest::FStructSerializerNonLWCTypesTest
            ((FStructSerializerNonLWCTypesTest *)local_5a8);
  local_5e8._0_4_ = Serialize;
  local_5e8._4_4_ = Array;
  local_5e8._8_4_ = KeyValuePair;
  local_5e8._16_8_ = 0;
  local_5b0 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest,
                         (UObject *)pUVar4,L"StructSerializerNonLWCTypesTest");
  }
  puStack_660 = local_5a8;
  local_678 = 0;
  uStack_670 = 0;
  local_628._0_8_ = (ulonglong)uStack_677 << 8;
  local_628.KeyData = (void *)0x0;
  local_668 = 0;
  local_628.KeyProperty = (FProperty *)0x0;
  local_658 = 0;
  local_648 = 0;
  uStack_640 = 0xffffffff;
  uStack_63c = 0;
  local_628.ElementIndex = -1;
  local_628.StateFlags = None;
  local_628.FieldType = (FFieldClass *)0x0;
  local_628.ValueProperty = (FProperty *)0x0;
  pUStack_650 = Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton;
  local_628.ValueData = puStack_660;
  local_628.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton;
  StructSerializer::Serialize(&local_628,param_1,(FStructSerializerPolicies *)local_5e8);
  if (local_5e8._16_8_ != 0) {
    plVar6 = (longlong *)(local_5e8 + 0x20);
    if (local_5b0 != (longlong *)0x0) {
      plVar6 = local_5b0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest
            ((FStructSerializerLWCTypesTest *)local_388,NoInit);
  local_5e8._0_4_ = 2;
  local_5e8._4_4_ = KeyValuePair;
  local_5e8._16_8_ = 0;
  local_5b0 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest,(UObject *)pUVar4,
                         L"StructSerializerLWCTypesTest");
  }
  bVar3 = FStructDeserializer::Deserialize
                    (local_388,
                     (UStruct *)
                     Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton,
                     param_2,(FStructDeserializerPolicies *)local_5e8);
  if (!bVar3) {
    pFVar5 = FAutomationTestFramework::Get();
    pFVar1 = pFVar5->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_638,L"Deserialization must succeed");
    (*pcVar2)(pFVar1,&local_638,0);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  if (local_5e8._16_8_ != 0) {
    plVar6 = (longlong *)(local_5e8 + 0x20);
    if (local_5b0 != (longlong *)0x0) {
      plVar6 = local_5b0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  ValidateLWCDeserializationBackwardCompatibility
            ((FStructSerializerNonLWCTypesTest *)local_5a8,
             (FStructSerializerLWCTypesTest *)local_388);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_388 + 0x2c0));
  if ((FScriptContainerElement *)local_388._688_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_388._688_8_);
  }
  local_398 = 0;
  if (local_3a0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3a0);
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3e0);
  local_3e8 = 0;
  if (local_3f0 != (void *)0x0) {
    FMemory::Free(local_3f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_5a8 + 0x178));
  if ((FScriptContainerElement *)local_5a8._360_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5a8._360_8_);
  }
  return;
}

// TestLWCSerialization @ 148bb06f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StructSerializerTest::TestLWCSerialization
          (IStructSerializerBackend *param_1,IStructDeserializerBackend *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  UPackage *pUVar7;
  FAutomationTestFramework *pFVar8;
  longlong *plVar9;
  undefined1 auStackY_6a8 [32];
  uint7 uStack_677;
  FString local_638;
  FStructSerializerState local_628;
  undefined1 local_5e8 [56];
  longlong *local_5b0;
  undefined1 local_5a8 [376];
  undefined1 local_430 [32];
  void *local_410;
  undefined8 local_408;
  undefined8 uStack_400;
  void *local_3f0;
  undefined4 local_3e8;
  ForAnyElementType local_3e0;
  undefined8 local_3d8;
  TBitArray<FDefaultBitArrayAllocator> local_3d0;
  undefined8 uStack_3b0;
  ForElementType<FSetElementId> local_3a0;
  int local_398;
  undefined1 local_388 [768];
  void *local_88;
  undefined4 local_80;
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_78;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  FStructSerializerLWCTypesTest::FStructSerializerLWCTypesTest
            ((FStructSerializerLWCTypesTest *)local_388);
  local_5e8._0_4_ = Serialize;
  local_5e8._4_4_ = Array;
  local_5e8._8_4_ = KeyValuePair;
  local_5e8._16_8_ = 0;
  local_5b0 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerLWCTypesTest,(UObject *)pUVar7,
                         L"StructSerializerLWCTypesTest");
  }
  local_628.ValueData = local_388;
  local_628._0_8_ = (ulonglong)uStack_677 << 8;
  local_628.KeyData = (void *)0x0;
  local_628.KeyProperty = (FProperty *)0x0;
  local_628.ElementIndex = -1;
  local_628.StateFlags = None;
  local_628.FieldType = (FFieldClass *)0x0;
  local_628.ValueProperty = (FProperty *)0x0;
  local_628.ValueType =
       (UStruct *)Z_Registration_Info_UScriptStruct_FStructSerializerLWCTypesTest.OuterSingleton;
  StructSerializer::Serialize(&local_628,param_1,(FStructSerializerPolicies *)local_5e8);
  if (local_5e8._16_8_ != 0) {
    plVar9 = (longlong *)(local_5e8 + 0x20);
    if (local_5b0 != (longlong *)0x0) {
      plVar9 = local_5b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  local_5a8._32_8_ = ___xmm_3f800000000000000000000000000000;
  local_5a8._40_8_ = _UNK_150689648;
  local_5a8._160_16_ = (undefined1  [16])GlobalVectorConstants::Float0001;
  local_5a8._192_16_ = (undefined1  [16])GlobalVectorConstants::Float1110;
  local_5a8._320_8_ = ___xmm_3f8000003f8000000000000000000000;
  local_5a8._328_8_ = _UNK_15076b1e8;
  local_5a8._176_16_ = (undefined1  [16])GlobalVectorConstants::FloatZero;
  local_408._0_4_ = ___xmm_00000000ffffffff0000008000000000;
  local_408._4_4_ = _UNK_150631d94;
  uStack_400 = _UNK_150631d98;
  local_3d0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_3d0.MaxBits = _UNK_150631d94;
  uStack_3b0 = _UNK_150631d98;
  local_5a8[0xe8] = '\0';
  local_5a8._284_4_ = 0.0;
  local_5a8._288_8_ = ___xmm_000000003f8000000000000000000000;
  local_5a8._296_8_ = _UNK_150689538;
  local_5a8._304_8_ = ___xmm_000000003f8000000000000000000000;
  local_5a8._312_8_ = _UNK_150689538;
  local_5a8._336_4_ = 1.0;
  local_5a8._340_4_ = 1.0;
  local_5a8._360_8_ = (FScriptContainerElement *)0x0;
  local_5a8._368_4_ = 0;
  local_5a8._372_4_ = 0;
  local_430._0_8_ = (FScriptContainerElement *)0x0;
  local_430._8_8_ = 0;
  local_410 = (void *)0x0;
  local_3f0 = (void *)0x0;
  local_3e8 = 0;
  local_3e0.Data = (FScriptContainerElement *)0x0;
  local_3d8 = 0;
  local_3d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_3a0 = (ForElementType<FSetElementId>)0x0;
  local_398 = 0;
  local_5e8._0_4_ = 2;
  local_5e8._4_4_ = KeyValuePair;
  local_5e8._16_8_ = 0;
  local_5b0 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest,
                         (UObject *)pUVar7,L"StructSerializerNonLWCTypesTest");
  }
  bVar6 = FStructDeserializer::Deserialize
                    ((FStructSerializerNonLWCTypesTest *)local_5a8,
                     (UStruct *)
                     Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.
                     OuterSingleton,param_2,(FStructDeserializerPolicies *)local_5e8);
  if (!bVar6) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_638,L"Deserialization must succeed");
    (*pcVar2)(pFVar1,&local_638);
    if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_638.Data.AllocatorInstance.Data);
    }
  }
  if (local_5e8._16_8_ != 0) {
    plVar9 = (longlong *)(local_5e8 + 0x20);
    if (local_5b0 != (longlong *)0x0) {
      plVar9 = local_5b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  ValidateLWCSerializationBackwardCompatibility
            ((FStructSerializerLWCTypesTest *)local_388,
             (FStructSerializerNonLWCTypesTest *)local_5a8);
  local_398 = 0;
  if (local_3a0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3a0);
  }
  uVar4 = local_3d8 >> 0x20;
  local_3d8 = local_3d8 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_3e0,0,(int *)((longlong)&local_3d8 + 4));
  }
  iVar3 = local_3d0.MaxBits;
  uStack_3b0 = 0xffffffff;
  local_3d0._24_8_ = (ulonglong)(uint)local_3d0.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_3d0.NumBits = 0;
    local_3d0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_3d0,0);
  }
  if (local_3d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_3d0.AllocatorInstance.SecondaryData);
  }
  if (local_3e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e0.Data);
  }
  local_3e8 = 0;
  if (local_3f0 != (void *)0x0) {
    FMemory::Free(local_3f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_430,0,local_430._8_4_);
  iVar3 = SUB84(local_430._8_8_,4);
  local_430._8_8_ = local_430._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_430,0,(int *)(local_430 + 0xc));
  }
  uVar5 = local_408._4_4_;
  uStack_400 = 0xffffffff;
  local_408 = (ulonglong)local_408._4_4_ << 0x20;
  if (0x80 < uVar5) {
    local_408 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_430 + 0x10),0);
  }
  if (local_410 != (void *)0x0) {
    FMemory::Free(local_410);
  }
  if ((FScriptContainerElement *)local_430._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_430._0_8_);
  }
  if ((FScriptContainerElement *)local_5a8._360_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_5a8._360_8_);
  }
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_78);
  local_80 = 0;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_388 + 0x2c0));
  if ((FScriptContainerElement *)local_388._688_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_388._688_8_);
  }
  return;
}

// TestSerialization @ 148bb0ba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StructSerializerTest::TestSerialization
          (IStructSerializerBackend *param_1,IStructDeserializerBackend *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UClass>_u_0 TVar4;
  UObject *pUVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  UPackage *pUVar7;
  FAutomationTestFramework *pFVar8;
  longlong *plVar9;
  undefined1 auStack_1538 [32];
  TObjectPtr<UClass>_u_0 local_1518;
  FName FStack_1510;
  FScriptContainerElement *local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  UScriptStruct *pUStack_14f0;
  undefined8 local_14e8;
  undefined4 uStack_14e0;
  undefined4 uStack_14dc;
  TObjectPtr<UClass>_u_0 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined1 *puStack_14c0;
  undefined8 local_14b8;
  UScriptStruct *pUStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined1 local_1498 [56];
  longlong *local_1460;
  undefined1 local_1458 [120];
  TObjectPtr<UClass>_u_0 local_13e0;
  TObjectPtr<UClass>_u_0 local_13d8;
  FWeakObjectPtr local_13d0;
  undefined1 local_13c8 [40];
  TObjectPtr<UClass>_u_0 local_13a0;
  undefined4 uStack_1398;
  undefined4 uStack_1394;
  void *local_1390;
  undefined4 local_1388;
  undefined4 local_1384;
  TObjectPtr<UClass>_u_0 local_1380;
  FName FStack_1378;
  ForAnyElementType local_1370;
  int local_1368;
  int local_1364;
  FStructSerializerBuiltinTestStruct local_1358;
  FStructSerializerArrayTestStruct local_1288;
  FStructSerializerMapTestStruct local_1228;
  FStructSerializerSetTestStruct local_10e8;
  FStructSerializerOptionalTestStruct local_fa8;
  FStructSerializerLWCTypesTest local_da8;
  FStructSerializerTestStruct local_a48;
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x148bb0bbe;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1538;
  FStructSerializerTestStruct::FStructSerializerTestStruct
            ((FStructSerializerTestStruct *)local_1458);
  TVar4.DebugPtr = UObjectTest::StaticClass();
  pUVar5 = GetTransientPackageAsObject();
  TVar6.DebugPtr = (UClass *)NewObject<UObjectTest>(pUVar5);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  local_1458._56_8_ = TVar4.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  local_1458._64_8_ = TVar4.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  local_1518.DebugPtr = TVar4.DebugPtr;
  local_1458._72_8_ = TVar4.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)(local_1458 + 0x50),(FObjectPtr)&local_1518);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  local_13e0.DebugPtr = TVar6.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  local_1518.DebugPtr = TVar6.DebugPtr;
  local_13d8.DebugPtr = TVar6.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_13d0,(FObjectPtr)&local_1518);
  local_1518.DebugPtr = TVar6.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_13c8,(FObjectPtr)&local_1518);
  local_1518.DebugPtr = (UClass *)0x0;
  FStack_1510.ComparisonIndex.Value = 0;
  FStack_1510.Number = 0;
  local_1508 = (void *)0x0;
  uStack_1500 = (undefined1 *)0x0;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&local_1518.ObjectPtr,(UObject *)TVar4.DebugPtr);
  local_13a0.DebugPtr = local_1518.DebugPtr;
  uStack_1398 = FStack_1510.ComparisonIndex.Value;
  uStack_1394 = FStack_1510.Number;
  if (local_1390 != (void *)0x0) {
    FMemory::Free(local_1390);
  }
  local_1390 = local_1508;
  local_1388 = (int)uStack_1500;
  local_1384 = uStack_1500._4_4_;
  uStack_1500 = (undefined1 *)0x0;
  local_1518.DebugPtr = (UClass *)0x0;
  FStack_1510.ComparisonIndex.Value = 0;
  FStack_1510.Number = 0;
  local_1508 = (FScriptContainerElement *)0x0;
  FSoftObjectPath::SetPath((FSoftObjectPath *)&local_1518.ObjectPtr,(UObject *)TVar6.DebugPtr);
  local_1380.DebugPtr = local_1518.DebugPtr;
  FStack_1378 = FStack_1510;
  if (local_1370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1370.Data);
  }
  local_1370.Data = local_1508;
  local_1368 = (int)uStack_1500;
  local_1364 = uStack_1500._4_4_;
  local_1498._0_4_ = Serialize;
  local_1498._4_4_ = Array;
  local_1498._8_4_ = KeyValuePair;
  local_1498._16_8_ = 0;
  local_1460 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct,(UObject *)pUVar7,
                         L"StructSerializerTestStruct");
  }
  uStack_1500 = local_1458;
  local_1518.DebugPtr = local_1518.DebugPtr & 0xffffffffffffff00;
  FStack_1510.ComparisonIndex.Value = 0;
  FStack_1510.Number = 0;
  local_14d8.DebugPtr = local_1518.DebugPtr;
  uStack_14d0 = 0;
  local_1508 = (FScriptContainerElement *)0x0;
  local_14c8 = 0;
  local_14f8 = 0;
  local_14e8 = 0;
  uStack_14e0 = 0xffffffff;
  uStack_14dc = 0;
  uStack_14a0 = 0xffffffff;
  local_14a8 = 0;
  local_14b8 = 0;
  pUStack_14f0 = Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton;
  puStack_14c0 = uStack_1500;
  pUStack_14b0 = Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton;
  StructSerializer::Serialize
            ((FStructSerializerState *)&local_14d8.ObjectPtr,param_1,
             (FStructSerializerPolicies *)local_1498);
  if (local_1498._16_8_ != 0) {
    plVar9 = (longlong *)(local_1498 + 0x20);
    if (local_1460 != (longlong *)0x0) {
      plVar9 = local_1460;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FStructSerializerTestStruct::FStructSerializerTestStruct(&local_a48,NoInit);
  local_1498._0_4_ = 2;
  local_1498._4_4_ = KeyValuePair;
  local_1498._16_8_ = 0;
  local_1460 = (longlong *)0x0;
  if (Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_Serialization();
    Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructSerializerTestStruct,(UObject *)pUVar7,
                         L"StructSerializerTestStruct");
  }
  bVar3 = FStructDeserializer::Deserialize
                    (&local_a48,
                     (UStruct *)
                     Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.OuterSingleton,
                     param_2,(FStructDeserializerPolicies *)local_1498);
  if (!bVar3) {
    pFVar8 = FAutomationTestFramework::Get();
    pFVar1 = pFVar8->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString((FString *)&local_1518.ObjectPtr,L"Deserialization must succeed");
    (*pcVar2)(pFVar1,&local_1518,0);
    if (local_1518.DebugPtr != (UClass *)0x0) {
      FMemory::Free(local_1518.DebugPtr);
    }
  }
  if (local_1498._16_8_ != 0) {
    plVar9 = (longlong *)(local_1498 + 0x20);
    if (local_1460 != (longlong *)0x0) {
      plVar9 = local_1460;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  ValidateNumerics((FStructSerializerNumericTestStruct *)local_1458,&local_a48.Numerics);
  ValidateBooleans((FStructSerializerBooleanTestStruct *)(local_1458 + 0x30),&local_a48.Booleans);
  ValidateObjects((FStructSerializerObjectTestStruct *)(local_1458 + 0x38),&local_a48.Objects);
  ValidateBuiltIns(&local_1358,&local_a48.Builtins);
  ValidateArrays(&local_1288,&local_a48.Arrays);
  ValidateMaps(&local_1228,&local_a48.Maps);
  ValidateSets(&local_10e8,&local_a48.Sets);
  ValidateOptionals(&local_fa8,&local_a48.Optionals);
  ValidateLWCTypes(&local_da8,&local_a48.LWCTypes);
  FStructSerializerTestStruct::~FStructSerializerTestStruct(&local_a48);
  FStructSerializerLWCTypesTest::~FStructSerializerLWCTypesTest(&local_da8);
  FStructSerializerOptionalTestStruct::~FStructSerializerOptionalTestStruct(&local_fa8);
  FStructSerializerSetTestStruct::~FStructSerializerSetTestStruct(&local_10e8);
  FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct(&local_1228);
  DestructItems<FStructSerializerBuiltinTestStruct,int>
            ((FStructSerializerBuiltinTestStruct *)local_1288.StructArray.AllocatorInstance.Data,
             local_1288.StructArray.ArrayNum);
  if ((FStructSerializerBuiltinTestStruct *)local_1288.StructArray.AllocatorInstance.Data !=
      (FStructSerializerBuiltinTestStruct *)0x0) {
    FMemory::Free(local_1288.StructArray.AllocatorInstance.Data);
  }
  if (local_1288.VectorArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1288.VectorArray.AllocatorInstance.Data);
  }
  if (local_1288.ByteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1288.ByteArray.AllocatorInstance.Data);
  }
  if (local_1288.Int32Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1288.Int32Array.AllocatorInstance.Data);
  }
  if (local_1358.Text.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1358.Text.TextData.Reference + 0x10))();
  }
  if (local_1358.String.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1358.String.Data.AllocatorInstance.Data);
  }
  if (local_1370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1370.Data);
  }
  if (local_1390 != (void *)0x0) {
    FMemory::Free(local_1390);
  }
  if ((void *)local_13c8._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_13c8._24_8_);
  }
  if ((void *)local_1458._104_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1458._104_8_);
  }
  return;
}

// ValidateArrays @ 148bb1ec0

void __cdecl
StructSerializerTest::ValidateArrays
          (FStructSerializerArrayTestStruct *param_1,FStructSerializerArrayTestStruct *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  FAutomationTestFramework *pFVar6;
  FString local_28 [2];
  
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  iVar5 = (param_1->Int32Array).ArrayNum;
  if ((iVar5 != (param_2->Int32Array).ArrayNum) ||
     ((iVar5 != 0 &&
      (iVar5 = memcmp((param_1->Int32Array).AllocatorInstance.Data,
                      (param_2->Int32Array).AllocatorInstance.Data,(longlong)iVar5 << 2), iVar5 != 0
      )))) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(local_28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,local_28,0);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar1 = pFVar6->CurrentTest;
  iVar5 = (param_1->ByteArray).ArrayNum;
  if ((iVar5 != (param_2->ByteArray).ArrayNum) ||
     ((iVar5 != 0 &&
      (iVar5 = memcmp((param_1->ByteArray).AllocatorInstance.Data,
                      (param_2->ByteArray).AllocatorInstance.Data,(longlong)iVar5), iVar5 != 0)))) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(local_28,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,local_28,0);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticSingleElement[0] must be the same before and after de-/serialization",
             param_1->StaticSingleElement[0],param_2->StaticSingleElement[0]);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticInt32Array[0] must be the same before and after de-/serialization",
             param_1->StaticInt32Array[0],param_2->StaticInt32Array[0]);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticInt32Array[1] must be the same before and after de-/serialization",
             param_1->StaticInt32Array[1],param_2->StaticInt32Array[1]);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticInt32Array[2] must be the same before and after de-/serialization",
             param_1->StaticInt32Array[2],param_2->StaticInt32Array[2]);
  pFVar6 = FAutomationTestFramework::Get();
  fVar3 = __real_38d1b717;
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticFloatArray[0] must be the same before and after de-/serialization",
             param_1->StaticFloatArray[0],param_2->StaticFloatArray[0],__real_38d1b717);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticFloatArray[1] must be the same before and after de-/serialization",
             param_1->StaticFloatArray[1],param_2->StaticFloatArray[1],fVar3);
  pFVar6 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar6->CurrentTest,
             L"Arrays.StaticFloatArray[2] must be the same before and after de-/serialization",
             param_1->StaticFloatArray[2],param_2->StaticFloatArray[2],fVar3);
  pFVar6 = FAutomationTestFramework::Get();
  iVar5 = (param_1->VectorArray).ArrayNum;
  pFVar1 = pFVar6->CurrentTest;
  if ((iVar5 == (param_2->VectorArray).ArrayNum) &&
     (bVar4 = CompareItems<UE::Math::TVector<double>,int>
                        ((TVector<double> *)(param_1->VectorArray).AllocatorInstance.Data,
                         (TVector<double> *)(param_2->VectorArray).AllocatorInstance.Data,iVar5),
     bVar4)) {
    return;
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl(local_28,L"%s: The two values are not equal.");
  (*pcVar2)(pFVar1,local_28,0);
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateBooleans @ 148bb2140

void __cdecl
StructSerializerTest::ValidateBooleans
          (FStructSerializerBooleanTestStruct *param_1,FStructSerializerBooleanTestStruct *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->BoolFalse != param_2->BoolFalse) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->BoolTrue != param_2->BoolTrue) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_1->Bitfield0 ^ param_2->Bitfield0) & 1) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 2) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 4) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 8) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 0x10) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 0x20) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (((param_2->field_0x2 ^ param_1->field_0x2) & 0x40) != 0) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if ((char)(param_2->field_0x2 ^ param_1->field_0x2) < '\0') {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateBuiltIns @ 148bb24b0

void __cdecl
StructSerializerTest::ValidateBuiltIns
          (FStructSerializerBuiltinTestStruct *param_1,FStructSerializerBuiltinTestStruct *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  FAutomationTestFramework *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  undefined4 uVar8;
  int iVar9;
  wchar_t *pwVar11;
  undefined4 uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar16;
  longlong lVar17;
  longlong lVar18;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  FAutomationTestBase *pFVar10;
  TVector<double>_u_0 *pTVar15;
  
  pFVar5 = FAutomationTestFramework::Get();
  if ((((param_1->Guid).D != (param_2->Guid).D || (param_1->Guid).C != (param_2->Guid).C) ||
      (param_1->Guid).B != (param_2->Guid).B) || (param_1->Guid).A != (param_2->Guid).A) {
    pFVar10 = pFVar5->CurrentTest;
    pcVar1 = *(code **)(pFVar10->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_68._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar10,&local_68,0);
    if ((void *)local_68._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_68._s_0.X);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar5->CurrentTest,
             L"Builtins.Name must be the same before and after de-/serialization",param_1->Name,
             param_2->Name);
  pFVar5 = FAutomationTestFramework::Get();
  pwVar11 = L"";
  if ((param_2->String).Data.ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(param_2->String).Data.AllocatorInstance.Data;
  }
  if ((param_1->String).Data.ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->String).Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar5->CurrentTest,
             L"Builtins.String must be the same before and after de-/serialization",pwVar14,pwVar16)
  ;
  pFVar5 = FAutomationTestFramework::Get();
  pFVar10 = pFVar5->CurrentTest;
  pFVar6 = FText::ToString(&param_2->Text);
  pFVar7 = FText::ToString(&param_1->Text);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar16 = L"";
  }
  else {
    pwVar16 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  if ((pFVar7->Data).ArrayNum != 0) {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  FAutomationTestBase::TestEqual
            (pFVar10,L"Builtins.Text must be the same before and after de-/serialization",pwVar11,
             pwVar16);
  pFVar5 = FAutomationTestFramework::Get();
  if ((param_1->Datetime).Ticks != (param_2->Datetime).Ticks) {
    pFVar10 = pFVar5->CurrentTest;
    pcVar1 = *(code **)(pFVar10->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_68._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar10,&local_68,0);
    if ((void *)local_68._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_68._s_0.X);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  if ((param_1->Timespan).Ticks != (param_2->Timespan).Ticks) {
    pFVar10 = pFVar5->CurrentTest;
    pcVar1 = *(code **)(pFVar10->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_68._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar10,&local_68,0);
    if ((void *)local_68._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_68._s_0.X);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  fVar4 = __real_38d1b717;
  local_68._s_0.X = (param_2->Vector).field0_0x0._s_0.X;
  local_68._s_0.Y = (param_2->Vector).field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_2->Vector).field0_0x0._s_0.Z;
  local_48[0]._0_8_ = (param_1->Vector).field0_0x0._s_0.X;
  local_48[0]._8_8_ = (param_1->Vector).field0_0x0._s_0.Y;
  local_48[0]._16_8_ = (param_1->Vector).field0_0x0._s_0.Z;
  FAutomationTestBase::TestEqual
            (pFVar5->CurrentTest,
             L"Builtins.Vector must be the same before and after de-/serialization",
             (TVector<double> *)&local_48[0]._s_0,(TVector<double> *)&local_68._s_0,__real_38d1b717)
  ;
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
            (pFVar5->CurrentTest,
             L"Builtins.Vector4 must be the same before and after de-/serialization",
             &param_1->Vector4,&param_2->Vector4);
  pFVar5 = FAutomationTestFramework::Get();
  local_48[0]._0_8_ = (param_2->Rotator).Pitch;
  local_48[0]._8_8_ = (param_2->Rotator).Yaw;
  local_48[0]._16_8_ = (param_2->Rotator).Roll;
  pTVar15 = &local_68;
  pFVar10 = pFVar5->CurrentTest;
  local_68._s_0.X = (param_1->Rotator).Pitch;
  local_68._s_0.Y = (param_1->Rotator).Yaw;
  local_68._s_0.Z = (param_1->Rotator).Roll;
  FAutomationTestBase::TestEqual
            (pFVar10,L"Builtins.Rotator must be the same before and after de-/serialization",
             (TRotator<double> *)&pTVar15->_s_0,(TRotator<double> *)&local_48[0]._s_0,fVar4);
  uVar8 = SUB84(pFVar10,0);
  uVar12 = SUB84(pTVar15,0);
  pFVar5 = FAutomationTestFramework::Get();
  lVar17 = -(ulonglong)((param_1->Quat).W != (param_2->Quat).W);
  lVar18 = -(ulonglong)((param_1->Quat).Y != (param_2->Quat).Y);
  auVar2._8_4_ = (int)lVar17;
  auVar2._0_8_ = -(ulonglong)((param_1->Quat).Z != (param_2->Quat).Z);
  auVar2._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar13 = movmskpd(uVar12,auVar2);
  auVar3._8_4_ = (int)lVar18;
  auVar3._0_8_ = -(ulonglong)((param_1->Quat).X != (param_2->Quat).X);
  auVar3._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
  iVar9 = movmskpd(uVar8,auVar3);
  if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
    pFVar10 = pFVar5->CurrentTest;
    pcVar1 = *(code **)(pFVar10->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_68._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar10,&local_68,0);
    if ((void *)local_68._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_68._s_0.X);
    }
  }
  pFVar5 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar5->CurrentTest,
             L"Builtins.Color must be the same before and after de-/serialization",
             (FColor)(param_1->Color).field0_0x0._s_0,(FColor)(param_2->Color).field0_0x0._s_0);
  return;
}

// ValidateLWCDeserializationBackwardCompatibility @ 148bb2820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StructSerializerTest::ValidateLWCDeserializationBackwardCompatibility
          (FStructSerializerNonLWCTypesTest *param_1,FStructSerializerLWCTypesTest *param_2)

{
  FString *pFVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FSetElementId> FVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *pTVar35;
  TMap<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
  *pTVar36;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *pTVar37;
  bool bVar38;
  int iVar39;
  uint uVar40;
  FAutomationTestFramework *pFVar41;
  double *pdVar42;
  undefined7 extraout_var;
  TTuple<FString,UE::Math::TVector<double>_> *pTVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  uint uVar47;
  double *pdVar48;
  FAutomationTestBase *pFVar49;
  ForElementType<FSetElementId> FVar50;
  uint uVar51;
  uint uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  double *pdVar56;
  undefined1 *puVar59;
  undefined1 *puVar60;
  uint *puVar61;
  double *pdVar62;
  uint uVar63;
  longlong lVar64;
  double dVar65;
  double dVar66;
  undefined1 auStackY_498 [32];
  bool local_468;
  undefined1 local_467 [7];
  longlong local_460;
  undefined1 local_458 [8];
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *local_450;
  int local_448;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *local_440;
  uint uStack_438;
  uint uStack_434;
  undefined1 *local_430;
  undefined4 uStack_428;
  uint uStack_424;
  uint local_420;
  undefined4 uStack_41c;
  int iStack_418;
  undefined4 uStack_414;
  ulonglong local_410;
  double local_408;
  double local_400;
  double local_3f8;
  int local_3f0;
  int local_3ec;
  int local_3e8;
  TMap<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
  *local_3e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3d8;
  undefined8 uStack_3b8;
  TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
  *local_3b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3a8;
  undefined8 uStack_388;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  TVector<double>_u_0 local_2f8;
  TRotator<double> local_2d8;
  TVector2<double>_u_0 local_2b8;
  double local_2a8;
  double local_2a0;
  undefined1 local_298;
  TVector<double>_u_0 local_288;
  TRotator<double> local_268;
  double local_248;
  TVector4<double>_u_0 local_238;
  undefined1 local_218 [32];
  double local_1f8;
  double local_1f0;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_10c;
  undefined4 local_ec;
  TVector<double>_u_0 local_e8;
  double local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  ulonglong local_b0;
  TPlane<double> *pTVar57;
  double *pdVar58;
  
  local_b0 = __security_cookie.value ^ (ulonglong)auStackY_498;
  pFVar41 = FAutomationTestFramework::Get();
  fVar3 = __real_38d1b717;
  local_288._s_0.X = (param_2->Vector).field0_0x0._s_0.X;
  local_288._s_0.Y = (param_2->Vector).field0_0x0._s_0.Y;
  local_288._s_0.Z = (param_2->Vector).field0_0x0._s_0.Z;
  local_2f8._s_0.X = (double)(param_1->Vector).field0_0x0._s_0.X;
  local_2f8._s_0.Z = (double)(param_1->Vector).field0_0x0._s_0.Z;
  local_2f8._s_0.Y = (double)(param_1->Vector).field0_0x0._s_0.Y;
  FAutomationTestBase::TestEqual
            (pFVar41->CurrentTest,L"Non-LWC Vector must be deserialized to a LWC Vector",
             (TVector<double> *)&local_2f8._s_0,(TVector<double> *)&local_288._s_0,__real_38d1b717);
  pFVar41 = FAutomationTestFramework::Get();
  pFVar49 = pFVar41->CurrentTest;
  if (((double)(param_1->Vector2D).field0_0x0._s_0.X != (param_2->Vector2D).field0_0x0._s_0.X) ||
     ((double)(param_1->Vector2D).field0_0x0._s_0.Y != (param_2->Vector2D).field0_0x0._s_0.Y)) {
    pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_310,L"%s: The two values are not equal.");
    (*pcVar11)(pFVar49,&local_310,0);
    if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
  }
  pFVar41 = FAutomationTestFramework::Get();
  local_238._s_0.X = (double)(param_1->Vector4).field0_0x0._s_0.X;
  local_238._s_0.Y = (double)(param_1->Vector4).field0_0x0._s_0.Y;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Vector4).field0_0x0 + 8);
  dVar20 = (double)(float)((ulonglong)uVar8 >> 0x20);
  local_238._24_4_ = SUB84(dVar20,0);
  local_238._16_8_ = (double)(float)uVar8;
  local_238._28_4_ = (int)((ulonglong)dVar20 >> 0x20);
  FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
            (pFVar41->CurrentTest,L"Non-LWC Vector4 must be deserialized toa LWC Vector4",
             (TVector4<double> *)&local_238._s_0,&param_2->Vector4);
  pFVar41 = FAutomationTestFramework::Get();
  pdVar58 = (double *)0x0;
  uVar55 = 0;
  uVar40 = 0;
  pFVar49 = pFVar41->CurrentTest;
  pdVar42 = (double *)local_1a8;
  dVar21 = (double)(param_1->Matrix).M[0][1];
  uVar63 = 0;
  dVar20 = (double)(param_1->Matrix).M[0][3];
  local_1a8._8_4_ = SUB84(dVar21,0);
  local_1a8._0_8_ = (double)(param_1->Matrix).M[0][0];
  local_1a8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar21 = (double)(param_1->Matrix).M[1][1];
  local_198._8_4_ = SUB84(dVar20,0);
  local_198._0_8_ = (double)(param_1->Matrix).M[0][2];
  local_198._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  dVar20 = (double)(param_1->Matrix).M[1][3];
  local_188._8_4_ = SUB84(dVar21,0);
  local_188._0_8_ = (double)(param_1->Matrix).M[1][0];
  local_188._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar21 = (double)(param_1->Matrix).M[2][1];
  local_178._8_4_ = SUB84(dVar20,0);
  local_178._0_8_ = (double)(param_1->Matrix).M[1][2];
  local_178._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  dVar20 = (double)(param_1->Matrix).M[2][3];
  local_168._8_4_ = SUB84(dVar21,0);
  local_168._0_8_ = (double)(param_1->Matrix).M[2][0];
  local_168._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar21 = (double)(param_1->Matrix).M[3][1];
  local_158._8_4_ = SUB84(dVar20,0);
  local_158._0_8_ = (double)(param_1->Matrix).M[2][2];
  local_158._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  dVar20 = (double)(param_1->Matrix).M[3][3];
  local_148._8_4_ = SUB84(dVar21,0);
  local_148._0_8_ = (double)(param_1->Matrix).M[3][0];
  local_148._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_138._8_4_ = SUB84(dVar20,0);
  local_138._0_8_ = (double)(param_1->Matrix).M[3][2];
  local_138._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  pdVar48 = pdVar58;
  pdVar62 = pdVar42;
  pdVar56 = pdVar58;
  do {
    do {
      if (*(double *)((longlong)pdVar42 + (longlong)param_2 + (0x50 - (longlong)local_1a8)) !=
          *pdVar42) {
        pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_380,L"%s: The two values are not equal.");
        (*pcVar11)(pFVar49,&local_380,0);
        if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.Data.AllocatorInstance.Data);
        }
        goto LAB_148bb2ad0;
      }
      pdVar48 = (double *)((longlong)pdVar48 + 1);
      pdVar42 = pdVar42 + 1;
    } while ((longlong)pdVar48 < 4);
    pdVar56 = (double *)((longlong)pdVar56 + 1);
    pdVar42 = pdVar62 + 4;
    pdVar48 = pdVar58;
    pdVar62 = pdVar42;
  } while ((longlong)pdVar56 < 4);
LAB_148bb2ad0:
  pFVar41 = FAutomationTestFramework::Get();
  pTVar57 = (TPlane<double> *)local_218;
  local_218._0_8_ = (undefined8)*(float *)&(param_1->Plane)._padding_;
  local_218._8_8_ = (undefined8)*(float *)((longlong)&(param_1->Plane)._padding_ + 4);
  uVar6 = (param_1->Plane)._padding_;
  uVar9 = (param_1->Plane).W;
  local_218._24_4_ = SUB84((double)(float)uVar9,0);
  local_218._16_8_ = (double)(float)uVar6;
  local_218._28_4_ = (int)((ulonglong)(double)(float)uVar9 >> 0x20);
  FAutomationTestBase::TestEqual<UE::Math::TPlane<double>_>
            (pFVar41->CurrentTest,L"Non-LWC Plane must be deserialized to a LWC Plane",pTVar57,
             &param_2->Plane);
  uVar53 = SUB84(pTVar57,0);
  pFVar41 = FAutomationTestFramework::Get();
  uVar7 = (param_1->Quat).Z;
  uVar10 = (param_1->Quat).W;
  pFVar49 = pFVar41->CurrentTest;
  lVar64 = -(ulonglong)((double)(float)uVar10 != (param_2->Quat).W);
  auVar22._8_4_ = (int)lVar64;
  auVar22._0_8_ = -(ulonglong)((double)(float)uVar7 != (param_2->Quat).Z);
  auVar22._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
  uVar54 = movmskpd(uVar53,auVar22);
  lVar64 = -(ulonglong)((double)(param_1->Quat).Y != (param_2->Quat).Y);
  auVar14._8_4_ = (int)lVar64;
  auVar14._0_8_ = -(ulonglong)((double)(param_1->Quat).X != (param_2->Quat).X);
  auVar14._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
  iVar39 = movmskpd((int)pFVar41,auVar14);
  if ((uVar54 & 0x3fffffff) != 0 || iVar39 != 0) {
    pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_370,L"%s: The two values are not equal.");
    (*pcVar11)(pFVar49,&local_370,0);
    if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.AllocatorInstance.Data);
    }
  }
  pFVar41 = FAutomationTestFramework::Get();
  local_268.Pitch = (param_2->Rotator).Pitch;
  local_268.Yaw = (param_2->Rotator).Yaw;
  local_268.Roll = (param_2->Rotator).Roll;
  pFVar49 = pFVar41->CurrentTest;
  local_2d8.Pitch = (double)(param_1->Rotator).Pitch;
  local_2d8.Roll = (double)(param_1->Rotator).Roll;
  local_2d8.Yaw = (double)(param_1->Rotator).Yaw;
  bVar38 = FAutomationTestBase::TestEqual
                     (pFVar49,L"Non-LWC Rotator must be deserialized to a LWC Rotator",&local_2d8,
                      &local_268,fVar3);
  dVar34 = __real_3f1a36e2e0000000;
  dVar30 = (double)(param_1->Transform).Rotation.m128_f32[0];
  dVar31 = (double)(param_1->Transform).Rotation.m128_f32[1];
  dVar32 = (double)(param_1->Transform).Rotation.m128_f32[2];
  dVar33 = (double)(param_1->Transform).Rotation.m128_f32[3];
  local_1f8 = __real_3f1a36e2e0000000;
  dVar20 = (param_2->Transform).Translation.ZW.m128d_f64[0] -
           (double)(param_1->Transform).Translation.m128_f32[2];
  dVar21 = (param_2->Transform).Translation.ZW.m128d_f64[1] -
           (double)(param_1->Transform).Translation.m128_f32[3];
  lVar64 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar15._8_4_ = (int)lVar64;
  auVar15._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar15._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
  uVar54 = movmskpd((int)pFVar49,auVar15);
  dVar20 = (param_2->Transform).Translation.XY.m128d_f64[0] -
           (double)(param_1->Transform).Translation.m128_f32[0];
  dVar21 = (param_2->Transform).Translation.XY.m128d_f64[1] -
           (double)(param_1->Transform).Translation.m128_f32[1];
  lVar64 = -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar25._8_4_ = (int)lVar64;
  auVar25._0_8_ =
       -(ulonglong)
        (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar25._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
  iVar39 = movmskpd((int)CONCAT71(extraout_var,bVar38),auVar25);
  if ((uVar54 & 0x3fffffff) == 0 && iVar39 == 0) {
    dVar28 = (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar29 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
    dVar65 = (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar66 = (param_2->Transform).Rotation.XY.m128d_f64[1];
    local_248 = __real_3f1a36e2e0000000;
    dVar20 = dVar28 - dVar32;
    dVar21 = dVar29 - dVar33;
    dVar23 = dVar65 - dVar30;
    dVar24 = dVar66 - dVar31;
    lVar64 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar16._8_4_ = (int)lVar64;
    auVar16._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar16._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
    iVar46 = movmskpd(0,auVar16);
    lVar64 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar24,0) & _UNK_15061cc88));
    dVar65 = dVar65 + dVar30;
    dVar66 = dVar66 + dVar31;
    dVar28 = dVar28 + dVar32;
    dVar29 = dVar29 + dVar33;
    auVar17._8_4_ = (int)lVar64;
    auVar17._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar17._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
    uVar54 = movmskpd(iVar39,auVar17);
    uVar47 = iVar46 << 2 | uVar54;
    if (uVar47 != 0) {
      lVar64 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar29,0) & _UNK_15061cc88));
      auVar18._8_4_ = (int)lVar64;
      auVar18._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar18._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
      uVar47 = movmskpd(uVar47,auVar18);
      lVar64 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar66 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar66,0) & _UNK_15061cc88));
      auVar26._8_4_ = (int)lVar64;
      auVar26._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar65 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar65,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar26._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
      uVar54 = movmskpd(uVar54,auVar26);
      if ((uVar47 & 0x3fffffff) != 0 || uVar54 != 0) goto LAB_148bb2d9e;
    }
    local_1f0 = __real_3f1a36e2e0000000;
    dVar20 = (param_2->Transform).Scale3D.ZW.m128d_f64[0] -
             (double)(param_1->Transform).Scale3D.m128_f32[2];
    dVar21 = (param_2->Transform).Scale3D.ZW.m128d_f64[1] -
             (double)(param_1->Transform).Scale3D.m128_f32[3];
    dVar30 = (param_2->Transform).Scale3D.XY.m128d_f64[0] -
             (double)(param_1->Transform).Scale3D.m128_f32[0];
    dVar31 = (param_2->Transform).Scale3D.XY.m128d_f64[1] -
             (double)(param_1->Transform).Scale3D.m128_f32[1];
    lVar64 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar19._8_4_ = (int)lVar64;
    auVar19._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar19._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
    uVar47 = movmskpd(0,auVar19);
    lVar64 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar31,0) & _UNK_15061cc88));
    auVar27._8_4_ = (int)lVar64;
    auVar27._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar30,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar27._12_4_ = (int)((ulonglong)lVar64 >> 0x20);
    iVar39 = movmskpd(uVar54,auVar27);
    if ((uVar47 & 0x3fffffff) != 0 || iVar39 != 0) goto LAB_148bb2d9e;
  }
  else {
LAB_148bb2d9e:
    pFVar41 = FAutomationTestFramework::Get();
    pFVar49 = pFVar41->CurrentTest;
    pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
    ::FString::FString(&local_360,L"Non-LWC Transform must be deserialized to a LWC Transform");
    (*pcVar11)(pFVar49,&local_360,0);
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
  }
  pFVar41 = FAutomationTestFramework::Get();
  local_e8._s_0.X = (double)(param_1->Box).Min.field0_0x0._s_0.X;
  local_b8 = 1;
  local_e8._s_0.Y = (double)(param_1->Box).Min.field0_0x0._s_0.Y;
  local_e8._s_0.Z = (double)(param_1->Box).Min.field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)((longlong)&(param_1->Box).Max.field0_0x0 + 4);
  dVar20 = (double)(float)((ulonglong)uVar8 >> 0x20);
  local_d0 = (double)(param_1->Box).Max.field0_0x0._s_0.X;
  local_c8._8_4_ = SUB84(dVar20,0);
  local_c8._0_8_ = (double)(float)uVar8;
  local_c8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  FAutomationTestBase::TestEqual<UE::Math::TBox<double>_>
            (pFVar41->CurrentTest,L"Non-LWC Box must be deserialized to a LWC Box",
             (TBox<double> *)&local_e8._s_0,&param_2->Box);
  pFVar41 = FAutomationTestFramework::Get();
  local_298 = (param_1->Box2D).bIsValid;
  local_2b8._s_0.X = (double)(param_1->Box2D).Min.field0_0x0._s_0.X;
  local_2b8._s_0.Y = (double)(param_1->Box2D).Min.field0_0x0._s_0.Y;
  local_2a8 = (double)(param_1->Box2D).Max.field0_0x0._s_0.X;
  local_2a0 = (double)(param_1->Box2D).Max.field0_0x0._s_0.Y;
  FAutomationTestBase::TestEqual<UE::Math::TBox2<double>_>
            (pFVar41->CurrentTest,L"Non-LWC Box2D must be deserialized to a LWC Box2D",
             (TBox2<double> *)&local_2b8._s_0,&param_2->Box2D);
  pFVar41 = FAutomationTestFramework::Get();
  local_1e8._s_0.X = (double)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.X;
  local_1e8._s_0.Y = (double)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Y;
  local_1e8._s_0.Z = (double)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)((longlong)&(param_1->BoxSphereBounds).BoxExtent.field0_0x0 + 4);
  dVar20 = (double)(float)((ulonglong)uVar8 >> 0x20);
  local_1d0 = (double)(param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X;
  local_1c8._8_4_ = SUB84(dVar20,0);
  local_1c8._0_8_ = (double)(float)uVar8;
  local_1c8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  local_1b8 = (double)(param_1->BoxSphereBounds).SphereRadius;
  FAutomationTestBase::TestEqual<UE::Math::TBoxSphereBounds<double,double>_>
            (pFVar41->CurrentTest,
             L"Non-LWC BoxSphereBounds must be deserialized to a LWC BoxSphereBounds",
             (TBoxSphereBounds<double,double> *)&local_1e8._s_0,&param_2->BoxSphereBounds);
  pFVar41 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar41->CurrentTest,
             L"Non-LWC struct float must be the same when deserialized to a LWC struct float",
             param_1->Float,param_2->Float,fVar3);
  pFVar41 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar41->CurrentTest,
             L"Non-LWC struct double must be the same when deserialized to a LWC struct double",
             param_1->Double,param_2->Double,dVar34);
  if ((((double)(param_1->OrientedBox).AxisX.field0_0x0._s_0.X ==
        (param_2->OrientedBox).AxisX.field0_0x0._s_0.X) &&
      ((double)(param_1->OrientedBox).AxisX.field0_0x0._s_0.Y ==
       (param_2->OrientedBox).AxisX.field0_0x0._s_0.Y)) &&
     ((double)(param_1->OrientedBox).AxisX.field0_0x0._s_0.Z ==
      (param_2->OrientedBox).AxisX.field0_0x0._s_0.Z)) {
    if ((((double)(param_1->OrientedBox).AxisY.field0_0x0._s_0.X ==
          (param_2->OrientedBox).AxisY.field0_0x0._s_0.X) &&
        ((double)(param_1->OrientedBox).AxisY.field0_0x0._s_0.Y ==
         (param_2->OrientedBox).AxisY.field0_0x0._s_0.Y)) &&
       ((double)(param_1->OrientedBox).AxisY.field0_0x0._s_0.Z ==
        (param_2->OrientedBox).AxisY.field0_0x0._s_0.Z)) {
      if ((((double)(param_1->OrientedBox).AxisZ.field0_0x0._s_0.X ==
            (param_2->OrientedBox).AxisZ.field0_0x0._s_0.X) &&
          ((double)(param_1->OrientedBox).AxisZ.field0_0x0._s_0.Y ==
           (param_2->OrientedBox).AxisZ.field0_0x0._s_0.Y)) &&
         ((double)(param_1->OrientedBox).AxisZ.field0_0x0._s_0.Z ==
          (param_2->OrientedBox).AxisZ.field0_0x0._s_0.Z)) {
        if ((((((double)(param_1->OrientedBox).Center.field0_0x0._s_0.X ==
                (param_2->OrientedBox).Center.field0_0x0._s_0.X) &&
              ((double)(param_1->OrientedBox).Center.field0_0x0._s_0.Y ==
               (param_2->OrientedBox).Center.field0_0x0._s_0.Y)) &&
             ((double)(param_1->OrientedBox).Center.field0_0x0._s_0.Z ==
              (param_2->OrientedBox).Center.field0_0x0._s_0.Z)) &&
            (((double)(param_1->OrientedBox).ExtentX == (param_2->OrientedBox).ExtentX &&
             ((double)(param_1->OrientedBox).ExtentY == (param_2->OrientedBox).ExtentY)))) &&
           ((double)(param_1->OrientedBox).ExtentZ == (param_2->OrientedBox).ExtentZ))
        goto LAB_148bb31b2;
      }
    }
  }
  pFVar41 = FAutomationTestFramework::Get();
  pFVar49 = pFVar41->CurrentTest;
  pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
  ::FString::FString(&local_350,L"Non-LWC OrientedBox must be deserialized to a LWC OrientedBox");
  (*pcVar11)(pFVar49,&local_350,0);
  if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_350.Data.AllocatorInstance.Data);
  }
LAB_148bb31b2:
  iVar39 = (param_1->VectorArray).ArrayNum;
  local_468 = iVar39 == (param_2->VectorArray).ArrayNum;
  pdVar42 = (double *)(ulonglong)local_468;
  uVar54 = 0;
  if (0 < iVar39) {
    local_460 = 0;
    pdVar48 = pdVar58;
    pdVar62 = pdVar58;
    pdVar56 = pdVar58;
    do {
      if ((char)pdVar42 == '\0') goto LAB_148bb3305;
      uVar51 = (uint)pdVar48;
      uVar47 = uVar63;
      if ((int)uVar51 < (param_1->VectorArray).ArrayNum) {
        uVar47 = ~uVar51 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar12 = (param_1->VectorArray).AllocatorInstance.Data;
      fVar3 = *(float *)(pFVar12 + (longlong)pdVar56);
      fVar4 = *(float *)(pFVar12 + 4 + (longlong)pdVar56);
      fVar5 = *(float *)(pFVar12 + 8 + (longlong)pdVar56);
      uVar47 = uVar54;
      if ((int)uVar51 < (param_2->VectorArray).ArrayNum) {
        uVar47 = ~uVar51 >> 0x1f;
      }
      if ((uVar47 == 0) &&
         (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar38)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar12 = (param_2->VectorArray).AllocatorInstance.Data;
      if ((((double)fVar3 == *(double *)((longlong)pdVar62 + (longlong)pFVar12)) &&
          ((double)fVar4 == *(double *)((longlong)pdVar62 + (longlong)(pFVar12 + 8)))) &&
         ((double)fVar5 == *(double *)((longlong)pdVar62 + (longlong)(pFVar12 + 0x10)))) {
        bVar38 = false;
      }
      else {
        bVar38 = true;
      }
      pdVar48 = (double *)(ulonglong)(uVar51 + 1);
      local_460 = local_460 + 1;
      pdVar56 = (double *)((longlong)pdVar56 + 0xc);
      pdVar62 = pdVar62 + 3;
      pdVar42 = pdVar58;
      if (!bVar38) {
        pdVar42 = (double *)(ulonglong)local_468;
      }
      local_468 = SUB81(pdVar42,0);
    } while ((int)(uVar51 + 1) < (param_1->VectorArray).ArrayNum);
  }
  if (local_468 == false) {
LAB_148bb3305:
    pFVar41 = FAutomationTestFramework::Get();
    pFVar49 = pFVar41->CurrentTest;
    pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
    ::FString::FString(&local_340,
                       L"Array of Non-LWC Vectors must be deserialized to an Array of LWC Vectors");
    (*pcVar11)(pFVar49,&local_340,0);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
  }
  local_430 = &(param_1->StrToVec).field_0x10;
  local_448 = *(int *)&(param_2->StrToVec).field_0x8 - *(int *)&(param_2->StrToVec).field_0x34;
  local_440 = (TSet<UE::Math::TVector<float>,DefaultKeyFuncs<UE::Math::TVector<float>,0>,FDefaultSetAllocator>
               *)&param_1->StrToVec;
  iStack_418 = *(int *)&(param_1->StrToVec).field_0x8 - *(int *)&(param_1->StrToVec).field_0x34;
  uVar47 = *(uint *)&(param_1->StrToVec).field_0x28;
  local_410 = 1;
  local_460 = CONCAT44(local_460._4_4_,iStack_418);
  iVar39 = 0;
  uStack_434 = 1;
  uStack_424 = uVar63;
  uStack_438 = uVar54;
  local_420 = uVar63;
  if (uVar47 != 0) {
    puVar61 = *(uint **)&(param_1->StrToVec).field_0x20;
    if (puVar61 == (uint *)0x0) {
      puVar61 = (uint *)local_430;
    }
    uStack_434 = *puVar61;
    pdVar42 = pdVar58;
    pdVar48 = pdVar58;
    local_420 = uVar40;
    uStack_438 = uVar40;
    while (uStack_434 == 0) {
      iVar39 = (int)pdVar42;
      local_420 = (int)pdVar48 + 0x20;
      pdVar48 = (double *)(ulonglong)local_420;
      uStack_438 = iVar39 + 1;
      pdVar42 = (double *)(ulonglong)uStack_438;
      if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_438) {
        iVar39 = *(int *)&(param_1->StrToVec).field_0x28;
        uStack_434 = 1;
        uStack_424 = uVar47;
        goto LAB_148bb3414;
      }
      uStack_434 = puVar61[(longlong)iVar39 + 1];
    }
    iVar39 = *(int *)&(param_1->StrToVec).field_0x28;
    uStack_434 = -uStack_434 & uStack_434;
    uVar2 = (ulonglong)uStack_434 * 2 + 1;
    lVar64 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    local_3f0 = (int)lVar64;
    uStack_424 = local_3f0 + -1 + local_420;
    if (iVar39 < (int)uStack_424) {
      uStack_424 = uVar47;
    }
  }
LAB_148bb3414:
  local_450._0_4_ = *(uint *)&(param_1->StrToVec).field_0x28;
  TStack_3d8._padding_ = CONCAT44(uStack_434,uStack_438);
  uStack_428 = 0xffffffff;
  TStack_3d8.CurrentBitIndex = uStack_424;
  TStack_3d8.UnvisitedBitMask = 0xffffffff;
  uVar47 = (uint)local_450 & 0xffffffe0;
  uStack_41c = local_10c;
  TStack_3d8._28_4_ = local_10c;
  TStack_3d8.BaseBitIndex = local_420;
  uStack_3b8 = CONCAT44(uStack_414,iStack_418);
  iVar46 = (int)(uint)local_450 >> 5;
  bVar45 = (byte)(uint)local_450;
  local_3e0 = (TMap<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
               *)local_440;
  TStack_3d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_430;
  if ((((int)(uint)local_450 < 0) || (iVar39 < (int)(uint)local_450)) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar38)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar51 = *(uint *)&(param_1->StrToVec).field_0x28;
  if ((uint)local_450 != uVar51) {
    puVar60 = *(undefined1 **)&(param_1->StrToVec).field_0x20;
    if (puVar60 == (undefined1 *)0x0) {
      puVar60 = &(param_1->StrToVec).field_0x10;
    }
    uVar52 = -1 << (bVar45 & 0x1f) & *(uint *)(puVar60 + (longlong)iVar46 * 4);
    while (uVar52 == 0) {
      lVar64 = (longlong)iVar46;
      uVar47 = uVar47 + 0x20;
      iVar46 = iVar46 + 1;
      local_450._0_4_ = uVar51;
      if ((int)((uVar51 - 1) + ((int)(uVar51 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar46)
      goto LAB_148bb3530;
      uVar52 = *(uint *)(puVar60 + lVar64 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar52 & uVar52) * 2 + 1;
    lVar64 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    local_3ec = (int)lVar64;
    local_450._0_4_ = (uVar47 - 1) + local_3ec;
    if ((int)uVar51 < (int)(uint)local_450) {
      local_450._0_4_ = uVar51;
    }
  }
LAB_148bb3530:
  uVar47 = (uint)local_450;
  while( true ) {
    pTVar36 = local_3e0;
    if (*(int *)&local_3e0->field_0x8 - *(int *)&local_3e0->field_0x34 != (int)uStack_3b8) {
      local_467[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<float>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_467);
    }
    if (((TStack_3d8.CurrentBitIndex == uVar47) &&
        (TStack_3d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->StrToVec).field_0x10
        )) && (pTVar36 == &param_1->StrToVec)) break;
    pFVar1 = (FString *)(*(longlong *)pTVar36 + (longlong)TStack_3d8.CurrentBitIndex * 0x28);
    pTVar43 = TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                      *)&param_2->StrToVec,pFVar1);
    pdVar42 = (double *)&pTVar43->field_0x10;
    if (pTVar43 == (TTuple<FString,UE::Math::TVector<double>_> *)0x0) {
      pdVar42 = pdVar58;
    }
    if (pdVar42 == (double *)0x0) goto LAB_148bb3618;
    local_430 = (undefined1 *)pdVar42[2];
    if (((*pdVar42 != (double)*(float *)&pFVar1[1].Data.AllocatorInstance.Data) ||
        (pdVar42[1] != (double)*(float *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4))) ||
       ((double)local_430 != (double)(float)pFVar1[1].Data.ArrayNum)) goto LAB_148bb3618;
    TStack_3d8.UnvisitedBitMask = TStack_3d8.UnvisitedBitMask & ~TStack_3d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3d8);
  }
  if ((int)local_460 == local_448) goto LAB_148bb3655;
LAB_148bb3618:
  pFVar41 = FAutomationTestFramework::Get();
  pFVar49 = pFVar41->CurrentTest;
  pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
  ::FString::FString(&local_330,
                     L"Map of Non-LWC Vectors must be deserialized to a Map of LWC Vectors");
  (*pcVar11)(pFVar49,&local_330,0);
  if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.Data.AllocatorInstance.Data);
  }
LAB_148bb3655:
  puVar60 = &(param_1->VectorSet).Elements.field_0x10;
  local_448 = *(int *)&(param_1->VectorSet).Elements.field_0x8 -
              *(int *)&(param_1->VectorSet).Elements.field_0x34;
  local_450 = &param_1->VectorSet;
  uVar47 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  local_460 = CONCAT44(local_460._4_4_,
                       *(int *)&(param_2->VectorSet).Elements.field_0x8 -
                       *(int *)&(param_2->VectorSet).Elements.field_0x34);
  uStack_424 = uVar54;
  if (uVar47 != 0) {
    puVar61 = *(uint **)&(param_1->VectorSet).Elements.field_0x20;
    if (puVar61 == (uint *)0x0) {
      puVar61 = (uint *)puVar60;
    }
    uVar54 = *puVar61;
    pdVar42 = pdVar58;
    uVar63 = uVar40;
    uVar55 = 0;
    while (uVar54 == 0) {
      iVar39 = (int)pdVar42;
      uVar55 = (int)pdVar58 + 0x20;
      pdVar58 = (double *)(ulonglong)uVar55;
      uVar63 = iVar39 + 1;
      pdVar42 = (double *)(ulonglong)uVar63;
      uStack_424 = uVar47;
      if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar63)
      goto LAB_148bb3701;
      uVar54 = puVar61[(longlong)iVar39 + 1];
    }
    local_410 = (ulonglong)(-uVar54 & uVar54);
    uVar2 = local_410 * 2 + 1;
    lVar64 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    local_3e8 = (int)lVar64;
    uStack_424 = local_3e8 + -1 + uVar55;
    if ((int)uVar47 < (int)uStack_424) {
      uStack_424 = uVar47;
    }
  }
LAB_148bb3701:
  uVar40 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  uStack_434 = (uint)local_410;
  uVar54 = uVar40 & 0xffffffe0;
  TStack_3a8._padding_ = CONCAT44(uStack_434,uVar63);
  uStack_428 = 0xffffffff;
  TStack_3a8.CurrentBitIndex = uStack_424;
  TStack_3a8.UnvisitedBitMask = 0xffffffff;
  uStack_41c = local_ec;
  TStack_3a8._28_4_ = local_ec;
  TStack_3a8.BaseBitIndex = uVar55;
  uStack_388 = CONCAT44(uStack_414,local_448);
  iVar39 = (int)uVar40 >> 5;
  uStack_438 = uVar63;
  local_420 = uVar55;
  local_440 = local_450;
  local_430 = puVar60;
  iStack_418 = local_448;
  local_3b0 = local_450;
  TStack_3a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar60;
  if ((((int)uVar40 < 0) || ((int)uVar47 < (int)uVar40)) &&
     (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar38)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar35 = local_450;
  uVar63 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  if (uVar40 != uVar63) {
    puVar59 = *(undefined1 **)&(param_1->VectorSet).Elements.field_0x20;
    if (puVar59 == (undefined1 *)0x0) {
      puVar59 = puVar60;
    }
    uVar55 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar59 + (longlong)iVar39 * 4);
    while (uVar55 == 0) {
      lVar64 = (longlong)iVar39;
      uVar54 = uVar54 + 0x20;
      iVar39 = iVar39 + 1;
      uVar40 = uVar63;
      if ((int)((uVar63 - 1) + ((int)(uVar63 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar39)
      goto LAB_148bb3820;
      uVar55 = *(uint *)(puVar59 + lVar64 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar55 & uVar55) * 2 + 1;
    lVar64 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar64 == 0; lVar64 = lVar64 + -1) {
      }
    }
    uVar40 = (int)lVar64 + -1 + uVar54;
    if ((int)uVar63 < (int)uVar40) {
      uVar40 = uVar63;
    }
  }
LAB_148bb3820:
  do {
    pTVar37 = local_3b0;
    if (*(int *)&(local_3b0->Elements).field_0x8 - *(int *)&(local_3b0->Elements).field_0x34 !=
        (int)uStack_388) {
      `TSparseArray<TSparseSetElement<UE::Math::TVector<float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_458);
    }
    lVar64 = (longlong)TStack_3a8.CurrentBitIndex;
    if (((TStack_3a8.CurrentBitIndex == uVar40) &&
        (TStack_3a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar60)) &&
       (pTVar37 == pTVar35)) {
      if (local_448 == (int)local_460) {
        return;
      }
LAB_148bb3941:
      pFVar41 = FAutomationTestFramework::Get();
      pFVar49 = pFVar41->CurrentTest;
      pcVar11 = *(code **)(pFVar49->_padding_ + 0x28);
      ::FString::FString(&local_320,
                         L"Set of Non-LWC Vectors must be deserialized to a Set of LWC Vectors");
      (*pcVar11)(pFVar49,&local_320,0);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar44 = *(longlong *)&pTVar37->Elements;
    local_408 = (double)*(float *)(lVar44 + lVar64 * 0x14);
    local_400 = (double)*(float *)(lVar44 + 4 + lVar64 * 0x14);
    local_3f8 = (double)*(float *)(lVar44 + 8 + lVar64 * 0x14);
    uVar63 = FCrc::MemCrc_DEPRECATED(&local_408,0x18,0);
    if (*(int *)&(param_2->VectorSet).Elements.field_0x8 ==
        *(int *)&(param_2->VectorSet).Elements.field_0x34) goto LAB_148bb3941;
    FVar13 = (param_2->VectorSet).Hash.SecondaryData;
    FVar50 = (ForElementType<FSetElementId>)&(param_2->VectorSet).Hash;
    if (FVar13 != (ForElementType<FSetElementId>)0x0) {
      FVar50 = FVar13;
    }
    iVar39 = *(int *)((longlong)FVar50 +
                     (ulonglong)((param_2->VectorSet).HashSize - 1U & uVar63) * 4);
    if (iVar39 == -1) goto LAB_148bb3941;
    lVar64 = *(longlong *)&(param_2->VectorSet).Elements;
    while (((lVar44 = (longlong)iVar39 * 0x20, local_408 != *(double *)(lVar44 + lVar64) ||
            (local_400 != *(double *)(lVar44 + 8 + lVar64))) ||
           (local_3f8 != *(double *)(lVar44 + 0x10 + lVar64)))) {
      iVar39 = *(int *)(lVar44 + 0x18 + lVar64);
      if (iVar39 == -1) goto LAB_148bb3941;
    }
    if (iVar39 == -1) goto LAB_148bb3941;
    TStack_3a8.UnvisitedBitMask = TStack_3a8.UnvisitedBitMask & ~TStack_3a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3a8);
  } while( true );
}

// ValidateLWCSerializationBackwardCompatibility @ 148bb39b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StructSerializerTest::ValidateLWCSerializationBackwardCompatibility
          (FStructSerializerLWCTypesTest *param_1,FStructSerializerNonLWCTypesTest *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  FAutomationTestBase *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<FSetElementId> FVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *pTVar18;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *pTVar19;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *pTVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  FAutomationTestFramework *pFVar24;
  TMatrix<float> *pTVar25;
  FAutomationTestFramework *extraout_RAX;
  TVector<float> *pTVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ForElementType<FSetElementId> FVar30;
  uint uVar31;
  FString *pFVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ulonglong uVar36;
  undefined1 *puVar38;
  TMatrix<float> *pTVar39;
  undefined1 *puVar40;
  uint *puVar41;
  uint uVar42;
  ulonglong uVar43;
  uint uVar44;
  bool bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 local_2c7 [3];
  int local_2c4;
  longlong local_2c0;
  undefined1 local_2b8 [8];
  undefined8 local_2b0;
  float local_2a0;
  float local_29c;
  float local_298;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *local_290;
  uint uStack_288;
  uint uStack_284;
  undefined1 *local_280;
  undefined4 uStack_278;
  uint uStack_274;
  uint local_270;
  undefined4 uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  ulonglong local_260;
  int local_258;
  int local_254;
  int local_250;
  TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  ulonglong uVar37;
  
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if ((((float)(param_1->Vector).field0_0x0._s_0.X != (param_2->Vector).field0_0x0._s_0.X) ||
      ((float)(param_1->Vector).field0_0x0._s_0.Y != (param_2->Vector).field0_0x0._s_0.Y)) ||
     ((float)(param_1->Vector).field0_0x0._s_0.Z != (param_2->Vector).field0_0x0._s_0.Z)) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_118,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_118,0);
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if (((float)(param_1->Vector2D).field0_0x0._s_0.X != (param_2->Vector2D).field0_0x0._s_0.X) ||
     ((float)(param_1->Vector2D).field0_0x0._s_0.Y != (param_2->Vector2D).field0_0x0._s_0.Y)) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_108,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_108,0);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if ((((float)(param_1->Vector4).field0_0x0._s_0.X != (param_2->Vector4).field0_0x0._s_0.X) ||
      ((float)(param_1->Vector4).field0_0x0._s_0.Y != (param_2->Vector4).field0_0x0._s_0.Y)) ||
     (((float)(param_1->Vector4).field0_0x0._s_0.Z != (param_2->Vector4).field0_0x0._s_0.Z ||
      ((float)(param_1->Vector4).field0_0x0._s_0.W != (param_2->Vector4).field0_0x0._s_0.W)))) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_f8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_f8,0);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  uVar37 = 0;
  uVar35 = 0;
  uVar23 = 0;
  pFVar6 = pFVar24->CurrentTest;
  pTVar25 = &param_2->Matrix;
  uVar44 = 0;
  local_e8 = (float)(param_1->Matrix).M[0][0];
  fStack_e4 = (float)(param_1->Matrix).M[0][1];
  fStack_e0 = (float)(param_1->Matrix).M[0][2];
  fStack_dc = (float)(param_1->Matrix).M[0][3];
  local_d8 = CONCAT44((float)(param_1->Matrix).M[1][1],(float)(param_1->Matrix).M[1][0]);
  uStack_d0 = CONCAT44((float)(param_1->Matrix).M[1][3],(float)(param_1->Matrix).M[1][2]);
  local_c8 = (float)(param_1->Matrix).M[2][0];
  fStack_c4 = (float)(param_1->Matrix).M[2][1];
  fStack_c0 = (float)(param_1->Matrix).M[2][2];
  fStack_bc = (float)(param_1->Matrix).M[2][3];
  local_b8 = CONCAT44((float)(param_1->Matrix).M[3][1],(float)(param_1->Matrix).M[3][0]);
  uStack_b0 = CONCAT44((float)(param_1->Matrix).M[3][3],(float)(param_1->Matrix).M[3][2]);
  uVar27 = uVar37;
  pTVar39 = pTVar25;
  uVar36 = uVar37;
  do {
    do {
      if (pTVar25->M[0][0] !=
          *(float *)((longlong)pTVar25 + ((longlong)&local_118 - (longlong)param_2))) {
        pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
        ::FString::PrintfImpl(&local_1d8,L"%s: The two values are not equal.");
        (*pcVar7)(pFVar6,&local_1d8,0);
        if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
        }
        goto LAB_148bb3c5f;
      }
      uVar27 = uVar27 + 1;
      pTVar25 = (TMatrix<float> *)(pTVar25->M[0] + 1);
    } while ((longlong)uVar27 < 4);
    uVar36 = uVar36 + 1;
    pTVar25 = (TMatrix<float> *)(pTVar39->M + 1);
    uVar27 = uVar37;
    pTVar39 = pTVar25;
  } while ((longlong)uVar36 < 4);
LAB_148bb3c5f:
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if (((((float)(double)(param_1->Plane)._padding_ != *(float *)&(param_2->Plane)._padding_) ||
       ((float)(double)(param_1->Plane)._padding_ !=
        *(float *)((longlong)&(param_2->Plane)._padding_ + 4))) ||
      ((float)(double)(param_1->Plane)._padding_ != (float)(param_2->Plane)._padding_)) ||
     ((float)(param_1->Plane).W != (param_2->Plane).W)) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1c8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_1c8,0);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  auVar13._4_4_ = -(uint)((param_2->Quat).Y != (float)(param_1->Quat).Y);
  auVar13._0_4_ = -(uint)((param_2->Quat).X != (float)(param_1->Quat).X);
  auVar13._8_4_ = -(uint)((param_2->Quat).Z != (float)(param_1->Quat).Z);
  auVar13._12_4_ = -(uint)((param_2->Quat).W != (float)(param_1->Quat).W);
  iVar22 = movmskps((int)pFVar24,auVar13);
  if (iVar22 != 0) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1b8,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_1b8,0);
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if ((((float)(param_1->Rotator).Pitch != (param_2->Rotator).Pitch) ||
      ((float)(param_1->Rotator).Yaw != (param_2->Rotator).Yaw)) ||
     ((float)(param_1->Rotator).Roll != (param_2->Rotator).Roll)) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_1a8,L"%s: The two values are not equal.");
    pFVar24 = (FAutomationTestFramework *)(*pcVar7)(pFVar6,&local_1a8,0);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      pFVar24 = extraout_RAX;
    }
  }
  fVar46 = (float)(param_1->Transform).Rotation.ZW.m128d_f64[0];
  fVar47 = (float)(param_1->Transform).Rotation.ZW.m128d_f64[1];
  fVar48 = (float)(param_1->Transform).Rotation.XY.m128d_f64[0];
  fVar49 = (float)(param_1->Transform).Rotation.XY.m128d_f64[1];
  auVar10._4_4_ =
       -(uint)(_UNK_1506895e4 <
              (float)((uint)((param_2->Transform).Translation.m128_f32[1] -
                            (float)(param_1->Transform).Translation.XY.m128d_f64[1]) &
                     _UNK_15061cc74));
  auVar10._0_4_ =
       -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
              (float)((uint)((param_2->Transform).Translation.m128_f32[0] -
                            (float)(param_1->Transform).Translation.XY.m128d_f64[0]) &
                     __xmm_7fffffff7fffffff7fffffff7fffffff));
  auVar10._8_4_ =
       -(uint)(_UNK_1506895e8 <
              (float)((uint)((param_2->Transform).Translation.m128_f32[2] -
                            (float)(param_1->Transform).Translation.ZW.m128d_f64[0]) &
                     _UNK_15061cc78));
  auVar10._12_4_ =
       -(uint)(_UNK_1506895ec <
              (float)((uint)((param_2->Transform).Translation.m128_f32[3] -
                            (float)(param_1->Transform).Translation.ZW.m128d_f64[1]) &
                     _UNK_15061cc7c));
  iVar22 = movmskps((int)pFVar24,auVar10);
  if (iVar22 == 0) {
    fVar14 = (param_2->Transform).Rotation.m128_f32[0];
    fVar15 = (param_2->Transform).Rotation.m128_f32[1];
    fVar16 = (param_2->Transform).Rotation.m128_f32[2];
    fVar17 = (param_2->Transform).Rotation.m128_f32[3];
    auVar11._4_4_ = -(uint)(_UNK_1506895e4 < (float)((uint)(fVar15 - fVar49) & _UNK_15061cc74));
    auVar11._0_4_ =
         -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                (float)((uint)(fVar14 - fVar48) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    auVar11._8_4_ = -(uint)(_UNK_1506895e8 < (float)((uint)(fVar16 - fVar46) & _UNK_15061cc78));
    auVar11._12_4_ = -(uint)(_UNK_1506895ec < (float)((uint)(fVar17 - fVar47) & _UNK_15061cc7c));
    iVar22 = movmskps(0,auVar11);
    if (((iVar22 != 0) &&
        (auVar12._4_4_ = -(uint)(_UNK_1506895e4 < (float)((uint)(fVar49 + fVar15) & _UNK_15061cc74))
        , auVar12._0_4_ =
               -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                      (float)((uint)(fVar48 + fVar14) & __xmm_7fffffff7fffffff7fffffff7fffffff)),
        auVar12._8_4_ = -(uint)(_UNK_1506895e8 < (float)((uint)(fVar46 + fVar16) & _UNK_15061cc78)),
        auVar12._12_4_ = -(uint)(_UNK_1506895ec < (float)((uint)(fVar47 + fVar17) & _UNK_15061cc7c))
        , iVar22 = movmskps(iVar22,auVar12), iVar22 != 0)) ||
       (auVar50._4_4_ =
             -(uint)(_UNK_1506895e4 <
                    (float)((uint)((param_2->Transform).Scale3D.m128_f32[1] -
                                  (float)(param_1->Transform).Scale3D.XY.m128d_f64[1]) &
                           _UNK_15061cc74)),
       auVar50._0_4_ =
            -(uint)(___xmm_38d1b71738d1b71738d1b71738d1b717 <
                   (float)((uint)((param_2->Transform).Scale3D.m128_f32[0] -
                                 (float)(param_1->Transform).Scale3D.XY.m128d_f64[0]) &
                          __xmm_7fffffff7fffffff7fffffff7fffffff)),
       auVar50._8_4_ =
            -(uint)(_UNK_1506895e8 <
                   (float)((uint)((param_2->Transform).Scale3D.m128_f32[2] -
                                 (float)(param_1->Transform).Scale3D.ZW.m128d_f64[0]) &
                          _UNK_15061cc78)),
       auVar50._12_4_ =
            -(uint)(_UNK_1506895ec <
                   (float)((uint)((param_2->Transform).Scale3D.m128_f32[3] -
                                 (float)(param_1->Transform).Scale3D.ZW.m128d_f64[1]) &
                          _UNK_15061cc7c)), iVar22 = movmskps(0,auVar50), iVar22 != 0))
    goto LAB_148bb3ecf;
  }
  else {
LAB_148bb3ecf:
    pFVar24 = FAutomationTestFramework::Get();
    pFVar6 = pFVar24->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_198,L"LWC Transform must be deserialized to a Non-LWC Transform");
    (*pcVar7)(pFVar6,&local_198,0);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if ((((((param_2->Box).IsValid == '\0') ||
        ((float)(param_1->Box).Min.field0_0x0._s_0.X != (param_2->Box).Min.field0_0x0._s_0.X)) ||
       ((float)(param_1->Box).Min.field0_0x0._s_0.Y != (param_2->Box).Min.field0_0x0._s_0.Y)) ||
      (((float)(param_1->Box).Min.field0_0x0._s_0.Z != (param_2->Box).Min.field0_0x0._s_0.Z ||
       ((float)(param_1->Box).Max.field0_0x0._s_0.X != (param_2->Box).Max.field0_0x0._s_0.X)))) ||
     (((float)(param_1->Box).Max.field0_0x0._s_0.Y != (param_2->Box).Max.field0_0x0._s_0.Y ||
      ((float)(param_1->Box).Max.field0_0x0._s_0.Z != (param_2->Box).Max.field0_0x0._s_0.Z)))) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_188,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_188,0);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if ((((float)(param_1->Box2D).Min.field0_0x0._s_0.X != (param_2->Box2D).Min.field0_0x0._s_0.X) ||
      ((float)(param_1->Box2D).Min.field0_0x0._s_0.Y != (param_2->Box2D).Min.field0_0x0._s_0.Y)) ||
     (((float)(param_1->Box2D).Max.field0_0x0._s_0.X != (param_2->Box2D).Max.field0_0x0._s_0.X ||
      ((float)(param_1->Box2D).Max.field0_0x0._s_0.Y != (param_2->Box2D).Max.field0_0x0._s_0.Y)))) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_178,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_178,0);
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  if (((((float)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.X !=
         (param_2->BoxSphereBounds).Origin.field0_0x0._s_0.X) ||
       ((float)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Y !=
        (param_2->BoxSphereBounds).Origin.field0_0x0._s_0.Y)) ||
      ((float)(param_1->BoxSphereBounds).Origin.field0_0x0._s_0.Z !=
       (param_2->BoxSphereBounds).Origin.field0_0x0._s_0.Z)) ||
     ((((float)(param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X !=
        (param_2->BoxSphereBounds).BoxExtent.field0_0x0._s_0.X ||
       ((float)(param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y !=
        (param_2->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Y)) ||
      (((float)(param_1->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z !=
        (param_2->BoxSphereBounds).BoxExtent.field0_0x0._s_0.Z ||
       ((float)(param_1->BoxSphereBounds).SphereRadius != (param_2->BoxSphereBounds).SphereRadius)))
      ))) {
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_168,L"%s: The two values are not equal.");
    (*pcVar7)(pFVar6,&local_168,0);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar24->CurrentTest,
             L"LWC struct float must be the same when deserialized to a non-LWC struct float",
             param_1->Float,param_2->Float,__real_38d1b717);
  pFVar24 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar24->CurrentTest,
             L"LWC struct double must be the same when deserialized to a non-LWC struct double",
             param_1->Double,param_2->Double,__real_3f1a36e2e0000000);
  if ((((double)(param_2->OrientedBox).AxisX.field0_0x0._s_0.X ==
        (param_1->OrientedBox).AxisX.field0_0x0._s_0.X) &&
      ((double)(param_2->OrientedBox).AxisX.field0_0x0._s_0.Y ==
       (param_1->OrientedBox).AxisX.field0_0x0._s_0.Y)) &&
     ((double)(param_2->OrientedBox).AxisX.field0_0x0._s_0.Z ==
      (param_1->OrientedBox).AxisX.field0_0x0._s_0.Z)) {
    if ((((double)(param_2->OrientedBox).AxisY.field0_0x0._s_0.X ==
          (param_1->OrientedBox).AxisY.field0_0x0._s_0.X) &&
        ((double)(param_2->OrientedBox).AxisY.field0_0x0._s_0.Y ==
         (param_1->OrientedBox).AxisY.field0_0x0._s_0.Y)) &&
       ((double)(param_2->OrientedBox).AxisY.field0_0x0._s_0.Z ==
        (param_1->OrientedBox).AxisY.field0_0x0._s_0.Z)) {
      if ((((double)(param_2->OrientedBox).AxisZ.field0_0x0._s_0.X ==
            (param_1->OrientedBox).AxisZ.field0_0x0._s_0.X) &&
          ((double)(param_2->OrientedBox).AxisZ.field0_0x0._s_0.Y ==
           (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Y)) &&
         ((double)(param_2->OrientedBox).AxisZ.field0_0x0._s_0.Z ==
          (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Z)) {
        if ((((double)(param_2->OrientedBox).Center.field0_0x0._s_0.X ==
              (param_1->OrientedBox).Center.field0_0x0._s_0.X) &&
            ((double)(param_2->OrientedBox).Center.field0_0x0._s_0.Y ==
             (param_1->OrientedBox).Center.field0_0x0._s_0.Y)) &&
           (((double)(param_2->OrientedBox).Center.field0_0x0._s_0.Z ==
             (param_1->OrientedBox).Center.field0_0x0._s_0.Z &&
            ((((double)(param_2->OrientedBox).ExtentX == (param_1->OrientedBox).ExtentX &&
              ((double)(param_2->OrientedBox).ExtentY == (param_1->OrientedBox).ExtentY)) &&
             ((double)(param_2->OrientedBox).ExtentZ == (param_1->OrientedBox).ExtentZ))))))
        goto LAB_148bb438b;
      }
    }
  }
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
  ::FString::FString(&local_158,L"LWC OrientedBox must be deserialized to a Non-LWC OrientedBox");
  (*pcVar7)(pFVar6,&local_158,0);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
LAB_148bb438b:
  iVar22 = (param_1->VectorArray).ArrayNum;
  bVar45 = iVar22 == (param_2->VectorArray).ArrayNum;
  uVar34 = 0;
  if (0 < iVar22) {
    local_2c0 = 0;
    uVar27 = uVar37;
    uVar36 = uVar37;
    uVar43 = uVar37;
    do {
      if (!bVar45) goto LAB_148bb44eb;
      uVar31 = (uint)uVar27;
      uVar33 = uVar44;
      if ((int)uVar31 < (param_1->VectorArray).ArrayNum) {
        uVar33 = ~uVar31 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar8 = (param_1->VectorArray).AllocatorInstance.Data;
      dVar1 = *(double *)(pFVar8 + uVar43);
      dVar2 = *(double *)(pFVar8 + uVar43 + 8);
      dVar3 = *(double *)(pFVar8 + uVar43 + 0x10);
      uVar33 = uVar34;
      if ((int)uVar31 < (param_2->VectorArray).ArrayNum) {
        uVar33 = ~uVar31 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar8 = (param_2->VectorArray).AllocatorInstance.Data;
      if ((((float)dVar1 != *(float *)(pFVar8 + uVar36)) ||
          ((float)dVar2 != *(float *)(pFVar8 + uVar36 + 4))) ||
         ((float)dVar3 != *(float *)(pFVar8 + uVar36 + 8))) {
        bVar45 = false;
      }
      uVar27 = (ulonglong)(uVar31 + 1);
      local_2c0 = local_2c0 + 1;
      uVar43 = uVar43 + 0x18;
      uVar36 = uVar36 + 0xc;
    } while ((int)(uVar31 + 1) < (param_1->VectorArray).ArrayNum);
  }
  if (!bVar45) {
LAB_148bb44eb:
    pFVar24 = FAutomationTestFramework::Get();
    pFVar6 = pFVar24->CurrentTest;
    pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
    ::FString::FString(&local_148,
                       L"Array of LWC Vectors must be deserialized to an Array of Non-LWC Vectors");
    (*pcVar7)(pFVar6,&local_148,0);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  local_280 = &(param_1->StrToVec).field_0x10;
  local_2c4 = *(int *)&(param_1->StrToVec).field_0x8 - *(int *)&(param_1->StrToVec).field_0x34;
  local_290 = (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&param_1->StrToVec;
  uVar33 = *(uint *)&(param_1->StrToVec).field_0x28;
  local_2c0 = CONCAT44(local_2c0._4_4_,
                       *(int *)&(param_2->StrToVec).field_0x8 -
                       *(int *)&(param_2->StrToVec).field_0x34);
  local_260 = 1;
  uStack_284 = 1;
  uStack_274 = uVar34;
  uStack_288 = uVar34;
  local_270 = uVar34;
  if (uVar33 != 0) {
    puVar41 = *(uint **)&(param_1->StrToVec).field_0x20;
    if (puVar41 == (uint *)0x0) {
      puVar41 = (uint *)local_280;
    }
    uStack_284 = *puVar41;
    uVar27 = uVar37;
    uVar36 = uVar37;
    local_270 = uVar23;
    uStack_288 = uVar23;
    while (uStack_284 == 0) {
      iVar22 = (int)uVar27;
      local_270 = (int)uVar36 + 0x20;
      uVar36 = (ulonglong)local_270;
      uStack_288 = iVar22 + 1;
      uVar27 = (ulonglong)uStack_288;
      uStack_284 = 1;
      uStack_274 = uVar33;
      if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_288)
      goto LAB_148bb45fd;
      uStack_284 = puVar41[(longlong)iVar22 + 1];
    }
    uStack_284 = -uStack_284 & uStack_284;
    uVar27 = (ulonglong)uStack_284 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_258 = (int)lVar28;
    uStack_274 = (local_270 - 1) + local_258;
    if ((int)uVar33 < (int)uStack_274) {
      uStack_274 = uVar33;
    }
  }
LAB_148bb45fd:
  uVar33 = *(uint *)&(param_1->StrToVec).field_0x28;
  TStack_230._padding_ = CONCAT44(uStack_284,uStack_288);
  uStack_26c = local_6c;
  uStack_278 = 0xffffffff;
  uVar42 = uVar33 & 0xffffffe0;
  TStack_230.CurrentBitIndex = uStack_274;
  TStack_230.UnvisitedBitMask = 0xffffffff;
  TStack_230._28_4_ = local_6c;
  TStack_230.BaseBitIndex = local_270;
  uStack_210 = CONCAT44(uStack_264,local_2c4);
  iVar22 = (int)uVar33 >> 5;
  local_2b0 = (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)CONCAT44(local_2b0._4_4_,uVar33);
  uVar31 = uVar33;
  iStack_268 = local_2c4;
  local_238 = (TMap<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
               *)local_290;
  TStack_230.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_280;
  if ((int)uVar33 < 0) {
    bVar45 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar45) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar31 = (uint)local_2b0;
  }
  uVar5 = *(uint *)&(param_1->StrToVec).field_0x28;
  if (uVar31 != uVar5) {
    puVar40 = *(undefined1 **)&(param_1->StrToVec).field_0x20;
    local_2b0 = (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_2b0._4_4_,uVar5);
    if (puVar40 == (undefined1 *)0x0) {
      puVar40 = &(param_1->StrToVec).field_0x10;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar40 + (longlong)iVar22 * 4);
    while (uVar33 == 0) {
      lVar28 = (longlong)iVar22;
      uVar42 = uVar42 + 0x20;
      iVar22 = iVar22 + 1;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_148bb4720;
      uVar33 = *(uint *)(puVar40 + lVar28 * 4 + 4);
    }
    uVar27 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_254 = (int)lVar28;
    uVar42 = local_254 + -1 + uVar42;
    if ((int)uVar5 < (int)uVar42) {
      uVar42 = uVar5;
    }
    local_2b0 = (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)CONCAT44(local_2b0._4_4_,uVar42);
  }
LAB_148bb4720:
  iVar22 = (uint)local_2b0;
  while( true ) {
    pTVar19 = local_238;
    if (*(int *)&local_238->field_0x8 - *(int *)&local_238->field_0x34 != (int)uStack_210) {
      local_2c7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2c7);
    }
    if (((TStack_230.CurrentBitIndex == iVar22) &&
        (TStack_230.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->StrToVec).field_0x10
        )) && (pTVar19 == &param_1->StrToVec)) break;
    pFVar32 = (FString *)(*(longlong *)pTVar19 + (longlong)TStack_230.CurrentBitIndex * 0x30);
    pTVar26 = TMapBase<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
              ::Find((TMapBase<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
                      *)&param_2->StrToVec,pFVar32);
    if (pTVar26 == (TVector<float> *)0x0) goto LAB_148bb47f0;
    uVar4 = *(undefined8 *)&pTVar26->field0_0x0;
    local_2b0 = (TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 *)uVar4;
    if ((((float)uVar4 != (float)(double)pFVar32[1].Data.AllocatorInstance.Data) ||
        (local_2b0._4_4_ = (float)((ulonglong)uVar4 >> 0x20),
        bVar45 = local_2b0._4_4_ != (float)*(double *)&pFVar32[1].Data.ArrayNum, bVar45)) ||
       ((pTVar26->field0_0x0)._s_0.Z != (float)(double)pFVar32[2].Data.AllocatorInstance.Data))
    goto LAB_148bb47f0;
    TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
  }
  if (local_2c4 == (int)local_2c0) goto LAB_148bb4836;
LAB_148bb47f0:
  pFVar24 = FAutomationTestFramework::Get();
  pFVar6 = pFVar24->CurrentTest;
  pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
  ::FString::FString(&local_138,
                     L"Map of LWC Vectors must be deserialized to a Map of Non-LWC Vectors");
  (*pcVar7)(pFVar6,&local_138,0);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
LAB_148bb4836:
  puVar40 = &(param_1->VectorSet).Elements.field_0x10;
  local_2c4 = *(int *)&(param_1->VectorSet).Elements.field_0x8 -
              *(int *)&(param_1->VectorSet).Elements.field_0x34;
  local_2b0 = &param_1->VectorSet;
  uVar33 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  local_2c0 = CONCAT44(local_2c0._4_4_,
                       *(int *)&(param_2->VectorSet).Elements.field_0x8 -
                       *(int *)&(param_2->VectorSet).Elements.field_0x34);
  uStack_274 = uVar34;
  if (uVar33 != 0) {
    puVar41 = *(uint **)&(param_1->VectorSet).Elements.field_0x20;
    if (puVar41 == (uint *)0x0) {
      puVar41 = (uint *)puVar40;
    }
    uVar34 = *puVar41;
    uVar27 = uVar37;
    uVar44 = uVar23;
    uVar35 = 0;
    while (uVar34 == 0) {
      iVar22 = (int)uVar27;
      uVar35 = (int)uVar37 + 0x20;
      uVar37 = (ulonglong)uVar35;
      uVar44 = iVar22 + 1;
      uVar27 = (ulonglong)uVar44;
      uStack_274 = uVar33;
      if ((int)((uVar33 - 1) + ((int)(uVar33 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar44)
      goto LAB_148bb48e1;
      uVar34 = puVar41[(longlong)iVar22 + 1];
    }
    local_260 = (ulonglong)(-uVar34 & uVar34);
    uVar37 = local_260 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    local_250 = (int)lVar28;
    uStack_274 = (uVar35 - 1) + local_250;
    if ((int)uVar33 < (int)uStack_274) {
      uStack_274 = uVar33;
    }
  }
LAB_148bb48e1:
  uVar23 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  uStack_284 = (uint)local_260;
  uVar34 = uVar23 & 0xffffffe0;
  TStack_200._padding_ = CONCAT44(uStack_284,uVar44);
  uStack_278 = 0xffffffff;
  TStack_200.CurrentBitIndex = uStack_274;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  uStack_26c = local_8c;
  TStack_200._28_4_ = local_8c;
  TStack_200.BaseBitIndex = uVar35;
  uStack_1e0 = CONCAT44(uStack_264,local_2c4);
  iVar22 = (int)uVar23 >> 5;
  local_290 = local_2b0;
  uStack_288 = uVar44;
  local_280 = puVar40;
  local_270 = uVar35;
  iStack_268 = local_2c4;
  local_208 = local_2b0;
  TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
  if (((int)uVar23 < 0) &&
     (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar45)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar18 = local_2b0;
  uVar44 = *(uint *)&(param_1->VectorSet).Elements.field_0x28;
  if (uVar23 != uVar44) {
    puVar38 = *(undefined1 **)&(param_1->VectorSet).Elements.field_0x20;
    if (puVar38 == (undefined1 *)0x0) {
      puVar38 = puVar40;
    }
    uVar35 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar22 * 4);
    while (uVar35 == 0) {
      lVar28 = (longlong)iVar22;
      uVar34 = uVar34 + 0x20;
      iVar22 = iVar22 + 1;
      uVar23 = uVar44;
      if ((int)((uVar44 - 1) + ((int)(uVar44 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_148bb49f0;
      uVar35 = *(uint *)(puVar38 + lVar28 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar28 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar23 = (int)lVar28 + -1 + uVar34;
    if ((int)uVar44 < (int)uVar23) {
      uVar23 = uVar44;
    }
  }
LAB_148bb49f0:
  do {
    pTVar20 = local_208;
    if (*(int *)&(local_208->Elements).field_0x8 - *(int *)&(local_208->Elements).field_0x34 !=
        (int)uStack_1e0) {
      `TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    if (((TStack_200.CurrentBitIndex == uVar23) &&
        (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar40)) &&
       (pTVar20 == pTVar18)) {
      if (local_2c4 == (int)local_2c0) {
        return;
      }
LAB_148bb4b0f:
      pFVar24 = FAutomationTestFramework::Get();
      pFVar6 = pFVar24->CurrentTest;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0x28);
      ::FString::FString(&local_128,
                         L"Set of LWC Vectors must be deserialized to a Set of Non-LWC Vectors");
      (*pcVar7)(pFVar6,&local_128,0);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar28 = *(longlong *)&pTVar20->Elements;
    lVar29 = (longlong)TStack_200.CurrentBitIndex * 0x20;
    local_2a0 = (float)*(double *)(lVar29 + lVar28);
    local_29c = (float)*(double *)(lVar29 + 8 + lVar28);
    local_298 = (float)*(double *)(lVar29 + 0x10 + lVar28);
    uVar44 = FCrc::MemCrc_DEPRECATED(&local_2a0,0xc,0);
    if (*(int *)&(param_2->VectorSet).Elements.field_0x8 ==
        *(int *)&(param_2->VectorSet).Elements.field_0x34) goto LAB_148bb4b0f;
    FVar9 = (param_2->VectorSet).Hash.SecondaryData;
    FVar30 = (ForElementType<FSetElementId>)&(param_2->VectorSet).Hash;
    if (FVar9 != (ForElementType<FSetElementId>)0x0) {
      FVar30 = FVar9;
    }
    iVar22 = *(int *)((longlong)FVar30 +
                     (ulonglong)((param_2->VectorSet).HashSize - 1U & uVar44) * 4);
    if (iVar22 == -1) goto LAB_148bb4b0f;
    lVar28 = *(longlong *)&(param_2->VectorSet).Elements;
    while (((lVar29 = (longlong)iVar22, local_2a0 != *(float *)(lVar28 + lVar29 * 0x14) ||
            (local_29c != *(float *)(lVar28 + 4 + lVar29 * 0x14))) ||
           (local_298 != *(float *)(lVar28 + 8 + lVar29 * 0x14)))) {
      iVar22 = *(int *)(lVar28 + 0xc + lVar29 * 0x14);
      if (iVar22 == -1) goto LAB_148bb4b0f;
    }
    if (iVar22 == -1) goto LAB_148bb4b0f;
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  } while( true );
}

// ValidateLWCTypes @ 148bb4b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
StructSerializerTest::ValidateLWCTypes
          (FStructSerializerLWCTypesTest *param_1,FStructSerializerLWCTypesTest *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  void *pvVar15;
  bool bVar16;
  FAutomationTestFramework *pFVar17;
  TMatrix<double> *pTVar18;
  undefined7 extraout_var;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  *pTVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  undefined4 uVar26;
  uint uVar27;
  TMatrix<double> *pTVar28;
  longlong lVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  FAutomationTestBase *pFVar25;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar30 = false;
  local_f8._s_0.X = (double)((ulonglong)local_f8._s_0.X & 0xffffffff00000000);
  pFVar17 = FAutomationTestFramework::Get();
  fVar14 = __real_38d1b717;
  local_f8._s_0.X = (param_2->Vector).field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_2->Vector).field0_0x0._s_0.Y;
  local_f8._s_0.Z = (param_2->Vector).field0_0x0._s_0.Z;
  local_d8._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  local_d8._s_0.Y = (param_1->Vector).field0_0x0._s_0.Y;
  local_d8._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  FAutomationTestBase::TestEqual
            (pFVar17->CurrentTest,L"LWC Vector must be the same before and after de-serialization",
             (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0,__real_38d1b717);
  pFVar17 = FAutomationTestFramework::Get();
  pFVar25 = pFVar17->CurrentTest;
  if (((param_2->Vector2D).field0_0x0._s_0.X != (param_1->Vector2D).field0_0x0._s_0.X) ||
     ((param_2->Vector2D).field0_0x0._s_0.Y != (param_1->Vector2D).field0_0x0._s_0.Y)) {
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<UE::Math::TVector4<double>_>
            (pFVar17->CurrentTest,L"LWC Vector4 must be the same before and after de-serialization",
             &param_1->Vector4,&param_2->Vector4);
  pFVar17 = FAutomationTestFramework::Get();
  lVar29 = 0;
  pTVar28 = &param_2->Matrix;
  pFVar25 = pFVar17->CurrentTest;
  do {
    lVar24 = 0;
    pTVar18 = pTVar28;
    do {
      if (pTVar18->M[0][0] !=
          *(double *)(((longlong)param_1 - (longlong)param_2) + (longlong)pTVar18)) {
        pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
        ::FString::PrintfImpl((FString *)&local_f8._s_0,L"%s: The two values are not equal.");
        (*pcVar1)(pFVar25,&local_f8,0);
        if ((void *)local_f8._s_0.X != (void *)0x0) {
          FMemory::Free((void *)local_f8._s_0.X);
        }
        goto LAB_148bb4d17;
      }
      lVar24 = lVar24 + 1;
      pTVar18 = (TMatrix<double> *)(pTVar18->M[0] + 1);
    } while (lVar24 < 4);
    lVar29 = lVar29 + 1;
    pTVar28 = (TMatrix<double> *)(pTVar28->M + 1);
  } while (lVar29 < 4);
LAB_148bb4d17:
  pFVar17 = FAutomationTestFramework::Get();
  uVar26 = 0x51c77220;
  pFVar25 = pFVar17->CurrentTest;
  FAutomationTestBase::TestEqual<UE::Math::TPlane<double>_>
            (pFVar25,L"LWC Plane must be the same before and after de-serialization",&param_1->Plane
             ,&param_2->Plane);
  uVar20 = SUB84(pFVar25,0);
  pFVar17 = FAutomationTestFramework::Get();
  lVar29 = -(ulonglong)((param_1->Quat).W != (param_2->Quat).W);
  lVar24 = -(ulonglong)((param_2->Quat).Y != (param_1->Quat).Y);
  auVar2._8_4_ = (int)lVar29;
  auVar2._0_8_ = -(ulonglong)((param_1->Quat).Z != (param_2->Quat).Z);
  auVar2._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
  uVar27 = movmskpd(uVar26,auVar2);
  auVar8._8_4_ = (int)lVar24;
  auVar8._0_8_ = -(ulonglong)((param_2->Quat).X != (param_1->Quat).X);
  auVar8._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
  iVar21 = movmskpd(uVar20,auVar8);
  if ((uVar27 & 0x3fffffff) != 0 || iVar21 != 0) {
    pFVar25 = pFVar17->CurrentTest;
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  pFVar17 = FAutomationTestFramework::Get();
  local_d8._s_0.X = (param_2->Rotator).Pitch;
  local_d8._s_0.Y = (param_2->Rotator).Yaw;
  local_d8._s_0.Z = (param_2->Rotator).Roll;
  pFVar25 = pFVar17->CurrentTest;
  local_f8._s_0.X = (param_1->Rotator).Pitch;
  local_f8._s_0.Y = (param_1->Rotator).Yaw;
  local_f8._s_0.Z = (param_1->Rotator).Roll;
  bVar16 = FAutomationTestBase::TestEqual
                     (pFVar25,L"LWC Rotator must be the same before and after de-serialization",
                      (TRotator<double> *)&local_f8._s_0,(TRotator<double> *)&local_d8._s_0,fVar14);
  pvVar15 = __real_3f1a36e2e0000000;
  dVar9 = (param_2->Transform).Translation.ZW.m128d_f64[0] -
          (param_1->Transform).Translation.ZW.m128d_f64[0];
  dVar10 = (param_2->Transform).Translation.ZW.m128d_f64[1] -
           (param_1->Transform).Translation.ZW.m128d_f64[1];
  dVar31 = (param_2->Transform).Translation.XY.m128d_f64[0] -
           (param_1->Transform).Translation.XY.m128d_f64[0];
  dVar33 = (param_2->Transform).Translation.XY.m128d_f64[1] -
           (param_1->Transform).Translation.XY.m128d_f64[1];
  lVar29 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar10,0) & _UNK_15061cc88));
  auVar3._8_4_ = (int)lVar29;
  auVar3._0_8_ = -(ulonglong)
                  ((double)__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar3._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
  uVar27 = movmskpd((int)pFVar25,auVar3);
  lVar29 = -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar33,0) & _UNK_15061cc88));
  auVar11._8_4_ = (int)lVar29;
  auVar11._0_8_ =
       -(ulonglong)
        ((double)__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar11._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
  iVar21 = movmskpd((int)CONCAT71(extraout_var,bVar16),auVar11);
  if ((uVar27 & 0x3fffffff) == 0 && iVar21 == 0) {
    dVar31 = (param_2->Transform).Rotation.ZW.m128d_f64[0];
    dVar33 = (param_2->Transform).Rotation.ZW.m128d_f64[1];
    dVar35 = (param_2->Transform).Rotation.XY.m128d_f64[0];
    dVar36 = (param_2->Transform).Rotation.XY.m128d_f64[1];
    dVar9 = dVar31 - (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar10 = dVar33 - (param_1->Transform).Rotation.ZW.m128d_f64[1];
    dVar31 = dVar31 + (param_1->Transform).Rotation.ZW.m128d_f64[0];
    dVar33 = dVar33 + (param_1->Transform).Rotation.ZW.m128d_f64[1];
    dVar32 = dVar35 - (param_1->Transform).Rotation.XY.m128d_f64[0];
    dVar34 = dVar36 - (param_1->Transform).Rotation.XY.m128d_f64[1];
    dVar35 = dVar35 + (param_1->Transform).Rotation.XY.m128d_f64[0];
    dVar36 = dVar36 + (param_1->Transform).Rotation.XY.m128d_f64[1];
    lVar29 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar4._8_4_ = (int)lVar29;
    auVar4._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar4._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    iVar22 = movmskpd(0,auVar4);
    lVar29 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar34,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar29;
    auVar5._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar27 = movmskpd(iVar21,auVar5);
    uVar23 = iVar22 << 2 | uVar27;
    if (uVar23 != 0) {
      lVar29 = -(ulonglong)
                ((double)__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar33,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar29;
      auVar6._0_8_ = -(ulonglong)
                      ((double)__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar31,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar23 = movmskpd(uVar23,auVar6);
      lVar29 = -(ulonglong)
                ((double)__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar36,0) & _UNK_15061cc88));
      auVar12._8_4_ = (int)lVar29;
      auVar12._0_8_ =
           -(ulonglong)
            ((double)__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar12._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      uVar27 = movmskpd(uVar27,auVar12);
      if ((uVar23 & 0x3fffffff) != 0 || uVar27 != 0) goto LAB_148bb4f5d;
    }
    dVar9 = (param_2->Transform).Scale3D.ZW.m128d_f64[0] -
            (param_1->Transform).Scale3D.ZW.m128d_f64[0];
    dVar10 = (param_2->Transform).Scale3D.ZW.m128d_f64[1] -
             (param_1->Transform).Scale3D.ZW.m128d_f64[1];
    dVar31 = (param_2->Transform).Scale3D.XY.m128d_f64[0] -
             (param_1->Transform).Scale3D.XY.m128d_f64[0];
    dVar33 = (param_2->Transform).Scale3D.XY.m128d_f64[1] -
             (param_1->Transform).Scale3D.XY.m128d_f64[1];
    local_f8._s_0.X = (double)__real_3f1a36e2e0000000;
    lVar29 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar10,0) & _UNK_15061cc88));
    auVar7._8_4_ = (int)lVar29;
    auVar7._0_8_ = -(ulonglong)
                    ((double)__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
    ;
    auVar7._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    uVar23 = movmskpd(0,auVar7);
    lVar29 = -(ulonglong)
              ((double)__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar33,0) & _UNK_15061cc88));
    auVar13._8_4_ = (int)lVar29;
    auVar13._0_8_ =
         -(ulonglong)
          ((double)__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar31,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar13._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
    iVar21 = movmskpd(uVar27,auVar13);
    if ((uVar23 & 0x3fffffff) != 0 || iVar21 != 0) goto LAB_148bb4f5d;
  }
  else {
LAB_148bb4f5d:
    local_f8._s_0.X = (double)__real_3f1a36e2e0000000;
    pFVar17 = FAutomationTestFramework::Get();
    pFVar25 = pFVar17->CurrentTest;
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8._s_0,
                       L"LWC Transform must be the same before and after de-serialization");
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<UE::Math::TBox<double>_>
            (pFVar17->CurrentTest,L"LWC Box must be the same before and after de-serialization",
             &param_1->Box,&param_2->Box);
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<UE::Math::TBox2<double>_>
            (pFVar17->CurrentTest,L"LWC Box2D must be the same before and after de-serialization",
             &param_1->Box2D,&param_2->Box2D);
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<UE::Math::TBoxSphereBounds<double,double>_>
            (pFVar17->CurrentTest,
             L"LWC BoxSphereBounds must be the same before and after de-serialization",
             &param_1->BoxSphereBounds,&param_2->BoxSphereBounds);
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar17->CurrentTest,
             L"LWC struct float must be the same before and after de-serialization",param_1->Float,
             param_2->Float,fVar14);
  pFVar17 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar17->CurrentTest,
             L"LWC struct double must be the same before and after de-serialization",param_1->Double
             ,param_2->Double,(double)pvVar15);
  if ((((((((param_2->OrientedBox).AxisX.field0_0x0._s_0.X !=
            (param_1->OrientedBox).AxisX.field0_0x0._s_0.X) ||
          ((param_2->OrientedBox).AxisX.field0_0x0._s_0.Y !=
           (param_1->OrientedBox).AxisX.field0_0x0._s_0.Y)) ||
         ((param_2->OrientedBox).AxisX.field0_0x0._s_0.Z !=
          (param_1->OrientedBox).AxisX.field0_0x0._s_0.Z)) ||
        (((param_2->OrientedBox).AxisY.field0_0x0._s_0.X !=
          (param_1->OrientedBox).AxisY.field0_0x0._s_0.X ||
         ((param_2->OrientedBox).AxisY.field0_0x0._s_0.Y !=
          (param_1->OrientedBox).AxisY.field0_0x0._s_0.Y)))) ||
       (((param_2->OrientedBox).AxisY.field0_0x0._s_0.Z !=
         (param_1->OrientedBox).AxisY.field0_0x0._s_0.Z ||
        (((param_2->OrientedBox).AxisZ.field0_0x0._s_0.X !=
          (param_1->OrientedBox).AxisZ.field0_0x0._s_0.X ||
         ((param_2->OrientedBox).AxisZ.field0_0x0._s_0.Y !=
          (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Y)))))) ||
      ((param_2->OrientedBox).AxisZ.field0_0x0._s_0.Z !=
       (param_1->OrientedBox).AxisZ.field0_0x0._s_0.Z)) ||
     (((((param_2->OrientedBox).Center.field0_0x0._s_0.X !=
         (param_1->OrientedBox).Center.field0_0x0._s_0.X ||
        ((param_2->OrientedBox).Center.field0_0x0._s_0.Y !=
         (param_1->OrientedBox).Center.field0_0x0._s_0.Y)) ||
       ((param_2->OrientedBox).Center.field0_0x0._s_0.Z !=
        (param_1->OrientedBox).Center.field0_0x0._s_0.Z)) ||
      ((((param_2->OrientedBox).ExtentX != (param_1->OrientedBox).ExtentX ||
        ((param_2->OrientedBox).ExtentY != (param_1->OrientedBox).ExtentY)) ||
       ((param_2->OrientedBox).ExtentZ != (param_1->OrientedBox).ExtentZ)))))) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar25 = pFVar17->CurrentTest;
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8._s_0,
                       L"LWC OrientedBox must be the same before and after de-serialization");
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  pFVar17 = FAutomationTestFramework::Get();
  iVar21 = (param_1->VectorArray).ArrayNum;
  pFVar25 = pFVar17->CurrentTest;
  if ((iVar21 != (param_2->VectorArray).ArrayNum) ||
     (bVar16 = CompareItems<UE::Math::TVector<double>,int>
                         ((TVector<double> *)(param_1->VectorArray).AllocatorInstance.Data,
                          (TVector<double> *)(param_2->VectorArray).AllocatorInstance.Data,iVar21),
     !bVar16)) {
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::PrintfImpl((FString *)&local_f8._s_0,L"%s: The two values are not equal.");
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  bVar16 = TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           ::OrderIndependentCompareEqual
                     ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                       *)&param_1->StrToVec,
                      (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                       *)&param_2->StrToVec);
  if (!bVar16) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar25 = pFVar17->CurrentTest;
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8._s_0,
                       L"LWC test - Maps.StrToVec must be the same before and after de-/serialization"
                      );
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  if (*(int *)&(param_1->VectorSet).Elements.field_0x8 -
      *(int *)&(param_1->VectorSet).Elements.field_0x34 ==
      *(int *)&(param_2->VectorSet).Elements.field_0x8 -
      *(int *)&(param_2->VectorSet).Elements.field_0x34) {
    pTVar19 = TSet<UE::Math::TVector<double>,DefaultKeyFuncs<UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              ::Difference(&param_1->VectorSet,&local_b8,&param_2->VectorSet);
    bVar30 = true;
    if (*(int *)&(pTVar19->Elements).field_0x8 == *(int *)&(pTVar19->Elements).field_0x34) {
      bVar16 = false;
      goto LAB_148bb5316;
    }
  }
  bVar16 = true;
LAB_148bb5316:
  if (bVar30) {
    local_b8.HashSize = 0;
    if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<UE::Math::TVector<double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b8.Elements);
  }
  if (bVar16) {
    pFVar17 = FAutomationTestFramework::Get();
    pFVar25 = pFVar17->CurrentTest;
    pcVar1 = *(code **)(pFVar25->_padding_ + 0x28);
    ::FString::FString((FString *)&local_f8._s_0,
                       L"LWC test - Sets.VectorSet must be the same before and after de-/serialization"
                      );
    (*pcVar1)(pFVar25,&local_f8,0);
    if ((void *)local_f8._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_f8._s_0.X);
    }
  }
  return;
}

// ValidateMaps @ 148bb53c0

void __cdecl
StructSerializerTest::ValidateMaps
          (FStructSerializerMapTestStruct *param_1,FStructSerializerMapTestStruct *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  FString local_18;
  
  bVar3 = TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::
          OrderIndependentCompareEqual
                    ((TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                      *)param_1,
                     (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                      *)param_2);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,
                       L"Maps.IntToStr must be the same before and after de-/serialization");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          ::OrderIndependentCompareEqual
                    ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)&param_1->StrToStr,
                     (TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)&param_2->StrToStr);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,
                       L"Maps.StrToStr must be the same before and after de-/serialization");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  bVar3 = TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
          ::OrderIndependentCompareEqual
                    ((TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                      *)&param_1->StrToVec,
                     (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                      *)&param_2->StrToVec);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_18,
                       L"Maps.StrToVec must be the same before and after de-/serialization");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateNumerics @ 148bb54f0

void __cdecl
StructSerializerTest::ValidateNumerics
          (FStructSerializerNumericTestStruct *param_1,FStructSerializerNumericTestStruct *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  FAutomationTestFramework *pFVar3;
  FString local_18;
  
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->Int8 != param_2->Int8) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->Int16 != param_2->Int16) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar3->CurrentTest,
             L"Numerics.Int32 value must be the same before and after de-/serialization",
             param_1->Int32,param_2->Int32);
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar3->CurrentTest,
             L"Numerics.Int64 value must be the same before and after de-/serialization",
             param_1->Int64,param_2->Int64);
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->UInt8 != param_2->UInt8) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->UInt16 != param_2->UInt16) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  if (param_1->UInt32 != param_2->UInt32) {
    pFVar1 = pFVar3->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar3->CurrentTest,
             L"Numerics.UInt64 value must be the same before and after de-/serialization",
             param_1->UInt64,param_2->UInt64);
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar3->CurrentTest,
             L"Numerics.Float value must be the same before and after de-/serialization",
             param_1->Float,param_2->Float,__real_38d1b717);
  pFVar3 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual
            (pFVar3->CurrentTest,
             L"Numerics.Double value must be the same before and after de-/serialization",
             param_1->Double,param_2->Double,__real_3f1a36e2e0000000);
  return;
}

// ValidateObjects @ 148bb5780

void __cdecl
StructSerializerTest::ValidateObjects
          (FStructSerializerObjectTestStruct *param_1,FStructSerializerObjectTestStruct *param_2)

{
  int iVar1;
  FAutomationTestBase *pFVar2;
  code *pcVar3;
  UClass *pUVar4;
  bool bVar5;
  FAutomationTestFramework *pFVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FString local_28;
  
  pFVar6 = FAutomationTestFramework::Get();
  if ((param_1->RawClass).field0_0x0.DebugPtr != (param_2->RawClass).field0_0x0.DebugPtr) {
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  if ((param_1->WrappedClass).field0_0x0.DebugPtr != (param_2->WrappedClass).field0_0x0.DebugPtr) {
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pUVar4 = (param_1->SubClass).Class.field0_0x0.DebugPtr;
  pUVar9 = (UClass *)0x0;
  pFVar2 = pFVar6->CurrentTest;
  pUVar8 = pUVar9;
  if ((pUVar4 != (UClass *)0x0) && (pUVar7 = UObjectTest::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar8 = (param_1->SubClass).Class.field0_0x0.DebugPtr;
    }
  }
  pUVar4 = (param_2->SubClass).Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) && (pUVar7 = UObjectTest::StaticClass(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar9 = (param_2->SubClass).Class.field0_0x0.DebugPtr;
    }
  }
  if (pUVar8 != pUVar9) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  bVar5 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->SoftClass).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_2->SoftClass).SoftObjectPtr.field_0x8);
  if (!bVar5) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  if ((param_1->RawObject).field0_0x0.DebugPtr != (param_2->RawObject).field0_0x0.DebugPtr) {
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  if ((param_1->WrappedObject).field0_0x0.DebugPtr != (param_2->WrappedObject).field0_0x0.DebugPtr)
  {
    pFVar2 = pFVar6->CurrentTest;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  bVar5 = TWeakObjectPtr<UObjectTest,FWeakObjectPtr>::UEOpEquals<UObjectTest,bool>
                    (&param_1->WeakObject,&param_2->WeakObject);
  if (!bVar5) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  bVar5 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(param_1->SoftObject).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_2->SoftObject).SoftObjectPtr.field_0x8);
  if (!bVar5) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  bVar5 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&param_1->ClassPath,(FSoftObjectPath *)&param_2->ClassPath);
  if (!bVar5) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = FAutomationTestFramework::Get();
  pFVar2 = pFVar6->CurrentTest;
  bVar5 = FSoftObjectPath::operator==(&param_1->ObjectPath,&param_2->ObjectPath);
  if (!bVar5) {
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_28,L"%s: The two values are not equal.");
    (*pcVar3)(pFVar2,&local_28,0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ValidateOptionals @ 148bb5b80

void __cdecl
StructSerializerTest::ValidateOptionals
          (FStructSerializerOptionalTestStruct *param_1,FStructSerializerOptionalTestStruct *param_2
          )

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  bool bVar5;
  FString local_18;
  
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<TOptional<FString>_>
            (pFVar4->CurrentTest,
             L"Optionals.StrOptional must be the same before and after de-/serialization",
             &param_1->StrOptional,&param_2->StrOptional);
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<TOptional<FString>_>
            (pFVar4->CurrentTest,
             L"Optionals.StrOptionalUnset must be the same before and after de-/serialization",
             &param_1->StrOptionalUnset,&param_2->StrOptionalUnset);
  pFVar4 = FAutomationTestFramework::Get();
  bVar5 = true;
  pFVar1 = pFVar4->CurrentTest;
  bVar3 = (param_1->IntOptional).bIsSet;
  if (bVar3 == (param_2->IntOptional).bIsSet) {
    if (bVar3 == false) {
      bVar3 = false;
    }
    else {
      bVar3 = (param_1->IntOptional).TypedValue != (param_2->IntOptional).TypedValue;
    }
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  bVar3 = (param_1->IntOptionalUnset).bIsSet;
  if (bVar3 == (param_2->IntOptionalUnset).bIsSet) {
    if (bVar3 == false) {
      bVar5 = false;
    }
    else {
      bVar5 = (param_1->IntOptionalUnset).TypedValue != (param_2->IntOptionalUnset).TypedValue;
    }
  }
  if (bVar5) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<TOptional<FName>_>
            (pFVar4->CurrentTest,
             L"Optionals.NameOptional must be the same before and after de-/serialization",
             &param_1->NameOptional,&param_2->NameOptional);
  pFVar4 = FAutomationTestFramework::Get();
  FAutomationTestBase::TestEqual<TOptional<FName>_>
            (pFVar4->CurrentTest,
             L"Optionals.NameOptionalUnset must be the same before and after de-/serialization",
             &param_1->NameOptionalUnset,&param_2->NameOptionalUnset);
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  bVar3 = (param_1->StructOptional).bIsSet;
  if ((bVar3 != (param_2->StructOptional).bIsSet) ||
     ((bVar3 != false &&
      (bVar3 = FStructSerializerBuiltinTestStruct::operator==
                         (&(param_1->StructOptional).TypedValue,
                          &(param_2->StructOptional).TypedValue), !bVar3)))) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar2)(pFVar1,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = FAutomationTestFramework::Get();
  pFVar1 = pFVar4->CurrentTest;
  bVar3 = (param_1->StructOptionalUnset).bIsSet;
  if (bVar3 == (param_2->StructOptionalUnset).bIsSet) {
    if (bVar3 == false) {
      return;
    }
    bVar3 = FStructSerializerBuiltinTestStruct::operator==
                      (&(param_1->StructOptionalUnset).TypedValue,
                       &(param_2->StructOptionalUnset).TypedValue);
    if (bVar3) {
      return;
    }
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
  ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
  (*pcVar2)(pFVar1,&local_18,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateSets @ 148bb5df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
StructSerializerTest::ValidateSets
          (FStructSerializerSetTestStruct *param_1,FStructSerializerSetTestStruct *param_2)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  FAutomationTestFramework *pFVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar8;
  TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
  *pTVar9;
  undefined1 auStack_c8 [32];
  FString local_a8;
  undefined4 local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar3 = false;
  local_98 = 0;
  if (*(int *)&(param_1->IntSet).Elements.field_0x8 - *(int *)&(param_1->IntSet).Elements.field_0x34
      == *(int *)&(param_2->IntSet).Elements.field_0x8 -
         *(int *)&(param_2->IntSet).Elements.field_0x34) {
    pTVar5 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                       (&param_1->IntSet,&local_88,&param_2->IntSet);
    bVar3 = true;
    if (*(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34)
    goto LAB_148bb5e6a;
    bVar4 = false;
  }
  else {
LAB_148bb5e6a:
    bVar4 = true;
  }
  if (bVar3) {
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  bVar3 = false;
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Sets.IntSet must be the same before and after de-/serialization")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(param_1->StrSet).Elements.field_0x8 - *(int *)&(param_1->StrSet).Elements.field_0x34
      == *(int *)&(param_2->StrSet).Elements.field_0x8 -
         *(int *)&(param_2->StrSet).Elements.field_0x34) {
    bVar3 = true;
    pTVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                       (&param_1->StrSet,
                        (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)&local_88,
                        &param_2->StrSet);
    if (*(int *)&(pTVar7->Elements).field_0x8 != *(int *)&(pTVar7->Elements).field_0x34)
    goto LAB_148bb5f0b;
    bVar4 = false;
  }
  else {
LAB_148bb5f0b:
    bVar4 = true;
  }
  if (bVar3) {
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_88);
  }
  bVar3 = false;
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Sets.StrSet must be the same before and after de-/serialization")
    ;
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(param_1->NameSet).Elements.field_0x8 -
      *(int *)&(param_1->NameSet).Elements.field_0x34 ==
      *(int *)&(param_2->NameSet).Elements.field_0x8 -
      *(int *)&(param_2->NameSet).Elements.field_0x34) {
    bVar3 = true;
    pTVar8 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Difference
                       (&param_1->NameSet,
                        (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)&local_88,
                        &param_2->NameSet);
    if (*(int *)&(pTVar8->Elements).field_0x8 != *(int *)&(pTVar8->Elements).field_0x34)
    goto LAB_148bb5fb8;
    bVar4 = false;
  }
  else {
LAB_148bb5fb8:
    bVar4 = true;
  }
  if (bVar3) {
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_88);
  }
  bVar3 = false;
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,L"Sets.NameSet must be the same before and after de-/serialization"
                      );
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(param_1->StructSet).Elements.field_0x8 -
      *(int *)&(param_1->StructSet).Elements.field_0x34 ==
      *(int *)&(param_2->StructSet).Elements.field_0x8 -
      *(int *)&(param_2->StructSet).Elements.field_0x34) {
    bVar3 = true;
    pTVar9 = TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
             ::Difference(&param_1->StructSet,
                          (TSet<FStructSerializerBuiltinTestStruct,DefaultKeyFuncs<FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
                           *)&local_88,&param_2->StructSet);
    if (*(int *)&(pTVar9->Elements).field_0x8 == *(int *)&(pTVar9->Elements).field_0x34) {
      bVar4 = false;
      goto LAB_148bb6067;
    }
  }
  bVar4 = true;
LAB_148bb6067:
  if (bVar3) {
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FStructSerializerBuiltinTestStruct>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_88);
  }
  if (bVar4) {
    pFVar6 = FAutomationTestFramework::Get();
    pFVar1 = pFVar6->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_a8,
                       L"Sets.StructSet must be the same before and after de-/serialization");
    (*pcVar2)(pFVar1,&local_a8,0);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// WriteNull @ 148bb6610

/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

void __cdecl
CborStructSerializerBackend::WriteNull(FCborWriter *param_1,FStructSerializerState *param_2)

{
  FProperty *pFVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  FMapProperty *pFVar4;
  FString local_18;
  
  pFVar1 = param_2->ValueProperty;
  if (pFVar1 == (FProperty *)0x0) goto LAB_148bb675a;
  if (pFVar1->ArrayDim < 2) {
    pFVar3 = FArrayProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if ((bVar2) && (pFVar1->_padding_ != 0)) goto LAB_148bb668b;
    pFVar1 = param_2->ValueProperty;
    pFVar3 = FSetProperty::StaticClass();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pFVar3);
    if (((bVar2) && (pFVar1->_padding_ != 0)) ||
       ((pFVar4 = FField::GetOwner<FMapProperty>((FField *)param_2->ValueProperty),
        pFVar4 != (FMapProperty *)0x0 && (param_2->KeyProperty == (FProperty *)0x0))))
    goto LAB_148bb668b;
  }
  else {
LAB_148bb668b:
    if ((param_2->StateFlags & WritingContainerElement) == None) goto LAB_148bb675a;
  }
  pFVar1 = param_2->KeyProperty;
  if (pFVar1 != (FProperty *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,&local_18,param_2->KeyData,0,0,0,0,0);
    FCborWriter::WriteValue(param_1,&local_18);
    FCborWriter::WriteNull(param_1);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  pFVar1 = param_2->ValueProperty;
  bVar2 = IsThisNotNull(pFVar1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&pFVar1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FCborWriter::WriteValue(param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_148bb675a:
  FCborWriter::WriteNull(param_1);
  return;
}

// Z_Construct_UScriptStruct_FStructSerializerByteArray @ 148bb9f30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerByteArray(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerByteArray_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerByteArray.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest @ 148bb9fb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerNonLWCTypesTest_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerNonLWCTypesTest.InnerSingleton;
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

// Z_Construct_UScriptStruct_FStructSerializerTestStruct @ 148bba030

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStructSerializerTestStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.InnerSingleton,
               &Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FStructSerializerTestStruct.InnerSingleton;
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

// IMPLEMENT_MODULE_Serialization @ 148bba0b0

void __cdecl IMPLEMENT_MODULE_Serialization(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 15040a710

void __cdecl
`FCborStructDeserializerBackend::GetLastErrorMessage'::__l2::_dynamic_atexit_destructor_for__Dummy__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.Data.AllocatorInstance.Data;
  if (::Dummy.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FStructElementSerializerTestInstance'' @ 15040a730

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStructElementSerializerTestInstance__(void)

{
  if (FStructElementSerializerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStructElementSerializerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStructElementSerializerTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStructSerializerCborByteArrayTestInstance'' @ 15040a760

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStructSerializerCborByteArrayTestInstance__
          (void)

{
  if (FStructSerializerCborByteArrayTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStructSerializerCborByteArrayTestInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FStructSerializerCborByteArrayTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FStructSerializerTestInstance'' @ 15040a790

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FStructSerializerTestInstance__(void)

{
  if (FStructSerializerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FStructSerializerTestInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)&FStructSerializerTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LWCTypes'' @ 15040a7c0

void __cdecl
`StructSerializationUtilities::IsLWCType'::__l2::_dynamic_atexit_destructor_for__LWCTypes__(void)

{
  LWCTypes.HashSize = 0;
  if (LWCTypes.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)LWCTypes.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&LWCTypes.Elements);
  return;
}

