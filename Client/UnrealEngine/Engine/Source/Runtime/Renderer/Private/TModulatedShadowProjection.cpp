// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 70

// TModulatedShadowProjection<1> @ 145570b40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TModulatedShadowProjection<1> * __thiscall
TModulatedShadowProjection<1>::TModulatedShadowProjection<1>
          (TModulatedShadowProjection<1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>
            ((TShadowProjectionPS<1,0,1,0,0> *)this,param_1);
  this_00 = &this->ModulatedShadowColorParameter;
  (this->MobileBasePassUniformBuffer).BaseIndex = 0xffff;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ModulatedShadowColorParameter).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ModulatedShadowColor",SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  return this;
}

// TModulatedShadowProjection<1> @ 145570bc0

TModulatedShadowProjection<1> * __thiscall
TModulatedShadowProjection<1>::TModulatedShadowProjection<1>(TModulatedShadowProjection<1> *this)

{
  TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>
            ((TShadowProjectionPS<1,0,1,0,0> *)this);
  *(undefined4 *)&(this->ModulatedShadowColorParameter).NumBytes = 0xffff0000;
  (this->ModulatedShadowColorParameter).BufferIndex = 0;
  (this->ModulatedShadowColorParameter).BaseIndex = 0;
  return this;
}

// TModulatedShadowProjection<2> @ 145570bf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TModulatedShadowProjection<2> * __thiscall
TModulatedShadowProjection<2>::TModulatedShadowProjection<2>
          (TModulatedShadowProjection<2> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>
            ((TShadowProjectionPS<2,0,1,0,0> *)this,param_1);
  this_00 = &this->ModulatedShadowColorParameter;
  (this->MobileBasePassUniformBuffer).BaseIndex = 0xffff;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ModulatedShadowColorParameter).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ModulatedShadowColor",SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  return this;
}

// TModulatedShadowProjection<2> @ 145570c70

TModulatedShadowProjection<2> * __thiscall
TModulatedShadowProjection<2>::TModulatedShadowProjection<2>(TModulatedShadowProjection<2> *this)

{
  TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>
            ((TShadowProjectionPS<2,0,1,0,0> *)this);
  *(undefined4 *)&(this->ModulatedShadowColorParameter).NumBytes = 0xffff0000;
  (this->ModulatedShadowColorParameter).BufferIndex = 0;
  (this->ModulatedShadowColorParameter).BaseIndex = 0;
  return this;
}

// TModulatedShadowProjection<3> @ 145570ca0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TModulatedShadowProjection<3> * __thiscall
TModulatedShadowProjection<3>::TModulatedShadowProjection<3>
          (TModulatedShadowProjection<3> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>
            ((TShadowProjectionPS<3,0,1,0,0> *)this,param_1);
  this_00 = &this->ModulatedShadowColorParameter;
  (this->MobileBasePassUniformBuffer).BaseIndex = 0xffff;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ModulatedShadowColorParameter).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ModulatedShadowColor",SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  return this;
}

// TModulatedShadowProjection<3> @ 145570d20

TModulatedShadowProjection<3> * __thiscall
TModulatedShadowProjection<3>::TModulatedShadowProjection<3>(TModulatedShadowProjection<3> *this)

{
  TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>
            ((TShadowProjectionPS<3,0,1,0,0> *)this);
  *(undefined4 *)&(this->ModulatedShadowColorParameter).NumBytes = 0xffff0000;
  (this->ModulatedShadowColorParameter).BufferIndex = 0;
  (this->ModulatedShadowColorParameter).BaseIndex = 0;
  return this;
}

// TModulatedShadowProjection<4> @ 145570d50

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TModulatedShadowProjection<4> * __thiscall
TModulatedShadowProjection<4>::TModulatedShadowProjection<4>
          (TModulatedShadowProjection<4> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>
            ((TShadowProjectionPS<4,0,1,0,0> *)this,param_1);
  this_00 = &this->ModulatedShadowColorParameter;
  (this->MobileBasePassUniformBuffer).BaseIndex = 0xffff;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ModulatedShadowColorParameter).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ModulatedShadowColor",SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  return this;
}

// TModulatedShadowProjection<4> @ 145570dd0

TModulatedShadowProjection<4> * __thiscall
TModulatedShadowProjection<4>::TModulatedShadowProjection<4>(TModulatedShadowProjection<4> *this)

