// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// SetDimensionFromTexture @ 145d4a370

FInitializer * __thiscall
FRHIViewDesc::FTextureUAV::FInitializer::SetDimensionFromTexture
          (FInitializer *this,FRHITexture *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FInitializer *pFVar4;
  longlong lVar5;
  
  if (param_1 == (FRHITexture *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetTexture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xc0b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar5 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  cVar1 = *(char *)(lVar5 + 0x32);
  if (cVar1 == '\0') {
    this->field_0x2 = this->field_0x2 & 0x9f;
    this->field_0x2 = this->field_0x2 | 0x10;
  }
  else {
    if (cVar1 == '\x01') {
      this->field_0x2 = this->field_0x2 & 0xaf;
      this->field_0x2 = this->field_0x2 | 0x20;
      return this;
    }
    if (cVar1 == '\x02') {
      this->field_0x2 = this->field_0x2 & 0xdf;
      this->field_0x2 = this->field_0x2 | 0x50;
      return this;
    }
    if (cVar1 == '\x03') {
      this->field_0x2 = this->field_0x2 & 0xbf;
      this->field_0x2 = this->field_0x2 | 0x30;
      return this;
    }
    if (cVar1 == '\x04') {
      this->field_0x2 = this->field_0x2 & 0xcf;
      this->field_0x2 = this->field_0x2 | 0x40;
      return this;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xbfb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// SetTypeFromBuffer @ 145d4e9b0

FInitializer * __thiscall
FRHIViewDesc::FBufferUAV::FInitializer::SetTypeFromBuffer(FInitializer *this,FRHIBuffer *param_1)

{
  EBufferUsageFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FInitializer *pFVar4;
  
  if (param_1 == (FRHIBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TargetBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb5a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  EVar1 = (param_1->Desc).Usage;
  if ((EVar1 >> 0x14 & 1) != 0) {
    if ((((param_1->Desc).Size != 0) || ((param_1->Desc).Stride != 0)) || (EVar1 != NullResource)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0x54f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FInitializer *)(*pcVar2)();
        return pFVar4;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetBuffer->GetDesc().IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xb5b,
                       L"Null buffer resources are placeholders for the streaming system. They do not contain a valid descriptor for this function to use. Call SetType() instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInitializer *)(*pcVar2)();
      return pFVar4;
    }
  }
  EVar1 = (param_1->Desc).Usage;
  if ((EVar1 & ByteAddressBuffer) != None) {
    this->field_0x2 = 4;
    return this;
  }
  if ((EVar1 >> 0x10 & 1) != 0) {
    this->field_0x2 = 2;
    return this;
  }
  this->field_0x2 = (byte)(EVar1 >> 0xc) & 2 | 1;
  return this;
}

