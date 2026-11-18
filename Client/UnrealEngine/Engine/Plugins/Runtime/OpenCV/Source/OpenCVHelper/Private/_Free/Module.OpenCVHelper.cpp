// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVHelper
// Functions: 78

// UnitVectors'' @ 1413cb0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FOpenCVHelper::UnitVectors__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  
  uVar6 = _UNK_1508ffb28;
  uVar5 = ___xmm_bff00000000000000000000000000000;
  uVar4 = _UNK_15076c6f8;
  uVar3 = ___xmm_bff00000000000003ff0000000000000;
  uVar2 = _UNK_150689518;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,0,&FOpenCVHelper::UnitVectors.AllocatorInstance,6,
             &FOpenCVHelper::UnitVectors.ArrayMax);
  FVar7 = FOpenCVHelper::UnitVectors.AllocatorInstance;
  *(undefined8 *)FOpenCVHelper::UnitVectors.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(FVar7.Data + 8) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x10) = 0;
  *(undefined8 *)(FVar7.Data + 0x18) = 0;
  *(undefined8 *)(FVar7.Data + 0x20) = uVar1;
  *(undefined8 *)(FVar7.Data + 0x28) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x30) = 0;
  *(undefined8 *)(FVar7.Data + 0x38) = 0;
  *(undefined8 *)(FVar7.Data + 0x40) = uVar3;
  *(undefined8 *)(FVar7.Data + 0x48) = uVar4;
  *(undefined8 *)(FVar7.Data + 0x50) = 0;
  *(undefined8 *)(FVar7.Data + 0x58) = 0;
  *(undefined8 *)(FVar7.Data + 0x60) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x68) = uVar6;
  *(undefined8 *)(FVar7.Data + 0x70) = 0;
  *(undefined8 *)(FVar7.Data + 0x78) = 0;
  *(undefined8 *)(FVar7.Data + 0x80) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x88) = uVar6;
  atexit(`dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__);
  return;
}

// `dynamic_initializer_for_'LogOpenCVBlueprintFunctionLibrary'' @ 1413cb1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenCVBlueprintFunctionLibrary__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary,
             L"LogOpenCVBlueprintFunctionLibrary",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenCVBlueprintFunctionLibrary__);
  return;
}

// `dynamic_initializer_for_'LogOpenCVHelper'' @ 1413cb210

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenCVHelper__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenCVHelper,L"LogOpenCVHelper",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenCVHelper__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenCVHelper'' @ 1413cb250

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenCVHelper__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenCVHelper";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenCVHelper",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FOpenCVHelperModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'UnrealAllocationsSet'' @ 1413cb2a0

void __cdecl OpenCVHelperModule::_dynamic_initializer_for__UnrealAllocationsSet__(void)

{
  atexit(_dynamic_atexit_destructor_for__UnrealAllocationsSet__);
  return;
}

// `dynamic_initializer_for_'UnrealAllocationsSetMutex'' @ 1413cb2c0

void __cdecl OpenCVHelperModule::_dynamic_initializer_for__UnrealAllocationsSetMutex__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex,4000);
  atexit(_dynamic_atexit_destructor_for__UnrealAllocationsSetMutex__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h__Script_OpenCVHelper_597637717'' @ 1413cb2f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h__Script_OpenCVHelper_597637717__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenCVHelper",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h__Script_OpenCVHelper_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h__Script_OpenCVHelper_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVBlueprintFunctionLibrary_h__Script_OpenCVHelper_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h__Script_OpenCVHelper_3422301893'' @ 1413cb340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h__Script_OpenCVHelper_3422301893__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenCVHelper",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h__Script_OpenCVHelper_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h__Script_OpenCVHelper_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OpenCVHelper'' @ 1413cb390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OpenCVHelper__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xa8ceeb5;
  local_res8[0].DeclarationsHash = 0x41b18108;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OpenCVHelper,L"/Script/OpenCVHelper",
             &Z_Registration_Info_UPackage__Script_OpenCVHelper,local_res8);
  return;
}

// Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary @ 14d36b630

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.OuterSingleton;
}

// Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary @ 14d36b670

UEnum * __cdecl Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary(void)

