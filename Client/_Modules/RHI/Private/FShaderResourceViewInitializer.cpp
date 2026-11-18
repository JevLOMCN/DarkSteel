// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// FShaderResourceViewInitializer @ 145c46410

FShaderResourceViewInitializer * __thiscall
FShaderResourceViewInitializer::FShaderResourceViewInitializer
          (FShaderResourceViewInitializer *this,FRHIBuffer *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Buffer = param_1;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer((FInitializer *)this,param_1);
  return this;
}

// FShaderResourceViewInitializer @ 145c46440

FShaderResourceViewInitializer * __thiscall
FShaderResourceViewInitializer::FShaderResourceViewInitializer
          (FShaderResourceViewInitializer *this,FRHIBuffer *param_1,uint param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FShaderResourceViewInitializer *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Buffer = param_1;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer((FInitializer *)this,param_1);
  cVar1 = *(char *)((longlong)&this->_padding_ + 2);
  *(uint *)((longlong)&this->_padding_ + 4) = param_2;
  if ((cVar1 == '\0') || (cVar1 == '\x03')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.SRV.BufferType != EBufferType::Unknown && Buffer.SRV.BufferType != EBufferType::AccelerationStructure"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb35,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FShaderResourceViewInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  *(uint *)&this->_padding_ = param_3;
  return this;
}

// FShaderResourceViewInitializer @ 145c464c0

FShaderResourceViewInitializer * __thiscall
FShaderResourceViewInitializer::FShaderResourceViewInitializer
          (FShaderResourceViewInitializer *this,FRHIBuffer *param_1,FRHIRayTracingScene *param_2,
          uint param_3)

{
  code *pcVar1;
  bool bVar2;
  FShaderResourceViewInitializer *pFVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Buffer = param_1;
  FRHIViewDesc::FBufferSRV::FInitializer::SetTypeFromBuffer((FInitializer *)this,param_1);
  if (*(char *)((longlong)&this->_padding_ + 2) != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer.SRV.BufferType == EBufferType::AccelerationStructure",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FShaderResourceViewInitializer *)(*pcVar1)();
      return pFVar3;
    }
  }
  this->_padding_ = (longlong)param_2;
  *(uint *)((longlong)&this->_padding_ + 4) = param_3;
  return this;
}

// FShaderResourceViewInitializer @ 145c46540

FShaderResourceViewInitializer * __thiscall
FShaderResourceViewInitializer::FShaderResourceViewInitializer
          (FShaderResourceViewInitializer *this,FRHIBuffer *param_1,EPixelFormat param_2)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Buffer = param_1;
  if (((param_1->Desc).Usage & ByteAddressBuffer) != None) {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
    return this;
  }
  *(EPixelFormat *)((longlong)&this->_padding_ + 1) = param_2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FShaderResourceViewInitializer @ 145c46570

FShaderResourceViewInitializer * __thiscall
FShaderResourceViewInitializer::FShaderResourceViewInitializer
          (FShaderResourceViewInitializer *this,FRHIBuffer *param_1,EPixelFormat param_2,
          uint param_3,uint param_4)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Buffer = param_1;
  if (((param_1->Desc).Usage & ByteAddressBuffer) != None) {
    *(undefined1 *)((longlong)&this->_padding_ + 2) = 4;
    *(uint *)((longlong)&this->_padding_ + 4) = param_3;
    *(uint *)&this->_padding_ = param_4;
    return this;
  }
  *(EPixelFormat *)((longlong)&this->_padding_ + 1) = param_2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_3;
  *(uint *)&this->_padding_ = param_4;
  return this;
}

