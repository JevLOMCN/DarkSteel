// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineBlueprint
// Functions: 19

// StaticClass @ 14de85a70

UClass * __cdecl UStreamlineLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineBlueprint",L"StreamlineLibrary",
               &Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton,
               StaticRegisterNativesUStreamlineLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibrary>,
               InternalVTableHelperCtorCaller<UStreamlineLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton;
}

// UStreamlineLibrary @ 14de86750

UStreamlineLibrary * __thiscall
UStreamlineLibrary::UStreamlineLibrary(UStreamlineLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibrary__6B_;
  return this;
}

// UStreamlineLibrary @ 14de86780

UStreamlineLibrary * __thiscall
UStreamlineLibrary::UStreamlineLibrary(UStreamlineLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UStreamlineLibrary__6B_;
  return this;
}

// ~UStreamlineLibrary @ 14de867b0

void __thiscall UStreamlineLibrary::~UStreamlineLibrary(UStreamlineLibrary *this)

{
  *(undefined ***)this = &___7UStreamlineLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BreakStreamlineFeatureRequirements @ 14de86830

void __cdecl
UStreamlineLibrary::BreakStreamlineFeatureRequirements
          (EStreamlineFeatureRequirementsFlags param_1,bool *param_2,bool *param_3,bool *param_4,
          bool *param_5,bool *param_6)

{
  bool bVar1;
  
  bVar1 = ValidateEnumBitFlags<enum_EStreamlineFeatureRequirementsFlags>
                    (param_1,"UStreamlineLibrary::BreakStreamlineFeatureRequirements");
  if (bVar1) {
    *param_2 = (bool)(param_1 & D3D11Supported);
    *param_3 = (bool)(param_1 >> 1 & 1);
    *param_4 = (bool)(param_1 >> 2 & 1);
    *param_5 = (bool)(param_1 >> 3 & 1);
    *param_6 = (bool)(param_1 >> 4 & 1);
  }
  return;
}

// GetPrivateStaticClass @ 14de868e0

UClass * __cdecl UStreamlineLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StreamlineBlueprint",L"StreamlineLibrary",
               &Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton,
               StaticRegisterNativesUStreamlineLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UStreamlineLibrary>,
               InternalVTableHelperCtorCaller<UStreamlineLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamlineLibrary.InnerSingleton;
}

// GetStreamlineFeatureInformation @ 14de869a0

FStreamlineFeatureRequirements * __cdecl
UStreamlineLibrary::GetStreamlineFeatureInformation
          (FStreamlineFeatureRequirements *__return_storage_ptr__,EStreamlineFeature param_1)

