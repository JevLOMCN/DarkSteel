// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12RayTracingLocalResourceBinder @ 1459f14f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12RayTracingLocalResourceBinder * __thiscall
FD3D12RayTracingLocalResourceBinder::FD3D12RayTracingLocalResourceBinder
          (FD3D12RayTracingLocalResourceBinder *this,FD3D12Device *param_1,
          FD3D12RayTracingShaderBindingTableInternal *param_2,FD3D12RootSignature *param_3,
          ERayTracingLocalShaderBindingType param_4,uint param_5,uint param_6,
          ERayTracingBindingType param_7)

{
  code *pcVar1;
  bool bVar2;
  FD3D12RayTracingLocalResourceBinder *pFVar3;
  
  this->Device = param_1;
  this->ShaderTable = param_2;
  this->DescriptorCache = param_2->DescriptorCache;
  this->BindingType = param_4;
  this->RecordIndex = param_5;
  this->RootSignature = param_3;
  this->WorkerIndex = param_6;
  this->ShaderTableOffset = 0;
  (this->ReferencedViews).AllocatorInstance.SecondaryData = (ForElementType<FD3D12View_*>)0x0;
  this->bHasLooseParameterData = false;
  (this->ReferencedViews).ArrayNum = 0;
  (this->ReferencedViews).ArrayMax = 0x50;
  (this->ReferencedCBResources).AllocatorInstance.SecondaryData =
       (ForElementType<FD3D12Resource_*>)0x0;
  (this->ReferencedCBResources).ArrayNum = 0;
  (this->ReferencedCBResources).ArrayMax = 0x10;
  if (param_2->DescriptorCache == (FD3D12ExplicitDescriptorCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InShaderTable.DescriptorCache != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1368,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RayTracingLocalResourceBinder *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (4 < this->WorkerIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkerIndex < InShaderTable.MaxBindingWorkers",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1369,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RayTracingLocalResourceBinder *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((uint)(this->DescriptorCache->WorkerData).ArrayNum <= this->WorkerIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorkerIndex < uint32(DescriptorCache.WorkerData.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x136a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RayTracingLocalResourceBinder *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->RecordIndex == 0xffffffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RecordIndex != ~0u",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x136b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RayTracingLocalResourceBinder *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_7 == HitGroup) {
    this->ShaderTableOffset = param_2->HitGroupShaderTableOffset;
  }
  else {
    if (param_7 == CallableShader) {
      this->ShaderTableOffset = param_2->CallableShaderTableOffset;
      return this;
    }
    if (param_7 == MissShader) {
      this->ShaderTableOffset = param_2->MissShaderTableOffset;
      return this;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1379,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12RayTracingLocalResourceBinder *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// SetRootDescriptorTable @ 145a31790

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12RayTracingLocalResourceBinder::SetRootDescriptorTable
          (FD3D12RayTracingLocalResourceBinder *this,uint param_1,
          D3D12_GPU_DESCRIPTOR_HANDLE param_2)

{
  FD3D12RootSignature *pFVar1;
  FD3D12RayTracingShaderBindingTableInternal *pFVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pFVar1 = this->RootSignature;
  if (0x1f < (byte)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0xde,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this->ShaderTable;
  uVar6 = (pFVar2->Data)._padding_;
  uVar5 = (ulonglong)
          (this->RecordIndex * pFVar2->LocalRecordStride + 0x20 + this->ShaderTableOffset +
          (uint)pFVar1->BindSlotOffsetsInDWORDs[param_1 & 0xff] * 4);
  if (this->BindingType == Validation) {
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)&(pFVar2->Data)._padding_ + ((longlong)uVar6 >> 0x18);
    }
    if (*(ulong64 *)(uVar5 + uVar6) != param_2.ptr) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8588839787656379078>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x53a,"FMemory::Memcmp(CurrentData, InData, InDataSize) == 0");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  else {
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)&(pFVar2->Data)._padding_ + ((longlong)uVar6 >> 0x18);
    }
    *(ulong64 *)(uVar5 + uVar6) = param_2.ptr;
  }
  return;
}

