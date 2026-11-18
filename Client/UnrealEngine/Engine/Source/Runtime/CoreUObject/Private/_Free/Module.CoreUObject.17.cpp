// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 151

// InitCDOFunctionName'' @ 140f30af0

void __cdecl `dynamic_initializer_for_'UVerseClass::InitCDOFunctionName__(void)

{
  ::FName::FName(&UVerseClass::InitCDOFunctionName,L"$InitCDO");
  return;
}

// NativeParentClassTagName'' @ 140f30b10

void __cdecl `dynamic_initializer_for_'UVerseClass::NativeParentClassTagName__(void)

{
  ::FName::FName(&UVerseClass::NativeParentClassTagName,"NativeParentClass");
  return;
}

// OnUnwindRuntimeError'' @ 140f30b30

void __cdecl `dynamic_initializer_for_'FVerseRuntimeErrorDelegates::OnUnwindRuntimeError__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVerseRuntimeErrorDelegates::OnUnwindRuntimeError__);
  return;
}

// OnVerseRuntimeError'' @ 140f30b50

void __cdecl `dynamic_initializer_for_'FVerseRuntimeErrorDelegates::OnVerseRuntimeError__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FVerseRuntimeErrorDelegates::OnVerseRuntimeError__);
  return;
}

// PackageRelativeVersePathTagName'' @ 140f30b70

void __cdecl `dynamic_initializer_for_'UVerseClass::PackageRelativeVersePathTagName__(void)

{
  ::FName::FName(&UVerseClass::PackageRelativeVersePathTagName,"PackageRelativeVersePath");
  return;
}

// PackageVersePathTagName'' @ 140f30b90

void __cdecl `dynamic_initializer_for_'UVerseClass::PackageVersePathTagName__(void)

{
  ::FName::FName(&UVerseClass::PackageVersePathTagName,"PackageVersePath");
  return;
}

// StructPaddingDummyName'' @ 140f30bb0

void __cdecl `dynamic_initializer_for_'UVerseClass::StructPaddingDummyName__(void)

{
  ::FName::FName(&UVerseClass::StructPaddingDummyName,L"$StructPaddingDummy");
  return;
}

// VerseClassTopLevelAssetPath'' @ 140f30bd0

void __cdecl `dynamic_initializer_for_'UVerseClass::VerseClassTopLevelAssetPath__(void)

{
  FName FVar1;
  FName *pFVar2;
  FName local_res8;
  FName local_res10 [3];
  
  pFVar2 = ::FName::FName(&local_res8,"VerseClass");
  FVar1 = *pFVar2;
  pFVar2 = ::FName::FName(local_res10,"/Script/CoreUObject");
  UVerseClass::VerseClassTopLevelAssetPath.PackageName.ComparisonIndex.Value = 0;
  UVerseClass::VerseClassTopLevelAssetPath.PackageName.Number = 0;
  UVerseClass::VerseClassTopLevelAssetPath.AssetName.ComparisonIndex.Value = 0;
  UVerseClass::VerseClassTopLevelAssetPath.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&UVerseClass::VerseClassTopLevelAssetPath,*pFVar2,FVar1);
  return;
}

// `dynamic_initializer_for_'CVarUseAuthoredNameNonEditor'' @ 140f30c30

void __cdecl _dynamic_initializer_for__CVarUseAuthoredNameNonEditor__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseAuthoredNameNonEditor,L"Verse.UseAuthoredNameNonEditor",
             &CVar_UseAuthoredNameNonEditor,L"",0);
  atexit(_dynamic_atexit_destructor_for__CVarUseAuthoredNameNonEditor__);
  return;
}

// `dynamic_initializer_for_'CVarVerseHangDetectionDuringDebugging'' @ 140f30c80

void __cdecl _dynamic_initializer_for__CVarVerseHangDetectionDuringDebugging__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerseHangDetectionDuringDebugging,L"verse.HangDetectionDuringDebugging",
             &GVerseHangDetectionDuringDebugging,
             L"True if verse hang detection should be enabled during debugging.\n",0);
  atexit(_dynamic_atexit_destructor_for__CVarVerseHangDetectionDuringDebugging__);
  return;
}

// `dynamic_initializer_for_'CVarVerseHangDetectionThreshold'' @ 140f30cd0

void __cdecl _dynamic_initializer_for__CVarVerseHangDetectionThreshold__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = <lambda_5>::<lambda_invoker_cdecl>;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerseHangDetectionThreshold,L"verse.HangDetectionThresholdSeconds",
             &GVerseHangDetectionThresholdSeconds,
             L"Maximum time a Verse script is permitted to run before a runtime error is triggered.\n"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarVerseHangDetectionThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarVerseHangDetectionThresholdDuringCook'' @ 140f30e10

void __cdecl _dynamic_initializer_for__CVarVerseHangDetectionThresholdDuringCook__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarVerseHangDetectionThresholdDuringCook,
             L"verse.HangDetectionThresholdSecondsDuringCook",
             &GVerseHangDetectionThresholdSecondsDuringCook,
             L"Maximum time a Verse script is permitted to run before a runtime error is triggered - in the cooker.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarVerseHangDetectionThresholdDuringCook__);
  return;
}

// `dynamic_initializer_for_'CurrentImpl'' @ 140f30e60

void __cdecl verse::_dynamic_initializer_for__CurrentImpl__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__CurrentImpl__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestClearValueInstance'' @ 140f30e80

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestClearValueInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestClearValue");
  FOptionalPropertyTestClearValue::FOptionalPropertyTestClearValue
            (&FOptionalPropertyTestClearValueInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestClearValueInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestCopyValueInInstance'' @ 140f30ed0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestCopyValueInInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestCopyValueIn");
  FOptionalPropertyTestCopyValueIn::FOptionalPropertyTestCopyValueIn
            (&FOptionalPropertyTestCopyValueInInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestCopyValueInInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestCopyValueOutInstance'' @ 140f30f20

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestCopyValueOutInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestCopyValueOut");
  FOptionalPropertyTestCopyValueOut::FOptionalPropertyTestCopyValueOut
            (&FOptionalPropertyTestCopyValueOutInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestCopyValueOutInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestGetValueTypeHashInstance'' @ 140f30f70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestGetValueTypeHashInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestGetValueTypeHash");
  FOptionalPropertyTestGetValueTypeHash::FOptionalPropertyTestGetValueTypeHash
            (&FOptionalPropertyTestGetValueTypeHashInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestGetValueTypeHashInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestIdenticalInstance'' @ 140f30fc0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestIdenticalInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestIdentical");
  FOptionalPropertyTestIdentical::FOptionalPropertyTestIdentical
            (&FOptionalPropertyTestIdenticalInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestIdenticalInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestInitializeValueInstance'' @ 140f31010

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestInitializeValueInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestInitializeValue");
  FOptionalPropertyTestInitializeValue::FOptionalPropertyTestInitializeValue
            (&FOptionalPropertyTestInitializeValueInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestInitializeValueInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestLayoutInstance'' @ 140f31060

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestLayoutInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestLayout");
  FOptionalPropertyTestLayout::FOptionalPropertyTestLayout
            (&FOptionalPropertyTestLayoutInstance,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestLayoutInstance__);
  return;
}

// `dynamic_initializer_for_'FOptionalPropertyTestSizeInstance'' @ 140f310b0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FOptionalPropertyTestSizeInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FOptionalPropertyTestSize");
  FOptionalPropertyTestSize::FOptionalPropertyTestSize(&FOptionalPropertyTestSizeInstance,&local_18)
  ;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FOptionalPropertyTestSizeInstance__);
  return;
}

// `dynamic_initializer_for_'LogSolGeneratedClass'' @ 140f31100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSolGeneratedClass__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSolGeneratedClass,L"LogSolGeneratedClass",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSolGeneratedClass__);
  return;
}

// `dynamic_initializer_for_'LogVerseRuntimeError'' @ 140f31140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogVerseRuntimeError__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogVerseRuntimeError,L"LogVerseRuntimeError",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogVerseRuntimeError__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h__Script_CoreUObject_2781366824'' @ 140f31180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h__Script_CoreUObject_2781366824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h__Script_CoreUObject_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseClass_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h__Script_CoreUObject_1357724354'' @ 140f311d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h__Script_CoreUObject_1357724354__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEffectSet_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h__Script_CoreUObject_474076880'' @ 140f31220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h__Script_CoreUObject_474076880__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseEnum_h__Script_CoreUObject_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h__Script_CoreUObject_3489128852'' @ 140f31270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h__Script_CoreUObject_3489128852__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseFunction_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h__Script_CoreUObject_2331922413'' @ 140f312c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h__Script_CoreUObject_2331922413__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_VerseVM_VVMVerseStruct_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `scalar_deleting_destructor' @ 1422b31b0

void * __thiscall
FOptionalPropertyTestCopyValueOut::_scalar_deleting_destructor_
          (FOptionalPropertyTestCopyValueOut *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b3470

void * __thiscall
FOptionalPropertyTestIdentical::_scalar_deleting_destructor_
          (FOptionalPropertyTestIdentical *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b3730

void * __thiscall
FOptionalPropertyTestGetValueTypeHash::_scalar_deleting_destructor_
          (FOptionalPropertyTestGetValueTypeHash *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b39f0

void * __thiscall
FOptionalPropertyTestLayout::_scalar_deleting_destructor_
          (FOptionalPropertyTestLayout *this,uint param_1)

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

// Z_Construct_UClass_UVerseClass @ 1422b3a40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVerseClass(void)

{
  if (Z_Registration_Info_UClass_UVerseClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVerseClass.OuterSingleton,
               &Z_Construct_UClass_UVerseClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVerseClass.OuterSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVerseEffectSet @ 1422b3a80

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVerseEffectSet(void)

{
  if (Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVerseEffectSet_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVerseEffectSet.InnerSingleton;
}

// Z_Construct_UScriptStruct_FVerseClassVarAccessor @ 1422b3ac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseClassVarAccessor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseClassVarAccessor.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseClassVarAccessor.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseClassVarAccessor.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVerseClassVarAccessor.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVerseClassVarAccessors @ 1422b3b40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseClassVarAccessors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseClassVarAccessors.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseClassVarAccessors.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseClassVarAccessors.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVerseClassVarAccessors.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVersePersistentVar @ 1422b3bc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVersePersistentVar(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVersePersistentVar.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVersePersistentVar.InnerSingleton,
               &Z_Construct_UScriptStruct_FVersePersistentVar_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVersePersistentVar.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FVersePersistentVar.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVerseSessionVar @ 1422b3c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVerseSessionVar(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVerseSessionVar.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVerseSessionVar.InnerSingleton,
               &Z_Construct_UScriptStruct_FVerseSessionVar_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVerseSessionVar.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVerseSessionVar.InnerSingleton;
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

// NewStructOps @ 1422b3cc0

void * __cdecl Z_Construct_UScriptStruct_FVersePersistentVar_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVersePersistentVar,&UE::CoreUObject::Private::Construct<FVersePersistentVar>,&UE::CoreUObject::Private::ConstructForTests<FVersePersistentVar>,&UE::CoreUObject::Private::Destruct<FVersePersistentVar>,&UE::CoreUObject::Private::Copy<FVersePersistentVar>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1422b3d00

void * __cdecl Z_Construct_UScriptStruct_FVerseSessionVar_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseSessionVar,&UE::CoreUObject::Private::Construct<FVerseSessionVar>,&UE::CoreUObject::Private::ConstructForTests<FVerseSessionVar>,&UE::CoreUObject::Private::Destruct<FVerseSessionVar>,&UE::CoreUObject::Private::Copy<FVerseSessionVar>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsInstanceMember_SetBit @ 1422b3d40

void __cdecl
Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsInstanceMember_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewProp_bIsFallible_SetBit @ 1422b3d50

void __cdecl
Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewProp_bIsFallible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  return;
}

// NewStructOps @ 1422b3d60

void * __cdecl Z_Construct_UScriptStruct_FVerseClassVarAccessor_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseClassVarAccessor,&UE::CoreUObject::Private::Construct<FVerseClassVarAccessor>,&UE::CoreUObject::Private::ConstructForTests<FVerseClassVarAccessor>,&UE::CoreUObject::Private::Destruct<FVerseClassVarAccessor>,&UE::CoreUObject::Private::Copy<FVerseClassVarAccessor>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1422b3da0

void * __cdecl Z_Construct_UScriptStruct_FVerseClassVarAccessors_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVerseClassVarAccessors,&UE::CoreUObject::Private::Construct<FVerseClassVarAccessors>,&UE::CoreUObject::Private::ConstructForTests<FVerseClassVarAccessors>,&UE::CoreUObject::Private::Destruct<FVerseClassVarAccessors>,&UE::CoreUObject::Private::Copy<FVerseClassVarAccessors>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UVerseClass_NoRegister @ 1422b4020

UClass * __cdecl Z_Construct_UClass_UVerseClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseClass",
               &Z_Registration_Info_UClass_UVerseClass.InnerSingleton,
               UVerseClass::StaticRegisterNativesUVerseClass,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVerseClass>,
               InternalVTableHelperCtorCaller<UVerseClass>,local_res8,UClass::StaticClass,
               UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseClass.InnerSingleton;
}

// EVerseEffectSet_StaticEnum @ 1422b41e0

UEnum * __cdecl EVerseEffectSet_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEffectSet,(UObject *)pUVar1,
                       L"EVerseEffectSet");
  }
  return Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton;
}

// Z_Construct_UClass_UVerseEnum @ 1422b4220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVerseEnum(void)

{
  if (Z_Registration_Info_UClass_UVerseEnum.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVerseEnum.OuterSingleton,
               &Z_Construct_UClass_UVerseEnum_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVerseEnum.OuterSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVerseEnumFlags @ 1422b4260

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVerseEnumFlags(void)

{
  if (Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVerseEnumFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVerseEnumFlags.InnerSingleton;
}

// EVerseEnumFlags_StaticEnum @ 1422b42a0

UEnum * __cdecl EVerseEnumFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEnumFlags,(UObject *)pUVar1,
                       L"EVerseEnumFlags");
  }
  return Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton;
}

// EVerseFalse_StaticEnum @ 1422b42e0

UEnum * __cdecl EVerseFalse_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseFalse,(UObject *)pUVar1,L"EVerseFalse");
  }
  return Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton;
}

// EVerseTrue_StaticEnum @ 1422b4320

UEnum * __cdecl EVerseTrue_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseTrue,(UObject *)pUVar1,L"EVerseTrue");
  }
  return Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton;
}

// Z_Construct_UClass_UVerseFunction @ 1422b4360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVerseFunction(void)

{
  if (Z_Registration_Info_UClass_UVerseFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVerseFunction.OuterSingleton,
               &Z_Construct_UClass_UVerseFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVerseFunction.OuterSingleton;
}

// EVerseFunctionFlags_StaticEnum @ 1422b43a0

UEnum * __cdecl EVerseFunctionFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseFunctionFlags,(UObject *)pUVar1,
                       L"EVerseFunctionFlags");
  }
  return Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton;
}

// Z_Construct_UClass_UVerseStruct @ 1422b4740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVerseStruct(void)

