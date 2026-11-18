// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 40

// StaticClass @ 1422b45b0

UClass * __cdecl UVerseClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseClass",
               &Z_Registration_Info_UClass_UVerseClass.InnerSingleton,
               StaticRegisterNativesUVerseClass,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseClass>,InternalVTableHelperCtorCaller<UVerseClass>,
               local_res8,UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseClass.InnerSingleton;
}

// UVerseClass @ 1422b83d0

UVerseClass * __thiscall UVerseClass::UVerseClass(UVerseClass *this,FVTableHelper *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseClass__6B_;
  (this->TaskClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskClasses).ArrayNum = 0;
  (this->TaskClasses).ArrayMax = 0;
  (this->InitInstanceFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->PersistentVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentVars).ArrayNum = 0;
  (this->PersistentVars).ArrayMax = 0;
  (this->SessionVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionVars).ArrayNum = 0;
  (this->SessionVars).ArrayMax = 0;
  *(undefined8 *)&this->VarAccessors = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x8 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x20 = 0;
  this->SolClassFlags = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x28 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->VarAccessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VarAccessors).field_0x34 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x40 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x48 = 0;
  this->ConstructorEffects = None;
  (this->MangledPackageVersePath).ComparisonIndex = 0;
  (this->MangledPackageVersePath).Number = 0;
  (this->PackageRelativeVersePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRelativeVersePath).Data.ArrayNum = 0;
  (this->PackageRelativeVersePath).Data.ArrayMax = 0;
  *(undefined8 *)&this->DisplayNameToUENameFunctionMap = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x48 = 0;
  (this->DirectInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectInterfaces).ArrayNum = 0;
  (this->DirectInterfaces).ArrayMax = 0;
  (this->PropertiesWrittenByInitCDO).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertiesWrittenByInitCDO).ArrayNum = 0;
  (this->PropertiesWrittenByInitCDO).ArrayMax = 0;
  *(undefined8 *)&this->FunctionMangledNames = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x48 = 0;
  (this->PredictsFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PredictsFunctionNames).ArrayNum = 0;
  (this->PredictsFunctionNames).ArrayMax = 0;
  *(undefined8 *)&this->PredictsVarNames = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsVarNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PredictsVarNames).field_0x34 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x48 = 0;
  *(undefined8 *)&this->PredictsCoercedFunctions = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x34 = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x48 = 0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->bNeedsSubobjectInstancingForLoadedInstances = false;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// UVerseClass @ 1422b8650

UVerseClass * __thiscall UVerseClass::UVerseClass(UVerseClass *this,FObjectInitializer *param_1)

{
  UClass::UClass((UClass *)this,param_1);
  this->_padding_ = (longlong)&___7UVerseClass__6B_;
  (this->TaskClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskClasses).ArrayNum = 0;
  (this->TaskClasses).ArrayMax = 0;
  (this->InitInstanceFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->PersistentVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentVars).ArrayNum = 0;
  (this->PersistentVars).ArrayMax = 0;
  (this->SessionVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionVars).ArrayNum = 0;
  (this->SessionVars).ArrayMax = 0;
  *(undefined8 *)&this->VarAccessors = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x8 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x20 = 0;
  this->SolClassFlags = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x28 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->VarAccessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VarAccessors).field_0x34 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x40 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x48 = 0;
  this->ConstructorEffects = None;
  (this->MangledPackageVersePath).ComparisonIndex = 0;
  (this->MangledPackageVersePath).Number = 0;
  (this->PackageRelativeVersePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRelativeVersePath).Data.ArrayNum = 0;
  (this->PackageRelativeVersePath).Data.ArrayMax = 0;
  *(undefined8 *)&this->DisplayNameToUENameFunctionMap = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x48 = 0;
  (this->DirectInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectInterfaces).ArrayNum = 0;
  (this->DirectInterfaces).ArrayMax = 0;
  (this->PropertiesWrittenByInitCDO).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertiesWrittenByInitCDO).ArrayNum = 0;
  (this->PropertiesWrittenByInitCDO).ArrayMax = 0;
  *(undefined8 *)&this->FunctionMangledNames = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x48 = 0;
  (this->PredictsFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PredictsFunctionNames).ArrayNum = 0;
  (this->PredictsFunctionNames).ArrayMax = 0;
  *(undefined8 *)&this->PredictsVarNames = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsVarNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PredictsVarNames).field_0x34 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x48 = 0;
  *(undefined8 *)&this->PredictsCoercedFunctions = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x34 = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x48 = 0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->bNeedsSubobjectInstancingForLoadedInstances = false;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// UVerseClass @ 1422b88d0

UVerseClass * __thiscall
UVerseClass::UVerseClass
          (UVerseClass *this,EStaticConstructor param_1,FName param_2,uint param_3,uint param_4,
          EClassFlags param_5,EClassCastFlags param_6,wchar_t *param_7,EObjectFlags param_8,
          _func___cdecl_void_FObjectInitializer_ptr *param_9,
          _func___cdecl_UObject_ptr_FVTableHelper_ptr *param_10,
          FUObjectCppClassStaticFunctions *param_11)

{
  UClass::UClass((UClass *)this,EC_StaticConstructor,param_2,param_3,param_4,param_5,param_6,param_7
                 ,param_8,param_9,param_10,param_11);
  this->_padding_ = (longlong)&___7UVerseClass__6B_;
  (this->TaskClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TaskClasses).ArrayNum = 0;
  (this->TaskClasses).ArrayMax = 0;
  (this->InitInstanceFunction).field0_0x0.DebugPtr = (UFunction *)0x0;
  (this->PersistentVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentVars).ArrayNum = 0;
  (this->PersistentVars).ArrayMax = 0;
  (this->SessionVars).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SessionVars).ArrayNum = 0;
  (this->SessionVars).ArrayMax = 0;
  *(undefined8 *)&this->VarAccessors = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x8 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x20 = 0;
  this->SolClassFlags = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x28 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x2c = 0x80;
  *(undefined4 *)&(this->VarAccessors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VarAccessors).field_0x34 = 0;
  *(undefined8 *)&(this->VarAccessors).field_0x40 = 0;
  *(undefined4 *)&(this->VarAccessors).field_0x48 = 0;
  this->ConstructorEffects = None;
  (this->MangledPackageVersePath).ComparisonIndex = 0;
  (this->MangledPackageVersePath).Number = 0;
  (this->PackageRelativeVersePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackageRelativeVersePath).Data.ArrayNum = 0;
  (this->PackageRelativeVersePath).Data.ArrayMax = 0;
  *(undefined8 *)&this->DisplayNameToUENameFunctionMap = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x48 = 0;
  (this->DirectInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DirectInterfaces).ArrayNum = 0;
  (this->DirectInterfaces).ArrayMax = 0;
  (this->PropertiesWrittenByInitCDO).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertiesWrittenByInitCDO).ArrayNum = 0;
  (this->PropertiesWrittenByInitCDO).ArrayMax = 0;
  *(undefined8 *)&this->FunctionMangledNames = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionMangledNames).field_0x48 = 0;
  (this->PredictsFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PredictsFunctionNames).ArrayNum = 0;
  (this->PredictsFunctionNames).ArrayMax = 0;
  *(undefined8 *)&this->PredictsVarNames = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsVarNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PredictsVarNames).field_0x34 = 0;
  *(undefined8 *)&(this->PredictsVarNames).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsVarNames).field_0x48 = 0;
  *(undefined8 *)&this->PredictsCoercedFunctions = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x8 = 0;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x20 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x28 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x2c = 0x80;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x34 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PredictsCoercedFunctions).field_0x40 = 0;
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x48 = 0;
  *(undefined8 *)&this->IntPropertyConstraints = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->IntPropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->IntPropertyConstraints).field_0x48 = 0;
  *(undefined8 *)&this->DoublePropertyConstraints = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x8 = 0;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x20 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x28 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x2c = 0x80;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x34 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DoublePropertyConstraints).field_0x40 = 0;
  *(undefined4 *)&(this->DoublePropertyConstraints).field_0x48 = 0;
  this->bNeedsSubobjectInstancingForLoadedInstances = false;
  this->NativeTypeDesc = (FVniTypeDesc *)0x0;
  return this;
}

// ~UVerseClass @ 1422b9380

void __thiscall UVerseClass::~UVerseClass(UVerseClass *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UVerseClass__6B_;
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
  *(undefined4 *)&(this->PredictsCoercedFunctions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredictsCoercedFunctions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PredictsCoercedFunctions);
  *(undefined4 *)&(this->PredictsVarNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PredictsVarNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FAnsiString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FAnsiString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FAnsiString,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PredictsVarNames);
  pFVar2 = (this->PredictsFunctionNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->FunctionMangledNames).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FunctionMangledNames).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionMangledNames);
  DestructItems<TFieldPath<FProperty>,int>
            ((TFieldPath<FProperty> *)(this->PropertiesWrittenByInitCDO).AllocatorInstance.Data,
             (this->PropertiesWrittenByInitCDO).ArrayNum);
  pFVar2 = (this->PropertiesWrittenByInitCDO).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DirectInterfaces).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DisplayNameToUENameFunctionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DisplayNameToUENameFunctionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DisplayNameToUENameFunctionMap);
  pFVar2 = (this->PackageRelativeVersePath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->VarAccessors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VarAccessors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVerseClassVarAccessors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVerseClassVarAccessors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVerseClassVarAccessors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VarAccessors);
  DestructItems<FVerseSessionVar,int>
            ((FVerseSessionVar *)(this->SessionVars).AllocatorInstance.Data,
             (this->SessionVars).ArrayNum);
  pFVar2 = (this->SessionVars).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FVersePersistentVar,int>
            ((FVersePersistentVar *)(this->PersistentVars).AllocatorInstance.Data,
             (this->PersistentVars).ArrayNum);
  pFVar2 = (this->PersistentVars).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TaskClasses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UClass::~UClass((UClass *)this);
  return;
}

