// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineRHI
// Functions: 95

// FeaturesRequestedAtSLInitTime'' @ 141400eb0

void __cdecl `dynamic_initializer_for_'FStreamlineRHI::FeaturesRequestedAtSLInitTime__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FStreamlineRHI::FeaturesRequestedAtSLInitTime__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlieeLogLevel'' @ 141400ed0

void __cdecl _dynamic_initializer_for__CVarStreamlieeLogLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamlieeLogLevel,L"r.Streamline.LogFunctions.LogLevel",&LogStreamlineLogLevel,
             L"Determines which functions are logged and noe\n0: Log subset of features, don\'t log Get Functions\n1: Log all features, don\'t log Get functions\n2: Log all features, log Get functions\n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlieeLogLevel__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineFilterRedundantSetOptionsCalls'' @ 141400f20

void __cdecl _dynamic_initializer_for__CVarStreamlineFilterRedundantSetOptionsCalls__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineFilterRedundantSetOptionsCalls,
             L"r.Streamline.FilterRedundantSetOptionsCalls",local_res8,
             L"Determines whether the UE plugin filters redundant calls into\n 0: call every streamline sl{Feature}SetOptions function, regardless of whether UE plugin side changed or not. Helpful for debugging. Can also be override with -sl{no}filter command line option  \n 1: only call sl{Feature}SetOptions when the UE plugin side changed(default)"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineFilterRedundantSetOptionsCalls__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineInitializePlugin'' @ 141400f70

void __cdecl _dynamic_initializer_for__CVarStreamlineInitializePlugin__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarStreamlineInitializePlugin,L"r.Streamline.InitializePlugin",local_res8,
             L"Enable/disable initializing the Streamline plugin (default = true)",4);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineInitializePlugin__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineLogFunctions'' @ 141400fc0

void __cdecl _dynamic_initializer_for__CVarStreamlineLogFunctions__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarStreamlineLogFunctions,L"r.Streamline.LogFunctions",&bLogStreamlineLogFunctions,
             L"Enable/disable whether streamline functions calls and thread are written to the log. Is also set to true with -slloglevel=3 \n"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineLogFunctions__);
  return;
}

// `dynamic_initializer_for_'CVarStreamlineMaxNumSwapchainProxies'' @ 141401010

void __cdecl _dynamic_initializer_for__CVarStreamlineMaxNumSwapchainProxies__(void)

{
  int local_res8 [8];
  
  local_res8[0] = -1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarStreamlineMaxNumSwapchainProxies,L"r.Streamline.MaxNumSwapchainProxies",local_res8
             ,
             L"Determines how many Streamline swapchain proxies can be created. This impacts compatibility with some Streamline features that have restrictions on that\n -1: automatic, depending on enabled Streamline features (default)\n 0: no swap chain proxy. Likely means features needing one won\'t work 1..n: only create a Streamline swapchain proxy for that many swapchains/windows"
             ,0x20);
  atexit(_dynamic_atexit_destructor_for__CVarStreamlineMaxNumSwapchainProxies__);
  return;
}

// `dynamic_initializer_for_'GStreamlineRHI'' @ 141401060

void __cdecl _dynamic_initializer_for__GStreamlineRHI__(void)

{
  atexit(_dynamic_atexit_destructor_for__GStreamlineRHI__);
  return;
}

// `dynamic_initializer_for_'LogStreamlineAPI'' @ 141401080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineAPI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineAPI,L"LogStreamlineAPI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineAPI__);
  return;
}

// `dynamic_initializer_for_'LogStreamlineRHI'' @ 1414010c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogStreamlineRHI__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogStreamlineRHI,L"LogStreamlineRHI",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogStreamlineRHI__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantStreamlineRHI'' @ 141401100

void __cdecl _dynamic_initializer_for__ModuleRegistrantStreamlineRHI__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "StreamlineRHI";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"StreamlineRHI",0xd);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FStreamlineRHIModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'PlatformDir'' @ 141401150

void __cdecl _dynamic_initializer_for__PlatformDir__(void)

{
  FString::FString(&PlatformDir,L"Win64");
  atexit(_dynamic_atexit_destructor_for__PlatformDir__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineRHI_Public_StreamlineSettings_h__Script_StreamlineRHI_519694239'' @ 141401180

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineRHI_Public_StreamlineSettings_h__Script_StreamlineRHI_519694239__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StreamlineRHI",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineRHI_Public_StreamlineSettings_h__Script_StreamlineRHI_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_StreamlineCore_Source_StreamlineRHI_Public_StreamlineSettings_h__Script_StreamlineRHI_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StreamlineRHI'' @ 1414011d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StreamlineRHI__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc2d2b66d;
  local_res8[0].DeclarationsHash = 0xcbcb1839;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StreamlineRHI,L"/Script/StreamlineRHI",
             &Z_Registration_Info_UPackage__Script_StreamlineRHI,local_res8);
  return;
}

// Z_Construct_UPackage__Script_StreamlineRHI @ 14de58520

UPackage * __cdecl Z_Construct_UPackage__Script_StreamlineRHI(void)

{
  if (Z_Registration_Info_UPackage__Script_StreamlineRHI.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StreamlineRHI.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StreamlineRHI.OuterSingleton;
}

// Z_Construct_UClass_UStreamlineOverrideSettings @ 14de586c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamlineOverrideSettings(void)

{
  if (Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton,
               &Z_Construct_UClass_UStreamlineOverrideSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamlineOverrideSettings.OuterSingleton;
}

// Z_Construct_UClass_UStreamlineSettings @ 14de58700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UStreamlineSettings(void)

{
  if (Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton,
               &Z_Construct_UClass_UStreamlineSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UStreamlineSettings.OuterSingleton;
}

// Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride @ 14de58740

UEnum * __cdecl Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride(void)

{
  if (Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton,
               &Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EStreamlineSettingOverride.InnerSingleton;
}

// EStreamlineSettingOverride_StaticEnum @ 14de58780

UEnum * __cdecl EStreamlineSettingOverride_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineRHI();
    Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride,(UObject *)pUVar1,
                       L"EStreamlineSettingOverride");
  }
  return Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton;
}

// NewProp_bLoadDebugOverlay_SetBit @ 14de587c0

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bLoadDebugOverlay_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAllowOTAUpdate_SetBit @ 14de587d0

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bAllowOTAUpdate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// NewProp_bEnableStreamlineD3D12_SetBit @ 14de587e0

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D12_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bEnableStreamlineD3D11_SetBit @ 14de587f0

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableStreamlineD3D11_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit @ 14de58800

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bEnableDLSSFGInPlayInEditorViewports_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bUseSlSetTag_SetBit @ 14de58810

void __cdecl
Z_Construct_UClass_UStreamlineSettings_Statics::NewProp_bUseSlSetTag_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14de58fd0

void * __thiscall
FStreamlineRHIModule::_scalar_deleting_destructor_(FStreamlineRHIModule *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->StreamlineBinaryDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// InternalConstructor<UStreamlineOverrideSettings> @ 14de591e0

void __cdecl InternalConstructor<UStreamlineOverrideSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 0x2020202;
    *(undefined ***)this = &___7UStreamlineOverrideSettings__6B_;
  }
  return;
}

// InternalConstructor<UStreamlineSettings> @ 14de59220

void __cdecl InternalConstructor<UStreamlineSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7UStreamlineSettings__6B_;
    *(undefined4 *)&this[1].field_0x4 = 0;
    *(undefined4 *)&this[1].field_0x8 = 0x10101;
  }
  return;
}

// InternalVTableHelperCtorCaller<UStreamlineOverrideSettings> @ 14de59270

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UStreamlineOverrideSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamlineOverrideSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0x2020202;
    *(undefined ***)pUVar1 = &___7UStreamlineOverrideSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UStreamlineSettings> @ 14de59330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UStreamlineSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UStreamlineSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x100;
    *(undefined ***)pUVar1 = &___7UStreamlineSettings__6B_;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x10101;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UStreamlineSettings> @ 14de593f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStreamlineSettings * __cdecl NewObject<UStreamlineSettings>(UObject *param_1)

{
  UClass *pUVar1;
  UStreamlineSettings *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UStreamlineSettings::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UStreamlineSettings *)
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

// StaticEnum<enum_EStreamlineSettingOverride> @ 14de59490

UEnum * __cdecl StaticEnum<enum_EStreamlineSettingOverride>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StreamlineRHI();
    Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_StreamlineRHI_EStreamlineSettingOverride,(UObject *)pUVar1,
                       L"EStreamlineSettingOverride");
  }
  return Z_Registration_Info_UEnum_EStreamlineSettingOverride.OuterSingleton;
}

// _Integral_to_string<char,unsigned_int> @ 14de594d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __cdecl
std::_Integral_to_string<char,unsigned_int>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *__return_storage_ptr__,
          uint param_1)

{
  char *pcVar1;
  undefined1 auStack_58 [32];
  allocator<char> local_38 [28];
  char local_1c [4];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pcVar1 = local_1c + 1;
  do {
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)param_1 + (char)((ulonglong)param_1 / 10) * -10 + '0';
    param_1 = (uint)((ulonglong)param_1 / 10);
  } while (param_1 != 0);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_><char_*,0>
            (__return_storage_ptr__,pcVar1,local_1c + 1,local_38);
  return __return_storage_ptr__;
}

// findStruct<sl::ViewportHandle> @ 14de59550

ViewportHandle * __cdecl sl::findStruct<sl::ViewportHandle>(void *param_1)

{
  for (; (param_1 != (ViewportHandle *)0x0 &&
         ((((ViewportHandle *)param_1)->_padding_ != ViewportHandle::s_structType._0_8_ ||
          ((uchar  [8])((ViewportHandle *)param_1)->_padding_ != ViewportHandle::s_structType.data4)
          ))); param_1 = (void *)((ViewportHandle *)param_1)->_padding_) {
  }
  return param_1;
}

// Constants @ 14de59590

Constants * __thiscall sl::Constants::Constants(Constants *this)

{
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xdcd35ad7;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x4bad4e4a;
  *(undefined4 *)&this->_padding_ = 0xc4e00ca9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xfe3ab29e;
  this->_padding_ = 2;
  (this->cameraViewToClip).row[0].x = 3.4028235e+38;
  (this->cameraViewToClip).row[0].y = 3.4028235e+38;
  (this->cameraViewToClip).row[0].z = 3.4028235e+38;
  (this->cameraViewToClip).row[0].w = 3.4028235e+38;
  (this->cameraViewToClip).row[1].x = 3.4028235e+38;
  (this->cameraViewToClip).row[1].y = 3.4028235e+38;
  (this->cameraViewToClip).row[1].z = 3.4028235e+38;
  (this->cameraViewToClip).row[1].w = 3.4028235e+38;
  (this->cameraViewToClip).row[2].x = 3.4028235e+38;
  (this->cameraViewToClip).row[2].y = 3.4028235e+38;
  (this->cameraViewToClip).row[2].z = 3.4028235e+38;
  (this->cameraViewToClip).row[2].w = 3.4028235e+38;
  (this->cameraViewToClip).row[3].x = 3.4028235e+38;
  (this->cameraViewToClip).row[3].y = 3.4028235e+38;
  (this->cameraViewToClip).row[3].z = 3.4028235e+38;
  (this->cameraViewToClip).row[3].w = 3.4028235e+38;
  (this->clipToCameraView).row[0].x = 3.4028235e+38;
  (this->clipToCameraView).row[0].y = 3.4028235e+38;
  (this->clipToCameraView).row[0].z = 3.4028235e+38;
  (this->clipToCameraView).row[0].w = 3.4028235e+38;
  (this->clipToCameraView).row[1].x = 3.4028235e+38;
  (this->clipToCameraView).row[1].y = 3.4028235e+38;
  (this->clipToCameraView).row[1].z = 3.4028235e+38;
  (this->clipToCameraView).row[1].w = 3.4028235e+38;
  (this->clipToCameraView).row[2].x = 3.4028235e+38;
  (this->clipToCameraView).row[2].y = 3.4028235e+38;
  (this->clipToCameraView).row[2].z = 3.4028235e+38;
  (this->clipToCameraView).row[2].w = 3.4028235e+38;
  (this->clipToCameraView).row[3].x = 3.4028235e+38;
  (this->clipToCameraView).row[3].y = 3.4028235e+38;
  (this->clipToCameraView).row[3].z = 3.4028235e+38;
  (this->clipToCameraView).row[3].w = 3.4028235e+38;
  (this->clipToLensClip).row[0].x = 3.4028235e+38;
  (this->clipToLensClip).row[0].y = 3.4028235e+38;
  (this->clipToLensClip).row[0].z = 3.4028235e+38;
  (this->clipToLensClip).row[0].w = 3.4028235e+38;
  (this->clipToLensClip).row[1].x = 3.4028235e+38;
  (this->clipToLensClip).row[1].y = 3.4028235e+38;
  (this->clipToLensClip).row[1].z = 3.4028235e+38;
  (this->clipToLensClip).row[1].w = 3.4028235e+38;
  (this->clipToLensClip).row[2].x = 3.4028235e+38;
  (this->clipToLensClip).row[2].y = 3.4028235e+38;
  (this->clipToLensClip).row[2].z = 3.4028235e+38;
  (this->clipToLensClip).row[2].w = 3.4028235e+38;
  (this->clipToLensClip).row[3].x = 3.4028235e+38;
  (this->clipToLensClip).row[3].y = 3.4028235e+38;
  (this->clipToLensClip).row[3].z = 3.4028235e+38;
  (this->clipToLensClip).row[3].w = 3.4028235e+38;
  (this->clipToPrevClip).row[0].x = 3.4028235e+38;
  (this->clipToPrevClip).row[0].y = 3.4028235e+38;
  (this->clipToPrevClip).row[0].z = 3.4028235e+38;
  (this->clipToPrevClip).row[0].w = 3.4028235e+38;
  (this->clipToPrevClip).row[1].x = 3.4028235e+38;
  (this->clipToPrevClip).row[1].y = 3.4028235e+38;
  (this->clipToPrevClip).row[1].z = 3.4028235e+38;
  (this->clipToPrevClip).row[1].w = 3.4028235e+38;
  (this->clipToPrevClip).row[2].x = 3.4028235e+38;
  (this->clipToPrevClip).row[2].y = 3.4028235e+38;
  (this->clipToPrevClip).row[2].z = 3.4028235e+38;
  (this->clipToPrevClip).row[2].w = 3.4028235e+38;
  (this->clipToPrevClip).row[3].x = 3.4028235e+38;
  (this->clipToPrevClip).row[3].y = 3.4028235e+38;
  (this->clipToPrevClip).row[3].z = 3.4028235e+38;
  (this->clipToPrevClip).row[3].w = 3.4028235e+38;
  (this->prevClipToClip).row[0].x = 3.4028235e+38;
  (this->prevClipToClip).row[0].y = 3.4028235e+38;
  (this->prevClipToClip).row[0].z = 3.4028235e+38;
  (this->prevClipToClip).row[0].w = 3.4028235e+38;
  (this->prevClipToClip).row[1].x = 3.4028235e+38;
  (this->prevClipToClip).row[1].y = 3.4028235e+38;
  (this->prevClipToClip).row[1].z = 3.4028235e+38;
  (this->prevClipToClip).row[1].w = 3.4028235e+38;
  (this->prevClipToClip).row[2].x = 3.4028235e+38;
  (this->prevClipToClip).row[2].y = 3.4028235e+38;
  (this->prevClipToClip).row[2].z = 3.4028235e+38;
  (this->prevClipToClip).row[2].w = 3.4028235e+38;
  (this->prevClipToClip).row[3].x = 3.4028235e+38;
  (this->prevClipToClip).row[3].y = 3.4028235e+38;
  (this->prevClipToClip).row[3].z = 3.4028235e+38;
  (this->prevClipToClip).row[3].w = 3.4028235e+38;
  (this->jitterOffset).x = 3.4028235e+38;
  (this->jitterOffset).y = 3.4028235e+38;
  (this->mvecScale).x = 3.4028235e+38;
  (this->mvecScale).y = 3.4028235e+38;
  (this->cameraPinholeOffset).x = 3.4028235e+38;
  (this->cameraPinholeOffset).y = 3.4028235e+38;
  (this->cameraPos).x = 3.4028235e+38;
  (this->cameraPos).y = 3.4028235e+38;
  (this->cameraPos).z = 3.4028235e+38;
  (this->cameraUp).x = 3.4028235e+38;
  (this->cameraUp).y = 3.4028235e+38;
  (this->cameraUp).z = 3.4028235e+38;
  (this->cameraRight).x = 3.4028235e+38;
  (this->cameraRight).y = 3.4028235e+38;
  (this->cameraRight).z = 3.4028235e+38;
  (this->cameraFwd).x = 3.4028235e+38;
  (this->cameraFwd).y = 3.4028235e+38;
  (this->cameraFwd).z = 3.4028235e+38;
  this->cameraNear = 3.4028235e+38;
  this->cameraFar = 3.4028235e+38;
  this->cameraFOV = 3.4028235e+38;
  this->cameraAspectRatio = 3.4028235e+38;
  this->motionVectorsInvalidValue = 3.4028235e+38;
  this->depthInverted = eInvalid;
  this->cameraMotionIncluded = eInvalid;
  this->motionVectors3D = eInvalid;
  this->reset = eInvalid;
  this->orthographicProjection = eFalse;
  this->motionVectorsDilated = eFalse;
  this->motionVectorsJittered = eFalse;
  this->minRelativeLinearDepthObjectSeparation = 40.0;
  return this;
}

