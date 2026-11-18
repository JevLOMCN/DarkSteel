// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// operator() @ 145a4a3c0

/* WARNING: Removing unreachable block (ram,0x000145a4a3d5) */
/* WARNING: Removing unreachable block (ram,0x000145a4a3e4) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FD3D12DeferredInitView<FD3D12ShaderResourceView_RHI>::CreateViews'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  
  puVar1 = *(uint **)this;
  uVar5 = 0;
  plVar6 = (longlong *)0x0;
  uVar4 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar3 = 0x20;
    if (uVar5 != 0) {
      uVar3 = uVar2;
    }
    uVar4 = (ulonglong)uVar3;
    plVar6 = *(longlong **)(puVar1 + (ulonglong)uVar3 * 2 + 2);
  }
  while( true ) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar5 = uVar5 & ~(1 << ((byte)uVar4 & 0x1f));
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if (uVar5 == 0) break;
    uVar4 = (ulonglong)uVar2;
    plVar6 = (longlong *)plVar6[uVar4 + 0x1a];
  }
  return;
}

// operator() @ 145a97560

/* WARNING: Removing unreachable block (ram,0x000145a97575) */
/* WARNING: Removing unreachable block (ram,0x000145a97584) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FD3D12DeferredInitView<FD3D12UnorderedAccessView_RHI>::CreateViews'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  
  puVar1 = *(uint **)this;
  uVar5 = 0;
  plVar6 = (longlong *)0x0;
  uVar4 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar5 = *puVar1;
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar3 = 0x20;
    if (uVar5 != 0) {
      uVar3 = uVar2;
    }
    uVar4 = (ulonglong)uVar3;
    plVar6 = *(longlong **)(puVar1 + (ulonglong)uVar3 * 2 + 2);
  }
  while( true ) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
    uVar5 = uVar5 & ~(1 << ((byte)uVar4 & 0x1f));
    uVar2 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if (uVar5 == 0) break;
    uVar4 = (ulonglong)uVar2;
    plVar6 = (longlong *)plVar6[uVar4 + 0x1a];
  }
  return;
}