{
  if (Z_Registration_Info_UClass_UVerseStruct.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVerseStruct.OuterSingleton,
               &Z_Construct_UClass_UVerseStruct_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVerseStruct.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1422b4c50

void * __thiscall
FOptionalPropertyTestSize::_scalar_deleting_destructor_
          (FOptionalPropertyTestSize *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b4f10

void * __thiscall
FOptionalPropertyTestInitializeValue::_scalar_deleting_destructor_
          (FOptionalPropertyTestInitializeValue *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b51d0

void * __thiscall
FOptionalPropertyTestClearValue::_scalar_deleting_destructor_
          (FOptionalPropertyTestClearValue *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1422b55a0

void * __thiscall
FOptionalPropertyTestCopyValueIn::_scalar_deleting_destructor_
          (FOptionalPropertyTestCopyValueIn *this,uint param_1)

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

// <lambda_invoker_cdecl> @ 1422b55f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl <lambda_5>::<lambda_invoker_cdecl>(IConsoleVariable *param_1)

{
  if (4 < (byte)LogVerseVM._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_Verse_hang_dete_15089c2d8,
               (FLogCategoryBase *)&LogVerseVM);
    return;
  }
  return;
}

// AutoRTFMFunctorInvoker<`Verse::RaiseVerseRuntimeError'::__l8::<lambda_1>_> @ 1422b5630

void __cdecl
AutoRTFM::AutoRTFMFunctorInvoker<_Verse::RaiseVerseRuntimeError_::__l8::<lambda_1>_>(void *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = FText::BuildSourceString(*(FText **)((longlong)param_1 + 8),&local_18);
  pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CastChecked<UVerseClass,UClass> @ 1422b5680

UVerseClass * __cdecl CastChecked<UVerseClass,UClass>(UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UClass *)0x0) {
    pFVar3 = GetTypeName<UVerseClass>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = UVerseClass::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (UVerseClass *)param_1;
  }
  pFVar3 = GetTypeName<UVerseClass>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UClass>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructUClassHelper<UVerseClass,UECodeGen_Private::FVerseClassParams,`Verse::CodeGen::Private::ConstructUVerseClass'::__l2::<lambda_1>_> @ 1422b5740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUClassHelper<UVerseClass,UECodeGen_Private::FVerseClassParams,_Verse::CodeGen::Private::ConstructUVerseClass_::__l2::<lambda_1>_>
          (UClass **param_1,FVerseClassParams *param_2,<lambda_1> *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  uchar *_Str;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  EClassFlags EVar7;
  int iVar8;
  FNameEntryId FVar9;
  UVerseClass *this;
  UClass *pUVar10;
  size_t sVar11;
  FName *pFVar12;
  UObject *pUVar13;
  UScriptStruct *pUVar14;
  UVerseClass *pUVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  UVerseClass *local_170;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if ((*param_1 != (UClass *)0x0) && (((*param_1)->ClassFlags & CLASS_Constructed) != CLASS_None)) {
    return;
  }
  puVar16 = (undefined8 *)param_2->_padding_;
  puVar17 = puVar16 + ((uint)param_2->_padding_ & 0xf);
  for (; puVar16 != puVar17; puVar16 = puVar16 + 1) {
    (*(code *)*puVar16)();
  }
  this = (UVerseClass *)(*(code *)param_2->_padding_)();
  *param_1 = (UClass *)this;
  if ((*(EClassFlags *)((longlong)&this->_padding_ + 4) & CLASS_Constructed) != CLASS_None) {
    return;
  }
  local_170 = this;
  pUVar10 = UVerseClass::StaticClass();
  iVar8 = (int)pUVar10->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar8) ||
     (pUVar15 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
     &pUVar10->_padding_)) {
    pUVar15 = (UVerseClass *)0x0;
  }
  `Verse::CodeGen::Private::ConstructUVerseClass'::__l2::<lambda_1>::operator()
            (param_3,pUVar15,param_2);
  UObjectForceRegistration((UObjectBase *)this,true);
  if (this->_padding_ != 0) {
    *(EClassFlags *)((longlong)&this->_padding_ + 4) =
         *(EClassFlags *)((longlong)&this->_padding_ + 4) |
         *(EClassFlags *)(this->_padding_ + 0xd4) &
         (CLASS_ConfigDoNotCheckDefaults|CLASS_GlobalUserConfig|CLASS_Deprecated|
          CLASS_HasInstancedReference|CLASS_DefaultToInstanced|CLASS_NeedsDeferredDependencyLoading|
          CLASS_Const|CLASS_PerPlatformConfig|CLASS_PerObjectConfig|CLASS_NotPlaceable|
          CLASS_ProjectUserConfig|CLASS_Optional|CLASS_Transient|CLASS_Config|CLASS_DefaultConfig);
  }
  EVar7 = *(EClassFlags *)((longlong)&param_2->_padding_ + 4) |
          *(EClassFlags *)((longlong)&this->_padding_ + 4);
  *(EClassFlags *)((longlong)&this->_padding_ + 4) = EVar7 | CLASS_Constructed;
  if ((EVar7 & CLASS_Intrinsic) == CLASS_None) {
    if (((EVar7 & CLASS_TokenStreamAssembled) != CLASS_None) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewClass->ClassFlags & CLASS_TokenStreamAssembled) != CLASS_TokenStreamAssembled"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectConstructInternal.h"
                           ,0xe8,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::GC::FSchemaOwner::Reset((FSchemaOwner *)&this->_padding_);
  }
  UClass::CreateLinkAndAddChildFunctionsToMap
            ((UClass *)this,(FClassFunctionLinkInfo *)param_2->_padding_,
             (uint)param_2->_padding_ >> 4 & 0x7ff);
  ConstructFProperties
            ((UObject *)this,(FPropertyParamsBase **)param_2->_padding_,
             (uint)param_2->_padding_ >> 0xf & 0x7ff);
  _Str = (uchar *)param_2->_padding_;
  if (_Str == (uchar *)0x0) goto LAB_1422b596f;
  local_68.Data = (FScriptContainerElement *)0x0;
  sVar11 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar11);
  uVar18 = local_58 + 1;
  uVar19 = uVar18;
  if (uVar18 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar19 = 0;
      goto LAB_1422b5902;
    }
  }
  else {
LAB_1422b5902:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar19,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar18,_Str,(int)sVar11 + 1);
  pFVar12 = ::FName::FName(&local_178,(wchar_t *)local_60);
  *(FName *)&this->_padding_ = *pFVar12;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_1422b596f:
  uVar18 = (uint)param_2->_padding_ >> 0x1a;
  if (uVar18 != 0) {
    local_178 = (FName)&this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    plVar2 = &this->_padding_;
    if (*piVar1 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar18,(ForAnyElementType *)local_178,(int)*plVar2,piVar1);
    }
    FVar5 = local_178;
    puVar17 = (undefined8 *)param_2->_padding_;
    puVar16 = puVar17 + (ulonglong)uVar18 * 2;
    for (; puVar17 != puVar16; puVar17 = puVar17 + 2) {
      if ((code *)*puVar17 == (code *)0x0) {
        pUVar13 = (UObject *)0x0;
      }
      else {
        pUVar13 = (UObject *)(*(code *)*puVar17)();
      }
      iVar8 = (int)*plVar2;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)FVar5,piVar1);
        *(int *)plVar2 = iVar8;
      }
      *(int *)plVar2 = iVar8 + 1;
      FVar9.Value = *(uint *)(puVar17 + 1);
      uVar3 = *(undefined1 *)((longlong)puVar17 + 0xc);
      puVar20 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)FVar5);
      local_178.ComparisonIndex.Value = FVar9.Value;
      *puVar20 = pUVar13;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar13);
        FVar9.Value = local_178.ComparisonIndex.Value;
      }
      *(uint *)(puVar20 + 1) = FVar9.Value;
      *(undefined1 *)((longlong)puVar20 + 0xc) = uVar3;
      this = local_170;
    }
  }
  UStruct::StaticLink((UStruct *)this,false);
  pUVar14 = UClass::GetSparseClassDataArchetypeStruct((UClass *)this);
  UClass::SetSparseClassDataStruct((UClass *)this,pUVar14);
  return;
}

// ConstructUClassNoInitHelper<UVerseClass,`Verse::CodeGen::Private::ConstructUVerseClassNoInit'::__l2::<lambda_1>_> @ 1422b5ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUClassNoInitHelper<UVerseClass,_Verse::CodeGen::Private::ConstructUVerseClassNoInit_::__l2::<lambda_1>_>
          (wchar_t *param_1,wchar_t *param_2,UClass **param_3,_func___cdecl_void *param_4,
          uint param_5,uint param_6,EClassFlags param_7,EClassCastFlags param_8,wchar_t *param_9,
          _func___cdecl_void_FObjectInitializer_ptr *param_10,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_11,
          FUObjectCppClassStaticFunctions *param_12,_func___cdecl_UClass_ptr *param_13,
          _func___cdecl_UClass_ptr *param_14,<lambda_1> *param_15)

{
  code *pcVar1;
  bool bVar2;
  EActiveReloadType EVar3;
  UPackage *pUVar4;
  size_t sVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UVerseClass *pUVar9;
  FName *pFVar10;
  FStaticBasicLogRecord *pFVar11;
  FUObjectCppClassStaticFunctions local_48;
  FName local_40;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  bVar2 = IsReloadActive();
  if ((bVar2) && (EVar3 = GetActiveReloadType(), EVar3 != Reinstancing)) {
    pUVar4 = FindPackage((UObject *)0x0,param_1);
    if (pUVar4 == (UPackage *)0x0) {
      if (4 < (byte)LogClass._0_1_) {
        pFVar11 = &::LOG_Static;
LAB_1422b5c2e:
        UE::Logging::Private::BasicLog<5>(pFVar11,(FLogCategoryBase *)&LogClass);
      }
    }
    else {
      iStack_30 = 0;
      local_38 = param_2;
      if (param_2 != (wchar_t *)0x0) {
        sVar5 = wcslen(param_2);
        iStack_30 = (int)sVar5;
      }
      pUVar6 = UVerseClass::StaticClass();
      local_28._12_4_ = uStack_2c;
      local_28.Size = iStack_30;
      local_28.DataPtr = local_38;
      pUVar6 = (UClass *)StaticFindObject(pUVar6,(UObject *)pUVar4,&local_28,None);
      *param_3 = pUVar6;
      if (pUVar6 != (UClass *)0x0) {
        pUVar7 = (*param_14)();
        pUVar8 = (*param_13)();
        local_48 = (FUObjectCppClassStaticFunctions)param_12->AddReferencedObjects;
        bVar2 = UClass::HotReloadPrivateStaticClass
                          (pUVar6,param_5,param_7,param_8,param_9,param_10,param_11,&local_48,pUVar8
                           ,pUVar7);
        if (!bVar2) {
          return;
        }
        goto LAB_1422b5d40;
      }
      if (4 < (byte)LogClass._0_1_) {
        pFVar11 = &::LOG_Static;
        goto LAB_1422b5c2e;
      }
    }
  }
  pUVar9 = (UVerseClass *)FUObjectAllocator::AllocateUObject(&GUObjectAllocator,0x4d8,8,true);
  pFVar10 = ::FName::FName(&local_40,param_2);
  pUVar9 = UVerseClass::UVerseClass
                     (pUVar9,EC_StaticConstructor,*pFVar10,param_5,param_6,param_7,param_8,param_9,
                      RF_MarkAsRootSet|RF_Transient|RF_MarkAsNative|RF_Standalone|RF_Public,param_10
                      ,param_11,param_12);
  if ((pUVar9 == (UVerseClass *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectConstructInternal.h"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *param_3 = (UClass *)pUVar9;
  pUVar9->SolClassFlags = pUVar9->SolClassFlags | 0x10;
  pUVar6 = (*param_14)();
  pUVar7 = (*param_13)();
  InitializePrivateStaticClass
            (UVerseClass::StaticClass,pUVar7,(UClass *)pUVar9,pUVar6,param_1,param_2);
LAB_1422b5d40:
  (*param_4)();
  return;
}

// ConstructUEnumHelper<UVerseEnum,UECodeGen_Private::FVerseEnumParams,`Verse::CodeGen::Private::ConstructUVerseEnum'::__l2::<lambda_1>_> @ 1422b5d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUEnumHelper<UVerseEnum,UECodeGen_Private::FVerseEnumParams,_Verse::CodeGen::Private::ConstructUVerseEnum_::__l2::<lambda_1>_>
          (UEnum **param_1,FVerseEnumParams *param_2,<lambda_1> *param_3)

{
  longlong *plVar1;
  short sVar2;
  uchar *puVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  UEnum *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UEnum *this;
  FObjectInitializer *pFVar10;
  UEnum *pUVar11;
  size_t sVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 auStackY_588 [32];
  ForAnyElementType local_528;
  uint local_520;
  uint local_51c;
  EObjectFlags local_518;
  FUtf8String local_510;
  size_t local_500;
  FName local_4f8 [2];
  FScriptContainerElement local_4e8 [256];
  ForAnyElementType local_3e8;
  FScriptContainerElement *local_3e0;
  int local_3d8;
  FScriptContainerElement local_3c8 [256];
  ForAnyElementType local_2c8;
  FScriptContainerElement *local_2c0;
  int local_2b8;
  FObjectInitializer local_2a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_588;
  pUVar11 = (UEnum *)0x0;
  local_518 = 0;
  pUVar7 = pUVar11;
  if ((code *)param_2->_padding_ != (code *)0x0) {
    pUVar7 = (UEnum *)(*(code *)param_2->_padding_)();
  }
  if (*param_1 != (UEnum *)0x0) {
    return;
  }
  local_518 = (EObjectFlags)param_2->_padding_;
  puVar3 = (uchar *)param_2->_padding_;
  local_2c8.Data = (FScriptContainerElement *)0x0;
  if (puVar3 == (uchar *)0x0) {
    local_2b8 = 0;
    local_2c0 = (FScriptContainerElement *)0x0;
  }
  else {
    local_500 = strlen((char *)puVar3);
    local_2b8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,(int)local_500);
    uVar6 = local_2b8 + 1;
    uVar14 = uVar6;
    if (uVar6 < 0x81) {
      if (local_2c8.Data != (FScriptContainerElement *)0x0) {
        uVar14 = 0;
        goto LAB_1422b5e30;
      }
    }
    else {
LAB_1422b5e30:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c8,0,uVar14,2);
    }
    local_2c0 = local_3c8;
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      local_2c0 = local_2c8.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_2c0,uVar6,puVar3,(int)local_500 + 1);
  }
  pFVar8 = ::FName::FName(local_4f8,(wchar_t *)local_2c0);
  FVar4 = *pFVar8;
  pUVar9 = UVerseEnum::GetPrivateStaticClass();
  this = (UEnum *)StaticAllocateObject
                            (pUVar9,(UObject *)pUVar7,FVar4,local_518,Borrowed,false,(bool *)0x0,
                             (UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  pUVar7 = pUVar11;
  if (this != (UEnum *)0x0) {
    pFVar10 = FObjectInitializer::FObjectInitializer(&local_2a8);
    UEnum::UEnum(this,pFVar10);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UVerseEnum__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FObjectInitializer::~FObjectInitializer(&local_2a8);
    pUVar7 = this;
  }
  if (local_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data);
  }
  *param_1 = pUVar7;
  *(uint *)&pUVar7[1]._padding_ = (uint)pUVar7[1]._padding_ | 2;
  FUtf8String::FUtf8String(&local_510,param_2->QaulifiedName);
  plVar1 = &pUVar7[1]._padding_;
  if ((FUtf8String *)plVar1 != &local_510) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_510.Data.AllocatorInstance.Data;
    *(int *)&pUVar7[1]._padding_ = local_510.Data.ArrayNum;
    *(int *)((longlong)&pUVar7[1]._padding_ + 4) = local_510.Data.ArrayMax;
    local_510.Data.ArrayNum = 0;
    local_510.Data.ArrayMax = 0;
    local_510.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_510.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_510.Data.AllocatorInstance.Data);
  }
  sVar2 = *(short *)((longlong)&param_2->_padding_ + 4);
  local_528.Data = (FScriptContainerElement *)0x0;
  local_520 = 0;
  local_51c = 0;
  if (sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)(int)sVar2);
  }
  if (0 < sVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,(int)sVar2,&local_528,0,(int *)&local_51c);
    pUVar11 = (UEnum *)(ulonglong)local_520;
  }
  puVar13 = (undefined8 *)param_2->_padding_;
  puVar15 = puVar13 + (longlong)*(short *)((longlong)&param_2->_padding_ + 4) * 2;
  if (puVar13 != puVar15) {
    do {
      uVar6 = (uint)pUVar11;
      puVar3 = (uchar *)*puVar13;
      local_3e8.Data = (FScriptContainerElement *)0x0;
      if (puVar3 == (uchar *)0x0) {
        local_3e0 = (FScriptContainerElement *)0x0;
        local_3d8 = 0;
      }
      else {
        local_500 = strlen((char *)puVar3);
        local_3d8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,(int)local_500);
        uVar6 = local_3d8 + 1;
        uVar14 = uVar6;
        if (uVar6 < 0x81) {
          if (local_3e8.Data != (FScriptContainerElement *)0x0) {
            uVar14 = 0;
            goto LAB_1422b6053;
          }
        }
        else {
LAB_1422b6053:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    (&local_3e8,0,uVar14,2);
        }
        local_3e0 = local_4e8;
        if (local_3e8.Data != (FScriptContainerElement *)0x0) {
          local_3e0 = local_3e8.Data;
        }
        UE::Core::Private::Convert((wchar_t *)local_3e0,uVar6,puVar3,(int)local_500 + 1);
        uVar6 = local_520;
      }
      pFVar5 = local_3e0;
      if (uVar6 == local_51c) {
        uVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_528,(int *)&local_51c);
      }
      local_520 = uVar6 + 1;
      pFVar8 = (FName *)(local_528.Data + (longlong)(int)uVar6 * 0x10);
      ::FName::FName(pFVar8,(wchar_t *)pFVar5);
      pFVar8[1] = *(FName *)(puVar13 + 1);
      if (local_3e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data);
      }
      puVar13 = puVar13 + 2;
      if (puVar13 == puVar15) break;
      pUVar11 = (UEnum *)(ulonglong)local_520;
    } while( true );
  }
  (**(code **)(pUVar7->_padding_ + 0x2e0))
            (pUVar7,&local_528,*(undefined1 *)((longlong)&param_2->_padding_ + 7),
             *(undefined1 *)((longlong)&param_2->_padding_ + 6));
  puVar3 = (uchar *)param_2->_padding_;
  local_3e8.Data = (FScriptContainerElement *)0x0;
  if (puVar3 == (uchar *)0x0) {
    local_3e0 = (FScriptContainerElement *)0x0;
    local_3d8 = 0;
    goto LAB_1422b61d4;
  }
  sVar12 = strlen((char *)puVar3);
  local_3d8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,(int)sVar12);
  uVar6 = local_3d8 + 1;
  uVar14 = uVar6;
  if (uVar6 < 0x81) {
    if (local_3e8.Data != (FScriptContainerElement *)0x0) {
      uVar14 = 0;
      goto LAB_1422b6183;
    }
  }
  else {
LAB_1422b6183:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3e8,0,uVar14,2);
  }
  local_3e0 = local_4e8;
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    local_3e0 = local_3e8.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_3e0,uVar6,puVar3,(int)sVar12 + 1);
LAB_1422b61d4:
  ::FString::operator=(&pUVar7->CppType,(wchar_t *)local_3e0);
  if (local_3e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3e8.Data);
  }
  if ((_func___cdecl_FText_int *)param_2->_padding_ != (_func___cdecl_FText_int *)0x0) {
    pUVar7->EnumDisplayNameFn = (_func___cdecl_FText_int *)param_2->_padding_;
  }
  if (local_528.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data);
  }
  return;
}