// float4 @ 14de59c50

float4 * __thiscall sl::float4::float4(float4 *this)

{
  this->x = 3.4028235e+38;
  this->y = 3.4028235e+38;
  this->z = 3.4028235e+38;
  this->w = 3.4028235e+38;
  return this;
}

// `scalar_deleting_destructor' @ 14de5a620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FStreamlineRHI::_scalar_deleting_destructor_(FStreamlineRHI *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  FSLFrameTokenProvider *lpCriticalSection;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  this->_padding_ = (longlong)&___7FStreamlineRHI__6B_;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FStreamlineRHI::~FStreamlineRHI",0x1f,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FStreamlineRHI::~FStreamlineRHI",0x1f,Yes);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  pFVar1 = (this->SupportedFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadedFeatures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lpCriticalSection = (this->FrameTokenProvider).Ptr;
  if (lpCriticalSection != (FSLFrameTokenProvider *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x38);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14de5a790

void * __thiscall
UStreamlineOverrideSettings::_scalar_deleting_destructor_
          (UStreamlineOverrideSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UStreamlineOverrideSettings__6B_;
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

// `scalar_deleting_destructor' @ 14de5a7f0

void * __thiscall
UStreamlineSettings::_scalar_deleting_destructor_(UStreamlineSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UStreamlineSettings__6B_;
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

// AreStreamlineFunctionsLoaded @ 14de5a850

bool __cdecl AreStreamlineFunctionsLoaded(void)

{
  return bIsStreamlineFunctionPointersLoaded;
}

// CurrentThreadName @ 14de5a930

FString * __cdecl CurrentThreadName(FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  DWORD DVar1;
  FThreadManager *this;
  FString *pFVar2;
  int *piVar3;
  longlong lVar4;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  DVar1 = GetCurrentThreadId();
  pFVar2 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
            ::__l2::GameThreadName;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                 ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                      ::__l2::GameThreadName,L"GameThread");
    atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__GameThreadName__);
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar3 < `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                 ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_1__),
     `public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    FString::FString(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                      ::__l2::RenderThreadName,L"RenderThread");
    atexit(`FThreadManager::GetThreadName'::__l2::_dynamic_atexit_destructor_for__RenderThreadName__
          );
    _Init_thread_footer(&`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  if (DVar1 != GGameThreadId) {
    if (DVar1 == GRenderThreadId) {
      pFVar2 = &`public:_static_class_FString_const&___ptr64___cdecl_FThreadManager::GetThreadName(unsigned_int)'
                ::__l2::RenderThreadName;
    }
    else {
      this = FThreadManager::Get();
      pFVar2 = FThreadManager::GetThreadNameInternal(this,DVar1);
    }
  }
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = (pFVar2->Data).ArrayNum;
  lVar4 = (longlong)local_10;
  _Src = (pFVar2->Data).AllocatorInstance.Data;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_10,0,&local_18,local_10,&local_c);
    memcpy(local_18.Data,_Src,lVar4 * 2);
  }
  FString::PrintfImpl(__return_storage_ptr__,L"%s (tid=%u)");
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return __return_storage_ptr__;
}

// EmptyLinkFunctionForGeneratedCodeStreamlineRHI_init @ 14de5ab00

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineRHI_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStreamlineSettings @ 14de5ab10

void __cdecl EmptyLinkFunctionForGeneratedCodeStreamlineSettings(void)

{
  return;
}

// GetPlatformStreamlineRHI @ 14de5ac00

FStreamlineRHI * __cdecl GetPlatformStreamlineRHI(void)

{
  return GStreamlineRHI.Ptr;
}

// GetPlatformStreamlineSupport @ 14de5ac10

EStreamlineSupport __cdecl GetPlatformStreamlineSupport(void)

{
  return GStreamlineSupport;
}

// IsStreamlineSupported @ 14de5ce00

bool __cdecl IsStreamlineSupported(void)

{
  wchar_t *pwVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar1 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar1,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     (((PRIVATE_GIsRunningCommandlet == false && (bIsStreamlineInitialized != false)) &&
      (bIsStreamlineFunctionPointersLoaded != false)))) {
    return true;
  }
  return false;
}

// LoadConfigSettingWithOverrides @ 14de5d660

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
`anonymous_namespace'::LoadConfigSettingWithOverrides
          (bool param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FStaticBasicLogRecord *pFVar9;
  bool local_res8 [8];
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res8[0] = false;
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GConfig != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                         ,0x2e2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = FConfigCacheIni::GetBool(GConfig,StreamlineIniSection,param_2,local_res8,&GEngineIni);
  if (bVar2) {
    param_1 = local_res8[0];
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar4 = FConfigCacheIni::GetString
                    (GConfig,StreamlineOverrideIniSection,param_3,&local_58,&GEngineIni);
  if (bVar4) {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"Enabled");
    if (iVar6 == 0) {
      param_1 = true;
    }
    else {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar8.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"Disabled");
      if (iVar6 == 0) {
        param_1 = false;
      }
      else {
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar8.Data = local_58.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"UseProjectSettings");
        if (iVar6 == 0) {
          bVar4 = false;
        }
      }
    }
  }
  ::FString::PrintfImpl(&local_38,L"sl%s");
  ::FString::PrintfImpl(&local_48,L"slno%s");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar8.Data = local_38.Data.AllocatorInstance.Data;
  }
  pwVar7 = FCommandLine::Get();
  bVar5 = FParse::Param(pwVar7,(wchar_t *)FVar8.Data);
  if (bVar5) {
    param_1 = true;
LAB_14de5d7f9:
    if ((byte)LogStreamlineRHI._0_1_ < 5) goto LAB_14de5d8e1;
    if (param_1 == false) {
      pFVar9 = &`LoadConfigSettingWithOverrides'::`39'::LOG_Static;
    }
    else {
      pFVar9 = &`LoadConfigSettingWithOverrides'::`39'::LOG_Static;
    }
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
    }
    pwVar7 = FCommandLine::Get();
    bVar5 = FParse::Param(pwVar7,(wchar_t *)FVar8.Data);
    if (bVar5) {
      param_1 = false;
      goto LAB_14de5d7f9;
    }
    if (bVar4 != false) {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`LoadConfigSettingWithOverrides'::`61'::LOG_Static,
                   (FLogCategoryBase *)&LogStreamlineRHI);
      }
      goto LAB_14de5d8e1;
    }
    if (bVar2) {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`LoadConfigSettingWithOverrides'::`83'::LOG_Static,
                   (FLogCategoryBase *)&LogStreamlineRHI);
      }
      goto LAB_14de5d8e1;
    }
    if ((byte)LogStreamlineRHI._0_1_ < 5) goto LAB_14de5d8e1;
    pFVar9 = &`LoadConfigSettingWithOverrides'::`103'::LOG_Static;
  }
  UE::Logging::Private::BasicLog<5>(pFVar9,(FLogCategoryBase *)&LogStreamlineRHI);
