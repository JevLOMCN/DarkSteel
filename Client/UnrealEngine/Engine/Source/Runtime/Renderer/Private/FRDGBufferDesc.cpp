// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// CreateIndirectDesc<FRHIDispatchIndirectParameters> @ 1448e2540

FRDGBufferDesc * __cdecl
FRDGBufferDesc::CreateIndirectDesc<FRHIDispatchIndirectParameters>
          (FRDGBufferDesc *__return_storage_ptr__,uint param_1)

{
  __return_storage_ptr__->Metadata = (FShaderParametersMetadata *)0x0;
  __return_storage_ptr__->Usage = VertexBuffer|ShaderResource|DrawIndirect|UnorderedAccess|Static;
  __return_storage_ptr__->BytesPerElement = 0xc;
  __return_storage_ptr__->NumElements = param_1;
  return __return_storage_ptr__;
}

// CreateStructuredDesc @ 14490a510

FRDGBufferDesc * __cdecl
FRDGBufferDesc::CreateStructuredDesc
          (FRDGBufferDesc *__return_storage_ptr__,uint param_1,uint param_2)

{
  __return_storage_ptr__->Metadata = (FShaderParametersMetadata *)0x0;
  __return_storage_ptr__->Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  __return_storage_ptr__->BytesPerElement = param_1;
  __return_storage_ptr__->NumElements = param_2;
  return __return_storage_ptr__;
}

// CreateBufferDesc @ 144c32ac0

FRDGBufferDesc * __cdecl
FRDGBufferDesc::CreateBufferDesc(FRDGBufferDesc *__return_storage_ptr__,uint param_1,uint param_2)

{
  __return_storage_ptr__->Metadata = (FShaderParametersMetadata *)0x0;
  __return_storage_ptr__->Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  __return_storage_ptr__->BytesPerElement = param_1;
  __return_storage_ptr__->NumElements = param_2;
  return __return_storage_ptr__;
}

// CreateByteAddressDesc @ 144f8d3e0

FRDGBufferDesc * __cdecl
FRDGBufferDesc::CreateByteAddressDesc(FRDGBufferDesc *__return_storage_ptr__,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferDesc *pFVar3;
  
  if ((param_1 & 3) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumBytes % 4 == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                       ,0x3af,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBufferDesc *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->NumElements = param_1 >> 2;
  __return_storage_ptr__->Metadata = (FShaderParametersMetadata *)0x0;
  __return_storage_ptr__->Usage =
       StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  __return_storage_ptr__->BytesPerElement = 4;
  return __return_storage_ptr__;
}