{
  FStreamlineFeatureRequirements *pFVar1;
  int iVar2;
  undefined8 uVar3;
  EStreamlineFeatureRequirementsFlags EVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  
  uVar13 = (ulonglong)param_1;
  bVar12 = ValidateEnumValue<enum_EStreamlineFeature>
                     (param_1,"UStreamlineLibrary::GetStreamlineFeatureInformation");
  if (bVar12) {
    if (DeepDVC < param_1) {
      uVar13 = 0;
    }
    pFVar1 = Features.Elements + uVar13;
    EVar4 = pFVar1->Requirements;
    uVar5 = *(undefined2 *)&pFVar1->field_0x2;
    iVar2 = (pFVar1->RequiredOperatingSystemVersion).Major;
    iVar6 = Features.Elements[uVar13].RequiredOperatingSystemVersion.Minor;
    iVar7 = Features.Elements[uVar13].RequiredOperatingSystemVersion.Build;
    iVar8 = Features.Elements[uVar13].DetectedOperatingSystemVersion.Major;
    iVar9 = Features.Elements[uVar13].DetectedOperatingSystemVersion.Minor;
    uVar3 = *(undefined8 *)&Features.Elements[uVar13].DetectedOperatingSystemVersion.Build;
    __return_storage_ptr__->Support = pFVar1->Support;
    __return_storage_ptr__->Requirements = EVar4;
    *(undefined2 *)&__return_storage_ptr__->field_0x2 = uVar5;
    (__return_storage_ptr__->RequiredOperatingSystemVersion).Major = iVar2;
    (__return_storage_ptr__->RequiredOperatingSystemVersion).Minor = iVar6;
    (__return_storage_ptr__->RequiredOperatingSystemVersion).Build = iVar7;
    iVar6 = Features.Elements[uVar13].RequiredDriverVersion.Minor;
    iVar7 = Features.Elements[uVar13].RequiredDriverVersion.Build;
    iVar10 = Features.Elements[uVar13].DetectedDriverVersion.Major;
    iVar11 = Features.Elements[uVar13].DetectedDriverVersion.Minor;
    iVar2 = Features.Elements[uVar13].DetectedDriverVersion.Build;
    (__return_storage_ptr__->DetectedOperatingSystemVersion).Major = iVar8;
    (__return_storage_ptr__->DetectedOperatingSystemVersion).Minor = iVar9;
    *(undefined8 *)&(__return_storage_ptr__->DetectedOperatingSystemVersion).Build = uVar3;
    (__return_storage_ptr__->RequiredDriverVersion).Minor = iVar6;
    (__return_storage_ptr__->RequiredDriverVersion).Build = iVar7;
    (__return_storage_ptr__->DetectedDriverVersion).Major = iVar10;
    (__return_storage_ptr__->DetectedDriverVersion).Minor = iVar11;
    (__return_storage_ptr__->DetectedDriverVersion).Build = iVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Support = NotSupportedByPlatformAtBuildTime;
  __return_storage_ptr__->Requirements = None;
  *(undefined2 *)&__return_storage_ptr__->field_0x2 = 0;
  (__return_storage_ptr__->RequiredOperatingSystemVersion).Major = 0;
  (__return_storage_ptr__->RequiredOperatingSystemVersion).Minor = 0;
  (__return_storage_ptr__->RequiredOperatingSystemVersion).Build = 0;
  (__return_storage_ptr__->DetectedOperatingSystemVersion).Major = 0;
  (__return_storage_ptr__->DetectedOperatingSystemVersion).Minor = 0;
  *(undefined8 *)&(__return_storage_ptr__->DetectedOperatingSystemVersion).Build = 0;
  (__return_storage_ptr__->RequiredDriverVersion).Minor = 0;
  (__return_storage_ptr__->RequiredDriverVersion).Build = 0;
  (__return_storage_ptr__->DetectedDriverVersion).Major = 0;
  (__return_storage_ptr__->DetectedDriverVersion).Minor = 0;
  (__return_storage_ptr__->DetectedDriverVersion).Build = 0;
  return __return_storage_ptr__;
}

// IsStreamlineFeatureSupported @ 14de86aa0

bool __cdecl UStreamlineLibrary::IsStreamlineFeatureSupported(EStreamlineFeature param_1)

{
  bool bVar1;
  EStreamlineFeatureSupport EVar2;
  
  if (!bStreamlineLibraryInitialized) {
    bStreamlineLibraryInitialized = true;
  }
  bVar1 = ValidateEnumValue<enum_EStreamlineFeature>
                    (param_1,"UStreamlineLibrary::IsStreamlineFeatureSupported");
  if (bVar1) {
    EVar2 = QueryStreamlineFeatureSupport(param_1);
    return EVar2 == Supported;
  }
  return false;
}

// QueryStreamlineFeatureSupport @ 14de86af0

EStreamlineFeatureSupport __cdecl
UStreamlineLibrary::QueryStreamlineFeatureSupport(EStreamlineFeature param_1)

{
  bool bVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  if (!bStreamlineLibraryInitialized) {
    bStreamlineLibraryInitialized = true;
  }
  bVar1 = ValidateEnumValue<enum_EStreamlineFeature>
                    (param_1,"UStreamlineLibrary::QueryStreamlineFeatureSupport");
  if (bVar1) {
    if (DeepDVC < param_1) {
      uVar2 = 0;
    }
    return Features.Elements[uVar2].Support;
  }
  return NotSupported;
}

// RegisterFeatureSupport @ 14de86b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UStreamlineLibrary::RegisterFeatureSupport
          (EStreamlineFeature param_1,EStreamlineFeatureSupport param_2)

{
  bool bVar1;
  FeatureRequirementFlags FVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_108 [32];
  FeatureRequirements local_e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  uVar4 = 0;
  if (param_1 == DLSSG) {
    uVar4 = 1000;
  }
  else if (param_1 == Latewarp) {
    uVar4 = 6;
  }
  else if (param_1 == Reflex) {
    uVar4 = 3;
  }
  else if (param_1 == DeepDVC) {
    uVar4 = 5;
  }
  uVar3 = (uint)param_1;
  if (3 < param_1) {
    uVar3 = 0;
  }
  bVar1 = IsStreamlineSupported();
  if (bVar1) {
    local_e8._padding_ = 0;
    local_e8.osVersionDetected.build = 0;
    local_e8.osVersionRequired.major = 0;
    local_e8.osVersionRequired.minor = 0;
    local_e8.osVersionRequired.build = 0;
    local_e8.driverVersionDetected.major = 0;
    local_e8.driverVersionDetected.minor = 0;
    local_e8.driverVersionDetected.build = 0;
    local_e8.driverVersionRequired.major = 0;
    local_e8._padding_._0_4_ = 0x66714097;
    local_e8._padding_._4_4_ = 0x4bc6ac6d;
    local_e8._padding_._0_4_ = 0xf1e1589;
    local_e8._padding_._4_4_ = 0x1fb6a655;
    local_e8._padding_ = 2;
    local_e8.flags = 0;
    local_e8.maxNumCPUThreads = 0;
    local_e8.maxNumViewports = 0;
    local_e8.numRequiredTags = 0;
    local_e8.requiredTags = (uint *)0x0;
    local_e8.osVersionDetected.major = 0;
    local_e8.osVersionDetected.minor = 0;
    local_e8.driverVersionRequired.minor = 0;
    local_e8.driverVersionRequired.build = 0;
    local_e8.vkNumComputeQueuesRequired = 0;
    local_e8.vkNumGraphicsQueuesRequired = 0;
    local_e8.vkNumDeviceExtensions = 0;
    local_e8.vkDeviceExtensions = (char **)0x0;
    local_e8.vkNumInstanceExtensions = 0;
    local_e8.vkInstanceExtensions = (char **)0x0;
    local_e8.vkNumFeatures12 = 0;
    local_e8.vkFeatures12 = (char **)0x0;
    local_e8.vkNumFeatures13 = 0;
    local_e8.vkFeatures13 = (char **)0x0;
    local_e8.vkNumOpticalFlowQueuesRequired = 0;
    SLgetFeatureRequirements(uVar4,&local_e8);
    Features.Elements[uVar3].RequiredDriverVersion.Major = local_e8.driverVersionRequired.major;
    Features.Elements[uVar3].RequiredDriverVersion.Minor = local_e8.driverVersionRequired.minor;
    Features.Elements[uVar3].RequiredDriverVersion.Build = local_e8.driverVersionRequired.build;
    Features.Elements[uVar3].DetectedDriverVersion.Major = local_e8.driverVersionDetected.major;
    Features.Elements[uVar3].DetectedDriverVersion.Minor = local_e8.driverVersionDetected.minor;
    Features.Elements[uVar3].DetectedDriverVersion.Build = local_e8.driverVersionDetected.build;
    Features.Elements[uVar3].RequiredOperatingSystemVersion.Major = local_e8.osVersionRequired.major
    ;
    Features.Elements[uVar3].RequiredOperatingSystemVersion.Minor = local_e8.osVersionRequired.minor
    ;
    Features.Elements[uVar3].RequiredOperatingSystemVersion.Build = local_e8.osVersionRequired.build
    ;
    Features.Elements[uVar3].DetectedOperatingSystemVersion.Major = local_e8.osVersionDetected.major
    ;
    Features.Elements[uVar3].DetectedOperatingSystemVersion.Minor = local_e8.osVersionDetected.minor
    ;
    Features.Elements[uVar3].DetectedOperatingSystemVersion.Build = local_e8.osVersionDetected.build
    ;
    FVar2 = PlatformGetAllImplementedStreamlineRHIs();
    Features.Elements[uVar3].Support = param_2;
    Features.Elements[uVar3].Requirements =
         ((EStreamlineFeatureRequirementsFlags)FVar2 |
         ~(VulkanSupported|D3D12Supported|D3D11Supported)) & (undefined1)local_e8.flags;
  }
  return;
}

// Shutdown @ 14de86cf0

void __cdecl UStreamlineLibrary::Shutdown(void)

{
  return;
}

// Startup @ 14de86d00

void __cdecl UStreamlineLibrary::Startup(void)

{
  if (!bStreamlineLibraryInitialized) {
    bStreamlineLibraryInitialized = true;
  }
  return;
}

// StaticRegisterNativesUStreamlineLibrary @ 14de86d20

void __cdecl UStreamlineLibrary::StaticRegisterNativesUStreamlineLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UStreamlineLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryInitStreamlineLibrary @ 14de86dc0

bool __cdecl UStreamlineLibrary::TryInitStreamlineLibrary(void)

{
  if (!bStreamlineLibraryInitialized) {
    bStreamlineLibraryInitialized = true;
  }
  return true;
}

// ValidateAndConvertToIndex @ 14de86de0

int __cdecl UStreamlineLibrary::ValidateAndConvertToIndex(EStreamlineFeature param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = (uint)param_1;
  }
  return uVar1;
}

