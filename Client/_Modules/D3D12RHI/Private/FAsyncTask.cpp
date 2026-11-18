// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// DoTaskWork @ 145aa59c0

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

void __thiscall
FAsyncTask<FD3D12PipelineStateWorker>::DoTaskWork(FAsyncTask<FD3D12PipelineStateWorker> *this)

{
  GraphicsPipelineCreationArgs_POD *pGVar1;
  longlong lVar2;
  ID3D12PipelineState *pIVar3;
  FD3D12Adapter *pFVar4;
  ComputePipelineCreationArgs_POD *pCVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  ulong64 uVar9;
  
  pGVar1 = (GraphicsPipelineCreationArgs_POD *)(this->Task).CreationArgs.ComputeArgs;
  lVar2 = (this->Task)._padding_;
  if ((this->Task).bIsGraphics == false) {
    if (lVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar3 = (this->Task).PSO.Reference;
    pFVar4 = (FD3D12Adapter *)(this->Task)._padding_;
    if (pIVar3 != (ID3D12PipelineState *)0x0) {
      (this->Task).PSO.Reference = (ID3D12PipelineState *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    CreateComputePipelineState
              (&(this->Task).PSO.Reference,pFVar4,(ComputePipelineCreationArgs_POD *)pGVar1);
    uVar9 = 0x68;
    pvVar8 = *(void **)&(((this->Task).CreationArgs.ComputeArgs)->Desc).Desc.field_0x8;
  }
  else {
    if (lVar2 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar3 = (this->Task).PSO.Reference;
    pFVar4 = (FD3D12Adapter *)(this->Task)._padding_;
    if (pIVar3 != (ID3D12PipelineState *)0x0) {
      (this->Task).PSO.Reference = (ID3D12PipelineState *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    CreateGraphicsPipelineState(&(this->Task).PSO.Reference,pFVar4,pGVar1);
    pCVar5 = (this->Task).CreationArgs.ComputeArgs;
    FMemory::Free(*(void **)&(pCVar5->Desc).Desc.field_0x8);
    FMemory::Free(*(void **)&(pCVar5->Desc).Desc.field_0x18);
    FMemory::Free(*(void **)&(pCVar5->Desc).Desc.field_0x28);
    FMemory::Free((void *)(pCVar5->Desc).CSHash.Hash[0]);
    pvVar8 = (void *)(pCVar5->Desc).CombinedHash;
    uVar9 = 0x308;
  }
  FMemory::Free(pvVar8);
  ::operator_delete((this->Task).CreationArgs.ComputeArgs,uVar9);
  return;
}

// MarkAsCanceled @ 145aafd70

void __thiscall
FAsyncTask<FD3D12PipelineStateWorker>::MarkAsCanceled(FAsyncTask<FD3D12PipelineStateWorker> *this)

{
  return;
}

// TryAbandonTask @ 145abaee0

bool __thiscall
FAsyncTask<FD3D12PipelineStateWorker>::TryAbandonTask(FAsyncTask<FD3D12PipelineStateWorker> *this)

{
  return false;
}

