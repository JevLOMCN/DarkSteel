// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&> @ 14502e720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __cdecl
UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits::
CreateUploadBuffer<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
          (FRDGBuilder *param_1,wchar_t *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRDGBuffer *pFVar5;
  undefined4 uStack_2c;
  FRDGBufferDesc local_20;
  
  local_20._0_8_ = CONCAT44(param_3->ArrayNum,4) & 0x3fffffffffffffff;
  local_20._12_4_ = uStack_2c;
  local_20.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer;
  local_20.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar5 = FRDGBuilder::CreateBuffer(param_1,&local_20,param_2,None);
  pFVar2 = (param_3->AllocatorInstance).Data;
  iVar1 = param_3->ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar3)();
      return pFVar5;
    }
  }
  FRDGBuilder::QueueBufferUpload(param_1,pFVar5,pFVar2,(longlong)iVar1 << 2,None);
  return pFVar5;
}

