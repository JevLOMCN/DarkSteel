// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149edf290

UClass * __cdecl UPCGAssetExporterUtils::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporterUtils",
               &Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton,
               StaticRegisterNativesUPCGAssetExporterUtils,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAssetExporterUtils>,
               InternalVTableHelperCtorCaller<UPCGAssetExporterUtils>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton;
}

// UPCGAssetExporterUtils @ 149eeda90

UPCGAssetExporterUtils * __thiscall
UPCGAssetExporterUtils::UPCGAssetExporterUtils(UPCGAssetExporterUtils *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGAssetExporterUtils__6B_;
  return this;
}

// UPCGAssetExporterUtils @ 149eedac0

UPCGAssetExporterUtils * __thiscall
UPCGAssetExporterUtils::UPCGAssetExporterUtils
          (UPCGAssetExporterUtils *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGAssetExporterUtils__6B_;
  return this;
}

// ~UPCGAssetExporterUtils @ 149eef9c0

void __thiscall UPCGAssetExporterUtils::~UPCGAssetExporterUtils(UPCGAssetExporterUtils *this)

{
  *(undefined ***)this = &___7UPCGAssetExporterUtils__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CreateAsset @ 149ef9df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPackage * __cdecl
UPCGAssetExporterUtils::CreateAsset
          (UPCGAssetExporter *param_1,FPCGAssetExporterParameters *param_2,FPCGContext *param_3)

{
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,param_3);
  return (UPackage *)0x0;
}

// CreateAsset @ 149ef9e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPackage * __cdecl
UPCGAssetExporterUtils::CreateAsset(UPCGAssetExporter *param_1,FPCGAssetExporterParameters *param_2)

{
  FScriptContainerElement *pFVar1;
  
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,(FPCGContext *)0x0);
  pFVar1 = (param_2->AssetPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (UPackage *)0x0;
}

// CreateAsset @ 149ef9e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPackage * __cdecl
UPCGAssetExporterUtils::CreateAsset
          (UClass *param_1,FPCGAssetExporterParameters *param_2,
          TFunctionRef<bool___cdecl(FString_const_&,UObject_*)> *param_3,FPCGContext *param_4)

{
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,param_4);
  return (UPackage *)0x0;
}

// GetPrivateStaticClass @ 149f03ec0

UClass * __cdecl UPCGAssetExporterUtils::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAssetExporterUtils",
               &Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton,
               StaticRegisterNativesUPCGAssetExporterUtils,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAssetExporterUtils>,
               InternalVTableHelperCtorCaller<UPCGAssetExporterUtils>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAssetExporterUtils.InnerSingleton;
}

// StaticRegisterNativesUPCGAssetExporterUtils @ 149f13ea0

void __cdecl UPCGAssetExporterUtils::StaticRegisterNativesUPCGAssetExporterUtils(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGAssetExporterUtils_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAssets @ 149f15150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGAssetExporterUtils::UpdateAssets
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FPCGAssetExporterParameters *param_2,FPCGContext *param_3)

{
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,param_3);
  return;
}

// UpdateAssets @ 149f15170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGAssetExporterUtils::UpdateAssets
          (TArray<FAssetData,TSizedDefaultAllocator<32>_> *param_1,
          FPCGAssetExporterParameters *param_2)

{
  FScriptContainerElement *pFVar1;
  
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,(FPCGContext *)0x0);
  pFVar1 = (param_2->AssetPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// execCreateAsset @ 149f17d00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGAssetExporterUtils::execCreateAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined1 local_78 [8];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  ForAnyElementType local_40;
  int local_38;
  int local_34;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  undefined1 local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_78[0] = 1;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pvVar2 = local_70;
  local_40.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_68;
  local_48 = local_78[0];
  local_38 = (int)local_68;
  if ((int)local_68 == 0) {
    local_34 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_68,0,&local_40,(int)local_68,&local_34);
    memcpy(local_40.Data,pvVar2,lVar3 * 2);
  }
  pvVar2 = local_60;
  lVar3 = (longlong)(int)local_58;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = (int)local_58;
  if ((int)local_58 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_58,0,&local_30,(int)local_58,&local_24);
    memcpy(local_30.Data,pvVar2,lVar3 * 2);
  }
  local_20 = local_50;
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,(FPCGContext *)0x0);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  *(undefined8 *)param_3 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  return;
}

// execUpdateAssets @ 149f1a490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGAssetExporterUtils::execUpdateAssets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  longlong lVar3;
  FAssetData *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_38;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  ForAnyElementType local_20;
  int local_18;
  int local_14;
  undefined1 local_10;
  
  local_78 = (FAssetData *)0x0;
  local_70 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_68[0] = 1;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  local_40 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pvVar2 = local_60;
  local_30.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_58;
  local_38 = local_68[0];
  local_28 = (int)local_58;
  if ((int)local_58 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_58,0,&local_30,(int)local_58,&local_24);
    memcpy(local_30.Data,pvVar2,lVar3 * 2);
  }
  pvVar2 = local_50;
  lVar3 = (longlong)(int)local_48;
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = (int)local_48;
  if ((int)local_48 == 0) {
    local_14 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_48,0,&local_20,(int)local_48,&local_14);
    memcpy(local_20.Data,pvVar2,lVar3 * 2);
  }
  local_10 = local_40;
  PCGLog::LogErrorOnGraph(&PCGAssetExporterUtils::NonEditorError,(FPCGContext *)0x0);
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  DestructItems<FAssetData,int>(local_78,(int)local_70);
  if (local_78 != (FAssetData *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

