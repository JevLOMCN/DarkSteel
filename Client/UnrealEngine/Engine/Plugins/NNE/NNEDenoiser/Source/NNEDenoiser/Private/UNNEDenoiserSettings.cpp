// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 7

// StaticClass @ 14eadafa0

UClass * __cdecl UNNEDenoiserSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserSettings",
               &Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton,
               StaticRegisterNativesUNNEDenoiserSettings,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNEDenoiserSettings>,
               InternalVTableHelperCtorCaller<UNNEDenoiserSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton;
}

// UNNEDenoiserSettings @ 14eae62e0

UNNEDenoiserSettings * __thiscall
UNNEDenoiserSettings::UNNEDenoiserSettings(UNNEDenoiserSettings *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this,param_1);
  puVar1 = &(this->DenoiserAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNNEDenoiserSettings__6B_;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  this->MaximumTileSizeOverride = -1;
  (this->RuntimeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeName).Data.ArrayNum = 0;
  (this->RuntimeName).Data.ArrayMax = 0;
  return this;
}

// UNNEDenoiserSettings @ 14eae6370

UNNEDenoiserSettings * __thiscall
UNNEDenoiserSettings::UNNEDenoiserSettings(UNNEDenoiserSettings *this)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  undefined1 *this_01;
  undefined1 *puVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FObjectInitializer *pFVar6;
  size_t sVar7;
  FName local_res8;
  TStringView<wchar_t> local_78;
  FSoftObjectPath local_68;
  FSoftObjectPath local_48;
  
  pFVar6 = FObjectInitializer::Get();
  UDeveloperSettingsBackedByCVars::UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this,pFVar6);
  this_00 = &(this->DenoiserAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UNNEDenoiserSettings__6B_;
  puVar1 = &(this->DenoiserAsset).SoftObjectPtr.field_0x24;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this_01 = &(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr = 0;
  *(undefined8 *)this_01 = 0;
  puVar2 = &(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x24;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  this->MaximumTileSizeOverride = -1;
  (this->RuntimeName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RuntimeName).Data.ArrayNum = 0;
  (this->RuntimeName).Data.ArrayMax = 0;
  ::FName::FName(&local_res8,L"Plugins");
  this->_padding_ = (longlong)local_res8;
  ::FName::FName(&local_res8,L"NNE Denoiser");
  local_78.Size = 0x44;
  this->_padding_ = (longlong)local_res8;
  local_78.DataPtr = L"/NNEDenoiser/NNED_Oidn2-3_Balanced_Alpha.NNED_Oidn2-3_Balanced_Alpha";
  local_68.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_68.AssetPath.PackageName.Number = 0;
  local_68.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_68.AssetPath.AssetName.Number = 0;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.SubPathString.Data.ArrayNum = 0;
  local_68.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_68,&local_78);
  FVar4.Data = local_68.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->DenoiserAsset).SoftObjectPtr = 0;
  *(uint *)&(this->DenoiserAsset).SoftObjectPtr.field_0x8 =
       local_68.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->DenoiserAsset).SoftObjectPtr.field_0xc = local_68.AssetPath.PackageName.Number;
  *(uint *)&(this->DenoiserAsset).SoftObjectPtr.field_0x10 =
       local_68.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->DenoiserAsset).SoftObjectPtr.field_0x14 = local_68.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_00 != &local_68.SubPathString) {
    iVar5 = local_68.SubPathString.Data.ArrayNum;
    sVar7 = (size_t)local_68.SubPathString.Data.ArrayNum;
    iVar3 = *(int *)puVar1;
    *(int *)&(this->DenoiserAsset).SoftObjectPtr.field_0x20 = local_68.SubPathString.Data.ArrayNum;
    if ((local_68.SubPathString.Data.ArrayNum == 0) && (iVar3 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_68.SubPathString.Data.ArrayNum,iVar3,(ForAnyElementType *)this_00,
                 local_68.SubPathString.Data.ArrayNum,(int *)puVar1);
      if (iVar5 != 0) {
        memcpy(*(void **)this_00,FVar4.Data,sVar7);
      }
    }
  }
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  local_78.Size = 0x46;
  local_78.DataPtr = L"/NNEDenoiser/NNEDT_Oidn2-3_Balanced_Alpha.NNEDT_Oidn2-3_Balanced_Alpha";
  local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_48.AssetPath.PackageName.Number = 0;
  local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_48.AssetPath.AssetName.Number = 0;
  local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubPathString.Data.ArrayNum = 0;
  local_48.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_48,&local_78);
  FVar4.Data = local_48.SubPathString.Data.AllocatorInstance.Data;
  *(undefined8 *)&(this->TemporalDenoiserAsset).SoftObjectPtr = 0;
  *(uint *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x8 =
       local_48.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0xc =
       local_48.AssetPath.PackageName.Number;
  *(uint *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x10 =
       local_48.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x14 =
       local_48.AssetPath.AssetName.Number;
  if ((FUtf8String *)this_01 != &local_48.SubPathString) {
    iVar5 = local_48.SubPathString.Data.ArrayNum;
    sVar7 = (size_t)local_48.SubPathString.Data.ArrayNum;
    iVar3 = *(int *)puVar2;
    *(int *)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x20 =
         local_48.SubPathString.Data.ArrayNum;
    if ((local_48.SubPathString.Data.ArrayNum == 0) && (iVar3 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_48.SubPathString.Data.ArrayNum,iVar3,(ForAnyElementType *)this_01,
                 local_48.SubPathString.Data.ArrayNum,(int *)puVar2);
      if (iVar5 != 0) {
        memcpy(*(void **)this_01,FVar4.Data,sVar7);
      }
    }
  }
  if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UNNEDenoiserSettings @ 14eae6eb0

void __thiscall UNNEDenoiserSettings::~UNNEDenoiserSettings(UNNEDenoiserSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UNNEDenoiserSettings__6B_;
  pFVar1 = (this->RuntimeName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TemporalDenoiserAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = *(void **)&(this->DenoiserAsset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UDeveloperSettingsBackedByCVars::~UDeveloperSettingsBackedByCVars
            ((UDeveloperSettingsBackedByCVars *)this);
  return;
}

// GetPrivateStaticClass @ 14eaf9f30

UClass * __cdecl UNNEDenoiserSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NNEDenoiser",L"NNEDenoiserSettings",
               &Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton,
               StaticRegisterNativesUNNEDenoiserSettings,0xa0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNNEDenoiserSettings>,
               InternalVTableHelperCtorCaller<UNNEDenoiserSettings>,local_res8,
               UDeveloperSettingsBackedByCVars::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNNEDenoiserSettings.InnerSingleton;
}

// PostInitProperties @ 14eafc210

void __thiscall UNNEDenoiserSettings::PostInitProperties(UNNEDenoiserSettings *this)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (bVar1) {
    pwVar2 = L"";
    if (GEngineIni.Data.ArrayNum != 0) {
      pwVar2 = (wchar_t *)GEngineIni.Data.AllocatorInstance;
    }
    UE::ConfigUtilities::ApplyCVarSettingsFromIni
              (L"/Script/NNEDenoiser.NNEDenoiserSettings",pwVar2,0x4000000,false,(FName)0x0);
  }
  UDeveloperSettingsBackedByCVars::PostInitProperties((UDeveloperSettingsBackedByCVars *)this);
  return;
}

// StaticRegisterNativesUNNEDenoiserSettings @ 14eafe2d0

void __cdecl UNNEDenoiserSettings::StaticRegisterNativesUNNEDenoiserSettings(void)

{
  return;
}

