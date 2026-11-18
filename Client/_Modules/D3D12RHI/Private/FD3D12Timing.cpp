// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12Timing @ 1459f51e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Timing * __thiscall FD3D12Timing::FD3D12Timing(FD3D12Timing *this,FD3D12Queue *param_1)

{
  byte bVar1;
  ED3D12QueueType EVar2;
  code *pcVar3;
  bool bVar4;
  FD3D12Timing *pFVar5;
  uint local_res8;
  
  this->Queue = param_1;
  (this->PipelineStats).IAVertices = 0;
  (this->PipelineStats).IAPrimitives = 0;
  (this->PipelineStats).VSInvocations = 0;
  (this->PipelineStats).GSInvocations = 0;
  (this->PipelineStats).GSPrimitives = 0;
  (this->PipelineStats).CInvocations = 0;
  (this->PipelineStats).CPrimitives = 0;
  (this->PipelineStats).PSInvocations = 0;
  (this->PipelineStats).HSInvocations = 0;
  (this->PipelineStats).DSInvocations = 0;
  (this->PipelineStats).CSInvocations = 0;
  this->GPUFrequency = 0;
  this->GPUTimestamp = 0;
  this->CPUFrequency = 0;
  this->CPUTimestamp = 0;
  bVar1 = param_1->Device->field_0x8;
  EVar2 = param_1->QueueType;
  if (EVar2 != Direct) {
    if (EVar2 == Copy) {
      local_res8 = CONCAT31((uint3)bVar1,2);
      goto LAB_1459f526f;
    }
    if (EVar2 == Async) {
      local_res8 = CONCAT31((uint3)bVar1,1);
      goto LAB_1459f526f;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
                       ,0x60,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FD3D12Timing *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_res8 = (uint)bVar1 << 8;
LAB_1459f526f:
  (this->EventStream).Queue.field0_0x0.Value = local_res8;
  (this->EventStream).First = (FChunk *)0x0;
  (this->EventStream).Current = (FChunk *)0x0;
  return this;
}

