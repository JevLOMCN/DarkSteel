// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 1

// InitRHI @ 14a838440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FWN_DummyFloatBuffer::InitRHI(FWN_DummyFloatBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  undefined8 *puVar6;
  TRefCountPtr<FRHIShaderResourceView> TVar7;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  TVar5 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  puVar1 = &this->field_0x20;
  if ((FRHIBuffer *)puVar1 != TVar5.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  puVar6 = FRHICommandListBase::LockBuffer(param_1,*(FRHIBuffer **)puVar1,0,0x10,RLM_WriteOnly);
  *puVar6 = 0;
  puVar6[1] = 0;
  FRHICommandListBase::UnlockBuffer(param_1,*(FRHIBuffer **)puVar1);
  if (GPixelFormats[0xd].BlockBytes != 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(float) == GPixelFormats[PF_R32_FLOAT].BlockBytes",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                       ,0x3b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar7 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res18,*(FInitializer **)puVar1);
  puVar1 = &this->field_0x28;
  if ((FRHIShaderResourceView *)puVar1 != TVar7.Reference) {
    pFVar2 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = *(undefined8 *)TVar7.Reference;
    *(undefined8 *)TVar7.Reference = 0;
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  return;
}