LAB_14de5d8e1:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)0x0,0);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// LoadStreamlineFunctionPointers @ 14de5d940

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl LoadStreamlineFunctionPointers(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  
  bVar2 = bIsStreamlineFunctionPointersLoaded;
  if (!bIsStreamlineFunctionPointersLoaded) {
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
    slVerifyEmbeddedSignature(param_1);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    SLInterPoserDLL = FWindowsPlatformProcess::GetDllHandle(pwVar4);
    if (SLInterPoserDLL != (void *)0x0) {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      Ptr_init = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slInit");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_init == (_func___cdecl_Result_Preferences_ptr_ulong64 *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_init",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2a1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_shutdown = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slShutdown");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_shutdown == (_func___cdecl_Result *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_shutdown",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2a5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_isFeatureSupported =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slIsFeatureSupported");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_isFeatureSupported == (_func___cdecl_Result_uint_AdapterInfo_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_isFeatureSupported",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2a9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_isFeatureLoaded =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slIsFeatureLoaded");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_slIsFeatureLoad_152d55958,
                   (FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_isFeatureLoaded == (_func___cdecl_Result_uint_bool_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_isFeatureLoaded",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2ad,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_setFeatureLoaded =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slSetFeatureLoaded");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_setFeatureLoaded == (_func___cdecl_Result_uint_bool *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_setFeatureLoaded",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2b1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_evaluateFeature =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slEvaluateFeature");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_evaluateFeature ==
           (_func___cdecl_Result_uint_FrameToken_ptr_BaseStructure_ptr_ptr_uint_void_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_evaluateFeature",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2b5,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_allocateResources =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slAllocateResources");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_allocateResources == (_func___cdecl_Result_void_ptr_uint_ViewportHandle_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_allocateResources",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2b9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_freeResources = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slFreeResources");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_freeResources == (_func___cdecl_Result_uint_ViewportHandle_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_freeResources",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2bd,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_setTag = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slSetTag");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_setTag ==
           (_func___cdecl_Result_ViewportHandle_ptr_ResourceTag_ptr_uint_void_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_setTag",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2c3,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_setTagForFrame =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slSetTagForFrame");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_setTagForFrame ==
           (_func___cdecl_Result_FrameToken_ptr_ViewportHandle_ptr_ResourceTag_ptr_uint_void_ptr *)
           0x0) && (bVar2 = FDebug::CheckVerifyFailedImpl2
                                      ("Ptr_setTagForFrame",
                                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                                       ,0x2c8,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_getFeatureRequirements =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slGetFeatureRequirements");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_getFeatureRequirements == (_func___cdecl_Result_uint_FeatureRequirements_ptr *)0x0)
         && (bVar2 = FDebug::CheckVerifyFailedImpl2
                               ("Ptr_getFeatureRequirements",
                                "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                                ,0x2cc,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_getFeatureVersion =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slGetFeatureVersion");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_getFeatureVersion == (_func___cdecl_Result_uint_FeatureVersion_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_getFeatureVersion",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2d0,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_upgradeInterface =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slUpgradeInterface");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_upgradeInterface == (_func___cdecl_Result_void_ptr_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_upgradeInterface",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2d4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_setConstants = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slSetConstants");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_setConstants ==
           (_func___cdecl_Result_Constants_ptr_FrameToken_ptr_ViewportHandle_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_setConstants",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2d8,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_getNativeInterface =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slGetNativeInterface");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_getNativeInterface == (_func___cdecl_Result_void_ptr_void_ptr_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_getNativeInterface",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2dc,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_getFeatureFunction =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slGetFeatureFunction");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_getFeatureFunction == (_func___cdecl_Result_uint_char_ptr_void_ptr_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_getFeatureFunction",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2e0,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_getNewFrameToken =
           FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slGetNewFrameToken");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_getNewFrameToken == (_func___cdecl_Result_FrameToken_ptr_ptr_uint_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_getNewFrameToken",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2e4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      Ptr_setD3DDevice = FWindowsPlatformProcess::GetDllExport(SLInterPoserDLL,L"slSetD3DDevice");
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      if ((Ptr_setD3DDevice == (_func___cdecl_Result_void_ptr *)0x0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Ptr_setD3DDevice",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                             ,0x2e8,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bIsStreamlineFunctionPointersLoaded = true;
      return true;
    }
    if (1 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
    bVar2 = false;
  }
  return bVar2;
}

// LogStreamlineFeatureRequirements @ 14de5e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogStreamlineFeatureRequirements(uint param_1,FeatureRequirements *param_2)

{
  uint *puVar1;
  FeatureRequirementFlags FVar2;
  uint uVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  size_t sVar7;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar8;
  void *pvVar9;
  ulong64 uVar10;
  char *pcVar11;
  uint *puVar12;
  FeatureRequirementFlags FVar13;
  int iVar14;
  undefined1 auStackY_7f8 [32];
  FString local_7c8;
  FString local_7b8;
  FeatureRequirements *local_7a8;
  FString local_7a0;
  _Bxty local_790;
  undefined8 local_780;
  ulonglong uStack_778;
  _Bxty local_770;
  undefined8 local_760;
  ulonglong uStack_758;
  _Bxty local_750;
  undefined8 local_740;
  ulonglong uStack_738;
  _Bxty local_730;
  undefined8 local_720;
  ulonglong uStack_718;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7f8;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    FVar2 = param_2->flags;
    FVar13 = eHardwareSchedulingRequired;
    local_7c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7c8.Data.ArrayNum = 0;
    local_7c8.Data.ArrayMax = 0;
    local_7a8 = param_2;
    do {
      if (FVar13 == (FVar13 & FVar2)) {
        if (FVar13 == eD3D11Supported) {
          pcVar11 = "FeatureRequirementFlags::eD3D11Supported";
        }
        else if (FVar13 == eD3D12Supported) {
          pcVar11 = "FeatureRequirementFlags::eD3D12Supported";
        }
        else if (FVar13 == eVulkanSupported) {
          pcVar11 = "FeatureRequirementFlags::eVulkanSupported";
        }
        else if (FVar13 == eVSyncOffRequired) {
          pcVar11 = "FeatureRequirementFlags::eVSyncOffRequired";
        }
        else if (FVar13 == eHardwareSchedulingRequired) {
          pcVar11 = "FeatureRequirementFlags::eHardwareSchedulingRequired";
        }
        else {
          pcVar11 = "Unknown";
        }
        sVar7 = strlen(pcVar11);
        FString::AppendChars(&local_7c8,pcVar11,(int)sVar7);
        FString::AppendChar(&local_7c8,L'|');
      }
      FVar13 = FVar13 >> 1;
    } while (FVar13 != 0);
    FString::RemoveFromEnd(&local_7c8,L"|",1,IgnoreCase);
    pcVar11 = sl::getFeatureAsStr(param_1);
    local_708._padding_ = 0;
    if (pcVar11 == (char *)0x0) {
      local_708.Ptr = (wchar_t *)0x0;
      local_708.StringLength = 0;
    }
    else {
      sVar7 = strlen(pcVar11);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_708,pcVar11,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_708._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_708._padding_);
    }
    if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
    }
    if ((byte)LogStreamlineRHI._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((byte)LogStreamlineRHI._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((byte)LogStreamlineRHI._0_1_ < 5) {
      return;
    }
    pbVar8 = sl::Version::toStr(&param_2->osVersionRequired,
                                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_770);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_4c8._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_4c8.Ptr = (wchar_t *)0x0;
      local_4c8.StringLength = 0;
    }
    else {
      sVar7 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_4c8,(char *)pbVar8,(int)sVar7,Yes);
    }
    pbVar8 = sl::Version::toStr(&param_2->osVersionDetected,
                                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_790);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_5e8._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_5e8.Ptr = (wchar_t *)0x0;
      local_5e8.StringLength = 0;
    }
    else {
      sVar7 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_5e8,(char *)pbVar8,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_5e8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_5e8._padding_);
    }
    if (0xf < uStack_778) {
      pvVar5 = (void *)CONCAT71(local_790._1_7_,local_790._Buf[0]);
      uVar10 = uStack_778 + 1;
      pvVar9 = pvVar5;
      if (0xfff < uVar10) {
        pvVar9 = *(void **)((longlong)pvVar5 + -8);
        uVar10 = uStack_778 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9))) goto LAB_14de5e4e9;
      }
      operator_delete(pvVar9,uVar10);
    }
    local_790._Buf[0] = '\0';
    local_780 = ___xmm_000000000000000f0000000000000000;
    uStack_778 = _UNK_15076add8;
    if ((void *)local_4c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_4c8._padding_);
    }
    if (0xf < uStack_758) {
      pvVar5 = (void *)CONCAT71(local_770._1_7_,local_770._Buf[0]);
      uVar10 = uStack_758 + 1;
      pvVar9 = pvVar5;
      if (0xfff < uVar10) {
        pvVar9 = *(void **)((longlong)pvVar5 + -8);
        uVar10 = uStack_758 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9))) {
LAB_14de5e4e9:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      operator_delete(pvVar9,uVar10);
    }
    local_770._Buf[0] = '\0';
    if ((byte)LogStreamlineRHI._0_1_ < 5) {
      return;
    }
    local_760 = ___xmm_000000000000000f0000000000000000;
    uStack_758 = _UNK_15076add8;
    pbVar8 = sl::Version::toStr(&param_2->driverVersionRequired,
                                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_730);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_288._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar7 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,(char *)pbVar8,(int)sVar7,Yes);
    }
    pbVar8 = sl::Version::toStr(&param_2->driverVersionDetected,
                                (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                &local_750);
    if (0xf < (pbVar8->_Mypair)._Myval2._Myres) {
      pbVar8 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
               (pbVar8->_Mypair)._Myval2._Bx._Ptr;
    }
    local_3a8._padding_ = 0;
    if (pbVar8 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
      local_3a8.Ptr = (wchar_t *)0x0;
      local_3a8.StringLength = 0;
    }
    else {
      sVar7 = strlen((char *)pbVar8);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,(char *)pbVar8,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_3a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
    if (0xf < uStack_738) {
      pvVar5 = (void *)CONCAT71(local_750._1_7_,local_750._Buf[0]);
      uVar10 = uStack_738 + 1;
      pvVar9 = pvVar5;
      if (0xfff < uVar10) {
        pvVar9 = *(void **)((longlong)pvVar5 + -8);
        uVar10 = uStack_738 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9))) goto LAB_14de5e69c;
      }
      operator_delete(pvVar9,uVar10);
    }
    local_750._Buf[0] = '\0';
    local_740 = ___xmm_000000000000000f0000000000000000;
    uStack_738 = _UNK_15076add8;
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
    if (0xf < uStack_718) {
      pvVar5 = (void *)CONCAT71(local_730._1_7_,local_730._Buf[0]);
      uVar10 = uStack_718 + 1;
      pvVar9 = pvVar5;
      if (0xfff < uVar10) {
        pvVar9 = *(void **)((longlong)pvVar5 + -8);
        uVar10 = uStack_718 + 0x28;
        if (0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar9))) {
LAB_14de5e69c:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      operator_delete(pvVar9,uVar10);
    }
    local_730._Buf[0] = '\0';
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      uVar3 = param_2->numRequiredTags;
      puVar12 = param_2->requiredTags;
      local_720 = ___xmm_000000000000000f0000000000000000;
      uStack_718 = _UNK_15076add8;
      if (((int)uVar3 < 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_7b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar6 = true;
      local_7b8.Data.ArrayNum = 0;
      local_7b8.Data.ArrayMax = 0;
      puVar1 = puVar12 + (int)uVar3;
      for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
        if (bVar6) {
          bVar6 = false;
        }
        else {
          FString::AppendChars(&local_7b8,L", ",2);
        }
        pcVar11 = sl::getBufferTypeAsStr(*puVar12);
        local_168._padding_ = 0;
        if (pcVar11 == (char *)0x0) {
          local_168.Ptr = (wchar_t *)0x0;
          local_168.StringLength = 0;
        }
        else {
          sVar7 = strlen(pcVar11);
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,pcVar11,(int)sVar7,Yes);
        }
        FString::PrintfImpl(&local_7a0,L"%s (%u)");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
        iVar14 = local_7a0.Data.ArrayNum + -1;
        if (local_7a0.Data.ArrayNum == 0) {
          iVar14 = 0;
        }
        FString::AppendChars(&local_7b8,(wchar_t *)local_7a0.Data.AllocatorInstance.Data,iVar14);
        if (local_7a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7a0.Data.AllocatorInstance.Data);
        }
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogStreamlineFeatureSupport @ 14de5e860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogStreamlineFeatureSupport(uint param_1,AdapterInfo *param_2)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  Result RVar4;
  char *pcVar5;
  size_t sVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  void *pvVar8;
  ulong64 uVar9;
  undefined1 auStackY_f68 [32];
  FString local_f20;
  FString local_f10;
  FeatureVersion local_f00;
  FeatureRequirements local_ec8;
  _Bxty local_e08;
  undefined8 local_df8;
  ulonglong uStack_df0;
  _Bxty local_de8;
  undefined8 local_dd8;
  ulonglong uStack_dd0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_dc8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ca8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f68;
  RVar4 = SLisFeatureSupported(param_1,param_2);
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    pcVar5 = sl::getResultAsStr(RVar4);
    local_ca8._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_ca8.Ptr = (wchar_t *)0x0;
      local_ca8.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_ca8,pcVar5,(int)sVar6,Yes);
    }
    pcVar5 = sl::getFeatureAsStr(param_1);
    local_dc8._padding_ = 0;
    if (pcVar5 == (char *)0x0) {
      local_dc8.Ptr = (wchar_t *)0x0;
      local_dc8.StringLength = 0;
    }
    else {
      sVar6 = strlen(pcVar5);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_dc8,pcVar5,(int)sVar6,Yes);
    }
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_dc8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_dc8._padding_);
    }
    if ((void *)local_ca8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_ca8._padding_);
    }
  }
  if (RVar4 != eErrorFeatureMissing) {
    local_f00._padding_ = 0;
    local_f00._padding_._0_4_ = 0x6d5b51f0;
    local_f00._padding_._4_4_ = 0x486d076b;
    local_f00._padding_._0_4_ = 0x565a9599;
    local_f00._padding_._4_4_ = 0xc1f54310;
    local_f00._padding_ = 1;
    local_f00.versionSL.major = 0;
    local_f00.versionSL.minor = 0;
    local_f00.versionSL.build = 0;
    local_f00.versionNGX.major = 0;
    local_f00.versionNGX.minor = 0;
    local_f00.versionNGX.build = 0;
    bVar3 = IsStreamlineSupported();
    if ((!bVar3) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsStreamlineSupported()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x20c,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((SLInterPoserDLL == (void *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("SLInterPoserDLL",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x20d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((Ptr_getFeatureVersion == (_func___cdecl_Result_uint_FeatureVersion_ptr *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Ptr_getFeatureVersion != nullptr",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x20e,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
      pcVar5 = sl::getFeatureAsStr(param_1);
      local_b88._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_b88.Ptr = (wchar_t *)0x0;
        local_b88.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_b88,pcVar5,(int)sVar6,Yes);
      }
      CurrentThreadName(&local_f20);
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"SLgetFeatureVersion",0x13,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
      if (local_f20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f20.Data.AllocatorInstance.Data);
      }
      if ((void *)local_b88._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_b88._padding_);
      }
    }
    RVar4 = (*Ptr_getFeatureVersion)(param_1,&local_f00);
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      pcVar5 = sl::getResultAsStr(RVar4);
      local_708._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_708.Ptr = (wchar_t *)0x0;
        local_708.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_708,pcVar5,(int)sVar6,Yes);
      }
      pbVar7 = sl::Version::toStr(&local_f00.versionNGX,
                                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_de8);
      if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar7->_Mypair)._Myval2._Bx._Ptr;
      }
      local_828._padding_ = 0;
      if (pbVar7 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_828.Ptr = (wchar_t *)0x0;
        local_828.StringLength = 0;
      }
      else {
        sVar6 = strlen((char *)pbVar7);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_828,(char *)pbVar7,(int)sVar6,Yes);
      }
      pbVar7 = sl::Version::toStr(&local_f00.versionSL,
                                  (basic_string<char,std::char_traits<char>,std::allocator<char>_> *
                                  )&local_e08);
      if (0xf < (pbVar7->_Mypair)._Myval2._Myres) {
        pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                 (pbVar7->_Mypair)._Myval2._Bx._Ptr;
      }
      local_948._padding_ = 0;
      if (pbVar7 == (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
        local_948.Ptr = (wchar_t *)0x0;
        local_948.StringLength = 0;
      }
      else {
        sVar6 = strlen((char *)pbVar7);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_948,(char *)pbVar7,(int)sVar6,Yes);
      }
      pcVar5 = sl::getFeatureAsStr(param_1);
      local_a68._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_a68.Ptr = (wchar_t *)0x0;
        local_a68.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_a68,pcVar5,(int)sVar6,Yes);
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_a68._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_a68._padding_);
      }
      if ((void *)local_948._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_948._padding_);
      }
      if (0xf < uStack_df0) {
        pvVar2 = (void *)CONCAT71(local_e08._1_7_,local_e08._Buf[0]);
        uVar9 = uStack_df0 + 1;
        pvVar8 = pvVar2;
        if (0xfff < uVar9) {
          pvVar8 = *(void **)((longlong)pvVar2 + -8);
          uVar9 = uStack_df0 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8))) goto LAB_14de5edca;
        }
        operator_delete(pvVar8,uVar9);
      }
      local_e08._Buf[0] = '\0';
      local_df8 = ___xmm_000000000000000f0000000000000000;
      uStack_df0 = _UNK_15076add8;
      if ((void *)local_828._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_828._padding_);
      }
      if (0xf < uStack_dd0) {
        pvVar2 = (void *)CONCAT71(local_de8._1_7_,local_de8._Buf[0]);
        uVar9 = uStack_dd0 + 1;
        pvVar8 = pvVar2;
        if (0xfff < uVar9) {
          pvVar8 = *(void **)((longlong)pvVar2 + -8);
          uVar9 = uStack_dd0 + 0x28;
          if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar8))) {
LAB_14de5edca:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        operator_delete(pvVar8,uVar9);
      }
      local_de8._Buf[0] = '\0';
      local_dd8 = ___xmm_000000000000000f0000000000000000;
      uStack_dd0 = _UNK_15076add8;
      if ((void *)local_708._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_708._padding_);
      }
    }
    local_ec8._padding_ = 0;
    local_ec8._padding_._0_4_ = 0x66714097;
    local_ec8._padding_._4_4_ = 0x4bc6ac6d;
    local_ec8._padding_._0_4_ = 0xf1e1589;
    local_ec8._padding_._4_4_ = 0x1fb6a655;
    local_ec8._padding_ = 2;
    local_ec8.flags = 0;
    local_ec8.maxNumCPUThreads = 0;
    local_ec8.maxNumViewports = 0;
    local_ec8.numRequiredTags = 0;
    local_ec8.requiredTags = (uint *)0x0;
    local_ec8.osVersionDetected.major = 0;
    local_ec8.osVersionDetected.minor = 0;
    local_ec8.osVersionDetected.build = 0;
    local_ec8.osVersionRequired.major = 0;
    local_ec8.osVersionRequired.minor = 0;
    local_ec8.osVersionRequired.build = 0;
    local_ec8.driverVersionDetected.major = 0;
    local_ec8.driverVersionDetected.minor = 0;
    local_ec8.driverVersionDetected.build = 0;
    local_ec8.driverVersionRequired.major = 0;
    local_ec8.driverVersionRequired.minor = 0;
    local_ec8.driverVersionRequired.build = 0;
    local_ec8.vkNumComputeQueuesRequired = 0;
    local_ec8.vkNumGraphicsQueuesRequired = 0;
    local_ec8.vkNumDeviceExtensions = 0;
    local_ec8.vkDeviceExtensions = (char **)0x0;
    local_ec8.vkNumInstanceExtensions = 0;
    local_ec8.vkInstanceExtensions = (char **)0x0;
    local_ec8.vkNumFeatures12 = 0;
    local_ec8.vkFeatures12 = (char **)0x0;
    local_ec8.vkNumFeatures13 = 0;
    local_ec8.vkFeatures13 = (char **)0x0;
    local_ec8.vkNumOpticalFlowQueuesRequired = 0;
    bVar3 = IsStreamlineSupported();
    if ((!bVar3) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("IsStreamlineSupported()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1fb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((SLInterPoserDLL == (void *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("SLInterPoserDLL",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1fc,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((Ptr_getFeatureRequirements == (_func___cdecl_Result_uint_FeatureRequirements_ptr *)0x0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Ptr_getFeatureRequirements != nullptr",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                           ,0x1fd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
      pcVar5 = sl::getFeatureAsStr(param_1);
      local_5e8._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_5e8.Ptr = (wchar_t *)0x0;
        local_5e8.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_5e8,pcVar5,(int)sVar6,Yes);
      }
      CurrentThreadName(&local_f10);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"SLgetFeatureRequirements",0x18,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_f10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f10.Data.AllocatorInstance.Data);
      }
      if ((void *)local_5e8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_5e8._padding_);
      }
    }
    RVar4 = (*Ptr_getFeatureRequirements)(param_1,&local_ec8);
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      pcVar5 = sl::getResultAsStr(RVar4);
      local_3a8._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_3a8.Ptr = (wchar_t *)0x0;
        local_3a8.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,pcVar5,(int)sVar6,Yes);
      }
      pcVar5 = sl::getFeatureAsStr(param_1);
      local_4c8._padding_ = 0;
      if (pcVar5 == (char *)0x0) {
        local_4c8.Ptr = (wchar_t *)0x0;
        local_4c8.StringLength = 0;
      }
      else {
        sVar6 = strlen(pcVar5);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_4c8,pcVar5,(int)sVar6,Yes);
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_4c8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_4c8._padding_);
      }
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
    LogStreamlineFeatureRequirements(param_1,&local_ec8);
  }
  return;
}