// operator() @ 1422ba0d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
`UVerseClass::RenameDefaultSubobjects'::__l2::<lambda_1>::operator()
          (void *this,UObject *param_1,FString *param_2)

{
  code *pcVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res10;
  FName local_res18 [2];
  undefined4 uVar9;
  FString local_38;
  
  pwVar8 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  pFVar2 = ::FName::FName(local_res18,pwVar7);
  pUVar4 = *(UObject **)&param_1->field_0x20;
  FVar5 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UObject_NoRegister();
  pUVar4 = StaticFindObjectFast(pUVar3,pUVar4,FVar5,None,RF_NoFlags,Borrowed);
  if ((pUVar4 != (UObject *)0x0) && (pUVar4 != param_1)) {
    FVar5.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x10;
    FVar5.Number = *(uint *)&pUVar4->field_0x14;
    local_res10 = 0;
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x170);
    uVar9 = 0;
    FVar5 = MakeUniqueObjectName((UObject *)&local_res10,*(UClass **)&pUVar4->field_0x20,FVar5,None)
    ;
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
                    /* WARNING: Could not recover jumptable at 0x0001422ba1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x170))(param_1,pwVar8,0,0x34);
  return;
}

// operator() @ 1422ba1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UVerseClass::ValidateSubobjectArchetypes'::__l12::<lambda_1>::operator()
          (void *this,UObject *param_1,FString *param_2)

{
  FName FVar1;
  ForAnyElementType FVar2;
  int iVar3;
  UObjectBase *pUVar4;
  FName *pFVar5;
  UObject *this_00;
  FString *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
  local_res10.Number = *(uint *)&param_1->field_0x1c;
  ::FName::ToString(&local_res10,&local_48);
  FVar2.Data = local_48.Data.AllocatorInstance.Data;
  iVar3 = (param_2->Data).ArrayNum;
  if (iVar3 == local_48.Data.ArrayNum) {
    if (iVar3 < 2) {
      bVar8 = false;
    }
    else {
      iVar3 = wcscmp((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                     (wchar_t *)local_48.Data.AllocatorInstance.Data);
      bVar8 = iVar3 != 0;
    }
  }
  else {
    bVar8 = iVar3 + local_48.Data.ArrayNum != 1;
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if ((bVar8) &&
     (FVar1.ComparisonIndex.Value = *(uint *)&param_1->field_0x18,
     FVar1.Number = *(uint *)&param_1->field_0x1c,
     pUVar4 = FindObjectWithOuter(*(UObjectBase **)this,*(UClass **)&param_1->field_0x10,FVar1),
     pUVar4 == (UObjectBase *)0x0)) {
    pFVar5 = ::FName::FName(&local_res10,(wchar_t *)(param_2->Data).AllocatorInstance.Data);
    pUVar4 = FindObjectWithOuter(*(UObjectBase **)this,*(UClass **)&param_1->field_0x10,*pFVar5);
    if (pUVar4 != (UObjectBase *)0x0) {
      this_00 = UObject::GetArchetype(param_1);
      if (this_00 == (UObject *)0x0) {
        pFVar7 = (FScriptContainerElement *)0x0;
      }
      else {
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0);
        pFVar7 = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar4,&local_48,(UObject *)0x0);
      if (3 < (byte)LogSolGeneratedClass._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0);
        local_res10.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_res10.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_res10,&local_58);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogSolGeneratedClass);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      **(undefined1 **)((longlong)this + 8) = 0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
  }
  return;
}

// AddPersistentVars @ 1422ba610

void __thiscall UVerseClass::AddPersistentVars(UVerseClass *this,UObject *param_1)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  
  pIVar2 = Verse::Private::GEngineEnvironment;
  if ((this->PersistentVars).ArrayNum != 0) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1783412198169641527>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x237,"Environment");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)*pIVar2)(pIVar2,param_1,&this->PersistentVars);
  }
  return;
}

// AddSessionVars @ 1422ba690

void __thiscall UVerseClass::AddSessionVars(UVerseClass *this,UObject *param_1)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  
  pIVar2 = Verse::Private::GEngineEnvironment;
  if ((this->SessionVars).ArrayNum != 0) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1783412198169641539>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x243,"Environment");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2,param_1,&this->SessionVars);
  }
  return;
}

// BindVerseCoroClass @ 1422baed0

void __thiscall
UVerseClass::BindVerseCoroClass
          (UVerseClass *this,char *param_1,
          _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2)

{
  TArray<FNativeFunctionLookup,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FString *pFVar6;
  size_t sVar7;
  UPackage *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  UFunction *pUVar11;
  FName *pFVar12;
  int iVar13;
  ForAnyElementType FVar14;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  FString local_28;
  
  pFVar6 = ::FString::FString((FString *)local_38,param_1);
  local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  iVar13 = (pFVar6->Data).ArrayNum;
  local_78.Data.ArrayNum = iVar13 + -1;
  if (iVar13 == 0) {
    local_78.Data.ArrayNum = 0;
  }
  local_48._8_8_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  local_48._0_8_ = local_78.Data.AllocatorInstance.Data;
  Verse::Names::VerseFuncToUEName(&local_58,(TStringView<wchar_t> *)local_48);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar14.Data = local_58.Data.AllocatorInstance.Data;
  }
  Verse::FPackageName::GetTaskUClassName(&local_68,(UObject *)this,(wchar_t *)FVar14.Data);
  if (local_68.Data.ArrayNum == 0) {
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x15060d16c;
LAB_1422baf75:
    sVar7 = wcslen((wchar_t *)local_78.Data.AllocatorInstance.Data);
    iVar13 = (int)sVar7;
  }
  else {
    iVar13 = 0;
    local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    if ((UClass *)local_68.Data.AllocatorInstance.Data != (UClass *)0x0) goto LAB_1422baf75;
  }
  local_78.Data.ArrayNum = iVar13;
  pUVar8 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
  pUVar9 = StaticClass();
  local_38._8_8_ = CONCAT44(local_78.Data.ArrayMax,local_78.Data.ArrayNum);
  local_38._0_8_ = local_78.Data.AllocatorInstance.Data;
  pUVar9 = (UClass *)
           StaticFindObject(pUVar9,(UObject *)pUVar8,(TStringView<wchar_t> *)local_38,None);
  if (pUVar9 == (UClass *)0x0) {
    local_res20 = (FName)&local_68;
    bVar5 = `UVerseClass::BindVerseCoroClass'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar5) goto LAB_1422bb0f7;
  }
  pFVar6 = ::FString::FString(&local_28,"Update");
  local_48._0_8_ = (pFVar6->Data).AllocatorInstance.Data;
  iVar2 = (pFVar6->Data).ArrayNum;
  iVar13 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar13 = 0;
  }
  local_48._8_4_ = iVar13;
  local_38._8_8_ = local_48._8_8_;
  local_38._0_8_ = local_48._0_8_;
  Verse::Names::VerseFuncToUEName(&local_78,(TStringView<wchar_t> *)local_38);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  iVar13 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar13 = 0;
  }
  pFVar10 = ::FName::FName(&local_res20,iVar13,(wchar_t *)local_78.Data.AllocatorInstance.Data,
                           FNAME_Add);
  FVar3 = *pFVar10;
  if ((pUVar9->_padding_ & 0x80400) == 0) {
    pUVar11 = UClass::FindFunctionByName(pUVar9,FVar3,IncludeSuper);
    if (pUVar11 == (UFunction *)0x0) {
      local_48._8_8_ = &local_78;
      local_48._0_8_ = pUVar9;
      bVar5 = `UVerseClass::BindVerseFunction'::__l6::<lambda_1>::operator()(local_48);
      if (!bVar5) goto LAB_1422bb086;
    }
    pUVar11->FunctionFlags = pUVar11->FunctionFlags | FUNC_Native;
    pUVar11->Func = param_2;
  }
LAB_1422bb086:
  pTVar1 = &pUVar9->NativeFunctionLookupTable;
  iVar13 = (pUVar9->NativeFunctionLookupTable).ArrayNum;
  pFVar10 = (FName *)(pTVar1->AllocatorInstance).Data;
  pFVar12 = pFVar10 + (longlong)iVar13 * 2;
  for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 2) {
    if (FVar3 == *pFVar10) {
      pFVar10[1] = (FName)param_2;
      goto LAB_1422bb0e9;
    }
  }
  if (iVar13 == (pUVar9->NativeFunctionLookupTable).ArrayMax) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar1->AllocatorInstance,
                        &(pUVar9->NativeFunctionLookupTable).ArrayMax);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (pUVar9->NativeFunctionLookupTable).ArrayNum = iVar13 + 1;
  *(FName *)(pFVar4 + (longlong)iVar13 * 0x10) = FVar3;
  *(_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr **)(pFVar4 + (longlong)iVar13 * 0x10 + 8) =
       param_2;
LAB_1422bb0e9:
  if ((UClass *)local_78.Data.AllocatorInstance.Data != (UClass *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_1422bb0f7:
  if ((UClass *)local_68.Data.AllocatorInstance.Data != (UClass *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// BindVerseFunction @ 1422bb140

void __thiscall
UVerseClass::BindVerseFunction
          (UVerseClass *this,char *param_1,
          _func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *param_2)

{
  longlong *plVar1;
  FName FVar2;
  longlong lVar3;
  bool bVar4;
  FString *pFVar5;
  FName *pFVar6;
  UFunction *pUVar7;
  FName *pFVar8;
  int iVar9;
  FName local_res8;
  FString local_38;
  undefined1 local_28 [16];
  FString local_18;
  
  pFVar5 = ::FString::FString(&local_18,param_1);
  local_28._0_8_ = (pFVar5->Data).AllocatorInstance.Data;
  iVar9 = (pFVar5->Data).ArrayNum;
  local_28._8_4_ = iVar9 + -1;
  if (iVar9 == 0) {
    local_28._8_4_ = 0;
  }
  Verse::Names::VerseFuncToUEName(&local_38,(TStringView<wchar_t> *)local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  iVar9 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName(&local_res8,iVar9,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar6;
  if ((this->_padding_ & 0x80400) == 0) {
    pUVar7 = UClass::FindFunctionByName((UClass *)this,FVar2,IncludeSuper);
    if (pUVar7 == (UFunction *)0x0) {
      local_28._8_8_ = &local_38;
      local_28._0_8_ = this;
      bVar4 = `UVerseClass::BindVerseFunction'::__l6::<lambda_1>::operator()(local_28);
      if (!bVar4) goto LAB_1422bb21c;
    }
    pUVar7->FunctionFlags = pUVar7->FunctionFlags | FUNC_Native;
    pUVar7->Func = param_2;
  }
