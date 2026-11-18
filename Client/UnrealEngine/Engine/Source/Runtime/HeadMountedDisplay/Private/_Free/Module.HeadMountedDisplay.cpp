// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HeadMountedDisplay
// Functions: 150

// FeatureName'' @ 141043730

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// HMDSourceId'' @ 141043750

void __cdecl `dynamic_initializer_for_'IMotionController::HMDSourceId__(void)

{
  ::FName::FName(&IMotionController::HMDSourceId,L"HMD");
  return;
}

// HeadSourceId'' @ 141043770

void __cdecl `dynamic_initializer_for_'IMotionController::HeadSourceId__(void)

{
  ::FName::FName(&IMotionController::HeadSourceId,L"Head");
  return;
}

// LeftHandSourceId'' @ 141043790

void __cdecl `dynamic_initializer_for_'IMotionController::LeftHandSourceId__(void)

{
  ::FName::FName(&IMotionController::LeftHandSourceId,L"Left");
  return;
}

// OnActivateVisualizationComponent'' @ 1410437b0

void __cdecl
`dynamic_initializer_for_'UMotionControllerComponent::OnActivateVisualizationComponent__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UMotionControllerComponent::
         OnActivateVisualizationComponent__);
  return;
}

// RightHandSourceId'' @ 1410437d0

void __cdecl `dynamic_initializer_for_'IMotionController::RightHandSourceId__(void)

{
  ::FName::FName(&IMotionController::RightHandSourceId,L"Right");
  return;
}

// `dynamic_initializer_for_'CVarEnableMotionControllerLateUpdate'' @ 1410437f0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarEnableMotionControllerLateUpdate__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarEnableMotionControllerLateUpdate,L"vr.EnableMotionControllerLateUpdate",local_res8
             ,
             L"This command allows you to specify whether the motion controller late update is applied.\n 0: don\'t use late update\n 1: use late update (default)"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarEnableMotionControllerLateUpdate__);
  return;
}

// `dynamic_initializer_for_'CVarXRLateUpdateMangerDisable'' @ 141043840

void __cdecl _dynamic_initializer_for__CVarXRLateUpdateMangerDisable__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarXRLateUpdateMangerDisable,L"xr.LateUpdateManager.Disable",local_res8,
             L"Disable the LateUpdateManager preventing child components from receiving late updates.\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarXRLateUpdateMangerDisable__);
  return;
}

// `dynamic_initializer_for_'CritSect'' @ 141043890

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CritSect__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&CritSect,4000);
  atexit(_dynamic_atexit_destructor_for__CritSect__);
  return;
}

// `dynamic_initializer_for_'DelayClients'' @ 1410438c0

void __cdecl MotionDelayService_Impl::_dynamic_initializer_for__DelayClients__(void)

{
  atexit(_dynamic_atexit_destructor_for__DelayClients__);
  return;
}

// `dynamic_initializer_for_'DelayTargets'' @ 1410438e0

void __cdecl MotionDelayService_Impl::_dynamic_initializer_for__DelayTargets__(void)

{
  atexit(_dynamic_atexit_destructor_for__DelayTargets__);
  return;
}

// `dynamic_initializer_for_'LogHMD'' @ 141043900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogHMD__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogHMD,L"LogHMD",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogHMD__);
  return;
}

// `dynamic_initializer_for_'LogLoadingSplash'' @ 141043940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLoadingSplash__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLoadingSplash,L"LogLoadingSplash",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLoadingSplash__);
  return;
}

// `dynamic_initializer_for_'LogMotionControllerComponent'' @ 141043980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMotionControllerComponent__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMotionControllerComponent,L"LogMotionControllerComponent",Log,
             All);
  atexit(_dynamic_atexit_destructor_for__LogMotionControllerComponent__);
  return;
}

// `dynamic_initializer_for_'LogMotionDelayBuffer'' @ 1410439c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMotionDelayBuffer__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMotionDelayBuffer,L"LogMotionDelayBuffer",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMotionDelayBuffer__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantHeadMountedDisplay'' @ 141043a00

void __cdecl _dynamic_initializer_for__ModuleRegistrantHeadMountedDisplay__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "HeadMountedDisplay";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"HeadMountedDisplay",0x12);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FHeadMountedDisplayModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_UMotionControllerComponent_OnMotionControllerUpdated'' @ 141043a50

void __cdecl
_dynamic_initializer_for__NAME_UMotionControllerComponent_OnMotionControllerUpdated__(void)

{
  FName::FName(&NAME_UMotionControllerComponent_OnMotionControllerUpdated,
               L"OnMotionControllerUpdated");
  return;
}

// `dynamic_initializer_for_'SourceSamples'' @ 141043a70

void __cdecl MotionDelayService_Impl::_dynamic_initializer_for__SourceSamples__(void)

{
  atexit(_dynamic_atexit_destructor_for__SourceSamples__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h__Script_HeadMountedDisplay_1436375946'' @ 141043a90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h__Script_HeadMountedDisplay_1436375946__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HeadMountedDisplay",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h__Script_HeadMountedDisplay_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h__Script_HeadMountedDisplay_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h__Script_HeadMountedDisplay_Statics
             ::EnumInfo,0xb);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h__Script_HeadMountedDisplay_1872830331'' @ 141043ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h__Script_HeadMountedDisplay_1872830331__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HeadMountedDisplay",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IIdentifiableXRDevice_h__Script_HeadMountedDisplay_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h__Script_HeadMountedDisplay_1983454672'' @ 141043b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h__Script_HeadMountedDisplay_1983454672__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HeadMountedDisplay",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_IMotionController_h__Script_HeadMountedDisplay_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h__Script_HeadMountedDisplay_1497322276'' @ 141043b70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h__Script_HeadMountedDisplay_1497322276__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/HeadMountedDisplay",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_MotionControllerComponent_h__Script_HeadMountedDisplay_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_HeadMountedDisplay'' @ 141043bb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_HeadMountedDisplay__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x92d43740;
  local_res8[0].DeclarationsHash = 0xf350548a;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_HeadMountedDisplay,L"/Script/HeadMountedDisplay",
             &Z_Registration_Info_UPackage__Script_HeadMountedDisplay,local_res8);
  return;
}

// Z_Construct_UClass_UHandKeypointConversion @ 14594a670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UHandKeypointConversion(void)

{
  if (Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton,
               &Z_Construct_UClass_UHandKeypointConversion_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint @ 14594a6b0

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint(void)

{
  if (Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus @ 14594a6f0

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus(void)

{
  if (Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETrackingStatus.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRControllerPoseType @ 14594a730

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRControllerPoseType(void)

{
  if (Z_Registration_Info_UEnum_EXRControllerPoseType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRControllerPoseType.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRControllerPoseType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRControllerPoseType.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRSpaceType @ 14594a770

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRSpaceType(void)

{
  if (Z_Registration_Info_UEnum_EXRSpaceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRSpaceType.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRSpaceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRSpaceType.InnerSingleton;
}

// EOrientPositionSelector_StaticEnum @ 14594a7b0

UEnum * __cdecl EOrientPositionSelector_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector,
                       (UObject *)pUVar1,L"EOrientPositionSelector");
  }
  return Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton;
}

// EHMDTrackingOrigin_StaticEnum @ 14594a7f0

UEnum * __cdecl EHMDTrackingOrigin_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin,(UObject *)pUVar1,
                       L"EHMDTrackingOrigin");
  }
  return Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton;
}

// EHMDWornState_StaticEnum @ 14594a830

UEnum * __cdecl EHMDWornState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState,(UObject *)pUVar1,
                       L"EHMDWornState");
  }
  return Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton;
}

// Z_Construct_UClass_UMotionControllerComponent @ 14594a870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMotionControllerComponent(void)

{
  if (Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton,
               &Z_Construct_UClass_UMotionControllerComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMotionControllerComponent.OuterSingleton;
}

// EXRDeviceConnectionResult_StaticEnum @ 14594a8b0

UEnum * __cdecl EXRDeviceConnectionResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult,
                       (UObject *)pUVar1,L"EXRDeviceConnectionResult");
  }
  return Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14594a8f0

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity @ 14594a900

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetAngularVelocity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EXRSystemFlags_StaticEnum @ 14594a940

UEnum * __cdecl EXRSystemFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags,(UObject *)pUVar1,
                       L"EXRSystemFlags");
  }
  return Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton;
}

// NewProp_bValueFound_SetBit @ 14594a980

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::
NewProp_bValueFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 4) = 1;
  return;
}

// ESpectatorScreenMode_StaticEnum @ 14594a990

UEnum * __cdecl ESpectatorScreenMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode,(UObject *)pUVar1,
                       L"ESpectatorScreenMode");
  }
  return Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition @ 14594a9d0

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetHandJointPosition_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EXRTrackedDeviceType_StaticEnum @ 14594aa10

UEnum * __cdecl EXRTrackedDeviceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType,(UObject *)pUVar1,
                       L"EXRTrackedDeviceType");
  }
  return Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14594aa50

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration @ 14594aa60

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetLinearAcceleration_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EHandKeypoint_StaticEnum @ 14594aaa0

UEnum * __cdecl EHandKeypoint_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint,(UObject *)pUVar1,
                       L"EHandKeypoint");
  }
  return Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14594aae0

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UPackage__Script_HeadMountedDisplay @ 14594aaf0

UPackage * __cdecl Z_Construct_UPackage__Script_HeadMountedDisplay(void)

{
  if (Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_HeadMountedDisplay.OuterSingleton;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity @ 14594ab30

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetLinearVelocity_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bValueFound_SetBit @ 14594ab80

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::
NewProp_bValueFound_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14594ad10

void * __thiscall
IHeadMountedDisplayModule::_scalar_deleting_destructor_
          (IHeadMountedDisplayModule *this,uint param_1)

{
  *this = (IHeadMountedDisplayModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue @ 14594ad50

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetParameterValue_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32 @ 14594ad90

UFunction * __cdecl Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource @ 14594add0

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_GetTrackingSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14594ae10

void __cdecl
Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UMotionControllerComponent_IsTracked @ 14594ae20

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_IsTracked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_IsTracked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated @ 14594aeb0

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_OnMotionControllerUpdated_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex @ 14594af30

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_SetAssociatedPlayerIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource @ 14594af70

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingMotionSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource @ 14594afb0

UFunction * __cdecl Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UMotionControllerComponent_SetTrackingSource_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bDisableLowLatencyUpdate_SetBit @ 14594aff0

void __cdecl
Z_Construct_UClass_UMotionControllerComponent_Statics::NewProp_bDisableLowLatencyUpdate_SetBit
          (void *param_1)

{
  *(uint *)((longlong)param_1 + 0x554) = *(uint *)((longlong)param_1 + 0x554) | 1;
  return;
}

// EXRVisualType_StaticEnum @ 14594b000

UEnum * __cdecl EXRVisualType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType,(UObject *)pUVar1,
                       L"EXRVisualType");
  }
  return Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton;
}

// EXRSpaceType_StaticEnum @ 14594b040

UEnum * __cdecl EXRSpaceType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSpaceType,(UObject *)pUVar1,
                       L"EXRSpaceType");
  }
  return Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton;
}

