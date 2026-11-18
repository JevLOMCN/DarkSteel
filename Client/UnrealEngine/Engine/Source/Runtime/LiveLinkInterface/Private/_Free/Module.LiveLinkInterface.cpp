// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkInterface
// Functions: 341

// Instance'' @ 1413c2280

void __cdecl `dynamic_initializer_for_'FLiveLinkLog::Instance__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLiveLinkLog::Instance__);
  return;
}

// ModularFeatureName'' @ 1413c22a0

void __cdecl `dynamic_initializer_for_'ILiveLinkClient::ModularFeatureName__(void)

{
  ::FName::FName(&ILiveLinkClient::ModularFeatureName,"ModularFeature_LiveLinkClient");
  return;
}

// `dynamic_initializer_for_'GRegisterLiveLinkInterfaceCustomVersion'' @ 1413c22c0

void __cdecl _dynamic_initializer_for__GRegisterLiveLinkInterfaceCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = FLiveLinkCustomVersion::GUID;
  FCurrentCustomVersions::Register
            (&local_18,1,L"LiveLinkVer",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__GRegisterLiveLinkInterfaceCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkRoles'' @ 1413c2300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkRoles__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkRoles,L"LogLiveLinkRoles",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkRoles__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkSubjectSettings'' @ 1413c2340

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkSubjectSettings__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkSubjectSettings,L"LogLiveLinkSubjectSettings",Warning,
             Warning);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkSubjectSettings__);
  return;
}

// `dynamic_initializer_for_'LogLiveLinkVirtualSubject'' @ 1413c2380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLiveLinkVirtualSubject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogLiveLinkVirtualSubject,L"LogLiveLinkVirtualSubject",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLiveLinkVirtualSubject__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantLiveLinkInterface'' @ 1413c23c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantLiveLinkInterface__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "LiveLinkInterface";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"LiveLinkInterface",0x11);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FLiveLinkInterfaceModule>::InitializeModule
            );
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h__Script_LiveLinkInterface_2531058761'' @ 1413c2410

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h__Script_LiveLinkInterface_2531058761__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkClient_h__Script_LiveLinkInterface_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h__Script_LiveLinkInterface_4157508476'' @ 1413c2460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h__Script_LiveLinkInterface_4157508476__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_ILiveLinkSource_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h__Script_LiveLinkInterface_540926144'' @ 1413c24a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h__Script_LiveLinkInterface_540926144__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkController_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h__Script_LiveLinkInterface_872866577'' @ 1413c24e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h__Script_LiveLinkInterface_872866577__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkCurveRemapSettings_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h__Script_LiveLinkInterface_3764068105'' @ 1413c2530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h__Script_LiveLinkInterface_3764068105__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameInterpolationProcessor_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h__Script_LiveLinkInterface_537874838'' @ 1413c2570

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h__Script_LiveLinkInterface_537874838__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFramePreProcessor_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h__Script_LiveLinkInterface_1949561759'' @ 1413c25b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h__Script_LiveLinkInterface_1949561759__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkFrameTranslator_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h__Script_LiveLinkInterface_1717274640'' @ 1413c25f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h__Script_LiveLinkInterface_1717274640__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkPresetTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h__Script_LiveLinkInterface_572351562'' @ 1413c2630

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h__Script_LiveLinkInterface_572351562__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRefSkeleton_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h__Script_LiveLinkInterface_2974804711'' @ 1413c2670

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h__Script_LiveLinkInterface_2974804711__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkRole_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h__Script_LiveLinkInterface_1415369224'' @ 1413c26c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h__Script_LiveLinkInterface_1415369224__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceFactory_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h__Script_LiveLinkInterface_3891652311'' @ 1413c2700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h__Script_LiveLinkInterface_3891652311__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSourceSettings_h__Script_LiveLinkInterface_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h__Script_LiveLinkInterface_3881918524'' @ 1413c2750

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h__Script_LiveLinkInterface_3881918524__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectRemapper_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h__Script_LiveLinkInterface_2978908123'' @ 1413c2790

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h__Script_LiveLinkInterface_2978908123__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h__Script_LiveLinkInterface_3898000908'' @ 1413c27d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h__Script_LiveLinkInterface_3898000908__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,0xd,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h__Script_LiveLinkInterface_2362647425'' @ 1413c2810

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h__Script_LiveLinkInterface_2362647425__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h__Script_LiveLinkInterface_750925074'' @ 1413c2850

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h__Script_LiveLinkInterface_750925074__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationBlueprintStructs_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h__Script_LiveLinkInterface_2063328355'' @ 1413c2890

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h__Script_LiveLinkInterface_2063328355__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h__Script_LiveLinkInterface_166669090'' @ 1413c28d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h__Script_LiveLinkInterface_166669090__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkAnimationTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h__Script_LiveLinkInterface_1283697913'' @ 1413c2910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h__Script_LiveLinkInterface_1283697913__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h__Script_LiveLinkInterface_1505652238'' @ 1413c2950

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h__Script_LiveLinkInterface_1505652238__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h__Script_LiveLinkInterface_2669271192'' @ 1413c2990

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h__Script_LiveLinkInterface_2669271192__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h__Script_LiveLinkInterface_1506402119'' @ 1413c29d0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h__Script_LiveLinkInterface_1506402119__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkCameraTypes_h__Script_LiveLinkInterface_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h__Script_LiveLinkInterface_2809910599'' @ 1413c2a20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h__Script_LiveLinkInterface_2809910599__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h__Script_LiveLinkInterface_3290673084'' @ 1413c2a60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h__Script_LiveLinkInterface_3290673084__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkInputDeviceTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h__Script_LiveLinkInterface_3123947983'' @ 1413c2aa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h__Script_LiveLinkInterface_3123947983__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h__Script_LiveLinkInterface_3270697677'' @ 1413c2ae0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h__Script_LiveLinkInterface_3270697677__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h__Script_LiveLinkInterface_3890862103'' @ 1413c2b20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h__Script_LiveLinkInterface_3890862103__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorTypes_h__Script_LiveLinkInterface_2505262270'' @ 1413c2b60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorTypes_h__Script_LiveLinkInterface_2505262270__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLocatorTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h__Script_LiveLinkInterface_3156756682'' @ 1413c2ba0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h__Script_LiveLinkInterface_3156756682__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformRole_h__Script_LiveLinkInterface_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h__Script_LiveLinkInterface_2887303551'' @ 1413c2be0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h__Script_LiveLinkInterface_2887303551__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/LiveLinkInterface",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h__Script_LiveLinkInterface_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_LiveLinkInterface'' @ 1413c2c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_LiveLinkInterface__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xab97e45e;
  local_res8[0].DeclarationsHash = 0xf6673098;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_LiveLinkInterface,L"/Script/LiveLinkInterface",
             &Z_Registration_Info_UPackage__Script_LiveLinkInterface,local_res8);
  return;
}

// NewProp_bIsLocationSupported_SetBit @ 14cfa9fa0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsRotationSupported_SetBit @ 14cfa9fb0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bIsScaleSupported_SetBit @ 14cfa9fc0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewStructOps @ 14cfaa000

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTransformStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkTransformStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkTransformStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkTransformStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfaa210

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x100;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTransformFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkTransformFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkTransformFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkTransformFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfaa250

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTransformBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkTransformBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkTransformBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkTransformBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister @ 14cfaa530

UClass * __cdecl Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameTranslator",
               &Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton,
               ULiveLinkFrameTranslator::StaticRegisterNativesULiveLinkFrameTranslator,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkFrameTranslator>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameTranslator.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkSourceFactory @ 14cfaa700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSourceFactory(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSourceFactory_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceFactory.OuterSingleton;
}

// Z_Construct_UPackage__Script_LiveLinkInterface @ 14cfaa980

UPackage * __cdecl Z_Construct_UPackage__Script_LiveLinkInterface(void)

{
  if (Z_Registration_Info_UPackage__Script_LiveLinkInterface.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_LiveLinkInterface.OuterSingleton,&PackageParams
              );
  }
  return Z_Registration_Info_UPackage__Script_LiveLinkInterface.OuterSingleton;
}

// ELiveLinkSubjectState_StaticEnum @ 14cfaa9c0

UEnum * __cdecl ELiveLinkSubjectState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState,(UObject *)pUVar1,
                       L"ELiveLinkSubjectState");
  }
  return Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister @ 14cfaaad0

UClass * __cdecl Z_Construct_UClass_ULiveLinkSourceFactory_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceFactory",
               &Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton,
               ULiveLinkSourceFactory::StaticRegisterNativesULiveLinkSourceFactory,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkSourceFactory>,
               InternalVTableHelperCtorCaller<ULiveLinkSourceFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceFactory.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkDefaultSourceSettings @ 14cfaae00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkDefaultSourceSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkDefaultSourceSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.OuterSingleton;
}

// Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode @ 14cfaae40

UEnum * __cdecl Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkSourceMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings @ 14cfaae80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceBufferManagementSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSourceBufferManagementSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceBufferManagementSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSourceBufferManagementSettings.InnerSingleton;
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

// ELiveLinkSourceMode_StaticEnum @ 14cfaaf80

UEnum * __cdecl ELiveLinkSourceMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode,(UObject *)pUVar1,
                       L"ELiveLinkSourceMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister @ 14cfaafc0

UClass * __cdecl Z_Construct_UClass_ULiveLinkSourceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton,
               ULiveLinkSourceSettings::StaticRegisterNativesULiveLinkSourceSettings,0xb8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkSourceSettings>
               ,InternalVTableHelperCtorCaller<ULiveLinkSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceSettings.InnerSingleton;
}

// NewProp_bValidEngineTimeEnabled_SetBit @ 14cfab120

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
NewProp_bValidEngineTimeEnabled_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bGenerateSubFrame_SetBit @ 14cfab130

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
NewProp_bGenerateSubFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bUseTimecodeSmoothLatest_SetBit @ 14cfab140

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
NewProp_bUseTimecodeSmoothLatest_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
  return;
}