{
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton,
               &Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionary.InnerSingleton;
}

// Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize @ 14d36b6b0

UEnum * __cdecl Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize(void)

{
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton,
               &Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.InnerSingleton;
}

// Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker @ 14d36b6f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.InnerSingleton,
               &Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenCVArucoDetectedMarker.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase @ 14d36b770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.InnerSingleton
               ,&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOpenCVLensDistortionParametersBase.InnerSingleton;
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

// EOpenCVArucoDictionary_StaticEnum @ 14d36b870

UEnum * __cdecl EOpenCVArucoDictionary_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary,(UObject *)pUVar1,
                       L"EOpenCVArucoDictionary");
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton;
}

// EOpenCVArucoDictionarySize_StaticEnum @ 14d36b910

UEnum * __cdecl EOpenCVArucoDictionarySize_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize,(UObject *)pUVar1,
                       L"EOpenCVArucoDictionarySize");
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton;
}

// NewStructOps @ 14d36b950

void * __cdecl Z_Construct_UScriptStruct_FOpenCVArucoDetectedMarker_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenCVArucoDetectedMarker,&UE::CoreUObject::Private::Construct<FOpenCVArucoDetectedMarker>,&UE::CoreUObject::Private::ConstructForTests<FOpenCVArucoDetectedMarker>,&UE::CoreUObject::Private::Destruct<FOpenCVArucoDetectedMarker>,&UE::CoreUObject::Private::Copy<FOpenCVArucoDetectedMarker>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bDebugDrawMarkers_SetBit @ 14d36b990

void __cdecl
Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::
NewProp_bDebugDrawMarkers_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}

// NewProp_bEstimatePose_SetBit @ 14d36b9a0

void __cdecl
Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics::
NewProp_bEstimatePose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers @ 14d36ba90

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_OpenCVHelper @ 14d36bbf0

UPackage * __cdecl Z_Construct_UPackage__Script_OpenCVHelper(void)

{
  if (Z_Registration_Info_UPackage__Script_OpenCVHelper.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OpenCVHelper.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OpenCVHelper.OuterSingleton;
}

// NewProp_bDebugDrawCorners_SetBit @ 14d36bc30

void __cdecl
Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics::
NewProp_bDebugDrawCorners_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners @ 14d36bc40

UFunction * __cdecl
Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EArucoDictionary_StaticEnum @ 14d36bdc0

UEnum * __cdecl EArucoDictionary_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EArucoDictionary,(UObject *)pUVar1,
                       L"EArucoDictionary");
  }
  return Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton;
}

// NewProp_bUseFisheyeModel_SetBit @ 14d36be00

void __cdecl
Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::
NewProp_bUseFisheyeModel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 1;
  return;
}

// NewStructOps @ 14d36be10

void * __cdecl
Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOpenCVLensDistortionParametersBase,&UE::CoreUObject::Private::Construct<FOpenCVLensDistortionParametersBase>,&UE::CoreUObject::Private::ConstructForTests<FOpenCVLensDistortionParametersBase>,&UE::CoreUObject::Private::Destruct<FOpenCVLensDistortionParametersBase>,&UE::CoreUObject::Private::Copy<FOpenCVLensDistortionParametersBase>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// _InputArray<int> @ 14d36be50

_InputArray * __thiscall
cv::_InputArray::_InputArray<int>(_InputArray *this,vector<int,std::allocator<int>_> *param_1)

{
  this->flags = -0x7efcfffc;
  (this->sz).width = 0;
  (this->sz).height = 0;
  this->obj = param_1;
  return this;
}

// _OutputArray<int> @ 14d36be70

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<int>(_OutputArray *this,vector<int,std::allocator<int>_> *param_1)

{
  *(undefined4 *)this = 0x82030004;
  *(undefined8 *)&this->field_0x10 = 0;
  *(vector<int,std::allocator<int>_> **)&this->field_0x8 = param_1;
  return this;
}

// _OutputArray<float,6,1> @ 14d36be90

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<float,6,1>(_OutputArray *this,Matx<float,6,1> *param_1)

