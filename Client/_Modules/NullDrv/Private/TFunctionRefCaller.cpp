// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 3

// Call @ 1446c5ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNullDynamicRHI::FNullBufferInitializer::FNullBufferInitializer'::__l1::<lambda_5_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 1446c5ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_6_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 1446c5af0

FRHITextureSubresourceInitializer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
::Call(FRHITextureSubresourceInitializer *__return_storage_ptr__,void *param_1,
      FSubresourceIndex *param_2)

{
  ulong64 uVar1;
  ulong64 uVar2;
  FRHITextureSubresourceInitializer *pFVar3;
  FSubresourceIndex local_38;
  FRHITextureSubresourceInitializer local_28;
  
  local_38.FaceIndex = param_2->FaceIndex;
  local_38.ArrayIndex = param_2->ArrayIndex;
  local_38.MipIndex = param_2->MipIndex;
  pFVar3 = `FNullDynamicRHI::FNullTextureInitializer::FNullTextureInitializer'::__l1::<lambda_7_>::
           operator()(param_1,&local_28,&local_38);
  uVar2 = pFVar3->Size;
  uVar1 = pFVar3->Stride;
  __return_storage_ptr__->Data = pFVar3->Data;
  __return_storage_ptr__->Size = uVar2;
  __return_storage_ptr__->Stride = uVar1;
  return __return_storage_ptr__;
}