// NewProp_bValidTimecodeFrameEnabled_SetBit @ 14cfab150

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
NewProp_bValidTimecodeFrameEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bKeepAtLeastOneFrame_SetBit @ 14cfab160

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::
NewProp_bKeepAtLeastOneFrame_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// NewStructOps @ 14cfab170

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkSourceBufferManagementSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSourceBufferManagementSettings,&UE::CoreUObject::Private::Construct<FLiveLinkSourceBufferManagementSettings>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceBufferManagementSettings>,&UE::CoreUObject::Private::Destruct<FLiveLinkSourceBufferManagementSettings>,&UE::CoreUObject::Private::Copy<FLiveLinkSourceBufferManagementSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfab430

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSourceDebugInfo,&UE::CoreUObject::Private::Construct<FLiveLinkSourceDebugInfo>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceDebugInfo>,&UE::CoreUObject::Private::Destruct<FLiveLinkSourceDebugInfo>,&UE::CoreUObject::Private::Copy<FLiveLinkSourceDebugInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bTransmitEvaluatedData_SetBit @ 14cfab5b0

void __cdecl
Z_Construct_UClass_ULiveLinkSourceSettings_Statics::NewProp_bTransmitEvaluatedData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14cfab5c0

void * __thiscall
FLiveLinkSourceHandle::_scalar_deleting_destructor_(FLiveLinkSourceHandle *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourcePointer).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14cfab740

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSourceHandle,&UE::CoreUObject::Private::Construct<FLiveLinkSourceHandle>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourceHandle>,&UE::CoreUObject::Private::Destruct<FLiveLinkSourceHandle>,&UE::CoreUObject::Private::Copy<FLiveLinkSourceHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfab950

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTimeSynchronizationSettings,&UE::CoreUObject::Private::Construct<FLiveLinkTimeSynchronizationSettings>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeSynchronizationSettings>,&UE::CoreUObject::Private::Destruct<FLiveLinkTimeSynchronizationSettings>,&UE::CoreUObject::Private::Copy<FLiveLinkTimeSynchronizationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseInterpolation_SetBit @ 14cfaba90

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewProp_bUseInterpolation_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14cfabb20

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkInterpolationSettings,&UE::CoreUObject::Private::Construct<FLiveLinkInterpolationSettings>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkInterpolationSettings>,&UE::CoreUObject::Private::Destruct<FLiveLinkInterpolationSettings>,&UE::CoreUObject::Private::Copy<FLiveLinkInterpolationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfabcb0

void * __thiscall
FSubjectFrameHandle::_scalar_deleting_destructor_(FSubjectFrameHandle *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedFrame).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// NewStructOps @ 14cfabcf0

void * __cdecl Z_Construct_UScriptStruct_FSubjectMetadata_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubjectMetadata,&UE::CoreUObject::Private::Construct<FSubjectMetadata>,&UE::CoreUObject::Private::ConstructForTests<FSubjectMetadata>,&UE::CoreUObject::Private::Destruct<FSubjectMetadata>,&UE::CoreUObject::Private::Copy<FSubjectMetadata>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfac000

void * __cdecl Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FCachedSubjectFrame,&UE::CoreUObject::Private::Construct<FCachedSubjectFrame>,&UE::CoreUObject::Private::ConstructForTests<FCachedSubjectFrame>,&UE::CoreUObject::Private::Destruct<FCachedSubjectFrame>,&UE::CoreUObject::Private::Copy<FCachedSubjectFrame>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfac0f0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTransform,&UE::CoreUObject::Private::Construct<FLiveLinkTransform>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransform>,&UE::CoreUObject::Private::Destruct<FLiveLinkTransform>,&UE::CoreUObject::Private::Copy<FLiveLinkTransform>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfac180

void * __cdecl Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSubjectFrameHandle,&UE::CoreUObject::Private::Construct<FSubjectFrameHandle>,&UE::CoreUObject::Private::ConstructForTests<FSubjectFrameHandle>,&UE::CoreUObject::Private::Destruct<FSubjectFrameHandle>,&UE::CoreUObject::Private::Copy<FSubjectFrameHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLiveLinkBaseFrameData @ 14cfac480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkBaseFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkBaseStaticData @ 14cfac500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkBaseStaticData.InnerSingleton;
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

// NewStructOps @ 14cfac580

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSkeletonStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkSkeletonStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSkeletonStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkSkeletonStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkSkeletonStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfac600

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkAnimationFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkAnimationFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkAnimationFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkAnimationFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkAnimationFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfac6a0

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkFloatAnimationFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkFloatAnimationFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkFloatAnimationFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkFloatAnimationFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkFloatAnimationFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkFloatAnimationFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkDefaultSubjectSettings @ 14cfac8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkDefaultSubjectSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSubjectSettings @ 14cfac8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSubjectSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton;
}

// NewProp_bRebroadcastSubjectsByDefault_SetBit @ 14cfac930

void __cdecl
Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::
NewProp_bRebroadcastSubjectsByDefault_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_bAllowEditingRebroadcastProperty_SetBit @ 14cfac940

void __cdecl
Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_Statics::
NewProp_bAllowEditingRebroadcastProperty_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x29) = 1;
  return;
}

// `scalar_deleting_destructor' @ 14cfac990

void * __thiscall
FLiveLinkBasicBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkBasicBlueprintData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FrameData).PropertyValues.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->FrameData).MetaData.StringMetaData.field_0x48 = 0;
  pvVar2 = *(void **)&(this->FrameData).MetaData.StringMetaData.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FrameData).MetaData);
  pFVar1 = (this->StaticData).PropertyNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData @ 14cfaca10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkBaseBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBaseBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkBaseBlueprintData.InnerSingleton;
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

// NewStructOps @ 14cfaca90

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkBasicBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkBasicBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkBasicBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkBasicBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkBasicBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bRebroadcastSubject_SetBit @ 14cfacad0

void __cdecl
Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x68) = 1;
  return;
}

// NewProp_bAllowModifyingRebroadcast_SetBit @ 14cfacae0

void __cdecl
Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bAllowModifyingRebroadcast_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// Z_Construct_UClass_ULiveLinkCurveRemapSettings @ 14cfacd90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkCurveRemapSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkCurveRemapSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkSourceSettings @ 14cfacdd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSourceSettings(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSourceSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSourceSettings.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings @ 14cface10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCurveConversionSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkCurveConversionSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCurveConversionSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkCurveConversionSettings.InnerSingleton;
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

// NewStructOps @ 14cface90

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkCurveConversionSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkCurveConversionSettings,&UE::CoreUObject::Private::Construct<FLiveLinkCurveConversionSettings>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkCurveConversionSettings>,&UE::CoreUObject::Private::Destruct<FLiveLinkCurveConversionSettings>,&UE::CoreUObject::Private::Copy<FLiveLinkCurveConversionSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfacfd0

void * __thiscall
FLiveLinkTransformBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkTransformBlueprintData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->FrameData)._padding_ = 0;
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FrameData)._padding_);
  pvVar1 = (void *)(this->StaticData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfad330

void * __thiscall
FLiveLinkCameraBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkCameraBlueprintData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->FrameData)._padding_ = 0;
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FrameData)._padding_);
  pvVar1 = (void *)(this->StaticData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

// Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode @ 14cfad3c0

UEnum * __cdecl Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkCameraFrameData @ 14cfad400

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkCameraFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkCameraStaticData @ 14cfad480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkCameraStaticData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTransformFrameData @ 14cfad500

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTransformFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTransformStaticData @ 14cfad580

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTransformStaticData.InnerSingleton;
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

// ELiveLinkCameraProjectionMode_StaticEnum @ 14cfad600

UEnum * __cdecl ELiveLinkCameraProjectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode,
                       (UObject *)pUVar1,L"ELiveLinkCameraProjectionMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton;
}

// NewProp_bIsFieldOfViewSupported_SetBit @ 14cfad640

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFieldOfViewSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsAspectRatioSupported_SetBit @ 14cfad650

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsAspectRatioSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bIsFocalLengthSupported_SetBit @ 14cfad660

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsFocalLengthSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bIsProjectionModeSupported_SetBit @ 14cfad670

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::
NewProp_bIsProjectionModeSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewProp_bIsApertureSupported_SetBit @ 14cfad680

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsApertureSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  return;
}

// NewProp_bIsFocusDistanceSupported_SetBit @ 14cfad690

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::
NewProp_bIsFocusDistanceSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

// NewProp_bIsDepthOfFieldSupported_SetBit @ 14cfad6a0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewProp_bIsDepthOfFieldSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x26) = 1;
  return;
}

// NewProp_bIsDynamicFilmbackSupported_SetBit @ 14cfad6b0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::
NewProp_bIsDynamicFilmbackSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  return;
}

// NewStructOps @ 14cfad6c0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkCameraStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkCameraStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkCameraStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkCameraStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkFrameTranslator @ 14cfad740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkFrameTranslator(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkFrameTranslator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameTranslator.OuterSingleton;
}

// NewStructOps @ 14cfad920

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkCameraFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkCameraFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkCameraFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkCameraFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfad9b0

void * __thiscall
FLiveLinkInterfaceModule::_scalar_deleting_destructor_(FLiveLinkInterfaceModule *this,uint param_1)

