// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 8

// Call @ 145972f20

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D11Viewport::FD3D11Viewport'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FD3D11EventQuery::IssueEvent((FD3D11EventQuery *)(*(longlong *)param_1 + 0x90));
  return;
}

// Call @ 145972f40

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::Nvidia::Aftermath::D3D11::InitializeDevice'::__l2::<lambda_1>,unsigned_int,unsigned_int>
::Call(void *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = GFSDK_Aftermath_DX11_Initialize(0x217,*param_2,**(undefined8 **)param_1);
  return uVar1;
}

// Call @ 145972f60

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D11DynamicRHI::RHIEndRenderPass'::__l2::<lambda_1>,void,UE::RHICore::FResolveTextureInfo>
::Call(void *param_1,FResolveTextureInfo *param_2)

{
  FResolveTextureInfo local_38;
  
  local_38.SourceTexture = param_2->SourceTexture;
  local_38.DestTexture = param_2->DestTexture;
  local_38.MipLevel = param_2->MipLevel;
  local_38._17_3_ = *(undefined3 *)&param_2->field_0x11;
  local_38.ArraySlice = param_2->ArraySlice;
  local_38.ResolveRect.X1 = (param_2->ResolveRect).X1;
  local_38.ResolveRect.Y1 = (param_2->ResolveRect).Y1;
  local_38.ResolveRect.X2 = (param_2->ResolveRect).X2;
  local_38.ResolveRect.Y2 = (param_2->ResolveRect).Y2;
  FD3D11DynamicRHI::ResolveTexture(*(FD3D11DynamicRHI **)param_1,&local_38);
  return;
}

// Call @ 145972fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `FD3D11DynamicRHI::RHICreateTextureInitializer'::__l24::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145972fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  `FD3D11DynamicRHI::RHICreateBufferInitializer'::__l30::<lambda_1>::operator()(param_2,param_1);
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145973000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultBufferInitializer::FDefaultBufferInitializer'::__l1::<lambda_24_>,TRefCountPtr<FRHIBuffer>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIBuffer>)param_1;
}

// Call @ 145973020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHITexture> __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultTextureInitializer::FDefaultTextureInitializer'::__l1::<lambda_26_>,TRefCountPtr<FRHITexture>,FRHICommandListBase_&>
::Call(void *param_1,FRHICommandListBase *param_2)

{
  *(uchar **)param_1 = (param_2->MemManager).Top;
  (param_2->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHITexture>)param_1;
}

// Call @ 145973040

FRHITextureSubresourceInitializer * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RHICore::FDefaultLayoutTextureInitializer::FDefaultLayoutTextureInitializer'::__l1::<lambda_27_>,FRHITextureSubresourceInitializer,FRHITextureInitializer::FSubresourceIndex>
::Call(FRHITextureSubresourceInitializer *__return_storage_ptr__,void *param_1,
      FSubresourceIndex *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  FRHITextureDesc *pFVar4;
  ulong64 uVar5;
  ulong64 local_res8;
  ulong64 local_res10;
  int local_18;
  int iStack_14;
  
  uVar1 = param_2->FaceIndex;
  uVar2 = param_2->ArrayIndex;
  iVar3 = param_2->MipIndex;
  pFVar4 = (FRHITextureDesc *)(**(code **)(**(longlong **)param_1 + 0x20))();
  local_res8 = 0;
  local_res10 = 0;
  uVar5 = RHITextureUtils::CalculateSubresourceOffset
                    (pFVar4,uVar1,uVar2,iVar3,&local_res8,&local_res10);
  __return_storage_ptr__->Data = (void *)(*(longlong *)((longlong)param_1 + 8) + uVar5);
  __return_storage_ptr__->Size = local_res10;
  __return_storage_ptr__->Stride = local_res8;
  return __return_storage_ptr__;
}