LAB_1422bb21c:
  plVar1 = &this->_padding_;
  iVar9 = (int)this->_padding_;
  pFVar6 = (FName *)*plVar1;
  pFVar8 = pFVar6 + (longlong)iVar9 * 2;
  do {
    if (pFVar6 == pFVar8) {
      if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)plVar1,(int *)((longlong)&this->_padding_ + 4)
                          );
      }
      lVar3 = *plVar1;
      *(int *)&this->_padding_ = iVar9 + 1;
      *(FName *)(lVar3 + (longlong)iVar9 * 0x10) = FVar2;
      *(_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr **)(lVar3 + (longlong)iVar9 * 0x10 + 8) =
           param_2;
LAB_1422bb27f:
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      return;
    }
    if (FVar2 == *pFVar6) {
      pFVar6[1] = (FName)param_2;
      goto LAB_1422bb27f;
    }
    pFVar6 = pFVar6 + 2;
  } while( true );
}

// CallInitInstanceFunctions @ 1422bb410

void __thiscall
UVerseClass::CallInitInstanceFunctions
          (UVerseClass *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  undefined1 uVar1;
  UFunction *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_res20 [8];
  code *local_48;
  undefined1 *local_40;
  FString local_38;
  FString local_28;
  
  if ((((Verse::FInstantiationScope::Context.bCallInitInstanceFunctions) &&
       ((*(uint *)&param_1->field_0x8 & 0x30) == 0)) &&
      ((param_2 == (FObjectInstancingGraph *)0x0 || (param_1 != param_2->DestinationRoot)))) &&
     (!GIsClient)) {
    pUVar2 = (this->InitInstanceFunction).field0_0x0.DebugPtr;
    if (pUVar2 != (UFunction *)0x0) {
      if (((uint)pUVar2->_padding_ >> 10 & 1) != 0) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None)
        ;
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)(this->InitInstanceFunction).field0_0x0.DebugPtr,&local_38,
                   (UObject *)0x0);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InitInstanceFunction->HasAnyFlags(RF_NeedLoad)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                           ,0x28b,
                           L"Trying to call \"%s\" on \"%s\" but the function has not yet been loaded."
                          );
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      UObject::ConditionalPostLoad((UObject *)(this->InitInstanceFunction).field0_0x0.DebugPtr);
      puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_40 = local_res20;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar5);
      uVar1 = *(undefined1 *)(pFVar6 + 4);
      *(undefined1 *)(pFVar6 + 4) = 0;
      (**(code **)(*(longlong *)param_1 + 0x260))
                (param_1,(this->InitInstanceFunction).field0_0x0.DebugPtr,0);
      *(undefined1 *)(pFVar6 + 4) = uVar1;
    }
    CallPropertyInitInstanceFunctions(this,param_1,param_2);
  }
  return;
}

// CallPropertyInitInstanceFunctions @ 1422bb5b0

void __thiscall
UVerseClass::CallPropertyInitInstanceFunctions
          (UVerseClass *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  FProperty *this_00;
  longlong lVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  void *pvVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  
  if ((GIsClient) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsClient || false || 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x2c2,L"SOL-4610: UEFN clients are not supposed to run Verse code."),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (FProperty *)this->_padding_;
  do {
    if (this_00 == (FProperty *)0x0) {
      return;
    }
    if (((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) != 0) && (this_00[1]._padding_ != 0)) {
      pUVar8 = UVerseStruct::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)(this_00 + 1),pUVar8);
      if ((bVar6) &&
         (((lVar1 = this_00[1]._padding_, lVar1 != 0 && (*(longlong *)(lVar1 + 0xd8) != 0)) &&
          (*(longlong *)(lVar1 + 0xe0) != 0)))) {
        if ((param_2 != (FObjectInstancingGraph *)0x0) &&
           (uVar10 = ((uint)((ulonglong)this_00 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_00 >> 4))
                     * -0x7a143595, uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb,
           *(int *)&(param_2->SubobjectInstantiationExclusionList).Elements.field_0x8 !=
           *(int *)&(param_2->SubobjectInstantiationExclusionList).Elements.field_0x34)) {
          FVar2 = (param_2->SubobjectInstantiationExclusionList).Hash.SecondaryData;
          FVar11 = (ForElementType<FSetElementId>)
                   &(param_2->SubobjectInstantiationExclusionList).Hash;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = FVar2;
          }
          iVar7 = *(int *)((longlong)FVar11 +
                          (ulonglong)
                          ((param_2->SubobjectInstantiationExclusionList).HashSize - 1U &
                          (uVar10 >> 0x10 ^ uVar10)) * 4);
          if (iVar7 != -1) {
            lVar3 = *(longlong *)&(param_2->SubobjectInstantiationExclusionList).Elements;
            do {
              if (*(FProperty **)(lVar3 + (longlong)iVar7 * 0x10) == this_00) goto LAB_1422bb74c;
              iVar7 = *(int *)(lVar3 + 8 + (longlong)iVar7 * 0x10);
            } while (iVar7 != -1);
          }
        }
        pUVar8 = *(UClass **)(lVar1 + 0xe0);
        if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar8);
        }
        pUVar4 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
        pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,param_1,0);
        (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,*(undefined8 *)(lVar1 + 0xd8),pvVar9);
      }
    }
LAB_1422bb74c:
    this_00 = (FProperty *)this_00->_padding_;
  } while( true );
}

// CanCreateAssetOfClass @ 1422bb780

bool __thiscall UVerseClass::CanCreateAssetOfClass(UVerseClass *this)

{
  return false;
}

// DisableDynamicInstancedReferenceSupport @ 1422bc150

void __thiscall UVerseClass::DisableDynamicInstancedReferenceSupport(UVerseClass *this)

{
  FProperty *this_00;
  bool bVar1;
  UVerseClass *pUVar2;
  
  if ((this->SolClassFlags & 0x80) == 0) {
    this_00 = (FProperty *)this->_padding_;
    while ((this_00 != (FProperty *)0x0 &&
           (pUVar2 = (UVerseClass *)FField::GetOwnerClass((FField *)this_00), pUVar2 == this))) {
      bVar1 = VerseClassPrivate::CanTreatAsInstancedProperty(this_00);
      if (bVar1) {
        VerseClassPrivate::ApplyInstancedObjectPropertyFlags(this_00);
      }
      this_00 = this_00->NextRef;
    }
    this->SolClassFlags = this->SolClassFlags | 0x80;
    *(undefined1 *)&this->_padding_ = 0;
  }
  return;
}

// EnableDynamicInstancedReferenceSupport @ 1422bc2b0

void __thiscall UVerseClass::EnableDynamicInstancedReferenceSupport(UVerseClass *this)

{
  FProperty *this_00;
  bool bVar1;
  UVerseClass *pUVar2;
  
  if ((this->SolClassFlags & 0x80) != 0) {
    this_00 = (FProperty *)this->_padding_;
    while ((this_00 != (FProperty *)0x0 &&
           (pUVar2 = (UVerseClass *)FField::GetOwnerClass((FField *)this_00), pUVar2 == this))) {
      bVar1 = VerseClassPrivate::CanTreatAsInstancedProperty(this_00);
      if (bVar1) {
        VerseClassPrivate::ClearInstancedObjectPropertyFlags(this_00);
      }
      this_00 = this_00->NextRef;
    }
    this->SolClassFlags = this->SolClassFlags & 0xffffff7f;
    *(undefined1 *)&this->_padding_ = 1;
  }
  return;
}

// FindVerseFunctionByDisplayName @ 1422bc320

FVerseFunctionDescriptor * __thiscall
UVerseClass::FindVerseFunctionByDisplayName
          (UVerseClass *this,FVerseFunctionDescriptor *__return_storage_ptr__,UObject *param_1,
          FString *param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FVerseFunctionDescriptor *pFVar7;
  UClass *pUVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uStackX_1c;
  FName local_res20;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pFVar6 = ::FName::FName(&local_res20,iVar9,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
                          FNAME_Add);
  FVar2 = *pFVar6;
  if ((param_1 == (UObject *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x491,
                         L"Object instance must be provided when searching for Verse functions"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FVerseFunctionDescriptor *)(*pcVar3)();
    return pFVar7;
  }
  lVar11 = *(longlong *)&param_1->field_0x10;
  if (lVar11 != 0) {
    pUVar8 = StaticClass();
    iVar9 = (int)pUVar8->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar9 * 8)
        == &pUVar8->_padding_)) {
      uStackX_1c = FVar2.Number;
      do {
        uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
        if (*(int *)(lVar11 + 0x2c0) != *(int *)(lVar11 + 0x2ec)) {
          lVar10 = lVar11 + 0x2f0;
          if (*(longlong *)(lVar11 + 0x2f8) != 0) {
            lVar10 = *(longlong *)(lVar11 + 0x2f8);
          }
          iVar9 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar11 + 0x300) - 1U & uVar5 + uStackX_1c)
                                    * 4);
          if (iVar9 != -1) {
            lVar10 = *(longlong *)(lVar11 + 0x2b8);
            do {
              if (*(FName *)(lVar10 + (longlong)iVar9 * 0x18) == FVar2) {
                if (((iVar9 != -1) && (lVar10 = lVar10 + (longlong)iVar9 * 0x18, lVar10 != 0)) &&
                   (pFVar6 = (FName *)(lVar10 + 8), pFVar6 != (FName *)0x0)) {
                  __return_storage_ptr__->UEName = *pFVar6;
                  __return_storage_ptr__->Owner = param_1;
                  __return_storage_ptr__->Function = (UFunction *)0x0;
                  __return_storage_ptr__->DisplayName = FVar2;
                  return __return_storage_ptr__;
                }
                break;
              }
              iVar9 = *(int *)(lVar10 + 0x10 + (longlong)iVar9 * 0x18);
            } while (iVar9 != -1);
          }
        }
        if (((param_3 & IncludeSuper) == None) ||
           (lVar11 = *(longlong *)(lVar11 + 0x40), lVar11 == 0)) break;
        pUVar8 = StaticClass();
        iVar9 = (int)pUVar8->_padding_;
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar9) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar9 * 8) !=
            &pUVar8->_padding_)) break;
      } while( true );
    }
  }
  __return_storage_ptr__->Owner = (UObject *)0x0;
  __return_storage_ptr__->Function = (UFunction *)0x0;
  (__return_storage_ptr__->DisplayName).ComparisonIndex = 0;
  (__return_storage_ptr__->DisplayName).Number = 0;
  (__return_storage_ptr__->UEName).ComparisonIndex = 0;
  (__return_storage_ptr__->UEName).Number = 0;
  return __return_storage_ptr__;
}

