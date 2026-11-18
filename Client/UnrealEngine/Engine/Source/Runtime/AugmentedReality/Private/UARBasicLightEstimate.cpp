// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 15

// StaticClass @ 14cf2a940

UClass * __cdecl UARBasicLightEstimate::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBasicLightEstimate",
               &Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton,
               StaticRegisterNativesUARBasicLightEstimate,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARBasicLightEstimate>,
               InternalVTableHelperCtorCaller<UARBasicLightEstimate>,local_res8,
               UARLightEstimate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton;
}

// UARBasicLightEstimate @ 14cf40bb0

UARBasicLightEstimate * __thiscall
UARBasicLightEstimate::UARBasicLightEstimate(UARBasicLightEstimate *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UARBasicLightEstimate__6B_;
  return this;
}

// UARBasicLightEstimate @ 14cf40be0

UARBasicLightEstimate * __thiscall
UARBasicLightEstimate::UARBasicLightEstimate
          (UARBasicLightEstimate *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UARBasicLightEstimate__6B_;
  return this;
}

// ~UARBasicLightEstimate @ 14cf43fb0

void __thiscall UARBasicLightEstimate::~UARBasicLightEstimate(UARBasicLightEstimate *this)

{
  this->_padding_ = (longlong)&___7UARLightEstimate__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetAmbientColor @ 14cf50550

FLinearColor * __thiscall
UARBasicLightEstimate::GetAmbientColor
          (UARBasicLightEstimate *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->AmbientColor).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(this->AmbientColor).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetAmbientColorTemperatureKelvin @ 14cf50570

float __thiscall
UARBasicLightEstimate::GetAmbientColorTemperatureKelvin(UARBasicLightEstimate *this)

{
  return this->AmbientColorTemperatureKelvin;
}

// GetAmbientIntensityLumens @ 14cf50580

float __thiscall UARBasicLightEstimate::GetAmbientIntensityLumens(UARBasicLightEstimate *this)

{
  return this->AmbientIntensityLumens;
}

// GetPrivateStaticClass @ 14cf53da0

UClass * __cdecl UARBasicLightEstimate::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBasicLightEstimate",
               &Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton,
               StaticRegisterNativesUARBasicLightEstimate,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARBasicLightEstimate>,
               InternalVTableHelperCtorCaller<UARBasicLightEstimate>,local_res8,
               UARLightEstimate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton;
}

// SetLightEstimate @ 14cf5fe00

void __thiscall
UARBasicLightEstimate::SetLightEstimate(UARBasicLightEstimate *this,float param_1,float param_2)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  this->AmbientIntensityLumens = param_1;
  this->AmbientColorTemperatureKelvin = param_2;
  pFVar2 = FLinearColor::MakeFromColorTemperature(&local_18,param_2);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientColor).field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientColor).field0_0x0 + 8) = uVar1;
  return;
}

// SetLightEstimate @ 14cf5fe40

void __thiscall
UARBasicLightEstimate::SetLightEstimate
          (UARBasicLightEstimate *this,float param_1,FLinearColor *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)&param_2->field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  this->AmbientColorTemperatureKelvin = param_1;
  *(undefined8 *)&(this->AmbientColor).field0_0x0 = uVar1;
  *(undefined8 *)((longlong)&(this->AmbientColor).field0_0x0 + 8) = uVar2;
  return;
}

// SetLightEstimate @ 14cf5fe60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UARBasicLightEstimate::SetLightEstimate
          (UARBasicLightEstimate *this,TVector<double> *param_1,float param_2)

{
  undefined8 uVar1;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  this->AmbientIntensityLumens = param_2 * ___real_45ad9c71;
  pFVar2 = FLinearColor::FLinearColor(&local_18,param_1);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  *(undefined8 *)&(this->AmbientColor).field0_0x0 = *(undefined8 *)&pFVar2->field0_0x0;
  *(undefined8 *)((longlong)&(this->AmbientColor).field0_0x0 + 8) = uVar1;
  return;
}

// StaticRegisterNativesUARBasicLightEstimate @ 14cf60de0

void __cdecl UARBasicLightEstimate::StaticRegisterNativesUARBasicLightEstimate(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UARBasicLightEstimate_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAmbientColor @ 14cf6d4e0

void __cdecl
UARBasicLightEstimate::execGetAmbientColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[1].field_0x10;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execGetAmbientColorTemperatureKelvin @ 14cf6d510

void __cdecl
UARBasicLightEstimate::execGetAmbientColorTemperatureKelvin
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[1].field_0x4;
  return;
}

// execGetAmbientIntensityLumens @ 14cf6d540

void __cdecl
UARBasicLightEstimate::execGetAmbientIntensityLumens(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 1);
  return;
}