// ConstructUFunctionHelper<UVerseFunction,UECodeGen_Private::FVerseFunctionParams,`Verse::CodeGen::Private::ConstructUVerseFunction'::__l2::<lambda_1>_> @ 1422b6250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUFunctionHelper<UVerseFunction,UECodeGen_Private::FVerseFunctionParams,_Verse::CodeGen::Private::ConstructUVerseFunction_::__l2::<lambda_1>_>
          (UFunction **param_1,FVerseFunctionParams *param_2,UFunction **param_3,<lambda_1> *param_4
          )

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uchar *_Str;
  bool bVar4;
  UFunction *pUVar5;
  UFunction *pUVar6;
  size_t sVar7;
  UFunction *pUVar8;
  UClass *pUVar9;
  UFunction *pUVar10;
  UFunction *pUVar11;
  uint uVar12;
  undefined1 auStackY_1b8 [32];
  FName local_188;
  UFunction **local_180;
  <lambda_1> *local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar10 = (UFunction *)0x0;
  pcVar3 = (code *)param_2->_padding_;
  pUVar5 = pUVar10;
  local_180 = param_3;
  local_178 = param_4;
  if ((code *)param_2->_padding_ != (code *)0x0) {
    pUVar5 = (UFunction *)(*(code *)param_2->_padding_)();
  }
  pUVar6 = pUVar10;
  if (pcVar3 != (code *)0x0) {
    pUVar6 = (UFunction *)(*pcVar3)();
  }
  if (*param_1 != (UFunction *)0x0) {
    return;
  }
  _Str = (uchar *)param_2->_padding_;
  local_68.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_60 = (FScriptContainerElement *)0x0;
    local_58 = 0;
    goto LAB_1422b637b;
  }
  sVar7 = strlen((char *)_Str);
  local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
  uVar1 = local_58 + 1;
  uVar12 = uVar1;
  if (uVar1 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar12 = 0;
      goto LAB_1422b631b;
    }
  }
  else {
LAB_1422b631b:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar12,2);
  }
  local_60 = local_168;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_60,uVar1,_Str,(int)sVar7 + 1);
  param_3 = local_180;
LAB_1422b637b:
  ::FName::FName(&local_188,(wchar_t *)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  pUVar8 = (UFunction *)
           StaticFindObjectFastInternal
                     ((UClass *)0x0,(UObject *)pUVar5,local_188,ExactClass,RF_NoFlags,Borrowed);
  pUVar11 = pUVar10;
  if (pUVar8 != (UFunction *)0x0) {
    pUVar9 = Z_Construct_UClass_UFunction_NoRegister();
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       (pUVar11 = (UFunction *)0x0,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
       == &pUVar9->_padding_)) {
      pUVar10 = (UFunction *)pUVar8->_padding_;
      pUVar11 = pUVar8;
    }
  }
  pUVar5 = `Verse::CodeGen::Private::ConstructUVerseFunction'::__l2::<lambda_1>::operator()
                     (local_178,(UObject *)pUVar5,pUVar6,local_188,param_2);
  if ((pUVar5 == (UFunction *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectConstructInternal.h"
                         ,0x12d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = pUVar5;
  pUVar5->SingletonPtr = param_3;
  if (pUVar5 == pUVar11) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UFunction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pUVar5->_padding_ = (longlong)pUVar10;
  }
  pUVar5->RPCId = *(ushort *)((longlong)&param_2->_padding_ + 4);
  pUVar5->RPCResponseId = *(ushort *)((longlong)&param_2->_padding_ + 6);
  ConstructFProperties
            ((UObject *)pUVar5,(FPropertyParamsBase **)param_2->_padding_,
             (uint)(ushort)param_2->_padding_);
  (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5);
  UStruct::StaticLink((UStruct *)pUVar5,false);
  return;
}

// ConstructUScriptStructHelper<UVerseStruct,UECodeGen_Private::FVerseStructParams,`Verse::CodeGen::Private::ConstructUVerseStruct'::__l2::<lambda_1>_> @ 1422b64d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

void __cdecl
UECodeGen_Private::
ConstructUScriptStructHelper<UVerseStruct,UECodeGen_Private::FVerseStructParams,_Verse::CodeGen::Private::ConstructUVerseStruct_::__l2::<lambda_1>_>
          (UScriptStruct **param_1,FVerseStructParams *param_2,<lambda_1> *param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  EStructFlags EVar4;
  code *pcVar5;
  code *pcVar6;
  uchar *_Str;
  FName FVar7;
  longlong lVar8;
  UVerseStruct *pUVar9;
  UVerseStruct *pUVar10;
  size_t sVar11;
  FName *pFVar12;
  UClass *pUVar13;
  FObjectInitializer *pFVar14;
  UVerseStruct *this;
  uint uVar15;
  undefined1 auStackY_448 [32];
  UScriptStruct *local_3e0;
  FName local_3d0;
  FScriptContainerElement local_3c8 [256];
  ForAnyElementType local_2c8;
  FScriptContainerElement *local_2c0;
  int local_2b8;
  FObjectInitializer local_2a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_448;
  this = (UVerseStruct *)0x0;
  pcVar5 = (code *)param_2->_padding_;
  pcVar6 = (code *)param_2->_padding_;
  pUVar9 = this;
  if ((code *)param_2->_padding_ != (code *)0x0) {
    pUVar9 = (UVerseStruct *)(*(code *)param_2->_padding_)();
  }
  if (pcVar5 == (code *)0x0) {
    local_3e0 = (UScriptStruct *)0x0;
  }
  else {
    local_3e0 = (UScriptStruct *)(*pcVar5)();
  }
  pUVar10 = this;
  if (pcVar6 != (code *)0x0) {
    pUVar10 = (UVerseStruct *)(*pcVar6)();
  }
  if (*param_1 != (UScriptStruct *)0x0) {
    return;
  }
  _Str = (uchar *)param_2->_padding_;
  lVar8 = param_2->_padding_;
  local_2c8.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_2b8 = 0;
    local_2c0 = (FScriptContainerElement *)0x0;
    goto LAB_1422b6613;
  }
  sVar11 = strlen((char *)_Str);
  local_2b8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar11);
  uVar1 = local_2b8 + 1;
  uVar15 = uVar1;
  if (uVar1 < 0x81) {
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      uVar15 = 0;
      goto LAB_1422b65b5;
    }
  }
  else {
LAB_1422b65b5:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2c8,0,uVar15,2);
  }
  local_2c0 = local_3c8;
  if (local_2c8.Data != (FScriptContainerElement *)0x0) {
    local_2c0 = local_2c8.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_2c0,uVar1,_Str,(int)sVar11 + 1);
