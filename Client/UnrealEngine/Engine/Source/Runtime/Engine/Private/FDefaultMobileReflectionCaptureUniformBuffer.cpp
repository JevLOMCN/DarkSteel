// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// InitRHI @ 1484a17f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultMobileReflectionCaptureUniformBuffer::InitRHI
          (FDefaultMobileReflectionCaptureUniformBuffer *this,FRHICommandListBase *param_1)

{
  FRHITexture *pFVar1;
  FRHISamplerState *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = _UNK_1506894f8;
  uVar3 = ___xmm_0000000000000000000000003f800000;
  pFVar1 = (GBlackTextureCube->TextureRHI).Reference;
  pFVar2 = (GBlackTextureCube->SamplerStateRHI).Reference;
  puVar5 = *(undefined8 **)&this->field_0x30;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = FMemory::Malloc(0x30,0x10);
    *(undefined8 **)&this->field_0x30 = puVar5;
  }
  *puVar5 = uVar3;
  puVar5[1] = uVar4;
  puVar5[2] = pFVar1;
  puVar5[3] = pFVar2;
  puVar5[4] = pFVar1;
  puVar5[5] = pFVar2;
  TUniformBuffer<FMobileReflectionCaptureShaderParameters>::InitRHI
            ((TUniformBuffer<FMobileReflectionCaptureShaderParameters> *)this,param_1);
  return;
}

