// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 376

// `dynamic_initializer_for_'Cmd_WN_Volume_ShowDebugShapesRef'' @ 1411959b0

void __cdecl _dynamic_initializer_for__Cmd_WN_Volume_ShowDebugShapesRef__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"WN.Show.Volumes",
                      L"Show debug shapes visibility for all volume components (0 or 1)",&local_58,0
                     );
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&Cmd_WN_Volume_ShowDebugShapesRef,pIVar5);
  Cmd_WN_Volume_ShowDebugShapesRef._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__Cmd_WN_Volume_ShowDebugShapesRef__);
  return;
}

// `dynamic_initializer_for_'Common'' @ 141195b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__Common__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&Common,L"Common",Log,All);
  atexit(_dynamic_atexit_destructor_for__Common__);
  return;
}

// `dynamic_initializer_for_'ErrorNamespace'' @ 141195b80

void __cdecl EHttpResponseCodes::_dynamic_initializer_for__ErrorNamespace__(void)

{
  ::FString::FString(&ErrorNamespace,L"errors.com.epicgames.httpresponse");
  atexit(_dynamic_atexit_destructor_for__ErrorNamespace__);
  return;
}

// `dynamic_initializer_for_'HttpVersion'' @ 141195bb0

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 141195bd0

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWN_Common'' @ 141195bf0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWN_Common__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WN_Common";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WN_Common",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWN_CommonModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NAME_ADPCM'' @ 141195c40

void __cdecl Audio::_dynamic_initializer_for__NAME_ADPCM__(void)

{
  ::FName::FName(&NAME_ADPCM,L"ADPCM");
  return;
}

// `dynamic_initializer_for_'NAME_BINKA'' @ 141195c60

void __cdecl Audio::_dynamic_initializer_for__NAME_BINKA__(void)

{
  ::FName::FName(&NAME_BINKA,L"BINKA");
  return;
}

// `dynamic_initializer_for_'NAME_OGG'' @ 141195c80

void __cdecl Audio::_dynamic_initializer_for__NAME_OGG__(void)

{
  ::FName::FName(&NAME_OGG,L"OGG");
  return;
}

// `dynamic_initializer_for_'NAME_OPUS'' @ 141195ca0

void __cdecl Audio::_dynamic_initializer_for__NAME_OPUS__(void)

{
  ::FName::FName(&NAME_OPUS,L"OPUS");
  return;
}

// `dynamic_initializer_for_'NAME_PCM'' @ 141195cc0

void __cdecl Audio::_dynamic_initializer_for__NAME_PCM__(void)

{
  ::FName::FName(&NAME_PCM,L"PCM");
  return;
}

// `dynamic_initializer_for_'NAME_PLATFORM_SPECIFIC'' @ 141195ce0

void __cdecl Audio::_dynamic_initializer_for__NAME_PLATFORM_SPECIFIC__(void)

{
  ::FName::FName(&NAME_PLATFORM_SPECIFIC,L"PLATFORM_SPECIFIC");
  return;
}

// `dynamic_initializer_for_'NAME_PROJECT_DEFINED'' @ 141195d00

void __cdecl Audio::_dynamic_initializer_for__NAME_PROJECT_DEFINED__(void)

{
  ::FName::FName(&NAME_PROJECT_DEFINED,L"PROJECT_DEFINED");
  return;
}

// `dynamic_initializer_for_'NAME_RADA'' @ 141195d20

void __cdecl Audio::_dynamic_initializer_for__NAME_RADA__(void)

{
  ::FName::FName(&NAME_RADA,L"RADA");
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 141195d40

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 141195d60

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_BindlessISMComponent_h__Script_WN_Common_3371203854'' @ 141195d80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_BindlessISMComponent_h__Script_WN_Common_3371203854__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_BindlessISMComponent_h__Script_WN_Common_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_BindlessISMComponent_h__Script_WN_Common_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_ISM_Test_h__Script_WN_Common_2179493208'' @ 141195dd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_ISM_Test_h__Script_WN_Common_2179493208__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_ISM_Test_h__Script_WN_Common_Statics
             ::ClassInfo,2,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_ISM_Test_h__Script_WN_Common_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_TextureCollection_h__Script_WN_Common_3593439750'' @ 141195e20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_TextureCollection_h__Script_WN_Common_3593439750__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Bindless_WN_TextureCollection_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_ML_WN_GSS_CineCameraActor_h__Script_WN_Common_2667656891'' @ 141195e60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_ML_WN_GSS_CineCameraActor_h__Script_WN_Common_2667656891__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_ML_WN_GSS_CineCameraActor_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakDownloader_h__Script_WN_Common_3566731294'' @ 141195ea0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakDownloader_h__Script_WN_Common_3566731294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakDownloader_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakVersion_h__Script_WN_Common_2894302536'' @ 141195ee0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakVersion_h__Script_WN_Common_2894302536__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Patch_WN_PakVersion_h__Script_WN_Common_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Prefab_WN_Prefab_h__Script_WN_Common_3031992202'' @ 141195f20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Prefab_WN_Prefab_h__Script_WN_Common_3031992202__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Prefab_WN_Prefab_h__Script_WN_Common_Statics
             ::ClassInfo,0xb,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_Prefab_WN_Prefab_h__Script_WN_Common_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_AmbientSoundVolume_h__Script_WN_Common_535280624'' @ 141195f70

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_AmbientSoundVolume_h__Script_WN_Common_535280624__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_AmbientSoundVolume_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_BoidsNavSystem_h__Script_WN_Common_1071999413'' @ 141195fb0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_BoidsNavSystem_h__Script_WN_Common_1071999413__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_BoidsNavSystem_h__Script_WN_Common_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonBluperintLibrary_h__Script_WN_Common_4081734286'' @ 141195ff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonBluperintLibrary_h__Script_WN_Common_4081734286__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonBluperintLibrary_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonSubsystem_h__Script_WN_Common_3605609489'' @ 141196030

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonSubsystem_h__Script_WN_Common_3605609489__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonSubsystem_h__Script_WN_Common_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_CommonSubsystem_h__Script_WN_Common_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_FootStep_h__Script_WN_Common_871665663'' @ 141196080

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_FootStep_h__Script_WN_Common_871665663__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_FootStep_h__Script_WN_Common_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_NiagaraTODDataInterface_h__Script_WN_Common_1264014869'' @ 1411960c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_NiagaraTODDataInterface_h__Script_WN_Common_1264014869__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_NiagaraTODDataInterface_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Variant_h__Script_WN_Common_1206048617'' @ 141196100

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Variant_h__Script_WN_Common_1206048617__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Variant_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_VolumeComponent_h__Script_WN_Common_2551310387'' @ 141196140

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_VolumeComponent_h__Script_WN_Common_2551310387__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_VolumeComponent_h__Script_WN_Common_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_VolumeComponent_h__Script_WN_Common_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_VolumeComponent_h__Script_WN_Common_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Volume_h__Script_WN_Common_2848543629'' @ 141196190

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Volume_h__Script_WN_Common_2848543629__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/WN_Common",
             Z_CompiledInDeferFile_FID_ProjectDS_Client_Plugins_WN_Common_Source_WN_Common_Public_WN_Volume_h__Script_WN_Common_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_WN_Common'' @ 1411961d0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_WN_Common__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xed6358ce;
  local_res8[0].DeclarationsHash = 0x2cdc670e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_WN_Common,L"/Script/WN_Common",
             &Z_Registration_Info_UPackage__Script_WN_Common,local_res8);
  return;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceLeave @ 1494811b0

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetVolumeColor @ 1494812b0

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetVolumeColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetVolumeColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsShapeEditable_SetBit @ 1494812f0

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bIsShapeEditable_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x549) = 1;
  return;
}

// NewProp_bDisplayShadedVolume_SetBit @ 149481300

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bDisplayShadedVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x581) = 1;
  return;
}

// NewProp_bShowDebugShape_SetBit @ 149481310

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bShowDebugShape_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x582) = 1;
  return;
}

// NewProp_bIgnoreDepth_SetBit @ 149481320

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bIgnoreDepth_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x584) = 1;
  return;
}

// NewProp_bUseInfiniteVolume_SetBit @ 1494813f0

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bUseInfiniteVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x698) = 1;
  return;
}

// NewProp_bIsInfiniteVolume_SetBit @ 149481400

void __cdecl
Z_Construct_UClass_UWN_VolumeComponent_Statics::NewProp_bIsInfiniteVolume_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x699) = 1;
  return;
}

// Z_Construct_UClass_AWN_Prefab @ 149481930

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_Prefab(void)

