// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12TransientHeapCache @ 145a8fe80

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

FD3D12TransientHeapCache * __thiscall
FD3D12TransientHeapCache::FD3D12TransientHeapCache
          (FD3D12TransientHeapCache *this,FInitializer *param_1,FD3D12Adapter *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  bool bVar5;
  undefined6 uVar6;
  
  *(undefined ***)this = &___7FRHITransientHeapCache__6B_;
  uVar4 = param_1->MinimumHeapSize;
  *(ulong64 *)&this->field_0x8 = param_1->MinimumFirstHeapSize;
  *(ulong64 *)&this->field_0x10 = uVar4;
  uVar1 = param_1->GarbageCollectLatency;
  uVar2 = param_1->TextureCacheSize;
  uVar3 = param_1->BufferCacheSize;
  *(uint *)&this->field_0x18 = param_1->HeapAlignment;
  *(uint *)&this->field_0x1c = uVar1;
  *(uint *)&this->field_0x20 = uVar2;
  *(uint *)&this->field_0x24 = uVar3;
  bVar5 = param_1->bSupportsVirtualMapping;
  uVar6 = *(undefined6 *)&param_1->field_0x22;
  this->field_0x28 = param_1->bSupportsAllHeapFlags;
  this->field_0x29 = bVar5;
  *(undefined6 *)&this->field_0x2a = uVar6;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x70,4000);
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined ***)this = &___7FD3D12TransientHeapCache__6B_;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(FD3D12Adapter **)&this->field_0xc0 = param_2;
  return this;
}

// Create @ 145a9e360

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

TUniquePtr<FD3D12TransientHeapCache,TDefaultDelete<FD3D12TransientHeapCache>_> __cdecl
FD3D12TransientHeapCache::Create(FD3D12Adapter *param_1)

{
  undefined1 uVar1;
  undefined6 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FInitializer *pFVar9;
  undefined8 *puVar10;
  longlong in_RDX;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  FInitializer local_38;
  
  pFVar9 = FRHITransientHeapCache::FInitializer::CreateDefault(&local_38);
  uVar3 = pFVar9->MinimumFirstHeapSize;
  uVar4 = pFVar9->MinimumHeapSize;
  uVar5 = pFVar9->HeapAlignment;
  uVar6 = pFVar9->GarbageCollectLatency;
  uVar7 = pFVar9->TextureCacheSize;
  uVar8 = pFVar9->BufferCacheSize;
  uVar1 = pFVar9->bSupportsVirtualMapping;
  uVar2 = *(undefined6 *)&pFVar9->field_0x22;
  local_38._34_6_ = uVar2;
  local_38.bSupportsVirtualMapping = (bool)uVar1;
  local_38.bSupportsAllHeapFlags = *(int *)(in_RDX + 0x218) == 2;
  puVar10 = ::operator_new(200);
  if (puVar10 == (undefined8 *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    *puVar10 = &___7FRHITransientHeapCache__6B_;
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    puVar10[5] = local_38._32_8_;
    puVar10[6] = 0;
    puVar10[7] = 0;
    *(undefined4 *)(puVar10 + 8) = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    *(undefined4 *)(puVar10 + 0xb) = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(puVar10 + 0xe),4000);
    puVar10[0x13] = 0;
    *puVar10 = &___7FD3D12TransientHeapCache__6B_;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
    puVar10[0x17] = 0;
    puVar10[0x18] = in_RDX;
    param_1->_padding_ = (longlong)puVar10;
  }
  return (TUniquePtr<FD3D12TransientHeapCache,TDefaultDelete<FD3D12TransientHeapCache>_>)
         (FD3D12TransientHeapCache *)param_1;
}

// CreateHeap @ 145a9f610

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

FRHITransientHeap * __thiscall
FD3D12TransientHeapCache::CreateHeap(FD3D12TransientHeapCache *this,FInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRHITransientHeap *pFVar3;
  FD3D12TransientHeap *pFVar4;
  FRHIGPUMask local_res8 [2];
  undefined8 local_res10;
  <lambda_1> local_28;
  
  local_res8[0].GPUMask = 1;
  if (param_1->Flags != AllowNNEBuffers) {
    local_res8[0].GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  }
  if (*(longlong *)&this->field_0xc0 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHITransientHeap *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_28.VisibleNodeMask = local_res8;
  local_res10 = *(undefined8 *)&this->field_0xc0;
  local_28.HeapInitializer = param_1;
  local_28.__this = this;
  pFVar4 = FD3D12LinkedAdapterObject<FD3D12TransientHeap>::
           CreateLinkedObjects<FD3D12TransientHeap,_FD3D12TransientHeapCache::CreateHeap_::__l2::<lambda_1>,_FD3D12Adapter::CreateLinkedObject<FD3D12TransientHeap,_FD3D12TransientHeapCache::CreateHeap_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                     (local_res8[0],(<lambda_1> *)&local_res10,&local_28);
  return (FRHITransientHeap *)pFVar4;
}