{
  *this = (FLiveLinkInterfaceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UScriptStruct_FLiveLinkCurveElement @ 14cfadd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkCurveElement(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCurveElement.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkCurveElement.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCurveElement.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkCurveElement.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkFrameRate @ 14cfadfc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkFrameRate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFrameRate.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkFrameRate.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFrameRate.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkFrameRate.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkMetaData @ 14cfae040

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkMetaData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkMetaData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkMetaData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkMetaData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkMetaData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED @ 14cfae100

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkWorldTime @ 14cfae180

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkWorldTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkWorldTime.InnerSingleton;
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

// NewStructOps @ 14cfae200

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectName,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectName>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectName>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectName>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectName>,&UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkSubjectName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfae380

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x150;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkCameraBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkCameraBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkCameraBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkCameraBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkCameraBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfae400

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectKey,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectKey>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectKey>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectKey>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectKey>,&UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkSubjectKey>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkAnimationRole @ 14cfae550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkAnimationRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRole.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkBasicRole @ 14cfae590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkBasicRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkBasicRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicRole.OuterSingleton;
}

// NewStructOps @ 14cfae610

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkWorldTime,&UE::CoreUObject::Private::Construct<FLiveLinkWorldTime>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkWorldTime>,&UE::CoreUObject::Private::Destruct<FLiveLinkWorldTime>,&UE::CoreUObject::Private::Copy<FLiveLinkWorldTime>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfae770

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTime,&UE::CoreUObject::Private::Construct<FLiveLinkTime>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTime>,&UE::CoreUObject::Private::Destruct<FLiveLinkTime>,&UE::CoreUObject::Private::Copy<FLiveLinkTime>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkController @ 14cfae7b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkController(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkController.OuterSingleton;
}

// NewStructOps @ 14cfae950

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkMetaData,&UE::CoreUObject::Private::Construct<FLiveLinkMetaData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkMetaData>,&UE::CoreUObject::Private::Destruct<FLiveLinkMetaData>,&UE::CoreUObject::Private::Copy<FLiveLinkMetaData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister @ 14cfae990

UClass * __cdecl Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFrameInterpolationProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton,
               ULiveLinkFrameInterpolationProcessor::
               StaticRegisterNativesULiveLinkFrameInterpolationProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkFrameInterpolationProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton;
}

// NewStructOps @ 14cfaeb70

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkBaseFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkBaseFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkBaseFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkBaseFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfaebb0

void * __thiscall
FLiveLinkBaseBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkBaseBlueprintData *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// NewStructOps @ 14cfaed80

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkBaseStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkBaseStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkBaseStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkBaseStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor @ 14cfaedc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkCameraRole @ 14cfaee60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkCameraRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkCameraRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkCameraRole.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformRole @ 14cfaeee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkTransformRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRole.OuterSingleton;
}

// NewStructOps @ 14cfaf0d0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkBaseBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkBaseBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkBaseBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkBaseBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkBaseBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister @ 14cfaf1e0

UClass * __cdecl Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkFramePreProcessor",
               &Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton,
               ULiveLinkFramePreProcessor::StaticRegisterNativesULiveLinkFramePreProcessor,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkFramePreProcessor>,
               InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton;
}

// NewStructOps @ 14cfaf3c0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkFrameRate,&UE::CoreUObject::Private::Construct<FLiveLinkFrameRate>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkFrameRate>,&UE::CoreUObject::Private::Destruct<FLiveLinkFrameRate>,&UE::CoreUObject::Private::Copy<FLiveLinkFrameRate>,&UE::CoreUObject::Private::GetStructTypeHash<FLiveLinkFrameRate>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfaf590

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTimeCode_Base_DEPRECATED,&UE::CoreUObject::Private::Construct<FLiveLinkTimeCode_Base_DEPRECATED>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeCode_Base_DEPRECATED>,&UE::CoreUObject::Private::Destruct<FLiveLinkTimeCode_Base_DEPRECATED>,&UE::CoreUObject::Private::Copy<FLiveLinkTimeCode_Base_DEPRECATED>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfaf650

void * __thiscall
FLiveLinkGamepadInputDeviceBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkGamepadInputDeviceBlueprintData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->FrameData)._padding_ = 0;
  pvVar1 = (void *)(this->FrameData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FrameData)._padding_);
  if (*(void **)&this->StaticData != (void *)0x0) {
    FMemory::Free(*(void **)&this->StaticData);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x138);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkFramePreProcessor @ 14cfaf6d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkFramePreProcessor(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkFramePreProcessor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkInputDeviceRole @ 14cfaf710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkInputDeviceRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkInputDeviceRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.OuterSingleton;
}

// NewStructOps @ 14cfaf7a0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkTimeCode,&UE::CoreUObject::Private::Construct<FLiveLinkTimeCode>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkTimeCode>,&UE::CoreUObject::Private::Destruct<FLiveLinkTimeCode>,&UE::CoreUObject::Private::Copy<FLiveLinkTimeCode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData @ 14cfafa00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData @ 14cfafa80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData.InnerSingleton;
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

// NewStructOps @ 14cfafb50

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkGamepadInputDeviceStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfafcb0

void * __thiscall
FLiveLinkLightBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkLightBlueprintData *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->FrameData).field_0x70;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->FrameData).field_0x58 = 0;
  pvVar1 = *(void **)&(this->FrameData).field_0x50;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->FrameData).field_0x10);
  pvVar1 = (void *)(this->StaticData)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// NewStructOps @ 14cfafd40

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkCurveElement,&UE::CoreUObject::Private::Construct<FLiveLinkCurveElement>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkCurveElement>,&UE::CoreUObject::Private::Destruct<FLiveLinkCurveElement>,&UE::CoreUObject::Private::Copy<FLiveLinkCurveElement>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FLiveLinkLightFrameData @ 14cfafd80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLightFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkLightStaticData @ 14cfafe00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLightStaticData.InnerSingleton;
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

// NewProp_bIsTemperatureSupported_SetBit @ 14cfafe80

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_bIsIntensitySupported_SetBit @ 14cfafe90

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x19) = 1;
  return;
}

// NewProp_bIsLightColorSupported_SetBit @ 14cfafea0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  return;
}

// NewProp_bIsInnerConeAngleSupported_SetBit @ 14cfafeb0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::
NewProp_bIsInnerConeAngleSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// NewProp_bIsOuterConeAngleSupported_SetBit @ 14cfafec0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::
NewProp_bIsOuterConeAngleSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  return;
}

// NewProp_bIsAttenuationRadiusSupported_SetBit @ 14cfafed0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::
NewProp_bIsAttenuationRadiusSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1d) = 1;
  return;
}

// NewProp_bIsSourceLenghtSupported_SetBit @ 14cfafee0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1e) = 1;
  return;
}

// NewProp_bIsSourceRadiusSupported_SetBit @ 14cfafef0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1f) = 1;
  return;
}

// NewProp_bIsSoftSourceRadiusSupported_SetBit @ 14cfaff00

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::
NewProp_bIsSoftSourceRadiusSupported_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14cfaff10

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLightStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkLightStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLightStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkLightStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfaff50

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x120;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkGamepadInputDeviceFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfaff90

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfb0030

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x130;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLightFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkLightFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLightFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkLightFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfb0200

void * __cdecl
Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x138;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkGamepadInputDeviceBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkGamepadInputDeviceBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkGamepadInputDeviceBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkGamepadInputDeviceBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkGamepadInputDeviceBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkVirtualSubject @ 14cfb0240

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkVirtualSubject(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton;
}

// NewProp_bRebroadcastSubject_SetBit @ 14cfb0470

void __cdecl
Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x60) = 1;
  return;
}

// NewStructOps @ 14cfb0480

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLightBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkLightBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLightBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLightBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkLightBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister @ 14cfb0580

UClass * __cdecl Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton,
               ULiveLinkSubjectSettings::StaticRegisterNativesULiveLinkSubjectSettings,0xa0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister @ 14cfb0630

UClass * __cdecl Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",
               &Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton,
               ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject,0x180,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkVirtualSubject>,
               InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkSubjectKey @ 14cfb06e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectKey(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectKey.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectKey.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectKey.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectKey.InnerSingleton;
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

// NewStructOps @ 14cfb0760

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSourcePreset,&UE::CoreUObject::Private::Construct<FLiveLinkSourcePreset>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSourcePreset>,&UE::CoreUObject::Private::Destruct<FLiveLinkSourcePreset>,&UE::CoreUObject::Private::Copy<FLiveLinkSourcePreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkLightRole @ 14cfb07a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkLightRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkLightRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightRole.OuterSingleton;
}

// NewProp_bEnabled_SetBit @ 14cfb07e0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewProp_bEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewStructOps @ 14cfb07f0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectPreset,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectPreset>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectPreset>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectPreset>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectPreset>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfb0d20

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkRefSkeleton,&UE::CoreUObject::Private::Construct<FLiveLinkRefSkeleton>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkRefSkeleton>,&UE::CoreUObject::Private::Destruct<FLiveLinkRefSkeleton>,&UE::CoreUObject::Private::Copy<FLiveLinkRefSkeleton>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 14cfb0da0

void * __thiscall
FLiveLinkLocatorBlueprintData::_scalar_deleting_destructor_
          (FLiveLinkLocatorBlueprintData *this,uint param_1)

{
  ~FLiveLinkLocatorBlueprintData(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// Z_Construct_UClass_ULiveLinkLocatorRole @ 14cfb0de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkLocatorRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkLocatorRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkLocatorRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkLocatorRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorRole.OuterSingleton;
}

// Z_Construct_UClass_ULiveLinkRole @ 14cfb0e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkRole(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkRole_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkRole.OuterSingleton;
}

// Z_Construct_UScriptStruct_FLiveLinkSubjectName @ 14cfb0e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectName.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectName.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectName.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectName.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData @ 14cfb0ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData @ 14cfb0f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorStaticData.InnerSingleton;
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

// NewProp_bUnlabelledData_SetBit @ 14cfb0fe0

void __cdecl
Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData_Statics::NewProp_bUnlabelledData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewStructOps @ 14cfb0ff0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorStaticData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLocatorStaticData,&UE::CoreUObject::Private::Construct<FLiveLinkLocatorStaticData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorStaticData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLocatorStaticData>,&UE::CoreUObject::Private::Copy<FLiveLinkLocatorStaticData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfb1030

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkSubjectRepresentation,&UE::CoreUObject::Private::Construct<FLiveLinkSubjectRepresentation>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectRepresentation>,&UE::CoreUObject::Private::Destruct<FLiveLinkSubjectRepresentation>,&UE::CoreUObject::Private::Copy<FLiveLinkSubjectRepresentation>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cfb12f0

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorFrameData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLocatorFrameData,&UE::CoreUObject::Private::Construct<FLiveLinkLocatorFrameData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorFrameData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLocatorFrameData>,&UE::CoreUObject::Private::Copy<FLiveLinkLocatorFrameData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister @ 14cfb1370