{
  TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>
            ((TShadowProjectionPS<4,0,1,0,0> *)this);
  *(undefined4 *)&(this->ModulatedShadowColorParameter).NumBytes = 0xffff0000;
  (this->ModulatedShadowColorParameter).BufferIndex = 0;
  (this->ModulatedShadowColorParameter).BaseIndex = 0;
  return this;
}

// TModulatedShadowProjection<5> @ 145570e00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TModulatedShadowProjection<5> * __thiscall
TModulatedShadowProjection<5>::TModulatedShadowProjection<5>
          (TModulatedShadowProjection<5> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParametersMetadata *pFVar1;
  
  TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>
            ((TShadowProjectionPS<5,0,1,0,0> *)this,param_1);
  this_00 = &this->ModulatedShadowColorParameter;
  (this->MobileBasePassUniformBuffer).BaseIndex = 0xffff;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  (this->ModulatedShadowColorParameter).NumBytes = 0;
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"ModulatedShadowColor",SPF_Optional);
  pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->MobileBasePassUniformBuffer,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  return this;
}

// TModulatedShadowProjection<5> @ 145570e80

TModulatedShadowProjection<5> * __thiscall
TModulatedShadowProjection<5>::TModulatedShadowProjection<5>(TModulatedShadowProjection<5> *this)

{
  TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>
            ((TShadowProjectionPS<5,0,1,0,0> *)this);
  *(undefined4 *)&(this->ModulatedShadowColorParameter).NumBytes = 0xffff0000;
  (this->ModulatedShadowColorParameter).BufferIndex = 0;
  (this->ModulatedShadowColorParameter).BaseIndex = 0;
  return this;
}

// ~TModulatedShadowProjection<1> @ 145576cf0

void __thiscall
TModulatedShadowProjection<1>::~TModulatedShadowProjection<1>(TModulatedShadowProjection<1> *this)

{
  longlong *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this_00 = &this->_padding_;
  pFVar1 = (FShaderLooseParameterBufferInfo *)*this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar1 >> 0x18) + (longlong)this_00);
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,(int)this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// ~TModulatedShadowProjection<2> @ 145576d00

void __thiscall
TModulatedShadowProjection<2>::~TModulatedShadowProjection<2>(TModulatedShadowProjection<2> *this)

{
  longlong *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this_00 = &this->_padding_;
  pFVar1 = (FShaderLooseParameterBufferInfo *)*this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar1 >> 0x18) + (longlong)this_00);
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,(int)this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// ~TModulatedShadowProjection<3> @ 145576d10

void __thiscall
TModulatedShadowProjection<3>::~TModulatedShadowProjection<3>(TModulatedShadowProjection<3> *this)

{
  longlong *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this_00 = &this->_padding_;
  pFVar1 = (FShaderLooseParameterBufferInfo *)*this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar1 >> 0x18) + (longlong)this_00);
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,(int)this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// ~TModulatedShadowProjection<4> @ 145576d20

void __thiscall
TModulatedShadowProjection<4>::~TModulatedShadowProjection<4>(TModulatedShadowProjection<4> *this)

{
  longlong *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this_00 = &this->_padding_;
  pFVar1 = (FShaderLooseParameterBufferInfo *)*this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar1 >> 0x18) + (longlong)this_00);
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,(int)this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// ~TModulatedShadowProjection<5> @ 145576d30

void __thiscall
TModulatedShadowProjection<5>::~TModulatedShadowProjection<5>(TModulatedShadowProjection<5> *this)

{
  longlong *this_00;
  FShaderLooseParameterBufferInfo *pFVar1;
  
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  this_00 = &this->_padding_;
  pFVar1 = (FShaderLooseParameterBufferInfo *)*this_00;
  if (((ulonglong)pFVar1 & 1) != 0) {
    pFVar1 = (FShaderLooseParameterBufferInfo *)(((longlong)pFVar1 >> 0x18) + (longlong)this_00);
  }
  DestructItems<FShaderLooseParameterBufferInfo,int>(pFVar1,(int)this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this_00);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->_padding_);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase((FMemoryImageAllocatorBase *)this);
  return;
}

// ConstructCompiledInstance @ 145586550

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
TModulatedShadowProjection<1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,0,1,0,0> *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<1,0,1,0,0> *)0x0) {
    TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"ModulatedShadowColor",
               SPF_Optional);
    pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 6),
               param_1->ParameterMap,pFVar1->ShaderVariableName,SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455865f0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