{
  if (Z_Registration_Info_UClass_AWN_Prefab.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_Prefab.OuterSingleton,
               &Z_Construct_UClass_AWN_Prefab_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_Prefab.OuterSingleton;
}

// Z_Construct_UClass_AWN_PrefabStamp @ 149481970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_PrefabStamp(void)

{
  if (Z_Registration_Info_UClass_AWN_PrefabStamp.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_PrefabStamp.OuterSingleton,
               &Z_Construct_UClass_AWN_PrefabStamp_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_PrefabStamp.OuterSingleton;
}

// Z_Construct_UClass_UWN_AmbientSoundVolumeComponent @ 1494819b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_AmbientSoundVolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_AudioComponent @ 1494819f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_AudioComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_AudioComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_DecalComponent @ 149481a30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_DecalComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_DecalComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_NiagaraComponent @ 149481a70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_NiagaraComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_NiagaraComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_PointLightComponent @ 149481ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_PointLightComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_PointLightComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_RectLightComponent @ 149481af0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_RectLightComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_RectLightComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_SpotLightComponent @ 149481b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_SpotLightComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_SpotLightComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_Prefab_StaticMeshComponent @ 149481b70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_StaticMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_Prefab_StaticMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_PrefabComponent @ 149481bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_PrefabComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_PrefabComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_PrefabComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_PrefabComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_PrefabComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_VolumeComponent @ 149481bf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_VolumeComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_VolumeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_VolumeComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_VolumeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_VolumeComponent.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWN_AmbientSoundInfo @ 149481c30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_AmbientSoundInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_AmbientSoundInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWN_AmbientSoundInfo.InnerSingleton;
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

// Z_Construct_UClass_UWN_NiagaraTODDataInterface @ 149481cb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_NiagaraTODDataInterface(void)

{
  if (Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.OuterSingleton,
               &Z_Construct_UClass_UWN_NiagaraTODDataInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.OuterSingleton;
}

// NewStructOps @ 149482140

void * __cdecl Z_Construct_UScriptStruct_FWN_AmbientSoundInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_AmbientSoundInfo,&UE::CoreUObject::Private::Construct<FWN_AmbientSoundInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_AmbientSoundInfo>,&UE::CoreUObject::Private::Destruct<FWN_AmbientSoundInfo>,&UE::CoreUObject::Private::Copy<FWN_AmbientSoundInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_VolumeWireComponent_NoRegister @ 149482450

UClass * __cdecl Z_Construct_UClass_UWN_VolumeWireComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeWireComponent",
               &Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton,
               UWN_VolumeWireComponent::StaticRegisterNativesUWN_VolumeWireComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VolumeWireComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeWireComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeWireComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_VolumeFaceComponent_NoRegister @ 149482510

UClass * __cdecl Z_Construct_UClass_UWN_VolumeFaceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeFaceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeFaceComponent",
               &Z_Registration_Info_UClass_UWN_VolumeFaceComponent.InnerSingleton,
               UWN_VolumeFaceComponent::StaticRegisterNativesUWN_VolumeFaceComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VolumeFaceComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeFaceComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeFaceComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_PakDownloader @ 149482910

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_PakDownloader(void)

{
  if (Z_Registration_Info_UClass_UWN_PakDownloader.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_PakDownloader.OuterSingleton,
               &Z_Construct_UClass_UWN_PakDownloader_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_PakDownloader.OuterSingleton;
}

// `scalar_deleting_destructor' @ 149482a60

void * __thiscall
FWN_CommonModule::_scalar_deleting_destructor_(FWN_CommonModule *this,uint param_1)

{
  *this = (FWN_CommonModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UPackage__Script_WN_Common @ 149482aa0

UPackage * __cdecl Z_Construct_UPackage__Script_WN_Common(void)

{
  if (Z_Registration_Info_UPackage__Script_WN_Common.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_WN_Common.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_WN_Common.OuterSingleton;
}

// Z_Construct_UClass_AWN_AmbientSoundVolume @ 149482ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_AmbientSoundVolume(void)

{
  if (Z_Registration_Info_UClass_AWN_AmbientSoundVolume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_AmbientSoundVolume.OuterSingleton,
               &Z_Construct_UClass_AWN_AmbientSoundVolume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_AmbientSoundVolume.OuterSingleton;
}

// Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister @ 149482b20

UClass * __cdecl Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolumeComponent",
               &Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton,
               UWN_AmbientSoundVolumeComponent::StaticRegisterNativesUWN_AmbientSoundVolumeComponent
               ,0x700,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_AmbientSoundVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_AmbientSoundVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton;
}

// Z_Construct_UEnum_WN_Common_EWN_VolumeObserverMode @ 149482be0

UEnum * __cdecl Z_Construct_UEnum_WN_Common_EWN_VolumeObserverMode(void)

{
  if (Z_Registration_Info_UEnum_EWN_VolumeObserverMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_VolumeObserverMode.InnerSingleton,
               &Z_Construct_UEnum_WN_Common_EWN_VolumeObserverMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_VolumeObserverMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_PakVersion @ 149482c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_PakVersion(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersion.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_PakVersion.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_PakVersion_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersion.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_PakVersion.InnerSingleton;
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

// NewProp_bIsPrerequisites_SetBit @ 149482ca0

void __cdecl
Z_Construct_UScriptStruct_FWN_PakVersion_Statics::NewProp_bIsPrerequisites_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_bIsUserSpecified_SetBit @ 149482cb0

void __cdecl
Z_Construct_UScriptStruct_FWN_PakVersion_Statics::NewProp_bIsUserSpecified_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// NewProp_bHasPakExtension_SetBit @ 149482cc0

void __cdecl
Z_Construct_UScriptStruct_FWN_PakVersion_Statics::NewProp_bHasPakExtension_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// NewStructOps @ 149482cd0

void * __cdecl Z_Construct_UScriptStruct_FWN_PakVersion_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_PakVersion,&UE::CoreUObject::Private::Construct<FWN_PakVersion>,&UE::CoreUObject::Private::ConstructForTests<FWN_PakVersion>,&UE::CoreUObject::Private::Destruct<FWN_PakVersion>,&UE::CoreUObject::Private::Copy<FWN_PakVersion>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeEnter @ 149482d10

UFunction * __cdecl Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeLeave @ 149482d90

UFunction * __cdecl Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceEnter @ 149482e50

UFunction * __cdecl Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseIoStore_SetBit @ 149482e90

void __cdecl
Z_Construct_UScriptStruct_FWN_PakVersionList_Statics::NewProp_bUseIoStore_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 149482ea0

void * __cdecl Z_Construct_UScriptStruct_FWN_PakVersionList_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_PakVersionList,&UE::CoreUObject::Private::Construct<FWN_PakVersionList>,&UE::CoreUObject::Private::ConstructForTests<FWN_PakVersionList>,&UE::CoreUObject::Private::Destruct<FWN_PakVersionList>,&UE::CoreUObject::Private::Copy<FWN_PakVersionList>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceLeave @ 149482fe0

UFunction * __cdecl Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_AmbientSoundVolume_GetTimeSinceLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 149483020

void * __thiscall
FWN_FootStepTableRow::_scalar_deleting_destructor_(FWN_FootStepTableRow *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FWN_FootStep_Consumer,int>
            ((FWN_FootStep_Consumer *)(this->FootStep_Consumer).AllocatorInstance.Data,
             (this->FootStep_Consumer).ArrayNum);
  pFVar1 = (this->FootStep_Consumer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UScriptStruct_FWN_FootStep_Consumer @ 149483080

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_FootStep_Consumer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_FootStep_Consumer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FWN_FootStep_Consumer.InnerSingleton;
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

// NewProp_UseCascade_SetBit @ 149483100

void __cdecl
Z_Construct_UScriptStruct_FWN_FootStep_Consumer_Statics::NewProp_UseCascade_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_UseNiagara_SetBit @ 149483110

void __cdecl
Z_Construct_UScriptStruct_FWN_FootStep_Consumer_Statics::NewProp_UseNiagara_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewStructOps @ 1494831a0

void * __cdecl Z_Construct_UScriptStruct_FWN_FootStep_Consumer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_FootStep_Consumer,&UE::CoreUObject::Private::Construct<FWN_FootStep_Consumer>,&UE::CoreUObject::Private::ConstructForTests<FWN_FootStep_Consumer>,&UE::CoreUObject::Private::Destruct<FWN_FootStep_Consumer>,&UE::CoreUObject::Private::Copy<FWN_FootStep_Consumer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1494832e0

void * __cdecl Z_Construct_UScriptStruct_FWN_FootStepTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_FootStepTableRow,&UE::CoreUObject::Private::Construct<FWN_FootStepTableRow>,&UE::CoreUObject::Private::ConstructForTests<FWN_FootStepTableRow>,&UE::CoreUObject::Private::Destruct<FWN_FootStepTableRow>,&UE::CoreUObject::Private::Copy<FWN_FootStepTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_TextureCollection @ 1494833e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_TextureCollection(void)

{
  if (Z_Registration_Info_UClass_UWN_TextureCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_TextureCollection.OuterSingleton,
               &Z_Construct_UClass_UWN_TextureCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_TextureCollection.OuterSingleton;
}

// Z_Construct_UClass_AWN_GSS_CineCameraActor @ 149483990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_GSS_CineCameraActor(void)

{
  if (Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.OuterSingleton,
               &Z_Construct_UClass_AWN_GSS_CineCameraActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.OuterSingleton;
}

// Z_Construct_UFunction_AWN_GSS_CineCameraActor_Capture @ 1494839d0

UFunction * __cdecl Z_Construct_UFunction_AWN_GSS_CineCameraActor_Capture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_GSS_CineCameraActor_Capture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_InEnabled_SetBit @ 149483a10

void __cdecl
Z_Construct_UFunction_AWN_GSS_CineCameraActor_SetCapturingEnabled_Statics::NewProp_InEnabled_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_AWN_GSS_CineCameraActor_SetCapturingEnabled @ 149483a20

UFunction * __cdecl Z_Construct_UFunction_AWN_GSS_CineCameraActor_SetCapturingEnabled(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_GSS_CineCameraActor_SetCapturingEnabled_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bCapturingEnabled_SetBit @ 149483a60

void __cdecl
Z_Construct_UClass_AWN_GSS_CineCameraActor_Statics::NewProp_bCapturingEnabled_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xae0) = 1;
  return;
}

// Z_Construct_UClass_UWN_BindlessISMComponent_NoRegister @ 149483e10

UClass * __cdecl Z_Construct_UClass_UWN_BindlessISMComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISMComponent",
               &Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton,
               UWN_BindlessISMComponent::StaticRegisterNativesUWN_BindlessISMComponent,0xa70,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_BindlessISMComponent>,
               InternalVTableHelperCtorCaller<UWN_BindlessISMComponent>,local_res8,
               UInstancedStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BindlessISMComponent.InnerSingleton;
}

// `scalar_deleting_destructor' @ 149483f30

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*),FDefaultDelegateUserPolicy,<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// NewProp_OnCreateFinish_SetBit @ 149484140

void __cdecl
Z_Construct_UScriptStruct_FWN_NavInfo_Statics::NewProp_OnCreateFinish_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x6c) = 1;
  return;
}

// NewStructOps @ 149484150

void * __cdecl Z_Construct_UScriptStruct_FWN_NavInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_NavInfo,&UE::CoreUObject::Private::Construct<FWN_NavInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_NavInfo>,&UE::CoreUObject::Private::Destruct<FWN_NavInfo>,&UE::CoreUObject::Private::Copy<FWN_NavInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_VariantObjectReferencer @ 149484190

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_VariantObjectReferencer(void)

{
  if (Z_Registration_Info_UClass_UWN_VariantObjectReferencer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_VariantObjectReferencer.OuterSingleton,
               &Z_Construct_UClass_UWN_VariantObjectReferencer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_VariantObjectReferencer.OuterSingleton;
}

// Z_Construct_UDelegateFunction_WN_Common_WN_VolumesEnterDelegate__DelegateSignature @ 1494841d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_WN_Common_WN_VolumesEnterDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_WN_Common_WN_VolumesEnterDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_WN_Common_WN_VolumesLeaveDelegate__DelegateSignature @ 149484210

UFunction * __cdecl
Z_Construct_UDelegateFunction_WN_Common_WN_VolumesLeaveDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_WN_Common_WN_VolumesLeaveDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWN_Volume @ 149484310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_Volume(void)

{
  if (Z_Registration_Info_UClass_AWN_Volume.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_Volume.OuterSingleton,
               &Z_Construct_UClass_AWN_Volume_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_Volume.OuterSingleton;
}

// Z_Construct_UFunction_AWN_Volume_GetTimeEnter @ 149484350

UFunction * __cdecl Z_Construct_UFunction_AWN_Volume_GetTimeEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AWN_Volume_GetTimeEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_Volume_GetTimeLeave @ 149484450

UFunction * __cdecl Z_Construct_UFunction_AWN_Volume_GetTimeLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AWN_Volume_GetTimeLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWN_CommonBlueprintLibrary @ 149484490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CommonBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UWN_CommonBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UFunction_AWN_Volume_GetTimeSinceEnter @ 149484590

UFunction * __cdecl Z_Construct_UFunction_AWN_Volume_GetTimeSinceEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_Volume_GetTimeSinceEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1494845d0

void __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_CanEverRender_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_CanEverRender @ 1494845e0

UFunction * __cdecl Z_Construct_UFunction_UWN_CommonBlueprintLibrary_CanEverRender(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_CanEverRender_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AWN_Volume_GetTimeSinceLeave @ 149484620

UFunction * __cdecl Z_Construct_UFunction_AWN_Volume_GetTimeSinceLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AWN_Volume_GetTimeSinceLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 149484660

void __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsInPIE_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsInPIE @ 149484670

UFunction * __cdecl Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsInPIE(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsInPIE_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 1494846b0

void __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsUnattended_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsUnattended @ 1494846c0

UFunction * __cdecl Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsUnattended(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_IsUnattended_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AWN_BindlessISM_Test @ 149484700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_BindlessISM_Test(void)

{
  if (Z_Registration_Info_UClass_AWN_BindlessISM_Test.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_BindlessISM_Test.OuterSingleton,
               &Z_Construct_UClass_AWN_BindlessISM_Test_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_BindlessISM_Test.OuterSingleton;
}

// Z_Construct_UClass_AWN_ISM_Test @ 149484740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AWN_ISM_Test(void)

{
  if (Z_Registration_Info_UClass_AWN_ISM_Test.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AWN_ISM_Test.OuterSingleton,
               &Z_Construct_UClass_AWN_ISM_Test_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AWN_ISM_Test.OuterSingleton;
}

// Z_Construct_UScriptStruct_FWN_TestInstanceSpawnInfo @ 149484780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_TestInstanceSpawnInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_TestInstanceSpawnInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_TestInstanceSpawnInfo.InnerSingleton;
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

// NewStructOps @ 149484800

void * __cdecl Z_Construct_UScriptStruct_FWN_TestInstanceSpawnInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_TestInstanceSpawnInfo,&UE::CoreUObject::Private::Construct<FWN_TestInstanceSpawnInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_TestInstanceSpawnInfo>,&UE::CoreUObject::Private::Destruct<FWN_TestInstanceSpawnInfo>,&UE::CoreUObject::Private::Copy<FWN_TestInstanceSpawnInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_VolumeFaceComponent @ 149484840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_VolumeFaceComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_VolumeFaceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_VolumeFaceComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_VolumeFaceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_VolumeFaceComponent.OuterSingleton;
}

// Z_Construct_UClass_UWN_VolumeWireComponent @ 149484880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_VolumeWireComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_VolumeWireComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_VolumeWireComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_VolumeWireComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_VolumeWireComponent.OuterSingleton;
}

// Z_Construct_UEnum_WN_Common_EWN_VolumeShape @ 1494848c0

UEnum * __cdecl Z_Construct_UEnum_WN_Common_EWN_VolumeShape(void)

{
  if (Z_Registration_Info_UEnum_EWN_VolumeShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EWN_VolumeShape.InnerSingleton,
               &Z_Construct_UEnum_WN_Common_EWN_VolumeShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EWN_VolumeShape.InnerSingleton;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_EditorOnly @ 149484900

UFunction * __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_EditorOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_EditorOnly_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsInVolume_SetBit @ 149484940

void __cdecl
Z_Construct_UScriptStruct_FWN_VolumeObserverInfo_Statics::NewProp_bIsInVolume_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 149484950

void * __cdecl Z_Construct_UScriptStruct_FWN_VolumeObserverInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_VolumeObserverInfo,&UE::CoreUObject::Private::Construct<FWN_VolumeObserverInfo>,&UE::CoreUObject::Private::ConstructForTests<FWN_VolumeObserverInfo>,&UE::CoreUObject::Private::Destruct<FWN_VolumeObserverInfo>,&UE::CoreUObject::Private::Copy<FWN_VolumeObserverInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UWN_CommonSubsystem @ 149484990

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_CommonSubsystem(void)

{
  if (Z_Registration_Info_UClass_UWN_CommonSubsystem.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_CommonSubsystem.OuterSingleton,
               &Z_Construct_UClass_UWN_CommonSubsystem_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_CommonSubsystem.OuterSingleton;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_UsedInGame @ 1494849d0

UFunction * __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_UsedInGame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadAsset_Blocking_UsedInGame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWN_VolumeComponent_NoRegister @ 149484a10

UClass * __cdecl Z_Construct_UClass_UWN_VolumeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeComponent",
               &Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton,
               UWN_VolumeComponent::StaticRegisterNativesUWN_VolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_VolumeComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_VolumeContext @ 149484ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_VolumeContext(void)

{
  if (Z_Registration_Info_UClass_UWN_VolumeContext.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_VolumeContext.OuterSingleton,
               &Z_Construct_UClass_UWN_VolumeContext_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_VolumeContext.OuterSingleton;
}

// EWN_VolumeObserverMode_StaticEnum @ 149484b10

UEnum * __cdecl EWN_VolumeObserverMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_Common_EWN_VolumeObserverMode,(UObject *)pUVar1,
                       L"EWN_VolumeObserverMode");
  }
  return Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_EditorOnly @ 149484b50

UFunction * __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_EditorOnly(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_EditorOnly_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EWN_VolumeShape_StaticEnum @ 149484b90

UEnum * __cdecl EWN_VolumeShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_Common_EWN_VolumeShape,(UObject *)pUVar1,
                       L"EWN_VolumeShape");
  }
  return Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton;
}

// Z_Construct_UClass_UWN_BindlessISMComponent @ 149484bd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UWN_BindlessISMComponent(void)

{
  if (Z_Registration_Info_UClass_UWN_BindlessISMComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UWN_BindlessISMComponent.OuterSingleton,
               &Z_Construct_UClass_UWN_BindlessISMComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UWN_BindlessISMComponent.OuterSingleton;
}

// Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_UsedInGame @ 149484c10

UFunction * __cdecl
Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_UsedInGame(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonBlueprintLibrary_WN_LoadClassAsset_Blocking_UsedInGame_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWN_TextureCollection_NoRegister @ 149484c50

UClass * __cdecl Z_Construct_UClass_UWN_TextureCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_TextureCollection",
               &Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton,
               UWN_TextureCollection::StaticRegisterNativesUWN_TextureCollection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWN_TextureCollection>,
               InternalVTableHelperCtorCaller<UWN_TextureCollection>,local_res8,
               UTextureCollection::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_TextureCollection.InnerSingleton;
}

// Z_Construct_UScriptStruct_FWN_BindlessISM_MaterialInterface @ 149484d10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_BindlessISM_MaterialInterface(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_BindlessISM_MaterialInterface_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_BindlessISM_MaterialInterface.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding @ 149484d90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding.InnerSingleton
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

// NewStructOps @ 149484e10

void * __cdecl
Z_Construct_UScriptStruct_FWN_BindlessISM_MaterialInterface_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_BindlessISM_MaterialInterface,&UE::CoreUObject::Private::Construct<FWN_BindlessISM_MaterialInterface>,&UE::CoreUObject::Private::ConstructForTests<FWN_BindlessISM_MaterialInterface>,&UE::CoreUObject::Private::Destruct<FWN_BindlessISM_MaterialInterface>,&UE::CoreUObject::Private::Copy<FWN_BindlessISM_MaterialInterface>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 149484f10

void __cdecl
Z_Construct_UFunction_UWN_VolumeComponent_GetDisplayShadedVolume_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 149484f20

void * __cdecl
Z_Construct_UScriptStruct_FWN_BindlessISM_TextureCollectionBinding_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FWN_BindlessISM_TextureCollectionBinding,&UE::CoreUObject::Private::Construct<FWN_BindlessISM_TextureCollectionBinding>,&UE::CoreUObject::Private::ConstructForTests<FWN_BindlessISM_TextureCollectionBinding>,&UE::CoreUObject::Private::Destruct<FWN_BindlessISM_TextureCollectionBinding>,&UE::CoreUObject::Private::Copy<FWN_BindlessISM_TextureCollectionBinding>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetDisplayShadedVolume @ 149484f60

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetDisplayShadedVolume(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetDisplayShadedVolume_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetDistanceFromNearPlane @ 149484fa0

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetDistanceFromNearPlane(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetDistanceFromNearPlane_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeEnter @ 1494850a0

UFunction * __cdecl Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetTimeEnter @ 1494850e0

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetTimeEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetTimeEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UWN_VolumeContext_NoRegister @ 149485120

UClass * __cdecl Z_Construct_UClass_UWN_VolumeContext_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VolumeContext",
               &Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton,
               UWN_VolumeContext::StaticRegisterNativesUWN_VolumeContext,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_VolumeContext>,
               InternalVTableHelperCtorCaller<UWN_VolumeContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VolumeContext.InnerSingleton;
}

// Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureCollectionParameterNames @ 1494851d0

UFunction * __cdecl
Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureCollectionParameterNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureCollectionParameterNames_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeLeave @ 149485210

UFunction * __cdecl Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_CommonSubsystem_HandleVolumeLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetTimeLeave @ 149485250

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetTimeLeave(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetTimeLeave_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceEnter @ 149485350

UFunction * __cdecl Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceEnter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_VolumeComponent_GetTimeSinceEnter_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureParameterNames @ 149485390

UFunction * __cdecl Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureParameterNames(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UWN_BindlessISMComponent_GetTextureParameterNames_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// operator<<<USoundBase> @ 1494853d0

FArchive * __cdecl operator<<<USoundBase>(FArchive *param_1,TSoftObjectPtr<USoundBase> *param_2)

{
  (**(code **)(*(longlong *)param_1 + 0x148))();
  return param_1;
}

// ConstructItems<FWN_FootStep_Consumer,FWN_FootStep_Consumer,int> @ 149485400

void __cdecl
ConstructItems<FWN_FootStep_Consumer,FWN_FootStep_Consumer,int>
          (void *param_1,FWN_FootStep_Consumer *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  float *pfVar5;
  ForAnyElementType *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  
  if (param_3 != 0) {
    pFVar6 = (ForAnyElementType *)((longlong)param_1 + 0x10);
    pTVar7 = &param_2->NameVariations;
    do {
      FString::FString((FString *)
                       ((longlong)pTVar7 + (longlong)param_1 + (-0x10 - (longlong)param_2)),
                       (FString *)(pTVar7 + -1));
      pFVar6->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
      iVar2 = pTVar7->ArrayNum;
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      *(int *)&pFVar6[1].Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar2,0,pFVar6,iVar2,piVar1);
        ConstructItems<FString,FString,int>(pFVar6->Data,(FString *)pFVar3,iVar2);
      }
      pFVar6[2].Data = (FScriptContainerElement *)0x0;
      pFVar6[3].Data = (FScriptContainerElement *)0x0;
      pFVar6[6].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar6[7].Data = 0;
      *(undefined4 *)((longlong)&pFVar6[7].Data + 4) = 0x80;
      *(undefined4 *)&pFVar6[8].Data = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar6[8].Data + 4) = 0;
      pFVar6[10].Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)&pFVar6[0xb].Data = 0;
      TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                   *)(pFVar6 + 2),
                  (TSet<TTuple<int,USoundBase_*>,TDefaultMapHashableKeyFuncs<int,USoundBase_*,0>,FDefaultSetAllocator>
                   *)(pTVar7 + 1));
      pFVar6[0xc].Data =
           *(FScriptContainerElement **)
            &((TSoftObjectPtr<UParticleSystem> *)(pTVar7 + 6))->SoftObjectPtr;
      pFVar3 = *(FScriptContainerElement **)(pTVar7 + 7);
      pFVar6[0xd].Data =
           *(FScriptContainerElement **)
            &(((TSoftObjectPtr<UParticleSystem> *)(pTVar7 + 6))->SoftObjectPtr).field_0x8;
      pFVar6[0xe].Data = pFVar3;
      FUtf8String::FUtf8String
                ((FUtf8String *)(pFVar6 + 0xf),(FUtf8String *)((longlong)(pTVar7 + 7) + 8));
      pFVar6[0x11].Data = *(FScriptContainerElement **)((longlong)(pTVar7 + 8) + 8);
      pFVar3 = *(FScriptContainerElement **)((longlong)(pTVar7 + 9) + 8);
      pFVar6[0x12].Data = *(FScriptContainerElement **)(pTVar7 + 9);
      pFVar6[0x13].Data = pFVar3;
      FUtf8String::FUtf8String((FUtf8String *)(pFVar6 + 0x14),(FUtf8String *)(pTVar7 + 10));
      *(float *)&pFVar6[0x16].Data = *(float *)(pTVar7 + 0xb);
      *(float *)((longlong)&pFVar6[0x16].Data + 4) = *(float *)((longlong)(pTVar7 + 0xb) + 4);
      *(bool *)&pFVar6[0x17].Data = *(bool *)((longlong)(pTVar7 + 0xb) + 8);
      *(bool *)((longlong)&pFVar6[0x17].Data + 1) = *(bool *)((longlong)(pTVar7 + 0xb) + 9);
      pfVar5 = (float *)(pTVar7 + 0xb);
      uVar4 = *(undefined8 *)((longlong)(pTVar7 + 0xc) + 4);
      pTVar7 = pTVar7 + 0xe;
      *(undefined8 *)((longlong)&pFVar6[0x17].Data + 4) =
           *(undefined8 *)&((FLinearColor *)(pfVar5 + 3))->field0_0x0;
      *(undefined8 *)((longlong)&pFVar6[0x18].Data + 4) = uVar4;
      pFVar6 = pFVar6 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FWN_PakVersion,FWN_PakVersion,int> @ 1494855a0

void __cdecl
ConstructItems<FWN_PakVersion,FWN_PakVersion,int>(void *param_1,FWN_PakVersion *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((longlong)param_1 + 2);
    pbVar2 = &param_2->bHasPakExtension;
    do {
      puVar1[-2] = puVar1[(longlong)param_2 + (-2 - (longlong)param_1)];
      puVar1[-1] = pbVar2[-1];
      *puVar1 = *pbVar2;
      FString::FString((FString *)(puVar1 + 6),(FString *)(pbVar2 + 6));
      FString::FString((FString *)(puVar1 + 0x16),(FString *)(pbVar2 + 0x16));
      FString::FString((FString *)(puVar1 + 0x26),(FString *)(pbVar2 + 0x26));
      *(uint *)(puVar1 + 0x36) = *(uint *)(pbVar2 + 0x36);
      *(uint *)(puVar1 + 0x3a) = *(uint *)(pbVar2 + 0x3a);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x40;
      pbVar2 = pbVar2 + 0x40;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FWN_FootStep_Consumer,int> @ 1494856a0

void __cdecl DestructItems<FWN_FootStep_Consumer,int>(FWN_FootStep_Consumer *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoundByStrength).field_0x40;
    do {
      if ((void *)puVar1[10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[10]);
      }
      if ((void *)puVar1[5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[5]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,USoundBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      DestructItems<FString,int>((FString *)puVar1[-10],*(int *)(puVar1 + -9));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_PakVersion,int> @ 149485740

void __cdecl DestructItems<FWN_PakVersion,int>(FWN_PakVersion *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->PakName;
    do {
      pFVar1 = pFVar2[1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pFVar2[-1].Data.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FWN_TestInstanceSpawnInfo,int> @ 1494857a0

void __cdecl
DestructItems<FWN_TestInstanceSpawnInfo,int>(FWN_TestInstanceSpawnInfo *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->MIObjectPtr).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FWN_PakStreamDownloader,1>,int> @ 1494857e0

void __cdecl
DestructItems<TSharedPtr<FWN_PakStreamDownloader,1>,int>
          (TSharedPtr<FWN_PakStreamDownloader,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IHttpRequest,1>,int> @ 149485820

void __cdecl
DestructItems<TSharedPtr<IHttpRequest,1>,int>(TSharedPtr<IHttpRequest,1> *param_1,int param_2)

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

// FindByPredicate<`FWN_PakVersionList::FindVersionByAlias'::__l2::<lambda_1>_> @ 149486830

FWN_PakVersion * __thiscall
TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FWN_PakVersionList::FindVersionByAlias_::__l2::<lambda_1>_>
          (TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FWN_PakVersion *pFVar4;
  FWN_PakVersion *pFVar5;
  bool bVar6;
  
  pFVar4 = (FWN_PakVersion *)(this->AllocatorInstance).Data;
  pFVar5 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      pFVar2 = (param_1->InAlias).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return (FWN_PakVersion *)0x0;
    }
    iVar3 = (pFVar4->Alias).Data.ArrayNum;
    iVar1 = (param_1->InAlias).Data.ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Alias).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->InAlias).Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar1 == 1;
    }
    if (bVar6) break;
    pFVar4 = pFVar4 + 1;
  }
  pFVar2 = (param_1->InAlias).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pFVar4;
}

// FindByPredicate<`FWN_PakVersionList::FindVersionByGuid'::__l2::<lambda_1>_> @ 1494868d0

FWN_PakVersion * __thiscall
TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FWN_PakVersionList::FindVersionByGuid_::__l2::<lambda_1>_>
          (TArray<FWN_PakVersion,TSizedDefaultAllocator<32>_> *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FWN_PakVersion *pFVar4;
  FWN_PakVersion *pFVar5;
  bool bVar6;
  
  pFVar4 = (FWN_PakVersion *)(this->AllocatorInstance).Data;
  pFVar5 = pFVar4 + this->ArrayNum;
  while( true ) {
    if (pFVar4 == pFVar5) {
      pFVar2 = (param_1->InGuid).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return (FWN_PakVersion *)0x0;
    }
    iVar3 = (pFVar4->Guid).Data.ArrayNum;
    iVar1 = (param_1->InGuid).Data.ArrayNum;
    if (iVar3 == iVar1) {
      if (iVar3 < 2) break;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar4->Guid).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->InGuid).Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
    }
    else {
      bVar6 = iVar3 + iVar1 == 1;
    }
    if (bVar6) break;
    pFVar4 = pFVar4 + 1;
  }
  pFVar2 = (param_1->InGuid).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pFVar4;
}

// FindLastByPredicate<`FWN_StateMachine::FindStateNodeIndex'::__l2::<lambda_1>_> @ 149486af0

int __thiscall
TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FWN_StateMachine::FindStateNodeIndex_::__l2::<lambda_1>_>
          (TArray<FWN_StateMachine_StateNode,TSizedDefaultAllocator<32>_> *this,<lambda_1> param_1,
          int param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)param_2 * 0x20;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    pFVar7 = pFVar4 + -0x20;
    pFVar1 = (FName *)(pFVar4 + -0x1c);
    pFVar4 = pFVar7;
  } while (param_1.InName != *pFVar1);
  return (int)((longlong)pFVar7 - (longlong)pFVar2 >> 5);
}

// FindLastByPredicate<`FWN_StateMachine::FindTransitionNodeIndex'::__l2::<lambda_1>_> @ 149486ba0

int __thiscall
TArray<FWN_StateMachine_TransitionNode,TSizedDefaultAllocator<32>_>::
FindLastByPredicate<_FWN_StateMachine::FindTransitionNodeIndex_::__l2::<lambda_1>_>
          (TArray<FWN_StateMachine_TransitionNode,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1,int param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  if (((param_2 < 0) || (this->ArrayNum < param_2)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar6 = (*pcVar3)();
    return iVar6;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  pFVar4 = pFVar2 + (longlong)param_2 * 0x14;
  do {
    if (pFVar4 == pFVar2) {
      return -1;
    }
    pFVar7 = pFVar4 + -0x14;
    pFVar1 = (FName *)(pFVar4 + -0x10);
    pFVar4 = pFVar7;
  } while (param_1.InName != *pFVar1);
  return (int)(((longlong)pFVar7 - (longlong)pFVar2) / 0x14);
}

// ForEachComponent_Internal<UWN_VolumeComponent,1,1,`AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 149486f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,1,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UWN_VolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = UWN_VolumeComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_149487083;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149487083:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14948711d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14948711d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_149487220;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_149487220:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UWN_VolumeComponent,1,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UWN_VolumeComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UWN_VolumeComponent *)0x0) {
      `AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UWN_VolumeComponent,1,1,`AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149487490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,1,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<AActor_*> FVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  UWN_VolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  UClass *pUVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ForElementType<AActor_*> FVar19;
  undefined1 *puVar20;
  uint *puVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  UObject *local_190;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  undefined4 local_10c;
  ForElementType<AActor_*> local_108;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar15 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar15 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar13 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  iVar5 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar15 + 0x38) < iVar5) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar5 * 8) !=
      &pUVar13->_padding_)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  if (!bVar12) {
    return;
  }
  pUVar13 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar13 == (UClass *)0x0) {
    return;
  }
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar13 != pUVar14) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                          ,0xf1c,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pUVar14 = UWN_VolumeComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar5 = (int)pUVar14->_padding_;
    if (((int)pUVar13->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar14->_padding_)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1494875b3;
  }
  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar12) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_1494875b3:
  local_3c = 0x18;
  pTVar2 = &this->OwnedComponents;
  local_108.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_180 = 0;
  local_40 = 0;
  iVar5 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_17c = 1;
  local_168 = 0;
  iStack_16c = iStack_180;
  if (iVar5 != 0) {
    puVar21 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar18 = *puVar21;
    iStack_180 = 0;
    local_168 = 0;
    while (uVar18 == 0) {
      iStack_180 = iStack_180 + 1;
      local_168 = local_168 + 0x20;
      iStack_16c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_14948764d;
      uVar18 = puVar21[iStack_180];
    }
    uStack_17c = ~(uVar18 - 1) & uVar18;
    uVar4 = (ulonglong)uStack_17c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_16c = local_198 + -1 + local_168;
    if (iVar5 < iStack_16c) {
      iStack_16c = iVar5;
    }
  }
LAB_14948764d:
  uVar18 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_164 = local_10c;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_160 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uStack_170 = 0xffffffff;
  TStack_150._padding_ = CONCAT44(uStack_17c,iStack_180);
  TStack_150.CurrentBitIndex = iStack_16c;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar18 >> 5;
  TStack_150._28_4_ = local_10c;
  TStack_150.BaseBitIndex = local_168;
  uStack_130 = CONCAT44(uStack_15c,iStack_160);
  local_188 = pTVar2;
  local_178 = puVar1;
  local_158 = pTVar2;
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar18 != uVar6) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar20 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar20 = puVar7;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar18 == 0) {
      iVar16 = iVar16 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar16) goto LAB_149487750;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar16 * 4);
    }
    uVar4 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar18 = local_194 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_149487750:
  do {
    pTVar11 = local_158;
    if (*(int *)&(local_158->Elements).field_0x8 - *(int *)&(local_158->Elements).field_0x34 !=
        (int)uStack_130) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar5 = local_40;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_150.CurrentBitIndex == uVar18) &&
        (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2)
       ) {
      FVar19 = (ForElementType<AActor_*>)&local_108;
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar19 = local_108.SecondaryData;
      }
      FVar3 = (ForElementType<AActor_*>)((longlong)FVar19 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar5) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar19 == FVar3) break;
        local_190 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar19;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        ForEachComponent_Internal<UWN_VolumeComponent,1,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_190,<Var10);
        FVar19 = (ForElementType<AActor_*>)((longlong)FVar19 + 8);
      }
      if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_108.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UWN_VolumeComponent **)
              (*(longlong *)&pTVar11->Elements + (longlong)TStack_150.CurrentBitIndex * 0x10);
    if (pUVar8 != (UWN_VolumeComponent *)0x0) {
      `AActor::
      GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
      ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      pUVar13 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar5 = (int)pUVar13->_padding_;
      if (((iVar5 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
           &pUVar13->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        if ((ulonglong)FVar19 <= &local_1a0) {
          FVar19 = (ForElementType<AActor_*>)&local_108;
          if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar19 = local_108.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar19 + (longlong)local_3c * 8)) {
            local_1c0 = (longlong)local_40;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_108;
            if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_108.SecondaryData;
            }
            local_1c8 = (longlong)local_3c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_40 == local_3c) {
          local_40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_108,&local_3c);
        }
        lVar15 = (longlong)local_40;
        FVar19 = (ForElementType<AActor_*>)&local_108;
        if (local_108.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar19 = local_108.SecondaryData;
        }
        local_40 = local_40 + 1;
        *(longlong *)((longlong)FVar19 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  } while( true );
}

// ForEachComponent_Internal<UWN_VolumeComponent,1,0,`AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 1494879c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,1,0,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UWN_VolumeComponent *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  TArray<UWN_VolumeComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar11 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar11 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar9->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  pUVar9 = *(UClass **)param_1.Class.field0_0x0;
  if (pUVar9 == (UClass *)0x0) {
    return;
  }
  pUVar10 = Z_Construct_UClass_UActorComponent_NoRegister();
  if ((pUVar9 != pUVar10) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bClassIsActorComponent == false || ComponentClass == UActorComponent::StaticClass()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                         ,0xf1c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar10 = UWN_VolumeComponent::StaticClass();
  if (pUVar10 != (UClass *)0x0) {
    iVar3 = (int)pUVar10->_padding_;
    if (((int)pUVar9->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar3 * 8) != &pUVar10->_padding_
       )) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_149487ac6;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_149487ac6:
  iVar14 = 0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uVar7 = 1;
  iVar16 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149487b4d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_149487b4d:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_149487c51;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_149487c51:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UWN_VolumeComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar4 != (UWN_VolumeComponent *)0x0) {
      `AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
      operator()(&local_res18,pUVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEachComponent_Internal<UWN_VolumeComponent,0,1,`AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 149487cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,0,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UWN_VolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = UWN_VolumeComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_149487dc3;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149487dc3:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_149487e70;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_149487e70:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_149487f80;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_149487f80:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UWN_VolumeComponent,0,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UWN_VolumeComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UWN_VolumeComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UWN_VolumeComponent,0,1,`AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_> @ 149488210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,0,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ForElementType<AActor_*> FVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  UWN_VolumeComponent *pUVar8;
  AActor *this_00;
  code *pcVar9;
  <lambda_1> <Var10;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar11;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  UClass *pUVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  ForElementType<AActor_*> FVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  <lambda_1> local_res18;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  ForElementType<AActor_*> local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8;
  undefined1 local_1a7 [7];
  longlong local_1a0;
  int local_198;
  int local_194;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_190;
  UObject *local_188;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
  *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  undefined4 local_104;
  ForElementType<AActor_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  local_res18.OutComponents = param_2.OutComponents;
  pUVar14 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
    return;
  }
  iVar4 = (int)pUVar14->_padding_;
  if ((*(int *)(lVar6 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar14->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) {
    return;
  }
  lVar6 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar6 == 0) {
    return;
  }
  pUVar14 = UWN_VolumeComponent::StaticClass();
  if (pUVar14 != (UClass *)0x0) {
    iVar4 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar6 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar14->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_149488303;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                      ,0xf1d,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_149488303:
  local_34 = 0x18;
  local_190 = &this->OwnedComponents;
  local_100.SecondaryData = (ForElementType<AActor_*>)0x0;
  puVar1 = &(this->OwnedComponents).Elements.field_0x10;
  iStack_178 = 0;
  local_38 = 0;
  iVar4 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_174 = 1;
  local_160 = 0;
  iStack_164 = iStack_178;
  if (iVar4 != 0) {
    puVar20 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar16 = *puVar20;
    iStack_178 = 0;
    local_160 = 0;
    while (uVar16 == 0) {
      iStack_178 = iStack_178 + 1;
      local_160 = local_160 + 0x20;
      iStack_164 = iVar4;
      if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iStack_178) goto LAB_1494883b0;
      uVar16 = puVar20[iStack_178];
    }
    uStack_174 = ~(uVar16 - 1) & uVar16;
    uVar3 = (ulonglong)uStack_174 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_198 = (int)lVar15;
    iStack_164 = local_198 + -1 + local_160;
    if (iVar4 < iStack_164) {
      iStack_164 = iVar4;
    }
  }
LAB_1494883b0:
  uStack_15c = local_104;
  iStack_158 = *(int *)&(this->OwnedComponents).Elements.field_0x8 -
               *(int *)&(this->OwnedComponents).Elements.field_0x34;
  uVar16 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uStack_168 = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar21 = uVar16 & 0xffffffe0;
  TStack_148.CurrentBitIndex = iStack_164;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_148._28_4_ = local_104;
  TStack_148.BaseBitIndex = local_160;
  uStack_128 = CONCAT44(uStack_154,iStack_158);
  local_180 = local_190;
  local_170 = puVar1;
  local_150 = local_190;
  TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = local_190;
  uVar5 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar16 != uVar5) {
    puVar7 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar19 = puVar1;
    if (puVar7 != (undefined1 *)0x0) {
      puVar19 = puVar7;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar16 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar17) goto LAB_1494884c0;
      uVar16 = *(uint *)(puVar19 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(~(uVar16 - 1) & uVar16) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_194 = (int)lVar15;
    uVar16 = local_194 + -1 + uVar21;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_1494884c0:
  do {
    pTVar12 = local_150;
    if (*(int *)&(local_150->Elements).field_0x8 - *(int *)&(local_150->Elements).field_0x34 !=
        (int)uStack_128) {
      local_1a8 = 0;
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1a8);
    }
    iVar4 = local_38;
    <Var10.OutComponents = local_res18.OutComponents;
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == pTVar11)) {
      FVar18 = (ForElementType<AActor_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FVar18 = local_100.SecondaryData;
      }
      FVar2 = (ForElementType<AActor_*>)((longlong)FVar18 + (longlong)local_38 * 8);
      while( true ) {
        if (local_38 != iVar4) {
          `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1a7);
        }
        if (FVar18 == FVar2) break;
        local_188 = *(UObject **)param_1.Class.field0_0x0;
        this_00 = *(AActor **)FVar18;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_188 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_188);
        }
        ForEachComponent_Internal<UWN_VolumeComponent,0,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_00,(TSubclassOf<UActorComponent>)&local_188,<Var10);
        FVar18 = (ForElementType<AActor_*>)((longlong)FVar18 + 8);
      }
      if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
        FMemory::Free((void *)local_100.SecondaryData);
      }
      return;
    }
    pUVar8 = *(UWN_VolumeComponent **)
              (*(longlong *)&pTVar12->Elements + (longlong)TStack_148.CurrentBitIndex * 0x10);
    if (pUVar8 != (UWN_VolumeComponent *)0x0) {
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        `AActor::
        GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>'
        ::__l2::<lambda_1>::operator()(&local_res18,pUVar8);
      }
      pUVar14 = Z_Construct_UClass_UChildActorComponent_NoRegister();
      iVar4 = (int)pUVar14->_padding_;
      if (((iVar4 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
           &pUVar14->_padding_)) && (local_1a0 = pUVar8->_padding_, local_1a0 != 0)) {
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        if ((ulonglong)FVar18 <= &local_1a0) {
          FVar18 = (ForElementType<AActor_*>)&local_100;
          if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
            FVar18 = local_100.SecondaryData;
          }
          if (&local_1a0 < (longlong *)((longlong)FVar18 + (longlong)local_34 * 8)) {
            local_1c0 = (longlong)local_38;
            local_1b8 = 8;
            local_1d8 = &local_1a0;
            local_1d0 = (ForElementType<AActor_*>)&local_100;
            if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
              local_1d0 = local_100.SecondaryData;
            }
            local_1c8 = (longlong)local_34;
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar13) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_38 == local_34) {
          local_38 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<AActor_*>_>
                               (0x808,&local_100,&local_34);
        }
        lVar15 = (longlong)local_38;
        FVar18 = (ForElementType<AActor_*>)&local_100;
        if (local_100.SecondaryData != (ForElementType<AActor_*>)0x0) {
          FVar18 = local_100.SecondaryData;
        }
        local_38 = local_38 + 1;
        *(longlong *)((longlong)FVar18 + lVar15 * 8) = local_1a0;
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// ForEachComponent_Internal<UWN_VolumeComponent,0,0,`AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>_> @ 149488750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
AActor::
ForEachComponent_Internal<UWN_VolumeComponent,0,0,_AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
          (AActor *this,TSubclassOf<UActorComponent> param_1,<lambda_1> param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  UWN_VolumeComponent *pUVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  TArray<UWN_VolumeComponent_*,TSizedDefaultAllocator<32>_> *local_res18;
  int local_res20;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  local_res18 = param_2.OutComponents;
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar12 == (UClass *)0x0) {
    return;
  }
  iVar3 = (int)pUVar12->_padding_;
  if ((*(int *)(lVar4 + 0x38) < iVar3) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
      &pUVar12->_padding_)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (!bVar9) {
    return;
  }
  lVar4 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar4 == 0) {
    return;
  }
  pUVar12 = UWN_VolumeComponent::StaticClass();
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) goto LAB_14948882e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("ComponentClass->IsChildOf(ComponentType::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\GameFramework\\Actor.h"
                     ,0xf1d,L"");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14948882e:
  iVar14 = 0;
  iVar3 = *(int *)&(this->OwnedComponents).Elements.field_0x28;
  puVar2 = &(this->OwnedComponents).Elements.field_0x10;
  uVar10 = 1;
  iVar16 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->OwnedComponents).Elements.field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      iVar16 = iVar16 + 0x20;
      iVar11 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iVar14) goto LAB_1494888bf;
      uVar13 = puVar17[iVar14];
    }
    uVar10 = ~(uVar13 - 1) & uVar13;
    uVar1 = (ulonglong)uVar10 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7;
    iVar11 = local_res20 + -1 + iVar16;
    if (iVar3 < iVar11) {
      iVar11 = iVar3;
    }
  }