LAB_1422b6613:
  pFVar12 = ::FName::FName(&local_3d0,(wchar_t *)local_2c0);
  FVar7 = *pFVar12;
  pUVar13 = UVerseStruct::GetPrivateStaticClass();
  pUVar9 = (UVerseStruct *)
           StaticAllocateObject
                     (pUVar13,(UObject *)pUVar9,FVar7,(EObjectFlags)lVar8,Borrowed,false,(bool *)0x0
                      ,(UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (pUVar9 != (UVerseStruct *)0x0) {
    bVar2 = *(byte *)((longlong)&param_2->_padding_ + 4);
    uVar3 = *(ushort *)((longlong)&param_2->_padding_ + 2);
    EVar4 = *(EStructFlags *)((longlong)&param_2->_padding_ + 4);
    pFVar14 = FObjectInitializer::FObjectInitializer(&local_2a8);
    UScriptStruct::UScriptStruct
              ((UScriptStruct *)pUVar9,pFVar14,local_3e0,(ICppStructOps *)pUVar10,EVar4,
               (ulonglong)uVar3,(ulonglong)bVar2);
    pUVar9->VerseClassFlags = 0;
    pUVar9->_padding_ = (longlong)&___7UVerseStruct__6B_;
    (pUVar9->QualifiedName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pUVar9->QualifiedName).Data.ArrayNum = 0;
    (pUVar9->QualifiedName).Data.ArrayMax = 0;
    (pUVar9->InitFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    (pUVar9->ModuleClass).field0_0x0.DebugPtr = (UVerseClass *)0x0;
    (pUVar9->Guid).A = 0;
    (pUVar9->Guid).B = 0;
    (pUVar9->Guid).C = 0;
    (pUVar9->Guid).D = 0;
    (pUVar9->FactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    (pUVar9->OverrideFactoryFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
    *(undefined8 *)&pUVar9->IntPropertyConstraints = 0;
    *(undefined8 *)&(pUVar9->IntPropertyConstraints).field_0x8 = 0;
    *(undefined8 *)&(pUVar9->IntPropertyConstraints).field_0x20 = 0;
    pUVar9->ConstructorEffects = None;
    *(undefined4 *)&(pUVar9->IntPropertyConstraints).field_0x28 = 0;
    *(undefined4 *)&(pUVar9->IntPropertyConstraints).field_0x2c = 0x80;
    *(undefined4 *)&(pUVar9->IntPropertyConstraints).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pUVar9->IntPropertyConstraints).field_0x34 = 0;
    *(undefined8 *)&(pUVar9->IntPropertyConstraints).field_0x40 = 0;
    *(undefined4 *)&(pUVar9->IntPropertyConstraints).field_0x48 = 0;
    *(undefined8 *)&pUVar9->DoublePropertyConstraints = 0;
    *(undefined8 *)&(pUVar9->DoublePropertyConstraints).field_0x8 = 0;
    *(undefined8 *)&(pUVar9->DoublePropertyConstraints).field_0x20 = 0;
    *(undefined4 *)&(pUVar9->DoublePropertyConstraints).field_0x28 = 0;
    *(undefined4 *)&(pUVar9->DoublePropertyConstraints).field_0x2c = 0x80;
    *(undefined4 *)&(pUVar9->DoublePropertyConstraints).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pUVar9->DoublePropertyConstraints).field_0x34 = 0;
    *(undefined8 *)&(pUVar9->DoublePropertyConstraints).field_0x40 = 0;
    *(undefined4 *)&(pUVar9->DoublePropertyConstraints).field_0x48 = 0;
    pUVar9->NativeTypeDesc = (FVniTypeDesc *)0x0;
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar9,RF_LoadCompleted|RF_WasLoaded);
    FObjectInitializer::~FObjectInitializer(&local_2a8);
    this = pUVar9;
  }
  if (local_2c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data);
  }
  *param_1 = (UScriptStruct *)this;
  `Verse::CodeGen::Private::ConstructUVerseStruct'::__l2::<lambda_1>::operator()
            (param_3,this,param_2);
  ConstructFProperties
            ((UObject *)this,(FPropertyParamsBase **)param_2->_padding_,
             (uint)(ushort)param_2->_padding_);
  UStruct::StaticLink((UStruct *)this,false);
  return;
}

// DestructItems<TFieldPath<FProperty>,int> @ 1422b6840

void __cdecl DestructItems<TFieldPath<FProperty>,int>(TFieldPath<FProperty> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FVersePersistentVar,int> @ 1422b6880

void __cdecl DestructItems<FVersePersistentVar,int>(FVersePersistentVar *param_1,int param_2)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pvVar1 = *(void **)&(param_1->Property).field_0x10;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar2 = (param_1->Path).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FVerseSessionVar,int> @ 1422b68d0

void __cdecl DestructItems<FVerseSessionVar,int>(FVerseSessionVar *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->Property).field_0x10;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeName<UVerseClass> @ 1422b6980

FString * __cdecl GetTypeName<UVerseClass>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = UVerseClass::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<UVerseClass> @ 1422b69c0

void __cdecl InternalConstructor<UVerseClass>(FObjectInitializer *param_1)

{
  if ((UVerseClass *)param_1->Obj != (UVerseClass *)0x0) {
    UVerseClass::UVerseClass((UVerseClass *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UVerseEnum> @ 1422b69e0

void __cdecl InternalConstructor<UVerseEnum>(FObjectInitializer *param_1)

{
  UEnum *this;
  
  this = (UEnum *)param_1->Obj;
  if (this != (UEnum *)0x0) {
    UEnum::UEnum(this,param_1);
    this->_padding_ = (longlong)&___7UVerseEnum__6B_;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UVerseFunction> @ 1422b6a30

void __cdecl InternalConstructor<UVerseFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UVerseFunction__6B_;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
  }
  return;
}

// InternalConstructor<UVerseStruct> @ 1422b6ab0

void __cdecl InternalConstructor<UVerseStruct>(FObjectInitializer *param_1)

{
  UScriptStruct *this;
  
  this = (UScriptStruct *)param_1->Obj;
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    this->_padding_ = (longlong)&___7UVerseStruct__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UVerseClass> @ 1422b6bc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVerseClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UVerseClass *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVerseClass::GetPrivateStaticClass();
  pUVar3 = (UVerseClass *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UVerseClass *)0x0) {
    pUVar3 = UVerseClass::UVerseClass(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVerseEnum> @ 1422b6c60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVerseEnum>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEnum *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVerseEnum::GetPrivateStaticClass();
  this = (UEnum *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (UEnum *)0x0) {
    UEnum::UEnum(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UVerseEnum__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVerseFunction> @ 1422b6d20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVerseFunction>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UFunction *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVerseFunction::GetPrivateStaticClass();
  this = (UFunction *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UFunction *)0x0) {
    UFunction::UFunction(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UVerseFunction__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVerseStruct> @ 1422b6de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UVerseStruct>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UScriptStruct *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVerseStruct::GetPrivateStaticClass();
  this = (UScriptStruct *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UScriptStruct *)0x0) {
    UScriptStruct::UScriptStruct(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UVerseStruct__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// MutableView<TObjectPtr<UField>_> @ 1422b6f60

TMutableView<TObjectPtr<UField>_> __cdecl
MutableView<TObjectPtr<UField>_>(TObjectPtr<UField> *param_1)

{
  TObjectPtr<UField>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UField>_>)(UField **)param_1;
}

// NewObject<UOptionalPropertyTestObject> @ 1422b6f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOptionalPropertyTestObject * __cdecl NewObject<UOptionalPropertyTestObject>(UObject *param_1)

{
  UClass *pUVar1;
  UOptionalPropertyTestObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UOptionalPropertyTestObject_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOptionalPropertyTestObject *)
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

// StaticEnum<enum_EVerseEffectSet> @ 1422b7190

UEnum * __cdecl StaticEnum<enum_EVerseEffectSet>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEffectSet,(UObject *)pUVar1,
                       L"EVerseEffectSet");
  }
  return Z_Registration_Info_UEnum_EVerseEffectSet.OuterSingleton;
}

// StaticEnum<enum_EVerseEnumFlags> @ 1422b71d0

UEnum * __cdecl StaticEnum<enum_EVerseEnumFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseEnumFlags,(UObject *)pUVar1,
                       L"EVerseEnumFlags");
  }
  return Z_Registration_Info_UEnum_EVerseEnumFlags.OuterSingleton;
}

// StaticEnum<enum_EVerseFalse> @ 1422b7210

UEnum * __cdecl StaticEnum<enum_EVerseFalse>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseFalse,(UObject *)pUVar1,L"EVerseFalse");
  }
  return Z_Registration_Info_UEnum_EVerseFalse.OuterSingleton;
}

// StaticEnum<enum_EVerseFunctionFlags> @ 1422b7250

UEnum * __cdecl StaticEnum<enum_EVerseFunctionFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseFunctionFlags,(UObject *)pUVar1,
                       L"EVerseFunctionFlags");
  }
  return Z_Registration_Info_UEnum_EVerseFunctionFlags.OuterSingleton;
}

// StaticEnum<enum_EVerseTrue> @ 1422b7290

UEnum * __cdecl StaticEnum<enum_EVerseTrue>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EVerseTrue,(UObject *)pUVar1,L"EVerseTrue");
  }
  return Z_Registration_Info_UEnum_EVerseTrue.OuterSingleton;
}

// ToRawPtr<TObjectPtr<UField>_> @ 1422b72d0

UField ** __cdecl ToRawPtr<TObjectPtr<UField>_>(TMutableView<TObjectPtr<UField>_> *param_1)

{
  return param_1->View;
}

// operator() @ 1422b9950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`Verse::CodeGen::Private::ConstructUVerseClass'::__l2::<lambda_1>::operator()
          (void *this,UVerseClass *param_1,FVerseClassParams *param_2)

{
  uint uVar1;
  int *piVar2;
  TArray<TObjectPtr<UVerseClass>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  size_t sVar11;
  FName *pFVar12;
  FString *pFVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_2f8 [32];
  UClass **local_2d8;
  FScriptContainerElement *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  UClass *local_2a8;
  FName local_2a0;
  FString local_298;
  FString local_288;
  FScriptContainerElement local_278 [256];
  ForAnyElementType local_178;
  FScriptContainerElement *local_170;
  int local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  uVar1 = (uint)param_2->_padding_;
  if (uVar1 >> 0x1a != 0) {
    puVar16 = (undefined8 *)param_2->_padding_;
    puVar19 = puVar16 + (ulonglong)(uVar1 >> 0x1a) * 2;
    for (; puVar16 != puVar19; puVar16 = puVar16 + 2) {
      if (((*(char *)((longlong)puVar16 + 0xd) != '\0') && ((code *)*puVar16 != (code *)0x0)) &&
         (pUVar9 = (UClass *)(*(code *)*puVar16)(), pUVar9 != (UClass *)0x0)) {
        pTVar3 = &param_1->DirectInterfaces;
        pUVar10 = UVerseClass::StaticClass();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          pFVar13 = GetTypeName<UVerseClass>(&local_298);
          pwVar15 = L"";
          if ((pFVar13->Data).ArrayNum == 0) {
            pwVar17 = L"";
          }
          else {
            pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
          pFVar13 = GetFullNameForCastLogError<UClass>(&local_288,pUVar9);
          if ((pFVar13->Data).ArrayNum != 0) {
            pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar15,pwVar17);
        }
        local_2a8 = pUVar9;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_2a8) &&
           (lVar14 = (longlong)(param_1->DirectInterfaces).ArrayMax,
           (FScriptContainerElement *)&local_2a8 < pFVar4 + lVar14 * 8)) {
          local_2c0 = (longlong)(param_1->DirectInterfaces).ArrayNum;
          local_2b8 = 8;
          local_2d8 = &local_2a8;
          local_2d0 = pFVar4;
          local_2c8 = lVar14;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = (param_1->DirectInterfaces).ArrayNum;
        piVar2 = &(param_1->DirectInterfaces).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar3->AllocatorInstance,piVar2);
        }
        (param_1->DirectInterfaces).ArrayNum = iVar8 + 1;
        *(UClass **)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_2a8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_2a8 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_2a8);
        }
      }
    }
  }
  puVar5 = (uchar *)param_2->PackageRelativeVersePath;
  local_178.Data = (FScriptContainerElement *)0x0;
  if (puVar5 == (uchar *)0x0) {
    local_170 = (FScriptContainerElement *)0x0;
    local_168 = 0;
  }
  else {
    sVar11 = strlen((char *)puVar5);
    local_168 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar5,(int)sVar11);
    uVar1 = local_168 + 1;
    uVar18 = uVar1;
    if (uVar1 < 0x81) {
      if (local_178.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_1422b9b2d;
      }
    }
    else {
LAB_1422b9b2d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_178,0,uVar18,2);
    }
    local_170 = local_278;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      local_170 = local_178.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_170,uVar1,puVar5,(int)sVar11 + 1);
  }
  ::FString::operator=(&param_1->PackageRelativeVersePath,(wchar_t *)local_170);
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  puVar5 = (uchar *)param_2->MangledPackageVersePath;
  local_58.Data = (FScriptContainerElement *)0x0;
  if (puVar5 == (uchar *)0x0) {
    local_50 = (FScriptContainerElement *)0x0;
    local_48 = 0;
    goto LAB_1422b9c43;
  }
  sVar11 = strlen((char *)puVar5);
  local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar5,(int)sVar11);
  uVar1 = local_48 + 1;
  uVar18 = uVar1;
  if (uVar1 < 0x81) {
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      uVar18 = 0;
      goto LAB_1422b9bef;
    }
  }
  else {
LAB_1422b9bef:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar18,2);
  }
  local_50 = local_158;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    local_50 = local_58.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_50,uVar1,puVar5,(int)sVar11 + 1);
LAB_1422b9c43:
  pFVar12 = ::FName::FName(&local_2a0,(wchar_t *)local_50);
  param_1->MangledPackageVersePath = *pFVar12;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  param_1->SolClassFlags = param_1->SolClassFlags | param_2->VerseClassFlags;
  return;
}

// operator() @ 1422b9cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UFunction * __thiscall
`Verse::CodeGen::Private::ConstructUVerseFunction'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1,UFunction *param_2,FName param_3,
          FVerseFunctionParams *param_4)

{
  uint uVar1;
  ushort uVar2;
  EObjectFlags EVar3;
  uchar *_Str;
  longlong lVar4;
  UClass *pUVar5;
  UFunction *this_00;
  FObjectInitializer *pFVar6;
  size_t sVar7;
  FName *pFVar8;
  UFunction *pUVar9;
  uint uVar10;
  undefined1 auStackY_428 [32];
  FName local_3c8 [2];
  FScriptContainerElement local_3b8 [256];
  ForAnyElementType local_2b8;
  FScriptContainerElement *local_2b0;
  int local_2a8;
  FObjectInitializer local_298;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_428;
  pUVar9 = (UFunction *)0x0;
  local_3c8[0].ComparisonIndex.Value = 0;
  EVar3 = *(EObjectFlags *)((longlong)&param_4->_padding_ + 4);
  pUVar5 = UVerseFunction::GetPrivateStaticClass();
  this_00 = (UFunction *)
            StaticAllocateObject
                      (pUVar5,param_1,param_3,EVar3,Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,
                       (FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (this_00 != (UFunction *)0x0) {
    uVar2 = *(ushort *)((longlong)&param_4->_padding_ + 2);
    lVar4 = param_4->_padding_;
    pFVar6 = FObjectInitializer::FObjectInitializer(&local_298);
    UFunction::UFunction(this_00,pFVar6,param_2,(EFunctionFlags)lVar4,(ulonglong)uVar2);
    *(undefined4 *)&this_00[1]._padding_ = 0;
    this_00->_padding_ = (longlong)&___7UVerseFunction__6B_;
    this_00[1]._padding_ = 0;
    FObjectInitializer::~FObjectInitializer(&local_298);
    pUVar9 = this_00;
  }
  _Str = (uchar *)param_4->AlternateName;
  local_2b8.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_2b0 = (FScriptContainerElement *)0x0;
    local_2a8 = 0;
    goto LAB_1422b9e85;
  }
  sVar7 = strlen((char *)_Str);
  local_2a8 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar7);
  uVar1 = local_2a8 + 1;
  uVar10 = uVar1;
  if (uVar1 < 0x81) {
    if (local_2b8.Data != (FScriptContainerElement *)0x0) {
      uVar10 = 0;
      goto LAB_1422b9e2d;
    }
  }
  else {
LAB_1422b9e2d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2b8,0,uVar10,2);
  }
  local_2b0 = local_3b8;
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    local_2b0 = local_2b8.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_2b0,uVar1,_Str,(int)sVar7 + 1);
LAB_1422b9e85:
  pFVar8 = ::FName::FName(local_3c8,(wchar_t *)local_2b0);
  pUVar9[1]._padding_ = (longlong)*pFVar8;
  if (local_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.Data);
  }
  *(uint *)&pUVar9[1]._padding_ = (uint)pUVar9[1]._padding_ | 1;
  return pUVar9;
}

// operator() @ 1422b9ef0

void __thiscall
`Verse::CodeGen::Private::ConstructUVerseStruct'::__l2::<lambda_1>::operator()
          (void *this,UVerseStruct *param_1,FVerseStructParams *param_2)

{
  wchar_t wVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  UPackage *pUVar7;
  int iVar8;
  ushort uVar9;
  ForAnyElementType FVar10;
  FUtf8String *pFVar11;
  FName local_res10;
  FName local_res18;
  FUtf8String local_48;
  FString local_38;
  FString local_28;
  
  param_1->VerseClassFlags = param_1->VerseClassFlags | 0x10;
  pUVar7 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res10 = (FName)pUVar7->_padding_;
  ::FName::ToString(&local_res10,&local_28);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar10.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar8 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar10.Data);
  local_res18 = (FName)param_1->_padding_;
  ::FName::ToString(&local_res18,&local_38);
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar10.Data = local_38.Data.AllocatorInstance.Data;
  }
  if ((FCrc::CRCTable_DEPRECATED[1] == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CRCTable_DEPRECATED[1] != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Crc.h"
                         ,0xb4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  wVar1 = *(wchar_t *)FVar10.Data;
  while (wVar1 != L'\0') {
    FVar10.Data = FVar10.Data + 2;
    uVar9 = wVar1 - (-(ushort)((ushort)wVar1 - 0x61 < 0x1a) & 0x20);
    uVar6 = uVar6 >> 8 ^ FCrc::CRCTable_DEPRECATED[(byte)((byte)uVar6 ^ (byte)uVar9)];
    uVar6 = uVar6 >> 8 ^ FCrc::CRCTable_DEPRECATED[(uVar9 >> 8 ^ uVar6) & 0xff];
    wVar1 = *(wchar_t *)FVar10.Data;
  }
  (param_1->Guid).A = uVar6;
  (param_1->Guid).B = uVar5;
  (param_1->Guid).C = 0;
  (param_1->Guid).D = 0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FUtf8String::FUtf8String(&local_48,param_2->QaulifiedName);
  pFVar11 = &param_1->QualifiedName;
  if (pFVar11 != &local_48) {
    pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar11->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_1->QualifiedName).Data.ArrayNum = local_48.Data.ArrayNum;
    (param_1->QualifiedName).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// `scalar_deleting_destructor' @ 1422ba410

void * __thiscall UVerseClass::_scalar_deleting_destructor_(UVerseClass *this,uint param_1)

{
  ~UVerseClass(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x4d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422ba470

void * __thiscall UVerseEnum::_scalar_deleting_destructor_(UVerseEnum *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVerseEnum__6B_;
  pFVar1 = (this->QualifiedName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UEnum::~UEnum((UEnum *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422ba4e0

void * __thiscall UVerseFunction::_scalar_deleting_destructor_(UVerseFunction *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UVerseFunction__6B_;
  UFunction::~UFunction((UFunction *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422ba540

void * __thiscall UVerseStruct::_scalar_deleting_destructor_(UVerseStruct *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UVerseStruct__6B_;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DoublePropertyConstraints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TFieldPath<FDoubleProperty>,FVerseDoubleConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DoublePropertyConstraints);
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  pvVar1 = *(void **)&(this->IntPropertyConstraints).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TFieldPath<FInt64Property>,FVerseIntConstraints>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IntPropertyConstraints);
  pFVar2 = (this->QualifiedName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UScriptStruct::~UScriptStruct((UScriptStruct *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b8);
  }
  return this;
}

// AppendVerseToString @ 1422ba710

void __cdecl
Verse::AppendVerseToString(TStringBuilderBase<char8_t> *param_1,TStringView<char8_t> *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  char *pcVar5;
  byte *pbVar6;
  wchar32 wVar7;
  wchar32 local_res8 [2];
  byte *local_res10;
  
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<char8_t>::Extend(param_1,1);
  }
  iVar2 = param_2->Size;
  *param_1->CurPos = '\"';
  local_res10 = param_2->DataPtr;
  param_1->CurPos = param_1->CurPos + 1;
  pbVar6 = local_res10 + iVar2;
  pbVar3 = local_res10;
joined_r0x0001422ba75a:
  do {
    if (pbVar6 <= pbVar3) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      *param_1->CurPos = '\"';
      param_1->CurPos = param_1->CurPos + 1;
      return;
    }
    bVar4 = DecodeCodePointFromUTF8(&local_res10,pbVar6,local_res8);
    if (!bVar4) {
      bVar1 = *local_res10;
      local_res10 = local_res10 + 1;
      local_res8[0] = (wchar32)bVar1;
    }
    pbVar3 = local_res10;
    wVar7 = local_res8[0];
    switch(local_res8[0]) {
    case L'\t':
      wVar7 = L't';
      break;
    case L'\n':
      wVar7 = L'n';
      break;
    default:
      if (0x5e < (uint)(local_res8[0] + L'\xffffffe0')) goto LAB_1422ba847;
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<char8_t>::Extend(param_1,1);
      }
      goto LAB_1422ba83a;
    case L'\r':
      wVar7 = L'r';
      break;
    case L'\"':
    case L'#':
    case L'&':
    case L'\'':
    case L'<':
    case L'>':
    case L'\\':
    case L'{':
    case L'}':
    case L'~':
      break;
    }
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
    }
    *param_1->CurPos = '\\';
    param_1->CurPos = param_1->CurPos + 1;
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<char8_t>::Extend(param_1,1);
      *param_1->CurPos = (uchar)wVar7;
      param_1->CurPos = param_1->CurPos + 1;
    }
    else {
LAB_1422ba83a:
      *param_1->CurPos = (uchar)wVar7;
      param_1->CurPos = param_1->CurPos + 1;
    }
  } while( true );
LAB_1422ba847:
  pcVar5 = "{0o%.2x}";
  if (0xff < (uint)local_res8[0]) {
    pcVar5 = "{0u%x}";
  }
  TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)pcVar5);
  goto joined_r0x0001422ba75a;
}

// AppendVerseToString @ 1422ba940

void __cdecl Verse::AppendVerseToString(TStringBuilderBase<char8_t> *param_1,uchar param_2)

{
  bool bVar1;
  wchar32 wVar2;
  char local_res10 [24];
  
  wVar2 = (wchar32)param_2;
  local_res10[0] = '\0';
  bVar1 = IsPrintableAsEscapeCode(wVar2,local_res10);
  if (bVar1) {
    TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"\'\\%c\'");
    return;
  }
  if ((uint)(wVar2 + L'\xffffffe0') < 0x5f) {
    TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"\'%c\'");
    return;
  }
  TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"0o%.2x");
  return;
}

