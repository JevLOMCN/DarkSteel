// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TrackingAlignment
// Functions: 45

// UnitVectors'' @ 1413cb3d0

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

// `dynamic_initializer_for_'CVarHandEyeCalibrationSolveMethod'' @ 1413cb500

void __cdecl _dynamic_initializer_for__CVarHandEyeCalibrationSolveMethod__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarHandEyeCalibrationSolveMethod,L"TrackingAlignment.SolveMethod",
             &UE::TrackingAlignmentFunctionLibrary::HandEyeCalibrationSolveMethod,
             L"Set the OpenCV HandEye solve method to use when aligning tracking spaces.\n0 - TSAI. A New Technique for Fully Autonomous and Efficient 3D Robotics Hand / Eye Calibration @cite Tsai89.\n1 - PARK. Robot Sensor Calibration: Solving AX = XB on the Euclidean Group @cite Park94.\n2 - HORAUD. Hand-eye Calibration @cite Horaud95.\n3 - ANDREFF. On-line Hand-Eye Calibration @cite Andreff99.\n4 - DANIILIDIS. Hand-Eye Calibration Using Dual Quaternions @cite Daniilidis98."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarHandEyeCalibrationSolveMethod__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantTrackingAlignment'' @ 1413cb550

void __cdecl _dynamic_initializer_for__ModuleRegistrantTrackingAlignment__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "TrackingAlignment";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"TrackingAlignment",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentActors_h__Script_TrackingAlignment_1026917169'' @ 1413cb5a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentActors_h__Script_TrackingAlignment_1026917169__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TrackingAlignment",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentActors_h__Script_TrackingAlignment_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h__Script_TrackingAlignment_3155422716'' @ 1413cb5e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h__Script_TrackingAlignment_3155422716__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TrackingAlignment",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentBPLibrary_h__Script_TrackingAlignment_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h__Script_TrackingAlignment_3679664254'' @ 1413cb620

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h__Script_TrackingAlignment_3679664254__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TrackingAlignment",
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentCalibrationProfile_h__Script_TrackingAlignment_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentSample_h__Script_TrackingAlignment_873673175'' @ 1413cb660

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentSample_h__Script_TrackingAlignment_873673175__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/TrackingAlignment",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_TrackingAlignment_Private_TrackingAlignmentSample_h__Script_TrackingAlignment_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_TrackingAlignment'' @ 1413cb6a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_TrackingAlignment__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xaabba09f;
  local_res8[0].DeclarationsHash = 0xf3c9f504;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_TrackingAlignment,L"/Script/TrackingAlignment",
             &Z_Registration_Info_UPackage__Script_TrackingAlignment,local_res8);
  return;
}

// Z_Construct_UPackage__Script_TrackingAlignment @ 14d374360

UPackage * __cdecl Z_Construct_UPackage__Script_TrackingAlignment(void)