// EXRControllerPoseType_StaticEnum @ 14594b080

UEnum * __cdecl EXRControllerPoseType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRControllerPoseType,(UObject *)pUVar1,
                       L"EXRControllerPoseType");
  }
  return Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton;
}

// NewProp_bValid_SetBit @ 14594b0c0

void __cdecl Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14594b0d0

void * __cdecl Z_Construct_UScriptStruct_FXRHMDData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FXRHMDData,&UE::CoreUObject::Private::Construct<FXRHMDData>,&UE::CoreUObject::Private::ConstructForTests<FXRHMDData>,&UE::CoreUObject::Private::Destruct<FXRHMDData>,&UE::CoreUObject::Private::Copy<FXRHMDData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bValid_SetBit @ 14594b150

void __cdecl
Z_Construct_UScriptStruct_FXRMotionControllerState_Statics::NewProp_bValid_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14594b1f0

void * __cdecl Z_Construct_UScriptStruct_FXRMotionControllerState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FXRMotionControllerState,&UE::CoreUObject::Private::Construct<FXRMotionControllerState>,&UE::CoreUObject::Private::ConstructForTests<FXRMotionControllerState>,&UE::CoreUObject::Private::Destruct<FXRMotionControllerState>,&UE::CoreUObject::Private::Copy<FXRMotionControllerState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bValid_SetBit @ 14594b420

void __cdecl
Z_Construct_UScriptStruct_FXRHandTrackingState_Statics::NewProp_bValid_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14594b430

void * __cdecl Z_Construct_UScriptStruct_FXRHandTrackingState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FXRHandTrackingState,&UE::CoreUObject::Private::Construct<FXRHandTrackingState>,&UE::CoreUObject::Private::ConstructForTests<FXRHandTrackingState>,&UE::CoreUObject::Private::Destruct<FXRHandTrackingState>,&UE::CoreUObject::Private::Copy<FXRHandTrackingState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14594b840

void * __cdecl Z_Construct_UScriptStruct_FXRDeviceId_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FXRDeviceId,&UE::CoreUObject::Private::Construct<FXRDeviceId>,&UE::CoreUObject::Private::ConstructForTests<FXRDeviceId>,&UE::CoreUObject::Private::Destruct<FXRDeviceId>,&UE::CoreUObject::Private::Copy<FXRDeviceId>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// ETrackingStatus_StaticEnum @ 14594b980

UEnum * __cdecl ETrackingStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus,(UObject *)pUVar1,
                       L"ETrackingStatus");
  }
  return Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14594ba10

void * __thiscall
FHeadMountedDisplayModule::_scalar_deleting_destructor_
          (FHeadMountedDisplayModule *this,uint param_1)

{
  *this = (FHeadMountedDisplayModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// ConstructItems<FMotionDelayClient::FTargetTransform,FMotionDelayClient::FTargetTransform,int> @ 14594bd10

void __cdecl
ConstructItems<FMotionDelayClient::FTargetTransform,FMotionDelayClient::FTargetTransform,int>
          (void *param_1,FTargetTransform *param_2,int param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  double *pdVar3;
  TTransform<double> *pTVar4;
  
  if (param_3 != 0) {
    pTVar4 = &param_2->DelayTransform;
    pdVar3 = (double *)((longlong)param_1 + 0x10);
    do {
      pdVar3[-2] = *(double *)((longlong)pdVar3 + (longlong)param_2 + (-0x10 - (longlong)param_1));
      dVar1 = *(double *)((longlong)(pTVar4 + -1) + 0x58);
      pdVar3[-1] = dVar1;
      if (dVar1 != 0.0) {
        LOCK();
        *(int *)((longlong)dVar1 + 8) = *(int *)((longlong)dVar1 + 8) + 1;
        UNLOCK();
      }
      dVar1 = (pTVar4->Rotation).XY.m128d_f64[1];
      *pdVar3 = (pTVar4->Rotation).XY.m128d_f64[0];
      pdVar3[1] = dVar1;
      dVar1 = (pTVar4->Rotation).ZW.m128d_f64[1];
      pdVar3[2] = (pTVar4->Rotation).ZW.m128d_f64[0];
      pdVar3[3] = dVar1;
      dVar1 = (pTVar4->Translation).XY.m128d_f64[1];
      pdVar3[4] = (pTVar4->Translation).XY.m128d_f64[0];
      pdVar3[5] = dVar1;
      dVar1 = (pTVar4->Translation).ZW.m128d_f64[1];
      pdVar3[6] = (pTVar4->Translation).ZW.m128d_f64[0];
      pdVar3[7] = dVar1;
      dVar1 = (pTVar4->Scale3D).XY.m128d_f64[1];
      pdVar3[8] = (pTVar4->Scale3D).XY.m128d_f64[0];
      pdVar3[9] = dVar1;
      dVar1 = (pTVar4->Scale3D).ZW.m128d_f64[1];
      pdVar3[10] = (pTVar4->Scale3D).ZW.m128d_f64[0];
      pdVar3[0xb] = dVar1;
      dVar1 = pTVar4[1].Rotation.XY.m128d_f64[1];
      pdVar3[0xc] = pTVar4[1].Rotation.XY.m128d_f64[0];
      pdVar3[0xd] = dVar1;
      dVar1 = pTVar4[1].Rotation.ZW.m128d_f64[1];
      pdVar3[0xe] = pTVar4[1].Rotation.ZW.m128d_f64[0];
      pdVar3[0xf] = dVar1;
      dVar1 = pTVar4[1].Translation.XY.m128d_f64[1];
      pdVar3[0x10] = pTVar4[1].Translation.XY.m128d_f64[0];
      pdVar3[0x11] = dVar1;
      dVar1 = pTVar4[1].Translation.ZW.m128d_f64[1];
      pdVar3[0x12] = pTVar4[1].Translation.ZW.m128d_f64[0];
      pdVar3[0x13] = dVar1;
      dVar1 = pTVar4[1].Scale3D.XY.m128d_f64[1];
      pdVar3[0x14] = pTVar4[1].Scale3D.XY.m128d_f64[0];
      pdVar3[0x15] = dVar1;
      pTVar2 = pTVar4 + 1;
      dVar1 = pTVar4[1].Scale3D.ZW.m128d_f64[1];
      pTVar4 = (TTransform<double> *)((longlong)(pTVar4 + 2) + 0x10);
      pdVar3[0x16] = (pTVar2->Scale3D).ZW.m128d_f64[0];
      pdVar3[0x17] = dVar1;
      pdVar3 = pdVar3 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FMotionDelayClient::FTargetTransform,int> @ 14594bdf0

void __cdecl
DestructItems<FMotionDelayClient::FTargetTransform,int>(FTargetTransform *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->DelayTarget).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<FMotionDelayClient,1>,int> @ 14594be30

void __cdecl
DestructItems<TWeakPtr<FMotionDelayClient,1>,int>
          (TWeakPtr<FMotionDelayClient,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar3->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
        }
      }
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// Enqueue<TRenderCommandTag<`FMotionDelayClient::BeginRenderViewFamily'::__l2::TSTR_MotionDelayClientSetup482>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14594c720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FMotionDelayClient::BeginRenderViewFamily_::__l2::TSTR_MotionDelayClientSetup482>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FMotionDelayClient::BeginRenderViewFamily'::__l2::TSTR_MotionDelayClientSetup482>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14594c871;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14594ca65;
  }
LAB_14594c871:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14594c94f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14594c94f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14594ca65:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FLateUpdateManager::Setup'::__l2::TSTR_UpdateLateUpdateStatesRendering26>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14594caa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FLateUpdateManager::Setup_::__l2::TSTR_UpdateLateUpdateStatesRendering26>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FLateUpdateManager::Setup'::__l2::TSTR_UpdateLateUpdateStatesRendering26>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14594cbf1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14594cde5;
  }
LAB_14594cbf1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14594cccf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14594cccf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14594cde5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::TSTR_UpdateRTRelativeTransformCommand152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 14594ce20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_UMotionControllerComponent::SendRenderTransform_Concurrent_::__l2::TSTR_UpdateRTRelativeTransformCommand152>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::TSTR_UpdateRTRelativeTransformCommand152>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_14594cf71;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_14594d165;
  }
LAB_14594cf71:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14594d04f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14594d04f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_14594d165:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InternalConstructor<UHandKeypointConversion> @ 14594d410

void __cdecl InternalConstructor<UHandKeypointConversion>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UHandKeypointConversion__6B_;
  }
  return;
}

// InternalConstructor<UMotionControllerComponent> @ 14594d440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UMotionControllerComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  float fVar1;
  float fVar2;
  float fVar3;
  FName FVar4;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UMotionControllerComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->field_0x54c = 0;
    *(undefined ***)&this->field_0x28 =
         &UMotionControllerComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UMotionControllerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UMotionControllerComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UMotionControllerComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UMotionControllerComponent::_vftable__for__IPhysicsComponent__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x80,4000);
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0xb0 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0xb8 = (double)fVar1;
    *(double *)&this[1].field_0xc0 = (double)fVar2;
    *(double *)&this[1].field_0xc8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[1].field_0xd0 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[1].field_0xd8 = (double)fVar1;
    *(double *)&this[1].field_0xe0 = (double)fVar2;
    *(double *)&this[1].field_0xe8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].field_0xf0 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].field_0xf8 = (double)fVar1;
    *(double *)&this[1].field_0x100 = (double)fVar2;
    *(double *)&this[1].field_0x108 = (double)fVar3;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    *(undefined8 *)&this[1].field_0x110 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x118 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x120 = 0x3ff0000000000000;
    this->field_0x42 = this->field_0x42 | 7;
    this->field_0x40 = 0;
    *(undefined4 *)&this->field_0x548 = 0;
    FVar4 = IMotionController::LeftHandSourceId;
    *(uint *)&this[1].field_0x4 = *(uint *)&this[1].field_0x4 & 0xfffffffe;
    this->field_0x9a = this->field_0x9a | 8;
    this->field_0x9b = this->field_0x9b | 1;
    this[1].field_0x19 = 0;
    *(FName *)&this->field_0x54c = FVar4;
  }
  return;
}