TModulatedShadowProjection<2>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,0,1,0,0> *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<2,0,1,0,0> *)0x0) {
    TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"ModulatedShadowColor",
               SPF_Optional);
    pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 6),
               param_1->ParameterMap,pFVar1->ShaderVariableName,SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586690

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
TModulatedShadowProjection<3>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,0,1,0,0> *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<3,0,1,0,0> *)0x0) {
    TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"ModulatedShadowColor",
               SPF_Optional);
    pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 6),
               param_1->ParameterMap,pFVar1->ShaderVariableName,SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586730

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
TModulatedShadowProjection<4>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,0,1,0,0> *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<4,0,1,0,0> *)0x0) {
    TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"ModulatedShadowColor",
               SPF_Optional);
    pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 6),
               param_1->ParameterMap,pFVar1->ShaderVariableName,SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455867d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl
TModulatedShadowProjection<5>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,0,1,0,0> *this;
  FShaderParametersMetadata *pFVar1;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<5,0,1,0,0> *)0x0) {
    TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>(this,param_1);
    *(undefined2 *)((longlong)&this[1]._padding_ + 6) = 0xffff;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined2 *)((longlong)&this[1]._padding_ + 4) = 0;
    FShaderParameter::Bind
              ((FShaderParameter *)(this + 1),param_1->ParameterMap,L"ModulatedShadowColor",
               SPF_Optional);
    pFVar1 = FMobileBasePassUniformParameters::GetStructMetadata();
    FShaderUniformBufferParameter::Bind
              ((FShaderUniformBufferParameter *)((longlong)&this[1]._padding_ + 6),
               param_1->ParameterMap,pFVar1->ShaderVariableName,SPF_Optional);
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588ac0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl TModulatedShadowProjection<1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,0,1,0,0> *this;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<1,0,1,0,0> *)0x0) {
    TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588b10

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl TModulatedShadowProjection<2>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,0,1,0,0> *this;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<2,0,1,0,0> *)0x0) {
    TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588b60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl TModulatedShadowProjection<3>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,0,1,0,0> *this;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<3,0,1,0,0> *)0x0) {
    TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588bb0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl TModulatedShadowProjection<4>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,0,1,0,0> *this;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<4,0,1,0,0> *)0x0) {
    TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588c00

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __cdecl TModulatedShadowProjection<5>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,0,1,0,0> *this;
  
  this = ::operator_new(0x150);
  if (this != (TShadowProjectionPS<5,0,1,0,0> *)0x0) {
    TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>(this);
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0xffff0000;
    *(undefined4 *)&this[1]._padding_ = 0;
    return (FShader *)this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1455a01c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl TModulatedShadowProjection<1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"TModulatedShadowProjection<1>",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TModulatedShadowProjection<1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a03c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl TModulatedShadowProjection<2>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"TModulatedShadowProjection<2>",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TModulatedShadowProjection<2>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a05c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl TModulatedShadowProjection<3>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"TModulatedShadowProjection<3>",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TModulatedShadowProjection<3>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a07c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl TModulatedShadowProjection<4>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"TModulatedShadowProjection<4>",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TModulatedShadowProjection<4>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a09c0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderType * __cdecl TModulatedShadowProjection<5>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,L"TModulatedShadowProjection<5>",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x150,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TModulatedShadowProjection<5>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1455b09b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TModulatedShadowProjection<1>::GetTypeLayout(TModulatedShadowProjection<1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ef8a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ef68 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ef70 = ::TypeBuffer[0x10];
    DAT_15513ef70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef80 = 0x14e;
    _DAT_15513ef84 = 1;
    _DAT_15513ef88 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e582 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e560 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e568 = ::TypeBuffer[0x10];
    DAT_15513e568_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e568_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e568_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e568_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e568_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e568_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e568_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e570 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e578 = 0x148;
    _DAT_15513e57c = 1;
    _DAT_15513e580 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<1,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b09c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TModulatedShadowProjection<2>::GetTypeLayout(TModulatedShadowProjection<2> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<2>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ef2a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ef08 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ef10 = ::TypeBuffer[0x10];
    DAT_15513ef10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef20 = 0x14e;
    _DAT_15513ef24 = 1;
    _DAT_15513ef28 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e522 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e500 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e508 = ::TypeBuffer[0x10];
    DAT_15513e508_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e508_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e508_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e508_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e508_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e508_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e508_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e510 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e518 = 0x148;
    _DAT_15513e51c = 1;
    _DAT_15513e520 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<2,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b09d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TModulatedShadowProjection<3>::GetTypeLayout(TModulatedShadowProjection<3> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<3>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513eeca = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513eea8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513eeb0 = ::TypeBuffer[0x10];
    DAT_15513eeb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513eeb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513eeb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513eeb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513eeb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513eeb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513eeb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513eeb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513eec0 = 0x14e;
    _DAT_15513eec4 = 1;
    _DAT_15513eec8 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e4c2 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e4a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e4a8 = ::TypeBuffer[0x10];
    DAT_15513e4a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e4a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e4a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e4a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e4a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e4a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e4a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e4b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e4b8 = 0x148;
    _DAT_15513e4bc = 1;
    _DAT_15513e4c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<3,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b09e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TModulatedShadowProjection<4>::GetTypeLayout(TModulatedShadowProjection<4> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<4>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ee6a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ee48 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ee50 = ::TypeBuffer[0x10];
    DAT_15513ee50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee60 = 0x14e;
    _DAT_15513ee64 = 1;
    _DAT_15513ee68 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e462 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e440 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e448 = ::TypeBuffer[0x10];
    DAT_15513e448_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e448_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e448_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e448_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e448_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e448_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e448_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e450 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e458 = 0x148;
    _DAT_15513e45c = 1;
    _DAT_15513e460 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<4,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b09f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TModulatedShadowProjection<5>::GetTypeLayout(TModulatedShadowProjection<5> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<5>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ee0a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ede8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513edf0 = ::TypeBuffer[0x10];
    DAT_15513edf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513edf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513edf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513edf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513edf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513edf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513edf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513edf8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee00 = 0x14e;
    _DAT_15513ee04 = 1;
    _DAT_15513ee08 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e402 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e3e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e3e8 = ::TypeBuffer[0x10];
    DAT_15513e3e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e3e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e3e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e3e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e3e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e3e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e3e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e3f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e3f8 = 0x148;
    _DAT_15513e3fc = 1;
    _DAT_15513e400 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<5,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 1455b5c60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// InternalDestroy @ 1455b5ca0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<2>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// InternalDestroy @ 1455b5ce0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<3>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// InternalDestroy @ 1455b5d20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<4>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// InternalDestroy @ 1455b5d60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<5>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x150);
  return;
}

// ModifyCompilationEnvironment @ 1455baad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<1>::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"SHADOW_QUALITY",1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBPIXEL_SHADOW",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_TRANSMISSION",0);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORCE_DEPTH_TEXTURE_READS",(uint)bVar1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MODULATED_SHADOWS",1);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_MOBILE_DEPTHREAD_SUBPASS",bVar1 ^ 1);
  return;
}

// ModifyCompilationEnvironment @ 1455bab90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<2>::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"SHADOW_QUALITY",2);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBPIXEL_SHADOW",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_TRANSMISSION",0);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORCE_DEPTH_TEXTURE_READS",(uint)bVar1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MODULATED_SHADOWS",1);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_MOBILE_DEPTHREAD_SUBPASS",bVar1 ^ 1);
  return;
}

// ModifyCompilationEnvironment @ 1455bac50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<3>::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"SHADOW_QUALITY",3);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBPIXEL_SHADOW",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_TRANSMISSION",0);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORCE_DEPTH_TEXTURE_READS",(uint)bVar1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MODULATED_SHADOWS",1);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_MOBILE_DEPTHREAD_SUBPASS",bVar1 ^ 1);
  return;
}

// ModifyCompilationEnvironment @ 1455bad10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<4>::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"SHADOW_QUALITY",4);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBPIXEL_SHADOW",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_TRANSMISSION",0);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORCE_DEPTH_TEXTURE_READS",(uint)bVar1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MODULATED_SHADOWS",1);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_MOBILE_DEPTHREAD_SUBPASS",bVar1 ^ 1);
  return;
}

// ModifyCompilationEnvironment @ 1455badd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
TModulatedShadowProjection<5>::ModifyCompilationEnvironment
          (FGlobalShaderPermutationParameters *param_1,FShaderCompilerEnvironment *param_2)

{
  bool bVar1;
  
  FShaderCompilerEnvironment::SetDefine(param_2,L"SHADOW_QUALITY",5);
  FShaderCompilerEnvironment::SetDefine(param_2,L"SUBPIXEL_SHADOW",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_FADE_PLANE",0);
  FShaderCompilerEnvironment::SetDefine(param_2,L"USE_TRANSMISSION",0);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"FORCE_DEPTH_TEXTURE_READS",(uint)bVar1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"MODULATED_SHADOWS",1);
  bVar1 = MobileUsesFullDepthPrepass((FStaticShaderPlatform)*(EShaderPlatform *)param_1);
  FShaderCompilerEnvironment::SetDefine(param_2,L"IS_MOBILE_DEPTHREAD_SUBPASS",bVar1 ^ 1);
  return;
}

// SetParameters @ 1455ca140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TModulatedShadowProjection<1>::SetParameters
          (TModulatedShadowProjection<1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  uint uVar2;
  
  TShadowProjectionPS<1,0,1,0,0>::SetParameters
            ((TShadowProjectionPS<1,0,1,0,0> *)this,param_1,param_2,param_3,param_4,param_5);
  uVar1 = (this->ModulatedShadowColorParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ModulatedShadowColorParameter).BufferIndex,
               (uint)(this->ModulatedShadowColorParameter).BaseIndex,uVar2,
               &param_4->LightSceneInfo->Proxy->ModulatedShadowColor);
  }
  return;
}

