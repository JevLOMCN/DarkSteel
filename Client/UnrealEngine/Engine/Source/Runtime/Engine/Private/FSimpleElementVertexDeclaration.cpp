// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// InitRHI @ 1476743c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSimpleElementVertexDeclaration::InitRHI
          (FSimpleElementVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_01;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined2 local_d8;
  undefined4 uStack_d6;
  undefined2 uStack_d2;
  undefined2 local_d0;
  undefined4 uStack_ce;
  undefined2 uStack_ca;
  undefined2 local_c8;
  undefined4 uStack_c6;
  undefined2 uStack_c2;
  undefined2 local_c0;
  undefined4 uStack_be;
  undefined2 uStack_ba;
  undefined2 local_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  undefined8 local_a8 [17];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_1c = 0x11;
  local_20 = 0;
  local_d8 = 0;
  uStack_d6 = 0x400004;
  uStack_d2 = 0;
  iVar3 = 0;
  if ((local_a8 <= &local_d8) &&
     (iVar3 = 0, &local_d8 < &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayNum))
  {
    local_e8 = 8;
    local_100 = (longlong)local_a8;
    local_f0 = 0;
    local_f8 = 0x11;
    local_108 = (undefined1 *)&local_d8;
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
    iVar3 = local_20;
    if (local_20 == local_1c) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                        (0x208,(ForElementType<FVertexElement> *)local_a8,
                         &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
    }
  }
  local_20 = iVar3 + 1;
  local_d0 = 0x1000;
  uStack_ce = 0x400104;
  uStack_ca = 0;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[iVar3] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_d2,CONCAT42(uStack_d6,local_d8));
  if ((local_a8 <= &local_d0) &&
     (&local_d0 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_f0 = (longlong)local_20;
    local_e8 = 8;
    local_100 = (longlong)local_a8;
    local_108 = (undefined1 *)&local_d0;
    local_f8 = (longlong)local_1c;
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
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  local_c8 = 0x2000;
  lVar4 = (longlong)local_20;
  uStack_c6 = 0x400202;
  uStack_c2 = 0;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar4] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_ca,CONCAT42(uStack_ce,local_d0));
  if ((local_a8 <= &local_c8) &&
     (&local_c8 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_f0 = (longlong)local_20;
    local_e8 = 8;
    local_100 = (longlong)local_a8;
    local_108 = (undefined1 *)&local_c8;
    local_f8 = (longlong)local_1c;
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
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  local_c0 = 0x2800;
  lVar4 = (longlong)local_20;
  uStack_be = 0x400304;
  uStack_ba = 0;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar4] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_c2,CONCAT42(uStack_c6,local_c8));
  if ((local_a8 <= &local_c0) &&
     (&local_c0 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_f0 = (longlong)local_20;
    local_e8 = 8;
    local_100 = (longlong)local_a8;
    local_108 = (undefined1 *)&local_c0;
    local_f8 = (longlong)local_1c;
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
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  local_b8 = 0x3800;
  lVar4 = (longlong)local_20;
  uStack_b6 = 0x400408;
  uStack_b2 = 0;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar4] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_ba,CONCAT42(uStack_be,local_c0));
  if ((local_a8 <= &local_b8) &&
     (&local_b8 <
      (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData +
      local_1c)) {
    local_f0 = (longlong)local_20;
    local_e8 = 8;
    local_100 = (longlong)local_a8;
    local_108 = (undefined1 *)&local_b8;
    local_f8 = (longlong)local_1c;
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
  if (local_20 == local_1c) {
    local_20 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                         (0x208,(ForElementType<FVertexElement> *)local_a8,
                          &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayMax);
  }
  lVar4 = (longlong)local_20;
  local_20 = local_20 + 1;
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[lVar4] =
       (TTypeCompatibleBytes<FVertexElement>)CONCAT26(uStack_b2,CONCAT42(uStack_b6,local_b8));
  this_01 = (FRHIResource *)
            PipelineStateCache::GetOrCreateVertexDeclaration
                      ((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8);
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

// ReleaseRHI @ 1476747e0

void __thiscall FSimpleElementVertexDeclaration::ReleaseRHI(FSimpleElementVertexDeclaration *this)

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

// FSimpleElementVertexDeclaration @ 147688130

FSimpleElementVertexDeclaration * __thiscall
FSimpleElementVertexDeclaration::FSimpleElementVertexDeclaration
          (FSimpleElementVertexDeclaration *this,FSimpleElementVertexDeclaration *param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this,(FRenderResource *)param_1);
  this->_padding_ = (longlong)&___7FSimpleElementVertexDeclaration__6B_;
  (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
  (this->VertexDeclarationRHI).Reference = (param_1->VertexDeclarationRHI).Reference;
  (param_1->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
  return this;
}

// FSimpleElementVertexDeclaration @ 147688180

FSimpleElementVertexDeclaration * __thiscall
FSimpleElementVertexDeclaration::FSimpleElementVertexDeclaration
          (FSimpleElementVertexDeclaration *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FSimpleElementVertexDeclaration__6B_;
  (this->VertexDeclarationRHI).Reference = (FRHIVertexDeclaration *)0x0;
  return this;
}

// ~FSimpleElementVertexDeclaration @ 14768a6d0

void __thiscall
FSimpleElementVertexDeclaration::~FSimpleElementVertexDeclaration
          (FSimpleElementVertexDeclaration *this)

{
  FRHIResource *this_00;
  
  this->_padding_ = (longlong)&___7FSimpleElementVertexDeclaration__6B_;
  this_00 = (FRHIResource *)(this->VertexDeclarationRHI).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