UClass * __cdecl Z_Construct_UClass_ULiveLinkSubjectRemapper_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkSubjectRemapper",
               &Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton,
               ULiveLinkSubjectRemapper::StaticRegisterNativesULiveLinkSubjectRemapper,0x80,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkSubjectRemapper>,
               InternalVTableHelperCtorCaller<ULiveLinkSubjectRemapper>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkRole_NoRegister @ 14cfb1420

UClass * __cdecl Z_Construct_UClass_ULiveLinkRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkRole",
               &Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton,
               ULiveLinkRole::StaticRegisterNativesULiveLinkRole,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkRole>,InternalVTableHelperCtorCaller<ULiveLinkRole>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkRole.InnerSingleton;
}

// NewStructOps @ 14cfb1630

void * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FLiveLinkLocatorBlueprintData,&UE::CoreUObject::Private::Construct<FLiveLinkLocatorBlueprintData>,&UE::CoreUObject::Private::ConstructForTests<FLiveLinkLocatorBlueprintData>,&UE::CoreUObject::Private::Destruct<FLiveLinkLocatorBlueprintData>,&UE::CoreUObject::Private::Copy<FLiveLinkLocatorBlueprintData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULiveLinkSubjectRemapper @ 14cfb16f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULiveLinkSubjectRemapper(void)

{
  if (Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton,
               &Z_Construct_UClass_ULiveLinkSubjectRemapper_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULiveLinkSubjectRemapper.OuterSingleton;
}

// ConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14cfb1af0

void __cdecl
ConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  ForAnyElementType *pFVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    pFVar3 = (ForAnyElementType *)((longlong)param_1 + 8);
    puVar4 = (undefined8 *)&param_2->field_0x8;
    do {
      *(undefined1 *)((longlong)param_1 + (-8 - (longlong)param_2) + (longlong)puVar4) =
           *(undefined1 *)(puVar4 + -1);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      pFVar3->Data = (FScriptContainerElement *)0x0;
      iVar2 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)&pFVar3[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,pFVar3,iVar2,piVar1);
        memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 2);
      }
      puVar4 = puVar4 + 3;
      pFVar3 = pFVar3 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int> @ 14cfb1bc0