// LogStreamlineFunctionCall @ 14de5f130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LogStreamlineFunctionCall(uint param_1,FString *param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FString local_28;
  
  if (bLogStreamlineLogFunctions) {
    bVar3 = true;
    if ((LogStreamlineLogLevel < 1) && (bVar3 = param_1 != 4, param_1 == 3)) {
      bVar3 = false;
    }
    if (LogStreamlineLogLevel < 2) {
      local_28.Data.ArrayNum = (param_2->Data).ArrayNum;
      lVar2 = (longlong)local_28.Data.ArrayNum;
      _Src = (param_2->Data).AllocatorInstance.Data;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_28.Data.ArrayNum == 0) {
        local_28.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,
                   local_28.Data.ArrayNum,&local_28.Data.ArrayMax);
        memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
      }
      iVar1 = FString::Find(&local_28,L"Get",3,IgnoreCase,FromStart,-1);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar1 != -1) {
        return;
      }
    }
    if ((bVar3) && (4 < (byte)LogStreamlineRHI._0_1_)) {
      CurrentThreadName(&local_28);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogStreamlineFunctions @ 14de5f2c0

bool __cdecl LogStreamlineFunctions(void)

{
  return bLogStreamlineLogFunctions;
}

// PlatformCreateStreamlineRHI @ 14de5f650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PlatformCreateStreamlineRHI(void)

{
  FName FVar1;
  code *pcVar2;
  TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_> TVar3;
  bool bVar4;
  int iVar5;
  wchar_t *pwVar6;
  FName *pFVar7;
  FModuleManager *pFVar8;
  IModuleInterface *pIVar9;
  IPluginManager *pIVar10;
  longlong *plVar11;
  size_t sVar12;
  TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_> *pTVar13;
  undefined1 auStackY_378 [32];
  FString local_338;
  wchar_t *local_328;
  int local_320;
  ForAnyElementType local_318;
  int local_30c;
  FDynamicRHI *local_308;
  undefined8 *local_300;
  FString local_2f8;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FName local_2d8 [2];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [8];
  TReferenceControllerBase<1> *local_2b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  TStringView<wchar_t> local_68;
  wchar_t *local_58;
  undefined4 local_50;
  FScriptContainerElement *local_48;
  int local_40;
  undefined *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_2a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_2a8,"PlatformCreateStreamlineRHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_2a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2a8._padding_);
    }
  }
  if ((GStreamlineRHI.Ptr != (FStreamlineRHI *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("!GStreamlineRHI",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineRHI.cpp"
                         ,0x27f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pwVar6 = (wchar_t *)(**(code **)(GDynamicRHI->_padding_ + 0x20))();
  FString::FString(&local_338,pwVar6);
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    RHIVendorIdToString();
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
  }
  iVar5 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar5 - 2U < 2) {
    GStreamlineSupport = Supported;
    if (iVar5 == 2) {
      pwVar6 = L"StreamlineD3D11RHI";
    }
    else {
      pwVar6 = L"StreamlineD3D12RHI";
      if (iVar5 != 3) {
        pwVar6 = (wchar_t *)0x0;
      }
    }
    pFVar7 = FName::FName(local_2d8,pwVar6);
    FVar1 = *pFVar7;
    pFVar8 = FModuleManager::Get();
    pIVar9 = FModuleManager::LoadModuleChecked(pFVar8,FVar1);
    bVar4 = IsStreamlineSupported();
    if (bVar4) {
      pIVar10 = IPluginManager::Get();
      uStack_2e0 = 0xe;
      local_2e8 = L"StreamlineCore";
      local_2c8 = 0x507b6d48;
      uStack_2c4 = 1;
      uStack_2c0 = 0xe;
      uStack_2bc = uStack_2dc;
      plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x70))(pIVar10,local_2b8,&local_2c8);
      if ((*plVar11 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*(longlong *)*plVar11 + 0x20))((longlong *)*plVar11,&local_328);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b0)
      ;
      local_68.DataPtr = L"";
      if (local_320 != 0) {
        local_68.DataPtr = local_328;
      }
      local_68.Size = 0;
      if (local_68.DataPtr != (wchar_t *)0x0) {
        sVar12 = wcslen(local_68.DataPtr);
        local_68.Size = (int)sVar12;
      }
      local_50 = 0x14;
      local_58 = L"Binaries/ThirdParty/";
      local_48 = PlatformDir.Data.AllocatorInstance.Data;
      local_30 = 1;
      local_40 = PlatformDir.Data.ArrayNum + -1;
      if (PlatformDir.Data.ArrayNum == 0) {
        local_40 = 0;
      }
      local_38 = &u__;
      FPaths::CombineInternal(&local_2f8,&local_68,4);
      if ((4 < (byte)LogStreamlineRHI._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI),
         4 < (byte)LogStreamlineRHI._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      pwVar6 = local_328;
      local_318.Data = (FScriptContainerElement *)0x0;
      local_30c = 0;
      local_308 = (FDynamicRHI *)0x0;
      if (local_320 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_320,0,&local_318,local_320,&local_30c);
        memcpy(local_318.Data,pwVar6,(longlong)local_320 * 2);
      }
      local_308 = GDynamicRHI;
      pTVar13 = (TUniquePtr<FStreamlineRHI,TDefaultDelete<FStreamlineRHI>_> *)
                (**(code **)((longlong)*pIVar9 + 0x40))(pIVar9,&local_300);
      TVar3 = GStreamlineRHI;
      if (pTVar13 != &GStreamlineRHI) {
        GStreamlineRHI.Ptr = pTVar13->Ptr;
        pTVar13->Ptr = (FStreamlineRHI *)0x0;
        if (TVar3.Ptr != (FStreamlineRHI *)0x0) {
          (**(code **)(TVar3.Ptr)->_padding_)(TVar3.Ptr,1);
        }
      }
      if (local_300 != (undefined8 *)0x0) {
        (**(code **)*local_300)(local_300,1);
      }
      pFVar8 = FModuleManager::Get();
      FModuleManager::ModuleExists(pFVar8,L"RenderDocPlugin",(FString *)0x0);
      if ((GStreamlineRHI.Ptr == (FStreamlineRHI *)0x0) || (bVar4 = IsStreamlineSupported(), !bVar4)
         ) {
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        }
        GStreamlineSupport = NotSupported;
      }
      else {
        GStreamlineSupport = Supported;
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          RHIVendorIdToString();
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
        }
        FStreamlineRHI::PostPlatformRHICreateInit(GStreamlineRHI.Ptr);
      }
      if (local_318.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_318.Data);
      }
      if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
      }
      if (local_328 != (wchar_t *)0x0) {
        FMemory::Free(local_328);
      }
    }
    else {
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Streamline_not__152d57948,
                   (FLogCategoryBase *)&LogStreamlineRHI);
      }
      GStreamlineSupport = NotSupported;
    }
  }
  else {
    GStreamlineSupport = NotSupportedIncompatibleRHI;
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    }
  }
  if (4 < (byte)LogStreamlineRHI._0_1_) {
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"PlatformCreateStreamlineRHI",0x1b,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
  }
  if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  return;
}

// PlatformGetAllImplementedStreamlineRHIs @ 14de5fbf0

FeatureRequirementFlags __cdecl PlatformGetAllImplementedStreamlineRHIs(void)

{
  return eD3D12Supported|eD3D11Supported;
}

// SLAllocateResources @ 14de60850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLAllocateResources(void *param_1,uint param_2,ViewportHandle *param_3)

{
  uint uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  char *_Str;
  size_t sVar6;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  uint local_2a0;
  uint local_298;
  FString local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  bVar4 = IsStreamlineSupported();
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x199,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x19a,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((Ptr_allocateResources == (_func___cdecl_Result_void_ptr_uint_ViewportHandle_ptr *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_allocateResources != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x19b,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    uVar1 = param_3->value;
    _Str = sl::getFeatureAsStr(param_2);
    local_278._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_278.Ptr = (wchar_t *)0x0;
      local_278.StringLength = 0;
    }
    else {
      sVar6 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_278,_Str,(int)sVar6,Yes);
    }
    pwVar3 = local_278.Ptr;
    CurrentThreadName(&local_288);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"SLAllocateResources",0x13,Yes);
    local_2a8 = pwVar3;
    local_2a0 = param_2;
    local_298 = uVar1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
    if ((void *)local_278._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_278._padding_);
    }
  }
  RVar5 = (*Ptr_allocateResources)(param_1,param_2,param_3);
  return RVar5;
}

// SLFreeResources @ 14de60a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLFreeResources(uint param_1,ViewportHandle *param_2)

{
  uint uVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  char *_Str;
  size_t sVar6;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  uint local_290;
  uint local_288;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar4 = IsStreamlineSupported();
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1aa,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1ab,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((Ptr_freeResources == (_func___cdecl_Result_uint_ViewportHandle_ptr *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_freeResources != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1ac,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    RVar5 = (*pcVar2)();
    return RVar5;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    uVar1 = param_2->value;
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar6 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar6,Yes);
    }
    pwVar3 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"SLFreeResources",0xf,Yes);
    local_298 = pwVar3;
    local_290 = param_1;
    local_288 = uVar1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar5 = (*Ptr_freeResources)(param_1,param_2);
  return RVar5;
}

// SLUpgradeInterface @ 14de60c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLUpgradeInterface(void **param_1)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x21d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x21e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_upgradeInterface == (_func___cdecl_Result_void_ptr_ptr *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_upgradeInterface != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x21f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"SLUpgradeInterface",0x12,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_upgradeInterface)(param_1);
  return RVar3;
}

// SLevaluateFeature @ 14de60df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl
SLevaluateFeature(uint param_1,FrameToken *param_2,BaseStructure **param_3,uint param_4,
                 void *param_5)

{
  code *pcVar1;
  BaseStructure *pBVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_318 [32];
  FString local_2c0;
  void *local_2b0;
  FString local_2a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2b0 = param_5;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x17e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x17f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_evaluateFeature ==
       (_func___cdecl_Result_uint_FrameToken_ptr_BaseStructure_ptr_ptr_uint_void_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_evaluateFeature != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x180,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  pBVar2 = (BaseStructure *)param_3;
  if (bLogStreamlineLogFunctions != false) {
    for (; FVar6.Data = (FScriptContainerElement *)0x0, pBVar2 != (BaseStructure *)0x0;
        pBVar2 = pBVar2->next) {
      if ((*(longlong *)&pBVar2->structType == sl::ViewportHandle::s_structType._0_8_) &&
         (*(uchar (*) [8])((longlong)&pBVar2->structType + 8) ==
          sl::ViewportHandle::s_structType.data4)) {
        local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2c0.Data.ArrayNum = 0;
        local_2c0.Data.ArrayMax = 0;
        FString::AppendInt(&local_2c0,*(int *)&pBVar2[1].next);
        FVar6.Data = local_2c0.Data.AllocatorInstance.Data;
        local_2c0.Data.ArrayNum = 0;
        local_2c0.Data.ArrayMax = 0;
        local_2c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        break;
      }
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      (*(code *)**(undefined8 **)param_2)(param_2);
      _Str = sl::getFeatureAsStr(param_1);
      local_298._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_298.Ptr = (wchar_t *)0x0;
        local_298.StringLength = 0;
      }
      else {
        sVar5 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,_Str,(int)sVar5,Yes);
      }
      CurrentThreadName(&local_2a8);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"SLevaluateFeature",0x11,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
      }
      param_5 = local_2b0;
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
        param_5 = local_2b0;
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
  }
  RVar4 = (*Ptr_evaluateFeature)(param_1,param_2,param_3,param_4,param_5);
  return RVar4;
}

// SLgetFeatureFunction @ 14de610d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLgetFeatureFunction(uint param_1,char *param_2,void **param_3)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  Result RVar5;
  size_t sVar6;
  char *_Str;
  undefined1 auStack_3f8 [32];
  wchar_t *local_3d8;
  uint local_3d0;
  wchar_t *local_3c8;
  FString local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  bVar4 = IsStreamlineSupported();
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x24f,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    RVar5 = (*pcVar1)();
    return RVar5;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x250,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    RVar5 = (*pcVar1)();
    return RVar5;
  }
  if ((Ptr_getFeatureFunction == (_func___cdecl_Result_uint_char_ptr_void_ptr_ptr *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_getFeatureFunction != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x251,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    RVar5 = (*pcVar1)();
    return RVar5;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    local_288._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_288.Ptr = (wchar_t *)0x0;
      local_288.StringLength = 0;
    }
    else {
      sVar6 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_288,param_2,(int)sVar6,Yes);
    }
    pwVar3 = local_288.Ptr;
    _Str = sl::getFeatureAsStr(param_1);
    local_3a8._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_3a8.Ptr = (wchar_t *)0x0;
      local_3a8.StringLength = 0;
    }
    else {
      sVar6 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_3a8,_Str,(int)sVar6,Yes);
    }
    pwVar2 = local_3a8.Ptr;
    CurrentThreadName(&local_3b8);
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"SLgetFeatureFunction",0x14,Yes);
    local_3d8 = pwVar2;
    local_3d0 = param_1;
    local_3c8 = pwVar3;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if ((void *)local_3a8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_3a8._padding_);
    }
    if ((void *)local_288._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_288._padding_);
    }
  }
  RVar5 = (*Ptr_getFeatureFunction)(param_1,param_2,param_3);
  return RVar5;
}

// SLgetFeatureRequirements @ 14de61360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLgetFeatureRequirements(uint param_1,FeatureRequirements *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint local_280;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1fb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1fc,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_getFeatureRequirements == (_func___cdecl_Result_uint_FeatureRequirements_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_getFeatureRequirements != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1fd,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"SLgetFeatureRequirements",0x18,Yes);
    local_288 = pwVar2;
    local_280 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar4 = (*Ptr_getFeatureRequirements)(param_1,param_2);
  return RVar4;
}

// SLgetFeatureVersion @ 14de61560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLgetFeatureVersion(uint param_1,FeatureVersion *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint local_280;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x20c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x20d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_getFeatureVersion == (_func___cdecl_Result_uint_FeatureVersion_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_getFeatureVersion != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x20e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"SLgetFeatureVersion",0x13,Yes);
    local_288 = pwVar2;
    local_280 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar4 = (*Ptr_getFeatureVersion)(param_1,param_2);
  return RVar4;
}

// SLgetNativeInterface @ 14de61760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLgetNativeInterface(void *param_1,void **param_2)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  undefined1 auStack_178 [32];
  void *local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x23f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x240,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_getNativeInterface == (_func___cdecl_Result_void_ptr_void_ptr_ptr *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_getNativeInterface != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x241,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"SLgetNativeInterface",0x14,Yes);
    local_158 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_getNativeInterface)(param_1,param_2);
  return RVar3;
}

// SLgetNewFrameToken @ 14de618f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLgetNewFrameToken(FrameToken **param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  Result RVar4;
  undefined1 auStack_2b8 [32];
  uint local_298;
  FString local_288;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x260,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x261,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  if ((Ptr_getNewFrameToken == (_func___cdecl_Result_FrameToken_ptr_ptr_uint_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_getNewFrameToken != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x262,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (1 < LogStreamlineLogLevel)) {
    if (param_2 == (uint *)0x0) {
      if ((byte)LogStreamlineRHI._0_1_ < 5) goto LAB_14de61add;
      CurrentThreadName(&local_278);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"SLgetNewFrameToken",0x12,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    else {
      if ((byte)LogStreamlineRHI._0_1_ < 5) goto LAB_14de61add;
      uVar1 = *param_2;
      CurrentThreadName(&local_288);
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"SLgetNewFrameToken",0x12,Yes);
      local_298 = uVar1;
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      local_278.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
        local_278.Data.AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      }
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
  }
LAB_14de61add:
  RVar4 = (*Ptr_getNewFrameToken)(param_1,param_2);
  return RVar4;
}

// SLinit @ 14de61b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLinit(Preferences *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  undefined1 auStack_178 [32];
  ulong64 local_158;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((!bIsStreamlineFunctionPointersLoaded) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("AreStreamlineFunctionsLoaded()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_init == (_func___cdecl_Result_Preferences_ptr_ulong64 *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_init != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xdd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"SLinit",6,Yes);
    local_158 = param_2;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_init)(param_1,param_2);
  return RVar3;
}

// SLisFeatureLoaded @ 14de61ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLisFeatureLoaded(uint param_1,bool *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint local_280;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_isFeatureLoaded == (_func___cdecl_Result_uint_bool_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_isFeatureLoaded != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x10e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"SLisFeatureLoaded",0x11,Yes);
    local_288 = pwVar2;
    local_280 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar4 = (*Ptr_isFeatureLoaded)(param_1,param_2);
  return RVar4;
}

// SLisFeatureSupported @ 14de61ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLisFeatureSupported(uint param_1,AdapterInfo *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  uint local_280;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xfb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xfc,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_isFeatureSupported == (_func___cdecl_Result_uint_AdapterInfo_ptr *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_isFeatureSupported != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xfd,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"SLisFeatureSupported",0x14,Yes);
    local_288 = pwVar2;
    local_280 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar4 = (*Ptr_isFeatureSupported)(param_1,param_2);
  return RVar4;
}

