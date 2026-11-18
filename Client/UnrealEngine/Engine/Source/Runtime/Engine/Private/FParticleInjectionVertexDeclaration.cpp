// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// InitRHI @ 1480e4f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FParticleInjectionVertexDeclaration::InitRHI
          (FParticleInjectionVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_01;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_e8 [10];
  uchar auStack_de [6];
  undefined1 local_d8 [10];
  uchar auStack_ce [6];
  undefined1 local_c8 [10];
  uchar auStack_be [6];
  TArray<FVertexElement,TFixedAllocator<17>_> local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b8.ArrayMax = 0x11;
  local_e8[2] = '\x04';
  local_e8[3] = '\0';
  local_e8[4] = 'L';
  local_e8[5] = '\0';
  local_b8.ArrayNum = 0;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[6] = '\x01';
  local_e8[7] = '\0';
  iVar3 = 0;
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_e8) &&
     (local_e8 < &local_b8.ArrayNum)) {
    local_f8 = 8;
    local_110 = &local_b8;
    local_100 = 0;
    local_108 = 0x11;
    local_118 = local_e8;
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
    iVar3 = local_b8.ArrayNum;
    if (local_b8.ArrayNum == local_b8.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
    }
  }
  local_b8.ArrayNum = iVar3 + 1;
  local_e8[8] = '\0';
  local_e8[9] = '\x10';
  builtin_memcpy(auStack_de,"\x04\x01L",4);
  auStack_de[4] = '\x01';
  auStack_de[5] = '\0';
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[iVar3].Pad =
       CONCAT26(local_e8._6_2_,CONCAT42(local_e8._2_4_,local_e8._0_2_));
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_e8 + 8)) &&
     (local_e8 + 8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_e8 + 8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_d8[0] = '\0';
  local_d8[1] = ' ';
  lVar4 = (longlong)local_b8.ArrayNum;
  local_d8[2] = '\x04';
  local_d8[3] = '\x02';
  local_d8[4] = 'L';
  local_d8[5] = '\0';
  local_d8[6] = '\x01';
  local_d8[7] = '\0';
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_de._4_2_,CONCAT42(auStack_de._0_4_,local_e8._8_2_));
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
     (local_d8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_d8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_d8[8] = '\0';
  local_d8[9] = '0';
  lVar4 = (longlong)local_b8.ArrayNum;
  builtin_memcpy(auStack_ce,"\x04\x03L",4);
  auStack_ce[4] = '\x01';
  auStack_ce[5] = '\0';
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(local_d8._6_2_,CONCAT42(local_d8._2_4_,local_d8._0_2_));
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d8 + 8)) &&
     (local_d8 + 8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_d8 + 8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_c8[0] = '\0';
  local_c8[1] = '@';
  lVar4 = (longlong)local_b8.ArrayNum;
  local_c8[2] = '\x03';
  local_c8[3] = '\x04';
  local_c8[4] = 'L';
  local_c8[5] = '\0';
  local_c8[6] = '\x01';
  local_c8[7] = '\0';
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_ce._4_2_,CONCAT42(auStack_ce._0_4_,local_d8._8_2_));
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_c8) &&
     (local_c8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_c8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  local_c8[8] = '\x01';
  local_c8[9] = '\0';
  lVar4 = (longlong)local_b8.ArrayNum;
  builtin_memcpy(auStack_be,"\x02\x05\b",4);
  auStack_be[4] = '\0';
  auStack_be[5] = '\0';
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(local_c8._6_2_,CONCAT42(local_c8._2_4_,local_c8._0_2_));
  if ((&local_b8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 8)) &&
     (local_c8 + 8 < local_b8.AllocatorInstance.InlineData + local_b8.ArrayMax)) {
    local_100 = (longlong)local_b8.ArrayNum;
    local_f8 = 8;
    local_110 = &local_b8;
    local_118 = local_c8 + 8;
    local_108 = (longlong)local_b8.ArrayMax;
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
  if (local_b8.ArrayNum == local_b8.ArrayMax) {
    local_b8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                   (0x208,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
  }
  lVar4 = (longlong)local_b8.ArrayNum;
  local_b8.ArrayNum = local_b8.ArrayNum + 1;
  *(ulonglong *)local_b8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_be._4_2_,CONCAT42(auStack_be._0_4_,local_c8._8_2_));
  this_01 = (FRHIResource *)PipelineStateCache::GetOrCreateVertexDeclaration(&local_b8);
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

// ReleaseRHI @ 1480e53f0

void __thiscall
FParticleInjectionVertexDeclaration::ReleaseRHI(FParticleInjectionVertexDeclaration *this)

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

