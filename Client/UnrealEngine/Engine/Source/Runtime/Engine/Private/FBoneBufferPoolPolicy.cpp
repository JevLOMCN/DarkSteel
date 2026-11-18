// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// CreateResource @ 147cea060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVertexBufferAndSRV * __thiscall
FBoneBufferPoolPolicy::CreateResource
          (FBoneBufferPoolPolicy *this,FVertexBufferAndSRV *__return_storage_ptr__,
          FRHICommandListBase *param_1,uint param_2)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FRHIBuffer *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ERHIAccess EVar5;
  FVertexBufferAndSRV *pFVar6;
  TRefCountPtr<FRHIBuffer> TVar7;
  TRefCountPtr<FRHIShaderResourceView> TVar8;
  byte bVar9;
  FRHIResource *local_res10;
  FRHIResource *local_70;
  longlong local_68;
  longlong lStack_60;
  ulonglong local_58;
  longlong lStack_50;
  wchar_t *local_48;
  longlong lStack_40;
  ulonglong local_38;
  longlong lStack_30;
  longlong local_28;
  
  uVar4 = FSharedPoolPolicyData::GetPoolBucketIndex((FSharedPoolPolicyData *)this,param_2);
  if (0x11 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Bucket < NumPoolBucketSizes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                       ,0xb1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVertexBufferAndSRV *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar4 = FSharedPoolPolicyData::BucketSizes[uVar4];
  (__return_storage_ptr__->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  pTVar1 = &__return_storage_ptr__->VertexBufferSRV;
  (__return_storage_ptr__->VertexBufferRHI).Reference = (FRHIBuffer *)0x0;
  __return_storage_ptr__->Size = 0;
  bVar9 = (byte)GNumExplicitGPUsForRendering;
  EVar5 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Dynamic,false);
  local_58 = (ulonglong)uVar4;
  lStack_50 = CONCAT44((1 << (bVar9 & 0x1f)) + -1,0x4102);
  local_38 = (ulonglong)EVar5;
  lStack_30 = 0;
  local_48 = L"FBoneBufferPoolPolicy";
  lStack_40 = 0;
  local_28 = 0;
  TVar7 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&stack0x00000010);
  if ((FRHIBuffer *)__return_storage_ptr__ != TVar7.Reference) {
    this_00 = (__return_storage_ptr__->VertexBufferRHI).Reference;
    (__return_storage_ptr__->VertexBufferRHI).Reference = (FRHIBuffer *)(TVar7.Reference)->_padding_
    ;
    (TVar7.Reference)->_padding_ = 0;
    if (this_00 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  lStack_60 = 0;
  local_68 = 0x10100;
  TVar8 = FRHICommandListBase::CreateShaderResourceView
                    (param_1,(FRHIBuffer *)&stack0xffffffffffffff90,
                     (FInitializer *)(__return_storage_ptr__->VertexBufferRHI).Reference);
  if ((FRHIShaderResourceView *)pTVar1 != TVar8.Reference) {
    this_01 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar1->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (this_01 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (local_70 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_70);
  }
  __return_storage_ptr__->Size = uVar4;
  return __return_storage_ptr__;
}

// FreeResource @ 147cf8390

void __thiscall
FBoneBufferPoolPolicy::FreeResource(FBoneBufferPoolPolicy *this,FVertexBufferAndSRV *param_1)

{
  return;
}

// GetCreationArguments @ 147cfbe90

uint __thiscall
FBoneBufferPoolPolicy::GetCreationArguments
          (FBoneBufferPoolPolicy *this,FVertexBufferAndSRV *param_1)

{
  return param_1->Size;
}