// SetParameters @ 1455ca1d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TModulatedShadowProjection<2>::SetParameters
          (TModulatedShadowProjection<2> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  uint uVar2;
  
  TShadowProjectionPS<2,0,1,0,0>::SetParameters
            ((TShadowProjectionPS<2,0,1,0,0> *)this,param_1,param_2,param_3,param_4,param_5);
  uVar1 = (this->ModulatedShadowColorParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ModulatedShadowColorParameter).BufferIndex,
               (uint)(this->ModulatedShadowColorParameter).BaseIndex,uVar2,
               &param_4->LightSceneInfo->Proxy->ModulatedShadowColor);
  }
  return;
}

// SetParameters @ 1455ca260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TModulatedShadowProjection<3>::SetParameters
          (TModulatedShadowProjection<3> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  uint uVar2;
  
  TShadowProjectionPS<3,0,1,0,0>::SetParameters
            ((TShadowProjectionPS<3,0,1,0,0> *)this,param_1,param_2,param_3,param_4,param_5);
  uVar1 = (this->ModulatedShadowColorParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ModulatedShadowColorParameter).BufferIndex,
               (uint)(this->ModulatedShadowColorParameter).BaseIndex,uVar2,
               &param_4->LightSceneInfo->Proxy->ModulatedShadowColor);
  }
  return;
}

