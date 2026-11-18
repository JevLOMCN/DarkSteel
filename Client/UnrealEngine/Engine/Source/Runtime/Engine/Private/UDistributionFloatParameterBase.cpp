// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 1472660d0

UClass * __cdecl UDistributionFloatParameterBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatParameterBase",
               &Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton,
               StaticRegisterNativesUDistributionFloatParameterBase,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDistributionFloatParameterBase>,
               InternalVTableHelperCtorCaller<UDistributionFloatParameterBase>,local_res8,
               UDistributionFloatConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton;
}

// UDistributionFloatParameterBase @ 14726ced0

UDistributionFloatParameterBase * __thiscall
UDistributionFloatParameterBase::UDistributionFloatParameterBase
          (UDistributionFloatParameterBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  return this;
}

// ~UDistributionFloatParameterBase @ 14726d610

void __thiscall
UDistributionFloatParameterBase::~UDistributionFloatParameterBase
          (UDistributionFloatParameterBase *this)

{
  this->_padding_ = (longlong)&UDistribution::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDistribution::_vftable__for__FCurveEdInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// CanBeBaked @ 14726e920

bool __thiscall UDistributionFloatParameterBase::CanBeBaked(UDistributionFloatParameterBase *this)

{
  return false;
}

// GetParamValue @ 14726ed80

bool __thiscall
UDistributionFloatParameterBase::GetParamValue
          (UDistributionFloatParameterBase *this,UObject *param_1,FName param_2,float *param_3)

{
  return false;
}

// GetPrivateStaticClass @ 14726fae0

UClass * __cdecl UDistributionFloatParameterBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DistributionFloatParameterBase",
               &Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton,
               StaticRegisterNativesUDistributionFloatParameterBase,0x60,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDistributionFloatParameterBase>,
               InternalVTableHelperCtorCaller<UDistributionFloatParameterBase>,local_res8,
               UDistributionFloatConstant::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDistributionFloatParameterBase.InnerSingleton;
}

// StaticRegisterNativesUDistributionFloatParameterBase @ 147270a90

void __cdecl
UDistributionFloatParameterBase::StaticRegisterNativesUDistributionFloatParameterBase(void)

{
  return;
}

// UDistributionFloatParameterBase @ 147b3ab10

UDistributionFloatParameterBase * __thiscall
UDistributionFloatParameterBase::UDistributionFloatParameterBase
          (UDistributionFloatParameterBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveEdInterface__;
  (this->ParameterName).ComparisonIndex = 0;
  (this->ParameterName).Number = 0;
  this->MaxInput = 1.0;
  this->MaxOutput = 1.0;
  return this;
}

// GetValue @ 147b71bf0

float __thiscall
UDistributionFloatParameterBase::GetValue
          (UDistributionFloatParameterBase *this,float param_1,UObject *param_2,
          FRandomStream *param_3)

{
  float fVar1;
  uchar uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float local_res8 [8];
  
  fVar5 = 0.0;
  local_res8[0] = 0.0;
  cVar3 = (**(code **)(this->_padding_ + 0x2e0))(this,param_2,this->ParameterName,local_res8);
  if (cVar3 == '\0') {
    local_res8[0] = *(float *)&this->_padding_;
  }
  uVar2 = (this->ParamMode).Value;
  if (uVar2 != '\x02') {
    if (uVar2 == '\x01') {
      local_res8[0] = (float)((uint)local_res8[0] & __xmm_7fffffff7fffffff7fffffff7fffffff);
    }
    fVar1 = this->MinInput;
    fVar4 = this->MaxInput;
    if (fVar1 < fVar4) {
      fVar5 = (this->MaxOutput - this->MinOutput) / (fVar4 - fVar1);
    }
    if (local_res8[0] <= fVar4) {
      fVar4 = local_res8[0];
    }
    if (fVar4 <= fVar1) {
      fVar4 = fVar1;
    }
    return (fVar4 - fVar1) * fVar5 + this->MinOutput;
  }
  return local_res8[0];
}