// ForEachVerseFunction @ 1422bc4e0

void __thiscall
UVerseClass::ForEachVerseFunction
          (UVerseClass *this,UObject *param_1,
          TFunctionRef<bool___cdecl(FVerseFunctionDescriptor)> *param_2,EFieldIterationFlags param_3
          )

{
  _func___cdecl_void_FObjectInitializer_ptr **pp_Var1;
  _func___cdecl_void_FObjectInitializer_ptr *p_Var2;
  ulonglong uVar3;
  FUObjectCppClassStaticFunctions *pFVar4;
  undefined4 uVar5;
  _func___cdecl_void_FObjectInitializer_ptr *p_Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  code *pcVar10;
  _func___cdecl_void_FObjectInitializer_ptr **pp_Var11;
  bool bVar12;
  char cVar13;
  undefined4 uVar14;
  UClass *pUVar15;
  UFunction *pUVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  FUObjectCppClassStaticFunctions *pFVar20;
  UClass *this_00;
  undefined1 local_e8 [4];
  int local_e4;
  int local_e0;
  _func___cdecl_void_FObjectInitializer_ptr **local_d8;
  int iStack_d0;
  uint uStack_cc;
  FUObjectCppClassStaticFunctions *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  _func___cdecl_void_FObjectInitializer_ptr **local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  UObject *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                          ,0x474,L"Object instance must be provided when iterating Verse functions")
     , bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this_00 = *(UClass **)&param_1->field_0x10;
  if (this_00 != (UClass *)0x0) {
    pUVar15 = StaticClass();
    iVar17 = (int)pUVar15->_padding_;
    if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar15->_padding_)) goto LAB_1422bc55c;
  }
  this_00 = (UClass *)0x0;
LAB_1422bc55c:
  if (this_00 == (UClass *)0x0) {
    return;
  }
LAB_1422bc590:
  pp_Var1 = &this_00[1].ClassConstructor;
  iStack_d0 = 0;
  uVar5 = (undefined4)this_00[1].ClassCastFlags;
  pFVar4 = &this_00[1].CppClassStaticFunctions;
  local_b8 = 0;
  uStack_cc = 1;
  uStack_bc = CASTCLASS_None;
  if (uVar5 != CASTCLASS_None) {
    pFVar20 = pFVar4;
    if (*(FUObjectCppClassStaticFunctions **)&this_00[1].bCooked !=
        (FUObjectCppClassStaticFunctions *)0x0) {
      pFVar20 = *(FUObjectCppClassStaticFunctions **)&this_00[1].bCooked;
    }
    uVar19 = *(uint *)&pFVar20->AddReferencedObjects;
    while (uVar19 == 0) {
      iStack_d0 = iStack_d0 + 1;
      local_b8 = local_b8 + 0x20;
      uStack_bc = uVar5;
      if ((int)((uVar5 - CASTCLASS_UField) + ((int)(uVar5 - CASTCLASS_UField) >> 0x1f & 0x1fU)) >> 5
          < iStack_d0) goto LAB_1422bc61d;
      uVar19 = *(uint *)((longlong)&pFVar20->AddReferencedObjects + (longlong)iStack_d0 * 4);
    }
    uStack_cc = ~(uVar19 - 1) & uVar19;
    uVar3 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e4 = (int)lVar9;
    uStack_bc = local_e4 + -1 + local_b8;
    if ((int)uVar5 < (int)uStack_bc) {
      uStack_bc = uVar5;
    }
  }
LAB_1422bc61d:
  uVar14 = (undefined4)this_00[1].ClassCastFlags;
  uStack_b4 = uStack_60._4_4_;
  uVar18 = uVar14 & (CASTCLASS_FInt16Property|CASTCLASS_FTextProperty|CASTCLASS_FSoftObjectProperty|
                     CASTCLASS_FLazyObjectProperty|CASTCLASS_FWeakObjectProperty|
                     CASTCLASS_FObjectPropertyBase|CASTCLASS_FMulticastDelegateProperty|
                     CASTCLASS_FNumericProperty|CASTCLASS_FDelegateProperty|CASTCLASS_FInt64Property
                     |CASTCLASS_FArrayProperty|CASTCLASS_FStructProperty|CASTCLASS_UFunction|
                     CASTCLASS_FUInt16Property|CASTCLASS_FBoolProperty|CASTCLASS_FObjectProperty|
                     CASTCLASS_FProperty|CASTCLASS_FStrProperty|CASTCLASS_FNameProperty|
                     CASTCLASS_FInterfaceProperty|CASTCLASS_FUInt32Property|CASTCLASS_FClassProperty
                     |CASTCLASS_FUInt64Property|CASTCLASS_FFloatProperty|CASTCLASS_FIntProperty|
                     CASTCLASS_FByteProperty|CASTCLASS_UClass);
  iStack_b0 = *(int *)&this_00[1].ClassVTableHelperCtorCaller -
              *(int *)((longlong)&this_00[1].ClassWithin.field0_0x0 + 4);
  TStack_a0._padding_ = CONCAT44(uStack_cc,iStack_d0);
  uStack_c0 = 0xffffffff;
  TStack_a0.CurrentBitIndex = uStack_bc;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar14 >> 5;
  TStack_a0._28_4_ = uStack_60._4_4_;
  TStack_a0.BaseBitIndex = local_b8;
  uStack_80 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = pp_Var1;
  local_c8 = pFVar4;
  local_a8 = pp_Var1;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)pFVar4;
  if (((int)uVar14 < 0) || ((int)uVar5 < (int)uVar14)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar5 = (undefined4)this_00[1].ClassCastFlags;
  if (uVar14 != uVar5) {
    pFVar20 = pFVar4;
    if (*(FUObjectCppClassStaticFunctions **)&this_00[1].bCooked !=
        (FUObjectCppClassStaticFunctions *)0x0) {
      pFVar20 = *(FUObjectCppClassStaticFunctions **)&this_00[1].bCooked;
    }
    uVar19 = -1 << ((byte)uVar14 & 0x1f) &
             *(uint *)((longlong)&pFVar20->AddReferencedObjects + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      iVar17 = iVar17 + 1;
      uVar18 = uVar18 + CASTCLASS_UClass;
      uVar14 = uVar5;
      if ((int)(((int)(uVar5 - CASTCLASS_UField) >> 0x1f & 0x1fU) + (uVar5 - CASTCLASS_UField)) >> 5
          < iVar17) goto LAB_1422bc720;
      uVar19 = *(uint *)((longlong)&pFVar20->AddReferencedObjects + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar19 - 1) & uVar19) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_e0 = (int)lVar9;
    uVar14 = local_e0 + -1 + uVar18;
    if ((int)uVar5 < (int)uVar14) {
      uVar14 = uVar5;
    }
  }
LAB_1422bc720:
  do {
    pp_Var11 = local_a8;
    if (*(int *)(local_a8 + 1) - *(int *)((longlong)local_a8 + 0x34) != (int)uStack_80) {
      local_e8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_e8);
    }
    if (((TStack_a0.CurrentBitIndex == uVar14) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)pFVar4)) &&
       (pp_Var11 == pp_Var1)) break;
    p_Var6 = *pp_Var11;
    p_Var2 = p_Var6 + (longlong)TStack_a0.CurrentBitIndex * 0x18;
    pUVar16 = UClass::FindFunctionByName
                        (this_00,*(FName *)(p_Var6 + (longlong)TStack_a0.CurrentBitIndex * 0x18 + 8)
                         ,IncludeSuper);
    if (pUVar16 != (UFunction *)0x0) {
      uVar7 = *(undefined8 *)p_Var2;
      uVar8 = *(undefined8 *)(p_Var2 + 8);
      local_68._0_4_ = (undefined4)uVar7;
      local_68._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar8;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_70._0_4_ = SUB84(pUVar16,0);
      uStack_70._4_4_ = (undefined4)((ulonglong)pUVar16 >> 0x20);
      local_48 = (undefined4)local_68;
      uStack_44 = local_68._4_4_;
      uStack_40 = (undefined4)uStack_60;
      uStack_3c = uStack_60._4_4_;
      uStack_50 = (undefined4)uStack_70;
      uStack_4c = uStack_70._4_4_;
      local_78 = param_1;
      uStack_70 = pUVar16;
      local_68 = uVar7;
      uStack_60 = uVar8;
      local_58 = param_1;
      cVar13 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_58);
      if (cVar13 == '\0') break;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
  if ((param_3 & IncludeSuper) == None) {
    return;
  }
  this_00 = (UClass *)this_00->_padding_;
  if (this_00 != (UClass *)0x0) {
    pUVar15 = StaticClass();
    iVar17 = (int)pUVar15->_padding_;
    if ((iVar17 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
        &pUVar15->_padding_)) goto LAB_1422bc803;
  }
  this_00 = (UClass *)0x0;
LAB_1422bc803:
  if (this_00 == (UClass *)0x0) {
    return;
  }
  goto LAB_1422bc590;
}

// GetAssetRegistryTags @ 1422bc950

void __thiscall
UVerseClass::GetAssetRegistryTags(UVerseClass *this,FAssetRegistryTagsContext param_1)

