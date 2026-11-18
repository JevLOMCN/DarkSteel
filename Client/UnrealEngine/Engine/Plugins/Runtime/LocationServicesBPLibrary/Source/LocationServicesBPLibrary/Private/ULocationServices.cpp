// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocationServicesBPLibrary
// Functions: 21

// StaticClass @ 14f03a700

UClass * __cdecl ULocationServices::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServices.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServices",
               &Z_Registration_Info_UClass_ULocationServices.InnerSingleton,
               StaticRegisterNativesULocationServices,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocationServices>,
               InternalVTableHelperCtorCaller<ULocationServices>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServices.InnerSingleton;
}

// ULocationServices @ 14f03b000

ULocationServices * __thiscall
ULocationServices::ULocationServices(ULocationServices *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULocationServices__6B_;
  return this;
}

// ULocationServices @ 14f03b030

ULocationServices * __thiscall
ULocationServices::ULocationServices(ULocationServices *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7ULocationServices__6B_;
  return this;
}

// ~ULocationServices @ 14f03b0e0

void __thiscall ULocationServices::~ULocationServices(ULocationServices *this)

{
  *(undefined ***)this = &___7ULocationServices__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AreLocationServicesEnabled @ 14f03b240

bool __cdecl ULocationServices::AreLocationServicesEnabled(void)

{
  undefined1 uVar1;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03b24f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2d8))();
    return (bool)uVar1;
  }
  return false;
}

// ClearLocationServicesImpl @ 14f03b260

void __cdecl ULocationServices::ClearLocationServicesImpl(void)

{
  ImplInstance = (ULocationServicesImpl *)0x0;
  return;
}

// GetLastKnownLocation @ 14f03b2e0

FLocationServicesData * __cdecl
ULocationServices::GetLastKnownLocation(FLocationServicesData *__return_storage_ptr__)

{
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    (**(code **)(ImplInstance->_padding_ + 0x2c8))(ImplInstance,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Timestamp = 0.0;
  __return_storage_ptr__->Longitude = 0.0;
  __return_storage_ptr__->Latitude = 0.0;
  __return_storage_ptr__->HorizontalAccuracy = 0.0;
  __return_storage_ptr__->VerticalAccuracy = 0.0;
  __return_storage_ptr__->Altitude = 0.0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14f03b350

UClass * __cdecl ULocationServices::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocationServices.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LocationServicesBPLibrary",L"LocationServices",
               &Z_Registration_Info_UClass_ULocationServices.InnerSingleton,
               StaticRegisterNativesULocationServices,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULocationServices>,
               InternalVTableHelperCtorCaller<ULocationServices>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocationServices.InnerSingleton;
}

// InitLocationServices @ 14f03b4c0

bool __cdecl
ULocationServices::InitLocationServices(ELocationAccuracy param_1,float param_2,float param_3)

{
  undefined1 uVar1;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03b4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2b0))(ImplInstance,param_1,param_2,param_3);
    return (bool)uVar1;
  }
  return false;
}

// IsLocationAccuracyAvailable @ 14f03b530

bool __cdecl ULocationServices::IsLocationAccuracyAvailable(ELocationAccuracy param_1)

{
  undefined1 uVar1;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03b542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2d0))(ImplInstance,param_1);
    return (bool)uVar1;
  }
  return false;
}

// SetLocationServicesImpl @ 14f03b580

void __cdecl ULocationServices::SetLocationServicesImpl(ULocationServicesImpl *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ImplInstance == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\LocationServicesBPLibrary\\Source\\LocationServicesBPLibrary\\Private\\LocationServicesBPLibrary.cpp"
                       ,0x11,L"Location services already set.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ImplInstance = param_1;
  return;
}

// StartLocationServices @ 14f03b5e0

bool __cdecl ULocationServices::StartLocationServices(void)

{
  undefined1 uVar1;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03b5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2b8))();
    return (bool)uVar1;
  }
  return false;
}

// StaticRegisterNativesULocationServices @ 14f03b600

void __cdecl ULocationServices::StaticRegisterNativesULocationServices(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_ULocationServices_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopLocationServices @ 14f03b660

bool __cdecl ULocationServices::StopLocationServices(void)

{
  undefined1 uVar1;
  
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014f03b66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2c0))();
    return (bool)uVar1;
  }
  return false;
}

// execAreLocationServicesEnabled @ 14f03b740

void __cdecl
ULocationServices::execAreLocationServicesEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2d8))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetLastKnownLocation @ 14f03b790

void __cdecl
ULocationServices::execGetLastKnownLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance == (ULocationServicesImpl *)0x0) {
    local_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    local_18 = 0;
  }
  else {
    (**(code **)(ImplInstance->_padding_ + 0x2c8))(ImplInstance,&local_28);
  }
  *(undefined4 *)param_3 = local_28;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_24;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_1c;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_18;
  return;
}

// execGetLocationServicesImpl @ 14f03b800

void __cdecl
ULocationServices::execGetLocationServicesImpl(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(ULocationServicesImpl **)param_3 = ImplInstance;
  return;
}

// execInitLocationServices @ 14f03b830

void __cdecl
ULocationServices::execInitLocationServices(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    uVar2 = (**(code **)(ImplInstance->_padding_ + 0x2b0))
                      (ImplInstance,local_res10[0],local_res20[0],local_res18[0]);
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsLocationAccuracyAvailable @ 14f03b960

void __cdecl
ULocationServices::execIsLocationAccuracyAvailable(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    uVar2 = (**(code **)(ImplInstance->_padding_ + 0x2d0))(ImplInstance,local_res10[0]);
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execStartLocationServices @ 14f03ba00

void __cdecl
ULocationServices::execStartLocationServices(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2b8))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execStopLocationServices @ 14f03ba50

void __cdecl
ULocationServices::execStopLocationServices(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (ImplInstance != (ULocationServicesImpl *)0x0) {
    uVar1 = (**(code **)(ImplInstance->_padding_ + 0x2c0))();
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