{
  if (Z_Registration_Info_UPackage__Script_TrackingAlignment.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_TrackingAlignment.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_TrackingAlignment.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTrackingAlignmentActors @ 14d3743e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackingAlignmentActors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackingAlignmentActors_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrackingAlignmentActors.InnerSingleton;
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

// NewStructOps @ 14d374460

void * __cdecl Z_Construct_UScriptStruct_FTrackingAlignmentActors_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackingAlignmentActors,&UE::CoreUObject::Private::Construct<FTrackingAlignmentActors>,&UE::CoreUObject::Private::ConstructForTests<FTrackingAlignmentActors>,&UE::CoreUObject::Private::Destruct<FTrackingAlignmentActors>,&UE::CoreUObject::Private::Copy<FTrackingAlignmentActors>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_NoRegister @ 14d374560

UClass * __cdecl Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentCalibrationProfile",
               &Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton,
               UTrackingAlignmentCalibrationProfile::
               StaticRegisterNativesUTrackingAlignmentCalibrationProfile,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentCalibrationProfile>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentCalibrationProfile>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.InnerSingleton;
}

// Z_Construct_UClass_UTrackingAlignmentFunctionLibrary @ 14d374620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTrackingAlignmentFunctionLibrary(void)

{
  if (Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.OuterSingleton,
               &Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d374660

void __cdecl
Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_FindAndUpdateOriginActor_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_FindAndUpdateOriginActor @ 14d374670

UFunction * __cdecl
Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_FindAndUpdateOriginActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_FindAndUpdateOriginActor_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetAlignedTrackerBOrigin @ 14d3746b0

UFunction * __cdecl
Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetAlignedTrackerBOrigin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetAlignedTrackerBOrigin_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetMinimumRequiredTrackerAligmentSampleCount @ 14d3746f0

UFunction * __cdecl
Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetMinimumRequiredTrackerAligmentSampleCount
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentFunctionLibrary_GetMinimumRequiredTrackerAligmentSampleCount_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UTrackingAlignmentCalibrationProfile @ 14d3749c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTrackingAlignmentCalibrationProfile(void)

{
  if (Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.OuterSingleton,
               &Z_Construct_UClass_UTrackingAlignmentCalibrationProfile_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentCalibrationProfile.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTrackingAlignmentSample @ 14d374a00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackingAlignmentSample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackingAlignmentSample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrackingAlignmentSample.InnerSingleton;
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

// NewProp_ReturnValue_SetBit @ 14d374a80

void __cdecl
Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_CaptureSample_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  return;
}

// Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_CaptureSample @ 14d374a90

UFunction * __cdecl Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_CaptureSample(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_CaptureSample_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_ClearSamples @ 14d374ad0

UFunction * __cdecl Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_ClearSamples(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_ClearSamples_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d374b10

void __cdecl
Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_RemoveSample_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_RemoveSample @ 14d374b20

UFunction * __cdecl Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_RemoveSample(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTrackingAlignmentCalibrationProfile_RemoveSample_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14d374b60

void * __cdecl Z_Construct_UScriptStruct_FTrackingAlignmentSample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackingAlignmentSample,&UE::CoreUObject::Private::Construct<FTrackingAlignmentSample>,&UE::CoreUObject::Private::ConstructForTests<FTrackingAlignmentSample>,&UE::CoreUObject::Private::Destruct<FTrackingAlignmentSample>,&UE::CoreUObject::Private::Copy<FTrackingAlignmentSample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// InternalConstructor<UTrackingAlignmentCalibrationProfile> @ 14d374ba0

void __cdecl InternalConstructor<UTrackingAlignmentCalibrationProfile>(FObjectInitializer *param_1)

{
  UPrimaryDataAsset *this;
  
  this = (UPrimaryDataAsset *)param_1->Obj;
  if (this != (UPrimaryDataAsset *)0x0) {
    UPrimaryDataAsset::UPrimaryDataAsset(this,param_1);
    *(undefined ***)this = &___7UTrackingAlignmentCalibrationProfile__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x10,0);
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    FUtf8String::Reset((FUtf8String *)&this[3].field_0x8,0);
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 4),0);
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UTrackingAlignmentFunctionLibrary> @ 14d374c80

void __cdecl InternalConstructor<UTrackingAlignmentFunctionLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UTrackingAlignmentFunctionLibrary__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UTrackingAlignmentCalibrationProfile> @ 14d374cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTrackingAlignmentCalibrationProfile>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimaryDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTrackingAlignmentCalibrationProfile::GetPrivateStaticClass();
  this = (UPrimaryDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimaryDataAsset *)0x0) {
    UPrimaryDataAsset::UPrimaryDataAsset(this,param_1);
    *(undefined ***)this = &___7UTrackingAlignmentCalibrationProfile__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[1].field_0x18,0);
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)(this + 2) = 0;
    FUtf8String::Reset((FUtf8String *)&this[2].field_0x10,0);
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    FUtf8String::Reset((FUtf8String *)&this[3].field_0x8,0);
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    FUtf8String::Reset((FUtf8String *)(this + 4),0);
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTrackingAlignmentFunctionLibrary> @ 14d374e00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTrackingAlignmentFunctionLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTrackingAlignmentFunctionLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTrackingAlignmentFunctionLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// _Emplace_reallocate<cv::Mat_const_&> @ 14d374eb0

Mat * __thiscall
std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Emplace_reallocate<cv::Mat_const_&>
          (vector<cv::Mat,std::allocator<cv::Mat>_> *this,Mat *param_1,Mat *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  Mat *pMVar4;
  Mat *pMVar5;
  Mat *this_00;
  longlong lVar6;
  ulong64 uVar7;
  Mat *pMVar8;
  ulonglong uVar9;
  Mat *pMVar10;
  
  pMVar8 = (this->_Mypair)._Myval2._Myfirst;
  lVar6 = ((longlong)param_1 - (longlong)pMVar8) / 6 +
          ((longlong)param_1 - (longlong)pMVar8 >> 0x3f);
  uVar9 = 0x2aaaaaaaaaaaaaa;
  lVar3 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pMVar8) / 0x60;
  if (lVar3 == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar3 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar8) / 0x60;
  if (uVar2 <= 0x2aaaaaaaaaaaaaa - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar9 = uVar1;
    if (uVar1 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x2aaaaaaaaaaaaaa < uVar9) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pMVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar9 * 0x60);
  this_00 = pMVar5 + ((lVar6 >> 4) - (lVar6 >> 0x3f));
  cv::Mat::Mat(this_00,param_2);
  pMVar8 = (this->_Mypair)._Myval2._Mylast;
  pMVar10 = (this->_Mypair)._Myval2._Myfirst;
  pMVar4 = pMVar5;
  if (param_1 == pMVar8) {
    for (; pMVar10 != pMVar8; pMVar10 = pMVar10 + 1) {
      cv::Mat::Mat(pMVar4,pMVar10);
      pMVar4 = pMVar4 + 1;
    }
  }
  else {
    for (; pMVar10 != param_1; pMVar10 = pMVar10 + 1) {
      cv::Mat::Mat(pMVar4,pMVar10);
      pMVar4 = pMVar4 + 1;
    }
    pMVar8 = (this->_Mypair)._Myval2._Mylast;
    pMVar10 = this_00;
    for (; param_1 != pMVar8; param_1 = param_1 + 1) {
      pMVar10 = pMVar10 + 1;
      cv::Mat::Mat(pMVar10,param_1);
    }
  }
  pMVar8 = (this->_Mypair)._Myval2._Myfirst;
  if (pMVar8 != (Mat *)0x0) {
    pMVar10 = (this->_Mypair)._Myval2._Mylast;
    for (; pMVar8 != pMVar10; pMVar8 = pMVar8 + 1) {
      cv::Mat::~Mat(pMVar8);
    }
    pMVar8 = (this->_Mypair)._Myval2._Myfirst;
    uVar7 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar8) / 0x60) * 0x60;
    pMVar10 = pMVar8;
    if (0xfff < uVar7) {
      pMVar10 = (Mat *)pMVar8[-1].step.buf[1];
      uVar7 = uVar7 + 0x27;
      if (0x1f < (ulonglong)((longlong)pMVar8 + (-8 - (longlong)pMVar10))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar10,uVar7);
  }
  (this->_Mypair)._Myval2._Myfirst = pMVar5;
  (this->_Mypair)._Myval2._Mylast = pMVar5 + uVar1;
  (this->_Mypair)._Myval2._Myend = pMVar5 + uVar9;
  return this_00;
}

// at<double> @ 14d375100

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

// at<double> @ 14d375170

double * __thiscall cv::Mat::at<double>(Mat *this,int param_1,int param_2)

{
  return (double *)(this->data + (longlong)param_1 * *(this->step).p + (longlong)param_2 * 8);
}

// ~vector<cv::Mat,std::allocator<cv::Mat>_> @ 14d375390

void __thiscall
std::vector<cv::Mat,std::allocator<cv::Mat>_>::~vector<cv::Mat,std::allocator<cv::Mat>_>
          (vector<cv::Mat,std::allocator<cv::Mat>_> *this)

{
  ulong64 uVar1;
  Mat *pMVar2;
  Mat *pMVar3;
  
  pMVar2 = (this->_Mypair)._Myval2._Myfirst;
  if (pMVar2 != (Mat *)0x0) {
    pMVar3 = (this->_Mypair)._Myval2._Mylast;
    for (; pMVar2 != pMVar3; pMVar2 = pMVar2 + 1) {
      cv::Mat::~Mat(pMVar2);
    }
    pMVar2 = (this->_Mypair)._Myval2._Myfirst;
    uVar1 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pMVar2) / 0x60) * 0x60;
    pMVar3 = pMVar2;
    if (0xfff < uVar1) {
      pMVar3 = (Mat *)pMVar2[-1].step.buf[1];
      uVar1 = uVar1 + 0x27;
      if (0x1f < (ulonglong)((longlong)pMVar2 + (-8 - (longlong)pMVar3))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pMVar3,uVar1);
    (this->_Mypair)._Myval2._Myfirst = (Mat *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Mat *)0x0;
    (this->_Mypair)._Myval2._Myend = (Mat *)0x0;
  }
  return;
}

// `scalar_deleting_destructor' @ 14d375500

void * __thiscall
UTrackingAlignmentCalibrationProfile::_scalar_deleting_destructor_
          (UTrackingAlignmentCalibrationProfile *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UTrackingAlignmentCalibrationProfile__6B_;
  pFVar1 = (this->Samples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TrackerBActors).OriginActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerBActors).SourceActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerAActors).OriginActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->TrackerAActors).SourceActor.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d3755b0