{
  *(undefined1 **)&this->field_0x10 = &DAT_600000001;
  *(undefined4 *)this = 0xc2020005;
  *(Matx<float,6,1> **)&this->field_0x8 = param_1;
  return this;
}

// _InputArray<double,3,1> @ 14d36bec0

_InputArray * __thiscall
cv::_InputArray::_InputArray<double,3,1>(_InputArray *this,Matx<double,3,1> *param_1)

{
  (this->sz).width = 1;
  (this->sz).height = 3;
  this->flags = -0x3efdfffa;
  this->obj = param_1;
  return this;
}

// _OutputArray<double> @ 14d36bef0

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<double>(_OutputArray *this,Mat_<double> *param_1)

{
  *(undefined4 *)this = 0x82010006;
  *(undefined8 *)&this->field_0x10 = 0;
  *(Mat_<double> **)&this->field_0x8 = param_1;
  return this;
}

// _InputArray<cv::Point3_<float>_> @ 14d36bf10

_InputArray * __thiscall
cv::_InputArray::_InputArray<cv::Point3_<float>_>
          (_InputArray *this,
          vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *param_1)

{
  this->flags = -0x7efcffeb;
  (this->sz).width = 0;
  (this->sz).height = 0;
  this->obj = param_1;
  return this;
}

// _InputArray<cv::Point_<float>_> @ 14d36bf30

_InputArray * __thiscall
cv::_InputArray::_InputArray<cv::Point_<float>_>
          (_InputArray *this,vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1)

{
  this->flags = -0x7efcfff3;
  (this->sz).width = 0;
  (this->sz).height = 0;
  this->obj = param_1;
  return this;
}

// _InputArray<cv::Point_<float>_> @ 14d36bf50

_InputArray * __thiscall
cv::_InputArray::_InputArray<cv::Point_<float>_>
          (_InputArray *this,
          vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
          *param_1)

{
  this->flags = -0x7efbfff3;
  (this->sz).width = 0;
  (this->sz).height = 0;
  this->obj = param_1;
  return this;
}

// _InputOutputArray<cv::Point_<float>_> @ 14d36bf70

_InputOutputArray * __thiscall
cv::_InputOutputArray::_InputOutputArray<cv::Point_<float>_>
          (_InputOutputArray *this,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1)

{
  *(undefined4 *)this = 0x8303000d;
  *(undefined8 *)&this->field_0x10 = 0;
  *(vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> **)&this->field_0x8 = param_1;
  return this;
}

// _OutputArray<cv::Point_<float>_> @ 14d36bf90

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<cv::Point_<float>_>
          (_OutputArray *this,vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1
          )

{
  *(undefined4 *)this = 0x8203000d;
  *(undefined8 *)&this->field_0x10 = 0;
  *(vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> **)&this->field_0x8 = param_1;
  return this;
}

// _OutputArray<cv::Point_<float>_> @ 14d36bfb0

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<cv::Point_<float>_>
          (_OutputArray *this,
          vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
          *param_1)

{
  *(undefined4 *)this = 0x8204000d;
  *(undefined8 *)&this->field_0x10 = 0;
  *(vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
    **)&this->field_0x8 = param_1;
  return this;
}

// _OutputArray<cv::Vec<double,3>_> @ 14d36bfd0

_OutputArray * __thiscall
cv::_OutputArray::_OutputArray<cv::Vec<double,3>_>
          (_OutputArray *this,vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> *param_1
          )

{
  *(undefined4 *)this = 0x82030016;
  *(undefined8 *)&this->field_0x10 = 0;
  *(vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> **)&this->field_0x8 = param_1;
  return this;
}

// operator,<double> @ 14d36bff0

MatCommaInitializer_<double> * __thiscall
cv::MatCommaInitializer_<double>::operator_<double>
          (MatCommaInitializer_<double> *this,double param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  **(double **)&(this->it).field_0x10 = param_1;
  if (*(longlong *)&this->it != 0) {
    lVar1 = *(longlong *)&(this->it).field_0x10;
    uVar2 = *(longlong *)&(this->it).field_0x8 + lVar1;
    *(ulonglong *)&(this->it).field_0x10 = uVar2;
    if (*(ulonglong *)&(this->it).field_0x20 <= uVar2) {
      *(longlong *)&(this->it).field_0x10 = lVar1;
      MatConstIterator::seek((MatConstIterator *)this,1,true);
    }
  }
  return this;
}

