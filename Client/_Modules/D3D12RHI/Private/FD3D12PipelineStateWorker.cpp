// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12PipelineStateWorker @ 1459eee60

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PipelineStateWorker * __thiscall
FD3D12PipelineStateWorker::FD3D12PipelineStateWorker
          (FD3D12PipelineStateWorker *this,FD3D12Adapter *param_1,
          ComputePipelineCreationArgs *param_2)

{
  undefined8 uVar1;
  ulong64 uVar2;
  TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *pTVar3;
  ComputePipelineCreationArgs_POD *pCVar4;
  
  this->_padding_ = (longlong)param_1;
  this->bIsGraphics = false;
  (this->PSO).Reference = (ID3D12PipelineState *)0x0;
  pCVar4 = ::operator_new(0x68);
  if (pCVar4 == (ComputePipelineCreationArgs_POD *)0x0) {
    pCVar4 = (ComputePipelineCreationArgs_POD *)0x0;
  }
  else {
    (pCVar4->Desc).pRootSignature = (FD3D12RootSignature *)0x0;
    *(undefined8 *)&(pCVar4->Desc).Desc = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x8 = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x10 = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x18 = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x20 = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x28 = 0;
    *(undefined8 *)&(pCVar4->Desc).Desc.field_0x30 = 0;
    (pCVar4->Desc).CSHash.Hash[0] = 0;
    (pCVar4->Desc).CSHash.Hash[1] = 0;
    (pCVar4->Desc).CombinedHash = 0;
    (pCVar4->Desc).Extensions =
         (TArray<FShaderCodeVendorExtension,TSizedDefaultAllocator<32>_> *)0x0;
    pCVar4->Library = (ID3D12PipelineLibrary *)0x0;
  }
  (this->CreationArgs).ComputeArgs = pCVar4;
  uVar1 = *(undefined8 *)&(param_2->Args).Desc.Desc;
  (pCVar4->Desc).pRootSignature = (param_2->Args).Desc.pRootSignature;
  *(undefined8 *)&(pCVar4->Desc).Desc = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x10;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x8 =
       *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x8;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x20;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x18 =
       *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x18;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x20 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x30;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x28 =
       *(undefined8 *)&(param_2->Args).Desc.Desc.field_0x28;
  *(undefined8 *)&(pCVar4->Desc).Desc.field_0x30 = uVar1;
  uVar2 = (param_2->Args).Desc.CSHash.Hash[1];
  (pCVar4->Desc).CSHash.Hash[0] = (param_2->Args).Desc.CSHash.Hash[0];
  (pCVar4->Desc).CSHash.Hash[1] = uVar2;
  pTVar3 = (param_2->Args).Desc.Extensions;
  (pCVar4->Desc).CombinedHash = (param_2->Args).Desc.CombinedHash;
  (pCVar4->Desc).Extensions = pTVar3;
  pCVar4->Library = (param_2->Args).Library;
  SaveByteCode((D3D12_SHADER_BYTECODE *)&(pCVar4->Desc).Desc.field_0x8);
  return this;
}

// FD3D12PipelineStateWorker @ 1459eef10

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PipelineStateWorker * __thiscall
FD3D12PipelineStateWorker::FD3D12PipelineStateWorker
          (FD3D12PipelineStateWorker *this,FD3D12Adapter *param_1,
          GraphicsPipelineCreationArgs *param_2)

{
  GraphicsPipelineCreationArgs_POD *this_00;
  
  this->_padding_ = (longlong)param_1;
  this->bIsGraphics = true;
  (this->PSO).Reference = (ID3D12PipelineState *)0x0;
  this_00 = ::operator_new(0x308);
  if (this_00 == (GraphicsPipelineCreationArgs_POD *)0x0) {
    this_00 = (GraphicsPipelineCreationArgs_POD *)0x0;
  }
  else {
    memset(this_00,0,0x308);
  }
  (this->CreationArgs).GraphicsArgs = this_00;
  GraphicsPipelineCreationArgs_POD::Init(this_00,&param_2->Args);
  return this;
}

// DoWork @ 145aa5b20

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12PipelineStateWorker::DoWork(FD3D12PipelineStateWorker *this)

{
  GraphicsPipelineCreationArgs_POD *pGVar1;
  ID3D12PipelineState *pIVar2;
  FD3D12Adapter *pFVar3;
  ComputePipelineCreationArgs_POD *pCVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  ulong64 uVar8;
  
  pGVar1 = (GraphicsPipelineCreationArgs_POD *)(this->CreationArgs).ComputeArgs;
  if (this->bIsGraphics == false) {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = (this->PSO).Reference;
    pFVar3 = (FD3D12Adapter *)this->_padding_;
    if (pIVar2 != (ID3D12PipelineState *)0x0) {
      (this->PSO).Reference = (ID3D12PipelineState *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    CreateComputePipelineState
              (&(this->PSO).Reference,pFVar3,(ComputePipelineCreationArgs_POD *)pGVar1);
    uVar8 = 0x68;
    pvVar7 = *(void **)&(((this->CreationArgs).ComputeArgs)->Desc).Desc.field_0x8;
  }
  else {
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pIVar2 = (this->PSO).Reference;
    pFVar3 = (FD3D12Adapter *)this->_padding_;
    if (pIVar2 != (ID3D12PipelineState *)0x0) {
      (this->PSO).Reference = (ID3D12PipelineState *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    CreateGraphicsPipelineState(&(this->PSO).Reference,pFVar3,pGVar1);
    pCVar4 = (this->CreationArgs).ComputeArgs;
    FMemory::Free(*(void **)&(pCVar4->Desc).Desc.field_0x8);
    FMemory::Free(*(void **)&(pCVar4->Desc).Desc.field_0x18);
    FMemory::Free(*(void **)&(pCVar4->Desc).Desc.field_0x28);
    FMemory::Free((void *)(pCVar4->Desc).CSHash.Hash[0]);
    pvVar7 = (void *)(pCVar4->Desc).CombinedHash;
    uVar8 = 0x308;
  }
  FMemory::Free(pvVar7);
  ::operator_delete((this->CreationArgs).ComputeArgs,uVar8);
  return;
}