LAB_1494888bf:
  uVar13 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar10,iVar14);
  TStack_60.CurrentBitIndex = iVar11;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = local_9c;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->OwnedComponents).Elements.field_0x8 -
                       *(int *)&(this->OwnedComponents).Elements.field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(this->OwnedComponents).Elements.field_0x28;
  if (uVar13 != uVar10) {
    puVar5 = *(undefined1 **)&(this->OwnedComponents).Elements.field_0x20;
    puVar15 = puVar2;
    if (puVar5 != (undefined1 *)0x0) {
      puVar15 = puVar5;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      iVar14 = iVar14 + 1;
      uVar18 = uVar18 + 0x20;
      uVar13 = uVar10;
      if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar14)
      goto LAB_1494889d0;
      uVar13 = *(uint *)(puVar15 + (longlong)iVar14 * 4);
    }
    uVar1 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = (int)lVar7 + -1 + uVar18;
    if ((int)uVar10 < (int)uVar13) {
      uVar13 = uVar10;
    }
  }
LAB_1494889d0:
  while( true ) {
    if (*(int *)&(this->OwnedComponents).Elements.field_0x8 -
        *(int *)&(this->OwnedComponents).Elements.field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pUVar6 = *(UWN_VolumeComponent **)
              (*(longlong *)&(this->OwnedComponents).Elements +
              (longlong)TStack_60.CurrentBitIndex * 0x10);
    if (pUVar6 != (UWN_VolumeComponent *)0x0) {
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(pUVar6->_padding_ + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        `AActor::GetComponents<UWN_VolumeComponent,TSizedDefaultAllocator<32>_>'::__l2::<lambda_1>::
        operator()(&local_res18,pUVar6);
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// InternalConstructor<AWN_AmbientSoundVolume> @ 149488b70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_AmbientSoundVolume>(FObjectInitializer *param_1)

{
  FLinearColor_u_0 *pFVar1;
  AActor *this;
  FName FVar2;
  USceneComponent *pUVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  FName *pFVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FLinearColor_u_0 *pFVar10;
  FName local_res8;
  FLinearColor_u_0 local_18;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
    this[1]._padding_ = 0;
    pFVar7 = FName::FName(&local_res8,L"VolumeComponent");
    FVar2 = *pFVar7;
    pUVar8 = UWN_AmbientSoundVolumeComponent::StaticClass();
    pUVar9 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar8,pUVar8,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar9 == (UObject *)0x0)) {
      this[1]._padding_ = (longlong)pUVar9;
      if (pUVar9 == (UObject *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable(pUVar9);
      this[1]._padding_ = (longlong)pUVar9;
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    pUVar3 = (USceneComponent *)this[1]._padding_;
    (this->RootComponent).field0_0x0.DebugPtr = pUVar3;
    pcVar4 = *(code **)(pUVar3->_padding_ + 0x788);
    pFVar7 = FName::FName(&local_res8,"NoCollision");
    (*pcVar4)(pUVar3,*pFVar7,1);
    (**(code **)(*(longlong *)this[1]._padding_ + 0x5f8))((longlong *)this[1]._padding_,0);
    lVar5 = this[1]._padding_;
    pFVar1 = (FLinearColor_u_0 *)(lVar5 + 0x570);
    (pFVar1->_s_0).R = 1.1;
    *(undefined4 *)(lVar5 + 0x574) = 0x3f000000;
    *(undefined4 *)(lVar5 + 0x578) = 0x3f000000;
    *(undefined4 *)(lVar5 + 0x57c) = 0x3dcccccd;
    pFVar10 = &local_18;
    if (*(char *)(lVar5 + 0x583) != '\0') {
      pFVar10 = pFVar1;
    }
    local_18 = FLinearColor::Red.field0_0x0;
    uVar6 = *(undefined8 *)((longlong)pFVar10 + 8);
    *(undefined8 *)pFVar1 = *(undefined8 *)pFVar10;
    *(undefined8 *)(lVar5 + 0x578) = uVar6;
  }
  return;
}

// InternalConstructor<AWN_BindlessISM_Test> @ 149488cd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_BindlessISM_Test>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UStaticMesh *pUVar6;
  FName local_res8;
  FString local_38;
  FGCObject local_28;
  UStaticMesh *local_18;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xf9;
    this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,"BindlessISMComponent");
    FVar2 = *pFVar3;
    pUVar4 = UWN_BindlessISMComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    local_28._padding_ = (longlong)&___7FGCObject__6B_;
    local_28.bCanMakeInitialReferences = false;
    local_28.bReferenceAdded = false;
    FGCObject::RegisterGCObject(&local_28);
    local_18 = (UStaticMesh *)0x0;
    local_28._padding_ = (longlong)&___7__FObjectFinder_VUStaticMesh___ConstructorHelpers__6B_;
    ConstructorHelpers::CheckIfIsInConstructor(L"/Engine/EngineMeshes/Sphere.Sphere");
    FString::FString(&local_38,L"/Engine/EngineMeshes/Sphere.Sphere");
    ConstructorHelpers::StripObjectClass(&local_38,true);
    pUVar6 = ConstructorHelpersInternal::FindOrLoadObject<UStaticMesh>(&local_38,0);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UStaticMesh *)0x0)) {
      local_18 = pUVar6;
      if (pUVar6 == (UStaticMesh *)0x0) {
        ConstructorHelpers::FailedToFind(L"/Engine/EngineMeshes/Sphere.Sphere");
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
      local_18 = pUVar6;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18 != (UStaticMesh *)0x0) {
      (**(code **)(*(longlong *)this[1]._padding_ + 0xb28))((longlong *)this[1]._padding_,local_18);
    }
    AActor::SetRootComponent(this,(USceneComponent *)this[1]._padding_);
    local_28._padding_ = (longlong)&___7FGCObject__6B_;
    FGCObject::UnregisterGCObject(&local_28);
  }
  return;
}

// InternalConstructor<AWN_GSS_CineCameraActor> @ 149488e80

void __cdecl InternalConstructor<AWN_GSS_CineCameraActor>(FObjectInitializer *param_1)

{
  longlong *plVar1;
  ACineCameraActor *this;
  bool bVar2;
  FString *pFVar3;
  FDateTime FStackX_8;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  this = (ACineCameraActor *)param_1->Obj;
  if (this != (ACineCameraActor *)0x0) {
    ACineCameraActor::ACineCameraActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
    plVar1 = &this[1]._padding_;
    *plVar1 = 0;
    this[1]._padding_ = 0;
    FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_38.Data.ArrayNum = 0;
    FStack_38.Data.ArrayMax = 0;
    pFVar3 = FPaths::ProjectDir(&FStack_18);
    if (&FStack_38 != pFVar3) {
      if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
      }
      FStack_38.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FStack_38.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      FStack_38.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    bVar2 = FString::EndsWith(&FStack_38,L"/",1,IgnoreCase);
    if (!bVar2) {
      FString::AppendChars(&FStack_38,L"/",1);
    }
    FDateTime::Now();
    FDateTime::ToString(&FStackX_8,&FStack_18,L"%Y_%H_%M_%S");
    FString::PrintfImpl(&FStack_28,L"%sSaved/GSS/%s/");
    if ((FString *)plVar1 != &FStack_28) {
      if ((void *)*plVar1 != (void *)0x0) {
        FMemory::Free((void *)*plVar1);
      }
      *plVar1 = (longlong)FStack_28.Data.AllocatorInstance.Data;
      *(int *)&this[1]._padding_ = FStack_28.Data.ArrayNum;
      *(int *)((longlong)&this[1]._padding_ + 4) = FStack_28.Data.ArrayMax;
      FStack_28.Data.ArrayNum = 0;
      FStack_28.Data.ArrayMax = 0;
      FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// InternalConstructor<AWN_ISM_Test> @ 149488e90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_ISM_Test>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xf9;
    this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,"RootComponent");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
    pUVar5 = (USceneComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    AActor::SetRootComponent(this,pUVar5);
  }
  return;
}

// InternalConstructor<AWN_Prefab> @ 149488f30

void __cdecl InternalConstructor<AWN_Prefab>(FObjectInitializer *param_1)

{
  if ((AWN_Prefab *)param_1->Obj != (AWN_Prefab *)0x0) {
    AWN_Prefab::AWN_Prefab((AWN_Prefab *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<AWN_PrefabStamp> @ 149488f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_PrefabStamp>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
  }
  return;
}

// InternalConstructor<AWN_Volume> @ 149488fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AWN_Volume>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_Volume__6B_;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UWN_AmbientSoundVolumeComponent> @ 149489010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_AmbientSoundVolumeComponent>(FObjectInitializer *param_1)

{
  UWN_VolumeComponent *this;
  
  this = (UWN_VolumeComponent *)param_1->Obj;
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IPhysicsComponent__
    ;
    this[1]._padding_ = (longlong)&___7UWN_AmbientSoundVolumeComponent__6B_;
    FWN_AmbientSoundInfo::FWN_AmbientSoundInfo((FWN_AmbientSoundInfo *)&this[1]._padding_);
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    return;
  }
  return;
}

// InternalConstructor<UWN_BindlessISMComponent> @ 1494890b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_BindlessISMComponent>(FObjectInitializer *param_1)

{
  UInstancedStaticMeshComponent *this;
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  
  this = (UInstancedStaticMeshComponent *)param_1->Obj;
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UWN_BindlessISMComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_BindlessISMComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UWN_BindlessISMComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pFVar2 = FName::FName(&local_res8,"BindlessTextureCollection");
    FVar1 = *pFVar2;
    pUVar3 = UWN_TextureCollection::StaticClass();
    pUVar4 = UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
    this[1]._padding_ = (longlong)pUVar4;
  }
  return;
}

// InternalConstructor<UWN_CommonBlueprintLibrary> @ 1494891e0

void __cdecl InternalConstructor<UWN_CommonBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UWN_CommonBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UWN_CommonSubsystem> @ 149489210

void __cdecl InternalConstructor<UWN_CommonSubsystem>(FObjectInitializer *param_1)

{
  UTickableWorldSubsystem *this;
  
  this = (UTickableWorldSubsystem *)param_1->Obj;
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this);
    this->_padding_ = (longlong)&UWN_CommonSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_CommonSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3].bInitialized = 0xffffffff;
    *(undefined4 *)&this[3].field_0x44 = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0x400;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    FWN_UniqueIndexAllocator::TryResize((FWN_UniqueIndexAllocator *)&this[4]._padding_);
    *(undefined8 *)&this[4].bInitialized = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].bInitialized = 0;
  }
  return;
}

// InternalConstructor<UWN_NiagaraTODDataInterface> @ 149489380

void __cdecl InternalConstructor<UWN_NiagaraTODDataInterface>(FObjectInitializer *param_1)

{
  UNiagaraDataInterface *this;
  
  this = (UNiagaraDataInterface *)param_1->Obj;
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UWN_NiagaraTODDataInterface__6B_;
  }
  return;
}

// InternalConstructor<UWN_PakDownloader> @ 1494893b0

void __cdecl InternalConstructor<UWN_PakDownloader>(FObjectInitializer *param_1)

{
  if ((UWN_PakDownloader *)param_1->Obj != (UWN_PakDownloader *)0x0) {
    UWN_PakDownloader::UWN_PakDownloader((UWN_PakDownloader *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWN_PrefabComponent> @ 1494893d0

void __cdecl InternalConstructor<UWN_PrefabComponent>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UWN_PrefabComponent__6B_;
  }
  return;
}

// InternalConstructor<UWN_Prefab_AudioComponent> @ 149489400

void __cdecl InternalConstructor<UWN_Prefab_AudioComponent>(FObjectInitializer *param_1)

{
  UAudioComponent *this;
  
  this = (UAudioComponent *)param_1->Obj;
  if (this != (UAudioComponent *)0x0) {
    UAudioComponent::UAudioComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_AudioComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_AudioComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_AudioComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_Prefab_AudioComponent::_vftable__for__UAudioComponent__;
    *(undefined ***)&this->field_0x258 =
         &UWN_Prefab_AudioComponent::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&this->field_0x260 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&this->field_0x268 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&this->field_0x270 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined ***)&this->field_0xd38 =
         &UWN_Prefab_AudioComponent::_vftable__for__IWN_PrefabComponent__;
  }
  return;
}

// InternalConstructor<UWN_Prefab_DecalComponent> @ 1494894a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_DecalComponent>(FObjectInitializer *param_1)

{
  UDecalComponent *this;
  
  this = (UDecalComponent *)param_1->Obj;
  if (this != (UDecalComponent *)0x0) {
    UDecalComponent::UDecalComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_DecalComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_DecalComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_DecalComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x2b8 = &___7UWN_Prefab_DecalComponent__6B_;
  }
  return;
}

// InternalConstructor<UWN_Prefab_NiagaraComponent> @ 149489500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_NiagaraComponent>(FObjectInitializer *param_1)

{
  UNiagaraComponent *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (UNiagaraComponent *)param_1->Obj;
  if (this != (UNiagaraComponent *)0x0) {
    UNiagaraComponent::UNiagaraComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_NiagaraComponent__6B_;
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    pFVar1 = FName::FName(local_res8,"NoCollision");
    UPrimitiveComponent::SetCollisionProfileName((UPrimitiveComponent *)this,*pFVar1,true);
  }
  return;
}

// InternalConstructor<UWN_Prefab_PointLightComponent> @ 1494895b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_PointLightComponent>(FObjectInitializer *param_1)

{
  UPointLightComponent *this;
  
  this = (UPointLightComponent *)param_1->Obj;
  if (this != (UPointLightComponent *)0x0) {
    UPointLightComponent::UPointLightComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_PointLightComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_PointLightComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_PointLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x3f8 = &___7UWN_Prefab_PointLightComponent__6B_;
    this->field_0x42 = this->field_0x42 & 0xf9;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
      *(undefined4 *)&this->field_0x29c = 0x44fa0000;
    }
  }
  return;
}

// InternalConstructor<UWN_Prefab_RectLightComponent> @ 149489640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_RectLightComponent>(FObjectInitializer *param_1)

{
  URectLightComponent *this;
  
  this = (URectLightComponent *)param_1->Obj;
  if (this != (URectLightComponent *)0x0) {
    URectLightComponent::URectLightComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_RectLightComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_RectLightComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_RectLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x418 = &___7UWN_Prefab_RectLightComponent__6B_;
    this->field_0x42 = this->field_0x42 & 0xf9;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
      *(undefined4 *)&this->field_0x29c = 0x44fa0000;
    }
  }
  return;
}

// InternalConstructor<UWN_Prefab_SpotLightComponent> @ 1494896d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_SpotLightComponent>(FObjectInitializer *param_1)

{
  USpotLightComponent *this;
  
  this = (USpotLightComponent *)param_1->Obj;
  if (this != (USpotLightComponent *)0x0) {
    USpotLightComponent::USpotLightComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_SpotLightComponent__6B_;
    *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf9;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    if ((this->_padding_ & 0x30) != 0) {
      *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x44fa0000;
    }
  }
  return;
}

// InternalConstructor<UWN_Prefab_StaticMeshComponent> @ 149489760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_Prefab_StaticMeshComponent>(FObjectInitializer *param_1)

{
  UStaticMeshComponent *this;
  FName *pFVar1;
  FName local_res8 [4];
  
  this = (UStaticMeshComponent *)param_1->Obj;
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_StaticMeshComponent__6B_;
    *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf9;
    FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
    UPrimitiveComponent::SetCollisionObjectType((UPrimitiveComponent *)this,ECC_WorldStatic);
    USceneComponent::SetMobility((USceneComponent *)this,Static);
    pFVar1 = FName::FName(local_res8,"BlockAll");
    UStaticMeshComponent::SetCollisionProfileName(this,*pFVar1,true);
    if ((this->_padding_ & 0x30) != 0) {
      this->WorldPositionOffsetDisableDistance = 0xc80;
    }
  }
  return;
}

// InternalConstructor<UWN_TextureCollection> @ 149489840

void __cdecl InternalConstructor<UWN_TextureCollection>(FObjectInitializer *param_1)

{
  UTextureCollection *this;
  
  this = (UTextureCollection *)param_1->Obj;
  if (this != (UTextureCollection *)0x0) {
    UTextureCollection::UTextureCollection(this,param_1);
    this->_padding_ = (longlong)&___7UWN_TextureCollection__6B_;
  }
  return;
}

// InternalConstructor<UWN_VariantObjectReferencer> @ 149489870

void __cdecl InternalConstructor<UWN_VariantObjectReferencer>(FObjectInitializer *param_1)

{
  int *piVar1;
  int *piVar2;
  UWN_VariantObjectReferencer *this;
  code *pcVar3;
  UWN_VariantObjectReferencer *pUVar4;
  bool bVar5;
  
  this = (UWN_VariantObjectReferencer *)param_1->Obj;
  pUVar4 = FWN_VariantItemBase::ObjectReferencer;
  if (this != (UWN_VariantObjectReferencer *)0x0) {
    UObject::UObject((UObject *)this);
    this->_padding_ = (longlong)&___7UWN_VariantObjectReferencer__6B_;
    piVar1 = &(this->References).ArrayMax;
    piVar2 = &(this->FreedIndices).ArrayMax;
    (this->References).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->References).ArrayNum = 0;
    *piVar1 = 0;
    (this->FreedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->FreedIndices).ArrayNum = 0;
    *piVar2 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
    pUVar4 = FWN_VariantItemBase::ObjectReferencer;
    if ((this->_padding_ & 0x10) == 0) {
      if (*piVar1 < 0x2000) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0x2000,&(this->References).AllocatorInstance,(this->References).ArrayNum,
                   piVar1);
      }
      if (*piVar2 < 0x400) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x400,&(this->FreedIndices).AllocatorInstance,(this->FreedIndices).ArrayNum,
                   piVar2);
      }
      pUVar4 = this;
      if ((FWN_VariantItemBase::ObjectReferencer != (UWN_VariantObjectReferencer *)0x0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("FWN_VariantItemBase::ObjectReferencer == nullptr",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_Common\\Source\\WN_Common\\Private\\WN_Variant.cpp"
                             ,0x14,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FWN_VariantItemBase::ObjectReferencer = pUVar4;
  return;
}

// InternalConstructor<UWN_VolumeComponent> @ 149489990

void __cdecl InternalConstructor<UWN_VolumeComponent>(FObjectInitializer *param_1)

{
  if ((UWN_VolumeComponent *)param_1->Obj != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UWN_VolumeContext> @ 1494899b0

void __cdecl InternalConstructor<UWN_VolumeContext>(FObjectInitializer *param_1)

{
  UObject *this;
  undefined8 uVar1;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UWN_VolumeContext__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(this + 3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[3].field_0x8 = uVar1;
    *(double *)&this[3].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// InternalConstructor<UWN_VolumeFaceComponent> @ 149489a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_VolumeFaceComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPrimitiveComponent::UPrimitiveComponent(this,pFVar1);
    *(undefined ***)this = &UWN_VolumeFaceComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_VolumeFaceComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_VolumeFaceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_VolumeFaceComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UWN_VolumeFaceComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UWN_VolumeFaceComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)&this->field_0x548 = 0;
  }
  return;
}

// InternalConstructor<UWN_VolumeWireComponent> @ 149489ab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UWN_VolumeWireComponent>(FObjectInitializer *param_1)

{
  UPrimitiveComponent *this;
  FObjectInitializer *pFVar1;
  
  this = (UPrimitiveComponent *)param_1->Obj;
  if (this != (UPrimitiveComponent *)0x0) {
    pFVar1 = FObjectInitializer::Get();
    UPrimitiveComponent::UPrimitiveComponent(this,pFVar1);
    *(undefined ***)this = &UWN_VolumeWireComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_VolumeWireComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_VolumeWireComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_VolumeWireComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UWN_VolumeWireComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UWN_VolumeWireComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)&this->field_0x548 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AWN_AmbientSoundVolume> @ 149489b30

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_AmbientSoundVolume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_AmbientSoundVolume::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_BindlessISM_Test> @ 149489bf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_BindlessISM_Test>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_BindlessISM_Test::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_GSS_CineCameraActor> @ 149489cb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_GSS_CineCameraActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ACineCameraActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_GSS_CineCameraActor::GetPrivateStaticClass();
  this = (ACineCameraActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ACineCameraActor *)0x0) {
    ACineCameraActor::ACineCameraActor(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_ISM_Test> @ 149489d80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_ISM_Test>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_ISM_Test::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_Prefab> @ 149489e50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_Prefab>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_Prefab::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_Prefab__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_PrefabStamp> @ 149489f00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_PrefabStamp>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_PrefabStamp::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1].PrimaryActorTick._padding_ + 4) = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    *(undefined4 *)&this[1].PrimaryActorTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AWN_Volume> @ 149489ff0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AWN_Volume>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AWN_Volume::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AWN_Volume__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_AmbientSoundVolumeComponent> @ 14948a0b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_AmbientSoundVolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_AmbientSoundVolumeComponent::GetPrivateStaticClass();
  this = (UWN_VolumeComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UWN_VolumeComponent *)0x0) {
    UWN_VolumeComponent::UWN_VolumeComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_AmbientSoundVolumeComponent::_vftable__for__IPhysicsComponent__
    ;
    this[1]._padding_ = (longlong)&___7UWN_AmbientSoundVolumeComponent__6B_;
    FWN_AmbientSoundInfo::FWN_AmbientSoundInfo((FWN_AmbientSoundInfo *)&this[1]._padding_);
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_BindlessISMComponent> @ 14948a1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_BindlessISMComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UInstancedStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_BindlessISMComponent::GetPrivateStaticClass();
  this = (UInstancedStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInstancedStaticMeshComponent *)0x0) {
    UInstancedStaticMeshComponent::UInstancedStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UWN_BindlessISMComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_BindlessISMComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_BindlessISMComponent::_vftable__for__IPhysicsComponent__;
    this->_padding_ = (longlong)&___7UWN_BindlessISMComponent__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    FUtf8String::Reset((FUtf8String *)&this[1]._padding_,0);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CommonBlueprintLibrary> @ 14948a320

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CommonBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CommonBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_CommonBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_CommonSubsystem> @ 14948a3d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_CommonSubsystem>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_CommonSubsystem::GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&UWN_CommonSubsystem::_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&UWN_CommonSubsystem::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 2;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3].bInitialized = 0xffffffff;
    *(undefined4 *)&this[3].field_0x44 = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0x400;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    FWN_UniqueIndexAllocator::TryResize((FWN_UniqueIndexAllocator *)&this[4]._padding_);
    *(undefined8 *)&this[4].bInitialized = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5].bInitialized = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_NiagaraTODDataInterface> @ 14948a5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_NiagaraTODDataInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraDataInterface *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_NiagaraTODDataInterface::GetPrivateStaticClass();
  this = (UNiagaraDataInterface *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraDataInterface *)0x0) {
    UNiagaraDataInterface::UNiagaraDataInterface(this,param_1);
    this->_padding_ = (longlong)&___7UWN_NiagaraTODDataInterface__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_PakDownloader> @ 14948a660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_PakDownloader>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_PakDownloader *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_PakDownloader::GetPrivateStaticClass();
  pUVar3 = (UWN_PakDownloader *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWN_PakDownloader *)0x0) {
    pUVar3 = UWN_PakDownloader::UWN_PakDownloader(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_PrefabComponent> @ 14948a700

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_PrefabComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_PrefabComponent::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_PrefabComponent__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_AudioComponent> @ 14948a7b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_Prefab_AudioComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAudioComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_AudioComponent::GetPrivateStaticClass();
  this = (UAudioComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAudioComponent *)0x0) {
    UAudioComponent::UAudioComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_AudioComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_AudioComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_AudioComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_Prefab_AudioComponent::_vftable__for__UAudioComponent__;
    *(undefined ***)&this->field_0x258 =
         &UWN_Prefab_AudioComponent::
          _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
    ;
    *(undefined ***)&this->field_0x260 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__IMetronomeEventListener__;
    *(undefined ***)&this->field_0x268 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__ICommandListener__;
    *(undefined ***)&this->field_0x270 =
         &UWN_Prefab_AudioComponent::_vftable__for__Audio__Quartz__IQueueCommandListener__;
    *(undefined ***)&this->field_0xd38 =
         &UWN_Prefab_AudioComponent::_vftable__for__IWN_PrefabComponent__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_DecalComponent> @ 14948a8d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_Prefab_DecalComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDecalComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_DecalComponent::GetPrivateStaticClass();
  this = (UDecalComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDecalComponent *)0x0) {
    UDecalComponent::UDecalComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_DecalComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_DecalComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_DecalComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x2b8 = &___7UWN_Prefab_DecalComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_NiagaraComponent> @ 14948a9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_Prefab_NiagaraComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UNiagaraComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_NiagaraComponent::GetPrivateStaticClass();
  this = (UNiagaraComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UNiagaraComponent *)0x0) {
    UNiagaraComponent::UNiagaraComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__INavRelevantInterface__
    ;
    this->_padding_ =
         (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_Prefab_NiagaraComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_NiagaraComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_PointLightComponent> @ 14948aaa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_Prefab_PointLightComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPointLightComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_PointLightComponent::GetPrivateStaticClass();
  this = (UPointLightComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPointLightComponent *)0x0) {
    UPointLightComponent::UPointLightComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_PointLightComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_PointLightComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_PointLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x3f8 = &___7UWN_Prefab_PointLightComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_RectLightComponent> @ 14948ab70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_Prefab_RectLightComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  URectLightComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_RectLightComponent::GetPrivateStaticClass();
  this = (URectLightComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (URectLightComponent *)0x0) {
    URectLightComponent::URectLightComponent(this,param_1);
    *(undefined ***)this = &UWN_Prefab_RectLightComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_Prefab_RectLightComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_Prefab_RectLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x418 = &___7UWN_Prefab_RectLightComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_SpotLightComponent> @ 14948ac40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_Prefab_SpotLightComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USpotLightComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_SpotLightComponent::GetPrivateStaticClass();
  this = (USpotLightComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USpotLightComponent *)0x0) {
    USpotLightComponent::USpotLightComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_SpotLightComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_SpotLightComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent> @ 14948ad10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UStaticMeshComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_Prefab_StaticMeshComponent::GetPrivateStaticClass();
  this = (UStaticMeshComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UStaticMeshComponent *)0x0) {
    UStaticMeshComponent::UStaticMeshComponent(this,param_1);
    this->_padding_ = (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__INavRelevantInterface__;
    this->_padding_ =
         (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IInterface_AsyncCompilation__;
    this->_padding_ = (longlong)&UWN_Prefab_StaticMeshComponent::_vftable__for__IPhysicsComponent__;
    this[1]._padding_ = (longlong)&___7UWN_Prefab_StaticMeshComponent__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_TextureCollection> @ 14948ae10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_TextureCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTextureCollection *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_TextureCollection::GetPrivateStaticClass();
  this = (UTextureCollection *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTextureCollection *)0x0) {
    UTextureCollection::UTextureCollection(this,param_1);
    this->_padding_ = (longlong)&___7UWN_TextureCollection__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_VariantObjectReferencer> @ 14948aec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UWN_VariantObjectReferencer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_VariantObjectReferencer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UWN_VariantObjectReferencer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pUVar1[1].field_0x20,4000);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_VolumeComponent> @ 14948af90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_VolumeComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UWN_VolumeComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_VolumeComponent::GetPrivateStaticClass();
  pUVar3 = (UWN_VolumeComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UWN_VolumeComponent *)0x0) {
    pUVar3 = UWN_VolumeComponent::UWN_VolumeComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_VolumeContext> @ 14948b030

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_VolumeContext>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UWN_VolumeContext::GetPrivateStaticClass();
  pUVar2 = StaticAllocateObject
                     (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar2 != (UObject *)0x0) {
    UObject::UObject(pUVar2,param_1);
    *(undefined ***)pUVar2 = &___7UWN_VolumeContext__6B_;
    *(undefined8 *)(pUVar2 + 1) = 0;
    *(undefined8 *)&pUVar2[1].field_0x8 = 0;
    *(undefined8 *)&pUVar2[1].field_0x20 = 0;
    *(undefined4 *)(pUVar2 + 2) = 0;
    *(undefined4 *)&pUVar2[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar2[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar2[2].field_0xc = 0;
    *(undefined8 *)&pUVar2[2].field_0x18 = 0;
    *(undefined4 *)&pUVar2[2].field_0x20 = 0;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)(pUVar2 + 3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&pUVar2[3].field_0x8 = uVar1;
    *(double *)&pUVar2[3].field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return pUVar2;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_VolumeFaceComponent> @ 14948b120

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

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_VolumeFaceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_VolumeFaceComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UWN_VolumeFaceComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_VolumeFaceComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_VolumeFaceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_VolumeFaceComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UWN_VolumeFaceComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UWN_VolumeFaceComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)&this->field_0x548 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UWN_VolumeWireComponent> @ 14948b220

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

UObject * __cdecl InternalVTableHelperCtorCaller<UWN_VolumeWireComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UPrimitiveComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UWN_VolumeWireComponent::GetPrivateStaticClass();
  this = (UPrimitiveComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPrimitiveComponent *)0x0) {
    UPrimitiveComponent::UPrimitiveComponent(this,param_1);
    *(undefined ***)this = &UWN_VolumeWireComponent::_vftable__for__UObject__;
    *(undefined ***)&this->field_0x28 =
         &UWN_VolumeWireComponent::_vftable__for__IInterface_AssetUserData__;
    *(undefined ***)&this->field_0x30 =
         &UWN_VolumeWireComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined ***)&this->field_0x250 =
         &UWN_VolumeWireComponent::_vftable__for__INavRelevantInterface__;
    *(undefined ***)&this->field_0x258 =
         &UWN_VolumeWireComponent::_vftable__for__IInterface_AsyncCompilation__;
    *(undefined ***)&this->field_0x260 =
         &UWN_VolumeWireComponent::_vftable__for__IPhysicsComponent__;
    *(undefined8 *)&this->field_0x548 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// NewObject<UWN_VariantObjectReferencer> @ 14948b320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_VariantObjectReferencer * __cdecl NewObject<UWN_VariantObjectReferencer>(UObject *param_1)

{
  UClass *pUVar1;
  UWN_VariantObjectReferencer *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWN_VariantObjectReferencer::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWN_VariantObjectReferencer *)
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

// NewObject<UWN_VolumeContext> @ 14948b3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_VolumeContext * __cdecl NewObject<UWN_VolumeContext>(UObject *param_1)

{
  UClass *pUVar1;
  UWN_VolumeContext *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UWN_VolumeContext::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UWN_VolumeContext *)
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

// NewObject<UWN_VolumeFaceComponent> @ 14948b460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_VolumeFaceComponent * __cdecl
NewObject<UWN_VolumeFaceComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWN_VolumeFaceComponent *pUVar2;
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
  pUVar1 = UWN_VolumeFaceComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWN_VolumeFaceComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UWN_VolumeWireComponent> @ 14948b550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UWN_VolumeWireComponent * __cdecl
NewObject<UWN_VolumeWireComponent>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UWN_VolumeWireComponent *pUVar2;
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
  pUVar1 = UWN_VolumeWireComponent::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UWN_VolumeWireComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// StaticEnum<enum_EWN_VolumeObserverMode> @ 14948b930

UEnum * __cdecl StaticEnum<enum_EWN_VolumeObserverMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_Common_EWN_VolumeObserverMode,(UObject *)pUVar1,
                       L"EWN_VolumeObserverMode");
  }
  return Z_Registration_Info_UEnum_EWN_VolumeObserverMode.OuterSingleton;
}

// StaticEnum<enum_EWN_VolumeShape> @ 14948b970

UEnum * __cdecl StaticEnum<enum_EWN_VolumeShape>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_Common();
    Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_WN_Common_EWN_VolumeShape,(UObject *)pUVar1,
                       L"EWN_VolumeShape");
  }
  return Z_Registration_Info_UEnum_EWN_VolumeShape.OuterSingleton;
}

// operator() @ 1494921d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_5>::operator()
          (<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UActorComponent *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  AActor *this_01;
  UClass *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  UClass *local_190;
  UClass *local_188;
  UClass *local_180;
  TActorIteratorBase<TActorIterator<AActor>_> local_178;
  FString local_118;
  undefined8 local_108 [24];
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (param_1->ArrayNum < 1) {
    if (2 < (byte)LogTemp._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  else {
    pFVar3 = (param_1->AllocatorInstance).Data;
    pwVar13 = L"";
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pFVar3;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar11,L"0");
    if (iVar6 != 0) {
      if (*(int *)(pFVar3 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)pFVar3;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(pwVar11,L"1");
      if (iVar6 != 0) {
        if ((byte)LogTemp._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        return;
      }
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = *(wchar_t **)pFVar3;
    }
    iVar6 = _wtoi(pwVar11);
    pUVar7 = Z_Construct_UClass_AActor_NoRegister();
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    local_178.Flags = OnlyActiveLevels|SkipPendingKill;
    local_178.State.bIsSet = false;
    local_190 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FActorIteratorState::FActorIteratorState
              (&local_178.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_190);
    local_178.State.bIsSet = true;
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_178);
    while( true ) {
      if ((local_178.State.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_178.State.TypedValue.ReachedEnd != false) break;
      if ((local_178.State.bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = FActorIteratorState::GetActorChecked(&local_178.State.TypedValue);
      if (this_01 == (AActor *)0x0) {
        pFVar10 = GetTypeName<AActor>(&local_118);
        if ((pFVar10->Data).ArrayNum != 0) {
          pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar13);
      }
      local_48 = (undefined8 *)0x0;
      local_3c = 0x18;
      local_40 = 0;
      pUVar7 = UWN_VolumeComponent::StaticClass();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UClass *)0x0) goto LAB_1494923ff;
LAB_149492430:
        pUVar8 = (UClass *)0x0;
      }
      else {
        if (pUVar7 == (UClass *)0x0) goto LAB_149492430;
        UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_1494923ff:
        pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
        if (pUVar8 == (UClass *)0x0) goto LAB_149492430;
        iVar2 = (int)pUVar8->_padding_;
        if (((int)pUVar7->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar8->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pUVar8 = pUVar7;
        if (!bVar5) goto LAB_149492430;
      }
      pUVar9 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar8 == pUVar9) {
        local_188 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        AActor::
        ForEachComponent_Internal<UWN_VolumeComponent,1,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_188,
                   (TArray<UWN_VolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_108);
      }
      else {
        local_180 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        AActor::
        ForEachComponent_Internal<UWN_VolumeComponent,0,1,_AActor::GetComponents<UWN_VolumeComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
                  (this_01,(TSubclassOf<UActorComponent>)&local_180,
                   (TArray<UWN_VolumeComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                    *)local_108);
      }
      iVar2 = local_40;
      puVar12 = local_108;
      if (local_48 != (undefined8 *)0x0) {
        puVar12 = local_48;
      }
      puVar1 = puVar12 + local_40;
      while( true ) {
        if (local_40 != iVar2) {
          local_198[0] = 0;
          `TCheckedPointerIterator<UWN_VolumeComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_198);
        }
        if (puVar12 == puVar1) break;
        this_00 = (UActorComponent *)*puVar12;
        if (this_00 != (UActorComponent *)0x0) {
          *(bool *)&this_00[7].PrimaryComponentTick._padding_ = iVar6 != 0;
          UActorComponent::MarkRenderStateDirty(this_00);
        }
        puVar12 = puVar12 + 1;
      }
      if (local_48 != (undefined8 *)0x0) {
        FMemory::Free(local_48);
      }
      TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_178);
    }
    if (local_178.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_178.State.TypedValue.CurrentWorld,
                 local_178.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_178.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// `vector_deleting_destructor'`adjustor{592}' @ 1494925a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AmbientSoundVolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AmbientSoundVolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4b0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 1494925b8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AmbientSoundVolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AmbientSoundVolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4a8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 1494925cc

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AmbientSoundVolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AmbientSoundVolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4a0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494925e0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AmbientSoundVolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AmbientSoundVolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AmbientSoundVolumeComponent *)&this[-1].AmbientSoundInfo.SoundFadeInTime,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1696}' @ 1494925f0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_AmbientSoundVolumeComponent::`vector deleting
   destructor'`adjustor{1696}' (unsigned int) __ptr64 */