// SetParameters @ 1455ca2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TModulatedShadowProjection<4>::SetParameters
          (TModulatedShadowProjection<4> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  uint uVar2;
  
  TShadowProjectionPS<4,0,1,0,0>::SetParameters
            ((TShadowProjectionPS<4,0,1,0,0> *)this,param_1,param_2,param_3,param_4,param_5);
  uVar1 = (this->ModulatedShadowColorParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ModulatedShadowColorParameter).BufferIndex,
               (uint)(this->ModulatedShadowColorParameter).BaseIndex,uVar2,
               &param_4->LightSceneInfo->Proxy->ModulatedShadowColor);
  }
  return;
}

// SetParameters @ 1455ca380

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TModulatedShadowProjection<5>::SetParameters
          (TModulatedShadowProjection<5> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  uint uVar2;
  
  TShadowProjectionPS<5,0,1,0,0>::SetParameters
            ((TShadowProjectionPS<5,0,1,0,0> *)this,param_1,param_2,param_3,param_4,param_5);
  uVar1 = (this->ModulatedShadowColorParameter).NumBytes;
  uVar2 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar2 = 0x10;
  }
  if (uVar2 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ModulatedShadowColorParameter).BufferIndex,
               (uint)(this->ModulatedShadowColorParameter).BaseIndex,uVar2,
               &param_4->LightSceneInfo->Proxy->ModulatedShadowColor);
  }
  return;
}

// ShouldCompilePermutation @ 1455d72c0

bool __cdecl
TModulatedShadowProjection<1>::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutation @ 1455d7320

bool __cdecl
TModulatedShadowProjection<2>::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutation @ 1455d7380

bool __cdecl
TModulatedShadowProjection<3>::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutation @ 1455d73e0

bool __cdecl
TModulatedShadowProjection<4>::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutation @ 1455d7440