// InternalVTableHelperCtorCaller<UHandKeypointConversion> @ 14594d5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UHandKeypointConversion>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UHandKeypointConversion::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UHandKeypointConversion__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMotionControllerComponent> @ 14594d650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMotionControllerComponent>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UPrimitiveComponent *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UMotionControllerComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UMotionControllerComponent::_vftable__for__UObject__;
    *(undefined8 *)&this->field_0x54c = 0;
    *(undefined ***)&this->field_0x28 =
         &UMotionControllerComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UMotionControllerComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UMotionControllerComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UMotionControllerComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UMotionControllerComponent::_vftable__for__IPhysicsComponent__;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[1].field_0x80,4000);
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0xb0 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0xb8 = (double)fVar1;
    *(double *)&this[1].field_0xc0 = (double)fVar2;
    *(double *)&this[1].field_0xc8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[1].field_0xd0 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[1].field_0xd8 = (double)fVar1;
    *(double *)&this[1].field_0xe0 = (double)fVar2;
    *(double *)&this[1].field_0xe8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[1].field_0xf0 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[1].field_0xf8 = (double)fVar1;
    *(double *)&this[1].field_0x100 = (double)fVar2;
    *(double *)&this[1].field_0x108 = (double)fVar3;
    *(undefined8 *)&this[1].field_0x128 = 0;
    *(undefined8 *)&this[1].field_0x130 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// StaticEnum<enum_EHandKeypoint> @ 14594dc10

UEnum * __cdecl StaticEnum<enum_EHandKeypoint>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint,(UObject *)pUVar1,
                       L"EHandKeypoint");
  }
  return Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton;
}

// StaticEnum<enum_ESpectatorScreenMode> @ 14594dc50

UEnum * __cdecl StaticEnum<enum_ESpectatorScreenMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode,(UObject *)pUVar1,
                       L"ESpectatorScreenMode");
  }
  return Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton;
}

// StaticEnum<enum_ETrackingStatus> @ 14594dc90

UEnum * __cdecl StaticEnum<enum_ETrackingStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus,(UObject *)pUVar1,
                       L"ETrackingStatus");
  }
  return Z_Registration_Info_UEnum_ETrackingStatus.OuterSingleton;
}

// StaticEnum<enum_EXRControllerPoseType> @ 14594dcd0

UEnum * __cdecl StaticEnum<enum_EXRControllerPoseType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRControllerPoseType,(UObject *)pUVar1,
                       L"EXRControllerPoseType");
  }
  return Z_Registration_Info_UEnum_EXRControllerPoseType.OuterSingleton;
}

// StaticEnum<enum_EXRSpaceType> @ 14594dd10

UEnum * __cdecl StaticEnum<enum_EXRSpaceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSpaceType,(UObject *)pUVar1,
                       L"EXRSpaceType");
  }
  return Z_Registration_Info_UEnum_EXRSpaceType.OuterSingleton;
}

// StaticEnum<enum_EXRTrackedDeviceType> @ 14594dd50

UEnum * __cdecl StaticEnum<enum_EXRTrackedDeviceType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType,(UObject *)pUVar1,
                       L"EXRTrackedDeviceType");
  }
  return Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton;
}

// StaticEnum<enum_EXRVisualType> @ 14594dd90

UEnum * __cdecl StaticEnum<enum_EXRVisualType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType,(UObject *)pUVar1,
                       L"EXRVisualType");
  }
  return Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton;
}

// StaticEnum<enum_EHMDTrackingOrigin::Type> @ 14594ddd0

UEnum * __cdecl StaticEnum<enum_EHMDTrackingOrigin::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin,(UObject *)pUVar1,
                       L"EHMDTrackingOrigin");
  }
  return Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton;
}

// StaticEnum<enum_EHMDWornState::Type> @ 14594de10

UEnum * __cdecl StaticEnum<enum_EHMDWornState::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState,(UObject *)pUVar1,
                       L"EHMDWornState");
  }
  return Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton;
}

// StaticEnum<enum_EOrientPositionSelector::Type> @ 14594de50

UEnum * __cdecl StaticEnum<enum_EOrientPositionSelector::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector,
                       (UObject *)pUVar1,L"EOrientPositionSelector");
  }
  return Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton;
}

// StaticEnum<enum_EXRDeviceConnectionResult::Type> @ 14594de90

UEnum * __cdecl StaticEnum<enum_EXRDeviceConnectionResult::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult,
                       (UObject *)pUVar1,L"EXRDeviceConnectionResult");
  }
  return Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton;
}

// StaticEnum<enum_EXRSystemFlags::Type> @ 14594ded0

UEnum * __cdecl StaticEnum<enum_EXRSystemFlags::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HeadMountedDisplay();
    Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags,(UObject *)pUVar1,
                       L"EXRSystemFlags");
  }
  return Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton;
}

// ~TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::<lambda_1>,1,1> @ 14594e680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_UMotionControllerComponent::SendRenderTransform_Concurrent_::__l2::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLateUpdateManager::Setup'::__l2::<lambda_1>,1,1> @ 14594e6a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLateUpdateManager::Setup'::__l2::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FLateUpdateManager::Setup_::__l2::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLateUpdateManager::Setup'::`2'::<lambda_1>,1,1>::_vftable_;
  *(undefined4 *)((longlong)this + 0xb8) = 0;
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x70));
  return;
}

// ~TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>,1,1> @ 14594e6e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FMotionDelayClient::BeginRenderViewFamily_::__l2::<lambda_2>,1,1>
          (void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::`2'::<lambda_2>,1,1>::
        _vftable_;
  DestructItems<FMotionDelayClient::FTargetTransform,int>
            (*(FTargetTransform **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014594e732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14594ede0

TTransform<double> * __thiscall
`MotionDelayClient_Impl::CalulateDelayTransform'::__l2::<lambda_1>::operator()
          (void *this,TTransform<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FPoseSample *pFVar9;
  TTransform<double> *pTVar10;
  TQuat<double> *pTVar11;
  uint uVar12;
  uint uVar13;
  TQuat<double> local_28;
  
  pFVar9 = TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::operator[]
                     (*(TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> **)this,param_1
                     );
  plVar3 = *(longlong **)((longlong)this + 8);
  uVar13 = *(uint *)(plVar3 + 2);
  if ((uint)param_1 < uVar13) {
    uVar13 = ~param_1 + uVar13;
  }
  else if (*(char *)((longlong)plVar3 + 0x14) == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = (uVar13 - 1) + ((int)plVar3[1] - param_1);
  }
  uVar12 = 0;
  if ((int)uVar13 < (int)plVar3[1]) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TTransform<double> *)(*pcVar5)();
      return pTVar10;
    }
  }
  lVar4 = *plVar3;
  pTVar11 = UE::Math::TRotator<double>::Quaternion(&pFVar9->Orientation,&local_28);
  dVar2 = pTVar11->Z;
  dVar6 = pTVar11->W;
  dVar7 = pTVar11->Y;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar11->X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar7;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar6;
  dVar6 = (pFVar9->Position).field0_0x0._s_0.Y;
  dVar2 = (pFVar9->Position).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pFVar9->Position).field0_0x0._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  pdVar1 = (double *)(lVar4 + (longlong)(int)uVar13 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)(int)uVar13 * 0x18);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar6;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// operator() @ 14594ef80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`MotionDelayService_Impl::SyncDelayBuffers'::__l6::<lambda_1>::operator()
          (void *this,USceneComponent *param_1,FMotionDelayTarget *param_2)

