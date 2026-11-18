// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 2

// InitRHI @ 145fd6370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateInstancedVertexDeclaration::InitRHI
          (FSlateInstancedVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_01;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  TArray<FVertexElement,TFixedAllocator<17>_> *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8 [10];
  uchar auStack_ce [6];
  undefined1 local_c8 [10];
  uchar auStack_be [6];
  undefined1 local_b8 [10];
  uchar auStack_ae [6];
  TArray<FVertexElement,TFixedAllocator<17>_> local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_a8.ArrayMax = 0x11;
  local_a8.ArrayNum = 0;
  local_d8[0] = '\0';
  local_d8[1] = '\0';
  local_d8[2] = '\x04';
  local_d8[3] = '\0';
  local_d8[4] = ',';
  local_d8[5] = '\0';
  local_d8[6] = '\0';
  local_d8[7] = '\0';
  iVar3 = 0;
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_d8) &&
     (iVar3 = 0, local_d8 < &local_a8.ArrayNum)) {
    local_e8 = 8;
    local_100 = &local_a8;
    local_f0 = 0;
    local_f8 = 0x11;
    local_108 = local_d8;
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
  local_d8[8] = '\0';
  local_d8[9] = '\x10';
  builtin_memcpy(auStack_ce,"\x02\x01,",4);
  auStack_ce[4] = '\0';
  auStack_ce[5] = '\0';
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[iVar3].Pad =
       CONCAT26(local_d8._6_2_,CONCAT42(local_d8._2_4_,local_d8._0_2_));
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_d8 + 8)) &&
     (local_d8 + 8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_f0 = (longlong)local_a8.ArrayNum;
    local_e8 = 8;
    local_100 = &local_a8;
    local_108 = local_d8 + 8;
    local_f8 = (longlong)local_a8.ArrayMax;
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
  local_c8[0] = '\0';
  local_c8[1] = '\x18';
  lVar4 = (longlong)local_a8.ArrayNum;
  local_c8[2] = '\x02';
  local_c8[3] = '\x02';
  local_c8[4] = ',';
  local_c8[5] = '\0';
  local_c8[6] = '\0';
  local_c8[7] = '\0';
  local_a8.ArrayNum = local_a8.ArrayNum + 1;
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_ce._4_2_,CONCAT42(auStack_ce._0_4_,local_d8._8_2_));
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_c8) &&
     (local_c8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_f0 = (longlong)local_a8.ArrayNum;
    local_e8 = 8;
    local_100 = &local_a8;
    local_108 = local_c8;
    local_f8 = (longlong)local_a8.ArrayMax;
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
  local_c8[8] = '\0';
  local_c8[9] = ' ';
  lVar4 = (longlong)local_a8.ArrayNum;
  builtin_memcpy(auStack_be,"\b\x03,",4);
  auStack_be[4] = '\0';
  auStack_be[5] = '\0';
  local_a8.ArrayNum = local_a8.ArrayNum + 1;
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(local_c8._6_2_,CONCAT42(local_c8._2_4_,local_c8._0_2_));
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_c8 + 8)) &&
     (local_c8 + 8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_f0 = (longlong)local_a8.ArrayNum;
    local_e8 = 8;
    local_100 = &local_a8;
    local_108 = local_c8 + 8;
    local_f8 = (longlong)local_a8.ArrayMax;
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
  local_b8[0] = '\0';
  local_b8[1] = '$';
  lVar4 = (longlong)local_a8.ArrayNum;
  local_b8[2] = '\b';
  local_b8[3] = '\x04';
  local_b8[4] = ',';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_a8.ArrayNum = local_a8.ArrayNum + 1;
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(auStack_be._4_2_,CONCAT42(auStack_be._0_4_,local_c8._8_2_));
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)local_b8) &&
     (local_b8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_f0 = (longlong)local_a8.ArrayNum;
    local_e8 = 8;
    local_100 = &local_a8;
    local_108 = local_b8;
    local_f8 = (longlong)local_a8.ArrayMax;
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
  local_b8[8] = '\x01';
  local_b8[9] = '\0';
  lVar4 = (longlong)local_a8.ArrayNum;
  builtin_memcpy(auStack_ae,"\x04\x05\x10",4);
  local_a8.ArrayNum = local_a8.ArrayNum + 1;
  *(ulonglong *)local_a8.AllocatorInstance.InlineData[lVar4].Pad =
       CONCAT26(local_b8._6_2_,CONCAT42(local_b8._2_4_,local_b8._0_2_));
  auStack_ae[4] = '\x01';
  auStack_ae[5] = '\0';
  if ((&local_a8 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)(local_b8 + 8)) &&
     (local_b8 + 8 < local_a8.AllocatorInstance.InlineData + local_a8.ArrayMax)) {
    local_f0 = (longlong)local_a8.ArrayNum;
    local_e8 = 8;
    local_100 = &local_a8;
    local_108 = local_b8 + 8;
    local_f8 = (longlong)local_a8.ArrayMax;
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
  this_00 = *(FRHIResource **)&this->field_0x20;
  if (this_00 != this_01) {
    *(FRHIResource **)&this->field_0x20 = this_01;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_01);
    }
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  return;
}

// ~FSlateInstancedVertexDeclaration @ 145fea170

void __thiscall
FSlateInstancedVertexDeclaration::~FSlateInstancedVertexDeclaration
          (FSlateInstancedVertexDeclaration *this)

{
  *(undefined ***)this = &___7FSlateVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