void __cdecl
ConstructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
          (void *param_1,TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(ILiveLinkFrameTranslatorWorker **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<bool,UE::Math::TTransform<double>_>,int> @ 14cfb1c00

void __cdecl
DefaultConstructItems<TTuple<bool,UE::Math::TTransform<double>_>,int>(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  
  if (param_2 != 0) {
    pdVar4 = (double *)((longlong)param_1 + 0x20);
    do {
      *(undefined1 *)(pdVar4 + -4) = 0;
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
      pdVar4[-2] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      pdVar4[-1] = (double)fVar1;
      *pdVar4 = (double)fVar2;
      pdVar4[1] = (double)fVar3;
      fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
      fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
      pdVar4[2] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      pdVar4[3] = (double)fVar1;
      pdVar4[4] = (double)fVar2;
      pdVar4[5] = (double)fVar3;
      fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
      pdVar4[6] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      pdVar4[7] = (double)fVar1;
      pdVar4[8] = (double)fVar2;
      pdVar4[9] = (double)fVar3;
      param_2 = param_2 + -1;
      pdVar4 = pdVar4 + 0xe;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14cfb1c70

void __cdecl
DefaultConstructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      *(undefined1 *)(puVar1 + -2) = 0;
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FLiveLinkTransform,int> @ 14cfb1ca0

void __cdecl DefaultConstructItems<FLiveLinkTransform,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    do {
      puVar1[-2] = &___7FLiveLinkTransform__6B_;
      puVar1[-1] = 0;
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0xffffffff;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int> @ 14cfb1ce0

void __cdecl
DestructItems<TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
          (TTuple<bool,TArray<int,TSizedDefaultAllocator<32>_>_> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x8;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FLiveLinkTransform,int> @ 14cfb1d20

void __cdecl DestructItems<FLiveLinkTransform,int>(FLiveLinkTransform *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->CachedFrame).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int> @ 14cfb1d60

void __cdecl
DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
          (TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTArrayClasses<ULiveLinkFrameInterpolationProcessor> @ 14cfb1e20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_> * __cdecl
LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkFrameInterpolationProcessor>
          (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong local_res8;
  FUObjectCppClassStaticFunctions local_res10;
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  lVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar10,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_50);
      while ((lVar13 = (longlong)local_50.Index, -1 < local_50.Index &&
             (local_50.Index < local_50.ObjectArray.ArrayNum))) {
        uVar14 = 0;
        uVar8 = uVar14;
        if (local_50.Index < local_50.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                       *)(*pcVar5)();
            return pTVar11;
          }
        }
        lVar13 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        iVar9 = local_50.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton ==
            (UClass *)0x0) {
          local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkFrameInterpolationProcessor",
                     &Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton
                     ,ULiveLinkFrameInterpolationProcessor::
                      StaticRegisterNativesULiveLinkFrameInterpolationProcessor,0x28,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkFrameInterpolationProcessor>,
                     InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor>,
                     &local_res10,UObject::StaticClass,UObject::StaticClass);
          iVar9 = local_50.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton !=
              (UClass *)0x0) goto LAB_14cfb200c;
        }
        else {
LAB_14cfb200c:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.
                       InnerSingleton)->_padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkFrameInterpolationProcessor.InnerSingleton)->
               _padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar13 = (longlong)local_50.Index;
            uVar8 = uVar14;
            if (local_50.Index < iVar9) {
              uVar8 = (uint)~local_50.Index >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              iVar9 = local_50.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar13 = (longlong)local_50.Index;
              if (local_50.Index < iVar9) {
                uVar14 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              pUVar10 = *(UClass **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
              if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar10);
              }
              pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar10 = ULiveLinkFrameInterpolationProcessor::StaticClass();
              iVar9 = (int)pUVar10->_padding_;
              if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8)
                   != &pUVar10->_padding_)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,&local_res8);
              lVar13 = local_res8;
              if ((local_res8 == 0) ||
                 (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfb219c:
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ClassRole.Get()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkRoleTrait.cpp"
                                   ,0x2b,L"");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                if (local_res8 != 0) goto LAB_14cfb21cb;
LAB_14cfb21fd:
                lVar13 = lVar15;
              }
              else {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if ((!bVar6) || (local_res8 == 0)) goto LAB_14cfb219c;
LAB_14cfb21cb:
                lVar13 = local_res8;
                pUVar10 = ULiveLinkRole::StaticClass();
                if (pUVar10 == (UClass *)0x0) goto LAB_14cfb21fd;
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                lVar13 = local_res8;
                if (!bVar6) goto LAB_14cfb21fd;
              }
              lVar3 = *(longlong *)param_1.Class.field0_0x0;
              lVar12 = lVar15;
              if ((lVar3 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)
                 ) {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  lVar12 = *(longlong *)param_1.Class.field0_0x0;
                }
              }
              if (lVar13 == lVar12) {
                lVar13 = (longlong)local_50.Index;
                uVar8 = 0;
                if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                  uVar8 = (uint)~local_50.Index >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                local_58 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
                pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                    ((FScriptContainerElement *)&local_58 <
                     pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFrameInterpolationProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                iVar9 = __return_storage_ptr__->ArrayNum;
                if (iVar9 == __return_storage_ptr__->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar9 + 1;
                *(UObject **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_50);
      }
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTArrayClasses<ULiveLinkFramePreProcessor> @ 14cfb23b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> * __cdecl
LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkFramePreProcessor>
          (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong local_res8;
  FUObjectCppClassStaticFunctions local_res10;
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  lVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar10,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_50);
      while ((lVar13 = (longlong)local_50.Index, -1 < local_50.Index &&
             (local_50.Index < local_50.ObjectArray.ArrayNum))) {
        uVar14 = 0;
        uVar8 = uVar14;
        if (local_50.Index < local_50.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> *
                      )(*pcVar5)();
            return pTVar11;
          }
        }
        lVar13 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        iVar9 = local_50.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton == (UClass *)0x0) {
          local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkFramePreProcessor",
                     &Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton,
                     ULiveLinkFramePreProcessor::StaticRegisterNativesULiveLinkFramePreProcessor,
                     0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkFramePreProcessor>,
                     InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor>,&local_res10,
                     UObject::StaticClass,UObject::StaticClass);
          iVar9 = local_50.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton != (UClass *)0x0)
          goto LAB_14cfb259c;
        }
        else {
LAB_14cfb259c:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton)->
                       _padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkFramePreProcessor.InnerSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar13 = (longlong)local_50.Index;
            uVar8 = uVar14;
            if (local_50.Index < iVar9) {
              uVar8 = (uint)~local_50.Index >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              iVar9 = local_50.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar13 = (longlong)local_50.Index;
              if (local_50.Index < iVar9) {
                uVar14 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              pUVar10 = *(UClass **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
              if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar10);
              }
              pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar10 = ULiveLinkFramePreProcessor::StaticClass();
              iVar9 = (int)pUVar10->_padding_;
              if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8)
                   != &pUVar10->_padding_)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,&local_res8);
              lVar13 = local_res8;
              if ((local_res8 == 0) ||
                 (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfb272c:
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ClassRole.Get()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkRoleTrait.cpp"
                                   ,0x2b,L"");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                if (local_res8 != 0) goto LAB_14cfb275b;
LAB_14cfb278d:
                lVar13 = lVar15;
              }
              else {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if ((!bVar6) || (local_res8 == 0)) goto LAB_14cfb272c;
LAB_14cfb275b:
                lVar13 = local_res8;
                pUVar10 = ULiveLinkRole::StaticClass();
                if (pUVar10 == (UClass *)0x0) goto LAB_14cfb278d;
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                lVar13 = local_res8;
                if (!bVar6) goto LAB_14cfb278d;
              }
              lVar3 = *(longlong *)param_1.Class.field0_0x0;
              lVar12 = lVar15;
              if ((lVar3 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)
                 ) {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  lVar12 = *(longlong *)param_1.Class.field0_0x0;
                }
              }
              if (lVar13 == lVar12) {
                lVar13 = (longlong)local_50.Index;
                uVar8 = 0;
                if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                  uVar8 = (uint)~local_50.Index >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                local_58 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
                pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                    ((FScriptContainerElement *)&local_58 <
                     pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                iVar9 = __return_storage_ptr__->ArrayNum;
                if (iVar9 == __return_storage_ptr__->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar9 + 1;
                *(UObject **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_50);
      }
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTArrayClasses<ULiveLinkVirtualSubject> @ 14cfb2940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> * __cdecl
LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkVirtualSubject>
          (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__,TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  UClass *pUVar10;
  TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong local_res8;
  FUObjectCppClassStaticFunctions local_res10;
  UObject *local_58;
  TObjectIterator<UClass> local_50;
  
  lVar15 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar13 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar13 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)) {
    iVar9 = (int)pUVar10->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((bVar6) && (*(longlong *)param_1.Class.field0_0x0 != 0)) {
      local_50.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_50.ObjectArray.ArrayNum = 0;
      local_50.ObjectArray.ArrayMax = 0;
      local_50.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar10,&local_50.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_50);
      while ((lVar13 = (longlong)local_50.Index, -1 < local_50.Index &&
             (local_50.Index < local_50.ObjectArray.ArrayNum))) {
        uVar14 = 0;
        uVar8 = uVar14;
        if (local_50.Index < local_50.ObjectArray.ArrayNum) {
          uVar8 = (uint)~local_50.Index >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar5)();
            return pTVar11;
          }
        }
        lVar13 = *(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        iVar9 = local_50.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton == (UClass *)0x0) {
          local_res10.AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",
                     &Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton,
                     ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject,0x180,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkVirtualSubject>,
                     InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>,&local_res10,
                     UObject::StaticClass,UObject::StaticClass);
          iVar9 = local_50.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton != (UClass *)0x0)
          goto LAB_14cfb2b2c;
        }
        else {
LAB_14cfb2b2c:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton)->
                       _padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton)->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (bVar6) {
            lVar13 = (longlong)local_50.Index;
            uVar8 = uVar14;
            if (local_50.Index < iVar9) {
              uVar8 = (uint)~local_50.Index >> 0x1f;
            }
            if (uVar8 == 0) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              iVar9 = local_50.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar13 = (longlong)local_50.Index;
              if (local_50.Index < iVar9) {
                uVar14 = (uint)~local_50.Index >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              pUVar10 = *(UClass **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
              if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar10);
              }
              pUVar2 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar10 = ULiveLinkVirtualSubject::StaticClass();
              iVar9 = (int)pUVar10->_padding_;
              if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar9) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar9 * 8)
                   != &pUVar10->_padding_)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                           *)(*pcVar5)();
                return pTVar11;
              }
              (**(code **)(*(longlong *)(pUVar2 + 1) + 0x30))(pUVar2 + 1,&local_res8);
              lVar13 = local_res8;
              if ((local_res8 == 0) ||
                 (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_14cfb2cbb:
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ClassRole.Get()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkRoleTrait.cpp"
                                   ,0x2b,L"");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                if (local_res8 != 0) goto LAB_14cfb2cea;
LAB_14cfb2d1c:
                lVar13 = lVar15;
              }
              else {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if ((!bVar6) || (local_res8 == 0)) goto LAB_14cfb2cbb;
LAB_14cfb2cea:
                lVar13 = local_res8;
                pUVar10 = ULiveLinkRole::StaticClass();
                if (pUVar10 == (UClass *)0x0) goto LAB_14cfb2d1c;
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar13 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                lVar13 = local_res8;
                if (!bVar6) goto LAB_14cfb2d1c;
              }
              lVar3 = *(longlong *)param_1.Class.field0_0x0;
              lVar12 = lVar15;
              if ((lVar3 != 0) && (pUVar10 = ULiveLinkRole::StaticClass(), pUVar10 != (UClass *)0x0)
                 ) {
                iVar9 = (int)pUVar10->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar9) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 8)
                    != &pUVar10->_padding_)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (bVar6) {
                  lVar12 = *(longlong *)param_1.Class.field0_0x0;
                }
              }
              if (lVar13 == lVar12) {
                lVar13 = (longlong)local_50.Index;
                uVar8 = 0;
                if (local_50.Index < local_50.ObjectArray.ArrayNum) {
                  uVar8 = (uint)~local_50.Index >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                local_58 = *(UObject **)(local_50.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
                pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
                if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
                    ((FScriptContainerElement *)&local_58 <
                     pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  pTVar11 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
                             *)(*pcVar5)();
                  return pTVar11;
                }
                iVar9 = __return_storage_ptr__->ArrayNum;
                if (iVar9 == __return_storage_ptr__->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                                     &__return_storage_ptr__->ArrayMax);
                }
                __return_storage_ptr__->ArrayNum = iVar9 + 1;
                *(UObject **)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58
                ;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_58 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_58);
                }
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_50);
      }
      if (local_50.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTArrayClasses<ULiveLinkVirtualSubject> @ 14cfb2ed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> * __cdecl
LiveLinkRoleTemplate::GetTArrayClasses<ULiveLinkVirtualSubject>
          (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_>
           *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  uint uVar11;
  FUObjectCppClassStaticFunctions local_res8;
  UObject *local_48;
  TObjectIterator<UClass> local_40;
  
  local_40.Index = 0xffffffff;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_40);
  while( true ) {
    lVar10 = (longlong)local_40.Index;
    if (local_40.Index < 0) break;
    if (local_40.ObjectArray.ArrayNum <= local_40.Index) break;
    uVar11 = 0;
    uVar6 = uVar11;
    if (local_40.Index < local_40.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_40.Index >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar9;
      }
    }
    lVar10 = *(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
    iVar7 = local_40.ObjectArray.ArrayNum;
    if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton == (UClass *)0x0) {
      local_res8.AddReferencedObjects = UObject::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",
                 &Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton,
                 ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject,0x180,8,
                 CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                 InternalConstructor<ULiveLinkVirtualSubject>,
                 InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>,&local_res8,
                 UObject::StaticClass,UObject::StaticClass);
      iVar7 = local_40.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton != (UClass *)0x0)
      goto LAB_14cfb305e;
    }
    else {
LAB_14cfb305e:
      iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton)->_padding_;
      if ((*(int *)(lVar10 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.InnerSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar10 = (longlong)local_40.Index;
        uVar6 = uVar11;
        if (local_40.Index < iVar7) {
          uVar6 = (uint)~local_40.Index >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          iVar7 = local_40.ObjectArray.ArrayNum;
        }
        if ((*(uint *)(*(longlong *)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                      0xd4) & 0x2000001) == 0) {
          lVar10 = (longlong)local_40.Index;
          if (local_40.Index < iVar7) {
            uVar11 = (uint)~local_40.Index >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar3)();
              return pTVar9;
            }
          }
          local_48 = *(UObject **)(local_40.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_48);
          }
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
             ((FScriptContainerElement *)&local_48 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<TSubclassOf<ULiveLinkVirtualSubject>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar3)();
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_48;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_48);
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_40);
  }
  if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTClasses<ULiveLinkController> @ 14cfb3250

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TSubclassOf<ULiveLinkController> __cdecl
LiveLinkRoleTemplate::GetTClasses<ULiveLinkController>(TSubclassOf<ULiveLinkRole> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  UClass *pUVar8;
  TSubclassOf<ULiveLinkController> TVar9;
  longlong lVar10;
  int iVar11;
  longlong *in_RDX;
  longlong lVar12;
  longlong lVar13;
  longlong local_res10;
  FUObjectCppClassStaticFunctions local_res18 [2];
  TObjectIterator<UClass> local_58;
  
  lVar12 = *in_RDX;
  lVar13 = 0;
  if ((lVar12 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0)) {
    iVar11 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar8->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (*in_RDX != 0)) {
      local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ObjectArray.ArrayNum = 0;
      local_58.ObjectArray.ArrayMax = 0;
      local_58.Index = 0xffffffff;
      EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      GetObjectsOfClass(pUVar8,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                        EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UClass>::Advance(&local_58);
      while ((lVar12 = (longlong)local_58.Index, -1 < local_58.Index &&
             (local_58.Index < local_58.ObjectArray.ArrayNum))) {
        uVar7 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_58.Index >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
            return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
          }
        }
        lVar12 = *(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
        iVar11 = local_58.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton == (UClass *)0x0) {
          local_res18[0].AddReferencedObjects = UObject::AddReferencedObjects;
          GetPrivateStaticClassBody
                    (L"/Script/LiveLinkInterface",L"LiveLinkController",
                     &Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton,
                     ULiveLinkController::StaticRegisterNativesULiveLinkController,0x28,8,
                     CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
                     InternalConstructor<ULiveLinkController>,
                     InternalVTableHelperCtorCaller<ULiveLinkController>,local_res18,
                     UObject::StaticClass,UObject::StaticClass);
          iVar11 = local_58.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton != (UClass *)0x0)
          goto LAB_14cfb3422;
        }
        else {
LAB_14cfb3422:
          iVar1 = (int)(Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton)->_padding_;
          if ((*(int *)(lVar12 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar1 * 8) !=
              &(Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton)->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar12 = (longlong)local_58.Index;
            uVar7 = 0;
            if (local_58.Index < iVar11) {
              uVar7 = (uint)~local_58.Index >> 0x1f;
            }
            if (uVar7 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar4 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
                return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
              }
              iVar11 = local_58.ObjectArray.ArrayNum;
            }
            if ((*(uint *)(*(longlong *)(local_58.ObjectArray.AllocatorInstance.Data + lVar12 * 8) +
                          0xd4) & 0x2000001) == 0) {
              lVar12 = (longlong)local_58.Index;
              uVar7 = 0;
              if (local_58.Index < iVar11) {
                uVar7 = (uint)~local_58.Index >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
                return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
              }
              pUVar8 = *(UClass **)(local_58.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
              if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                UClass::InternalCreateDefaultObjectWrapper(pUVar8);
              }
              pUVar2 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
              pUVar8 = ULiveLinkController::StaticClass();
              iVar11 = (int)pUVar8->_padding_;
              if (((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar11) ||
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar11 * 8)
                   != &pUVar8->_padding_)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Ret->IsA(T::StaticClass())",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                     ,0x1181,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
                return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
              }
              (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2,&local_res10);
              lVar12 = local_res10;
              if ((local_res10 == 0) ||
                 (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 == (UClass *)0x0)) {
LAB_14cfb35b0:
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ClassRole.Get()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LiveLinkInterface\\Private\\LiveLinkRoleTrait.cpp"
                                   ,0x40,L"");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
                  return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
                }
                if (local_res10 != 0) goto LAB_14cfb35df;
LAB_14cfb3611:
                lVar12 = lVar13;
              }
              else {
                iVar11 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar12 + 0x38) < iVar11) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 8) !=
                    &pUVar8->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if ((!bVar5) || (local_res10 == 0)) goto LAB_14cfb35b0;