{
  bool *pbVar1;
  FScriptContainerElement *pFVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UWorld *this_00;
  AWorldSettings *pAVar10;
  TTransform<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  TTransform<double> local_98;
  
  this_00 = (UWorld *)param_1->_padding_;
  if ((this_00 != (UWorld *)0x0) ||
     (this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     fVar15 = MotionDelayService_Impl::DefaultWorldToMetersScale, this_00 != (UWorld *)0x0)) {
    pAVar10 = UWorld::GetWorldSettings(this_00,false,true);
    fVar15 = pAVar10->WorldToMeters;
  }
  uVar12 = (param_2->ScaleHistoryBuffer).Head;
  lVar13 = (longlong)(int)uVar12;
  uVar14 = 0;
  if ((int)uVar12 < (param_2->ScaleHistoryBuffer).Elements.ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  dVar6 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  dVar7 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  dVar5 = (double)(fVar15 / MotionDelayService_Impl::DefaultWorldToMetersScale);
  dVar8 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (param_2->ScaleHistoryBuffer).Elements.AllocatorInstance.Data;
  *(double *)(pFVar2 + lVar13 * 0x18) = dVar5 * dVar6;
  *(double *)(pFVar2 + lVar13 * 0x18 + 8) = dVar5 * dVar7;
  *(double *)(pFVar2 + lVar13 * 0x18 + 0x10) = dVar5 * dVar8;
  uVar12 = (param_2->ScaleHistoryBuffer).Head;
  uVar14 = 0;
  if ((int)uVar12 < (param_2->ScaleHistoryBuffer).Elements.ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar12 = ((param_2->ScaleHistoryBuffer).Head + 1) %
           (uint)(param_2->ScaleHistoryBuffer).Elements.ArrayNum;
  (param_2->ScaleHistoryBuffer).Head = uVar12;
  pbVar1 = &(param_2->ScaleHistoryBuffer).bIsFull;
  *pbVar1 = (bool)(*pbVar1 | uVar12 == 0);
  pUVar3 = (param_1->AttachParent).field0_0x0.DebugPtr;
  if (pUVar3 == (USceneComponent *)0x0) {
    pTVar11 = &UE::Math::TTransform<double>::Identity;
  }
  else {
    pTVar11 = &pUVar3->ComponentToWorld;
  }
  local_98.Rotation.XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  local_98.Rotation.XY.m128d_f64[1] = (pTVar11->Rotation).XY.m128d_f64[1];
  local_98.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  local_98.Rotation.ZW.m128d_f64[1] = (pTVar11->Rotation).ZW.m128d_f64[1];
  local_98.Translation.XY.m128d_f64[0] = (pTVar11->Translation).XY.m128d_f64[0];
  local_98.Translation.XY.m128d_f64[1] = (pTVar11->Translation).XY.m128d_f64[1];
  local_98.Translation.ZW.m128d_f64[0] = (pTVar11->Translation).ZW.m128d_f64[0];
  local_98.Translation.ZW.m128d_f64[1] = (pTVar11->Translation).ZW.m128d_f64[1];
  local_98.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  local_98.Scale3D.XY.m128d_f64[1] = (pTVar11->Scale3D).XY.m128d_f64[1];
  local_98.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  local_98.Scale3D.ZW.m128d_f64[1] = (pTVar11->Scale3D).ZW.m128d_f64[1];
  FLateUpdateManager::Setup(&param_2->LateUpdate,&local_98,param_1,false);
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14594f2d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UMotionControllerComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UMotionControllerComponent::_vector_deleting_destructor__adjustor_592__
          (UMotionControllerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMotionControllerComponent *)&this[-1].field_0x440,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 14594f2e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UMotionControllerComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UMotionControllerComponent::_vector_deleting_destructor__adjustor_600__
          (UMotionControllerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMotionControllerComponent *)&this[-1].field_0x438,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14594f2fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UMotionControllerComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UMotionControllerComponent::_vector_deleting_destructor__adjustor_608__
          (UMotionControllerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UMotionControllerComponent *)&this[-1].field_0x430,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14594f310

/* [thunk]:public: virtual void * __ptr64 __cdecl UMotionControllerComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UMotionControllerComponent::_vector_deleting_destructor__adjustor_40__
          (UMotionControllerComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UMotionControllerComponent *)
                      ((longlong)&this[-1].RenderThreadComponentScale.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14594f320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`UMotionControllerComponent::SendRenderTransform_Concurrent'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLateUpdateManager::Setup'::__l2::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLateUpdateManager::Setup'::`2'::<lambda_1>,1,1>::_vftable_;
  *(undefined4 *)((longlong)this + 0xb8) = 0;
  if (*(void **)((longlong)this + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xb0));
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveSceneInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x70));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f3d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::__l2::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMotionDelayClient::BeginRenderViewFamily'::`2'::<lambda_2>,1,1>::
        _vftable_;
  DestructItems<FMotionDelayClient::FTargetTransform,int>
            (*(FTargetTransform **)((longlong)this + 0x18),*(int *)((longlong)this + 0x20));
  if (*(void **)((longlong)this + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x18));
  }
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f450

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMotionDelayTarget,SharedPointerInternals::DefaultDeleter<FMotionDelayTarget>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMotionDelayTarget,SharedPointerInternals::DefaultDeleter<FMotionDelayTarget>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f490

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UMotionControllerComponent::FViewExtension,SharedPointerInternals::DefaultDeleter<UMotionControllerComponent::FViewExtension>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UMotionControllerComponent::FViewExtension,SharedPointerInternals::DefaultDeleter<UMotionControllerComponent::FViewExtension>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f4d0

void * __thiscall
FLateUpdateManager::_scalar_deleting_destructor_(FLateUpdateManager *this,uint param_1)

{
  ~FLateUpdateManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f510

void * __thiscall
FMotionDelayClient::_scalar_deleting_destructor_(FMotionDelayClient *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMotionDelayClient::FTargetTransform,int>
            ((FTargetTransform *)(this->TargetTransforms_RenderThread).AllocatorInstance.Data,
             (this->TargetTransforms_RenderThread).ArrayNum);
  pFVar1 = (this->TargetTransforms_RenderThread).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f570

void * __thiscall
UMotionControllerComponent::FViewExtension::_scalar_deleting_destructor_
          (FViewExtension *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FViewExtension_UMotionControllerComponent__6B_;
  FLateUpdateManager::~FLateUpdateManager(&this->LateUpdate);
  FSceneViewExtensionBase::~FSceneViewExtensionBase((FSceneViewExtensionBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f5c0

void * __thiscall
IHeadMountedDisplay::_scalar_deleting_destructor_(IHeadMountedDisplay *this,uint param_1)

{
  *this = (IHeadMountedDisplay)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14594f600

void * __thiscall
UHandKeypointConversion::_scalar_deleting_destructor_(UHandKeypointConversion *this,uint param_1)

{
  *(undefined ***)this = &___7UHandKeypointConversion__6B_;
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

// `scalar_deleting_destructor' @ 14594f660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UMotionControllerComponent::_scalar_deleting_destructor_
          (UMotionControllerComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PolledMotionControllerMutex);
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x690);
  }
  return this;
}

// CalulateDelayTransform @ 1459516a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
MotionDelayClient_Impl::CalulateDelayTransform
          (uint param_1,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *param_2,
          TCircularHistoryBuffer<UE::Math::TVector<double>_> *param_3,TTransform<double> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  TTransform<double> *pTVar9;
  FPoseSample *pFVar10;
  FPoseSample *pFVar11;
  uint uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *local_1d8;
  TCircularHistoryBuffer<UE::Math::TVector<double>_> *local_1d0;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  
  dVar5 = MotionDelayService_Impl::FrameSyncTime;
  lVar8 = 8;
  if (param_2->bIsFull == false) {
    lVar8 = 0x10;
  }
  cVar13 = '\0';
  uVar16 = 0xffffffff;
  uVar15 = *(int *)((longlong)&(param_2->Elements).AllocatorInstance.Data + lVar8) - 1;
  dVar4 = (double)((float)param_1 * __real_3a83126f);
  uVar14 = -((int)ROUND(__real_bf000000 - (float)param_1 * __real_3e3851ec) >> 1);
  if ((int)uVar15 < (int)uVar14) {
    uVar14 = uVar15;
  }
  while( true ) {
    while( true ) {
      lVar8 = 8;
      if (param_2->bIsFull == false) {
        lVar8 = 0x10;
      }
      if ((*(int *)((longlong)&(param_2->Elements).AllocatorInstance.Data + lVar8) <= (int)uVar14)
         || ((int)uVar14 < 0)) goto LAB_14595184d;
      uVar12 = param_2->Head;
      if (uVar14 < uVar12) {
        uVar12 = ~uVar14 + uVar12;
      }
      else if (param_2->bIsFull == false) {
        uVar12 = 0;
      }
      else {
        uVar12 = (param_2->Elements).ArrayNum + -1 + (uVar12 - uVar14);
      }
      uVar7 = 0;
      if ((int)uVar12 < (param_2->Elements).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar3 = dVar5 - *(double *)
                       ((param_2->Elements).AllocatorInstance.Data +
                       (longlong)(int)uVar12 * 0x38 + 0x30);
      if (cVar13 != '\0') break;
      cVar13 = '\x01';
      if (dVar4 <= dVar3) {
        cVar13 = -1;
      }
      uVar14 = uVar14 + (int)cVar13;
    }
    if ((1 - cVar13) / 2 != (uint)(dVar4 <= dVar3)) break;
    uVar14 = uVar14 + (int)cVar13;
  }
  uVar16 = uVar14 - (int)cVar13;
  uVar15 = uVar14;
LAB_14595184d:
  local_1d8 = param_2;
  local_1d0 = param_3;
  if (uVar16 == 0xffffffff) {
    if ((2 < (byte)LogMotionDelayBuffer._0_1_) && (param_2->bIsFull != false)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionDelayBuffer);
    }
    if (cVar13 < '\x01') {
      if (cVar13 < '\0') {
        pTVar9 = `MotionDelayClient_Impl::CalulateDelayTransform'::__l2::<lambda_1>::operator()
                           (&local_1d8,&local_a8,0);
        dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
        (param_4->Rotation).XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
        (param_4->Rotation).XY.m128d_f64[1] = dVar5;
        dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
        (param_4->Rotation).ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
        (param_4->Rotation).ZW.m128d_f64[1] = dVar5;
        dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
        (param_4->Translation).XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
        (param_4->Translation).XY.m128d_f64[1] = dVar5;
        dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
        (param_4->Translation).ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
        (param_4->Translation).ZW.m128d_f64[1] = dVar5;
        dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1];
        (param_4->Scale3D).XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
        (param_4->Scale3D).XY.m128d_f64[1] = dVar5;
        dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[1];
        (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
        (param_4->Scale3D).ZW.m128d_f64[1] = dVar5;
      }
    }
    else {
      pTVar9 = `MotionDelayClient_Impl::CalulateDelayTransform'::__l2::<lambda_1>::operator()
                         (&local_1d8,&local_108,uVar15);
      dVar5 = (pTVar9->Rotation).XY.m128d_f64[1];
      (param_4->Rotation).XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
      (param_4->Rotation).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Rotation).ZW.m128d_f64[1];
      (param_4->Rotation).ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
      (param_4->Rotation).ZW.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Translation).XY.m128d_f64[1];
      (param_4->Translation).XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
      (param_4->Translation).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Translation).ZW.m128d_f64[1];
      (param_4->Translation).ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
      (param_4->Translation).ZW.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Scale3D).XY.m128d_f64[1];
      (param_4->Scale3D).XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
      (param_4->Scale3D).XY.m128d_f64[1] = dVar5;
      dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[1];
      (param_4->Scale3D).ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
      (param_4->Scale3D).ZW.m128d_f64[1] = dVar5;
    }
  }
  else {
    pFVar10 = TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::operator[]
                        (param_2,uVar15);
    pFVar11 = TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::operator[]
                        (param_2,uVar16);
    `MotionDelayClient_Impl::CalulateDelayTransform'::__l2::<lambda_1>::operator()
              (&local_1d8,&local_168,uVar15);
    `MotionDelayClient_Impl::CalulateDelayTransform'::__l2::<lambda_1>::operator()
              (&local_1d8,&local_1c8,uVar16);
    UE::Math::TTransform<double>::Blend
              (param_4,&local_168,&local_1c8,
               (float)(((dVar5 - pFVar10->TimeStamp) - dVar4) /
                      (pFVar11->TimeStamp - pFVar10->TimeStamp)));
  }
  pFVar1 = (param_3->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayTypes @ 145951fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeHeadMountedDisplay_init @ 145951fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeHeadMountedDisplay_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice @ 145951fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeIIdentifiableXRDevice(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeIMotionController @ 145951fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeIMotionController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionControllerComponent @ 145951ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionControllerComponent(void)

{
  return;
}

// FindNeededBufferSize @ 145952270

uint __cdecl MotionDelayService_Impl::FindNeededBufferSize(void)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  atomic<int> aVar3;
  float fVar4;
  float fVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  uint uVar8;
  atomic<int> aVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  longlong *plVar16;
  
  fVar5 = __real_3e3851ec;
  fVar4 = __real_bf000000;
  uVar8 = 0;
  uVar15 = DelayClients.ArrayNum - 1;
  if (-1 < (int)uVar15) {
    lVar14 = (longlong)(int)uVar15 << 4;
    do {
      uVar12 = ~uVar15 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar15 < DelayClients.ArrayNum) {
        uVar10 = uVar12;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar8 = (*pcVar2)();
        return uVar8;
      }
      if (((*(longlong *)(DelayClients.AllocatorInstance.Data + lVar14) == 0) ||
          (*(longlong *)(DelayClients.AllocatorInstance.Data + lVar14 + 8) == 0)) ||
         (*(int *)(*(longlong *)(DelayClients.AllocatorInstance.Data + lVar14 + 8) + 8) < 1)) {
        uVar10 = 0;
        if ((int)uVar15 < DelayClients.ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        FVar6.Data = DelayClients.AllocatorInstance.Data;
        plVar16 = *(longlong **)(DelayClients.AllocatorInstance.Data + lVar14 + 8);
        _Dst = DelayClients.AllocatorInstance.Data + lVar14;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
        iVar11 = (DelayClients.ArrayNum - uVar15) + -1;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(_Dst,FVar6.Data + (longlong)(DelayClients.ArrayNum - iVar11) * 0x10,
                  (longlong)iVar11 << 4);
        }
        DelayClients.ArrayNum = DelayClients.ArrayNum + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&DelayClients.AllocatorInstance,DelayClients.ArrayNum,
                   &DelayClients.ArrayMax);
      }
      else {
        uVar10 = 0;
        if ((int)uVar15 < DelayClients.ArrayNum) {
          uVar10 = uVar12;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          uVar8 = (*pcVar2)();
          return uVar8;
        }
        FVar6.Data = DelayClients.AllocatorInstance.Data;
        plVar16 = (longlong *)0x0;
        pTVar13 = *(TReferenceControllerBase<1> **)
                   (DelayClients.AllocatorInstance.Data + lVar14 + 8);
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          aVar3 = pTVar13->SharedReferenceCount;
          do {
            if (aVar3 == (atomic<int>)0x0) {
              pTVar13 = (TReferenceControllerBase<1> *)0x0;
              goto LAB_1459523c2;
            }
            LOCK();
            aVar9 = pTVar13->SharedReferenceCount;
            bVar7 = aVar3 == aVar9;
            if (bVar7) {
              pTVar13->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
              aVar9 = aVar3;
            }
            UNLOCK();
            aVar3 = aVar9;
          } while (!bVar7);
          plVar16 = *(longlong **)(FVar6.Data + lVar14);
        }
LAB_1459523c2:
        uVar10 = (**(code **)(*plVar16 + 0xc0))(plVar16);
        uVar10 = 1 - ((int)ROUND(fVar4 - (float)uVar10 * fVar5) >> 1);
        if (uVar10 < uVar8) {
          uVar10 = uVar8;
        }
        uVar8 = uVar10;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
      }
      lVar14 = lVar14 + -0x10;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  return uVar8;
}

// GetTypeHash @ 145953f50

uint __cdecl GetTypeHash(FMotionSource *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FVar1 = param_1->SourceId;
  uVar2 = GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  uVar4 = param_1->PlayerIndex - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar2) - uVar4 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 << 10;
  return (uVar5 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// RefreshDelayBufferSizes @ 145954d80

void __cdecl MotionDelayService_Impl::RefreshDelayBufferSizes(void)

{
  ulonglong uVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *pTVar6;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *pTVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  int iVar14;
  FWeakObjectPtr *pFVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_158;
  undefined8 local_150;
  ulonglong local_148;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FWeakObjectPtr local_100;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_res20 = FindNeededBufferSize();
  if (SharedBufferSizes != local_res20) {
    uVar16 = 0;
    uVar11 = 0;
    local_148 = 1;
    uVar13 = SourceSamples._40_4_;
    uStack_134 = 1;
    uStack_124 = uVar11;
    uStack_138 = uVar11;
    local_120 = uVar11;
    if (uVar13 != 0) {
      puVar18 = (uint *)&SourceSamples.field_0x10;
      if (SourceSamples._32_8_ != 0) {
        puVar18 = (uint *)SourceSamples._32_8_;
      }
      uStack_134 = *puVar18;
      local_120 = 0;
      uStack_138 = 0;
      while (uStack_134 == 0) {
        lVar9 = (longlong)(int)uStack_138;
        local_120 = local_120 + 0x20;
        uStack_138 = uStack_138 + 1;
        uStack_134 = 1;
        uStack_124 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
        goto LAB_145954e6f;
        uStack_134 = puVar18[lVar9 + 1];
      }
      uStack_134 = -uStack_134 & uStack_134;
      uVar1 = (ulonglong)uStack_134 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_110 = (int)lVar9;
      uStack_124 = local_110 + -1 + local_120;
      if ((int)uVar13 < (int)uStack_124) {
        uStack_124 = uVar13;
      }
    }
LAB_145954e6f:
    local_140 = &SourceSamples;
    uStack_11c = local_4c;
    uVar19 = uVar13 & 0xffffffe0;
    iStack_118 = SourceSamples._8_4_ - SourceSamples._52_4_;
    local_130 = 0x154bdb760;
    bVar4 = SourceSamples._40_1_;
    TStack_c0._padding_ = CONCAT44(uStack_134,uStack_138);
    uStack_128 = 0xffffffff;
    TStack_c0.CurrentBitIndex = uStack_124;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    local_c8 = &SourceSamples;
    iVar14 = (int)uVar13 >> 5;
    TStack_c0._28_4_ = local_4c;
    TStack_c0.BaseBitIndex = local_120;
    uStack_a0 = CONCAT44(uStack_114,iStack_118);
    TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10;
    uVar17 = uVar13;
    if ((int)uVar13 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = SourceSamples._40_4_;
    }
    uVar5 = local_res20;
    if (uVar13 != uVar17) {
      lVar9 = 0x154bdb760;
      if (SourceSamples._32_8_ != 0) {
        lVar9 = SourceSamples._32_8_;
      }
      uVar13 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_145954fa0;
        uVar13 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_10c = (int)lVar9;
      uVar13 = local_10c + -1 + uVar19;
      if ((int)uVar17 < (int)uVar13) {
        uVar13 = uVar17;
      }
    }
LAB_145954fa0:
    while( true ) {
      pTVar6 = local_c8;
      if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_c0.CurrentBitIndex == uVar13) &&
          (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10)) &&
         (pTVar6 == &SourceSamples)) break;
      TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>::Resize
                ((TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample> *)
                 ((longlong)TStack_c0.CurrentBitIndex * 0x30 + *(longlong *)pTVar6 + 0x10),uVar5);
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    uVar13 = DelayTargets._40_4_;
    uStack_dc = uVar16;
    if (uVar13 != 0) {
      puVar18 = (uint *)&DelayTargets.field_0x10;
      if (DelayTargets._32_8_ != 0) {
        puVar18 = (uint *)DelayTargets._32_8_;
      }
      uVar19 = *puVar18;
      uVar11 = uVar16;
      while (uVar19 == 0) {
        lVar9 = (longlong)(int)uVar11;
        uVar16 = uVar16 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_dc = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_1459550a1;
        uVar19 = puVar18[lVar9 + 1];
      }
      local_148 = (ulonglong)(-uVar19 & uVar19);
      uVar1 = local_148 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_108 = (int)lVar9;
      uStack_dc = (uVar16 - 1) + local_108;
      if ((int)uVar13 < (int)uStack_dc) {
        uStack_dc = uVar13;
      }
    }
LAB_1459550a1:
    uVar19 = uVar13 & 0xffffffe0;
    uStack_d4 = uStack_124;
    iStack_d0 = DelayTargets._8_4_ - DelayTargets._52_4_;
    uStack_ec = (undefined4)local_148;
    bVar4 = DelayTargets._40_1_;
    uStack_e0 = 0xffffffff;
    local_f8 = &DelayTargets;
    TStack_90._padding_ = CONCAT44(uStack_ec,uVar11);
    local_e8 = 0x154bdb7b0;
    TStack_90.CurrentBitIndex = uStack_dc;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    local_98 = &DelayTargets;
    iVar14 = (int)uVar13 >> 5;
    TStack_90._28_4_ = uStack_124;
    TStack_90.BaseBitIndex = uVar16;
    uStack_70 = CONCAT44(uStack_cc,iStack_d0);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10;
    uVar17 = uVar13;
    uStack_f0 = uVar11;
    local_d8 = uVar16;
    if ((int)uVar13 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = DelayTargets._40_4_;
    }
    if (uVar13 != uVar17) {
      lVar9 = 0x154bdb7b0;
      if (DelayTargets._32_8_ != 0) {
        lVar9 = DelayTargets._32_8_;
      }
      uVar16 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar9 + (longlong)iVar14 * 4);
      while (uVar16 == 0) {
        lVar10 = (longlong)iVar14;
        uVar19 = uVar19 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_1459551c0;
        uVar16 = *(uint *)(lVar9 + 4 + lVar10 * 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_104 = (int)lVar9;
      uVar13 = local_104 + -1 + uVar19;
      if ((int)uVar17 < (int)uVar13) {
        uVar13 = uVar17;
      }
    }
LAB_1459551c0:
    while( true ) {
      pTVar7 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_90.CurrentBitIndex == uVar13) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10)) &&
         (pTVar7 == &DelayTargets)) break;
      pFVar15 = (FWeakObjectPtr *)((longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)pTVar7)
      ;
      bVar8 = FWeakObjectPtr::IsValid(pFVar15);
      if (bVar8) {
        FVar2 = pFVar15[1];
        FWeakObjectPtr::Get(pFVar15);
        TCircularHistoryBuffer<UE::Math::TVector<double>_>::Resize
                  ((TCircularHistoryBuffer<UE::Math::TVector<double>_> *)((longlong)FVar2 + 0x1b0),
                   uVar5);
      }
      else {
        if (((local_158.Data <= pFVar15) &&
            (pFVar15 < (FWeakObjectPtr *)(local_158.Data + (longlong)local_150._4_4_ * 8))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar14 = (int)local_150;
        if ((int)local_150 == local_150._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_158,(int *)((longlong)&local_150 + 4));
        }
        local_150 = CONCAT44(local_150._4_4_,iVar14 + 1);
        *(FWeakObjectPtr *)(local_158.Data + (longlong)iVar14 * 8) = *pFVar15;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    iVar14 = (int)local_150;
    pFVar15 = (FWeakObjectPtr *)(local_158.Data + (longlong)(int)local_150 * 8);
    FVar12.Data = local_158.Data;
    while( true ) {
      if ((int)local_150 != iVar14) {
        `TCheckedPointerIterator<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((FWeakObjectPtr *)FVar12.Data == pFVar15) break;
      local_100 = *(FWeakObjectPtr *)FVar12.Data;
      if (DelayTargets._8_4_ != DelayTargets._52_4_) {
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                    *)&DelayTargets,local_100.ObjectSerialNumber ^ local_100.ObjectIndex,
                   (TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *)&local_100);
      }
      FVar12.Data = FVar12.Data + 8;
    }
    if ((FWeakObjectPtr *)local_158.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_158.Data);
    }
    SharedBufferSizes = uVar5;
  }
  return;
}

// RefreshMotionSources @ 1459553a0

void __cdecl MotionDelayService_Impl::RefreshMotionSources(void)

{
  ulonglong uVar1;
  FWeakObjectPtr FVar2;
  code *pcVar3;
  byte bVar4;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *pTVar5;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  int iVar13;
  FMotionSource *pFVar14;
  FWeakObjectPtr *pFVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FMotionDelayTarget::FMotionSource,TSizedDefaultAllocator<32>_> local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  ulonglong local_148;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  FWeakObjectPtr local_100;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  uVar10 = 0;
  uVar16 = SourceSamples._8_4_ - SourceSamples._52_4_;
  local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.ArrayNum = 0;
  local_168.ArrayMax = 0;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar16,&local_168.AllocatorInstance,0,&local_168.ArrayMax);
  }
  local_148 = 1;
  uVar16 = 0;
  uVar12 = SourceSamples._40_4_;
  uStack_134 = 1;
  uStack_124 = uVar10;
  uStack_138 = uVar10;
  local_120 = uVar16;
  if (uVar12 != 0) {
    puVar18 = (uint *)&SourceSamples.field_0x10;
    if (SourceSamples._32_8_ != 0) {
      puVar18 = (uint *)SourceSamples._32_8_;
    }
    uStack_134 = *puVar18;
    local_120 = 0;
    uStack_138 = 0;
    while (uStack_134 == 0) {
      lVar8 = (longlong)(int)uStack_138;
      local_120 = local_120 + 0x20;
      uStack_138 = uStack_138 + 1;
      uStack_134 = 1;
      uStack_124 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_138)
      goto LAB_1459554b1;
      uStack_134 = puVar18[lVar8 + 1];
    }
    uStack_134 = -uStack_134 & uStack_134;
    uVar1 = (ulonglong)uStack_134 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_110 = (int)lVar8;
    uStack_124 = (local_120 - 1) + local_110;
    if ((int)uVar12 < (int)uStack_124) {
      uStack_124 = uVar12;
    }
  }
LAB_1459554b1:
  iStack_118 = SourceSamples._8_4_ - SourceSamples._52_4_;
  local_140 = &SourceSamples;
  bVar4 = SourceSamples._40_1_;
  local_130 = 0x154bdb760;
  TStack_c0._padding_ = CONCAT44(uStack_134,uStack_138);
  uStack_128 = 0xffffffff;
  uVar19 = uVar12 & 0xffffffe0;
  TStack_c0.CurrentBitIndex = uStack_124;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  local_c8 = &SourceSamples;
  uStack_11c = local_4c;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_120;
  uStack_a0 = CONCAT44(uStack_114,iStack_118);
  iVar13 = (int)uVar12 >> 5;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10;
  uVar17 = uVar12;
  if ((int)uVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = SourceSamples._40_4_;
  }
  if (uVar12 != uVar17) {
    lVar8 = 0x154bdb760;
    if (SourceSamples._32_8_ != 0) {
      lVar8 = SourceSamples._32_8_;
    }
    uVar12 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1459555d0;
      uVar12 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_10c = (int)lVar8;
    uVar12 = local_10c + -1 + uVar19;
    if ((int)uVar17 < (int)uVar12) {
      uVar12 = uVar17;
    }
  }
LAB_1459555d0:
  while( true ) {
    pTVar5 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_c0.CurrentBitIndex == uVar12) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10)) &&
       (pTVar5 == &SourceSamples)) break;
    pFVar14 = (FMotionSource *)(*(longlong *)pTVar5 + (longlong)TStack_c0.CurrentBitIndex * 0x30);
    if (((local_168.AllocatorInstance.Data <= pFVar14) &&
        (pFVar14 < (FMotionSource *)
                   (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 0xc))) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_168.ArrayNum == local_168.ArrayMax) {
      local_168.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x40c,&local_168.AllocatorInstance,&local_168.ArrayMax);
    }
    lVar8 = (longlong)local_168.ArrayNum;
    local_168.ArrayNum = local_168.ArrayNum + 1;
    *(undefined8 *)(local_168.AllocatorInstance.Data + lVar8 * 0xc) = *(undefined8 *)pFVar14;
    *(uint *)(local_168.AllocatorInstance.Data + lVar8 * 0xc + 8) = (pFVar14->SourceId).Number;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  uVar12 = DelayTargets._40_4_;
  uStack_dc = uVar16;
  if (uVar12 != 0) {
    puVar18 = (uint *)&DelayTargets.field_0x10;
    if (DelayTargets._32_8_ != 0) {
      puVar18 = (uint *)DelayTargets._32_8_;
    }
    uVar19 = *puVar18;
    uVar16 = 0;
    uVar10 = 0;
    while (uVar19 == 0) {
      lVar8 = (longlong)(int)uVar10;
      uVar16 = uVar16 + 0x20;
      uVar10 = uVar10 + 1;
      uStack_dc = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_145955781;
      uVar19 = puVar18[lVar8 + 1];
    }
    local_148 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = local_148 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_108 = (int)lVar8;
    uStack_dc = (uVar16 - 1) + local_108;
    if ((int)uVar12 < (int)uStack_dc) {
      uStack_dc = uVar12;
    }
  }
LAB_145955781:
  uVar19 = uVar12 & 0xffffffe0;
  uStack_d4 = uStack_124;
  iStack_d0 = DelayTargets._8_4_ - DelayTargets._52_4_;
  uStack_ec = (undefined4)local_148;
  bVar4 = DelayTargets._40_1_;
  uStack_e0 = 0xffffffff;
  local_f8 = &DelayTargets;
  TStack_90._padding_ = CONCAT44(uStack_ec,uVar10);
  local_e8 = 0x154bdb7b0;
  TStack_90.CurrentBitIndex = uStack_dc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  local_98 = &DelayTargets;
  iVar13 = (int)uVar12 >> 5;
  TStack_90._28_4_ = uStack_124;
  TStack_90.BaseBitIndex = uVar16;
  uStack_70 = CONCAT44(uStack_cc,iStack_d0);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10;
  uVar17 = uVar12;
  uStack_f0 = uVar10;
  local_d8 = uVar16;
  if ((int)uVar12 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartIndex >= 0 && StartIndex <= Array.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x7af,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar17 = DelayTargets._40_4_;
  }
  if (uVar12 != uVar17) {
    lVar8 = 0x154bdb7b0;
    if (DelayTargets._32_8_ != 0) {
      lVar8 = DelayTargets._32_8_;
    }
    uVar10 = -1 << (bVar4 & 0x1f) & *(uint *)(lVar8 + (longlong)iVar13 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar13;
      uVar19 = uVar19 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar17;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_1459558a0;
      uVar10 = *(uint *)(lVar8 + 4 + lVar9 * 4);
    }
    uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_104 = (int)lVar8;
    uVar12 = local_104 + -1 + uVar19;
    if ((int)uVar17 < (int)uVar12) {
      uVar12 = uVar17;
    }
  }
LAB_1459558a0:
  while( true ) {
    pTVar6 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10)) &&
       (pTVar6 == &DelayTargets)) break;
    pFVar15 = (FWeakObjectPtr *)((longlong)TStack_90.CurrentBitIndex * 0x20 + *(longlong *)pTVar6);
    bVar7 = FWeakObjectPtr::IsValid(pFVar15);
    if (bVar7) {
      FVar2 = pFVar15[1];
      FWeakObjectPtr::Get(pFVar15);
      TArray<FMotionDelayTarget::FMotionSource,TSizedDefaultAllocator<32>_>::Remove
                (&local_168,(FMotionSource *)((longlong)FVar2 + 0x1a0));
    }
    else {
      if (((local_158.Data <= pFVar15) &&
          (pFVar15 < (FWeakObjectPtr *)(local_158.Data + (longlong)local_150._4_4_ * 8))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = (int)local_150;
      if ((int)local_150 == local_150._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_158,(int *)((longlong)&local_150 + 4));
      }
      local_150 = CONCAT44(local_150._4_4_,iVar13 + 1);
      *(FWeakObjectPtr *)(local_158.Data + (longlong)iVar13 * 8) = *pFVar15;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  iVar13 = (int)local_150;
  pFVar15 = (FWeakObjectPtr *)(local_158.Data + (longlong)(int)local_150 * 8);
  FVar11.Data = local_158.Data;
  while( true ) {
    if ((int)local_150 != iVar13) {
      `TCheckedPointerIterator<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if ((FWeakObjectPtr *)FVar11.Data == pFVar15) break;
    local_100 = *(FWeakObjectPtr *)FVar11.Data;
    if (DelayTargets._8_4_ != DelayTargets._52_4_) {
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                  *)&DelayTargets,local_100.ObjectSerialNumber ^ local_100.ObjectIndex,
                 (TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *)&local_100);
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if ((FWeakObjectPtr *)local_158.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_158.Data);
  }
  iVar13 = local_168.ArrayNum;
  pFVar14 = (FMotionSource *)(local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 0xc)
  ;
  FVar11.Data = local_168.AllocatorInstance.Data;
  while( true ) {
    if (local_168.ArrayNum != iVar13) {
      `TCheckedPointerIterator<FMotionDelayTarget::FMotionSource,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if ((FMotionSource *)FVar11.Data == pFVar14) break;
    if (SourceSamples._8_4_ != SourceSamples._52_4_) {
      uVar10 = ::GetTypeHash((FMotionSource *)FVar11.Data);
      TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMotionDelayTarget::FMotionSource>
                ((TSet<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>,FDefaultSetAllocator>
                  *)&SourceSamples,uVar10,(FMotionSource *)FVar11.Data);
    }
    FVar11.Data = FVar11.Data + 0xc;
  }
  if ((FMotionSource *)local_168.AllocatorInstance.Data != (FMotionSource *)0x0) {
    FMemory::Free(local_168.AllocatorInstance.Data);
  }
  return;
}

// SyncDelayBuffers @ 145957e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl MotionDelayService_Impl::SyncDelayBuffers(uint param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  double *pdVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  IXRTrackingSystem *pIVar7;
  FWeakObjectPtr FVar8;
  code *pcVar9;
  byte bVar10;
  uint uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *pTVar22;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *pTVar23;
  bool bVar24;
  char cVar25;
  IModularFeatures *this;
  TRotator<double> *pTVar26;
  int *piVar27;
  USceneComponent *pUVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  undefined4 *puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  ForAnyElementType FVar36;
  FWeakObjectPtr *pFVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  uint uVar41;
  undefined1 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_298 [8];
  ForAnyElementType local_290;
  undefined8 local_288;
  undefined1 local_280 [4];
  uint local_27c;
  ulonglong local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_238;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_228;
  uint uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  LARGE_INTEGER local_1e8;
  FWeakObjectPtr local_1e0;
  LARGE_INTEGER local_1d8;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_1d0;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint local_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TMap<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TMap<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  TQuat<double> local_108;
  TRotator<double> local_e8 [2];
  undefined4 local_b4;
  
  if (param_1 != LastSyncFrameId) {
    RefreshDelayBufferSizes();
    uVar39 = 0;
    uVar33 = 0;
    local_278 = 1;
    uVar35 = 0;
    uVar34 = SourceSamples._40_4_;
    uStack_21c = 1;
    uStack_20c = uVar33;
    uStack_220 = uVar33;
    local_208 = uVar35;
    if (uVar34 != 0) {
      puVar40 = (uint *)&SourceSamples.field_0x10;
      if (SourceSamples._32_8_ != 0) {
        puVar40 = (uint *)SourceSamples._32_8_;
      }
      uStack_21c = *puVar40;
      local_208 = 0;
      uStack_220 = 0;
      while (uStack_21c == 0) {
        lVar29 = (longlong)(int)uStack_220;
        local_208 = local_208 + 0x20;
        uStack_220 = uStack_220 + 1;
        uStack_21c = 1;
        uStack_20c = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_220)
        goto LAB_145957f20;
        uStack_21c = puVar40[lVar29 + 1];
      }
      uStack_21c = -uStack_21c & uStack_21c;
      uVar3 = (ulonglong)uStack_21c * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f8 = (int)lVar29;
      uStack_20c = (local_208 - 1) + local_1f8;
      if ((int)uVar34 < (int)uStack_20c) {
        uStack_20c = uVar34;
      }
    }
LAB_145957f20:
    uStack_204 = local_b4;
    uVar41 = uVar34 & 0xffffffe0;
    iStack_200 = SourceSamples._8_4_ - SourceSamples._52_4_;
    local_218 = 0x154bdb760;
    local_228 = &SourceSamples;
    bVar10 = SourceSamples._40_1_;
    TStack_198._padding_ = CONCAT44(uStack_21c,uStack_220);
    uStack_210 = 0xffffffff;
    TStack_198.CurrentBitIndex = uStack_20c;
    TStack_198.UnvisitedBitMask = 0xffffffff;
    local_1a0 = &SourceSamples;
    iVar31 = (int)uVar34 >> 5;
    TStack_198._28_4_ = local_b4;
    TStack_198.BaseBitIndex = local_208;
    uStack_178 = CONCAT44(uStack_1fc,iStack_200);
    TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10;
    uVar38 = uVar34;
    local_27c = uVar34;
    if ((int)uVar34 < 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar24) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar38 = SourceSamples._40_4_;
    }
    dVar12 = __real_4170000000000000;
    uVar11 = local_27c;
    if (uVar34 != uVar38) {
      lVar29 = 0x154bdb760;
      if (SourceSamples._32_8_ != 0) {
        lVar29 = SourceSamples._32_8_;
      }
      uVar34 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar29 + (longlong)iVar31 * 4);
      while (uVar34 == 0) {
        lVar30 = (longlong)iVar31;
        uVar41 = uVar41 + 0x20;
        iVar31 = iVar31 + 1;
        local_27c = uVar38;
        uVar11 = uVar38;
        if ((int)((uVar38 - 1) + ((int)(uVar38 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
        goto LAB_145958080;
        uVar34 = *(uint *)(lVar29 + 4 + lVar30 * 4);
      }
      uVar3 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f4 = (int)lVar29;
      local_27c = local_1f4 + -1 + uVar41;
      uVar11 = local_27c;
      if ((int)uVar38 < (int)local_27c) {
        local_27c = uVar38;
        uVar11 = uVar38;
      }
    }
LAB_145958080:
    while( true ) {
      pTVar22 = local_1a0;
      if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)uStack_178) {
        local_res10[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((TStack_198.CurrentBitIndex == uVar11) &&
          (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)&SourceSamples.field_0x10))
         && (pTVar22 == &SourceSamples)) break;
      puVar32 = (undefined4 *)((longlong)TStack_198.CurrentBitIndex * 0x30 + *(longlong *)pTVar22);
      local_110 = 0;
      local_240 = 0.0;
      local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_13c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_134 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uStack_118 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
      uStack_114 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
      dStack_120 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_250 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      dStack_248 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_270 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uStack_26c = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uStack_264 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
      uStack_12c = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
      local_128 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_260 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
      dStack_258 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      QueryPerformanceCounter(&local_1e8);
      bVar24 = false;
      local_240 = (double)local_1e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
      this = IModularFeatures::Get();
      IModularFeatures::GetModularFeatureImplementations<IMotionController>
                (this,&local_238,IMotionController::FeatureName);
      iVar31 = local_238.ArrayNum;
      pFVar1 = local_238.AllocatorInstance.Data + (longlong)local_238.ArrayNum * 8;
      FVar36.Data = local_238.AllocatorInstance.Data;
      while( true ) {
        if (local_238.ArrayNum != iVar31) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar36.Data == pFVar1) goto LAB_1459581fd;
        plVar6 = *(longlong **)FVar36.Data;
        if ((plVar6 != (longlong *)0x0) &&
           (cVar25 = (**(code **)(*plVar6 + 0x18))
                               (plVar6,*puVar32,*(undefined8 *)(puVar32 + 1),&dStack_258,&local_270,
                                DefaultWorldToMetersScale), cVar25 != '\0')) break;
        FVar36.Data = FVar36.Data + 8;
      }
      bVar24 = true;
LAB_1459581fd:
      if (((*(FName *)(puVar32 + 1) == IMotionController::HMDSourceId) &&
          (pIVar7 = (GEngine->XRSystem).Object, pIVar7 != (IXRTrackingSystem *)0x0)) &&
         (cVar25 = (**(code **)((longlong)*pIVar7 + 0x58))(pIVar7,0,&local_108,&local_270),
         cVar25 != '\0')) {
        pTVar26 = UE::Math::TQuat<double>::Rotator(&local_108,local_e8);
        bVar24 = true;
        dStack_258 = pTVar26->Pitch;
        local_250 = pTVar26->Yaw;
        dStack_248 = pTVar26->Roll;
      }
      if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.AllocatorInstance.Data);
      }
      if (!bVar24) {
        piVar27 = puVar32 + 6;
        if (*(char *)(puVar32 + 9) == '\0') {
          piVar27 = puVar32 + 8;
        }
        if (0 < *piVar27) {
          if (puVar32[8] == 0) {
            if (*(char *)(puVar32 + 9) == '\0') {
              uVar34 = 0;
            }
            else {
              uVar34 = puVar32[6] - 1;
            }
          }
          else {
            uVar34 = puVar32[8] - 1;
          }
          uVar41 = uVar35;
          if ((int)uVar34 < (int)puVar32[6]) {
            uVar41 = ~uVar34 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar30 = (longlong)(int)uVar34 * 0x38;
          lVar29 = *(longlong *)(puVar32 + 4);
          puVar2 = (undefined4 *)(lVar30 + lVar29);
          local_270 = *puVar2;
          uStack_26c = puVar2[1];
          uStack_268 = puVar2[2];
          uStack_264 = puVar2[3];
          local_260 = *(undefined8 *)(lVar30 + 0x10 + lVar29);
          pdVar4 = (double *)(lVar30 + 0x18 + lVar29);
          dStack_258 = *pdVar4;
          local_250 = pdVar4[1];
          dStack_248 = *(double *)(lVar30 + 0x28 + lVar29);
        }
      }
      dVar21 = local_240;
      dVar20 = dStack_248;
      dVar19 = local_250;
      dVar18 = dStack_258;
      uVar17 = local_260;
      uVar16 = uStack_264;
      uVar15 = uStack_268;
      uVar14 = uStack_26c;
      uVar13 = local_270;
      uVar34 = puVar32[8];
      uVar41 = uVar35;
      if ((int)uVar34 < (int)puVar32[6]) {
        uVar41 = ~uVar34 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar29 = *(longlong *)(puVar32 + 4);
      lVar30 = (longlong)(int)uVar34 * 0x38;
      puVar2 = (undefined4 *)(lVar30 + lVar29);
      *puVar2 = uVar13;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar5 = (undefined8 *)(lVar30 + 0x10 + lVar29);
      *puVar5 = uVar17;
      puVar5[1] = dVar18;
      pdVar4 = (double *)(lVar30 + 0x20 + lVar29);
      *pdVar4 = dVar19;
      pdVar4[1] = dVar20;
      *(double *)(lVar30 + 0x30 + lVar29) = dVar21;
      uVar34 = uVar35;
      if ((int)puVar32[8] < (int)puVar32[6]) {
        uVar34 = (uint)~puVar32[8] >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar34 = (puVar32[8] + 1) % (uint)puVar32[6];
      puVar32[8] = uVar34;
      *(byte *)(puVar32 + 9) = *(byte *)(puVar32 + 9) | uVar34 == 0;
      TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    }
    local_res8 = (undefined1)param_1;
    local_298[0] = local_res8;
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = 0;
    uVar34 = DelayTargets._40_4_;
    uStack_1b4 = uVar39;
    if (uVar34 != 0) {
      puVar40 = (uint *)&DelayTargets.field_0x10;
      if (DelayTargets._32_8_ != 0) {
        puVar40 = (uint *)DelayTargets._32_8_;
      }
      uVar35 = *puVar40;
      uVar33 = uVar39;
      while (uVar35 == 0) {
        lVar29 = (longlong)(int)uVar33;
        uVar39 = uVar39 + 0x20;
        uVar33 = uVar33 + 1;
        uStack_1b4 = uVar34;
        if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar33)
        goto LAB_1459584e2;
        uVar35 = puVar40[lVar29 + 1];
      }
      local_278 = (ulonglong)(-uVar35 & uVar35);
      uVar3 = local_278 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1f0 = (int)lVar29;
      uStack_1b4 = (uVar39 - 1) + local_1f0;
      if ((int)uVar34 < (int)uStack_1b4) {
        uStack_1b4 = uVar34;
      }
    }
LAB_1459584e2:
    uStack_1ac = uStack_20c;
    uVar35 = uVar34 & 0xffffffe0;
    iStack_1a8 = DelayTargets._8_4_ - DelayTargets._52_4_;
    uStack_1c4 = (undefined4)local_278;
    bVar10 = DelayTargets._40_1_;
    uStack_1b8 = 0xffffffff;
    local_1d0 = &DelayTargets;
    TStack_168._padding_ = CONCAT44(uStack_1c4,uVar33);
    local_1c0 = 0x154bdb7b0;
    TStack_168.CurrentBitIndex = uStack_1b4;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    local_170 = &DelayTargets;
    iVar31 = (int)uVar34 >> 5;
    TStack_168._28_4_ = uStack_20c;
    TStack_168.BaseBitIndex = uVar39;
    uStack_148 = CONCAT44(uStack_1a4,iStack_1a8);
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10;
    uVar41 = uVar34;
    uStack_1c8 = uVar33;
    local_1b0 = uVar39;
    if ((int)uVar34 < 0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar24) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar41 = DelayTargets._40_4_;
    }
    if (uVar34 != uVar41) {
      lVar29 = 0x154bdb7b0;
      if (DelayTargets._32_8_ != 0) {
        lVar29 = DelayTargets._32_8_;
      }
      uVar39 = -1 << (bVar10 & 0x1f) & *(uint *)(lVar29 + (longlong)iVar31 * 4);
      while (uVar39 == 0) {
        lVar30 = (longlong)iVar31;
        uVar35 = uVar35 + 0x20;
        iVar31 = iVar31 + 1;
        uVar34 = uVar41;
        if ((int)((uVar41 - 1) + ((int)(uVar41 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
        goto LAB_145958600;
        uVar39 = *(uint *)(lVar29 + 4 + lVar30 * 4);
      }
      uVar3 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_1ec = (int)lVar29;
      uVar34 = local_1ec + -1 + uVar35;
      if ((int)uVar41 < (int)uVar34) {
        uVar34 = uVar41;
      }
    }
LAB_145958600:
    while( true ) {
      pTVar23 = local_170;
      if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_168.CurrentBitIndex == uVar34) &&
          (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)&DelayTargets.field_0x10)) &&
         (pTVar23 == &DelayTargets)) break;
      pFVar37 = (FWeakObjectPtr *)
                ((longlong)TStack_168.CurrentBitIndex * 0x20 + *(longlong *)pTVar23);
      bVar24 = FWeakObjectPtr::IsValid(pFVar37);
      if (bVar24) {
        FVar8 = pFVar37[1];
        pUVar28 = (USceneComponent *)FWeakObjectPtr::Get(pFVar37);
        `MotionDelayService_Impl::SyncDelayBuffers'::__l6::<lambda_1>::operator()
                  (local_298,pUVar28,(FMotionDelayTarget *)FVar8);
      }
      else {
        if (((local_290.Data <= pFVar37) &&
            (pFVar37 < (FWeakObjectPtr *)(local_290.Data + (longlong)local_288._4_4_ * 8))) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar24)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar31 = (int)local_288;
        if ((int)local_288 == local_288._4_4_) {
          iVar31 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_290,(int *)((longlong)&local_288 + 4));
        }
        local_288 = CONCAT44(local_288._4_4_,iVar31 + 1);
        *(FWeakObjectPtr *)(local_290.Data + (longlong)iVar31 * 8) = *pFVar37;
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
    }
    iVar31 = (int)local_288;
    pFVar37 = (FWeakObjectPtr *)(local_290.Data + (longlong)(int)local_288 * 8);
    FVar36.Data = local_290.Data;
    while( true ) {
      if ((int)local_288 != iVar31) {
        `TCheckedPointerIterator<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_280);
      }
      if ((FWeakObjectPtr *)FVar36.Data == pFVar37) break;
      local_1e0 = *(FWeakObjectPtr *)FVar36.Data;
      if (DelayTargets._8_4_ != DelayTargets._52_4_) {
        TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                    *)&DelayTargets,local_1e0.ObjectSerialNumber ^ local_1e0.ObjectIndex,
                   (TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *)&local_1e0);
      }
      FVar36.Data = FVar36.Data + 8;
    }
    if ((FWeakObjectPtr *)local_290.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_290.Data);
    }
    LastSyncFrameId = param_1;
    QueryPerformanceCounter(&local_1d8);
    FrameSyncTime = (double)local_1d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar12;
  }
  return;
}

// Z_Construct_UClass_UHandKeypointConversion_NoRegister @ 145959340

UClass * __cdecl Z_Construct_UClass_UHandKeypointConversion_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"HandKeypointConversion",
               &Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton,
               UHandKeypointConversion::StaticRegisterNativesUHandKeypointConversion,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UHandKeypointConversion>
               ,InternalVTableHelperCtorCaller<UHandKeypointConversion>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UHandKeypointConversion.InnerSingleton;
}

// Z_Construct_UClass_UMotionControllerComponent_NoRegister @ 145959400

UClass * __cdecl Z_Construct_UClass_UMotionControllerComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HeadMountedDisplay",L"MotionControllerComponent",
               &Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton,
               UMotionControllerComponent::StaticRegisterNativesUMotionControllerComponent,0x690,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionControllerComponent>,
               InternalVTableHelperCtorCaller<UMotionControllerComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionControllerComponent.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin @ 1459594c0

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin(void)

{
  if (Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState @ 145959500

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState(void)

{
  if (Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector @ 145959540

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector(void)

{
  if (Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode @ 145959580

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode(void)

{
  if (Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult @ 1459595c0

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult(void)

{
  if (Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags @ 145959600

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags(void)

{
  if (Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType @ 145959640

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType(void)

{
  if (Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton;
}

// Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType @ 145959680

UEnum * __cdecl Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType(void)

{
  if (Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton,
               &Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton;
}

// Z_Construct_UScriptStruct_FXRDeviceId @ 1459596c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FXRDeviceId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FXRDeviceId.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FXRDeviceId.InnerSingleton,
               &Z_Construct_UScriptStruct_FXRDeviceId_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FXRDeviceId.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FXRDeviceId.InnerSingleton;
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

// Z_Construct_UScriptStruct_FXRHMDData @ 145959740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FXRHMDData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FXRHMDData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FXRHMDData.InnerSingleton,
               &Z_Construct_UScriptStruct_FXRHMDData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FXRHMDData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FXRHMDData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FXRHandTrackingState @ 1459597c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FXRHandTrackingState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FXRHandTrackingState.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FXRHandTrackingState.InnerSingleton,
               &Z_Construct_UScriptStruct_FXRHandTrackingState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FXRHandTrackingState.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FXRHandTrackingState.InnerSingleton;
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

// Z_Construct_UScriptStruct_FXRMotionControllerState @ 145959840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FXRMotionControllerState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FXRMotionControllerState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FXRMotionControllerState.InnerSingleton,
               &Z_Construct_UScriptStruct_FXRMotionControllerState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FXRMotionControllerState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FXRMotionControllerState.InnerSingleton;
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

// IMPLEMENT_MODULE_HeadMountedDisplay @ 14595a0e0

void __cdecl IMPLEMENT_MODULE_HeadMountedDisplay(void)

{
  return;
}

// OnActivateVisualizationComponent'' @ 1503c7230

void __cdecl
`dynamic_atexit_destructor_for_'UMotionControllerComponent::OnActivateVisualizationComponent__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UMotionControllerComponent::OnActivateVisualizationComponent._8_8_,
             UMotionControllerComponent::OnActivateVisualizationComponent._16_4_);
  if (UMotionControllerComponent::OnActivateVisualizationComponent._8_8_ != 0) {
    FMemory::Free((void *)UMotionControllerComponent::OnActivateVisualizationComponent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &UMotionControllerComponent::OnActivateVisualizationComponent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableMotionControllerLateUpdate'' @ 1503c7270

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarEnableMotionControllerLateUpdate__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarEnableMotionControllerLateUpdate);
  return;
}

// `dynamic_atexit_destructor_for_'CVarXRLateUpdateMangerDisable'' @ 1503c7290

void __cdecl _dynamic_atexit_destructor_for__CVarXRLateUpdateMangerDisable__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarXRLateUpdateMangerDisable);
  return;
}

// `dynamic_atexit_destructor_for_'CritSect'' @ 1503c72b0

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__CritSect__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503c72b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&CritSect);
  return;
}

// `dynamic_atexit_destructor_for_'DelayClients'' @ 1503c72d0

void __cdecl MotionDelayService_Impl::_dynamic_atexit_destructor_for__DelayClients__(void)

{
  DestructItems<TWeakPtr<FMotionDelayClient,1>,int>
            ((TWeakPtr<FMotionDelayClient,1> *)DelayClients.AllocatorInstance.Data,
             DelayClients.ArrayNum);
  if (DelayClients.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DelayClients.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DelayTargets'' @ 1503c7310

void __cdecl MotionDelayService_Impl::_dynamic_atexit_destructor_for__DelayTargets__(void)

{
  DelayTargets._72_4_ = 0;
  if (DelayTargets._64_8_ != 0) {
    FMemory::Free((void *)DelayTargets._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&DelayTargets);
  return;
}

// `dynamic_atexit_destructor_for_'LogHMD'' @ 1503c7350

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogHMD__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogHMD);
  return;
}

// `dynamic_atexit_destructor_for_'LogLoadingSplash'' @ 1503c7370

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLoadingSplash__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLoadingSplash);
  return;
}

// `dynamic_atexit_destructor_for_'LogMotionControllerComponent'' @ 1503c7390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMotionControllerComponent__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMotionControllerComponent);
  return;
}

// `dynamic_atexit_destructor_for_'LogMotionDelayBuffer'' @ 1503c73b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMotionDelayBuffer__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMotionDelayBuffer);
  return;
}

// `dynamic_atexit_destructor_for_'MotionSourceToEControllerHandMap'' @ 1503c73d0

void __cdecl
`IMotionController::GetHandEnumForSourceName'::__l2::
_dynamic_atexit_destructor_for__MotionSourceToEControllerHandMap__(void)

{
  MotionSourceToEControllerHandMap._72_4_ = 0;
  if (MotionSourceToEControllerHandMap._64_8_ != 0) {
    FMemory::Free((void *)MotionSourceToEControllerHandMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,enum_EControllerHand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,enum_EControllerHand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&MotionSourceToEControllerHandMap);
  return;
}

// `dynamic_atexit_destructor_for_'SourceSamples'' @ 1503c7410

void __cdecl MotionDelayService_Impl::_dynamic_atexit_destructor_for__SourceSamples__(void)

{
  SourceSamples._72_4_ = 0;
  if (SourceSamples._64_8_ != 0) {
    FMemory::Free((void *)SourceSamples._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMotionDelayTarget::FMotionSource,TCircularHistoryBuffer<MotionDelayService_Impl::FPoseSample>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&SourceSamples);
  return;
}