// AppendVerseToString @ 1422ba9c0

void __cdecl Verse::AppendVerseToString(TStringBuilderBase<char8_t> *param_1,wchar32 param_2)

{
  TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"0u%x");
  return;
}

// ApplyInstancedObjectPropertyFlags @ 1422ba9e0

void __cdecl VerseClassPrivate::ApplyInstancedObjectPropertyFlags(FProperty *param_1)

{
  undefined4 uVar1;
  FFieldClass *pFVar2;
  FProperty *pFVar3;
  FFieldClass *pFVar4;
  bool bVar5;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (param_1 != (FProperty *)0x0) {
      if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x800000000000) == 0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x400000000000) == 0) {
          if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000000000) == 0) {
            if (param_1 != (FProperty *)0x0) {
              pFVar2 = (FFieldClass *)param_1->_padding_;
              uVar1 = (undefined4)pFVar2->CastFlags;
              if (((uint)uVar1 >> 0x14 & 1) != 0) goto LAB_1422bab2c;
              if (((uint)uVar1 >> 0x10 & 1) != 0) {
                param_1->PropertyFlags =
                     param_1->PropertyFlags |
                     (CPF_PersistentInstance|CPF_InstancedReference|CPF_ExportObject);
                return;
              }
              pFVar4 = FVerseDynamicProperty::StaticClass();
              if (pFVar4->Id == CASTCLASS_None) {
                for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                  if (pFVar2 == pFVar4) {
                    bVar5 = true;
                    goto LAB_1422baba7;
                  }
                }
                bVar5 = false;
              }
              else {
                bVar5 = (pFVar2->CastFlags & pFVar4->Id) != CASTCLASS_None;
              }
LAB_1422baba7:
              if (bVar5) {
                param_1->PropertyFlags = param_1->PropertyFlags | CPF_InstancedReference;
              }
            }
          }
          else {
            pFVar3 = FOptionalPropertyLayout::GetValueProperty
                               ((FOptionalPropertyLayout *)(param_1 + 1));
            ApplyInstancedObjectPropertyFlags(pFVar3);
            pFVar3 = FOptionalPropertyLayout::GetValueProperty
                               ((FOptionalPropertyLayout *)(param_1 + 1));
            if ((pFVar3->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
                CPF_None) goto LAB_1422bab2c;
          }
        }
        else {
          ApplyInstancedObjectPropertyFlags((FProperty *)param_1[1]._padding_);
          ApplyInstancedObjectPropertyFlags((FProperty *)param_1[1]._padding_);
          if ((*(ulonglong *)(param_1[1]._padding_ + 0x38) & 0x8000080000) != 0) {
LAB_1422bab2c:
            param_1->PropertyFlags = param_1->PropertyFlags | CPF_ContainsInstancedReference;
            return;
          }
          if ((*(ulonglong *)(param_1[1]._padding_ + 0x38) & 0x8000080000) != 0) {
            param_1->PropertyFlags = param_1->PropertyFlags | CPF_ContainsInstancedReference;
            return;
          }
        }
      }
      else {
        ApplyInstancedObjectPropertyFlags((FProperty *)param_1[1]._padding_);
        if ((*(ulonglong *)(param_1[1]._padding_ + 0x38) & 0x8000080000) != 0) {
          param_1->PropertyFlags = param_1->PropertyFlags | CPF_ContainsInstancedReference;
          return;
        }
      }
    }
  }
  else {
    ApplyInstancedObjectPropertyFlags((FProperty *)param_1[1]._padding_);
    if ((*(ulonglong *)(param_1[1]._padding_ + 0x38) & 0x8000080000) != 0) {
      param_1->PropertyFlags = param_1->PropertyFlags | CPF_ContainsInstancedReference;
      return;
    }
  }
  return;
}

// AsFormattedString @ 1422babd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
Verse::AsFormattedString(FString *__return_storage_ptr__,ERuntimeDiagnostic *param_1,FText *param_2)

{
  char *pcVar1;
  bool bVar2;
  void *pvVar3;
  size_t sVar4;
  SRuntimeDiagnosticInfo *pSVar5;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8 [16];
  undefined2 *puStack_298;
  undefined2 *local_290;
  undefined2 local_288;
  SRuntimeDiagnosticInfo *local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_2a8._0_2_ = *param_1;
  if (ErrRuntime_UnregisteredLeaderboard < (ushort)local_2a8._0_2_) {
    local_280 = (SRuntimeDiagnosticInfo *)local_2a8;
    bVar2 = `Verse::GetRuntimeDiagnosticInfo'::__l3::<lambda_1>::operator()(&local_280);
    if (!bVar2) {
      pSVar5 = DiagnosticInfos;
      goto LAB_1422bac48;
    }
  }
  pSVar5 = DiagnosticInfos + (ushort)local_2a8._0_2_;
LAB_1422bac48:
  local_2a8._8_8_ = (wchar_t *)0x0;
  puStack_298 = (void *)0x0;
  local_290 = (undefined2 *)0x0;
  local_288 = 0;
  TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(local_2a8 + 8),6);
  pvVar3 = FGenericPlatformString::Memcpy(puStack_298,L"Verse ",0xc);
  puStack_298 = (undefined2 *)((longlong)pvVar3 + 0xc);
  if (pSVar5->Severity == UnrecoverableError) {
    if (local_290 < (undefined2 *)((longlong)pvVar3 + 0x32)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(local_2a8 + 8),0x13);
    }
    pvVar3 = FGenericPlatformString::Memcpy(puStack_298,L"unrecoverable error",0x26);
    puStack_298 = (undefined2 *)((longlong)pvVar3 + 0x26);
  }
  else {
    local_280 = pSVar5;
    `Verse::AsFormattedString'::__l4::<lambda_1>::operator()(&local_280);
  }
  pcVar1 = pSVar5->Description;
  local_158._padding_ = 0;
  if (pcVar1 == (char *)0x0) {
    local_158.Ptr = (wchar_t *)0x0;
    local_158.StringLength = 0;
  }
  else {
    sVar4 = strlen(pcVar1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_158,pcVar1,(int)sVar4,Yes);
  }
  pcVar1 = pSVar5->Name;
  local_278._padding_ = 0;
  if (pcVar1 == (char *)0x0) {
    local_278.Ptr = (wchar_t *)0x0;
    local_278.StringLength = 0;
  }
  else {
    sVar4 = strlen(pcVar1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,pcVar1,(int)sVar4,Yes);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl
            ((TStringBuilderBase<wchar_t> *)(local_2a8 + 8),L": %s: %s");
  if ((void *)local_278._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_278._padding_);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  bVar2 = FText::IsEmpty(param_2);
  if (!bVar2) {
    FText::ToString(param_2);
    TStringBuilderBase<wchar_t>::AppendfImpl
              ((TStringBuilderBase<wchar_t> *)(local_2a8 + 8),L" (%s)");
  }
  if (local_290 < puStack_298 + 1) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)(local_2a8 + 8),1);
  }
  *puStack_298 = 0;
  ::FString::FString(__return_storage_ptr__,(wchar_t *)local_2a8._8_8_);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)(local_2a8 + 8));
  return __return_storage_ptr__;
}

// CanTreatAsInstancedProperty @ 1422bb790

bool __cdecl VerseClassPrivate::CanTreatAsInstancedProperty(FProperty *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  FName local_res10 [3];
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ContextSelfName,"_Self");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pUVar2 = FField::GetOwnerClass((FField *)param_1);
  local_res10[0] = (FName)pUVar2->_padding_;
  ::FName::ToString(local_res10,&local_18);
  bVar1 = ::FString::StartsWith(&local_18,L"task_",5,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && ((param_1->PropertyFlags & CPF_Parm) != CPF_None)) {
    bVar1 = IsThisNotNull(param_1,"FField::GetFName");
    if (bVar1) {
      return (FName)param_1->_padding_ != ContextSelfName;
    }
    return ContextSelfName != (FName)0x0;
  }
  return true;
}

// ClearInstancedObjectPropertyFlags @ 1422bb950

void __cdecl VerseClassPrivate::ClearInstancedObjectPropertyFlags(FProperty *param_1)

{
  undefined4 uVar1;
  FFieldClass *pFVar2;
  FProperty *pFVar3;
  FFieldClass *pFVar4;
  FProperty *pFVar5;
  bool bVar6;
  
LAB_1422bb9a3:
  do {
    while( true ) {
      pFVar5 = param_1;
      if (pFVar5 == (FProperty *)0x0) {
        return;
      }
      if ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x15 & 1) == 0) break;
      param_1 = (FProperty *)pFVar5[1]._padding_;
LAB_1422bb9d7:
      if ((param_1->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
          CPF_None) {
        pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_ContainsInstancedReference;
      }
    }
    if (pFVar5 == (FProperty *)0x0) {
      return;
    }
    if ((*(ulonglong *)(pFVar5->_padding_ + 0x18) & 0x800000000000) != 0) {
      param_1 = (FProperty *)pFVar5[1]._padding_;
      goto LAB_1422bb9d7;
    }
    if ((*(ulonglong *)(pFVar5->_padding_ + 0x18) & 0x400000000000) != 0) {
      pFVar3 = (FProperty *)pFVar5[1]._padding_;
      if (((pFVar3->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
           CPF_None) || ((*(ulonglong *)(pFVar5[1]._padding_ + 0x38) & 0x8000080000) != 0)) {
        pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_ContainsInstancedReference;
      }
      ClearInstancedObjectPropertyFlags(pFVar3);
      param_1 = (FProperty *)pFVar5[1]._padding_;
      goto LAB_1422bb9a3;
    }
    pFVar2 = (FFieldClass *)pFVar5->_padding_;
    if ((pFVar2->CastFlags & CASTCLASS_FOptionalProperty) == CASTCLASS_None) {
      uVar1 = (undefined4)pFVar2->CastFlags;
      if (((uint)uVar1 >> 0x14 & 1) != 0) {
        pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_ContainsInstancedReference;
        return;
      }
      if (((uint)uVar1 >> 0x10 & 1) != 0) {
        pFVar5->PropertyFlags =
             pFVar5->PropertyFlags &
             ~(CPF_PersistentInstance|CPF_InstancedReference|CPF_ExportObject);
        return;
      }
      pFVar4 = FVerseDynamicProperty::StaticClass();
      if (pFVar4->Id == CASTCLASS_None) break;
      bVar6 = (pFVar2->CastFlags & pFVar4->Id) != CASTCLASS_None;
      goto LAB_1422bba93;
    }
    pFVar3 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)(pFVar5 + 1));
    if ((pFVar3->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
        CPF_None) {
      pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_ContainsInstancedReference;
    }
    param_1 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)(pFVar5 + 1));
  } while( true );
joined_r0x0001422bba81:
  if (pFVar2 == (FFieldClass *)0x0) {
    bVar6 = false;
LAB_1422bba93:
    if (bVar6) {
      pFVar5->PropertyFlags = pFVar5->PropertyFlags & ~CPF_InstancedReference;
    }
    return;
  }
  if (pFVar2 == pFVar4) {
    bVar6 = true;
    goto LAB_1422bba93;
  }
  pFVar2 = pFVar2->SuperClass;
  goto joined_r0x0001422bba81;
}

// ConstructUVerseClass @ 1422bbad0

void __cdecl
Verse::CodeGen::Private::ConstructUVerseClass(UClass **param_1,FVerseClassParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  UECodeGen_Private::
  ConstructUClassHelper<UVerseClass,UECodeGen_Private::FVerseClassParams,_Verse::CodeGen::Private::ConstructUVerseClass_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// ConstructUVerseClassNoInit @ 1422bbae0

void __cdecl
Verse::CodeGen::Private::ConstructUVerseClassNoInit
          (wchar_t *param_1,wchar_t *param_2,UClass **param_3,_func___cdecl_void *param_4,
          uint param_5,uint param_6,EClassFlags param_7,EClassCastFlags param_8,wchar_t *param_9,
          _func___cdecl_void_FObjectInitializer_ptr *param_10,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_11,
          FUObjectCppClassStaticFunctions *param_12,_func___cdecl_UClass_ptr *param_13,
          _func___cdecl_UClass_ptr *param_14)

{
  <lambda_1> local_18 [24];
  
  UECodeGen_Private::
  ConstructUClassNoInitHelper<UVerseClass,_Verse::CodeGen::Private::ConstructUVerseClassNoInit_::__l2::<lambda_1>_>
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12,param_13,param_14,local_18);
  return;
}

// ConstructUVerseEnum @ 1422bbb80