LAB_14cfb35df:
                lVar12 = local_res10;
                pUVar8 = ULiveLinkRole::StaticClass();
                if (pUVar8 == (UClass *)0x0) goto LAB_14cfb3611;
                iVar11 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar12 + 0x38) < iVar11) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar11 * 8) !=
                    &pUVar8->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                lVar12 = local_res10;
                if (!bVar5) goto LAB_14cfb3611;
              }
              lVar3 = *in_RDX;
              lVar10 = lVar13;
              if ((lVar3 != 0) && (pUVar8 = ULiveLinkRole::StaticClass(), pUVar8 != (UClass *)0x0))
              {
                iVar11 = (int)pUVar8->_padding_;
                if ((*(int *)(lVar3 + 0x38) < iVar11) ||
                   ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar11 * 8)
                    != &pUVar8->_padding_)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  lVar10 = *in_RDX;
                }
              }
              if (lVar12 == lVar10) {
                lVar12 = (longlong)local_58.Index;
                uVar7 = 0;
                if (local_58.Index < local_58.ObjectArray.ArrayNum) {
                  uVar7 = (uint)~local_58.Index >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  TVar9.Class.field0_0x0 = (TObjectPtr<UClass>)(*pcVar4)();
                  return (TSubclassOf<ULiveLinkController>)TVar9.Class.field0_0x0;
                }
                pUVar2 = *(UObject **)(local_58.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
                *(UObject **)param_1.Class.field0_0x0 = pUVar2;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar2 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar2);
                }
                if (local_58.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
                }
                FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
                return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
              }
            }
          }
        }
        TObjectIterator<UClass>::Advance(&local_58);
      }
      if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  *(undefined8 *)param_1.Class.field0_0x0 = 0;
  return (TObjectPtr<UClass>)param_1.Class.field0_0x0;
}

// InternalConstructor<ULiveLinkAnimationRole> @ 14cfb3720

void __cdecl InternalConstructor<ULiveLinkAnimationRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkAnimationRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkBasicRole> @ 14cfb3750

void __cdecl InternalConstructor<ULiveLinkBasicRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkBasicRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkCameraRole> @ 14cfb3780

void __cdecl InternalConstructor<ULiveLinkCameraRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkCameraRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkController> @ 14cfb37b0

void __cdecl InternalConstructor<ULiveLinkController>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkController__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkCurveRemapSettings> @ 14cfb37e0

void __cdecl InternalConstructor<ULiveLinkCurveRemapSettings>(FObjectInitializer *param_1)

{
  ULiveLinkSourceSettings *this;
  
  this = (ULiveLinkSourceSettings *)param_1->Obj;
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this);
    this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Mode = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].BufferSettings = 0xffffffff;
    this[1].BufferSettings.ValidEngineTime = 0.0;
    this[1].BufferSettings.EngineTimeClockOffset = 0.0;
    *(undefined4 *)&this[1].BufferSettings.SmoothEngineTimeOffset = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkDefaultSourceSettings> @ 14cfb3850

void __cdecl InternalConstructor<ULiveLinkDefaultSourceSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)(this + 1) = 10;
    *(undefined ***)this = &___7ULiveLinkDefaultSourceSettings__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkDefaultSubjectSettings> @ 14cfb3890

void __cdecl InternalConstructor<ULiveLinkDefaultSubjectSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined2 *)(this + 1) = 0x100;
    *(undefined ***)this = &___7ULiveLinkDefaultSubjectSettings__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkFrameInterpolationProcessor> @ 14cfb38d0

void __cdecl InternalConstructor<ULiveLinkFrameInterpolationProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkFrameInterpolationProcessor__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkFramePreProcessor> @ 14cfb3900

void __cdecl InternalConstructor<ULiveLinkFramePreProcessor>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkFramePreProcessor__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkFrameTranslator> @ 14cfb3930

void __cdecl InternalConstructor<ULiveLinkFrameTranslator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkFrameTranslator__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkInputDeviceRole> @ 14cfb3960

void __cdecl InternalConstructor<ULiveLinkInputDeviceRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkInputDeviceRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkLightRole> @ 14cfb3990

void __cdecl InternalConstructor<ULiveLinkLightRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkLightRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkLocatorRole> @ 14cfb39c0

void __cdecl InternalConstructor<ULiveLinkLocatorRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkLocatorRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkRole> @ 14cfb39f0

void __cdecl InternalConstructor<ULiveLinkRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkSourceFactory> @ 14cfb3a20

void __cdecl InternalConstructor<ULiveLinkSourceFactory>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkSourceFactory__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkSourceSettings> @ 14cfb3a50

void __cdecl InternalConstructor<ULiveLinkSourceSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined1 *)(this + 1) = 1;
  *(undefined ***)this = &___7ULiveLinkSourceSettings__6B_;
  *(undefined8 *)&this[1].field_0x18 = 0;
  *(undefined8 *)&this[1].field_0x20 = 0;
  *(undefined1 *)(this + 2) = 0;
  this[2].field_0xc = 0;
  this[2].field_0x18 = 0;
  *(undefined8 *)(this + 3) = 0;
  *(undefined4 *)&this[3].field_0x8 = 0;
  this[3].field_0x18 = 0;
  *(undefined8 *)&this[3].field_0x20 = 0;
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)&this[4].field_0x8 = 0;
  *(undefined8 *)&this[4].field_0x10 = 0;
  this[1].field_0x8 = 0;
  *(undefined8 *)&this[1].field_0xc = 0x3f800000;
  *(undefined4 *)&this[2].field_0x4 = 0x18;
  *(undefined4 *)&this[2].field_0x8 = 1;
  *(undefined4 *)&this[2].field_0x10 = 0x18;
  *(undefined4 *)&this[2].field_0x14 = 1;
  *(undefined8 *)&this[2].field_0x1c = 0x1e;
  *(undefined4 *)&this[3].field_0xc = 10;
  this[3].field_0x10 = 1;
  if ((*(uint *)&this->field_0x8 & 0x30) == 0) {
    this_00 = ULiveLinkDefaultSourceSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    *(undefined4 *)&this[3].field_0xc =
         *(undefined4 *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1);
  }
  return;
}

// InternalConstructor<ULiveLinkSubjectRemapper> @ 14cfb3a70

void __cdecl InternalConstructor<ULiveLinkSubjectRemapper>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkSubjectRemapper__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined1 *)(this + 3) = 0;
  }
  return;
}

// InternalConstructor<ULiveLinkSubjectSettings> @ 14cfb3ad0

void __cdecl InternalConstructor<ULiveLinkSubjectSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  UClass *this_00;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    this[3].field_0x20 = 1;
    *(undefined ***)this = &___7ULiveLinkSubjectSettings__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x1c = 0;
    *(undefined8 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x4 = 0;
    *(undefined8 *)&this[3].field_0xc = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x10 = 60000;
    *(undefined4 *)&this[2].field_0x14 = 1;
    if ((*(uint *)&this->field_0x8 & 0x30) == 0) {
      this_00 = ULiveLinkDefaultSubjectSettings::StaticClass();
      if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(this_00);
      }
      this[2].field_0x18 = *(undefined1 *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1);
    }
  }
  return;
}

// InternalConstructor<ULiveLinkTransformRole> @ 14cfb3b90

void __cdecl InternalConstructor<ULiveLinkTransformRole>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7ULiveLinkTransformRole__6B_;
  }
  return;
}

// InternalConstructor<ULiveLinkVirtualSubject> @ 14cfb3bc0