void * __thiscall
UWN_AmbientSoundVolumeComponent::_vector_deleting_destructor__adjustor_1696__
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x60,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149492604

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BindlessISMComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BindlessISMComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_BindlessISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BindlessISMComponent *)&this[-1].field_0x820,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149492618

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BindlessISMComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BindlessISMComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_BindlessISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BindlessISMComponent *)&this[-1].field_0x818,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14949262c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BindlessISMComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BindlessISMComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_BindlessISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BindlessISMComponent *)&this[-1].field_0x810,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149492640

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BindlessISMComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BindlessISMComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_BindlessISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_BindlessISMComponent *)&this[-1].Bindless_MaterialInterfaces,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 149492650

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_BindlessISMComponent::`vector deleting
   destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UWN_BindlessISMComponent::_vector_deleting_destructor__adjustor_1616__
          (UWN_BindlessISMComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_BindlessISMComponent *)&this[-1].field_0x420,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{56}' @ 149492664

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_CommonSubsystem::`vector deleting
   destructor'`adjustor{56}' (unsigned int) __ptr64 */

void * __thiscall
UWN_CommonSubsystem::_vector_deleting_destructor__adjustor_56__
          (UWN_CommonSubsystem *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_CommonSubsystem *)&this[-1].PendingUnregisterVolumes.Elements.field_0x18,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149492674

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xaf0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149492688

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xae8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14949269c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xae0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{616}' @ 1494926b0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{616}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_616__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xad8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{624}' @ 1494926c4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{624}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_624__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xad0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494926d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0xd18,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{3384}' @ 1494926e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_AudioComponent::`vector deleting
   destructor'`adjustor{3384}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_AudioComponent::_vector_deleting_destructor__adjustor_3384__
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_AudioComponent *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494926fc

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_DecalComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_DecalComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_DecalComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_DecalComponent *)&this[-1].field_0x298,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{696}' @ 14949270c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_DecalComponent::`vector deleting
   destructor'`adjustor{696}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_DecalComponent::_vector_deleting_destructor__adjustor_696__
          (UWN_Prefab_DecalComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_DecalComponent *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149492720

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_NiagaraComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_NiagaraComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5c0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149492734

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_NiagaraComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_NiagaraComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5b8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149492748

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_NiagaraComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_NiagaraComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5b0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14949275c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_NiagaraComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_NiagaraComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x7e8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{2048}' @ 14949276c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_NiagaraComponent::`vector deleting
   destructor'`adjustor{2048}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_NiagaraComponent::_vector_deleting_destructor__adjustor_2048__
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x10,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149492780

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_PointLightComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_PointLightComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_PointLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_PointLightComponent *)&this[-1].field_0x3d8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1016}' @ 149492790

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_PointLightComponent::`vector deleting
   destructor'`adjustor{1016}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_PointLightComponent::_vector_deleting_destructor__adjustor_1016__
          (UWN_Prefab_PointLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_PointLightComponent *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494927a4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_RectLightComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_RectLightComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_RectLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_RectLightComponent *)&this[-1].field_0x3f8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1048}' @ 1494927b4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_RectLightComponent::`vector deleting
   destructor'`adjustor{1048}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_RectLightComponent::_vector_deleting_destructor__adjustor_1048__
          (UWN_Prefab_RectLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_RectLightComponent *)&this[-1].field_0x8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494927c8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_SpotLightComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_SpotLightComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_SpotLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_SpotLightComponent *)&this[-1].field_0x3e8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1024}' @ 1494927d8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_SpotLightComponent::`vector deleting
   destructor'`adjustor{1024}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_SpotLightComponent::_vector_deleting_destructor__adjustor_1024__
          (UWN_Prefab_SpotLightComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_SpotLightComponent *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 1494927ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_StaticMeshComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_StaticMeshComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x410,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149492800

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_StaticMeshComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_StaticMeshComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x408,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149492814

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_StaticMeshComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_StaticMeshComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x400,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149492828

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_StaticMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_StaticMeshComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x638,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{1616}' @ 149492838

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_Prefab_StaticMeshComponent::`vector deleting
   destructor'`adjustor{1616}' (unsigned int) __ptr64 */

void * __thiscall
UWN_Prefab_StaticMeshComponent::_vector_deleting_destructor__adjustor_1616__
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 14949284c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_VolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 149492860

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_VolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 149492874

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_VolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149492888

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_VolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UWN_VolumeComponent *)&this[-1].ObserverInfo.field_0x30,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 149492898

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeFaceComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeFaceComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_VolumeFaceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeFaceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 1494928ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeFaceComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeFaceComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_VolumeFaceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeFaceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 1494928c0

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeFaceComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeFaceComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_VolumeFaceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeFaceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1494928d4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeFaceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeFaceComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_VolumeFaceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeFaceComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{592}' @ 1494928e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeWireComponent::`vector deleting
   destructor'`adjustor{592}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeWireComponent::_vector_deleting_destructor__adjustor_592__
          (UWN_VolumeWireComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeWireComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{600}' @ 1494928f8

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeWireComponent::`vector deleting
   destructor'`adjustor{600}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeWireComponent::_vector_deleting_destructor__adjustor_600__
          (UWN_VolumeWireComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeWireComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{608}' @ 14949290c

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeWireComponent::`vector deleting
   destructor'`adjustor{608}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeWireComponent::_vector_deleting_destructor__adjustor_608__
          (UWN_VolumeWireComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeWireComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 149492920

/* [thunk]:public: virtual void * __ptr64 __cdecl UWN_VolumeWireComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UWN_VolumeWireComponent::_vector_deleting_destructor__adjustor_40__
          (UWN_VolumeWireComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UWN_VolumeWireComponent *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 149492930

void * __thiscall
ConstructorHelpers::FObjectFinder<UMaterial>::_scalar_deleting_destructor_
          (FObjectFinder<UMaterial> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492980

void * __thiscall
IBaseDelegateInstance<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494929b0

void * __thiscall
IBaseDelegateInstance<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494929e0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UWN_NiagaraTODDataInterface::GetVMExternalFunction'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492a10

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWN_AsyncCollision,void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWN_AsyncCollision,void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492a40

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWN_AsyncCollision,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWN_AsyncCollision,void___cdecl(FTraceHandle_const_&,FTraceDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492a70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWN_CurlHttpStream,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWN_CurlHttpStream,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492aa0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWN_CurlHttpStream,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWN_CurlHttpStream,void___cdecl(TSharedPtr<IHttpRequest,1>,unsigned___int64,unsigned___int64),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492ad0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWN_PakDownloader,void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWN_PakDownloader,void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492b00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UWN_PakDownloader,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UWN_PakDownloader,void___cdecl(TSharedPtr<IHttpRequest,1>,TSharedPtr<IHttpResponse,1>,bool),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492b30

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FTraceHandle_const_&,FOverlapDatum_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492b60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FWN_CurlHttpStream_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492b90

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_PakStreamDownloader,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FWN_PakStreamDownloader,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492bd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FWN_CurlHttpStream,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FWN_CurlHttpStream,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AWN_AmbientSoundVolume::_scalar_deleting_destructor_(AWN_AmbientSoundVolume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AWN_AmbientSoundVolume__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
AWN_BindlessISM_Test::_scalar_deleting_destructor_(AWN_BindlessISM_Test *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_BindlessISM_Test__6B_;
  DestructItems<FWN_TestInstanceSpawnInfo,int>
            ((FWN_TestInstanceSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492d00

void * __thiscall
AWN_GSS_CineCameraActor::_scalar_deleting_destructor_(AWN_GSS_CineCameraActor *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_GSS_CineCameraActor__6B_;
  pFVar1 = (this->BaseCapturingDirPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ACineCameraActor::~ACineCameraActor((ACineCameraActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_ISM_Test::_scalar_deleting_destructor_(AWN_ISM_Test *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AWN_ISM_Test__6B_;
  pFVar1 = (this->ISMComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_TestInstanceSpawnInfo,int>
            ((FWN_TestInstanceSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_Prefab::_scalar_deleting_destructor_(AWN_Prefab *this,uint param_1)

{
  *(undefined ***)this = &___7AWN_Prefab__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_PrefabStamp::_scalar_deleting_destructor_(AWN_PrefabStamp *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7AWN_PrefabStamp__6B_;
  (this->StampComps).HashSize = 0;
  FVar1 = (this->StampComps).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->StampComps).Elements);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x310);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492f20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AWN_Volume::_scalar_deleting_destructor_(AWN_Volume *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AWN_Volume__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492f80

void * __thiscall
FWN_AmbientSoundInfo::_scalar_deleting_destructor_(FWN_AmbientSoundInfo *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(this->AmbientSound).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149492fd0

void * __thiscall
FWN_VolumeFaceIndexBuffer::_scalar_deleting_destructor_
          (FWN_VolumeFaceIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493010

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
FWN_VolumeFaceSceneProxy::_scalar_deleting_destructor_(FWN_VolumeFaceSceneProxy *this,uint param_1)

{
  FStaticMeshVertexBuffers *this_00;
  
  this->_padding_ = (longlong)&___7FWN_VolumeFaceSceneProxy__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->FaceIndexBuffer)._padding_ + 0x20))(&this->FaceIndexBuffer);
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->FaceIndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493120

void * __thiscall
FWN_VolumeWireIndexBuffer::_scalar_deleting_destructor_
          (FWN_VolumeWireIndexBuffer *this,uint param_1)

{
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493160

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
FWN_VolumeWireSceneProxy::_scalar_deleting_destructor_(FWN_VolumeWireSceneProxy *this,uint param_1)

{
  FStaticMeshVertexBuffers *this_00;
  
  this->_padding_ = (longlong)&___7FWN_VolumeWireSceneProxy__6B_;
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  (**(code **)((this->WireIndexBuffer)._padding_ + 0x20))(&this->WireIndexBuffer);
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)&this->WireIndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493270

void * __thiscall
IWN_PrefabComponent::_scalar_deleting_destructor_(IWN_PrefabComponent *this,uint param_1)

{
  *this = (IWN_PrefabComponent)&___7IWN_PrefabComponent__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494932b0

void * __thiscall
UWN_AmbientSoundVolumeComponent::_scalar_deleting_destructor_
          (UWN_AmbientSoundVolumeComponent *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x6a0 = &___7UWN_AmbientSoundVolumeComponent__6B_;
  pvVar1 = *(void **)&(this->AmbientSoundInfo).AmbientSound.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->field_0x6a0 = &___7IWN_PrefabComponent__6B_;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x700);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
UWN_BindlessISMComponent::_scalar_deleting_destructor_(UWN_BindlessISMComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_BindlessISMComponent__6B_;
  pFVar1 = (this->Bindless_MaterialIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindless_MaterialInterfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bindless_TextureCollectionBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Bindless_BaseMaterial).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UInstancedStaticMeshComponent::~UInstancedStaticMeshComponent
            ((UInstancedStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xa70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493480

void * __thiscall
UWN_CommonBlueprintLibrary::_scalar_deleting_destructor_
          (UWN_CommonBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UWN_CommonBlueprintLibrary__6B_;
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

// `scalar_deleting_destructor' @ 1494934e0

void * __thiscall
UWN_CommonSubsystem::_scalar_deleting_destructor_(UWN_CommonSubsystem *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->PendingUnregisterVolumes).HashSize = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FVar1 = (this->PendingUnregisterVolumes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWN_VolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWN_VolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingUnregisterVolumes).Elements);
  pFVar2 = (this->VolumeIndexAllocator).FreedIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->EnteredVolumesPerMode).field_0x48 = 0;
  pvVar3 = *(void **)&(this->EnteredVolumesPerMode).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EWN_VolumeObserverMode,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EnteredVolumesPerMode);
  *(undefined4 *)&(this->AllVolumesPerType).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AllVolumesPerType).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TObjectPtr<UWN_VolumeContext>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllVolumesPerType);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnVolumeListChanged).field_0x8,*(int *)&(this->OnVolumeListChanged).field_0x10
            );
  pvVar3 = *(void **)&(this->OnVolumeListChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnVolumeListChanged);
  pvVar3 = *(void **)&(this->OnLeave).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLeave);
  pvVar3 = *(void **)&(this->OnEnter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEnter);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493640

void * __thiscall
UWN_NiagaraTODDataInterface::_scalar_deleting_destructor_
          (UWN_NiagaraTODDataInterface *this,uint param_1)

{
  *(undefined ***)this = &___7UWN_NiagaraTODDataInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494936a0

void * __thiscall
UWN_PakDownloader::_scalar_deleting_destructor_(UWN_PakDownloader *this,uint param_1)

{
  ~UWN_PakDownloader(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493700

void * __thiscall
UWN_PrefabComponent::_scalar_deleting_destructor_(UWN_PrefabComponent *this,uint param_1)

{
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

// `scalar_deleting_destructor' @ 149493760

void * __thiscall
UWN_Prefab_AudioComponent::_scalar_deleting_destructor_
          (UWN_Prefab_AudioComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__UAudioComponent__;
  *(undefined ***)&this->field_0x258 =
       &
       _vftable__for__Audio__Quartz__PrivateDefs__TVisitorPatternBase<Audio::Quartz::IMetronomeEventListener,Audio::Quartz::ICommandListener,Audio::Quartz::IQueueCommandListener>__IListenerBase__
  ;
  *(undefined ***)&this->field_0x260 = &_vftable__for__Audio__Quartz__IMetronomeEventListener__;
  *(undefined ***)&this->field_0x268 = &_vftable__for__Audio__Quartz__ICommandListener__;
  *(undefined ***)&this->field_0x270 = &_vftable__for__Audio__Quartz__IQueueCommandListener__;
  *(undefined ***)&this->field_0xd38 = &___7IWN_PrefabComponent__6B_;
  UAudioComponent::~UAudioComponent((UAudioComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UWN_Prefab_DecalComponent::_scalar_deleting_destructor_
          (UWN_Prefab_DecalComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x2b8 = &___7IWN_PrefabComponent__6B_;
  UDecalComponent::~UDecalComponent((UDecalComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1494938c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void * __thiscall
UWN_Prefab_NiagaraComponent::_scalar_deleting_destructor_
          (UWN_Prefab_NiagaraComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x800 = &___7IWN_PrefabComponent__6B_;
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x810);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493970

void * __thiscall
UWN_Prefab_PointLightComponent::_scalar_deleting_destructor_
          (UWN_Prefab_PointLightComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x3f8 = &___7IWN_PrefabComponent__6B_;
  UPointLightComponent::~UPointLightComponent((UPointLightComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493a00

void * __thiscall
UWN_Prefab_RectLightComponent::_scalar_deleting_destructor_
          (UWN_Prefab_RectLightComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x418 = &___7IWN_PrefabComponent__6B_;
  URectLightComponent::~URectLightComponent((URectLightComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x420);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493a90

void * __thiscall
UWN_Prefab_SpotLightComponent::_scalar_deleting_destructor_
          (UWN_Prefab_SpotLightComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x400 = &___7IWN_PrefabComponent__6B_;
  USpotLightComponent::~USpotLightComponent((USpotLightComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x410);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493b20

void * __thiscall
UWN_Prefab_StaticMeshComponent::_scalar_deleting_destructor_
          (UWN_Prefab_StaticMeshComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7IWN_PrefabComponent__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x660);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493bd0

void * __thiscall
UWN_TextureCollection::_scalar_deleting_destructor_(UWN_TextureCollection *this,uint param_1)

{
  *(undefined ***)this = &___7UWN_TextureCollection__6B_;
  UTextureCollection::~UTextureCollection((UTextureCollection *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493c30

void * __thiscall
UWN_VariantObjectReferencer::_scalar_deleting_destructor_
          (UWN_VariantObjectReferencer *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWN_VariantObjectReferencer__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  pFVar1 = (this->FreedIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->References).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493cc0

void * __thiscall
UWN_VolumeComponent::_scalar_deleting_destructor_(UWN_VolumeComponent *this,uint param_1)

{
  ~UWN_VolumeComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x6a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493d20

void * __thiscall
UWN_VolumeContext::_scalar_deleting_destructor_(UWN_VolumeContext *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7UWN_VolumeContext__6B_;
  (this->Volumes).HashSize = 0;
  FVar1 = (this->Volumes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Volumes).Elements);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493db0

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
UWN_VolumeFaceComponent::_scalar_deleting_destructor_(UWN_VolumeFaceComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// `scalar_deleting_destructor' @ 149493e50

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
UWN_VolumeWireComponent::_scalar_deleting_destructor_(UWN_VolumeWireComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x550);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeWN_AmbientSoundVolume @ 14949dd90

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_AmbientSoundVolume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_BindlessISMComponent @ 14949dda0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_BindlessISMComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_BoidsNavSystem @ 14949ddb0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_BoidsNavSystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CommonBluperintLibrary @ 14949ddc0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CommonBluperintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_CommonSubsystem @ 14949ddd0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_CommonSubsystem(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_Common_init @ 14949dde0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_Common_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_FootStep @ 14949ddf0

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_FootStep(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_GSS_CineCameraActor @ 14949de00

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_GSS_CineCameraActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_ISM_Test @ 14949de10

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_ISM_Test(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_NiagaraTODDataInterface @ 14949de20

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_NiagaraTODDataInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_PakDownloader @ 14949de30

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_PakDownloader(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_PakVersion @ 14949de40

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_PakVersion(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_Prefab @ 14949de50

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_Prefab(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_TextureCollection @ 14949de60

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_TextureCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_Variant @ 14949de70

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_Variant(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_Volume @ 14949de80

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_Volume(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeWN_VolumeComponent @ 14949de90

void __cdecl EmptyLinkFunctionForGeneratedCodeWN_VolumeComponent(void)

{
  return;
}

// FVolumeEnterDelegate_DelegateWrapper @ 14949f070

void __cdecl
FVolumeEnterDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UWN_VolumeComponent *param_2,EWN_VolumeObserverMode param_3,TVector<double> *param_4)

{
  UWN_VolumeComponent *local_38;
  EWN_VolumeObserverMode local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_28 = (param_4->field0_0x0)._s_0.X;
  dStack_20 = (param_4->field0_0x0)._s_0.Y;
  local_18 = (param_4->field0_0x0)._s_0.Z;
  local_38 = param_2;
  local_30 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_38);
  return;
}

// FVolumeLeaveDelegate_DelegateWrapper @ 14949f0b0

void __cdecl
FVolumeLeaveDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UWN_VolumeComponent *param_2,EWN_VolumeObserverMode param_3)

{
  UWN_VolumeComponent *local_18;
  EWN_VolumeObserverMode local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  return;
}

// FWN_VolumesEnterDelegate_DelegateWrapper @ 14949f0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FWN_VolumesEnterDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EWN_VolumeObserverMode param_2,TVector<double> *param_3,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_4)

{
  int iVar1;
  undefined1 auStackY_c8 [32];
  EWN_VolumeObserverMode local_98 [8];
  double local_90;
  double dStack_88;
  double local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_90 = (param_3->field0_0x0)._s_0.X;
  dStack_88 = (param_3->field0_0x0)._s_0.Y;
  local_80 = (param_3->field0_0x0)._s_0.Z;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_98[0] = param_2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)local_78,param_4);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_98);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// FWN_VolumesLeaveDelegate_DelegateWrapper @ 14949f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FWN_VolumesLeaveDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          EWN_VolumeObserverMode param_2,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_b8 [32];
  EWN_VolumeObserverMode local_88 [8];
  undefined1 local_80 [32];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_80._0_8_ = (FScriptContainerElement *)0x0;
  local_80._8_8_ = 0;
  local_60 = (void *)0x0;
  local_58 = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_88[0] = param_2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
               *)local_80,param_3);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_88);
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  iVar1 = SUB84(local_80._8_8_,4);
  local_80._8_8_ = local_80._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_80,0,(int *)(local_80 + 0xc));
  }
  uVar2 = local_58._4_4_;
  uStack_50 = 0xffffffff;
  local_58 = (ulonglong)local_58._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_58 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_80 + 0x10),0);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if ((FScriptContainerElement *)local_80._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_80._0_8_);
  }
  return;
}

// WN_CreateInstanceTransforms @ 1494b1080

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __cdecl
WN_CreateInstanceTransforms
          (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          double param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  TQuat<double> *pTVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  TRotator<double> local_f8;
  double local_d0;
  TQuat<double> local_c8 [6];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar20 = (ulonglong)(uint)param_2;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar20);
  }
  if ((0 < param_2) &&
     (UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,param_2,&__return_storage_ptr__->AllocatorInstance,0,piVar1),
     fVar13 = __real_38000100, dVar12 = __real_3ff0000000000000, 0 < param_2)) {
    uVar21 = (undefined4)__real_4049000000000000;
    uVar22 = (undefined4)((ulonglong)__real_4049000000000000 >> 0x20);
    uVar23 = (undefined4)__real_4076800000000000;
    uVar24 = (undefined4)((ulonglong)__real_4076800000000000 >> 0x20);
    uVar25 = (undefined4)__real_3fe0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    do {
      uVar15 = rand();
      uVar16 = rand();
      dVar6 = (double)((float)(uVar16 & 0x7fff) * fVar13) * (param_1 + param_1) - param_1;
      uVar16 = rand();
      local_f8.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_f8.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dVar5 = ((double)((float)(uVar16 & 0x7fff) * fVar13) + dVar12) *
              (double)CONCAT44(uVar22,uVar21);
      uVar16 = rand();
      local_f8.Yaw = (double)((float)(uVar16 & 0x7fff) * fVar13) * (double)CONCAT44(uVar24,uVar23);
      uVar16 = rand();
      dVar3 = (double)((float)(uVar16 & 0x7fff) * fVar13) + (double)CONCAT44(uVar26,uVar25);
      local_d0 = dVar3;
      local_c8[0].Z = dVar5;
      pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_f8,local_c8);
      dVar14 = local_d0;
      dVar8 = pTVar18->X;
      dVar9 = pTVar18->Y;
      dVar10 = pTVar18->Z;
      dVar11 = pTVar18->W;
      iVar17 = __return_storage_ptr__->ArrayNum;
      if (iVar17 == *piVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1060,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar17 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      lVar19 = (longlong)iVar17 * 0x60;
      *(double *)(pFVar2 + lVar19) = dVar8;
      *(double *)(pFVar2 + lVar19 + 8) = dVar9;
      *(double *)(pFVar2 + lVar19 + 0x10) = dVar10;
      *(double *)(pFVar2 + lVar19 + 0x10 + 8) = dVar11;
      auVar7._8_4_ = SUB84(dVar6,0);
      auVar7._0_8_ = (double)((float)(uVar15 & 0x7fff) * fVar13) * (param_1 + param_1) - param_1;
      auVar7._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x20) = auVar7;
      *(double *)(pFVar2 + lVar19 + 0x30) = dVar5;
      *(double *)(pFVar2 + lVar19 + 0x30 + 8) = 0.0;
      auVar4._8_4_ = SUB84(dVar3,0);
      auVar4._0_8_ = dVar3;
      auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])(pFVar2 + lVar19 + 0x40) = auVar4;
      *(double *)(pFVar2 + lVar19 + 0x50) = dVar14;
      *(double *)(pFVar2 + lVar19 + 0x50 + 8) = 0.0;
      uVar21 = (undefined4)__real_4049000000000000;
      uVar22 = (undefined4)((ulonglong)__real_4049000000000000 >> 0x20);
      uVar23 = (undefined4)__real_4076800000000000;
      uVar24 = (undefined4)((ulonglong)__real_4076800000000000 >> 0x20);
      uVar25 = (undefined4)__real_3fe0000000000000;
      uVar26 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  return __return_storage_ptr__;
}

// WN_GetHttpFailureReasonStr @ 1494b1370

wchar_t * __cdecl WN_GetHttpFailureReasonStr(EHttpFailureReason *param_1)

{
  return sHttpFailureReasonStrs[*param_1];
}

// WN_GetObserverPos @ 1494b1390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
WN_GetObserverPos(UWorld *param_1,TVector<double> *param_2,TVector<double> *param_3,
                 TVector<double> *param_4)

{
  APlayerCameraManager *pAVar1;
  double dVar2;
  bool bVar3;
  APlayerController *pAVar4;
  double *pdVar5;
  TRotator<double> local_28;
  
  if (param_1 == (UWorld *)0x0) {
LAB_1494b147d:
    bVar3 = false;
  }
  else {
    bVar3 = UWorld::IsGameWorld(param_1);
    if (bVar3) {
      pAVar4 = UWorld::GetFirstPlayerController(param_1);
      if ((pAVar4 == (APlayerController *)0x0) ||
         (pAVar1 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr,
         pAVar1 == (APlayerCameraManager *)0x0)) goto LAB_1494b13f6;
      pdVar5 = (double *)(**(code **)(pAVar1->_padding_ + 0x798))();
      dVar2 = pdVar5[1];
      (param_4->field0_0x0)._s_0.X = *pdVar5;
      (param_4->field0_0x0)._s_0.Y = dVar2;
      (param_4->field0_0x0)._s_0.Z = pdVar5[2];
    }
    else {
LAB_1494b13f6:
      bVar3 = WN_GetPlayerPosAndRot(param_1,param_4,&local_28);
      if (!bVar3) goto LAB_1494b147d;
    }
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar2;
    (param_3->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    dVar2 = (param_4->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar2;
    (param_2->field0_0x0)._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    WN_GetPlayerPosAndRot(param_1,param_2,&local_28);
    bVar3 = UWorld::IsGameWorld(param_1);
    if (bVar3) {
      pAVar4 = UWorld::GetFirstPlayerController(param_1);
      if ((pAVar4 != (APlayerController *)0x0) &&
         (pAVar1 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr,
         pAVar1 != (APlayerCameraManager *)0x0)) {
        pdVar5 = (double *)(**(code **)(pAVar1->_padding_ + 0x798))();
        dVar2 = pdVar5[1];
        (param_3->field0_0x0)._s_0.X = *pdVar5;
        (param_3->field0_0x0)._s_0.Y = dVar2;
        (param_3->field0_0x0)._s_0.Z = pdVar5[2];
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// WN_GetPlayerCamPosAndRot @ 1494b14a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
WN_GetPlayerCamPosAndRot(UWorld *param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  APlayerCameraManager *pAVar1;
  double dVar2;
  bool bVar3;
  APlayerController *pAVar4;
  double *pdVar5;
  
  if (param_1 != (UWorld *)0x0) {
    bVar3 = UWorld::IsGameWorld(param_1);
    if (bVar3) {
      pAVar4 = UWorld::GetFirstPlayerController(param_1);
      if ((pAVar4 != (APlayerController *)0x0) &&
         (pAVar1 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr,
         pAVar1 != (APlayerCameraManager *)0x0)) {
        pdVar5 = (double *)(**(code **)(pAVar1->_padding_ + 0x798))();
        dVar2 = pdVar5[1];
        (param_2->field0_0x0)._s_0.X = *pdVar5;
        (param_2->field0_0x0)._s_0.Y = dVar2;
        (param_2->field0_0x0)._s_0.Z = pdVar5[2];
        dVar2 = pdVar5[4];
        param_3->Pitch = pdVar5[3];
        param_3->Yaw = dVar2;
        param_3->Roll = pdVar5[5];
        return true;
      }
    }
  }
  return false;
}

// WN_GetPlayerPosAndRot @ 1494b1540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
WN_GetPlayerPosAndRot(UWorld *param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  UObject *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  bool bVar5;
  APlayerController *pAVar6;
  FPayload *pFVar7;
  TRotator<double> *pTVar8;
  int iVar9;
  FRotationConversionCache *this;
  undefined4 uVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  TRotator<double> local_48;
  TQuat<double> local_28;
  
  if (param_1 != (UWorld *)0x0) {
    pTVar12 = param_2;
    bVar5 = UWorld::IsGameWorld(param_1);
    uVar10 = SUB84(pTVar12,0);
    if (bVar5) {
      pAVar6 = UWorld::GetFirstPlayerController(param_1);
      if ((pAVar6 != (APlayerController *)0x0) &&
         (pUVar1 = (UObject *)pAVar6->_padding_, pUVar1 != (UObject *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        lVar13 = *(longlong *)(pUVar1 + 0xb);
        if (lVar13 == 0) {
          local_48.Pitch = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_48.Yaw = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_48.Roll = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          local_48.Pitch = *(double *)(lVar13 + 0x210);
          local_48.Yaw = *(double *)(lVar13 + 0x218);
          local_48.Roll = *(double *)(lVar13 + 0x220);
        }
        (param_2->field0_0x0)._s_0.X = local_48.Pitch;
        (param_2->field0_0x0)._s_0.Y = local_48.Yaw;
        (param_2->field0_0x0)._s_0.Z = local_48.Roll;
        lVar13 = *(longlong *)(pUVar1 + 0xb);
        if (lVar13 == 0) {
          local_48.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
          local_48.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
          local_48.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
        }
        else {
          local_28.X = *(double *)(lVar13 + 0x1f0);
          local_28.Y = *(double *)(lVar13 + 0x1f8);
          local_28.Z = *(double *)(lVar13 + 0x200);
          local_28.W = *(double *)(lVar13 + 0x208);
          this = (FRotationConversionCache *)(lVar13 + 0x1e0);
          pFVar7 = FRotationConversionCache::GetOrCreatePayload(this);
          lVar13 = -(ulonglong)((pFVar7->CachedQuat).W != local_28.W);
          auVar2._8_4_ = (int)lVar13;
          auVar2._0_8_ = -(ulonglong)((pFVar7->CachedQuat).Z != local_28.Z);
          auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
          uVar11 = movmskpd(uVar10,auVar2);
          lVar13 = -(ulonglong)((pFVar7->CachedQuat).Y != local_28.Y);
          auVar3._8_4_ = (int)lVar13;
          auVar3._0_8_ = -(ulonglong)((pFVar7->CachedQuat).X != local_28.X);
          auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
          iVar9 = movmskpd((int)this,auVar3);
          if ((uVar11 & 0x3fffffff) != 0 || iVar9 != 0) {
            (pFVar7->CachedQuat).X = local_28.X;
            (pFVar7->CachedQuat).Y = local_28.Y;
            (pFVar7->CachedQuat).Z = local_28.Z;
            (pFVar7->CachedQuat).W = local_28.W;
            pTVar8 = UE::Math::TQuat<double>::Rotator(&local_28,&local_48);
            dVar4 = pTVar8->Yaw;
            (pFVar7->CachedRotator).Pitch = pTVar8->Pitch;
            (pFVar7->CachedRotator).Yaw = dVar4;
            (pFVar7->CachedRotator).Roll = pTVar8->Roll;
          }
          local_48.Pitch = (pFVar7->CachedRotator).Pitch;
          local_48.Yaw = (pFVar7->CachedRotator).Yaw;
          local_48.Roll = (pFVar7->CachedRotator).Roll;
        }
        param_3->Pitch = local_48.Pitch;
        param_3->Yaw = local_48.Yaw;
        param_3->Roll = local_48.Roll;
        return true;
      }
    }
  }
  return false;
}

// WN_GetViewportPosAndRot @ 1494b1700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
WN_GetViewportPosAndRot(UWorld *param_1,TVector<double> *param_2,TRotator<double> *param_3)

{
  APlayerCameraManager *pAVar1;
  double dVar2;
  bool bVar3;
  APlayerController *pAVar4;
  double *pdVar5;
  
  if (param_1 == (UWorld *)0x0) {
    return false;
  }
  bVar3 = UWorld::IsGameWorld(param_1);
  if (bVar3) {
    pAVar4 = UWorld::GetFirstPlayerController(param_1);
    if ((pAVar4 != (APlayerController *)0x0) &&
       (pAVar1 = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr,
       pAVar1 != (APlayerCameraManager *)0x0)) {
      pdVar5 = (double *)(**(code **)(pAVar1->_padding_ + 0x798))();
      dVar2 = pdVar5[1];
      (param_2->field0_0x0)._s_0.X = *pdVar5;
      (param_2->field0_0x0)._s_0.Y = dVar2;
      (param_2->field0_0x0)._s_0.Z = pdVar5[2];
      dVar2 = pdVar5[4];
      param_3->Pitch = pdVar5[3];
      param_3->Yaw = dVar2;
      param_3->Roll = pdVar5[5];
      return true;
    }
  }
  bVar3 = WN_GetPlayerPosAndRot(param_1,param_2,param_3);
  return bVar3;
}

// Z_Construct_UClass_AWN_AmbientSoundVolume_NoRegister @ 1494b1940

UClass * __cdecl Z_Construct_UClass_AWN_AmbientSoundVolume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolume",
               &Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton,
               AWN_AmbientSoundVolume::StaticRegisterNativesAWN_AmbientSoundVolume,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_AmbientSoundVolume>,
               InternalVTableHelperCtorCaller<AWN_AmbientSoundVolume>,local_res8,AActor::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_AmbientSoundVolume.InnerSingleton;
}

// Z_Construct_UClass_AWN_BindlessISM_Test_NoRegister @ 1494b1a00

UClass * __cdecl Z_Construct_UClass_AWN_BindlessISM_Test_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_BindlessISM_Test",
               &Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton,
               AWN_BindlessISM_Test::StaticRegisterNativesAWN_BindlessISM_Test,0x2d8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_BindlessISM_Test>,
               InternalVTableHelperCtorCaller<AWN_BindlessISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_BindlessISM_Test.InnerSingleton;
}

// Z_Construct_UClass_AWN_GSS_CineCameraActor_NoRegister @ 1494b1ac0

UClass * __cdecl Z_Construct_UClass_AWN_GSS_CineCameraActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_GSS_CineCameraActor",
               &Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton,
               AWN_GSS_CineCameraActor::StaticRegisterNativesAWN_GSS_CineCameraActor,0xb00,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_GSS_CineCameraActor>,
               InternalVTableHelperCtorCaller<AWN_GSS_CineCameraActor>,local_res8,
               ACineCameraActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_GSS_CineCameraActor.InnerSingleton;
}

// Z_Construct_UClass_AWN_ISM_Test_NoRegister @ 1494b1b80

UClass * __cdecl Z_Construct_UClass_AWN_ISM_Test_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_ISM_Test",
               &Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton,
               AWN_ISM_Test::StaticRegisterNativesAWN_ISM_Test,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISM_Test>,
               InternalVTableHelperCtorCaller<AWN_ISM_Test>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISM_Test.InnerSingleton;
}

// Z_Construct_UClass_AWN_PrefabStamp_NoRegister @ 1494b1c40

UClass * __cdecl Z_Construct_UClass_AWN_PrefabStamp_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabStamp",
               &Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton,
               AWN_PrefabStamp::StaticRegisterNativesAWN_PrefabStamp,0x310,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AWN_PrefabStamp>,InternalVTableHelperCtorCaller<AWN_PrefabStamp>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_PrefabStamp.InnerSingleton;
}

// Z_Construct_UClass_AWN_Prefab_NoRegister @ 1494b1d00

UClass * __cdecl Z_Construct_UClass_AWN_Prefab_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab",
               &Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton,
               AWN_Prefab::StaticRegisterNativesAWN_Prefab,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_Prefab>,
               InternalVTableHelperCtorCaller<AWN_Prefab>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Prefab.InnerSingleton;
}

// Z_Construct_UClass_AWN_Volume_NoRegister @ 1494b1dc0

UClass * __cdecl Z_Construct_UClass_AWN_Volume_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_Volume.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Volume",
               &Z_Registration_Info_UClass_AWN_Volume.InnerSingleton,
               AWN_Volume::StaticRegisterNativesAWN_Volume,0x2c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_Volume>,
               InternalVTableHelperCtorCaller<AWN_Volume>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_Volume.InnerSingleton;
}

// Z_Construct_UClass_UWN_CommonBlueprintLibrary_NoRegister @ 1494b1e80

UClass * __cdecl Z_Construct_UClass_UWN_CommonBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonBlueprintLibrary",
               &Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton,
               UWN_CommonBlueprintLibrary::StaticRegisterNativesUWN_CommonBlueprintLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_CommonBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWN_CommonBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UWN_CommonSubsystem_NoRegister @ 1494b1f40

UClass * __cdecl Z_Construct_UClass_UWN_CommonSubsystem_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_CommonSubsystem",
               &Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton,
               UWN_CommonSubsystem::StaticRegisterNativesUWN_CommonSubsystem,0x1b0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",InternalConstructor<UWN_CommonSubsystem>,
               InternalVTableHelperCtorCaller<UWN_CommonSubsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_CommonSubsystem.InnerSingleton;
}

// Z_Construct_UClass_UWN_NiagaraTODDataInterface_NoRegister @ 1494b2000

UClass * __cdecl Z_Construct_UClass_UWN_NiagaraTODDataInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_NiagaraTODDataInterface",
               &Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton,
               UWN_NiagaraTODDataInterface::StaticRegisterNativesUWN_NiagaraTODDataInterface,0x38,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_NiagaraTODDataInterface>,
               InternalVTableHelperCtorCaller<UWN_NiagaraTODDataInterface>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_NiagaraTODDataInterface.InnerSingleton;
}

// Z_Construct_UClass_UWN_PakDownloader_NoRegister @ 1494b20c0

UClass * __cdecl Z_Construct_UClass_UWN_PakDownloader_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PakDownloader",
               &Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton,
               UWN_PakDownloader::StaticRegisterNativesUWN_PakDownloader,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_PakDownloader>,
               InternalVTableHelperCtorCaller<UWN_PakDownloader>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PakDownloader.InnerSingleton;
}

// Z_Construct_UClass_UWN_PrefabComponent_NoRegister @ 1494b2170

UClass * __cdecl Z_Construct_UClass_UWN_PrefabComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_PrefabComponent",
               &Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton,
               UWN_PrefabComponent::StaticRegisterNativesUWN_PrefabComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_PrefabComponent>,
               InternalVTableHelperCtorCaller<UWN_PrefabComponent>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_PrefabComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_AudioComponent_NoRegister @ 1494b2230

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_AudioComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_AudioComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton,
               UWN_Prefab_AudioComponent::StaticRegisterNativesUWN_Prefab_AudioComponent,0xd40,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_AudioComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_AudioComponent>,local_res8,
               UAudioComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_AudioComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_DecalComponent_NoRegister @ 1494b22f0

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_DecalComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_DecalComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton,
               UWN_Prefab_DecalComponent::StaticRegisterNativesUWN_Prefab_DecalComponent,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_DecalComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_DecalComponent>,local_res8,
               UDecalComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_NiagaraComponent_NoRegister @ 1494b23b0

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_NiagaraComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_NiagaraComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton,
               UWN_Prefab_NiagaraComponent::StaticRegisterNativesUWN_Prefab_NiagaraComponent,0x810,
               0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_NiagaraComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_NiagaraComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_PointLightComponent_NoRegister @ 1494b2470

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_PointLightComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_PointLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton,
               UWN_Prefab_PointLightComponent::StaticRegisterNativesUWN_Prefab_PointLightComponent,
               0x400,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_PointLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_PointLightComponent>,local_res8,
               UPointLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_RectLightComponent_NoRegister @ 1494b2530

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_RectLightComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_RectLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton,
               UWN_Prefab_RectLightComponent::StaticRegisterNativesUWN_Prefab_RectLightComponent,
               0x420,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_RectLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_RectLightComponent>,local_res8,
               URectLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_SpotLightComponent_NoRegister @ 1494b25f0

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_SpotLightComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_SpotLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton,
               UWN_Prefab_SpotLightComponent::StaticRegisterNativesUWN_Prefab_SpotLightComponent,
               0x410,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_SpotLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_SpotLightComponent>,local_res8,
               USpotLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_Prefab_StaticMeshComponent_NoRegister @ 1494b26b0

UClass * __cdecl Z_Construct_UClass_UWN_Prefab_StaticMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_StaticMeshComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton,
               UWN_Prefab_StaticMeshComponent::StaticRegisterNativesUWN_Prefab_StaticMeshComponent,
               0x660,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_StaticMeshComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton;
}

// Z_Construct_UClass_UWN_VariantObjectReferencer_NoRegister @ 1494b2770

UClass * __cdecl Z_Construct_UClass_UWN_VariantObjectReferencer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_VariantObjectReferencer",
               &Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton,
               UWN_VariantObjectReferencer::StaticRegisterNativesUWN_VariantObjectReferencer,0x70,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_VariantObjectReferencer>,
               InternalVTableHelperCtorCaller<UWN_VariantObjectReferencer>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_VariantObjectReferencer.InnerSingleton;
}

// Z_Construct_UDelegateFunction_WN_Common_VolumeEnterDelegate__DelegateSignature @ 1494b2820

UFunction * __cdecl
Z_Construct_UDelegateFunction_WN_Common_VolumeEnterDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_WN_Common_VolumeEnterDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_WN_Common_VolumeLeaveDelegate__DelegateSignature @ 1494b2860

UFunction * __cdecl
Z_Construct_UDelegateFunction_WN_Common_VolumeLeaveDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_WN_Common_VolumeLeaveDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FWN_FootStepTableRow @ 1494b28a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_FootStepTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_FootStepTableRow.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_FootStepTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_FootStepTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_FootStepTableRow.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FWN_FootStepTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_NavInfo @ 1494b2920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_NavInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_NavInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_NavInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_NavInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_NavInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_NavInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_PakVersionList @ 1494b29a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_PakVersionList(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersionList.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_PakVersionList.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_PakVersionList_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_PakVersionList.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_PakVersionList.InnerSingleton;
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

// Z_Construct_UScriptStruct_FWN_VolumeObserverInfo @ 1494b2a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FWN_VolumeObserverInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FWN_VolumeObserverInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FWN_VolumeObserverInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FWN_VolumeObserverInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FWN_VolumeObserverInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FWN_VolumeObserverInfo.InnerSingleton;
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

// IMPLEMENT_MODULE_WN_Common @ 1494b50f0

void __cdecl IMPLEMENT_MODULE_WN_Common(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Cmd_WN_Volume_ShowDebugShapesRef'' @ 150416170

void __cdecl _dynamic_atexit_destructor_for__Cmd_WN_Volume_ShowDebugShapesRef__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&Cmd_WN_Volume_ShowDebugShapesRef);
  return;
}

// `dynamic_atexit_destructor_for_'Common'' @ 150416190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__Common__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&Common);
  return;
}

// `dynamic_atexit_destructor_for_'ErrorNamespace'' @ 1504161b0

void __cdecl EHttpResponseCodes::_dynamic_atexit_destructor_for__ErrorNamespace__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ErrorNamespace.Data.AllocatorInstance.Data;
  if (ErrorNamespace.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (ErrorNamespace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'FaceMaterialNoDepthTestRef'' @ 1504161d0

void __cdecl
`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::
_dynamic_atexit_destructor_for__FaceMaterialNoDepthTestRef__(void)

{
  FaceMaterialNoDepthTestRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&FaceMaterialNoDepthTestRef);
  return;
}

// `dynamic_atexit_destructor_for_'FaceMaterialRef'' @ 1504161f0

void __cdecl
`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::_dynamic_atexit_destructor_for__FaceMaterialRef__
          (void)

{
  FaceMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&FaceMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'WireMaterialRef'' @ 150416210

void __cdecl
`UWN_VolumeComponent::UWN_VolumeComponent'::__l2::_dynamic_atexit_destructor_for__WireMaterialRef__
          (void)

{
  WireMaterialRef._padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&WireMaterialRef);
  return;
}

// `dynamic_atexit_destructor_for_'sAssetDatas'' @ 150416230

void __cdecl
`FWN_SoftObjectUtils::GetObjectPath'::__l5::_dynamic_atexit_destructor_for__sAssetDatas__(void)

{
  DestructItems<FAssetData,int>
            ((FAssetData *)sAssetDatas.AllocatorInstance.Data,sAssetDatas.ArrayNum);
  if (sAssetDatas.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(sAssetDatas.AllocatorInstance.Data);
    return;
  }
  return;
}