// DestructItems<FOpenCVArucoDetectedMarker,int> @ 14d36c040

void __cdecl
DestructItems<FOpenCVArucoDetectedMarker,int>(FOpenCVArucoDetectedMarker *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Corners;
    do {
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// InternalConstructor<UOpenCVBlueprintFunctionLibrary> @ 14d36c080

void __cdecl InternalConstructor<UOpenCVBlueprintFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UOpenCVBlueprintFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UOpenCVBlueprintFunctionLibrary> @ 14d36c0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UOpenCVBlueprintFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenCVBlueprintFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenCVBlueprintFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// Reverse<UE::Math::TVector2<float>_> @ 14d36c160

void __cdecl AlgoImpl::Reverse<UE::Math::TVector2<float>_>(TVector2<float> *param_1,int param_2)

{
  TVector2<float>_u_0 TVar1;
  TVector2<float>_u_0 *pTVar2;
  longlong lVar3;
  
  if (0 < param_2 / 2) {
    lVar3 = 0;
    pTVar2 = &param_1[param_2 + -1].field0_0x0;
    do {
      TVar1 = param_1[lVar3].field0_0x0;
      param_1[lVar3].field0_0x0 = *pTVar2;
      lVar3 = lVar3 + 1;
      *pTVar2 = TVar1;
      pTVar2 = pTVar2 + -1;
    } while (lVar3 < param_2 / 2);
  }
  return;
}

// StaticEnum<enum_EArucoDictionary> @ 14d36c1c0

UEnum * __cdecl StaticEnum<enum_EArucoDictionary>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EArucoDictionary,(UObject *)pUVar1,
                       L"EArucoDictionary");
  }
  return Z_Registration_Info_UEnum_EArucoDictionary.OuterSingleton;
}

// StaticEnum<enum_EOpenCVArucoDictionary> @ 14d36c200

UEnum * __cdecl StaticEnum<enum_EOpenCVArucoDictionary>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionary,(UObject *)pUVar1,
                       L"EOpenCVArucoDictionary");
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionary.OuterSingleton;
}

// StaticEnum<enum_EOpenCVArucoDictionarySize> @ 14d36c240

UEnum * __cdecl StaticEnum<enum_EOpenCVArucoDictionarySize>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OpenCVHelper();
    Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_OpenCVHelper_EOpenCVArucoDictionarySize,(UObject *)pUVar1,
                       L"EOpenCVArucoDictionarySize");
  }
  return Z_Registration_Info_UEnum_EOpenCVArucoDictionarySize.OuterSingleton;
}

// _Copy_memmove<cv::Point_<float>_*,cv::Point_<float>_*> @ 14d36c280

Point_<float> * __cdecl
std::_Copy_memmove<cv::Point_<float>_*,cv::Point_<float>_*>
          (Point_<float> *param_1,Point_<float> *param_2,Point_<float> *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Point_<float> *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<cv::Point_<float>_*> @ 14d36c2c0

Point_<float> * __cdecl
std::_Copy_memmove_tail<cv::Point_<float>_*>
          (char *param_1,Point_<float> *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (Point_<float> *)((longlong)&param_2->x + param_3);
}

// _Emplace_reallocate<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&> @ 14d36c2f0

vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> * __thiscall
std::
vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
::_Emplace_reallocate<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
          (vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
           *this,vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar3;
  longlong lVar4;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar5;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar6;
  longlong lVar7;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar8;
  ulonglong uVar9;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar10;
  
  pvVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar7 = ((longlong)param_1 - (longlong)pvVar3) / 6 +
          ((longlong)param_1 - (longlong)pvVar3 >> 0x3f);
  lVar4 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pvVar3) / 0x18;
  if (lVar4 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar4 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pvVar3) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar9 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0xaaaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pvVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x18);
  pvVar3 = pvVar5 + ((lVar7 >> 2) - (lVar7 >> 0x3f));
  _Default_allocator_traits<std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  ::
  construct<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
            ((allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_> *)this,
             pvVar3,param_2);
  pvVar8 = (this->_Mypair)._Myval2._Mylast;
  pvVar6 = (this->_Mypair)._Myval2._Myfirst;
  pvVar10 = pvVar5;
  if (param_1 != pvVar8) {
    _Uninitialized_move<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_*,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
              (pvVar6,param_1,pvVar5,
               (allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_> *)
               this);
    pvVar8 = (this->_Mypair)._Myval2._Mylast;
    pvVar6 = param_1;
    pvVar10 = pvVar3 + 1;
  }
  _Uninitialized_move<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_*,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            (pvVar6,pvVar8,pvVar10,
             (allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_> *)this)
  ;
  _Change_array(this,pvVar5,uVar1,uVar9);
  return pvVar3;
}