void __cdecl InternalConstructor<ULiveLinkVirtualSubject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &ULiveLinkVirtualSubject::_vftable__for__UObject__;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)(this + 1) = &ULiveLinkVirtualSubject::_vftable__for__ILiveLinkSubject__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    this[2].field_0x10 = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&this[2].field_0x20);
    FStructOnScope::FStructOnScope((FStructOnScope *)&this[3].field_0x20);
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    this[5].field_0x10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[5].field_0x18,4000);
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&this[7].field_0x10);
    FStructOnScope::FStructOnScope((FStructOnScope *)&this[8].field_0x10);
    this[9].field_0x10 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<ULiveLinkAnimationRole> @ 14cfb3cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkAnimationRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkAnimationRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkAnimationRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkBasicRole> @ 14cfb3d60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkBasicRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkBasicRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkBasicRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkCameraRole> @ 14cfb3e10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkCameraRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkCameraRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkCameraRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkController> @ 14cfb3ec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkController::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkController__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkCurveRemapSettings> @ 14cfb3f70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkCurveRemapSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSourceSettings *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkCurveRemapSettings::GetPrivateStaticClass();
  this = (ULiveLinkSourceSettings *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ULiveLinkSourceSettings *)0x0) {
    ULiveLinkSourceSettings::ULiveLinkSourceSettings(this,param_1);
    this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].Mode = 0;
    *(undefined4 *)&this[1].field_0x2c = 0x80;
    *(undefined4 *)&this[1].BufferSettings = 0xffffffff;
    this[1].BufferSettings.ValidEngineTime = 0.0;
    this[1].BufferSettings.EngineTimeClockOffset = 0.0;
    *(undefined4 *)&this[1].BufferSettings.SmoothEngineTimeOffset = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkDefaultSourceSettings> @ 14cfb4060

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkDefaultSourceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkDefaultSourceSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 10;
    *(undefined ***)pUVar1 = &___7ULiveLinkDefaultSourceSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkDefaultSubjectSettings> @ 14cfb4120

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkDefaultSubjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkDefaultSubjectSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined2 *)(pUVar1 + 1) = 0x100;
    *(undefined ***)pUVar1 = &___7ULiveLinkDefaultSubjectSettings__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor> @ 14cfb41d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULiveLinkFrameInterpolationProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkFrameInterpolationProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkFrameInterpolationProcessor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor> @ 14cfb4280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkFramePreProcessor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkFramePreProcessor::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkFramePreProcessor__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator> @ 14cfb4330

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkFrameTranslator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkFrameTranslator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkFrameTranslator__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkInputDeviceRole> @ 14cfb43e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkInputDeviceRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkInputDeviceRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkInputDeviceRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkLightRole> @ 14cfb4490

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkLightRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkLightRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkLightRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkLocatorRole> @ 14cfb4540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkLocatorRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkLocatorRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkLocatorRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkRole> @ 14cfb45f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSourceFactory> @ 14cfb46a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSourceFactory>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSourceFactory::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkSourceFactory__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSourceSettings> @ 14cfb4750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSourceSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ULiveLinkSourceSettings *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSourceSettings::GetPrivateStaticClass();
  pUVar3 = (ULiveLinkSourceSettings *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (ULiveLinkSourceSettings *)0x0) {
    pUVar3 = ULiveLinkSourceSettings::ULiveLinkSourceSettings(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSubjectRemapper> @ 14cfb47f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSubjectRemapper>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSubjectRemapper::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkSubjectRemapper__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined1 *)(pUVar1 + 3) = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkSubjectSettings> @ 14cfb48d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkSubjectSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkSubjectSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    pUVar1[3].field_0x20 = 1;
    *(undefined ***)pUVar1 = &___7ULiveLinkSubjectSettings__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined4 *)&pUVar1[2].field_0x10 = 60000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 1;
    *(undefined8 *)&pUVar1[2].field_0x1c = 0;
    *(undefined8 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x4 = 0;
    *(undefined8 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkTransformRole> @ 14cfb49d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkTransformRole>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkTransformRole::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7ULiveLinkTransformRole__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject> @ 14cfb4a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULiveLinkVirtualSubject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar3 = (UObject *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = ULiveLinkVirtualSubject::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined ***)pUVar1 = &ULiveLinkVirtualSubject::_vftable__for__UObject__;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined ***)(pUVar1 + 1) = &ULiveLinkVirtualSubject::_vftable__for__ILiveLinkSubject__;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    pUVar1[2].field_0x10 = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&pUVar1[2].field_0x20);
    FStructOnScope::FStructOnScope((FStructOnScope *)&pUVar1[3].field_0x20);
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    pUVar1[5].field_0x10 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[5].field_0x18,4000);
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    FStructOnScope::FStructOnScope((FStructOnScope *)&pUVar1[7].field_0x10);
    FStructOnScope::FStructOnScope((FStructOnScope *)&pUVar1[8].field_0x10);
    pUVar1[9].field_0x10 = 0;
    pUVar3 = pUVar1;
  }
  return pUVar3;
}

// StaticEnum<enum_ELiveLinkCameraProjectionMode> @ 14cfb4c60

UEnum * __cdecl StaticEnum<enum_ELiveLinkCameraProjectionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkCameraProjectionMode,
                       (UObject *)pUVar1,L"ELiveLinkCameraProjectionMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkCameraProjectionMode.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkSourceMode> @ 14cfb4ca0

UEnum * __cdecl StaticEnum<enum_ELiveLinkSourceMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode,(UObject *)pUVar1,
                       L"ELiveLinkSourceMode");
  }
  return Z_Registration_Info_UEnum_ELiveLinkSourceMode.OuterSingleton;
}

// StaticEnum<enum_ELiveLinkSubjectState> @ 14cfb4ce0

UEnum * __cdecl StaticEnum<enum_ELiveLinkSubjectState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkInterface();
    Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState,(UObject *)pUVar1,
                       L"ELiveLinkSubjectState");
  }
  return Z_Registration_Info_UEnum_ELiveLinkSubjectState.OuterSingleton;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cfb7108