{
  FAssetRegistryTagsContext FVar1;
  FAssetRegistryTagsContext local_res18 [2];
  
  FVar1.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext(local_res18,param_1.Data);
  UClass::GetAssetRegistryTags((UClass *)this,FVar1);
  return;
}

// GetAuthoredNameForField @ 1422bc980

FString * __thiscall
UVerseClass::GetAuthoredNameForField
          (UVerseClass *this,FString *__return_storage_ptr__,FField *param_1)

{
  bool bVar1;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if ((param_1 == (FField *)0x0) || (!CVar_UseAuthoredNameNonEditor)) {
    UStruct::GetAuthoredNameForField((UStruct *)this,__return_storage_ptr__,param_1);
  }
  else {
    bVar1 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar1) {
      ::FName::ToString(&param_1->NamePrivate,&local_28);
    }
    else {
      ::FString::FString(&local_28,L"None");
    }
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    Verse::Names::UEPropToVerseName(__return_storage_ptr__,&local_18,(bool *)0x0);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrefixCPP @ 1422bcad0

wchar_t * __thiscall UVerseClass::GetPrefixCPP(UVerseClass *this)

{
  return L"";
}

// GetPreloadDependencies @ 1422bcae0

void __thiscall
UVerseClass::GetPreloadDependencies
          (UVerseClass *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  UClass *this_00;
  TObjectPtr<UObject>_u_0 *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TObjectPtr<UObject>_u_0 local_28;
  undefined8 local_20;
  
  UClass::GetPreloadDependencies((UClass *)this,param_1);
  this_00 = (UClass *)this->_padding_;
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  local_28 = (this_00->ClassDefaultObject).field0_0x0;
  pTVar2 = (TObjectPtr<UObject>_u_0 *)(param_1->AllocatorInstance).Data;
  if (((pTVar2 <= &local_28) && (&local_28 < pTVar2 + param_1->ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar6 + 1;
  *(TObjectPtr<UObject>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
  if ((this->SolClassFlags & 1) != 0) {
    pFVar8 = (this->TaskClasses).AllocatorInstance.Data;
    iVar6 = (this->TaskClasses).ArrayNum;
    pFVar1 = pFVar8 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->TaskClasses).ArrayNum != iVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UVerseClass>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar1) break;
      local_20 = *(undefined8 *)pFVar8;
      pFVar3 = (param_1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = param_1->ArrayNum;
      if (iVar7 == param_1->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar8 = pFVar8 + 8;
      param_1->ArrayNum = iVar7 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_20;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1422bcce0

UClass * __cdecl UVerseClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerseClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"VerseClass",
               &Z_Registration_Info_UClass_UVerseClass.InnerSingleton,
               StaticRegisterNativesUVerseClass,0x4d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerseClass>,InternalVTableHelperCtorCaller<UVerseClass>,
               local_res8,UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerseClass.InnerSingleton;
}

// GetVerseFunctionParameterCount @ 1422bd2e0

int __cdecl UVerseClass::GetVerseFunctionParameterCount(UFunction *param_1)

{
  void *pvVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  FName FVar5;
  FNameEntryId FVar6;
  FFieldObjectUnion local_28;
  void *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_20 = (void *)param_1->_padding_;
  FVar5.ComparisonIndex.Value = 0;
  FVar5.Number = 0;
  FVar6.Value = 0;
  if ((local_20 == (void *)0x0) ||
     ((*(uint *)(*(longlong *)((longlong)local_20 + 8) + 0x18) >> 0x14 & 1) == 0)) {
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = (FFieldObjectUnion)param_1;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28);
    FVar6.Value = 0;
    while (local_20 != (void *)0x0) {
      if (-1 < (char)*(ulonglong *)((longlong)local_20 + 0x38)) {
        return FVar5.ComparisonIndex.Value.Value;
      }
      if ((*(ulonglong *)((longlong)local_20 + 0x38) >> 8 & 1) == 0) {
        FVar5.ComparisonIndex.Value = FVar5.ComparisonIndex.Value.Value + 1;
        FVar5.Number = 0;
      }
      FVar6 = FVar5.ComparisonIndex.Value;
      local_20 = *(void **)((longlong)local_20 + 0x18);
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28);
    }
  }
  else {
    local_28 = (FFieldObjectUnion)*(FFieldObjectUnion *)((longlong)local_20 + 0x70);
    if (local_28.Field != (FField *)0x0) {
      local_20 = *(void **)(local_28.Unknown + 0x50);
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28);
      FVar4 = FVar5;
      pvVar1 = local_20;
      while (pvVar1 != (void *)0x0) {
        local_20 = pvVar1;
        bVar2 = IsThisNotNull(pvVar1,"FField::GetFName");
        FVar3 = FVar5;
        if (bVar2) {
          FVar3 = *(FName *)((longlong)pvVar1 + 0x20);
        }
        if (FVar3 != StructPaddingDummyName) {
          FVar4.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value + 1;
          FVar4.Number = 0;
        }
        FVar6 = FVar4.ComparisonIndex.Value;
        local_20 = *(void **)((longlong)pvVar1 + 0x18);
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_28);
        pvVar1 = local_20;
      }
      return FVar6.Value;
    }
  }
  return FVar6.Value;
}

// GetVersePath @ 1422bd440

FVersePath * __thiscall
UVerseClass::GetVersePath(UVerseClass *this,FVersePath *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FVersePath *pFVar4;
  int iVar5;
  FString *pFVar6;
  uint uVar7;
  int iVar8;
  FString local_78;
  FVersePath local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (this->MangledPackageVersePath == (FName)0x0) {
    (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->PathString).Data.ArrayNum = 0;
    (__return_storage_ptr__->PathString).Data.ArrayMax = 0;
    return __return_storage_ptr__;
  }
  Verse::Names::Private::UnmangleCasedName(&local_48,this->MangledPackageVersePath,(bool *)0x0);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  iVar5 = (this->PackageRelativeVersePath).Data.ArrayNum;
  if (iVar5 < 2) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = local_48.Data.ArrayNum;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
      pFVar6 = &local_58;
      bVar2 = true;
      bVar3 = false;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
      pFVar6 = &local_58;
      bVar2 = true;
      bVar3 = false;
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
  else {
    iVar8 = iVar5 + -1;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((local_48.Data.ArrayNum == 0) && (iVar5 = iVar5 + 1, iVar5 == 0)) {
      local_78.Data.ArrayMax = 0;
    }
    else {
      uVar7 = local_48.Data.ArrayNum + iVar5;
      if ((int)uVar7 < local_48.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar7,0,(ForAnyElementType *)&local_78,local_48.Data.ArrayNum,
                 &local_78.Data.ArrayMax);
      if (local_48.Data.ArrayNum != 0) {
        memcpy(local_78.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
      }
    }
    ::FString::PathAppend
              (&local_78,(wchar_t *)(this->PackageRelativeVersePath).Data.AllocatorInstance.Data,
               iVar8);
    pFVar6 = &local_78;
    bVar2 = false;
    bVar3 = true;
    local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
  }
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_38.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar3) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_68.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.PathString.Data.ArrayNum = 0;
  local_68.PathString.Data.ArrayMax = 0;
  bVar3 = UE::Core::FVersePath::TryMake(&local_68,&local_38,(FText *)0x0);
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1783412198169641061>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x65,"UE::Core::FVersePath::TryMake(Result, MoveTemp(VersePath))"), bVar3)
     ) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FVersePath *)(*pcVar1)();
    return pFVar4;
  }
  (__return_storage_ptr__->PathString).Data.AllocatorInstance.Data =
       local_68.PathString.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->PathString).Data.ArrayNum = local_68.PathString.Data.ArrayNum;
  (__return_storage_ptr__->PathString).Data.ArrayMax = local_68.PathString.Data.ArrayMax;
  local_68.PathString.Data.ArrayNum = 0;
  local_68.PathString.Data.ArrayMax = 0;
  local_68.PathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InstanceNewSubobjects @ 1422bd6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVerseClass::InstanceNewSubobjects(UVerseClass *this,TNotNull<UObject_*> param_1)

{
  ulonglong *puVar1;
  UObject *pUVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [88];
  void *local_d0;
  undefined4 local_c8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar3 = this->_padding_;
  bVar5 = false;
  if (lVar3 != 0) {
    do {
      if (bVar5) goto LAB_1422bd720;
      puVar1 = (ulonglong *)(lVar3 + 0x38);
      lVar3 = *(longlong *)(lVar3 + 0x50);
      uVar4 = *puVar1 & 0x8000080000;
      bVar5 = uVar4 != 0;
    } while (lVar3 != 0);
    if (uVar4 != 0) {
LAB_1422bd720:
      FObjectInstancingGraph::FObjectInstancingGraph
                ((FObjectInstancingGraph *)local_128,InstanceTemplatesOnly);
      if (this->_padding_ == 0) {
        UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
      }
      pUVar2 = (UObject *)this->_padding_;
      FObjectInstancingGraph::AddNewObject((FObjectInstancingGraph *)local_128,param_1.Val,pUVar2);
      UStruct::InstanceSubobjectTemplates
                ((UStruct *)this,(TNotNull<void_*>)param_1.Val,pUVar2,(UStruct *)0x0,
                 (TNotNull<UObject_*>)param_1.Val,(FObjectInstancingGraph *)local_128);
      local_28 = 0;
      if (local_30 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_30);
      }
      TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_70);
      local_78 = 0;
      if (local_80 != (void *)0x0) {
        FMemory::Free(local_80);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c0);
      local_c8 = 0;
      if (local_d0 != (void *)0x0) {
        FMemory::Free(local_d0);
      }
      TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_128 + 0x18));
    }
  }
  return;
}

// IsAsset @ 1422bd860

bool __thiscall UVerseClass::IsAsset(UVerseClass *this)

{
  return true;
}

// Link @ 1422bdbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

void __thiscall UVerseClass::Link(UVerseClass *this,FArchive *param_1,bool param_2)