// _Uninitialized_move<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_*,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_> @ 14d36c460

vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> * __cdecl
std::
_Uninitialized_move<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_*,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
          (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_2,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_3,
          allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_> *param_4)

{
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar1;
  Point_<float> *pPVar2;
  Point_<float> *pPVar3;
  Point_<float> *pPVar4;
  Point_<float> **ppPVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar6 = (longlong)param_3 - (longlong)param_1;
    ppPVar5 = &(param_1->_Mypair)._Myval2._Mylast;
    do {
      pPVar2 = ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar5 + -1))->_Myfirst;
      pPVar3 = ppPVar5[1];
      pPVar4 = *ppPVar5;
      ppPVar5[1] = (Point_<float> *)0x0;
      *ppPVar5 = (Point_<float> *)0x0;
      ((_Vector_val<std::_Simple_types<cv::Point_<float>_>_> *)(ppPVar5 + -1))->_Myfirst =
           (Point_<float> *)0x0;
      (param_3->_Mypair)._Myval2._Myfirst = pPVar2;
      param_3 = param_3 + 1;
      *(Point_<float> **)(lVar6 + (longlong)ppPVar5) = pPVar4;
      *(Point_<float> **)(lVar6 + 8 + (longlong)ppPVar5) = pPVar3;
      pvVar1 = (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)(ppPVar5 + 2);
      ppPVar5 = ppPVar5 + 3;
    } while (pvVar1 != param_2);
  }
  return param_3;
}

// at<double> @ 14d36c4d0

double * __thiscall cv::Mat::at<double>(Mat *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((this->flags & 0x4000U) == 0) && (piVar1 = (this->size).p, *piVar1 != 1)) {
    if (piVar1[1] == 1) {
      return (double *)(this->data + (longlong)param_1 * *(this->step).p);
    }
    iVar2 = param_1 / this->cols;
    return (double *)
           (this->data +
           (longlong)iVar2 * *(this->step).p + (longlong)(param_1 - iVar2 * this->cols) * 8);
  }
  return (double *)(this->data + (longlong)param_1 * 8);
}

// at<double> @ 14d36c540

double * __thiscall cv::Mat::at<double>(Mat *this,int param_1,int param_2)

{
  return (double *)(this->data + (longlong)param_1 * *(this->step).p + (longlong)param_2 * 8);
}

// construct<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&> @ 14d36c560

void __cdecl
std::
_Default_allocator_traits<std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
::
construct<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_const_&>
          (allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_> *param_1,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_2,
          vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_3)

{
  Point_<float> *_Src;
  Point_<float> *_Dst;
  ulonglong uVar1;
  size_t _Size;
  
  (param_2->_Mypair)._Myval2._Myfirst = (Point_<float> *)0x0;
  (param_2->_Mypair)._Myval2._Mylast = (Point_<float> *)0x0;
  (param_2->_Mypair)._Myval2._Myend = (Point_<float> *)0x0;
  uVar1 = (longlong)(param_3->_Mypair)._Myval2._Mylast -
          (longlong)(param_3->_Mypair)._Myval2._Myfirst >> 3;
  if (uVar1 != 0) {
    if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Xlength();
    }
    _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar1 * 8);
    (param_2->_Mypair)._Myval2._Myfirst = _Dst;
    (param_2->_Mypair)._Myval2._Mylast = _Dst;
    (param_2->_Mypair)._Myval2._Myend = _Dst + uVar1;
    _Src = (param_3->_Mypair)._Myval2._Myfirst;
    _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Src;
    memmove(_Dst,_Src,_Size);
    (param_2->_Mypair)._Myval2._Mylast = _Dst + ((longlong)_Size >> 3);
  }
  return;
}

