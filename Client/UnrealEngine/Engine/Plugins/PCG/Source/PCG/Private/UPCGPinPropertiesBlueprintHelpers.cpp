// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149f1af30

UClass * __cdecl UPCGPinPropertiesBlueprintHelpers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPinPropertiesBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton,
               StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPinPropertiesBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGPinPropertiesBlueprintHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton;
}

// UPCGPinPropertiesBlueprintHelpers @ 149f330f0

UPCGPinPropertiesBlueprintHelpers * __thiscall
UPCGPinPropertiesBlueprintHelpers::UPCGPinPropertiesBlueprintHelpers
          (UPCGPinPropertiesBlueprintHelpers *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
  return this;
}

// UPCGPinPropertiesBlueprintHelpers @ 149f33120

UPCGPinPropertiesBlueprintHelpers * __thiscall
UPCGPinPropertiesBlueprintHelpers::UPCGPinPropertiesBlueprintHelpers
          (UPCGPinPropertiesBlueprintHelpers *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
  return this;
}

// ~UPCGPinPropertiesBlueprintHelpers @ 149f34c00

void __thiscall
UPCGPinPropertiesBlueprintHelpers::~UPCGPinPropertiesBlueprintHelpers
          (UPCGPinPropertiesBlueprintHelpers *this)

{
  *(undefined ***)this = &___7UPCGPinPropertiesBlueprintHelpers__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 149f4dd10

UClass * __cdecl UPCGPinPropertiesBlueprintHelpers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPinPropertiesBlueprintHelpers",
               &Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton,
               StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPinPropertiesBlueprintHelpers>,
               InternalVTableHelperCtorCaller<UPCGPinPropertiesBlueprintHelpers>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPinPropertiesBlueprintHelpers.InnerSingleton;
}

// StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers @ 149f63b70

void __cdecl
UPCGPinPropertiesBlueprintHelpers::StaticRegisterNativesUPCGPinPropertiesBlueprintHelpers(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UPCGPinPropertiesBlueprintHelpers_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAllowsMultipleConnections @ 149f6f7c0

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execAllowsMultipleConnections
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FPCGPinProperties *pFVar3;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar3 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar3->bAllowMultipleData == false) || (pFVar3->bAllowMultipleConnections == false)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsAdvancedPin @ 149f71930

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execIsAdvancedPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  FPCGPinProperties *pFVar3;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar3 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar3 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((pFVar3->PinStatus == Advanced) || (pFVar3->PinStatus == OverrideOrUserParam)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)param_3 = uVar2;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsNormalPin @ 149f71b10

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execIsNormalPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = pFVar2->PinStatus == Normal;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execIsRequiredPin @ 149f71d20

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execIsRequiredPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = pFVar2->PinStatus == Required;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execSetAdvancedPin @ 149f723d0

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execSetAdvancedPin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2->PinStatus = Advanced;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execSetAllowMultipleConnections @ 149f72470

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execSetAllowMultipleConnections
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  int local_res10 [2];
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    pFVar2->bAllowMultipleData = true;
  }
  pFVar2->bAllowMultipleConnections = local_res10[0] != 0;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execSetNormalPin @ 149f72940

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execSetNormalPin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2->PinStatus = Normal;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

// execSetRequiredPin @ 149f729e0

void __cdecl
UPCGPinPropertiesBlueprintHelpers::execSetRequiredPin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPCGPinProperties *pFVar2;
  FPCGPinProperties local_38;
  
  FPCGPinProperties::FPCGPinProperties(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar2 = &local_38;
  if ((FPCGPinProperties *)param_2->MostRecentPropertyAddress != (FPCGPinProperties *)0x0) {
    pFVar2 = (FPCGPinProperties *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2->PinStatus = Required;
  if (local_38.AllowedTypes.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllowedTypes.Ids.AllocatorInstance.Data);
  }
  return;
}