/* [thunk]:public: virtual void * __ptr64 __cdecl ULiveLinkVirtualSubject::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULiveLinkVirtualSubject::_vector_deleting_destructor__adjustor_40__
          (ULiveLinkVirtualSubject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULiveLinkVirtualSubject *)
                      &this[-1].CurrentFrameSnapshot.FrameData.WrappedStruct.ScriptStruct,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cfb7120

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCachedSubjectFrame,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FCachedSubjectFrame,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb7160

void * __thiscall
FCachedSubjectFrame::_scalar_deleting_destructor_(FCachedSubjectFrame *this,uint param_1)

{
  ~FCachedSubjectFrame(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb71a0

void * __thiscall
FLiveLinkTransform::_scalar_deleting_destructor_(FLiveLinkTransform *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedFrame).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb71e0

void * __thiscall
ILiveLinkSubject::_scalar_deleting_destructor_(ILiveLinkSubject *this,uint param_1)

{
  *this = (ILiveLinkSubject)&___7ILiveLinkSubject__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb7220

void * __thiscall
ULiveLinkAnimationRole::_scalar_deleting_destructor_(ULiveLinkAnimationRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7280

void * __thiscall
ULiveLinkBasicRole::_scalar_deleting_destructor_(ULiveLinkBasicRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb72e0

void * __thiscall
ULiveLinkCameraRole::_scalar_deleting_destructor_(ULiveLinkCameraRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7340

void * __thiscall
ULiveLinkController::_scalar_deleting_destructor_(ULiveLinkController *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkController__6B_;
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

// `scalar_deleting_destructor' @ 14cfb73a0

void * __thiscall
ULiveLinkCurveRemapSettings::_scalar_deleting_destructor_
          (ULiveLinkCurveRemapSettings *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkCurveRemapSettings__6B_;
  *(undefined4 *)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveConversionSettings).CurveConversionAssetMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveConversionSettings);
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb7460

void * __thiscall
ULiveLinkDefaultSourceSettings::_scalar_deleting_destructor_
          (ULiveLinkDefaultSourceSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSourceSettings__6B_;
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

// `scalar_deleting_destructor' @ 14cfb74c0

void * __thiscall
ULiveLinkDefaultSubjectSettings::_scalar_deleting_destructor_
          (ULiveLinkDefaultSubjectSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7ULiveLinkDefaultSubjectSettings__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7520

void * __thiscall
ULiveLinkFrameInterpolationProcessor::_scalar_deleting_destructor_
          (ULiveLinkFrameInterpolationProcessor *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkFrameInterpolationProcessor__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7580

void * __thiscall
ULiveLinkFramePreProcessor::_scalar_deleting_destructor_
          (ULiveLinkFramePreProcessor *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkFramePreProcessor__6B_;
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

// `scalar_deleting_destructor' @ 14cfb75e0

void * __thiscall
ULiveLinkFrameTranslator::_scalar_deleting_destructor_(ULiveLinkFrameTranslator *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkFrameTranslator__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7640

void * __thiscall
ULiveLinkInputDeviceRole::_scalar_deleting_destructor_(ULiveLinkInputDeviceRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb76a0

void * __thiscall
ULiveLinkLightRole::_scalar_deleting_destructor_(ULiveLinkLightRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7700

void * __thiscall
ULiveLinkLocatorRole::_scalar_deleting_destructor_(ULiveLinkLocatorRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7760

void * __thiscall ULiveLinkRole::_scalar_deleting_destructor_(ULiveLinkRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb77c0

void * __thiscall
ULiveLinkSourceFactory::_scalar_deleting_destructor_(ULiveLinkSourceFactory *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkSourceFactory__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7820

void * __thiscall
ULiveLinkSourceSettings::_scalar_deleting_destructor_(ULiveLinkSourceSettings *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSourceSettings__6B_;
  pFVar1 = (this->ConnectionString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb78a0

void * __thiscall
ULiveLinkSubjectRemapper::_scalar_deleting_destructor_(ULiveLinkSubjectRemapper *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULiveLinkSubjectRemapper__6B_;
  *(undefined4 *)&(this->BoneNameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BoneNameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneNameMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb7930

void * __thiscall
ULiveLinkSubjectSettings::_scalar_deleting_destructor_(ULiveLinkSubjectSettings *this,uint param_1)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULiveLinkSubjectSettings__6B_;
  pUVar1 = (this->RemapperBeingReset).Object;
  if (pUVar1 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar1);
    (this->RemapperBeingReset).Object = (UObject *)0x0;
  }
  pFVar2 = (this->Translators).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PreProcessors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cfb79d0

void * __thiscall
ULiveLinkTransformRole::_scalar_deleting_destructor_(ULiveLinkTransformRole *this,uint param_1)

{
  *(undefined ***)this = &___7ULiveLinkRole__6B_;
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

// `scalar_deleting_destructor' @ 14cfb7a30

void * __thiscall
ULiveLinkVirtualSubject::_scalar_deleting_destructor_(ULiveLinkVirtualSubject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__ILiveLinkSubject__;
  FStructOnScope::~FStructOnScope(&(this->CurrentFrameSnapshot).FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->CurrentFrameSnapshot);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentSubjectRemapper).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<ILiveLinkFrameTranslatorWorker,1>,int>
            ((TSharedPtr<ILiveLinkFrameTranslatorWorker,1> *)
             (this->CurrentFrameTranslators).AllocatorInstance.Data,
             (this->CurrentFrameTranslators).ArrayNum);
  pFVar1 = (this->CurrentFrameTranslators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SnapshotAccessCriticalSection);
  FStructOnScope::~FStructOnScope(&(this->FrameSnapshot).FrameData.WrappedStruct);
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->FrameSnapshot);
  pFVar1 = (this->FrameTranslators).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ILiveLinkSubject__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeILiveLinkClient @ 14cfb8110

void __cdecl EmptyLinkFunctionForGeneratedCodeILiveLinkClient(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeILiveLinkSource @ 14cfb8120

void __cdecl EmptyLinkFunctionForGeneratedCodeILiveLinkSource(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationBlueprintStructs @ 14cfb8130

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationBlueprintStructs(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRole @ 14cfb8140

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationTypes @ 14cfb8150

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBasicRole @ 14cfb8160

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBasicRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkBasicTypes @ 14cfb8170

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkBasicTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkCameraRole @ 14cfb8180

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkCameraRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkCameraTypes @ 14cfb8190

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkCameraTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkController @ 14cfb81a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkCurveRemapSettings @ 14cfb81b0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkCurveRemapSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkFrameInterpolationProcessor @ 14cfb81c0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkFrameInterpolationProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkFramePreProcessor @ 14cfb81d0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkFramePreProcessor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkFrameTranslator @ 14cfb81e0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkFrameTranslator(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceRole @ 14cfb81f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceTypes @ 14cfb8200

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkInputDeviceTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkInterface_init @ 14cfb8210

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkInterface_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkLightRole @ 14cfb8220

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkLightRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkLightTypes @ 14cfb8230

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkLightTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkLocatorRole @ 14cfb8240

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkLocatorRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkLocatorTypes @ 14cfb8250

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkLocatorTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkPresetTypes @ 14cfb8260

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkPresetTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton @ 14cfb8270

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkRefSkeleton(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkRole @ 14cfb8280

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSourceFactory @ 14cfb8290

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSourceFactory(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings @ 14cfb82a0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSourceSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectRemapper @ 14cfb82b0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectRemapper(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectSettings @ 14cfb82c0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectSettings(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRole @ 14cfb82d0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTransformRole(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTransformTypes @ 14cfb82e0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTransformTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkTypes @ 14cfb82f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubject @ 14cfb8300

void __cdecl EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubject(void)

{
  return;
}

// Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister @ 14cfbfd40

UClass * __cdecl Z_Construct_UClass_ULiveLinkAnimationRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkAnimationRole",
               &Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton,
               ULiveLinkAnimationRole::StaticRegisterNativesULiveLinkAnimationRole,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkAnimationRole>,
               InternalVTableHelperCtorCaller<ULiveLinkAnimationRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkAnimationRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkBasicRole_NoRegister @ 14cfbfe00

UClass * __cdecl Z_Construct_UClass_ULiveLinkBasicRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkBasicRole",
               &Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton,
               ULiveLinkBasicRole::StaticRegisterNativesULiveLinkBasicRole,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkBasicRole>,
               InternalVTableHelperCtorCaller<ULiveLinkBasicRole>,local_res8,
               ULiveLinkRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBasicRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkCameraRole_NoRegister @ 14cfbfec0

UClass * __cdecl Z_Construct_UClass_ULiveLinkCameraRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCameraRole",
               &Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton,
               ULiveLinkCameraRole::StaticRegisterNativesULiveLinkCameraRole,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkCameraRole>,
               InternalVTableHelperCtorCaller<ULiveLinkCameraRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCameraRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkController_NoRegister @ 14cfbff80

UClass * __cdecl Z_Construct_UClass_ULiveLinkController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkController",
               &Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton,
               ULiveLinkController::StaticRegisterNativesULiveLinkController,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkController>,
               InternalVTableHelperCtorCaller<ULiveLinkController>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkController.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister @ 14cfc0030

UClass * __cdecl Z_Construct_UClass_ULiveLinkCurveRemapSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkCurveRemapSettings",
               &Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton,
               ULiveLinkCurveRemapSettings::StaticRegisterNativesULiveLinkCurveRemapSettings,0x108,8
               ,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkCurveRemapSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkCurveRemapSettings>,local_res8,
               ULiveLinkSourceSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkCurveRemapSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister @ 14cfc00f0

UClass * __cdecl Z_Construct_UClass_ULiveLinkDefaultSourceSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSourceSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton,
               ULiveLinkDefaultSourceSettings::StaticRegisterNativesULiveLinkDefaultSourceSettings,
               0x30,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSourceSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSourceSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSourceSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister @ 14cfc01a0

UClass * __cdecl Z_Construct_UClass_ULiveLinkDefaultSubjectSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkDefaultSubjectSettings",
               &Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton,
               ULiveLinkDefaultSubjectSettings::StaticRegisterNativesULiveLinkDefaultSubjectSettings
               ,0x30,8,CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkDefaultSubjectSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkDefaultSubjectSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkDefaultSubjectSettings.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister @ 14cfc0250

UClass * __cdecl Z_Construct_UClass_ULiveLinkInputDeviceRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkInputDeviceRole",
               &Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton,
               ULiveLinkInputDeviceRole::StaticRegisterNativesULiveLinkInputDeviceRole,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkInputDeviceRole>,
               InternalVTableHelperCtorCaller<ULiveLinkInputDeviceRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkInputDeviceRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkLightRole_NoRegister @ 14cfc0310

UClass * __cdecl Z_Construct_UClass_ULiveLinkLightRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLightRole",
               &Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton,
               ULiveLinkLightRole::StaticRegisterNativesULiveLinkLightRole,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkLightRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLightRole>,local_res8,
               ULiveLinkTransformRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLightRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister @ 14cfc03d0

UClass * __cdecl Z_Construct_UClass_ULiveLinkLocatorRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkLocatorRole",
               &Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton,
               ULiveLinkLocatorRole::StaticRegisterNativesULiveLinkLocatorRole,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkLocatorRole>,
               InternalVTableHelperCtorCaller<ULiveLinkLocatorRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkLocatorRole.InnerSingleton;
}

// Z_Construct_UClass_ULiveLinkTransformRole_NoRegister @ 14cfc0490

UClass * __cdecl Z_Construct_UClass_ULiveLinkTransformRole_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLinkInterface",L"LiveLinkTransformRole",
               &Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton,
               ULiveLinkTransformRole::StaticRegisterNativesULiveLinkTransformRole,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkTransformRole>,
               InternalVTableHelperCtorCaller<ULiveLinkTransformRole>,local_res8,
               ULiveLinkBasicRole::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkTransformRole.InnerSingleton;
}

// Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState @ 14cfc0550

UEnum * __cdecl Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState(void)

{
  if (Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton,
               &Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSubjectState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELiveLinkSubjectState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FCachedSubjectFrame @ 14cfc0590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FCachedSubjectFrame(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.InnerSingleton,
               &Z_Construct_UScriptStruct_FCachedSubjectFrame_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FCachedSubjectFrame.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData @ 14cfc0610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkAnimationFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData @ 14cfc0690

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkBasicBlueprintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData @ 14cfc0710

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkCameraBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkCameraBlueprintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkFloatAnimationFrameData @ 14cfc0790

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkFloatAnimationFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFloatAnimationFrameData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkFloatAnimationFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkFloatAnimationFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFloatAnimationFrameData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkFloatAnimationFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkFrameData @ 14cfc0810

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkFrameData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkFrameData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData @ 14cfc0890

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkGamepadInputDeviceBlueprintData.InnerSingleton
    ;
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

// Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings @ 14cfc0910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkInterpolationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkInterpolationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkInterpolationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkInterpolationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkInterpolationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData @ 14cfc0990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLightBlueprintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData @ 14cfc0a10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkLocatorBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkLocatorBlueprintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkRefSkeleton @ 14cfc0a90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkRefSkeleton(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRefSkeleton.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkRefSkeleton.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkRefSkeleton_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkRefSkeleton.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FLiveLinkRefSkeleton.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData @ 14cfc0b10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSkeletonStaticData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo @ 14cfc0b90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceDebugInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSourceDebugInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSourceDebugInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceDebugInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSourceDebugInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSourceHandle @ 14cfc0c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourceHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSourceHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSourceHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSourcePreset @ 14cfc0c90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSourcePreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourcePreset.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSourcePreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSourcePreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSourcePreset.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSourcePreset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSubjectPreset @ 14cfc0d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectPreset(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectPreset.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectPreset.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectPreset_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectPreset.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectPreset.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation @ 14cfc0d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectRepresentation.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkSubjectRepresentation.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkSubjectRepresentation.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkSubjectRepresentation.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTime @ 14cfc0e10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTime.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTime.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTime_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTime.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTime.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTimeCode @ 14cfc0e90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTimeCode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTimeCode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings @ 14cfc0f10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeSynchronizationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTimeSynchronizationSettings.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTimeSynchronizationSettings_Statics::StructParams
              );
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTimeSynchronizationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTimeSynchronizationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTransform @ 14cfc0f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransform.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTransform.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTransform_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransform.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTransform.InnerSingleton;
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

// Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData @ 14cfc1010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.InnerSingleton,
               &Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FLiveLinkTransformBlueprintData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSubjectFrameHandle @ 14cfc1090

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubjectFrameHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubjectFrameHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSubjectFrameHandle.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSubjectMetadata @ 14cfc1110

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSubjectMetadata(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSubjectMetadata.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSubjectMetadata.InnerSingleton,
               &Z_Construct_UScriptStruct_FSubjectMetadata_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSubjectMetadata.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSubjectMetadata.InnerSingleton;
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

// IMPLEMENT_MODULE_LiveLinkInterface @ 14cfc1190

void __cdecl IMPLEMENT_MODULE_LiveLinkInterface(void)

{
  return;
}

// Instance'' @ 150454c40

void __cdecl `dynamic_atexit_destructor_for_'FLiveLinkLog::Instance__(void)

{
  if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000150454c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*FLiveLinkLog::Instance.Ptr)(FLiveLinkLog::Instance.Ptr,1);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GRegisterLiveLinkInterfaceCustomVersion'' @ 150454c60

void __cdecl _dynamic_atexit_destructor_for__GRegisterLiveLinkInterfaceCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&GRegisterLiveLinkInterfaceCustomVersion.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkRoles'' @ 150454c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkRoles__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkRoles);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkSubjectSettings'' @ 150454ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkSubjectSettings__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkSubjectSettings);
  return;
}

// `dynamic_atexit_destructor_for_'LogLiveLinkVirtualSubject'' @ 150454cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLiveLinkVirtualSubject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLiveLinkVirtualSubject);
  return;
}