// basic_string<char,std::char_traits<char>,std::allocator<char>_> @ 14d36c610

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,char *param_1)

{
  size_t sVar1;
  
  (this->_Mypair)._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->_Mypair)._Myval2._Bx + 8) = 0;
  (this->_Mypair)._Myval2._Mysize = 0;
  (this->_Mypair)._Myval2._Myres = 0;
  sVar1 = strlen(param_1);
  _Construct<1,char_const_*>(this,param_1,sVar1);
  return this;
}

// ~vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> @ 14d36c7b0

void __thiscall
std::vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>::
~vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_>
          (vector<cv::Vec<double,3>,std::allocator<cv::Vec<double,3>_>_> *this)

{
  Vec<double,3> *pVVar1;
  Vec<double,3> *pVVar2;
  ulong64 uVar3;
  
  pVVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pVVar1 != (Vec<double,3> *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pVVar1) / 0x18) * 0x18;
    pVVar2 = pVVar1;
    if (0xfff < uVar3) {
      pVVar2 = *(Vec<double,3> **)&pVVar1[-1].field_0x10;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pVVar1 + (-8 - (longlong)pVVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pVVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (Vec<double,3> *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Vec<double,3> *)0x0;
    (this->_Mypair)._Myval2._Myend = (Vec<double,3> *)0x0;
  }
  return;
}

// ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_> @ 14d36c850

void __thiscall
std::
vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
::
~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
          (vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
           *this)