void __cdecl Verse::CodeGen::Private::ConstructUVerseEnum(UEnum **param_1,FVerseEnumParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  UECodeGen_Private::
  ConstructUEnumHelper<UVerseEnum,UECodeGen_Private::FVerseEnumParams,_Verse::CodeGen::Private::ConstructUVerseEnum_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// ConstructUVerseFunction @ 1422bbb90

void __cdecl
Verse::CodeGen::Private::ConstructUVerseFunction(UFunction **param_1,FVerseFunctionParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  UECodeGen_Private::
  ConstructUFunctionHelper<UVerseFunction,UECodeGen_Private::FVerseFunctionParams,_Verse::CodeGen::Private::ConstructUVerseFunction_::__l2::<lambda_1>_>
            (param_1,param_2,param_1,local_res18);
  return;
}

// ConstructUVerseStruct @ 1422bbbb0

void __cdecl
Verse::CodeGen::Private::ConstructUVerseStruct(UScriptStruct **param_1,FVerseStructParams *param_2)

{
  <lambda_1> local_res18 [16];
  
  UECodeGen_Private::
  ConstructUScriptStructHelper<UVerseStruct,UECodeGen_Private::FVerseStructParams,_Verse::CodeGen::Private::ConstructUVerseStruct_::__l2::<lambda_1>_>
            (param_1,param_2,local_res18);
  return;
}

// DecodeCodePointFromUTF8 @ 1422bbbc0

bool __cdecl DecodeCodePointFromUTF8(uchar **param_1,uchar *param_2,wchar32 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  wchar32 wVar3;
  byte *pbVar4;
  
  pbVar2 = *param_1;
  bVar1 = *pbVar2;
  if (bVar1 < 0x80) {
    *param_1 = pbVar2 + 1;
    *param_3 = (uint)bVar1;
    return true;
  }
  if ((byte)(bVar1 + 0x40) < 0x20) {
    if (((pbVar2 + 2 <= param_2) && ((pbVar2[1] & 0xc0) == 0x80)) &&
       (wVar3 = (uint)(byte)(bVar1 + 0x40) << 6 | pbVar2[1] - 0x80,
       (uint)(wVar3 + L'\xffffff80') < 0x780)) {
      *param_1 = pbVar2 + 2;
      *param_3 = wVar3;
      return true;
    }
  }
  else if (bVar1 < 0xf0) {
    pbVar4 = pbVar2 + 3;
    if (((pbVar4 <= param_2) && ((pbVar2[1] & 0xc0) == 0x80)) &&
       (((pbVar2[2] & 0xc0) == 0x80 &&
        (((wVar3 = (uint)pbVar2[1] * 0x40 - 0x2000 | (uint)(byte)(bVar1 + 0x20) << 0xc |
                   pbVar2[2] - 0x80, (uint)wVar3 < 0xd800 || (0xdbff < (uint)wVar3)) &&
         (0x3ff < (uint)(wVar3 + L'\xffff2400'))))))) {
LAB_1422bbcba:
      *param_1 = pbVar4;
      *param_3 = wVar3;
      return true;
    }
  }
  else if ((((bVar1 < 0xf8) && (pbVar4 = pbVar2 + 4, pbVar4 <= param_2)) &&
           ((pbVar2[1] & 0xc0) == 0x80)) &&
          ((((pbVar2[2] & 0xc0) == 0x80 && ((pbVar2[3] & 0xc0) == 0x80)) &&
           (wVar3 = (uint)pbVar2[2] * 0x40 - 0x2000 | (uint)pbVar2[1] * 0x1000 - 0x80000 |
                    (uint)(byte)(bVar1 + 0x10) << 0x12 | pbVar2[3] - 0x80,
           (uint)(wVar3 + L'\xffff0000') < 0x100000)))) goto LAB_1422bbcba;
  return false;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseClass @ 1422bc260

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseEffectSet @ 1422bc270

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseEffectSet(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseEnum @ 1422bc280

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseEnum(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseFunction @ 1422bc290

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseFunction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVVMVerseStruct @ 1422bc2a0

void __cdecl EmptyLinkFunctionForGeneratedCodeVVMVerseStruct(void)

{
  return;
}

// GenerateSubobjectName @ 1422bc840

void __cdecl
VerseClassPrivate::GenerateSubobjectName
          (FString *param_1,FString *param_2,FProperty *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FString local_18;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 != 0) {
    ::FString::operator=(param_1,param_2);
    ::FString::AppendChars(param_1,L"_",1);
  }
  bVar2 = IsThisNotNull(param_3,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&param_3->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (0 < param_4) {
    ::FString::PrintfImpl(&local_18,L"_%d");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetEngineEnvironment @ 1422bcac0

IEngineEnvironment * __cdecl Verse::VerseVM::GetEngineEnvironment(void)

{
  return Verse::Private::GEngineEnvironment;
}

// GetRuntimeDiagnosticInfo @ 1422bcfe0

SRuntimeDiagnosticInfo * __cdecl Verse::GetRuntimeDiagnosticInfo(ERuntimeDiagnostic param_1)

{
  bool bVar1;
  ERuntimeDiagnostic local_res8 [4];
  ERuntimeDiagnostic *local_res10 [3];
  
  if (ErrRuntime_UnregisteredLeaderboard < param_1) {
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    bVar1 = `Verse::GetRuntimeDiagnosticInfo'::__l3::<lambda_1>::operator()(local_res10);
    param_1 = local_res8[0];
    if (!bVar1) {
      return DiagnosticInfos;
    }
  }
  return DiagnosticInfos + param_1;
}

// IsComputationLimitExceeded @ 1422bd870

bool __cdecl VerseHangDetection::IsComputationLimitExceeded(double param_1,double param_2)

{
  bool bVar1;
  LARGE_INTEGER local_res8 [4];
  
  if (param_1 != 0.0) {
    QueryPerformanceCounter(local_res8);
    if (param_2 <=
        ((double)local_res8[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
        __real_4170000000000000) - param_1) {
      if (GVerseHangDetectionDuringDebugging == false) {
        bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
        return !bVar1;
      }
      return true;
    }
  }
  return false;
}

// IsPrintableAsEscapeCode @ 1422bd910

bool __cdecl IsPrintableAsEscapeCode(wchar32 param_1,char *param_2)

{
  switch(param_1) {
  case L'\t':
    *param_2 = 't';
    return true;
  case L'\n':
    *param_2 = 'n';
    return true;
  default:
    return false;
  case L'\r':
    *param_2 = 'r';
    return true;
  case L'\"':
  case L'#':
  case L'&':
  case L'\'':
  case L'<':
  case L'>':
  case L'\\':
  case L'{':
  case L'}':
  case L'~':
    *param_2 = (char)param_1;
    return true;
  }
}

// IsUHTGeneratedVerseVNIObject @ 1422bd9e0

bool __cdecl Verse::VerseVM::IsUHTGeneratedVerseVNIObject(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UVerseClass::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (bool)((byte)(*(uint *)(param_1 + 0xd) >> 4) & 1);
    }
    pUVar2 = UVerseStruct::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (bool)((byte)(*(uint *)&param_1[4].field_0x20 >> 4) & 1);
    }
    pUVar2 = UVerseEnum::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (bool)((byte)(*(uint *)&param_1[2].field_0x20 >> 1) & 1);
    }
  }
  return false;
}

// RaiseVerseRuntimeError @ 1422bea00

void __cdecl Verse::RaiseVerseRuntimeError(ERuntimeDiagnostic param_1,FText *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FContentScopeGuard **ppFVar4;
  FFrame *pFVar5;
  undefined1 local_res18 [16];
  FBlueprintExceptionInfo local_28;
  
  cVar2 = (**(code **)(*(longlong *)CVarBreakOnVerseRuntimeError._padding_ + 0xc0))();
  if (cVar2 == '\x01') {
    bVar3 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMulticastDelegate<void___cdecl(enum_Verse::ERuntimeDiagnostic,FText_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast(&FVerseRuntimeErrorDelegates::OnUnwindRuntimeError,param_1,param_2);
  ppFVar4 = verse::FContentScopeGuard::GetActiveScopeGuard();
  if (*ppFVar4 != (FContentScopeGuard *)0x0) {
    TMulticastDelegate<void___cdecl(enum_Verse::ERuntimeDiagnostic,FText_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast(&FVerseRuntimeErrorDelegates::OnVerseRuntimeError,param_1,param_2);
    ppFVar4 = verse::FContentScopeGuard::GetActiveScopeGuard();
    (**(code **)((((*ppFVar4)->ContentScope).Object)->_padding_ + 0x18))();
  }
  pFVar5 = FFrame::GetThreadLocalTopStackFrame();
  if (pFVar5 != (FFrame *)0x0) {
    local_28.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(param_2->TextData).Reference;
    local_28.EventType = AbortExecution;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference + 8))
                (local_28.Description.field0_0x0.TypedValue.TextData.Reference,local_res18);
    }
    local_28.Description.field0_0x0.TypedValue.Flags = param_2->Flags;
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FBlueprintCoreDelegates::ThrowScriptException(pFVar5->Object,pFVar5,&local_28);
    if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
  }
  return;
}

// RenameSubobject @ 1422bec10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl VerseClassPrivate::RenameSubobject(UObject *param_1,FString *param_2)

{
  code *pcVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  FName local_res10;
  undefined4 uVar9;
  FString local_38;
  
  pwVar8 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(&local_res10,pwVar7);
  pUVar4 = *(UObject **)&param_1->field_0x20;
  FVar5 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  pUVar4 = StaticFindObjectFast(pUVar3,pUVar4,FVar5,None,RF_NoFlags,Borrowed);
  if ((pUVar4 != (UObject *)0x0) && (pUVar4 != param_1)) {
    FVar5.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x10;
    FVar5.Number = *(uint *)&pUVar4->field_0x14;
    local_res8 = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x170);
    uVar9 = 0;
    FVar5 = MakeUniqueObjectName((UObject *)&local_res8,*(UClass **)&pUVar4->field_0x20,FVar5,None);
    pFVar6 = ::FName::ToString((FName *)FVar5,&local_38);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pUVar4,pwVar7,0,0x34,uVar9);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Could not recover jumptable at 0x0001422bed0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x170))(param_1,pwVar8,0,0x34);
  return;
}

// SetEngineEnvironment @ 1422bf1f0

void __cdecl Verse::VerseVM::SetEngineEnvironment(IEngineEnvironment *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1 != (IEngineEnvironment *)0x0) &&
     (Verse::Private::GEngineEnvironment != (IEngineEnvironment *)0x0)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8894104055643635630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerse.cpp"
                       ,0x52,"Environment == nullptr || Private::GEngineEnvironment == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Verse::Private::GEngineEnvironment = param_1;
  return;
}

// ToVerseString @ 1422c26b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl
Verse::ToVerseString(FUtf8String *__return_storage_ptr__,TStringView<char8_t> *param_1)

{
  ulonglong *puVar1;
  FScriptContainerElement FVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FUtf8String *pFVar5;
  uchar *puVar6;
  char *pcVar7;
  wchar32 wVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_c8 [32];
  wchar32 local_a8 [2];
  FUtf8String local_a0;
  TStringBuilderBase<char8_t> local_88;
  uchar local_68;
  uchar local_67 [31];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88.Base = &local_68;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1->DataPtr;
  pFVar9 = local_a0.Data.AllocatorInstance.Data + (int)*(undefined8 *)&param_1->Size;
  local_88.bIsDynamic = false;
  local_88.bIsExternal = false;
  local_68 = '\"';
  puVar6 = local_67;
  puVar1 = local_48;
  FVar3.Data = local_a0.Data.AllocatorInstance.Data;
joined_r0x0001422c2718:
  do {
    local_88.CurPos = puVar6;
    local_88.End = (uchar *)puVar1;
    if (pFVar9 <= FVar3.Data) {
      if (puVar1 < puVar6 + 1) {
        TStringBuilderBase<char8_t>::Extend(&local_88,1);
      }
      *local_88.CurPos = '\"';
      local_88.CurPos = local_88.CurPos + 1;
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      pFVar5 = FUtf8String::ConstructFromPtrSize
                         (&local_a0,local_88.Base,(int)local_88.CurPos - (int)local_88.Base);
      if (__return_storage_ptr__ != pFVar5) {
        pFVar9 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar9 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar9);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_88);
      return __return_storage_ptr__;
    }
    bVar4 = DecodeCodePointFromUTF8((uchar **)&local_a0,(uchar *)pFVar9,local_a8);
    if (!bVar4) {
      FVar2 = *local_a0.Data.AllocatorInstance.Data;
      local_a0.Data.AllocatorInstance.Data = local_a0.Data.AllocatorInstance.Data + 1;
      local_a8[0] = (wchar32)(byte)FVar2;
    }
    FVar3.Data = local_a0.Data.AllocatorInstance.Data;
    wVar8 = local_a8[0];
    switch(local_a8[0]) {
    case L'\t':
      wVar8 = L't';
      break;
    case L'\n':
      wVar8 = L'n';
      break;
    default:
      goto switchD_1422c2776_caseD_b;
    case L'\r':
      wVar8 = L'r';
      break;
    case L'\"':
    case L'#':
    case L'&':
    case L'\'':
    case L'<':
    case L'>':
    case L'\\':
    case L'{':
    case L'}':
    case L'~':
      break;
    }
    if (puVar1 < puVar6 + 1) {
      TStringBuilderBase<char8_t>::Extend(&local_88,1);
      puVar6 = local_88.CurPos;
    }
    *puVar6 = '\\';
    puVar6 = local_88.CurPos + 1;
    puVar1 = (ulonglong *)(local_88.CurPos + 2);
    local_88.CurPos = puVar6;
    if (local_88.End < puVar1) {
      TStringBuilderBase<char8_t>::Extend(&local_88,1);
    }
    *local_88.CurPos = (uchar)wVar8;
    puVar6 = local_88.CurPos + 1;
    puVar1 = (ulonglong *)local_88.End;
  } while( true );
switchD_1422c2776_caseD_b:
  if ((uint)(local_a8[0] + L'\xffffffe0') < 0x5f) {
    if (puVar1 < puVar6 + 1) {
      TStringBuilderBase<char8_t>::Extend(&local_88,1);
      puVar6 = local_88.CurPos;
    }
    *puVar6 = (uchar)wVar8;
    puVar6 = local_88.CurPos + 1;
    puVar1 = (ulonglong *)local_88.End;
  }
  else {
    pcVar7 = "{0o%.2x}";
    if (0xff < (uint)local_a8[0]) {
      pcVar7 = "{0u%x}";
    }
    TStringBuilderBase<char8_t>::AppendfImpl(&local_88,(uchar *)pcVar7);
    puVar6 = local_88.CurPos;
    puVar1 = (ulonglong *)local_88.End;
  }
  goto joined_r0x0001422c2718;
}

// ToVerseString @ 1422c29b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl Verse::ToVerseString(FUtf8String *__return_storage_ptr__,uchar param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FUtf8String *pFVar3;
  wchar32 wVar4;
  char *pcVar5;
  undefined1 auStack_78 [32];
  char local_58 [8];
  FUtf8String local_50;
  TStringBuilderBase<char8_t> local_40;
  uchar local_20 [8];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_78;
  local_40.Base = local_20;
  local_40.CurPos = local_20;
  local_58[0] = '\0';
  local_40.End = (uchar *)local_18;
  wVar4 = (wchar32)param_1;
  local_40.bIsDynamic = false;
  local_40.bIsExternal = false;
  bVar2 = IsPrintableAsEscapeCode(wVar4,local_58);
  if (bVar2) {
    pcVar5 = "\'\\%c\'";
  }
  else if ((uint)(wVar4 + L'\xffffffe0') < 0x5f) {
    pcVar5 = "\'%c\'";
  }
  else {
    pcVar5 = "0o%.2x";
  }
  TStringBuilderBase<char8_t>::AppendfImpl(&local_40,(uchar *)pcVar5);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = FUtf8String::ConstructFromPtrSize
                     (&local_50,local_40.Base,(int)local_40.CurPos - (int)local_40.Base);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_40);
  return __return_storage_ptr__;
}

// ToVerseString @ 1422c2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUtf8String * __cdecl Verse::ToVerseString(FUtf8String *__return_storage_ptr__,wchar32 param_1)

{
  FScriptContainerElement *pFVar1;
  FUtf8String *pFVar2;
  undefined1 auStack_68 [32];
  FUtf8String local_48;
  TStringBuilderBase<char8_t> local_38;
  uchar local_18 [8];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38.Base = local_18;
  local_38.CurPos = local_18;
  local_38.End = (uchar *)&local_10;
  local_38.bIsDynamic = false;
  local_38.bIsExternal = false;
  TStringBuilderBase<char8_t>::AppendfImpl(&local_38,(uchar *)"0u%x");
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = FUtf8String::ConstructFromPtrSize
                     (&local_48,local_38.Base,(int)local_38.CurPos - (int)local_38.Base);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<char8_t>::~TStringBuilderBase<char8_t>(&local_38);
  return __return_storage_ptr__;
}

// TraverseSubobjectsInternal @ 1422c2bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
VerseClassPrivate::TraverseSubobjectsInternal
          (UObject *param_1,void *param_2,FProperty *param_3,FString *param_4,
          TFunctionRef<void___cdecl(UObject_*,FString_const_&)> *param_5,
          ETraverseSubobjectsFlag param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  longlong lVar9;
  FProperty *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  int iVar17;
  void *pvVar18;
  ulonglong *puVar19;
  FScriptMapHelper_u_16 FVar20;
  int *piVar21;
  longlong *plVar22;
  byte bVar23;
  uint uVar24;
  longlong *plVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  undefined1 auStackY_248 [32];
  uint local_214;
  FString local_1e8;
  int local_1d8;
  int local_1d4;
  int local_1d0 [2];
  longlong *local_1c8;
  FString local_1c0;
  int *local_1b0;
  FString local_1a8;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_198;
  FString local_188;
  FString local_178;
  longlong local_168;
  int *local_160;
  int *local_158;
  FProperty *local_150;
  FString local_148;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_138;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_128;
  FString local_118;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_108;
  FString local_f8;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_e8;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_d8;
  FString local_c8 [2];
  longlong local_a8;
  longlong lStack_a0;
  int local_98;
  FScriptMapHelper local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pvVar18 = (void *)0x0;
  if (param_3 == (FProperty *)0x0) {
    bVar23 = ~(byte)param_6 & 1;
  }
  else {
    pUVar8 = Z_Construct_UClass_UStruct_NoRegister();
    bVar6 = FFieldVariant::IsA((FFieldVariant *)&param_3->_padding_,pUVar8);
    pvVar16 = pvVar18;
    if (bVar6) {
      pvVar16 = (void *)(param_3->_padding_ & 0xfffffffffffffffe);
    }
    if (pvVar16 != (void *)0x0) {
      pUVar8 = UVerseClass::StaticClass();
      iVar26 = (int)pUVar8->_padding_;
      if ((*(int *)(*(longlong *)((longlong)pvVar16 + 0x10) + 0x38) < iVar26) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)((longlong)pvVar16 + 0x10) + 0x30) + (longlong)iVar26 * 8) !=
          &pUVar8->_padding_)) {
        pUVar8 = UVerseStruct::StaticClass();
        iVar26 = (int)pUVar8->_padding_;
        if (*(int *)(*(longlong *)((longlong)pvVar16 + 0x10) + 0x38) < iVar26) {
          return;
        }
        if ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)((longlong)pvVar16 + 0x10) + 0x30) + (longlong)iVar26 * 8)
            != &pUVar8->_padding_) {
          return;
        }
      }
    }
    bVar23 = ~(byte)param_6 & 1;
    if ((*(uint *)(param_3->_padding_ + 0x18) >> 0x10 & 1) != 0) {
      iVar26 = param_3->ArrayDim;
      if (iVar26 < 1) {
        return;
      }
      do {
        iVar17 = (int)pvVar18;
        if (((iVar17 < 0) || (iVar26 <= iVar17)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar9 = (**(code **)(param_3->_padding_ + 0x1f8))
                          (param_3,(longlong)param_2 +
                                   (longlong)param_3->Offset_Internal +
                                   (longlong)iVar17 * (longlong)param_3->ElementSize);
        if ((lVar9 != 0) && (*(UObject **)(lVar9 + 0x20) == param_1)) {
          local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.Data.ArrayNum = 0;
          local_1a8.Data.ArrayMax = 0;
          if (bVar23 != 0) {
            GenerateSubobjectName(&local_1a8,param_4,param_3,iVar17);
          }
          local_168 = lVar9;
          (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,&local_168,&local_1a8);
          if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          }
        }
        iVar26 = param_3->ArrayDim;
        pvVar18 = (void *)(ulonglong)(iVar17 + 1U);
      } while ((int)(iVar17 + 1U) < iVar26);
      return;
    }
  }
  if (param_3 != (FProperty *)0x0) {
    if ((*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0) {
      if (param_3 != (FProperty *)0x0) {
        if ((*(ulonglong *)(param_3->_padding_ + 0x18) >> 0x2f & 1) == 0) {
          if (param_3 != (FProperty *)0x0) {
            if ((*(ulonglong *)(param_3->_padding_ + 0x18) >> 0x2e & 1) == 0) {
              if (param_3 != (FProperty *)0x0) {
                if ((*(uint *)(param_3->_padding_ + 0x18) >> 0x14 & 1) == 0) {
                  if ((param_3 != (FProperty *)0x0) &&
                     ((*(byte *)(param_3->_padding_ + 0x1f) & 1) != 0)) {
                    pFVar10 = FOptionalPropertyLayout::GetValueProperty
                                        ((FOptionalPropertyLayout *)(param_3 + 1));
                    if (pFVar10->Offset_Internal != 0) {
                      FField::GetFullName((FField *)param_3,local_c8);
                      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ValueProp->GetOffset_ForInternal() == 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                                         ,0x39a,
                                         L"Expected offset of value property of option property \"%s\" to be 0, got %d"
                                        );
                      if (local_c8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_c8[0].Data.AllocatorInstance.Data);
                      }
                      if (bVar6) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                    }
                    ::FString::FString(&local_148,param_4);
                    iVar26 = param_3->ArrayDim;
                    if (0 < iVar26) {
                      do {
                        iVar17 = (int)pvVar18;
                        if (((iVar17 < 0) || (iVar26 <= iVar17)) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x2dd,
                                               L"Array index out of bounds: %i from an array of size %i"
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        if ((param_2 == (void *)0x0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("ContainerPtr",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x2de,L""), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar26 = param_3->ElementSize;
                        iVar7 = param_3->Offset_Internal;
                        if ((1 < param_3->ArrayDim) && (bVar23 != 0)) {
                          GenerateSubobjectName(&local_148,param_4,param_3,iVar17);
                        }
                        local_d8._0_8_ = *(undefined8 *)param_5;
                        local_d8._8_8_ = *(undefined8 *)&param_5->field_0x8;
                        TraverseSubobjectsInternal
                                  (param_1,(void *)((longlong)param_2 +
                                                   (longlong)iVar7 +
                                                   (longlong)iVar26 * (longlong)iVar17),pFVar10,
                                   &local_148,&local_d8,param_6);
                        iVar26 = param_3->ArrayDim;
                        pvVar18 = (void *)(ulonglong)(iVar17 + 1U);
                      } while ((int)(iVar17 + 1U) < iVar26);
                    }
                    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_148.Data.AllocatorInstance.Data);
                    }
                  }
                }
                else if (0 < param_3->ArrayDim) {
                  do {
                    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_178.Data.ArrayNum = 0;
                    local_178.Data.ArrayMax = 0;
                    iVar26 = (int)pvVar18;
                    if (bVar23 != 0) {
                      GenerateSubobjectName(&local_178,param_4,param_3,iVar26);
                    }
                    if (((iVar26 < 0) || (param_3->ArrayDim <= iVar26)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2dd,
                                           L"Array index out of bounds: %i from an array of size %i"
                                          ), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    if ((param_2 == (void *)0x0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("ContainerPtr",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                           ,0x2de,L""), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    iVar17 = param_3->ElementSize;
                    iVar7 = param_3->Offset_Internal;
                    uVar1 = *(undefined8 *)param_5;
                    uVar2 = *(undefined8 *)&param_5->field_0x8;
                    for (pFVar10 = *(FProperty **)(param_3[1]._padding_ + 0x78);
                        pFVar10 != (FProperty *)0x0; pFVar10 = pFVar10->NextRef) {
                      local_e8._0_8_ = uVar1;
                      local_e8._8_8_ = uVar2;
                      TraverseSubobjectsInternal
                                (param_1,(void *)((longlong)param_2 +
                                                 (longlong)iVar7 +
                                                 (longlong)iVar17 * (longlong)iVar26),pFVar10,
                                 &local_178,&local_e8,param_6);
                    }
                    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_178.Data.AllocatorInstance.Data);
                    }
                    pvVar18 = (void *)(ulonglong)(iVar26 + 1U);
                  } while ((int)(iVar26 + 1U) < param_3->ArrayDim);
                }
              }
            }
            else {
              iVar26 = param_3->ArrayDim;
              local_214 = 0;
              pvVar16 = pvVar18;
              if (0 < iVar26) {
                do {
                  uVar27 = (uint)pvVar16;
                  if ((((int)uVar27 < 0) || (iVar26 <= (int)uVar27)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if ((param_2 == (void *)0x0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ContainerPtr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2de,L""), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_90.MapLayout._0_8_ = param_3[1]._padding_;
                  local_90.MapLayout.SetLayout._4_8_ = param_3[1]._padding_;
                  local_90.ValueProp = (FProperty *)param_3[1]._padding_;
                  local_90.MapLayout.SetLayout.SparseArrayLayout =
                       (FScriptSparseArrayLayout)param_3[1]._padding_;
                  local_90.KeyProp = (FProperty *)param_3[1]._padding_;
                  FVar20.HeapMap =
                       (FScriptMap *)
                       ((longlong)param_2 +
                       (longlong)param_3->Offset_Internal +
                       (longlong)(int)uVar27 * (longlong)param_3->ElementSize);
                  local_90.MapFlags = (EMapPropertyFlags)param_3[1]._padding_;
                  if (((local_90.KeyProp == (FProperty *)0x0) ||
                      (local_90.ValueProp == (FProperty *)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InKeyProp && InValueProp",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1558,L""), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  local_90.field2_0x10.HeapMap = FVar20.HeapMap;
                  if (((local_90.KeyProp == (FProperty *)0x0) ||
                      (local_90.ValueProp == (FProperty *)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("KeyProp && ValueProp",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1564,L""), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if ((local_90.MapFlags & UsesMemoryImageAllocator) == None) {
                    iVar26 = *(int *)&((local_90.field2_0x10.FreezableMap)->Pairs).field_0x34;
                  }
                  else {
                    iVar26 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
                  }
                  iVar26 = ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum -
                           iVar26;
                  pvVar16 = pvVar18;
                  while (iVar26 != 0) {
                    iVar17 = (int)pvVar16;
                    local_1d8 = iVar17;
                    bVar6 = FScriptMapHelper::
                            WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                      (&local_90,(<lambda_1> *)&local_1d8);
                    if (bVar6) {
                      local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_1c0.Data.ArrayNum = 0;
                      local_1c0.Data.ArrayMax = 0;
                      if (bVar23 != 0) {
                        GenerateSubobjectName(&local_1c0,param_4,param_3,iVar17);
                      }
                      FVar20 = local_90.field2_0x10;
                      pvVar16 = pvVar18;
                      if ((local_90.MapFlags & UsesMemoryImageAllocator) == None) {
                        if (((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum ==
                            *(int *)&((local_90.field2_0x10.FreezableMap)->Pairs).field_0x34) {
                          if ((iVar17 != 0) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("InternalIndex == 0",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                                 ,0x12b5,
                                                 L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                        }
                        else {
                          local_1d0[0] = iVar17;
                          bVar6 = FScriptMapHelper::
                                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                            (&local_90,(<lambda_1> *)local_1d0);
                          if ((!bVar6) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValidIndex(InternalIndex)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                                 ,0x12b9,
                                                 L"Invalid internal index. Use IsValidIndex before calling this method."
                                                ), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          pvVar16 = (void *)((longlong)
                                             (local_90.MapLayout.SetLayout.SparseArrayLayout.Size *
                                             iVar17) +
                                            ((FVar20.FreezableMap)->Pairs).Elements.Data._padding_);
                        }
                      }
                      else if (((local_90.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum
                               == ((local_90.field2_0x10.FreezableMap)->Pairs).Elements.
                                  NumFreeIndices) {
                        if ((iVar17 != 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("InternalIndex == 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x12b5,
                                               L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                      }
                      else {
                        local_1d4 = iVar17;
                        bVar6 = FScriptMapHelper::
                                WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                          (&local_90,(<lambda_1> *)&local_1d4);
                        if ((!bVar6) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("IsValidIndex(InternalIndex)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x12b9,
                                               L"Invalid internal index. Use IsValidIndex before calling this method."
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        puVar13 = (undefined1 *)
                                  ((FVar20.FreezableMap)->Pairs).Elements.Data._padding_;
                        if (((ulonglong)puVar13 & 1) != 0) {
                          puVar13 = &(FVar20.HeapMap)->field_0x0 + ((longlong)puVar13 >> 0x18);
                        }
                        pvVar16 = puVar13 + local_90.MapLayout.SetLayout.SparseArrayLayout.Size *
                                            iVar17;
                      }
                      local_128._0_8_ = *(undefined8 *)param_5;
                      local_128._8_8_ = *(undefined8 *)&param_5->field_0x8;
                      ::FString::ConcatFC(&local_118,&local_1c0,L"_Key");
                      TraverseSubobjectsInternal
                                (param_1,pvVar16,(FProperty *)param_3[1]._padding_,&local_118,
                                 &local_128,param_6);
                      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_118.Data.AllocatorInstance.Data);
                      }
                      local_108._0_8_ = *(undefined8 *)param_5;
                      local_108._8_8_ = *(undefined8 *)&param_5->field_0x8;
                      ::FString::ConcatFC(&local_f8,&local_1c0,L"_Value");
                      TraverseSubobjectsInternal
                                (param_1,pvVar16,(FProperty *)param_3[1]._padding_,&local_f8,
                                 &local_108,param_6);
                      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                      }
                      iVar26 = iVar26 + -1;
                      if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                      }
                    }
                    pvVar16 = (void *)(ulonglong)(iVar17 + 1);
                    uVar27 = local_214;
                  }
                  iVar26 = param_3->ArrayDim;
                  local_214 = uVar27 + 1;
                  pvVar16 = (void *)(ulonglong)local_214;
                } while ((int)local_214 < iVar26);
              }
            }
          }
        }
        else {
          iVar26 = param_3->ArrayDim;
          local_214 = 0;
          pvVar16 = pvVar18;
          if (0 < iVar26) {
            do {
              iVar17 = (int)pvVar16;
              if (((iVar17 < 0) || (iVar26 <= iVar17)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2dd,
                                     L"Array index out of bounds: %i from an array of size %i"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((param_2 == (void *)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ContainerPtr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x2de,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_a8 = param_3[1]._padding_;
              lStack_a0 = param_3[1]._padding_;
              plVar22 = (longlong *)
                        ((longlong)param_2 +
                        (longlong)param_3->Offset_Internal +
                        (longlong)iVar17 * (longlong)param_3->ElementSize);
              local_98 = (int)param_3[1]._padding_;
              if ((param_3[1]._padding_ == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementProp",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1653,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar26 = (int)plVar22[1] - *(int *)((longlong)plVar22 + 0x34);
              if (iVar26 != 0) {
                uVar27 = 1;
                pvVar16 = pvVar18;
                pvVar15 = pvVar18;
                do {
                  iVar17 = (int)pvVar16;
                  if ((-1 < iVar17) && (iVar17 < (int)plVar22[5])) {
                    if (((int)plVar22[5] <= iVar17) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValidIndex(Index)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                           ,0x8c4,L""), bVar6)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    plVar25 = plVar22 + 2;
                    if ((longlong *)plVar22[4] != (longlong *)0x0) {
                      plVar25 = (longlong *)plVar22[4];
                    }
                    iVar7 = iVar17;
                    if (iVar17 < 0) {
                      iVar7 = iVar17 + 0x1f;
                    }
                    if ((*(uint *)((longlong)plVar25 + (longlong)(iVar7 >> 5) * 4) & uVar27) != 0) {
                      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_188.Data.ArrayNum = 0;
                      local_188.Data.ArrayMax = 0;
                      if (bVar23 != 0) {
                        GenerateSubobjectName(&local_188,param_4,param_3,iVar17);
                      }
                      if ((int)plVar22[1] == *(int *)((longlong)plVar22 + 0x34)) {
                        pvVar16 = pvVar18;
                        if ((iVar17 != 0) &&
                           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                              ("InternalIndex == 0",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                               ,0x169e,
                                               L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                              ), bVar6)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                      }
                      else {
                        if (iVar17 < (int)plVar22[5]) {
                          if (((int)plVar22[5] <= iVar17) &&
                             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                ("IsValidIndex(Index)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                 ,0x8c4,L""), bVar6)) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          plVar25 = plVar22 + 2;
                          if ((longlong *)plVar22[4] != (longlong *)0x0) {
                            plVar25 = (longlong *)plVar22[4];
                          }
                          iVar7 = iVar17;
                          if (iVar17 < 0) {
                            iVar7 = iVar17 + 0x1f;
                          }
                          if ((*(uint *)((longlong)plVar25 + (longlong)(iVar7 >> 5) * 4) & uVar27)
                              == 0) goto LAB_1422c3312;
                        }
                        else {
LAB_1422c3312:
                          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValidIndex(InternalIndex)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                             ,0x16a2,
                                             L"Invalid internal index. Use IsValidIndex before calling this method."
                                            );
                          if (bVar6) {
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                        }
                        pvVar16 = (void *)((longlong)(int)pvVar15 + *plVar22);
                      }
                      local_138._0_8_ = *(undefined8 *)param_5;
                      local_138._8_8_ = *(undefined8 *)&param_5->field_0x8;
                      TraverseSubobjectsInternal
                                (param_1,pvVar16,(FProperty *)param_3[1]._padding_,&local_188,
                                 &local_138,param_6);
                      iVar26 = iVar26 + -1;
                      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_188.Data.AllocatorInstance.Data);
                      }
                    }
                  }
                  pvVar15 = (void *)(ulonglong)(uint)((int)pvVar15 + local_98);
                  pvVar16 = (void *)(ulonglong)(iVar17 + 1);
                  uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
                } while (iVar26 != 0);
              }
              local_214 = local_214 + 1;
              pvVar16 = (void *)(ulonglong)local_214;
              iVar26 = param_3->ArrayDim;
            } while ((int)local_214 < iVar26);
          }
        }
      }
    }
    else {
      local_160 = &param_3->ArrayDim;
      iVar26 = *local_160;
      local_214 = 0;
      if (0 < iVar26) {
        piVar21 = &param_3->ElementSize;
        local_158 = &param_3->Offset_Internal;
        local_150 = param_3 + 1;
        local_1c8 = &param_3[1]._padding_;
        pvVar16 = pvVar18;
        local_1b0 = piVar21;
        do {
          pFVar10 = local_150;
          piVar5 = local_158;
          plVar22 = local_1c8;
          iVar17 = (int)pvVar16;
          if (((iVar17 < 0) || (iVar26 <= iVar17)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((param_2 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar4 = pFVar10->_padding_;
          puVar19 = (ulonglong *)
                    ((longlong)param_2 + (longlong)*piVar5 + (longlong)iVar17 * (longlong)*piVar21);
          (**(code **)(*(longlong *)*plVar22 + 0x168))();
          lVar9 = *plVar22;
          iVar26 = *(int *)(lVar9 + 0x34);
          if ((iVar26 < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((lVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar27 = (uint)puVar19[1];
          uVar11 = (ulonglong)uVar27;
          bVar28 = (byte)lVar4 & 1;
          if (0 < (int)uVar27) {
            pvVar16 = pvVar18;
            pvVar15 = pvVar18;
            if (bVar23 == 0) {
              do {
                local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1e8.Data.ArrayNum = 0;
                local_1e8.Data.ArrayMax = 0;
                pvVar15 = pvVar18;
                if ((int)puVar19[1] != 0) {
                  uVar12 = *puVar19;
                  if ((bVar28 != 0) && ((uVar12 & 1) != 0)) {
                    uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar19;
                  }
                  pvVar15 = (void *)((longlong)iVar26 * (longlong)pvVar16 + uVar12);
                }
                local_198._0_8_ = *(undefined8 *)param_5;
                local_198._8_8_ = *(undefined8 *)&param_5->field_0x8;
                TraverseSubobjectsInternal
                          (param_1,pvVar15,(FProperty *)*local_1c8,&local_1e8,&local_198,param_6);
                if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                }
                uVar11 = uVar11 - 1;
                piVar21 = local_1b0;
                pvVar16 = (void *)((longlong)pvVar16 + 1);
              } while (uVar11 != 0);
            }
            else {
              do {
                local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1e8.Data.ArrayNum = 0;
                local_1e8.Data.ArrayMax = 0;
                GenerateSubobjectName(&local_1e8,param_4,param_3,(int)pvVar15);
                pvVar14 = pvVar18;
                if ((int)puVar19[1] != 0) {
                  uVar11 = *puVar19;
                  if ((bVar28 != 0) && ((uVar11 & 1) != 0)) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar19;
                  }
                  pvVar14 = (void *)((longlong)iVar26 * (longlong)pvVar16 + uVar11);
                }
                local_198._0_8_ = *(undefined8 *)param_5;
                local_198._8_8_ = *(undefined8 *)&param_5->field_0x8;
                TraverseSubobjectsInternal
                          (param_1,pvVar14,(FProperty *)*local_1c8,&local_1e8,&local_198,param_6);
                if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                }
                uVar24 = (int)pvVar15 + 1;
                pvVar16 = (void *)((longlong)pvVar16 + 1);
                piVar21 = local_1b0;
                pvVar15 = (void *)(ulonglong)uVar24;
              } while ((int)uVar24 < (int)uVar27);
            }
          }
          local_214 = local_214 + 1;
          pvVar16 = (void *)(ulonglong)local_214;
          iVar26 = *local_160;
        } while ((int)local_214 < iVar26);
      }
    }
  }
  return;
}

// TraverseSubobjectsInternal @ 1422c3af0

void __cdecl
VerseClassPrivate::TraverseSubobjectsInternal
          (UObject *param_1,void *param_2,UStruct *param_3,FString *param_4,
          TFunctionRef<void___cdecl(UObject_*,FString_const_&)> *param_5,
          ETraverseSubobjectsFlag param_6)

{
  FProperty *pFVar1;
  TFunctionRef<void___cdecl(UObject_*,FString_const_&)> local_28;
  
  for (pFVar1 = param_3->RefLink; pFVar1 != (FProperty *)0x0; pFVar1 = pFVar1->NextRef) {
    local_28._0_8_ = *(undefined8 *)param_5;
    local_28._8_8_ = *(undefined8 *)&param_5->field_0x8;
    TraverseSubobjectsInternal(param_1,param_2,pFVar1,param_4,&local_28,param_6);
  }
  return;
}

// VerseHangThreshold @ 1422c3ef0

float __cdecl VerseHangDetection::VerseHangThreshold(void)

{
  EMemoryValidationLevel EVar1;
  EAutoRTFMRetryTransactionState EVar2;
  
  if (PRIVATE_GIsRunningCommandlet) {
    return GVerseHangDetectionThresholdSecondsDuringCook;
  }
  EVar1 = AutoRTFM::ForTheRuntime::GetMemoryValidationLevel();
  if (EVar1 == Disabled) {
    EVar2 = AutoRTFM::ForTheRuntime::GetRetryTransaction();
    if (EVar2 == NoRetry) {
      return GVerseHangDetectionThresholdSeconds;
    }
  }
  return __real_42f00000;
}

// Z_Construct_UClass_UVerseEnum_NoRegister @ 1422c3f40

UClass * __cdecl Z_Construct_UClass_UVerseEnum_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseEnum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseEnum",
               &Z_Registration_Info_UClass_UVerseEnum.InnerSingleton,
               UVerseEnum::StaticRegisterNativesUVerseEnum,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVerseEnum>,InternalVTableHelperCtorCaller<UVerseEnum>,
               local_res8,UEnum::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseEnum.InnerSingleton;
}

// Z_Construct_UClass_UVerseFunction_NoRegister @ 1422c4000

UClass * __cdecl Z_Construct_UClass_UVerseFunction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseFunction",
               &Z_Registration_Info_UClass_UVerseFunction.InnerSingleton,
               UVerseFunction::StaticRegisterNativesUVerseFunction,0xf8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVerseFunction>,
               InternalVTableHelperCtorCaller<UVerseFunction>,local_res8,UFunction::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseFunction.InnerSingleton;
}

// Z_Construct_UClass_UVerseStruct_NoRegister @ 1422c40c0

UClass * __cdecl Z_Construct_UClass_UVerseStruct_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseStruct.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseStruct",
               &Z_Registration_Info_UClass_UVerseStruct.InnerSingleton,
               UVerseStruct::StaticRegisterNativesUVerseStruct,0x1b8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVerseStruct>,
               InternalVTableHelperCtorCaller<UVerseStruct>,local_res8,UScriptStruct::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseStruct.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVerseFalse @ 1422c4180

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVerseFalse(void)

{
  if (Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVerseFalse_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVerseFalse.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVerseFunctionFlags @ 1422c41c0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVerseFunctionFlags(void)

{
  if (Z_Registration_Info_UEnum_EVerseFunctionFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVerseFunctionFlags.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVerseFunctionFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVerseFunctionFlags.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EVerseTrue @ 1422c4200

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EVerseTrue(void)

{
  if (Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EVerseTrue_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EVerseTrue.InnerSingleton;
}

// OnUnwindRuntimeError'' @ 150354790

void __cdecl
`dynamic_atexit_destructor_for_'FVerseRuntimeErrorDelegates::OnUnwindRuntimeError__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FVerseRuntimeErrorDelegates::OnUnwindRuntimeError._8_8_,
             FVerseRuntimeErrorDelegates::OnUnwindRuntimeError._16_4_);
  if (FVerseRuntimeErrorDelegates::OnUnwindRuntimeError._8_8_ != 0) {
    FMemory::Free((void *)FVerseRuntimeErrorDelegates::OnUnwindRuntimeError._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FVerseRuntimeErrorDelegates::OnUnwindRuntimeError);
  return;
}

// OnVerseRuntimeError'' @ 1503547d0

void __cdecl
`dynamic_atexit_destructor_for_'FVerseRuntimeErrorDelegates::OnVerseRuntimeError__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             FVerseRuntimeErrorDelegates::OnVerseRuntimeError._8_8_,
             FVerseRuntimeErrorDelegates::OnVerseRuntimeError._16_4_);
  if (FVerseRuntimeErrorDelegates::OnVerseRuntimeError._8_8_ != 0) {
    FMemory::Free((void *)FVerseRuntimeErrorDelegates::OnVerseRuntimeError._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FVerseRuntimeErrorDelegates::OnVerseRuntimeError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseAuthoredNameNonEditor'' @ 150354810

void __cdecl _dynamic_atexit_destructor_for__CVarUseAuthoredNameNonEditor__(void)

{
  CVarUseAuthoredNameNonEditor._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseAuthoredNameNonEditor);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerseHangDetectionDuringDebugging'' @ 150354830

void __cdecl _dynamic_atexit_destructor_for__CVarVerseHangDetectionDuringDebugging__(void)

{
  CVarVerseHangDetectionDuringDebugging._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVerseHangDetectionDuringDebugging);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerseHangDetectionThreshold'' @ 150354850

void __cdecl _dynamic_atexit_destructor_for__CVarVerseHangDetectionThreshold__(void)

{
  CVarVerseHangDetectionThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarVerseHangDetectionThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarVerseHangDetectionThresholdDuringCook'' @ 150354870

void __cdecl _dynamic_atexit_destructor_for__CVarVerseHangDetectionThresholdDuringCook__(void)

{
  CVarVerseHangDetectionThresholdDuringCook._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarVerseHangDetectionThresholdDuringCook);
  return;
}

// `dynamic_atexit_destructor_for_'CurrentImpl'' @ 150354890

void __cdecl verse::_dynamic_atexit_destructor_for__CurrentImpl__(void)

{
  ::operator_delete(*(void **)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0xd58),1);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestClearValueInstance'' @ 1503548c0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestClearValueInstance__
          (void)

{
  if (FOptionalPropertyTestClearValueInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestClearValueInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestClearValueInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestCopyValueInInstance'' @ 1503548f0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestCopyValueInInstance__
          (void)

{
  if (FOptionalPropertyTestCopyValueInInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestCopyValueInInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestCopyValueInInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestCopyValueOutInstance'' @ 150354920

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestCopyValueOutInstance__
          (void)

{
  if (FOptionalPropertyTestCopyValueOutInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestCopyValueOutInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestCopyValueOutInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestGetValueTypeHashInstance'' @ 150354950

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOptionalPropertyTestGetValueTypeHashInstance__(void)

{
  if (FOptionalPropertyTestGetValueTypeHashInstance.PrettyNameDotNotation.Data.AllocatorInstance.
      Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestGetValueTypeHashInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestGetValueTypeHashInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestIdenticalInstance'' @ 150354980

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestIdenticalInstance__
          (void)

{
  if (FOptionalPropertyTestIdenticalInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestIdenticalInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestIdenticalInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestInitializeValueInstance'' @ 1503549b0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FOptionalPropertyTestInitializeValueInstance__(void)

{
  if (FOptionalPropertyTestInitializeValueInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data
      != (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestInitializeValueInstance.PrettyNameDotNotation.Data.
                  AllocatorInstance.Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestInitializeValueInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestLayoutInstance'' @ 1503549e0

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestLayoutInstance__(void)

{
  if (FOptionalPropertyTestLayoutInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestLayoutInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestLayoutInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FOptionalPropertyTestSizeInstance'' @ 150354a10

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__FOptionalPropertyTestSizeInstance__(void)

{
  if (FOptionalPropertyTestSizeInstance.PrettyNameDotNotation.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FOptionalPropertyTestSizeInstance.PrettyNameDotNotation.Data.AllocatorInstance.
                  Data);
  }
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FOptionalPropertyTestSizeInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogSolGeneratedClass'' @ 150354a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSolGeneratedClass__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSolGeneratedClass);
  return;
}

// `dynamic_atexit_destructor_for_'LogVerseRuntimeError'' @ 150354a60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogVerseRuntimeError__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogVerseRuntimeError);
  return;
}

// operator() @ 150489c60

bool __thiscall `Verse::GetRuntimeDiagnosticInfo'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2812406136597118949>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2812406136597118949>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150489cb0

bool __thiscall `Verse::AsFormattedString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2812406136597118929>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2812406136597118929>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