{
  int iVar1;
  FField *this_00;
  FName FVar2;
  FProperty *this_01;
  code *pcVar3;
  bool bVar4;
  TConsoleVariableData<bool> *pTVar5;
  IEngineEnvironment *pIVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  bool bVar10;
  UPackage *pUVar11;
  void *pvVar12;
  FString *pFVar13;
  FString *pFVar14;
  UClass *pUVar15;
  UClass *pUVar16;
  UFunction *pUVar17;
  UVerseClass *pUVar18;
  uint uVar19;
  ulong64 uVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  FScriptContainerElement *pFVar24;
  FName *pFVar25;
  FCoreRedirect *this_02;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  FName *pFVar28;
  undefined1 auStackY_418 [32];
  char local_3d8;
  undefined1 local_3d7;
  char local_3d6;
  undefined1 local_3d5 [5];
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  FString local_3c0;
  ForAnyElementType local_3b0;
  int local_3a8;
  int local_3a4;
  FString local_3a0;
  FString local_390;
  FName local_380;
  FString local_378;
  FName local_368;
  FName local_360;
  FName *local_358;
  FString local_350;
  FCoreRedirect *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  FString local_328;
  undefined1 local_318 [8];
  FString local_310;
  TArrayView<FCoreRedirect_const_,int> local_2f8;
  FString local_2e8;
  FString local_2d8;
  TStringBuilderBase<wchar_t> local_2c8;
  TStringBuilderBase<wchar_t> local_2a8 [4];
  TStringBuilderBase<wchar_t> local_228;
  TStringBuilderBase<wchar_t> local_208 [4];
  TStringBuilderBase<wchar_t> local_188;
  TStringBuilderBase<wchar_t> local_168 [4];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_380 = (FName)((ulonglong)local_380 & 0xffffffff00000000);
  local_3d6 = param_2;
  UClass::Link((UClass *)this,param_1,param_2);
  pUVar11 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  Verse::FPackageName::GetVersePackageNameFromUPackagePath
            ((FName)local_318,(EVersePackageType *)pUVar11->_padding_);
  lVar27 = 1;
  if (local_3d8 != '\0') {
    local_380 = (FName)this->_padding_;
    local_3d0.Data = (FScriptContainerElement *)0x0;
    local_3c8 = 0;
    ::FName::ToString(&local_380,&local_3a0);
    FVar7.Data = local_3a0.Data.AllocatorInstance.Data;
    lVar22 = (longlong)local_3a0.Data.ArrayNum;
    local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c0.Data.ArrayNum = local_3a0.Data.ArrayNum;
    if (local_3a0.Data.ArrayNum == 0) {
      local_3c0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_3c0,
                 local_3a0.Data.ArrayNum,&local_3c0.Data.ArrayMax);
      memcpy(local_3c0.Data.AllocatorInstance.Data,FVar7.Data,lVar22 * 2);
    }
    ::FString::ReplaceCharInlineCaseSensitive(&local_3c0,L'-',L'_');
    FVar7.Data = local_3a0.Data.AllocatorInstance.Data;
    lVar22 = (longlong)local_3a0.Data.ArrayNum;
    pFVar26 = local_3a0.Data.AllocatorInstance.Data + lVar22 * 2;
    do {
      if (pFVar26 == local_3a0.Data.AllocatorInstance.Data) goto LAB_1422bdd20;
      pFVar26 = pFVar26 + -2;
    } while (*(wchar_t *)pFVar26 != L'-');
    iVar21 = (int)((longlong)pFVar26 - (longlong)local_3a0.Data.AllocatorInstance.Data >> 1);
    if (iVar21 == -1) {
LAB_1422bdd20:
      local_390.Data.ArrayNum = local_3a0.Data.ArrayNum;
      local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar4 = false;
      bVar10 = true;
      if (local_3a0.Data.ArrayNum == 0) {
        local_390.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_390,
                   local_3a0.Data.ArrayNum,&local_390.Data.ArrayMax);
        memcpy(local_390.Data.AllocatorInstance.Data,FVar7.Data,lVar22 * 2);
      }
      pFVar13 = &local_390;
    }
    else {
      bVar4 = true;
      bVar10 = false;
      pFVar13 = ::FString::RightChop(&local_3a0,&local_310,iVar21 + 1);
    }
    local_3b0.Data = (FScriptContainerElement *)0x0;
    local_3a8 = (pFVar13->Data).ArrayNum;
    lVar22 = (longlong)local_3a8;
    pFVar26 = (pFVar13->Data).AllocatorInstance.Data;
    if (local_3a8 == 0) {
      local_3a4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3a8,0,&local_3b0,local_3a8,&local_3a4);
      memcpy(local_3b0.Data,pFVar26,lVar22 * 2);
    }
    if ((bVar10) && (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_390.Data.AllocatorInstance.Data);
    }
    if ((bVar4) && (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_310.Data.AllocatorInstance.Data);
    }
    local_368 = (FName)pUVar11->_padding_;
    ::FName::ToString(&local_368,&local_350);
    FVar7.Data = local_350.Data.AllocatorInstance.Data;
    local_188.Base = (wchar_t *)local_168;
    local_188.End = (wchar_t *)&local_e8;
    local_188.CurPos = (wchar_t *)local_168;
    local_188.bIsDynamic = false;
    local_188.bIsExternal = false;
    if (local_350.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = local_350.Data.ArrayNum + -1;
    }
    uVar20 = (ulong64)iVar21;
    if (&local_e8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_168[0].Base + uVar20 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,uVar20);
    }
    if (iVar21 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_188.CurPos,FVar7.Data,uVar20 * 2);
      local_188.CurPos = (wchar_t *)((longlong)pvVar12 + uVar20 * 2);
    }
    if (local_188.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_188.CurPos + 2U)
       ) {
      TStringBuilderBase<wchar_t>::Extend(&local_188,1);
    }
    *(undefined2 *)(wchar_t **)local_188.CurPos = 0x2f;
    local_188.CurPos = (wchar_t *)((longlong)(wchar_t **)local_188.CurPos + 2);
    if (local_3c0.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = local_3c0.Data.ArrayNum + -1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_188,(wchar_t *)local_3c0.Data.AllocatorInstance.Data,iVar21);
    if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data.AllocatorInstance.Data);
    }
    local_360 = (FName)pUVar11->_padding_;
    ::FName::ToString(&local_360,&local_378);
    FVar7.Data = local_378.Data.AllocatorInstance.Data;
    local_e8.Base = local_c8;
    local_e8.End = (wchar_t *)local_48;
    local_e8.CurPos = local_c8;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    if (local_378.Data.ArrayNum == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = local_378.Data.ArrayNum + -1;
    }
    uVar20 = (ulong64)iVar21;
    if (local_48 < local_c8 + uVar20) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,uVar20);
    }
    if (iVar21 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_e8.CurPos,FVar7.Data,uVar20 * 2);
      local_e8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar20 * 2);
    }
    if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data.AllocatorInstance.Data);
    }
    pwVar8 = local_188.Base;
    local_228.Base = (wchar_t *)local_208;
    local_228.CurPos = (wchar_t *)local_208;
    local_228.End = (wchar_t *)&local_188;
    iVar21 = (int)((longlong)local_188.CurPos - (longlong)local_188.Base >> 1);
    uVar20 = (ulong64)iVar21;
    local_228.bIsDynamic = false;
    local_228.bIsExternal = false;
    if (&local_188 < (TStringBuilderBase<wchar_t> *)((longlong)&local_208[0].Base + uVar20 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,uVar20);
    }
    if (iVar21 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_228.CurPos,pwVar8,uVar20 * 2);
      local_228.CurPos = (wchar_t *)((longlong)pvVar12 + uVar20 * 2);
    }
    if (local_228.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_228.CurPos + 2))
    {
      TStringBuilderBase<wchar_t>::Extend(&local_228,1);
    }
    *(undefined2 *)(wchar_t **)local_228.CurPos = 0x2e;
    local_228.CurPos = (wchar_t *)((longlong)(wchar_t **)local_228.CurPos + 2);
    iVar21 = local_3a8 + -1;
    if (local_3a8 == 0) {
      iVar21 = 0;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_228,(wchar_t *)local_3b0.Data,iVar21);
    pwVar8 = local_e8.Base;
    local_2c8.Base = (wchar_t *)local_2a8;
    local_2c8.CurPos = (wchar_t *)local_2a8;
    local_2c8.End = (wchar_t *)&local_228;
    iVar21 = (int)((longlong)local_e8.CurPos - (longlong)local_e8.Base >> 1);
    uVar20 = (ulong64)iVar21;
    local_2c8.bIsDynamic = false;
    local_2c8.bIsExternal = false;
    if (&local_228 < (TStringBuilderBase<wchar_t> *)((longlong)&local_2a8[0].Base + uVar20 * 2)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2c8,uVar20);
    }
    if (iVar21 != 0) {
      pvVar12 = FGenericPlatformString::Memcpy(local_2c8.CurPos,pwVar8,uVar20 * 2);
      local_2c8.CurPos = (wchar_t *)((longlong)pvVar12 + uVar20 * 2);
    }
    if (local_2c8.End < (TStringBuilderBase<wchar_t> *)((longlong)(wchar_t **)local_2c8.CurPos + 2))
    {
      TStringBuilderBase<wchar_t>::Extend(&local_2c8,1);
    }
    *(undefined2 *)(wchar_t **)local_2c8.CurPos = 0x2e;
    local_2c8.CurPos = (wchar_t *)((longlong)(wchar_t **)local_2c8.CurPos + 2);
    if (local_3a0.Data.ArrayNum == 0) {
      local_3a0.Data.ArrayNum = 0;
    }
    else {
      local_3a0.Data.ArrayNum = local_3a0.Data.ArrayNum + -1;
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>
              (&local_2c8,(wchar_t *)local_3a0.Data.AllocatorInstance.Data,local_3a0.Data.ArrayNum);
    if (local_2c8.End < (TStringBuilderBase<wchar_t> *)(local_2c8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2c8,1);
    }
    pwVar8 = local_2c8.Base;
    *local_2c8.CurPos = L'\0';
    if (local_228.End < (TStringBuilderBase<wchar_t> *)(local_228.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_228,1);
    }
    pwVar9 = local_228.Base;
    *local_228.CurPos = L'\0';
    iVar21 = (int)local_3c8;
    if ((int)local_3c8 == local_3c8._4_4_) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&local_3d0,(int *)((longlong)&local_3c8 + 4));
    }
    local_3c8 = CONCAT44(local_3c8._4_4_,iVar21 + 1);
    this_02 = (FCoreRedirect *)(local_3d0.Data + (longlong)iVar21 * 0xa0);
    pFVar13 = ::FString::FString(&local_2e8,pwVar8);
    pFVar14 = ::FString::FString(&local_2d8,pwVar9);
    FCoreRedirect::FCoreRedirect(this_02,Type_Class,pFVar14,pFVar13);
    if (local_2c8.End < (TStringBuilderBase<wchar_t> *)(local_2c8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_2c8,1);
    }
    *local_2c8.CurPos = L'\0';
    ::FString::FString(&local_328,local_2c8.Base);
    iStack_330 = (int)local_3c8;
    local_338 = (FCoreRedirect *)local_3d0.Data;
    if (((int)local_3c8 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_2f8._12_4_ = uStack_32c;
    local_2f8.ArrayNum = iStack_330;
    local_2f8.DataPtr = local_338;
    FCoreRedirects::AddRedirectList(&local_2f8,&local_328);
    if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_328.Data.AllocatorInstance.Data);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2c8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_228);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
    if (local_3b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.Data);
    }
    if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
    }
    if (local_3a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a0.Data.AllocatorInstance.Data);
    }
    DestructItems<FCoreRedirect,int>((FCoreRedirect *)local_3d0.Data,(int)local_3c8);
    if ((FCoreRedirect *)local_3d0.Data != (FCoreRedirect *)0x0) {
      FMemory::Free(local_3d0.Data);
    }
  }
  plVar23 = &this->_padding_;
  if ((plVar23 == (longlong *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ListStartPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                          ,0x3d,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FField *)*plVar23;
  iVar21 = 0;
  do {
    if (this_00 == (FField *)0x0) {
      if ((((uint)this->_padding_ >> 0x13 & 1) != 0) &&
         (bVar10 = IsEventDrivenLoaderEnabled(), !bVar10)) {
        pFVar24 = (this->TaskClasses).AllocatorInstance.Data;
        iVar1 = (this->TaskClasses).ArrayNum;
        pFVar26 = pFVar24 + (longlong)iVar1 * 8;
        while( true ) {
          if ((this->TaskClasses).ArrayNum != iVar1) {
            local_3d7 = 0;
            `TCheckedPointerIterator<TObjectPtr<UVerseClass>,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_3d7);
          }
          if (pFVar24 == pFVar26) break;
          if (*(longlong *)pFVar24 != 0) {
            (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
          }
          pFVar24 = pFVar24 + 8;
        }
      }
      pIVar6 = Verse::Private::GEngineEnvironment;
      if (((uint)this->_padding_ >> 0x13 & 1) != 0) {
        if ((this->SolClassFlags & 1) != 0) {
          if ((Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<1783412198169641143>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                                  ,0xb7,"Environment"), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6);
        }
        iVar1 = (int)this->_padding_;
        pFVar25 = (FName *)this->_padding_;
        pFVar28 = pFVar25 + (longlong)iVar1 * 2;
        while( true ) {
          if ((int)this->_padding_ != iVar1) {
            `TCheckedPointerIterator<FNativeFunctionLookup,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_3d5);
          }
          if (pFVar25 == pFVar28) break;
          pUVar17 = UClass::FindFunctionByName((UClass *)this,*pFVar25,IncludeSuper);
          if ((pUVar17 != (UFunction *)0x0) ||
             (local_358 = pFVar25,
             bVar10 = `UVerseClass::Link'::__l29::<lambda_2>::operator()(&local_358), bVar10)) {
            FVar2 = pFVar25[1];
            pUVar17->FunctionFlags = pUVar17->FunctionFlags | FUNC_Native;
            pUVar17->Func = (_func___cdecl_void_UObject_ptr_FFrame_ptr_void_ptr *)FVar2;
          }
          pFVar25 = pFVar25 + 2;
        }
      }
      if ((((uint)this->_padding_ >> 0x13 & 1) != 0) ||
         (*(int *)((longlong)&this->_padding_ + 4) < 0)) {
        if ((iVar21 == 0) && (local_3d6 == '\0')) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        UClass::AssembleReferenceTokenStream((UClass *)this,bVar10);
      }
      pTVar5 = Verse::CVarUseDynamicSubobjectInstancing.Ref;
      bVar10 = IsInParallelGameThread();
      if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
        lVar27 = 0;
      }
      bVar10 = pTVar5->ShadowedValue[lVar27];
      uVar19 = this->SolClassFlags >> 7;
      *(bool *)&this->_padding_ = bVar10;
      if (((uVar19 & 1) != 0) && (bVar10 != false)) {
        *(undefined1 *)&this->_padding_ = 0;
      }
      if ((((((uint)this->_padding_ >> 0x13 & 1) != 0) && ((uVar19 & 1) == 0)) &&
          ((byte)this->_padding_ == ((byte)uVar19 & 1))) && ((this->SolClassFlags >> 7 & 1) == 0)) {
        this_01 = (FProperty *)this->_padding_;
        while ((this_01 != (FProperty *)0x0 &&
               (pUVar18 = (UVerseClass *)FField::GetOwnerClass((FField *)this_01), pUVar18 == this))
              ) {
          bVar10 = VerseClassPrivate::CanTreatAsInstancedProperty(this_01);
          if (bVar10) {
            VerseClassPrivate::ApplyInstancedObjectPropertyFlags(this_01);
          }
          this_01 = this_01->NextRef;
        }
        this->SolClassFlags = this->SolClassFlags | 0x80;
        *(undefined1 *)&this->_padding_ = 0;
      }
      return;
    }
    pUVar15 = FField::GetOwnerClass(this_00);
    if (pUVar15 == (UClass *)0x0) {
LAB_1422be3c6:
      plVar23 = (longlong *)(*plVar23 + 0x58);
    }
    else {
      pUVar16 = StaticClass();
      iVar1 = (int)pUVar16->_padding_;
      if (((*(int *)(pUVar15->_padding_ + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar16->_padding_)) || ((pUVar15[1]._padding_ & 1) == 0)) goto LAB_1422be3c6;
      lVar22 = *plVar23;
      iVar21 = iVar21 + 1;
      *plVar23 = *(longlong *)(lVar22 + 0x58);
      *(undefined8 *)(lVar22 + 0x58) = 0;
    }
    this_00 = (FField *)*plVar23;
  } while( true );
}

// PostInitInstance @ 1422be6b0

void __thiscall
UVerseClass::PostInitInstance(UVerseClass *this,UObject *param_1,FObjectInstancingGraph *param_2)

{
  code *pcVar1;
  IEngineEnvironment *pIVar2;
  bool bVar3;
  
  if (((*(uint *)&param_1->field_0x8 >> 0xc & 1) == 0) &&
     (((*(uint *)&param_1->field_0x8 & 0x30) == 0 ||
      ((*(uint *)(*(longlong *)&param_1->field_0x10 + 8) >> 0xc & 1) == 0)))) {
    CallInitInstanceFunctions(this,param_1,param_2);
    AddSessionVars(this,param_1);
  }
  pIVar2 = Verse::Private::GEngineEnvironment;
  if ((this->PersistentVars).ArrayNum != 0) {
    if (Verse::Private::GEngineEnvironment == (IEngineEnvironment *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1783412198169641527>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                         ,0x237,"Environment");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)*pIVar2)(pIVar2,param_1,&this->PersistentVars);
  }
  return;
}

// PostLoadInstance @ 1422be760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVerseClass::PostLoadInstance(UVerseClass *this,UObject *param_1)

{
  ulonglong *puVar1;
  UObject *pUVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [88];
  void *local_d0;
  undefined4 local_c8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_c0;
  void *local_80;
  undefined4 local_78;
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_70;
  ForElementType<FSetElementId> local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (((this->bNeedsSubobjectInstancingForLoadedInstances != false) && (this->_padding_ != 0)) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    lVar3 = this->_padding_;
    bVar5 = false;
    if (lVar3 != 0) {
      do {
        if (bVar5) goto LAB_1422be7e1;
        puVar1 = (ulonglong *)(lVar3 + 0x38);
        lVar3 = *(longlong *)(lVar3 + 0x50);
        uVar4 = *puVar1 & 0x8000080000;
        bVar5 = uVar4 != 0;
      } while (lVar3 != 0);
      if (uVar4 != 0) {
LAB_1422be7e1:
        FObjectInstancingGraph::FObjectInstancingGraph
                  ((FObjectInstancingGraph *)local_128,InstanceTemplatesOnly);
        if (this->_padding_ == 0) {
          UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
        }
        pUVar2 = (UObject *)this->_padding_;
        FObjectInstancingGraph::AddNewObject((FObjectInstancingGraph *)local_128,param_1,pUVar2);
        UStruct::InstanceSubobjectTemplates
                  ((UStruct *)this,(TNotNull<void_*>)param_1,pUVar2,(UStruct *)0x0,
                   (TNotNull<UObject_*>)param_1,(FObjectInstancingGraph *)local_128);
        local_28 = 0;
        if (local_30 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_30);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_70);
        local_78 = 0;
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_c0);
        local_c8 = 0;
        if (local_d0 != (void *)0x0) {
          FMemory::Free(local_d0);
        }
        TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)(local_128 + 0x18));
      }
    }
  }
  CallInitInstanceFunctions(this,param_1,(FObjectInstancingGraph *)0x0);
  AddSessionVars(this,param_1);
  return;
}

// PreSave @ 1422be900

void __thiscall UVerseClass::PreSave(UVerseClass *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res10 [3];
  
  local_res10[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res10[0] + 0x9c) = *(int *)(local_res10[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res10);
  return;
}

// PreloadChildren @ 1422be990

void __thiscall UVerseClass::PreloadChildren(UVerseClass *this,FArchive *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  for (lVar2 = this->_padding_; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x28)) {
    pUVar3 = Z_Construct_UClass_UFunction_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,lVar2);
    }
  }
  return;
}

// RenameDefaultSubobjects @ 1422bebb0

void __cdecl UVerseClass::RenameDefaultSubobjects(UObject *param_1)

{
  undefined1 local_res8 [32];
  FString local_28;
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res8;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UVerseClass::RenameDefaultSubobjects'::__l2::<lambda_1>,void,UObject_*,FString_const_&>
             ::Call;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  VerseClassPrivate::TraverseSubobjectsInternal
            (param_1,param_1,*(UStruct **)&param_1->field_0x10,&local_28,
             (TFunctionRef<void___cdecl(UObject_*,FString_const_&)> *)&local_18,None);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ResetUHTNative @ 1422bed20

FStaleClassInfo * __thiscall
UVerseClass::ResetUHTNative(UVerseClass *this,FStaleClassInfo *__return_storage_ptr__)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  FStaleClassInfo *pFVar19;
  
  if ((this->SolClassFlags & 0x10) == 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsUHTNative()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                        ,0x593,L"");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      pFVar19 = (FStaleClassInfo *)(*pcVar1)();
      return pFVar19;
    }
  }
  (__return_storage_ptr__->SourceClass).field0_0x0.DebugPtr = (UVerseClass *)0x0;
  *(undefined8 *)&__return_storage_ptr__->DisplayNameToUENameFunctionMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->FunctionMangledNames = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x48 = 0;
  (__return_storage_ptr__->TaskClasses).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TaskClasses).ArrayNum = 0;
  (__return_storage_ptr__->TaskClasses).ArrayMax = 0;
  (__return_storage_ptr__->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Children).ArrayNum = 0;
  (__return_storage_ptr__->Children).ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (__return_storage_ptr__->SourceClass).field0_0x0.DebugPtr = this;
  uVar2 = *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x8;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->DisplayNameToUENameFunctionMap;
  uVar4 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x8;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x10;
  uVar6 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x18;
  uVar7 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x20;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x28;
  uVar9 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x30;
  uVar10 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x38;
  uVar11 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x40;
  uVar12 = *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x48;
  *(undefined8 *)&__return_storage_ptr__->DisplayNameToUENameFunctionMap =
       *(undefined8 *)&this->DisplayNameToUENameFunctionMap;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x10 =
       *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x20 =
       *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x20;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x30 =
       *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x30;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x48;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x40 =
       *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x40;
  *(undefined8 *)&(__return_storage_ptr__->DisplayNameToUENameFunctionMap).field_0x48 = uVar2;
  *(undefined8 *)&this->DisplayNameToUENameFunctionMap = uVar3;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x8 = uVar4;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x10 = uVar5;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x18 = uVar6;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x20 = uVar7;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x28 = uVar8;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x30 = uVar9;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x38 = uVar10;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x40 = uVar11;
  *(undefined8 *)&(this->DisplayNameToUENameFunctionMap).field_0x48 = uVar12;
  uVar2 = *(undefined8 *)&(this->FunctionMangledNames).field_0x8;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->FunctionMangledNames;
  uVar4 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x8;
  uVar5 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x10;
  uVar6 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x18;
  uVar7 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x20;
  uVar8 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x28;
  uVar9 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x30;
  uVar10 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x38;
  uVar11 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x40;
  uVar12 = *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x48;
  *(undefined8 *)&__return_storage_ptr__->FunctionMangledNames =
       *(undefined8 *)&this->FunctionMangledNames;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->FunctionMangledNames).field_0x18;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x10 =
       *(undefined8 *)&(this->FunctionMangledNames).field_0x10;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&(this->FunctionMangledNames).field_0x28;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x20 =
       *(undefined8 *)&(this->FunctionMangledNames).field_0x20;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&(this->FunctionMangledNames).field_0x38;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x30 =
       *(undefined8 *)&(this->FunctionMangledNames).field_0x30;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&(this->FunctionMangledNames).field_0x48;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x40 =
       *(undefined8 *)&(this->FunctionMangledNames).field_0x40;
  *(undefined8 *)&(__return_storage_ptr__->FunctionMangledNames).field_0x48 = uVar2;
  *(undefined8 *)&this->FunctionMangledNames = uVar3;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x8 = uVar4;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x10 = uVar5;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x18 = uVar6;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x20 = uVar7;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x28 = uVar8;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x30 = uVar9;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x38 = uVar10;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x40 = uVar11;
  *(undefined8 *)&(this->FunctionMangledNames).field_0x48 = uVar12;
  iVar14 = (this->TaskClasses).ArrayNum;
  iVar15 = (this->TaskClasses).ArrayMax;
  pFVar13 = (__return_storage_ptr__->TaskClasses).AllocatorInstance.Data;
  iVar16 = (__return_storage_ptr__->TaskClasses).ArrayNum;
  iVar17 = (__return_storage_ptr__->TaskClasses).ArrayMax;
  (__return_storage_ptr__->TaskClasses).AllocatorInstance.Data =
       (this->TaskClasses).AllocatorInstance.Data;
  (__return_storage_ptr__->TaskClasses).ArrayNum = iVar14;
  (__return_storage_ptr__->TaskClasses).ArrayMax = iVar15;
  (this->TaskClasses).AllocatorInstance.Data = pFVar13;
  (this->TaskClasses).ArrayNum = iVar16;
  (this->TaskClasses).ArrayMax = iVar17;
  StripVerseGeneratedFunctions(this,&__return_storage_ptr__->Children);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUVerseClass @ 1422bf250

void __cdecl UVerseClass::StaticRegisterNativesUVerseClass(void)

{
  return;
}

// StripVerseGeneratedFunctions @ 1422bf290

void __thiscall
UVerseClass::StripVerseGeneratedFunctions
          (UVerseClass *this,
          TArray<TKeyValuePair<FName,TObjectPtr<UField>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  FName FVar3;
  FName FVar4;
  undefined8 uVar5;
  code *pcVar6;
  UObject *pUVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  FScriptContainerElement *pFVar12;
  FName local_res8;
  FName local_res18 [2];
  
  pUVar2 = (UObject *)this->_padding_;
  pUVar1 = (UObject *)&this->_padding_;
  *(longlong *)pUVar1 = 0;
  if ((pUVar1 == (UObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ListStartPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\LinkedListBuilder.h"
                         ,0x3d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)pUVar1);
  }
  while (pUVar7 = pUVar2, pUVar7 != (UObject *)0x0) {
    pUVar2 = *(UObject **)(pUVar7 + 1);
    *(undefined8 *)(pUVar7 + 1) = 0;
    pUVar11 = UVerseFunction::StaticClass();
    iVar10 = (int)pUVar11->_padding_;
    if ((((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar11->_padding_)) || (pUVar7 == (UObject *)0x0)) ||
       ((~*(byte *)(pUVar7 + 6) & 1) == 0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      if (*(UObject **)pUVar1 != pUVar7) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        *(UObject **)pUVar1 = pUVar7;
      }
      pUVar1 = pUVar7 + 1;
    }
    else {
      pUVar11 = Z_Construct_UClass_UFunction_NoRegister();
      iVar10 = (int)pUVar11->_padding_;
      if ((iVar10 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar10 * 8) ==
          &pUVar11->_padding_)) {
        AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
        FVar3.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        FVar3.Number = *(uint *)&pUVar7->field_0x1c;
        local_res8 = FVar3;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          uVar9 = ::GetTypeHash(FVar3.ComparisonIndex);
          TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,TObjectPtr<UFunction>_>,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UFunction>,0>,FDefaultSetAllocator>
                               *)&this->_padding_,FVar3.Number + uVar9,&local_res8);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
        AcquireSRWLockExclusive((PSRWLOCK)&this->_padding_);
        FVar4.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
        FVar4.Number = *(uint *)&pUVar7->field_0x1c;
        local_res18[0] = FVar4;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          uVar9 = ::GetTypeHash(FVar4.ComparisonIndex);
          TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,UFunction_*>,TDefaultMapHashableKeyFuncs<FName,UFunction_*,0>,FDefaultSetAllocator>
                               *)&this->_padding_,FVar4.Number + uVar9,local_res18);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)&this->_padding_);
        uVar5 = *(undefined8 *)&pUVar7->field_0x18;
        Verse::Names::MakeTypeDead(pUVar7,*(UObject **)&pUVar7->field_0x20);
        if (param_1 !=
            (TArray<TKeyValuePair<FName,TObjectPtr<UField>_>,TSizedDefaultAllocator<32>_> *)0x0) {
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          pFVar12 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          param_1->ArrayNum = iVar10 + 1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          *(undefined8 *)pFVar12 = uVar5;
          *(UObject **)(pFVar12 + 8) = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
        }
      }
    }
  }
  return;
}

// ValidateSubobjectArchetypes @ 1422c3e30

bool __cdecl UVerseClass::ValidateSubobjectArchetypes(UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_res8 [8];
  FString local_38;
  UObject *local_28;
  undefined1 *local_20;
  code *local_18;
  UObject **local_10;
  
  local_res8[0] = 1;
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMVerseClass.cpp"
                       ,0x432,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_2 != (UObject *)0x0) {
    local_20 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UVerseClass::ValidateSubobjectArchetypes'::__l12::<lambda_1>,void,UObject_*,FString_const_&>
               ::Call;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_28 = param_2;
    VerseClassPrivate::TraverseSubobjectsInternal
              (param_1,param_1,*(UStruct **)&param_1->field_0x10,&local_38,
               (TFunctionRef<void___cdecl(UObject_*,FString_const_&)> *)&local_18,None);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return (bool)local_res8[0];
}

// operator() @ 150489c00

bool __thiscall `UVerseClass::BindVerseCoroClass'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1783412198169642473>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<1783412198169642473>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150489d00

bool __thiscall `UVerseClass::BindVerseFunction'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<1783412198169642444>);
  if (bVar2) {
    local_res10 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1783412198169642444>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150489d9f;
    }
  }
  bVar2 = false;
LAB_150489d9f:
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

// operator() @ 150489e90

bool __thiscall `UVerseClass::Link'::__l29::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1783412198169641157>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1783412198169641157>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150489ef7;
    }
  }
  bVar2 = false;
LAB_150489ef7:
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