{
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar1;
  Point_<float> *pPVar2;
  ulong64 uVar3;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *this_00;
  Point_<float> *pPVar4;
  
  this_00 = (this->_Mypair)._Myval2._Myfirst;
  if (this_00 != (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0) {
    pvVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; this_00 != pvVar1; this_00 = this_00 + 1) {
      vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Tidy(this_00);
    }
    pPVar2 = (Point_<float> *)(this->_Mypair)._Myval2._Myfirst;
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar2) / 0x18) * 0x18;
    pPVar4 = pPVar2;
    if (0xfff < uVar3) {
      pPVar4 = *(Point_<float> **)(pPVar2 + -1);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar2 + (-8 - (longlong)pPVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar4,uVar3);
    (this->_Mypair)._Myval2._Myfirst =
         (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
    (this->_Mypair)._Myval2._Mylast =
         (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
    (this->_Mypair)._Myval2._Myend =
         (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0;
  }
  return;
}

// operator= @ 14d36c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

Mat_<double> * __thiscall cv::Mat_<double>::operator=(Mat_<double> *this,Mat *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  Mat *pMVar4;
  Mat_<double> *pMVar5;
  undefined1 auStackY_128 [32];
  _Bxty local_f8;
  undefined8 local_e8;
  Mat local_d8;
  Mat local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar3 = cv::Mat::empty(param_1);
  if (bVar3) {
    cv::Mat::release((Mat *)this);
    *(uint *)this = (*(uint *)this & 0xfffff000) + 6;
  }
  else {
    uVar1 = param_1->flags;
    if ((uVar1 & 0xfff) == 6) {
      cv::Mat::operator=((Mat *)this,param_1);
    }
    else {
      local_f8._8_8_ = this;
      if (((byte)uVar1 & 7) == 6) {
        pMVar4 = cv::Mat::reshape(param_1,&local_78,1,param_1->dims,(int *)0x0);
        bVar3 = cv::Mat::empty(pMVar4);
        if (bVar3) {
          cv::Mat::release((Mat *)this);
          *(uint *)this = (*(uint *)this & 0xfffff000) + 6;
          cv::Mat::~Mat(&local_78);
        }
        else if ((pMVar4->flags & 0xfffU) == 6) {
          cv::Mat::operator=((Mat *)this,pMVar4);
          cv::Mat::~Mat(&local_78);
        }
        else if (((byte)pMVar4->flags & 7) == 6) {
          pMVar4 = cv::Mat::reshape(pMVar4,&local_d8,1,pMVar4->dims,(int *)0x0);
          cv::Mat::operator=((Mat *)this,pMVar4);
          cv::Mat::~Mat(&local_d8);
          cv::Mat::~Mat(&local_78);
        }
        else {
          local_e8 = 0;
          local_f8._0_4_ = 0x82010006;
          cv::Mat::convertTo(pMVar4,(_OutputArray *)&local_f8,6,__real_3ff0000000000000,0.0);
          cv::Mat::~Mat(&local_78);
        }
      }
      else {
        if (((uVar1 & 0xff8) != 0) && (bVar3 = cv::Mat::empty(param_1), !bVar3)) {
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>
                    ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8,
                     "DataType<_Tp>::channels == m.channels() || m.empty()");
          error(-0xd7,(basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_f8,
                "cv::Mat_<double>::operator =",
                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\OpenCV\\Source\\ThirdParty\\OpenCV\\include\\opencv2\\core\\mat.inl.hpp"
                ,0x5a2);
          pcVar2 = (code *)swi(3);
          pMVar5 = (Mat_<double> *)(*pcVar2)();
          return pMVar5;
        }
        local_f8._0_4_ = 0x82010006;
        local_e8 = 0;
        cv::Mat::convertTo(param_1,(_OutputArray *)&local_f8,6,__real_3ff0000000000000,0.0);
      }
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d36cbb0

void * __thiscall
FOpenCVHelperModule::_scalar_deleting_destructor_(FOpenCVHelperModule *this,uint param_1)

{
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d36cbf0

void * __thiscall
IOpenCVHelperModule::_scalar_deleting_destructor_(IOpenCVHelperModule *this,uint param_1)

{
  *this = (IOpenCVHelperModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d36cc30

void * __thiscall
UOpenCVBlueprintFunctionLibrary::_scalar_deleting_destructor_
          (UOpenCVBlueprintFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UOpenCVBlueprintFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeOpenCVBlueprintFunctionLibrary @ 14d36f320

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVBlueprintFunctionLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVHelper @ 14d36f330

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVHelper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVHelper_init @ 14d36f340

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVHelper_init(void)

{
  return;
}

// UnrealFree @ 14d3736c0

void __cdecl OpenCVHelperModule::UnrealFree(void *param_1)

{
  int iVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  if (UnrealAllocationsSet.Elements._8_4_ != UnrealAllocationsSet.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x154d84318;
    if (UnrealAllocationsSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar3 = UnrealAllocationsSet.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)(UnrealAllocationsSet.HashSize - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                         4); iVar1 != -1;
        iVar1 = *(int *)(UnrealAllocationsSet.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(void **)(UnrealAllocationsSet.Elements._0_8_ + (longlong)iVar1 * 0x10) == param_1) {
        TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Remove
                  (&UnrealAllocationsSet,param_1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
        FMemory::Free(param_1);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d373762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
  return;
}

// UnrealMalloc @ 14d3737a0

void * __cdecl OpenCVHelperModule::UnrealMalloc(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  void *local_res18;
  void *local_res20;
  
  pvVar1 = FMemory::Malloc(param_1,param_2);
  local_res20 = pvVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
  TSet<void_*,DefaultKeyFuncs<void_*,0>,FDefaultSetAllocator>::Emplace<void_*_const_&>
            (&UnrealAllocationsSet,&local_res18,(bool *)&local_res20);
  LeaveCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
  return pvVar1;
}

// Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister @ 14d373800

UClass * __cdecl Z_Construct_UClass_UOpenCVBlueprintFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVHelper",L"OpenCVBlueprintFunctionLibrary",
               &Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton,
               UOpenCVBlueprintFunctionLibrary::StaticRegisterNativesUOpenCVBlueprintFunctionLibrary
               ,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOpenCVBlueprintFunctionLibrary>,
               InternalVTableHelperCtorCaller<UOpenCVBlueprintFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVBlueprintFunctionLibrary.InnerSingleton;
}

// Z_Construct_UEnum_OpenCVHelper_EArucoDictionary @ 14d3738c0

UEnum * __cdecl Z_Construct_UEnum_OpenCVHelper_EArucoDictionary(void)

{
  if (Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton,
               &Z_Construct_UEnum_OpenCVHelper_EArucoDictionary_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EArucoDictionary.InnerSingleton;
}

// _Change_array @ 14d373900

void __thiscall
std::
vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
::_Change_array(vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
                *this,vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *param_1,
               ulong64 param_2,ulong64 param_3)

{
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *pvVar1;
  Point_<float> *pPVar2;
  ulong64 uVar3;
  vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *this_00;
  Point_<float> *pPVar4;
  
  this_00 = (this->_Mypair)._Myval2._Myfirst;
  if (this_00 != (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *)0x0) {
    pvVar1 = (this->_Mypair)._Myval2._Mylast;
    for (; this_00 != pvVar1; this_00 = this_00 + 1) {
      vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Tidy(this_00);
    }
    pPVar2 = (Point_<float> *)(this->_Mypair)._Myval2._Myfirst;
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar2) / 0x18) * 0x18;
    pPVar4 = pPVar2;
    if (0xfff < uVar3) {
      pPVar4 = *(Point_<float> **)(pPVar2 + -1);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar2 + (-8 - (longlong)pPVar4))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar4,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Tidy @ 14d373a00

void __thiscall
std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Tidy
          (vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_> *this)

{
  Point_<float> PVar1;
  Point_<float> PVar2;
  ulong64 uVar3;
  
  PVar1 = (Point_<float>)(this->_Mypair)._Myval2._Myfirst;
  if (PVar1 != (Point_<float>)0x0) {
    uVar3 = (longlong)(this->_Mypair)._Myval2._Myend - (longlong)PVar1 & 0xfffffffffffffff8;
    PVar2 = PVar1;
    if (0xfff < uVar3) {
      PVar2 = *(Point_<float> *)((longlong)PVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)PVar1 + (-8 - (longlong)PVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete((void *)PVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (Point_<float> *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Point_<float> *)0x0;
    (this->_Mypair)._Myval2._Myend = (Point_<float> *)0x0;
  }
  return;
}

// _Xlength @ 14d373a80

void __cdecl std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14d373aa0

void __cdecl
std::
vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// deallocate @ 14d373ac0

void __thiscall
std::allocator<cv::Point_<float>_>::deallocate
          (allocator<cv::Point_<float>_> *this,Point_<float> *param_1,ulong64 param_2)

{
  Point_<float> PVar1;
  ulonglong uVar2;
  
  uVar2 = param_2 * 8;
  PVar1 = (Point_<float>)param_1;
  if (0xfff < uVar2) {
    PVar1 = param_1[-1];
    uVar2 = uVar2 + 0x27;
    if (0x1f < (ulonglong)((longlong)param_1 + (-8 - (longlong)PVar1))) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  ::operator_delete((void *)PVar1,uVar2);
  return;
}

// IMPLEMENT_MODULE_OpenCVHelper @ 14d374080

void __cdecl IMPLEMENT_MODULE_OpenCVHelper(void)

{
  return;
}

// UnitVectors'' @ 150455de0

void __cdecl `dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOpenCVHelper::UnitVectors.AllocatorInstance.Data;
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogOpenCVBlueprintFunctionLibrary'' @ 150455e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenCVBlueprintFunctionLibrary__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenCVBlueprintFunctionLibrary);
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenCVHelper'' @ 150455e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenCVHelper__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenCVHelper);
  return;
}

// `dynamic_atexit_destructor_for_'UnrealAllocationsSet'' @ 150455e40

void __cdecl OpenCVHelperModule::_dynamic_atexit_destructor_for__UnrealAllocationsSet__(void)

{
  UnrealAllocationsSet.HashSize = 0;
  if (UnrealAllocationsSet.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)UnrealAllocationsSet.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&UnrealAllocationsSet.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'UnrealAllocationsSetMutex'' @ 150455e80

void __cdecl OpenCVHelperModule::_dynamic_atexit_destructor_for__UnrealAllocationsSetMutex__(void)

{
                    /* WARNING: Could not recover jumptable at 0x000150455e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&UnrealAllocationsSetMutex);
  return;
}