// execBreakStreamlineFeatureRequirements @ 14de86ec0

void __cdecl
UStreamlineLibrary::execBreakStreamlineFeatureRequirements
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EStreamlineFeatureRequirementsFlags *pEVar1;
  FProperty *pFVar2;
  EStreamlineFeatureRequirementsFlags EVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  EStreamlineFeatureRequirementsFlags *pEVar7;
  byte *pbVar8;
  byte *pbVar9;
  EStreamlineFeatureRequirementsFlags local_res10 [16];
  byte local_res20 [8];
  byte local_48 [3];
  EStreamlineFeatureRequirementsFlags local_45 [13];
  
  local_45[0] = None;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_45,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_45);
  }
  local_res10[0] = None;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar1 = param_2->MostRecentPropertyAddress;
  local_res20[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar7 = local_res10;
  if (pEVar1 != (EStreamlineFeatureRequirementsFlags *)0x0) {
    pEVar7 = pEVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pbVar9 = param_2->MostRecentPropertyAddress;
  local_48[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar6 = local_res20;
  if (pbVar9 != (byte *)0x0) {
    pbVar6 = pbVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pbVar9 = param_2->MostRecentPropertyAddress;
  local_48[1] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar8 = local_48;
  if (pbVar9 != (byte *)0x0) {
    pbVar8 = pbVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48 + 1,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48 + 1);
  }
  pbVar9 = param_2->MostRecentPropertyAddress;
  local_48[2] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pbVar5 = local_48 + 1;
  if (pbVar9 != (byte *)0x0) {
    pbVar5 = pbVar9;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48 + 2,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48 + 2);
  }
  EVar3 = local_45[0];
  pbVar9 = local_48 + 2;
  if (param_2->MostRecentPropertyAddress != (byte *)0x0) {
    pbVar9 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar4 = ValidateEnumBitFlags<enum_EStreamlineFeatureRequirementsFlags>
                    (local_45[0],"UStreamlineLibrary::BreakStreamlineFeatureRequirements");
  if (bVar4) {
    *pEVar7 = EVar3 & D3D11Supported;
    *pbVar6 = EVar3 >> 1 & 1;
    *pbVar8 = EVar3 >> 2 & 1;
    *pbVar5 = EVar3 >> 3 & 1;
    *pbVar9 = EVar3 >> 4 & 1;
  }
  return;
}

// execGetStreamlineFeatureInformation @ 14de87120

void __cdecl
UStreamlineLibrary::execGetStreamlineFeatureInformation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FStreamlineFeatureRequirements *pFVar1;
  FProperty *pFVar2;
  EStreamlineFeature EVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  EStreamlineFeature local_res10 [8];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  local_res10[0] = DLSSG;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  EVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = (ulonglong)local_res10[0];
  bVar4 = ValidateEnumValue<enum_EStreamlineFeature>
                    (local_res10[0],"UStreamlineLibrary::GetStreamlineFeatureInformation");
  if (bVar4) {
    if (DeepDVC < EVar3) {
      uVar5 = 0;
    }
    pFVar1 = Features.Elements + uVar5;
    uVar7._0_1_ = pFVar1->Support;
    uVar7._1_1_ = pFVar1->Requirements;
    uVar7._2_2_ = *(undefined2 *)&pFVar1->field_0x2;
    iStack_44 = Features.Elements[uVar5].RequiredOperatingSystemVersion.Major;
    iStack_40 = Features.Elements[uVar5].RequiredOperatingSystemVersion.Minor;
    iStack_3c = Features.Elements[uVar5].RequiredOperatingSystemVersion.Build;
    iStack_38 = Features.Elements[uVar5].DetectedOperatingSystemVersion.Major;
    iStack_34 = Features.Elements[uVar5].DetectedOperatingSystemVersion.Minor;
    iStack_30 = Features.Elements[uVar5].DetectedOperatingSystemVersion.Build;
    iStack_2c = Features.Elements[uVar5].RequiredDriverVersion.Major;
    iStack_28 = Features.Elements[uVar5].RequiredDriverVersion.Minor;
    local_24 = Features.Elements[uVar5].RequiredDriverVersion.Build;
    iStack_20 = Features.Elements[uVar5].DetectedDriverVersion.Major;
    iStack_1c = Features.Elements[uVar5].DetectedDriverVersion.Minor;
    iVar6 = Features.Elements[uVar5].DetectedDriverVersion.Build;
  }
  else {
    uVar7 = 7;
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    iStack_30 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    local_24 = 0;
    iStack_20 = 0;
    iStack_1c = 0;
    iVar6 = 0;
  }
  *(undefined4 *)param_3 = uVar7;
  *(int *)((longlong)param_3 + 4) = iStack_44;
  *(int *)((longlong)param_3 + 8) = iStack_40;
  *(int *)((longlong)param_3 + 0xc) = iStack_3c;
  *(int *)((longlong)param_3 + 0x10) = iStack_38;
  *(int *)((longlong)param_3 + 0x14) = iStack_34;
  *(int *)((longlong)param_3 + 0x18) = iStack_30;
  *(int *)((longlong)param_3 + 0x1c) = iStack_2c;
  *(int *)((longlong)param_3 + 0x20) = iStack_28;
  *(int *)((longlong)param_3 + 0x24) = local_24;
  *(int *)((longlong)param_3 + 0x28) = iStack_20;
  *(int *)((longlong)param_3 + 0x2c) = iStack_1c;
  *(int *)((longlong)param_3 + 0x30) = iVar6;
  return;
}

// execIsStreamlineFeatureSupported @ 14de87230

void __cdecl
UStreamlineLibrary::execIsStreamlineFeatureSupported(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EStreamlineFeature EVar2;
  bool bVar3;
  EStreamlineFeatureSupport EVar4;
  EStreamlineFeature local_18 [16];
  
  local_18[0] = DLSSG;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  EVar2 = local_18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bStreamlineLibraryInitialized == false) {
    bStreamlineLibraryInitialized = true;
  }
  bVar3 = ValidateEnumValue<enum_EStreamlineFeature>
                    (local_18[0],"UStreamlineLibrary::IsStreamlineFeatureSupported");
  if (bVar3) {
    EVar4 = QueryStreamlineFeatureSupport(EVar2);
    *(bool *)param_3 = EVar4 == Supported;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execQueryStreamlineFeatureSupport @ 14de872f0

void __cdecl
UStreamlineLibrary::execQueryStreamlineFeatureSupport
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EStreamlineFeature EVar2;
  bool bVar3;
  ulonglong uVar4;
  EStreamlineFeature local_18 [16];
  
  local_18[0] = DLSSG;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  EVar2 = local_18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (bStreamlineLibraryInitialized == false) {
    bStreamlineLibraryInitialized = true;
  }
  bVar3 = ValidateEnumValue<enum_EStreamlineFeature>
                    (local_18[0],"UStreamlineLibrary::QueryStreamlineFeatureSupport");
  if (bVar3) {
    uVar4 = (ulonglong)(uint)EVar2;
    if (3 < EVar2) {
      uVar4 = 0;
    }
    *(EStreamlineFeatureSupport *)param_3 = Features.Elements[uVar4].Support;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