// SLsetConstants @ 14de620a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLsetConstants(Constants *param_1,FrameToken *param_2,ViewportHandle *param_3)

{
  float fVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  Result RVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  uint local_1a8;
  FString local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  bVar4 = IsStreamlineSupported();
  if ((!bVar4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    RVar5 = (*pcVar3)();
    return RVar5;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    RVar5 = (*pcVar3)();
    return RVar5;
  }
  if ((Ptr_setConstants ==
       (_func___cdecl_Result_Constants_ptr_FrameToken_ptr_ViewportHandle_ptr *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_setConstants != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x22f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    RVar5 = (*pcVar3)();
    return RVar5;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    fVar7 = __real_3f800000 / (param_1->mvecScale).y;
    uVar2 = param_3->value;
    fVar8 = __real_3f800000 / (param_1->mvecScale).x;
    fVar1 = param_1->cameraAspectRatio;
    uVar6 = (*(code *)**(undefined8 **)param_2)(param_2);
    CurrentThreadName(&local_198);
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_188,"SLsetConstants",0xe,Yes);
    local_1c8 = uVar6;
    local_1c0 = (double)fVar1;
    local_1b8 = (double)fVar8;
    local_1b0 = (double)fVar7;
    local_1a8 = uVar2;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  RVar5 = (*Ptr_setConstants)(param_1,param_2,param_3);
  return RVar5;
}

// SLsetD3DDevice @ 14de622d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLsetD3DDevice(void *param_1)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x27a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x27b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_setD3DDevice == (_func___cdecl_Result_void_ptr *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_setD3DDevice != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x27c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"SLsetD3DDevice",0xe,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_setD3DDevice)(param_1);
  return RVar3;
}

// SLsetFeatureLoaded @ 14de62440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLsetFeatureLoaded(uint param_1,bool param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  uint local_290;
  uint local_288;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x11d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x11e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((Ptr_setFeatureLoaded == (_func___cdecl_Result_uint_bool *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_setFeatureLoaded != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x11f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    RVar4 = (*pcVar1)();
    return RVar4;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    _Str = sl::getFeatureAsStr(param_1);
    local_268._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_268.Ptr = (wchar_t *)0x0;
      local_268.StringLength = 0;
    }
    else {
      sVar5 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_268,_Str,(int)sVar5,Yes);
    }
    pwVar2 = local_268.Ptr;
    CurrentThreadName(&local_278);
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"SLsetFeatureLoaded",0x12,Yes);
    local_288 = (uint)param_2;
    local_298 = pwVar2;
    local_290 = param_1;
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((void *)local_268._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_268._padding_);
    }
  }
  RVar4 = (*Ptr_setFeatureLoaded)(param_1,param_2);
  return RVar4;
}

// SLsetTag @ 14de62640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLsetTag(ViewportHandle *param_1,ResourceTag *param_2,uint param_3,void *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  Result RVar4;
  char *_Str;
  size_t sVar5;
  ResourceTag *pRVar6;
  FScriptContainerElement *pFVar7;
  ViewportHandle *pVVar8;
  int iVar9;
  ResourceTag *pRVar10;
  undefined1 auStack_378 [32];
  FScriptContainerElement *local_358;
  uint local_350;
  uint local_348;
  undefined4 local_340;
  ViewportHandle *local_338;
  FString local_330;
  ResourceTag *local_320;
  void *local_318;
  FString local_310;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  FString local_2e8 [5];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_378;
  local_338 = param_1;
  local_320 = param_2;
  local_318 = param_4;
  bVar3 = IsStreamlineSupported();
  if ((!bVar3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1bb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1bc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  if ((Ptr_setTag == (_func___cdecl_Result_ViewportHandle_ptr_ResourceTag_ptr_uint_void_ptr *)0x0)
     && (bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("Ptr_setTag != nullptr",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                            ,0x1bd,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    RVar4 = (*pcVar2)();
    return RVar4;
  }
  pVVar8 = local_338;
  if ((bLogStreamlineLogFunctions != false) && (param_3 != 0)) {
    if (((int)param_3 < 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      RVar4 = (*pcVar2)();
      return RVar4;
    }
    pRVar10 = param_2 + (int)param_3;
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.Data.ArrayMax = 0;
    local_330.Data.ArrayNum = 0;
    bVar3 = true;
    pVVar8 = local_338;
    for (pRVar6 = param_2; local_338 = pVVar8, pRVar6 != pRVar10; pRVar6 = pRVar6 + 1) {
      if (bVar3) {
        bVar3 = false;
      }
      else {
        FString::AppendChars(&local_330,L", ",2);
      }
      local_2f8._0_4_ = (pRVar6->extent).top;
      local_2f8._4_4_ = (pRVar6->extent).left;
      uStack_2f0._0_4_ = (pRVar6->extent).width;
      uStack_2f0._4_4_ = (pRVar6->extent).height;
      _Str = sl::getBufferTypeAsStr(pRVar6->type);
      local_298._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_298.StringLength = 0;
        local_298.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar5 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,_Str,(int)sVar5,Yes);
      }
      local_340 = uStack_2f0._4_4_;
      local_348 = (uint)uStack_2f0;
      local_350 = (uint)local_2f8;
      local_358 = (FScriptContainerElement *)CONCAT44(local_358._4_4_,local_2f8._4_4_);
      FString::PrintfImpl(&local_310,L"%s(%u) [left=%u, top=%u, width=%u, height=%u] ");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
      iVar9 = local_310.Data.ArrayNum + -1;
      if (local_310.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      FString::AppendChars(&local_330,(wchar_t *)local_310.Data.AllocatorInstance.Data,iVar9);
      if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_310.Data.AllocatorInstance.Data);
      }
      param_2 = local_320;
      pVVar8 = local_338;
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      uVar1 = pVVar8->value;
      pFVar7 = (FScriptContainerElement *)L"";
      if (local_330.Data.ArrayNum != 0) {
        pFVar7 = local_330.Data.AllocatorInstance.Data;
      }
      CurrentThreadName(local_2e8);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_178,"SLsetTag",8,Yes);
      local_358 = pFVar7;
      local_350 = param_3;
      local_348 = uVar1;
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_2e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
  }
  RVar4 = (*Ptr_setTag)(pVVar8,param_2,param_3,local_318);
  return RVar4;
}

// SLsetTagForFrame @ 14de629b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl
SLsetTagForFrame(FrameToken *param_1,ViewportHandle *param_2,ResourceTag *param_3,uint param_4,
                void *param_5)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  char *_Str;
  size_t sVar4;
  ResourceTag *pRVar5;
  int iVar6;
  ResourceTag *pRVar7;
  undefined1 auStackY_378 [32];
  FString local_330;
  ViewportHandle *local_320;
  ResourceTag *local_318;
  void *local_310;
  FString local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  FString local_2e8 [5];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_310 = param_5;
  local_320 = param_2;
  local_318 = param_3;
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1db,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0x1dc,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_setTagForFrame ==
       (_func___cdecl_Result_FrameToken_ptr_ViewportHandle_ptr_ResourceTag_ptr_uint_void_ptr *)0x0)
     && (bVar2 = FDebug::CheckVerifyFailedImpl2
                           ("Ptr_setTagForFrame != nullptr",
                            "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                            ,0x1dd,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (param_4 != 0)) {
    if (((int)param_4 < 0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      RVar3 = (*pcVar1)();
      return RVar3;
    }
    pRVar7 = param_3 + (int)param_4;
    local_330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.Data.ArrayMax = 0;
    local_330.Data.ArrayNum = 0;
    bVar2 = true;
    for (pRVar5 = param_3; pRVar5 != pRVar7; pRVar5 = pRVar5 + 1) {
      if (bVar2) {
        bVar2 = false;
      }
      else {
        FString::AppendChars(&local_330,L", ",2);
      }
      local_2f8._0_4_ = (pRVar5->extent).top;
      local_2f8._4_4_ = (pRVar5->extent).left;
      uStack_2f0._0_4_ = (pRVar5->extent).width;
      uStack_2f0._4_4_ = (pRVar5->extent).height;
      _Str = sl::getBufferTypeAsStr(pRVar5->type);
      local_298._padding_ = 0;
      if (_Str == (char *)0x0) {
        local_298.StringLength = 0;
        local_298.Ptr = (wchar_t *)0x0;
      }
      else {
        sVar4 = strlen(_Str);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_298,_Str,(int)sVar4,Yes);
      }
      FString::PrintfImpl(&local_308,L"%s(%u) [left=%u, top=%u, width=%u, height=%u] ");
      if ((void *)local_298._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_298._padding_);
      }
      iVar6 = local_308.Data.ArrayNum + -1;
      if (local_308.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      FString::AppendChars(&local_330,(wchar_t *)local_308.Data.AllocatorInstance.Data,iVar6);
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      param_3 = local_318;
    }
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      (*(code *)**(undefined8 **)param_1)(param_1);
      CurrentThreadName(local_2e8);
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"SLsetTagForFrame",0x10,Yes);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
      if (local_2e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e8[0].Data.AllocatorInstance.Data);
      }
    }
    if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_setTagForFrame)(param_1,local_320,param_3,param_4,local_310);
  return RVar3;
}

// SLshutdown @ 14de62d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

Result __cdecl SLshutdown(void)