void * __thiscall
UTrackingAlignmentFunctionLibrary::_scalar_deleting_destructor_
          (UTrackingAlignmentFunctionLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UTrackingAlignmentFunctionLibrary__6B_;
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

// EmptyLinkFunctionForGeneratedCodeTrackingAlignmentActors @ 14d375990

void __cdecl EmptyLinkFunctionForGeneratedCodeTrackingAlignmentActors(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTrackingAlignmentBPLibrary @ 14d3759a0

void __cdecl EmptyLinkFunctionForGeneratedCodeTrackingAlignmentBPLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTrackingAlignmentCalibrationProfile @ 14d3759b0

void __cdecl EmptyLinkFunctionForGeneratedCodeTrackingAlignmentCalibrationProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTrackingAlignmentSample @ 14d3759c0

void __cdecl EmptyLinkFunctionForGeneratedCodeTrackingAlignmentSample(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTrackingAlignment_init @ 14d3759d0

void __cdecl EmptyLinkFunctionForGeneratedCodeTrackingAlignment_init(void)

{
  return;
}

// Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister @ 14d377310

UClass * __cdecl Z_Construct_UClass_UTrackingAlignmentFunctionLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TrackingAlignment",L"TrackingAlignmentFunctionLibrary",
               &Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton,
               UTrackingAlignmentFunctionLibrary::
               StaticRegisterNativesUTrackingAlignmentFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTrackingAlignmentFunctionLibrary>,
               InternalVTableHelperCtorCaller<UTrackingAlignmentFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTrackingAlignmentFunctionLibrary.InnerSingleton;
}

// _Xlength @ 14d3773d0

void __cdecl std::vector<cv::Mat,std::allocator<cv::Mat>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// IMPLEMENT_MODULE_TrackingAlignment @ 14d377f30

void __cdecl IMPLEMENT_MODULE_TrackingAlignment(void)

{
  return;
}

// UnitVectors'' @ 150455ea0

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

// `dynamic_atexit_destructor_for_'CVarHandEyeCalibrationSolveMethod'' @ 150455ec0

void __cdecl _dynamic_atexit_destructor_for__CVarHandEyeCalibrationSolveMethod__(void)

{
  CVarHandEyeCalibrationSolveMethod._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarHandEyeCalibrationSolveMethod);
  return;
}

