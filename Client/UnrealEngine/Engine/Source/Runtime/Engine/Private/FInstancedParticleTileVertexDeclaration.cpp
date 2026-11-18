// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 1480e67c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstancedParticleTileVertexDeclaration::InitRHI
          (FInstancedParticleTileVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_01;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [10];
  uchar auStack_ae [6];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_a8.ArrayMax = 0x11;
  local_a8.ArrayNum = 0;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\x02';
  local_b8[3] = '\0';
  local_b8[4] = '\b';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  iVar3 = 0;
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
     (local_b8 < &local_a8.ArrayNum)) {
    local_c8 = 8;
    local_d0 = 0;
    local_e0 = &local_a8;
    local_d8 = 0x11;
    local_e8 = local_b8;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = local_a8.ArrayNum;
    if (local_a8.ArrayNum == local_a8.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
    }
  }
  local_a8.ArrayNum = iVar3 + 1;
  local_b8[8] = '\x01';
  local_b8[9] = '\0';
  builtin_memcpy(auStack_ae,"\x04\x01\x10",4);
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[iVar3].Pad =
       CONCAT26(local_b8._6_2_,CONCAT42(local_b8._2_4_,local_b8._0_2_));
  auStack_ae[4] = '\x01';
  auStack_ae[5] = '\0';
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_b8 + 8)) &&
     (local_b8 + 8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_d0 = (longlong)local_a8.ArrayNum;
    local_c8 = 8;
    local_e0 = &local_a8;
    local_e8 = local_b8 + 8;
    local_d8 = (longlong)local_a8.ArrayMax;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    local_a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  lVar4 = (longlong)local_a8.ArrayNum;
  local_a8.ArrayNum = local_a8.ArrayNum + 1;
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_ae._4_2_,CONCAT42(auStack_ae._0_4_,local_b8._8_2_));
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_a8);
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != this_01) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 1480e69a0

void __thiscall
FInstancedParticleTileVertexDeclaration::ReleaseRHI(FInstancedParticleTileVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