{
  code *pcVar1;
  bool bVar2;
  Result RVar3;
  undefined1 auStack_168 [32];
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar2 = IsStreamlineSupported();
  if ((!bVar2) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsStreamlineSupported()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((SLInterPoserDLL == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("SLInterPoserDLL",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xec,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((Ptr_shutdown == (_func___cdecl_Result *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Ptr_shutdown != nullptr",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\StreamlineCore\\Source\\StreamlineRHI\\Private\\StreamlineAPI.cpp"
                         ,0xed,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    RVar3 = (*pcVar1)();
    return RVar3;
  }
  if ((bLogStreamlineLogFunctions != false) && (4 < (byte)LogStreamlineRHI._0_1_)) {
    CurrentThreadName(&local_148);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,"SLshutdown",10,Yes);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
  }
  RVar3 = (*Ptr_shutdown)();
  return RVar3;
}

// SetStreamlineAPILoggingEnabled @ 14de62eb0

void __cdecl SetStreamlineAPILoggingEnabled(bool param_1)

{
  bLogStreamlineLogFunctions = param_1;
  return;
}

// ShouldUseSlSetTag @ 14de63390

bool __cdecl ShouldUseSlSetTag(void)

{
  TObjectPtr<UStreamlineSettings> TVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < _TSS0) {
    _Init_thread_header(&_TSS0);
    if (_TSS0 == -1) {
      TVar1 = UStreamlineSettings::CppDefaults();
      bUseSlSetTag = `anonymous_namespace'::LoadConfigSettingWithOverrides
                               (*(bool *)(*(longlong *)TVar1.field0_0x0 + 0x33),L"bUseSlSetTag",
                                L"UseSlSetTagOverride",L"settag");
      _Init_thread_footer(&_TSS0);
    }
  }
  return bUseSlSetTag;
}

// StreamlineFilterRedundantSetOptionsCalls @ 14de63780

bool __cdecl StreamlineFilterRedundantSetOptionsCalls(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"slfilter");
  if (bVar2) {
    return true;
  }
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"slnofilter");
  pTVar1 = CVarStreamlineFilterRedundantSetOptionsCalls.Ref;
  if (bVar2) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// StreamlineLogSink @ 14de63810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl StreamlineLogSink(LogType param_1,char *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  size_t sVar4;
  FString *this;
  FRegexPattern *pFVar5;
  FRegexMatcher *pFVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8 [8];
  FString local_1f0;
  FString local_1e0;
  ForAnyElementType local_1d0;
  uint local_1c8;
  int local_1c4;
  ForAnyElementType local_1c0;
  uint local_1b8;
  int local_1b4;
  ForAnyElementType local_1b0;
  uint local_1a8;
  int local_1a4;
  FRegexPattern local_1a0;
  FRegexMatcher local_190;
  wchar_t *local_170;
  wchar_t *pwStack_168;
  wchar_t *local_160;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_58.Data = (FScriptContainerElement *)0x0;
  iVar10 = 2;
  if (param_2 == (char *)0x0) {
    local_48 = 0;
    local_50 = (FScriptContainerElement *)0x0;
  }
  else {
    sVar4 = strlen(param_2);
    local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_2,(int)sVar4);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14de63899;
      }
    }
    else {
LAB_14de63899:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)param_2,(int)sVar4 + 1);
  }
  this = FString::FString(&local_1e0,(wchar_t *)local_50);
  FString::TrimEnd(this,&local_1f0);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if ((param_1 == eInfo) || ((param_1 != eWarn && (iVar10 = 1, param_1 != eError)))) {
    iVar10 = 4;
  }
  local_1b0.Data = (FScriptContainerElement *)0x0;
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x152d563b0;
  local_1a8 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_1b0,1,&local_1a4);
  *(wchar_t **)local_1b0.Data =
       L"Repeated slDLSSGSetOptions() call for the frame (\\d+). A redundant call or a race condition with Present()"
  ;
  local_190.Pattern.Implementation.Object = (FRegexPatternImplementation *)0x152d56488;
  local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x152d564c0;
  local_190.Implementation.Object = (FRegexMatcherImplementation *)0x152d56510;
  local_190.Implementation.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x152d56570;
  local_170 = L"FC feedback: (\\d+)";
  pwStack_168 = L" Achieved (.*) FC feedback state";
  local_160 = 
  L"Invalid no warp resource extent, IF optionally specified by the client!Either extent not provided or one of the extent dimensions(0 x 0) is incorrectly zero.Resetting extent to full no warp resource size(0 x 0)"
  ;
  local_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,7,0,&local_1c0,7,&local_1b4);
  *(FRegexPatternImplementation **)local_1c0.Data = local_190.Pattern.Implementation.Object;
  *(TReferenceControllerBase<1> **)(local_1c0.Data + 8) =
       local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController;
  *(FRegexMatcherImplementation **)(local_1c0.Data + 0x10) = local_190.Implementation.Object;
  *(TReferenceControllerBase<1> **)(local_1c0.Data + 0x18) =
       local_190.Implementation.SharedReferenceCount.ReferenceController;
  *(wchar_t **)(local_1c0.Data + 0x20) = local_170;
  *(wchar_t **)(local_1c0.Data + 0x28) = pwStack_168;
  *(wchar_t **)(local_1c0.Data + 0x30) = local_160;
  local_190.Pattern.Implementation.Object = (FRegexPatternImplementation *)0x152d2ec78;
  local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x152d56820;
  local_190.Implementation.Object = (FRegexMatcherImplementation *)0x152d56910;
  local_190.Implementation.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x152d569a0;
  local_170 = L"SL resource tags for frame (\\d+) not set yet!";
  local_1d0.Data = (FScriptContainerElement *)0x0;
  local_1c8 = 5;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,5,0,&local_1d0,5,&local_1c4);
  uVar1 = local_1a8;
  *(FRegexPatternImplementation **)local_1d0.Data = local_190.Pattern.Implementation.Object;
  *(TReferenceControllerBase<1> **)(local_1d0.Data + 8) =
       local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController;
  *(FRegexMatcherImplementation **)(local_1d0.Data + 0x10) = local_190.Implementation.Object;
  *(TReferenceControllerBase<1> **)(local_1d0.Data + 0x18) =
       local_190.Implementation.SharedReferenceCount.ReferenceController;
  *(wchar_t **)(local_1d0.Data + 0x20) = local_170;
  uVar7 = (ulonglong)(int)local_1a8;
  pFVar2 = local_1b0.Data + uVar7 * 8;
  FVar8.Data = local_1b0.Data;
  while( true ) {
    if ((uint)uVar7 != uVar1) {
      `TCheckedPointerIterator<wchar_t_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1f8);
    }
    uVar9 = local_1b8;
    if (FVar8.Data == pFVar2) {
      uVar7 = (ulonglong)(int)local_1b8;
      pFVar2 = local_1c0.Data + uVar7 * 8;
      FVar8.Data = local_1c0.Data;
      goto LAB_14de63b80;
    }
    FString::FString(&local_1e0,*(wchar_t **)FVar8.Data);
    pFVar5 = FRegexPattern::FRegexPattern(&local_1a0,&local_1e0,None);
    pFVar6 = FRegexMatcher::FRegexMatcher(&local_190,pFVar5,&local_1f0);
    bVar3 = FRegexMatcher::FindNext(pFVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.Implementation.SharedReferenceCount.ReferenceController);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (bVar3) break;
    uVar7 = (ulonglong)local_1a8;
    FVar8.Data = FVar8.Data + 8;
  }
  if (4 < (byte)LogStreamlineAPI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineAPI);
  }
LAB_14de63e24:
  if (local_1d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Data);
  }
  if (local_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data);
  }
  if (local_1b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  return;
LAB_14de63b80:
  if ((uint)uVar7 != uVar9) {
    `TCheckedPointerIterator<wchar_t_const_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_1f8);
  }
  uVar1 = local_1c8;
  if (FVar8.Data == pFVar2) {
    uVar7 = (ulonglong)(int)local_1c8;
    pFVar2 = local_1d0.Data + uVar7 * 8;
    FVar8.Data = local_1d0.Data;
    while( true ) {
      if ((uint)uVar7 != uVar1) {
        `TCheckedPointerIterator<wchar_t_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f8);
      }
      if (FVar8.Data == pFVar2) {
                    /* WARNING: Could not recover jumptable at 0x00014de63cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(switchD_1501dbc7b::caseD_1.e_magic +
                  *(uint *)(&UNK_14de63e8c + (longlong)iVar10 * 4)))
                  (switchD_1501dbc7b::caseD_1.e_magic +
                   *(uint *)(&UNK_14de63e8c + (longlong)iVar10 * 4));
        return;
      }
      FString::FString(&local_1e0,*(wchar_t **)FVar8.Data);
      pFVar5 = FRegexPattern::FRegexPattern(&local_1a0,&local_1e0,None);
      pFVar6 = FRegexMatcher::FRegexMatcher(&local_190,pFVar5,&local_1f0);
      bVar3 = FRegexMatcher::FindNext(pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.Implementation.SharedReferenceCount.ReferenceController);
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (bVar3) break;
      uVar7 = (ulonglong)local_1c8;
      FVar8.Data = FVar8.Data + 8;
    }
    if (6 < (byte)LogStreamlineAPI._0_1_) {
      UE::Logging::Private::BasicLog<7>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineAPI);
    }
    goto LAB_14de63e24;
  }
  FString::FString(&local_1e0,*(wchar_t **)FVar8.Data);
  pFVar5 = FRegexPattern::FRegexPattern(&local_1a0,&local_1e0,None);
  pFVar6 = FRegexMatcher::FRegexMatcher(&local_190,pFVar5,&local_1f0);
  bVar3 = FRegexMatcher::FindNext(pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.Pattern.Implementation.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.Implementation.SharedReferenceCount.ReferenceController);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (bVar3) goto LAB_14de63d92;
  uVar7 = (ulonglong)local_1b8;
  FVar8.Data = FVar8.Data + 8;
  goto LAB_14de63b80;
LAB_14de63d92:
  if (5 < (byte)LogStreamlineAPI._0_1_) {
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineAPI);
  }
  goto LAB_14de63e24;
}

// ToSL @ 14de63eb0

float4x4 * __cdecl ToSL(float4x4 *__return_storage_ptr__,TMatrix<float> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  __return_storage_ptr__->row[0].x = 3.4028235e+38;
  __return_storage_ptr__->row[0].y = 3.4028235e+38;
  __return_storage_ptr__->row[0].z = 3.4028235e+38;
  __return_storage_ptr__->row[0].w = 3.4028235e+38;
  __return_storage_ptr__->row[1].x = 3.4028235e+38;
  __return_storage_ptr__->row[1].y = 3.4028235e+38;
  __return_storage_ptr__->row[1].z = 3.4028235e+38;
  __return_storage_ptr__->row[1].w = 3.4028235e+38;
  __return_storage_ptr__->row[2].x = 3.4028235e+38;
  __return_storage_ptr__->row[2].y = 3.4028235e+38;
  __return_storage_ptr__->row[2].z = 3.4028235e+38;
  __return_storage_ptr__->row[2].w = 3.4028235e+38;
  __return_storage_ptr__->row[3].x = 3.4028235e+38;
  __return_storage_ptr__->row[3].y = 3.4028235e+38;
  __return_storage_ptr__->row[3].z = 3.4028235e+38;
  __return_storage_ptr__->row[3].w = 3.4028235e+38;
  fVar1 = param_1->M[0][1];
  fVar2 = param_1->M[0][2];
  fVar3 = param_1->M[0][3];
  __return_storage_ptr__->row[0].x = param_1->M[0][0];
  __return_storage_ptr__->row[0].y = fVar1;
  __return_storage_ptr__->row[0].z = fVar2;
  __return_storage_ptr__->row[0].w = fVar3;
  fVar1 = param_1->M[1][1];
  fVar2 = param_1->M[1][2];
  fVar3 = param_1->M[1][3];
  __return_storage_ptr__->row[1].x = param_1->M[1][0];
  __return_storage_ptr__->row[1].y = fVar1;
  __return_storage_ptr__->row[1].z = fVar2;
  __return_storage_ptr__->row[1].w = fVar3;
  fVar1 = param_1->M[2][1];
  fVar2 = param_1->M[2][2];
  fVar3 = param_1->M[2][3];
  __return_storage_ptr__->row[2].x = param_1->M[2][0];
  __return_storage_ptr__->row[2].y = fVar1;
  __return_storage_ptr__->row[2].z = fVar2;
  __return_storage_ptr__->row[2].w = fVar3;
  fVar1 = param_1->M[3][1];
  fVar2 = param_1->M[3][2];
  fVar3 = param_1->M[3][3];
  __return_storage_ptr__->row[3].x = param_1->M[3][0];
  __return_storage_ptr__->row[3].y = fVar1;
  __return_storage_ptr__->row[3].z = fVar2;
  __return_storage_ptr__->row[3].w = fVar3;
  return __return_storage_ptr__;
}

// Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister @ 14de642c0

UClass * __cdecl Z_Construct_UClass_UStreamlineOverrideSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineOverrideSettings",
               &Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton,
               UStreamlineOverrideSettings::StaticRegisterNativesUStreamlineOverrideSettings,0x30,8,
               CLASS_Intrinsic|CLASS_ProjectUserConfig|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineOverrideSettings>,
               InternalVTableHelperCtorCaller<UStreamlineOverrideSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineOverrideSettings.InnerSingleton;
}

// Z_Construct_UClass_UStreamlineSettings_NoRegister @ 14de64370

UClass * __cdecl Z_Construct_UClass_UStreamlineSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineRHI",L"StreamlineSettings",
               &Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton,
               UStreamlineSettings::StaticRegisterNativesUStreamlineSettings,0x38,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<UStreamlineSettings>,
               InternalVTableHelperCtorCaller<UStreamlineSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineSettings.InnerSingleton;
}

// getBufferTypeAsStr @ 14de64420

char * __cdecl sl::getBufferTypeAsStr(uint param_1)

{
  switch(param_1) {
  case 0:
    return "kBufferTypeDepth";
  case 1:
    return "kBufferTypeMotionVectors";
  case 2:
    return "kBufferTypeHUDLessColor";
  case 3:
    return "kBufferTypeScalingInputColor";
  case 4:
    return "kBufferTypeScalingOutputColor";
  case 5:
    return "kBufferTypeNormals";
  case 6:
    return "kBufferTypeRoughness";
  case 7:
    return "kBufferTypeAlbedo";
  case 8:
    return "kBufferTypeSpecularAlbedo";
  case 9:
    return "kBufferTypeIndirectAlbedo";
  case 10:
    return "kBufferTypeSpecularMotionVectors";
  case 0xb:
    return "kBufferTypeDisocclusionMask";
  case 0xc:
    return "kBufferTypeEmissive";
  case 0xd:
    return "kBufferTypeExposure";
  case 0xe:
    return "kBufferTypeNormalRoughness";
  case 0xf:
    return "kBufferTypeDiffuseHitNoisy";
  case 0x10:
    return "kBufferTypeDiffuseHitDenoised";
  case 0x11:
    return "kBufferTypeSpecularHitNoisy";
  case 0x12:
    return "kBufferTypeSpecularHitDenoised";
  case 0x13:
    return "kBufferTypeShadowNoisy";
  case 0x14:
    return "kBufferTypeShadowDenoised";
  case 0x15:
    return "kBufferTypeAmbientOcclusionNoisy";
  case 0x16:
    return "kBufferTypeAmbientOcclusionDenoised";
  case 0x17:
    return "kBufferTypeUIColorAndAlpha";
  case 0x18:
    return "kBufferTypeShadowHint";
  case 0x19:
    return "kBufferTypeReflectionHint";
  case 0x1a:
    return "kBufferTypeParticleHint";
  case 0x1b:
    return "kBufferTypeTransparencyHint";
  case 0x1c:
    return "kBufferTypeAnimatedTextureHint";
  case 0x1d:
    return "kBufferTypeBiasCurrentColorHint";
  case 0x1e:
    return "kBufferTypeRaytracingDistance";
  case 0x1f:
    return "kBufferTypeReflectionMotionVectors";
  case 0x20:
    return "kBufferTypePosition";
  case 0x21:
    return "kBufferTypeInvalidDepthMotionHint";
  case 0x22:
    return "kBufferTypeAlpha";
  case 0x23:
    return "kBufferTypeOpaqueColor";
  case 0x24:
    return "kBufferTypeReactiveMaskHint";
  case 0x25:
    return "kBufferTypeTransparencyAndCompositionMaskHint";
  case 0x26:
    return "kBufferTypeReflectedAlbedo";
  case 0x27:
    return "kBufferTypeColorBeforeParticles";
  case 0x28:
    return "kBufferTypeColorBeforeTransparency";
  case 0x29:
    return "kBufferTypeColorBeforeFog";
  case 0x2a:
    return "kBufferTypeSpecularHitDistance";
  case 0x2b:
    return "kBufferTypeSpecularRayDirectionHitDistance";
  case 0x2c:
    return "kBufferTypeSpecularRayDirection";
  case 0x2d:
    return "kBufferTypeDiffuseHitDistance";
  case 0x2e:
    return "kBufferTypeDiffuseRayDirectionHitDistance";
  case 0x2f:
    return "kBufferTypeDiffuseRayDirection";
  case 0x30:
    return "kBufferTypeHiResDepth";
  case 0x31:
    return "kBufferTypeLinearDepth";
  case 0x32:
    return "kBufferTypeBidirectionalDistortionField";
  case 0x33:
    return "kBufferTypeTransparencyLayer";
  case 0x34:
    return "kBufferTypeTransparencyLayerOpacity";
  case 0x35:
    return "kBufferTypeBackbuffer";
  case 0x36:
    return "kBufferTypeNoWarpMask";
  case 0x37:
    return "kBufferTypeColorAfterParticles";
  case 0x38:
    return "kBufferTypeColorAfterTransparency";
  case 0x39:
    return "kBufferTypeColorAfterFog";
  case 0x3a:
    return "kBufferTypeScreenSpaceSubsurfaceScatteringGuide";
  case 0x3b:
    return "kBufferTypeColorBeforeScreenSpaceSubsurfaceScattering";
  case 0x3c:
    return "kBufferTypeColorAfterScreenSpaceSubsurfaceScattering";
  case 0x3d:
    return "kBufferTypeScreenSpaceRefractionGuide";
  case 0x3e:
    return "kBufferTypeColorBeforeScreenSpaceRefraction";
  case 0x3f:
    return "kBufferTypeColorAfterScreenSpaceRefraction";
  case 0x40:
    return "kBufferTypeDepthOfFieldGuide";
  case 0x41:
    return "kBufferTypeColorBeforeDepthOfField";
  case 0x42:
    return "kBufferTypeColorAfterDepthOfField";
  case 0x43:
    return "kBufferTypeScalingOutputAlpha";
  default:
    return "Unknown";
  }
}

// getFeatureAsStr @ 14de64780

char * __cdecl sl::getFeatureAsStr(uint param_1)

{
  char *pcVar1;
  
  if (param_1 < 0x3e9) {
    if (param_1 != 1000) {
      switch(param_1) {
      case 0:
        return "kFeatureDLSS";
      default:
        return "Unknown";
      case 2:
        return "kFeatureNIS";
      case 3:
        return "kFeatureReflex";
      case 4:
        return "kFeaturePCL";
      case 5:
        return "kFeatureDeepDVC";
      case 6:
        return "kFeatureLatewarp";
      }
    }
    return "kFeatureDLSS_G";
  }
  if (param_1 == 0x3e9) {
    return "kFeatureDLSS_RR";
  }
  if (param_1 == 0x3ea) {
    return "kFeatureNvPerf";
  }
  if (param_1 != 0x3eb) {
    if (param_1 != 9999) {
      pcVar1 = "kFeatureCommon";
      if (param_1 != 0xffffffff) {
        pcVar1 = "Unknown";
      }
      return pcVar1;
    }
    return "kFeatureImGUI";
  }
  return "kFeatureDirectSR";
}

// getResultAsStr @ 14de64860

char * __cdecl sl::getResultAsStr(Result param_1)

{
  switch(param_1) {
  case eOk:
    return "Result::eOk";
  case eErrorIO:
    return "Result::eErrorIO";
  case eErrorDriverOutOfDate:
    return "Result::eErrorDriverOutOfDate";
  case eErrorOSOutOfDate:
    return "Result::eErrorOSOutOfDate";
  case eErrorOSDisabledHWS:
    return "Result::eErrorOSDisabledHWS";
  case eErrorDeviceNotCreated:
    return "Result::eErrorDeviceNotCreated";
  case eErrorNoSupportedAdapterFound:
    return "Result::eErrorNoSupportedAdapterFound";
  case eErrorAdapterNotSupported:
    return "Result::eErrorAdapterNotSupported";
  case eErrorNoPlugins:
    return "Result::eErrorNoPlugins";
  case eErrorVulkanAPI:
    return "Result::eErrorVulkanAPI";
  case eErrorDXGIAPI:
    return "Result::eErrorDXGIAPI";
  case eErrorD3DAPI:
    return "Result::eErrorD3DAPI";
  case eErrorNRDAPI:
    return "Result::eErrorNRDAPI";
  case eErrorNVAPI:
    return "Result::eErrorNVAPI";
  case eErrorReflexAPI:
    return "Result::eErrorReflexAPI";
  case eErrorNGXFailed:
    return "Result::eErrorNGXFailed";
  case eErrorJSONParsing:
    return "Result::eErrorJSONParsing";
  case eErrorMissingProxy:
    return "Result::eErrorMissingProxy";
  case eErrorMissingResourceState:
    return "Result::eErrorMissingResourceState";
  case eErrorInvalidIntegration:
    return "Result::eErrorInvalidIntegration";
  case eErrorMissingInputParameter:
    return "Result::eErrorMissingInputParameter";
  case eErrorNotInitialized:
    return "Result::eErrorNotInitialized";
  case eErrorComputeFailed:
    return "Result::eErrorComputeFailed";
  case eErrorInitNotCalled:
    return "Result::eErrorInitNotCalled";
  case eErrorExceptionHandler:
    return "Result::eErrorExceptionHandler";
  case eErrorInvalidParameter:
    return "Result::eErrorInvalidParameter";
  case eErrorMissingConstants:
    return "Result::eErrorMissingConstants";
  case eErrorDuplicatedConstants:
    return "Result::eErrorDuplicatedConstants";
  case eErrorMissingOrInvalidAPI:
    return "Result::eErrorMissingOrInvalidAPI";
  case eErrorCommonConstantsMissing:
    return "Result::eErrorCommonConstantsMissing";
  case eErrorUnsupportedInterface:
    return "Result::eErrorUnsupportedInterface";
  case eErrorFeatureMissing:
    return "Result::eErrorFeatureMissing";
  case eErrorFeatureNotSupported:
    return "Result::eErrorFeatureNotSupported";
  case eErrorFeatureMissingHooks:
    return "Result::eErrorFeatureMissingHooks";
  case eErrorFeatureFailedToLoad:
    return "Result::eErrorFeatureFailedToLoad";
  case eErrorFeatureWrongPriority:
    return "Result::eErrorFeatureWrongPriority";
  case eErrorFeatureMissingDependency:
    return "Result::eErrorFeatureMissingDependency";
  case eErrorFeatureManagerInvalidState:
    return "Result::eErrorFeatureManagerInvalidState";
  case eErrorInvalidState:
    return "Result::eErrorInvalidState";
  case eWarnOutOfVRAM:
    return "Result::eWarnOutOfVRAM";
  default:
    return "Unknown";
  }
}

// isSignedByNVIDIA @ 14de64a70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl isSignedByNVIDIA(wchar_t *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulong *puVar4;
  void *hMem;
  int iVar5;
  HMODULE hModule;
  HLOCAL hMem_00;
  void *pvVar6;
  HLOCAL hMem_01;
  void *pvVar7;
  _CERT_CONTEXT *p_Var8;
  uint uVar9;
  bool bVar11;
  ulong local_res10 [2];
  ulong local_res18 [2];
  ulong local_res20 [2];
  void *local_138;
  void *local_130;
  void *local_128;
  ulong local_120;
  ulong local_11c;
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uVar10;
  
  uVar10 = 0;
  bVar11 = false;
  local_128 = (void *)0x0;
  local_138 = (void *)0x0;
  if ((pfnCertOpenStore == (_func___cdecl_void_ptr_char_ptr_ulong_ulong64_ulong_void_ptr *)0x0) &&
     (((((hModule = LoadLibraryExW(L"crypt32.dll",(HANDLE)0x0,0x800), hModule == (HMODULE)0x0 ||
         ((pfnCryptMsgClose == (_func___cdecl_int_void_ptr *)0x0 &&
          (pfnCryptMsgClose = (_func___cdecl_int_void_ptr *)GetProcAddress(hModule,"CryptMsgClose"),
          pfnCryptMsgClose == (_func___cdecl_int_void_ptr *)0x0)))) ||
        ((pfnCertOpenStore == (_func___cdecl_void_ptr_char_ptr_ulong_ulong64_ulong_void_ptr *)0x0 &&
         (pfnCertOpenStore =
               (_func___cdecl_void_ptr_char_ptr_ulong_ulong64_ulong_void_ptr *)
               GetProcAddress(hModule,"CertOpenStore"),
         pfnCertOpenStore == (_func___cdecl_void_ptr_char_ptr_ulong_ulong64_ulong_void_ptr *)0x0))))
       || ((((pfnCertCloseStore == (_func___cdecl_int_void_ptr_ulong *)0x0 &&
             (pfnCertCloseStore =
                   (_func___cdecl_int_void_ptr_ulong *)GetProcAddress(hModule,"CertCloseStore"),
             pfnCertCloseStore == (_func___cdecl_int_void_ptr_ulong *)0x0)) ||
            ((pfnCertFreeCertificateContext == (_func___cdecl_int__CERT_CONTEXT_ptr *)0x0 &&
             (pfnCertFreeCertificateContext =
                   (_func___cdecl_int__CERT_CONTEXT_ptr *)
                   GetProcAddress(hModule,"CertFreeCertificateContext"),
             pfnCertFreeCertificateContext == (_func___cdecl_int__CERT_CONTEXT_ptr *)0x0)))) ||
           ((pfnCertFindCertificateInStore ==
             (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr
              *)0x0 &&
            (pfnCertFindCertificateInStore =
                  (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr
                   *)GetProcAddress(hModule,"CertFindCertificateInStore"),
            pfnCertFindCertificateInStore ==
            (_func___cdecl__CERT_CONTEXT_ptr_void_ptr_ulong_ulong_ulong_void_ptr__CERT_CONTEXT_ptr *
            )0x0)))))) ||
      (((pfnCryptMsgGetParam == (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)0x0 &&
        (pfnCryptMsgGetParam =
              (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)
              GetProcAddress(hModule,"CryptMsgGetParam"),
        pfnCryptMsgGetParam == (_func___cdecl_int_void_ptr_ulong_ulong_void_ptr_ulong_ptr *)0x0)) ||
       ((((pfnCryptMsgUpdate == (_func___cdecl_int_void_ptr_uchar_ptr_ulong_int *)0x0 &&
          (pfnCryptMsgUpdate =
                (_func___cdecl_int_void_ptr_uchar_ptr_ulong_int *)
                GetProcAddress(hModule,"CryptMsgUpdate"),
          pfnCryptMsgUpdate == (_func___cdecl_int_void_ptr_uchar_ptr_ulong_int *)0x0)) ||
         ((pfnCryptMsgOpenToDecode ==
           (_func___cdecl_void_ptr_ulong_ulong_ulong_ulong64__CERT_INFO_ptr__CMSG_STREAM_INFO_ptr *)
           0x0 && (pfnCryptMsgOpenToDecode =
                        (_func___cdecl_void_ptr_ulong_ulong_ulong_ulong64__CERT_INFO_ptr__CMSG_STREAM_INFO_ptr
                         *)GetProcAddress(hModule,"CryptMsgOpenToDecode"),
                  pfnCryptMsgOpenToDecode ==
                  (_func___cdecl_void_ptr_ulong_ulong_ulong_ulong64__CERT_INFO_ptr__CMSG_STREAM_INFO_ptr
                   *)0x0)))) ||
        (((pfnCryptQueryObject ==
           (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
            *)0x0 &&
          (pfnCryptQueryObject =
                (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
                 *)GetProcAddress(hModule,"CryptQueryObject"),
          pfnCryptQueryObject ==
          (_func___cdecl_int_ulong_void_ptr_ulong_ulong_ulong_ulong_ptr_ulong_ptr_ulong_ptr_void_ptr_ptr_void_ptr_ptr_void_ptr_ptr
           *)0x0)) ||
         ((pfnCryptDecodeObjectEx ==
           (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
            *)0x0 &&
          (pfnCryptDecodeObjectEx =
                (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
                 *)GetProcAddress(hModule,"CryptDecodeObjectEx"),
          pfnCryptDecodeObjectEx ==
          (_func___cdecl_int_ulong_char_ptr_uchar_ptr_ulong_ulong__CRYPT_DECODE_PARA_ptr_void_ptr_ulong_ptr
           *)0x0)))))))))))) {
    if (4 < (byte)LogStreamlineRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      return false;
    }
  }
  else {
    iVar5 = (*pfnCryptQueryObject)
                      (1,param_1,0x400,2,0,&local_11c,&local_120,local_res20,&local_128,&local_138,
                       (void **)0x0);
    if (((iVar5 != 0) &&
        (iVar5 = (*pfnCryptMsgGetParam)(local_138,6,0,(void *)0x0,local_res10), iVar5 != 0)) &&
       (hMem_00 = LocalAlloc(0x40,(ulonglong)local_res10[0]), hMem_00 != (HLOCAL)0x0)) {
      iVar5 = (*pfnCryptMsgGetParam)(local_138,6,0,hMem_00,local_res10);
      if (iVar5 != 0) {
        uVar2 = *(uint *)((longlong)hMem_00 + 0x78);
        if (uVar2 != 0) {
          lVar3 = *(longlong *)((longlong)hMem_00 + 0x80);
          do {
            lVar1 = uVar10 * 0x18;
            iVar5 = strcmp("1.3.6.1.4.1.311.2.4.1",*(char **)(lVar1 + lVar3));
            if (iVar5 == 0) {
              pvVar6 = (*pfnCryptMsgOpenToDecode)
                                 (0x10001,0,0,0,(_CERT_INFO *)0x0,(_CMSG_STREAM_INFO *)0x0);
              if (pvVar6 != (void *)0x0) {
                puVar4 = *(ulong **)(lVar1 + 0x10 + *(longlong *)((longlong)hMem_00 + 0x80));
                iVar5 = (*pfnCryptMsgUpdate)(pvVar6,*(uchar **)(puVar4 + 2),*puVar4,1);
                if (iVar5 != 0) {
                  local_res10[0] = 0;
                  (*pfnCryptMsgGetParam)(pvVar6,6,0,(void *)0x0,local_res10);
                  if ((local_res10[0] != 0) &&
                     (hMem_01 = LocalAlloc(0x40,(ulonglong)local_res10[0]), hMem_01 != (HLOCAL)0x0))
                  {
                    iVar5 = (*pfnCryptMsgGetParam)(pvVar6,6,0,hMem_01,local_res10);
                    if (iVar5 != 0) {
                      local_110 = *(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)((longlong)hMem_00 + 0x80) + 0x10 + lVar1) + 8);
                      local_118[0] = **(undefined4 **)
                                       (*(longlong *)((longlong)hMem_00 + 0x80) + 0x10 + lVar1);
                      pvVar7 = (*pfnCertOpenStore)((char *)0x5,0x10001,0,0,local_118);
                      if (pvVar7 == (void *)0x0) {
                        LocalFree(hMem_01);
                        return false;
                      }
                      memset(local_108,0,0xd0);
                      local_d8 = *(undefined4 *)((longlong)hMem_01 + 8);
                      uStack_d4 = *(undefined4 *)((longlong)hMem_01 + 0xc);
                      uStack_d0 = *(undefined4 *)((longlong)hMem_01 + 0x10);
                      uStack_cc = *(undefined4 *)((longlong)hMem_01 + 0x14);
                      local_100 = *(undefined4 *)((longlong)hMem_01 + 0x18);
                      uStack_fc = *(undefined4 *)((longlong)hMem_01 + 0x1c);
                      uStack_f8 = *(undefined4 *)((longlong)hMem_01 + 0x20);
                      uStack_f4 = *(undefined4 *)((longlong)hMem_01 + 0x24);
                      p_Var8 = (*pfnCertFindCertificateInStore)
                                         (pvVar7,0x10001,0,0xb0000,local_108,(_CERT_CONTEXT *)0x0);
                      if (p_Var8 == (_CERT_CONTEXT *)0x0) {
                        LocalFree(hMem_01);
                        (*pfnCertCloseStore)(pvVar7,1);
                        return false;
                      }
                      local_130 = (void *)0x0;
                      local_res18[0] = 0;
                      iVar5 = (*pfnCryptDecodeObjectEx)
                                        (0x10001,(char *)0x48,
                                         (p_Var8->pCertInfo->SubjectPublicKeyInfo).PublicKey.pbData,
                                         (p_Var8->pCertInfo->SubjectPublicKeyInfo).PublicKey.cbData,
                                         0x8000,(_CRYPT_DECODE_PARA *)0x0,&local_130,local_res18);
                      hMem = local_130;
                      if (iVar5 != 0) {
                        if ((local_res18[0] == 0x19b) &&
                           (iVar5 = memcmp(s_rsaStreamlinePublicKey,local_130,0x19b), iVar5 == 0)) {
                          bVar11 = true;
                        }
                        LocalFree(hMem);
                      }
                      (*pfnCertFreeCertificateContext)(p_Var8);
                      (*pfnCertCloseStore)(pvVar7,1);
                    }
                    LocalFree(hMem_01);
                  }
                }
                (*pfnCryptMsgClose)(pvVar6);
              }
              break;
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < uVar2);
        }
        LocalFree(hMem_00);
        (*pfnCryptMsgClose)(local_138);
        (*pfnCertCloseStore)(local_128,1);
        return bVar11;
      }
      LocalFree(hMem_00);
    }
  }
  return false;
}

// slVerifyEmbeddedSignature @ 14de65080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl slVerifyEmbeddedSignature(FString *param_1)

{
  FScriptContainerElement *_Src;
  long lVar1;
  HMODULE hModule;
  FStaticBasicLogRecord *pFVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 auStackY_148 [32];
  FString local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  char *local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 *local_60;
  undefined8 local_58;
  FScriptContainerElement *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  FString local_38;
  _GUID local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_100.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar3 = (longlong)local_100.Data.ArrayNum;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_100.Data.ArrayNum == 0) {
    local_100.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_100,local_100.Data.ArrayNum
               ,&local_100.Data.ArrayMax);
    memcpy(local_100.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  FPaths::ConvertRelativePathToFull(&local_38,&local_100);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(&local_100);
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_100.Data.ArrayNum != 0) {
    FVar4.Data = local_100.Data.AllocatorInstance.Data;
  }
  local_58 = 0x20;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = FVar4.Data;
  if (pfnWinVerifyTrust == (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0) {
    hModule = LoadLibraryExW(L"wintrust.dll",(HANDLE)0x0,0x800);
    if (hModule == (HMODULE)0x0) {
LAB_14de6519c:
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogStreamlineRHI);
      }
      bVar5 = false;
      goto LAB_14de652fc;
    }
    if (pfnWinVerifyTrust == (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0) {
      pfnWinVerifyTrust =
           (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)
           GetProcAddress(hModule,"WinVerifyTrust");
      if (pfnWinVerifyTrust == (_func___cdecl_long_HWND___ptr__GUID_ptr_void_ptr *)0x0)
      goto LAB_14de6519c;
    }
  }
  local_28.Data1 = 0xaac56b;
  local_90 = 0;
  local_b0 = &local_58;
  local_28.Data2 = 0xcd44;
  local_28.Data3 = 0x11d0;
  local_88 = &local_78;
  local_28.Data4[0] = 0x8c;
  local_28.Data4[1] = 0xc2;
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = 0xc0;
  local_e8 = OID;
  local_60 = &local_f0;
  local_28.Data4[4] = 'O';
  local_28.Data4[5] = 0xc2;
  local_28.Data4[6] = 0x95;
  local_28.Data4[7] = 0xee;
  local_d8 = 0x58;
  local_b8 = 1;
  local_a8 = 1;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 2;
  local_a0 = 0;
  local_98 = 0;
  local_6c = 0;
  local_64 = 0;
  local_78 = 0x20;
  local_70 = 3;
  local_f0 = 0x10;
  local_ec = 2;
  lVar1 = (*pfnWinVerifyTrust)((HWND__ *)0x0,&local_28,&local_d8);
  bVar5 = lVar1 == 0;
  if (lVar1 == 0) {
    if (*(int *)((longlong)local_88 + 0xc) == 1) {
      bVar5 = isSignedByNVIDIA((wchar_t *)FVar4.Data);
      if (bVar5) {
        if (4 < (byte)LogStreamlineRHI._0_1_) {
          pFVar2 = &LOG_Static;
LAB_14de652d5:
          UE::Logging::Private::BasicLog<5>(pFVar2,(FLogCategoryBase *)&LogStreamlineRHI);
        }
      }
      else if (4 < (byte)LogStreamlineRHI._0_1_) {
        pFVar2 = &LOG_Static;
        goto LAB_14de652d5;
      }
    }
    else {
      bVar5 = false;
      if (4 < (byte)LogStreamlineRHI._0_1_) {
        pFVar2 = &LOG_Static;
        goto LAB_14de652d5;
      }
    }
  }
  else if (4 < (byte)LogStreamlineRHI._0_1_) {
    pFVar2 = &LOG_Static;
    goto LAB_14de652d5;
  }
  local_a8 = CONCAT44(local_a8._4_4_,2);
  (*pfnWinVerifyTrust)((HWND__ *)0x0,&local_28,&local_d8);
LAB_14de652fc:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// toStr @ 14de65340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
sl::Version::toStr(Version *this,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  *__return_storage_ptr__)

{
  ulonglong uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined8 uVar4;
  _Bxty *p_Var5;
  void *pvVar6;
  uint uVar7;
  ulong64 uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uStackY_180;
  undefined1 auStackY_178 [32];
  char acStack_14b [3];
  <lambda_1> local_148;
  _Bxty local_140;
  char *local_130;
  char *pcStack_128;
  _Bxty local_120;
  ulonglong local_110;
  ulonglong uStack_108;
  _Bxty local_100;
  char *local_f0;
  char *pcStack_e8;
  _Bxty local_e0;
  char *local_d0;
  char *pcStack_c8;
  _Bxty local_c0;
  char *local_b0;
  ulong64 uStack_a8;
  _Bxty local_a0;
  char *local_90;
  ulong64 uStack_88;
  char local_6c [24];
  char local_54 [24];
  char local_3c [4];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  uVar7 = this->build;
  pcVar10 = local_6c + 1;
  do {
    pcVar10 = pcVar10 + -1;
    uVar1 = (ulonglong)uVar7 / 10;
    *pcVar10 = (char)uVar7 + (char)uVar1 * -10 + '0';
    uVar7 = (uint)uVar1;
  } while (uVar7 != 0);
  local_e0._Ptr = (char *)0x0;
  local_e0._8_8_ = 0;
  if (pcVar10 == local_6c + 1) {
    local_d0 = ___xmm_000000000000000f0000000000000000;
    pcStack_c8 = _UNK_15076add8;
    local_e0._Ptr = (char *)(uVar1 & 0xff);
  }
  else {
    pcVar11 = local_6c + (1 - (longlong)pcVar10);
    if ((char *)0x7fffffffffffffff < pcVar11) {
                    /* WARNING: Subroutine does not return */
      uStackY_180 = &UNK_14de65932;
      std::_Xlen_string();
    }
    local_d0 = pcVar11;
    if (pcVar11 < (char *)0x10) {
      pcStack_c8 = (char *)0xf;
      uStackY_180 = (undefined *)0x14de65418;
      memcpy(&local_e0,pcVar10,(size_t)pcVar11);
      local_e0._Buf[(longlong)pcVar11] = '\0';
    }
    else {
      pcVar9 = (char *)((ulonglong)pcVar11 | 0xf);
      if (pcVar9 < (char *)0x8000000000000000) {
        if (pcVar9 < (char *)0x16) {
          pcVar9 = (char *)0x16;
        }
      }
      else {
        pcVar9 = (char *)0x7fffffffffffffff;
      }
      uStackY_180 = (undefined *)0x14de65441;
      pcVar3 = std::_Allocate<16,std::_Default_allocate_traits>((ulong64)(pcVar9 + 1));
      uStackY_180 = (undefined *)0x14de6545e;
      local_e0._Ptr = pcVar3;
      pcStack_c8 = pcVar9;
      memcpy(pcVar3,pcVar10,(size_t)pcVar11);
      pcVar3[(longlong)pcVar11] = '\0';
    }
  }
  uVar7 = this->minor;
  pcVar10 = local_54 + 1;
  do {
    pcVar10 = pcVar10 + -1;
    uVar1 = (ulonglong)uVar7 / 10;
    *pcVar10 = (char)uVar7 + (char)uVar1 * -10 + '0';
    uVar7 = (uint)uVar1;
  } while (uVar7 != 0);
  local_100._Ptr = (char *)0x0;
  local_100._8_8_ = 0;
  if (pcVar10 == local_54 + 1) {
    local_f0 = ___xmm_000000000000000f0000000000000000;
    pcStack_e8 = _UNK_15076add8;
    local_100._Ptr = (char *)(uVar1 & 0xff);
  }
  else {
    pcVar11 = local_54 + (1 - (longlong)pcVar10);
    if ((char *)0x7fffffffffffffff < pcVar11) {
                    /* WARNING: Subroutine does not return */
      uStackY_180 = &UNK_14de65938;
      std::_Xlen_string();
    }
    local_f0 = pcVar11;
    if (pcVar11 < (char *)0x10) {
      pcStack_e8 = (char *)0xf;
      uStackY_180 = (undefined *)0x14de654fb;
      memcpy(&local_100,pcVar10,(size_t)pcVar11);
      local_100._Buf[(longlong)pcVar11] = '\0';
    }
    else {
      pcVar9 = (char *)((ulonglong)pcVar11 | 0xf);
      if (pcVar9 < (char *)0x8000000000000000) {
        if (pcVar9 < (char *)0x16) {
          pcVar9 = (char *)0x16;
        }
      }
      else {
        pcVar9 = (char *)0x7fffffffffffffff;
      }
      uStackY_180 = (undefined *)0x14de65524;
      pcVar3 = std::_Allocate<16,std::_Default_allocate_traits>((ulong64)(pcVar9 + 1));
      uStackY_180 = (undefined *)0x14de65542;
      local_100._Ptr = pcVar3;
      pcStack_e8 = pcVar9;
      memcpy(pcVar3,pcVar10,(size_t)pcVar11);
      pcVar3[(longlong)pcVar11] = '\0';
    }
  }
  uVar7 = this->major;
  pcVar10 = local_3c + 1;
  do {
    pcVar10 = pcVar10 + -1;
    uVar1 = (ulonglong)uVar7 / 10;
    *pcVar10 = (char)uVar7 + (char)uVar1 * -10 + '0';
    uVar7 = (uint)uVar1;
  } while (uVar7 != 0);
  local_140._Ptr = (char *)0x0;
  local_140._8_8_ = 0;
  if (pcVar10 == local_3c + 1) {
    pcStack_128 = _UNK_15076add8;
    local_140._Ptr = (char *)(uVar1 & 0xff);
    local_130 = ___xmm_000000000000000f0000000000000000;
  }
  else {
    pcVar11 = local_3c + (1 - (longlong)pcVar10);
    if ((char *)0x7fffffffffffffff < pcVar11) {
                    /* WARNING: Subroutine does not return */
      uStackY_180 = &UNK_14de6592c;
      std::_Xlen_string();
    }
    local_130 = pcVar11;
    if (pcVar11 < (char *)0x10) {
      pcStack_128 = (char *)0xf;
      uStackY_180 = (undefined *)0x14de655de;
      memcpy(&local_140,pcVar10,(size_t)pcVar11);
      local_140._Buf[(longlong)pcVar11] = '\0';
    }
    else {
      pcVar3 = (char *)((ulonglong)pcVar11 | 0xf);
      pcVar9 = (char *)0x7fffffffffffffff;
      if ((pcVar3 < (char *)0x8000000000000000) && (pcVar9 = pcVar3, pcVar3 < (char *)0x16)) {
        pcVar9 = (char *)0x16;
      }
      uStackY_180 = (undefined *)0x14de6560a;
      p_Var5 = std::_Allocate<16,std::_Default_allocate_traits>((ulong64)(pcVar9 + 1));
      uStackY_180 = (undefined *)0x14de6562a;
      local_140._Ptr = (char *)p_Var5;
      pcStack_128 = pcVar9;
      memcpy(p_Var5,pcVar10,(size_t)pcVar11);
      p_Var5->_Buf[(longlong)pcVar11] = '\0';
    }
  }
  pcVar10 = local_130;
  if (pcStack_128 == local_130) {
    uStackY_180 = (undefined *)0x14de6568e;
    p_Var5 = (_Bxty *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_140,1,local_148,".",1);
  }
  else {
    local_130 = local_130 + 1;
    uVar4 = &local_140;
    if ((char *)0xf < pcStack_128) {
      uVar4 = local_140._Ptr;
    }
    ((char *)(uVar4 + (longlong)pcVar10))[0] = '.';
    ((char *)(uVar4 + (longlong)pcVar10))[1] = '\0';
    p_Var5 = &local_140;
  }
  local_a0._Ptr = p_Var5->_Ptr;
  local_a0._8_8_ = *(undefined8 *)((longlong)p_Var5 + 8);
  local_90 = p_Var5[1]._Ptr;
  uStack_88 = *(ulong64 *)((longlong)p_Var5 + 0x18);
  p_Var5->_Buf[0] = '\0';
  p_Var5[1]._Ptr = (char *)0x0;
  *(ulong64 *)((longlong)p_Var5 + 0x18) = 0xf;
  uStackY_180 = (undefined *)0x14de656c6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_120,
             (_String_constructor_concat_tag)local_148,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_a0,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_100);
  uVar1 = local_110;
  if (uStack_108 == local_110) {
    uStackY_180 = (undefined *)0x14de65726;
    p_Var5 = (_Bxty *)std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                      _Reallocate_grow_by<_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::append_::__l2::<lambda_1>,char_const_*,unsigned___int64>
                                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
                                 &local_120,1,local_148,".",1);
  }
  else {
    local_110 = local_110 + 1;
    p_Var5 = &local_120;
    if (0xf < uStack_108) {
      p_Var5 = (_Bxty *)CONCAT71(local_120._1_7_,local_120._Buf[0]);
    }
    (p_Var5->_Buf + uVar1)[0] = '.';
    (p_Var5->_Buf + uVar1)[1] = '\0';
    p_Var5 = &local_120;
  }
  local_c0._Ptr = p_Var5->_Ptr;
  local_c0._8_8_ = *(undefined8 *)((longlong)p_Var5 + 8);
  local_b0 = p_Var5[1]._Ptr;
  uStack_a8 = *(ulong64 *)((longlong)p_Var5 + 0x18);
  p_Var5->_Buf[0] = '\0';
  p_Var5[1]._Ptr = (char *)0x0;
  *(ulong64 *)((longlong)p_Var5 + 0x18) = 0xf;
  uStackY_180 = (undefined *)0x14de65758;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>
            (__return_storage_ptr__,(_String_constructor_concat_tag)local_148,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_c0,
             (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_e0);
  if (0xf < uStack_a8) {
    uVar8 = uStack_a8 + 1;
    uVar4 = local_c0._Ptr;
    if (0xfff < uVar8) {
      uVar4 = *(undefined8 *)(local_c0._Ptr + -8);
      uVar8 = uStack_a8 + 0x28;
      if ((char *)0x1f < local_c0._Ptr + (-8 - uVar4)) goto LAB_14de658d6;
    }
    uStackY_180 = (undefined *)0x14de65793;
    ::operator_delete((void *)uVar4,uVar8);
  }
  if (0xf < uStack_108) {
    pvVar2 = (void *)CONCAT71(local_120._1_7_,local_120._Buf[0]);
    uVar8 = uStack_108 + 1;
    pvVar6 = pvVar2;
    if (0xfff < uVar8) {
      pvVar6 = *(void **)((longlong)pvVar2 + -8);
      uVar8 = uStack_108 + 0x28;
      if (0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar6))) goto LAB_14de658d6;
    }
    uStackY_180 = (undefined *)0x14de657d0;
    ::operator_delete(pvVar6,uVar8);
  }
  local_110 = 0;
  uStack_108 = 0xf;
  local_120._Buf[0] = '\0';
  if (0xf < uStack_88) {
    uVar8 = uStack_88 + 1;
    uVar4 = local_a0._Ptr;
    if (0xfff < uVar8) {
      uVar4 = *(undefined8 *)(local_a0._Ptr + -8);
      uVar8 = uStack_88 + 0x28;
      if ((char *)0x1f < local_a0._Ptr + (-8 - uVar4)) goto LAB_14de658d6;
    }
    uStackY_180 = (undefined *)0x14de6581d;
    ::operator_delete((void *)uVar4,uVar8);
  }
  if ((char *)0xf < pcStack_128) {
    pcVar10 = pcStack_128 + 1;
    uVar4 = local_140._Ptr;
    if ((char *)0xfff < pcVar10) {
      uVar4 = *(undefined8 *)(local_140._Ptr + -8);
      pcVar10 = pcStack_128 + 0x28;
      if ((char *)0x1f < local_140._Ptr + (-8 - uVar4)) goto LAB_14de658d6;
    }
    uStackY_180 = (undefined *)0x14de6585a;
    ::operator_delete((void *)uVar4,(ulong64)pcVar10);
  }
  local_140._Ptr = local_140._Ptr & 0xffffffffffffff00;
  local_130 = ___xmm_000000000000000f0000000000000000;
  pcStack_128 = _UNK_15076add8;
  if ((char *)0xf < pcStack_e8) {
    pcVar10 = pcStack_e8 + 1;
    uVar4 = local_100._Ptr;
    if ((char *)0xfff < pcVar10) {
      uVar4 = *(undefined8 *)(local_100._Ptr + -8);
      pcVar10 = pcStack_e8 + 0x28;
      if ((char *)0x1f < local_100._Ptr + (-8 - uVar4)) goto LAB_14de658d6;
    }
    uStackY_180 = (undefined *)0x14de658a4;
    ::operator_delete((void *)uVar4,(ulong64)pcVar10);
  }
  if ((char *)0xf < pcStack_c8) {
    pcVar10 = pcStack_c8 + 1;
    uVar4 = local_e0._Ptr;
    if ((char *)0xfff < pcVar10) {
      uVar4 = *(undefined8 *)(local_e0._Ptr + -8);
      pcVar10 = pcStack_c8 + 0x28;
      if ((char *)0x1f < local_e0._Ptr + (-8 - uVar4)) {
LAB_14de658d6:
                    /* WARNING: Subroutine does not return */
        uStackY_180 = &UNK_14de658eb;
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    uStackY_180 = (undefined *)0x14de658f1;
    ::operator_delete((void *)uVar4,(ulong64)pcVar10);
  }
  return __return_storage_ptr__;
}

// IMPLEMENT_MODULE_StreamlineRHI @ 14de65940

void __cdecl IMPLEMENT_MODULE_StreamlineRHI(void)

{
  return;
}

// FeaturesRequestedAtSLInitTime'' @ 15045fa40

void __cdecl `dynamic_atexit_destructor_for_'FStreamlineRHI::FeaturesRequestedAtSLInitTime__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FStreamlineRHI::FeaturesRequestedAtSLInitTime.AllocatorInstance.Data;
  if (FStreamlineRHI::FeaturesRequestedAtSLInitTime.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FStreamlineRHI::FeaturesRequestedAtSLInitTime.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarStreamlieeLogLevel'' @ 15045fa60

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlieeLogLevel__(void)

{
  CVarStreamlieeLogLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlieeLogLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineFilterRedundantSetOptionsCalls'' @ 15045fa80

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineFilterRedundantSetOptionsCalls__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineFilterRedundantSetOptionsCalls);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineInitializePlugin'' @ 15045faa0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineInitializePlugin__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineInitializePlugin);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineLogFunctions'' @ 15045fac0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineLogFunctions__(void)

{
  CVarStreamlineLogFunctions._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarStreamlineLogFunctions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarStreamlineMaxNumSwapchainProxies'' @ 15045fae0

void __cdecl _dynamic_atexit_destructor_for__CVarStreamlineMaxNumSwapchainProxies__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarStreamlineMaxNumSwapchainProxies);
  return;
}

// `dynamic_atexit_destructor_for_'GStreamlineRHI'' @ 15045fb00

void __cdecl _dynamic_atexit_destructor_for__GStreamlineRHI__(void)

{
  if (GStreamlineRHI.Ptr != (FStreamlineRHI *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015045fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GStreamlineRHI.Ptr)->_padding_)(GStreamlineRHI.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineAPI'' @ 15045fb20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineAPI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineAPI);
  return;
}

// `dynamic_atexit_destructor_for_'LogStreamlineRHI'' @ 15045fb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogStreamlineRHI__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogStreamlineRHI);
  return;
}

// `dynamic_atexit_destructor_for_'PlatformDir'' @ 15045fb60

void __cdecl _dynamic_atexit_destructor_for__PlatformDir__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PlatformDir.Data.AllocatorInstance.Data;
  if (PlatformDir.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PlatformDir.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

