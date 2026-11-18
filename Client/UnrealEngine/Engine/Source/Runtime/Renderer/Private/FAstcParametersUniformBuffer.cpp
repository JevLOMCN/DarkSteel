// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 14590c5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
RuntimeVirtualTexture::FAstcParametersUniformBuffer::InitRHI
          (FAstcParametersUniformBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> TVar1;
  undefined8 *puVar2;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  undefined8 uStack_100;
  undefined **local_c0;
  uchar *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  wchar_t *local_98;
  undefined ***pppuStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_68 = 0xf3;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_48 = 0x78;
  uStack_34 = 0;
  uStack_60 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_58 = L"TritsToInteger";
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b8 = "";
  local_b0 = 0xf3;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  local_68 = *(undefined8 *)TVar1.Reference;
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uStack_100 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_b8 = "";
  pppuStack_90 = &local_c0;
  local_a8 = 0x7d;
  uStack_a0 = uStack_100;
  local_98 = L"QuintsToInteger";
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x200000078;
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0 = 0x7d;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  uStack_60 = *(undefined8 *)TVar1.Reference;
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uStack_100 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_b8 = "";
  pppuStack_90 = &local_c0;
  local_a8 = 0x180;
  uStack_a0 = uStack_100;
  local_98 = L"ScrambleTable";
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x200000078;
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0 = 0x180;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  local_58 = *(wchar_t **)TVar1.Reference;
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uStack_100 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_b8 = "";
  pppuStack_90 = &local_c0;
  local_a8 = 0x100;
  uStack_a0 = uStack_100;
  local_98 = L"ColorScrambleTable48";
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x200000078;
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0 = 0x100;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  uStack_50 = *(undefined8 *)TVar1.Reference;
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  uStack_100 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_b8 = "";
  pppuStack_90 = &local_c0;
  local_a8 = 0x100;
  uStack_a0 = uStack_100;
  local_98 = L"ColorScrambleTable80";
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 0x200000078;
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0 = 0x100;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  local_48 = (undefined4)*(undefined8 *)TVar1.Reference;
  uStack_44 = (undefined4)((ulonglong)*(undefined8 *)TVar1.Reference >> 0x20);
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  local_b8 = "";
  pppuStack_90 = &local_c0;
  uStack_100 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
  local_a8 = 0x100;
  uStack_a0 = uStack_100;
  uStack_80 = 0;
  local_98 = L"ColorScrambleTable192";
  local_78 = 0;
  local_88 = 0x200000078;
  local_c0 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0 = 0x100;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  TVar1 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)local_res8);
  uStack_40 = (undefined4)*(undefined8 *)TVar1.Reference;
  uStack_3c = (undefined4)((ulonglong)*(undefined8 *)TVar1.Reference >> 0x20);
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  puVar2 = *(undefined8 **)&this->field_0x30;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = FMemory::Malloc(0x30,0x10);
    *(undefined8 **)&this->field_0x30 = puVar2;
  }
  *puVar2 = local_68;
  puVar2[1] = uStack_60;
  puVar2[2] = local_58;
  puVar2[3] = uStack_50;
  puVar2[4] = CONCAT44(uStack_44,local_48);
  puVar2[5] = CONCAT44(uStack_3c,uStack_40);
  TUniformBuffer<RuntimeVirtualTexture::FAstcParameters>::InitRHI
            ((TUniformBuffer<RuntimeVirtualTexture::FAstcParameters> *)this,param_1);
  return;
}