bool __cdecl
TModulatedShadowProjection<5>::ShouldCompilePermutation(FGlobalShaderPermutationParameters *param_1)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *(ushort *)param_1;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[uVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TModulatedShadowProjection<1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TModulatedShadowProjection<2>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d86c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TModulatedShadowProjection<3>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TModulatedShadowProjection<4>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TModulatedShadowProjection<5>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel == ES3_1;
}

// ShouldPrecachePermutationImpl @ 1455da480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TModulatedShadowProjection<1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da490

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TModulatedShadowProjection<2>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da4a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TModulatedShadowProjection<3>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da4b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TModulatedShadowProjection<4>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da4c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TModulatedShadowProjection<5>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1455daf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TModulatedShadowProjection<1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ef8a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ef68 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ef70 = ::TypeBuffer[0x10];
    DAT_15513ef70_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef70_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef70_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef70_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef70_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef70_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef70_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef78 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef80 = 0x14e;
    _DAT_15513ef84 = 1;
    _DAT_15513ef88 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e582 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e560 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e568 = ::TypeBuffer[0x10];
    DAT_15513e568_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e568_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e568_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e568_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e568_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e568_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e568_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e570 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e578 = 0x148;
    _DAT_15513e57c = 1;
    _DAT_15513e580 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<1,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455db1a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TModulatedShadowProjection<2>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<2>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ef2a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ef08 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ef10 = ::TypeBuffer[0x10];
    DAT_15513ef10_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef10_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef10_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef10_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef10_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef10_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef10_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef18 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef20 = 0x14e;
    _DAT_15513ef24 = 1;
    _DAT_15513ef28 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e522 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e500 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e508 = ::TypeBuffer[0x10];
    DAT_15513e508_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e508_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e508_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e508_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e508_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e508_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e508_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<2>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e510 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e518 = 0x148;
    _DAT_15513e51c = 1;
    _DAT_15513e520 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<2,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455db3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TModulatedShadowProjection<3>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<3>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513eeca = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513eea8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513eeb0 = ::TypeBuffer[0x10];
    DAT_15513eeb0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513eeb0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513eeb0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513eeb0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513eeb0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513eeb0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513eeb0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513eeb8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513eec0 = 0x14e;
    _DAT_15513eec4 = 1;
    _DAT_15513eec8 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e4c2 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e4a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e4a8 = ::TypeBuffer[0x10];
    DAT_15513e4a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e4a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e4a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e4a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e4a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e4a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e4a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<3>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e4b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e4b8 = 0x148;
    _DAT_15513e4bc = 1;
    _DAT_15513e4c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<3,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455db5e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TModulatedShadowProjection<4>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<4>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ee6a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ee48 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513ee50 = ::TypeBuffer[0x10];
    DAT_15513ee50_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee50_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee50_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee50_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee50_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee50_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee50_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee58 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee60 = 0x14e;
    _DAT_15513ee64 = 1;
    _DAT_15513ee68 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e462 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e440 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e448 = ::TypeBuffer[0x10];
    DAT_15513e448_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e448_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e448_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e448_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e448_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e448_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e448_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<4>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e450 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e458 = 0x148;
    _DAT_15513e45c = 1;
    _DAT_15513e460 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<4,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455db800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TModulatedShadowProjection<5>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'P';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_TModulatedShado;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TModulatedShadowProjection<5>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "MobileBasePassUniformBuffer";
    DAT_15513ee0a = Freeze::FindFieldNameLength(L"MobileBasePassUniformBuffer");
    _DAT_15513ede8 = FShaderUniformBufferParameter::StaticGetTypeLayout();
    DAT_15513edf0 = ::TypeBuffer[0x10];
    DAT_15513edf0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513edf0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513edf0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513edf0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513edf0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513edf0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513edf0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513edf8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee00 = 0x14e;
    _DAT_15513ee04 = 1;
    _DAT_15513ee08 = 0;
    `public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ModulatedShadowColorParameter";
    DAT_15513e402 = Freeze::FindFieldNameLength(L"ModulatedShadowColorParameter");
    _DAT_15513e3e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513e3e8 = ::TypeBuffer[0x10];
    DAT_15513e3e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e3e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e3e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e3e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e3e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e3e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e3e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TModulatedShadowProjection<5>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e3f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e3f8 = 0x148;
    _DAT_15513e3fc = 1;
    _DAT_15513e400 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = TShadowProjectionPS<5,0,1,0,0>::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

