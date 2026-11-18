// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// InitRHI @ 1463bb5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionTransformBuffer::InitRHI
          (FGeometryCollectionTransformBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  
  RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
  TVar3 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar3.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  TVar4 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
  pTVar2 = &this->VertexBufferSRV;
  if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
    this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar2->Reference = *TVar4.Reference;
    *(undefined8 *)TVar4.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return;
}

// UpdateDynamicData @ 1463ce3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeometryCollectionTransformBuffer::UpdateDynamicData
          (FGeometryCollectionTransformBuffer *this,FRHICommandListBase *param_1,
          TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *param_2,
          EResourceLockMode param_3)

{
  code *pcVar1;
  bool bVar2;
  void *_Dst;
  
  if (this->NumTransforms != param_2->ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumTransforms == Transforms.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionSceneProxy.cpp"
                       ,0x6ab,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = FRHICommandListBase::LockBuffer
                   (param_1,(FRHIBuffer *)this->_padding_,0,param_2->ArrayNum << 6,param_3);
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 6);
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)this->_padding_);
  return;
}

