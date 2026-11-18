// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 1451892f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
_anon_4E9C524B::FPostProcessMaterialVertexDeclaration::InitRHI
          (FPostProcessMaterialVertexDeclaration *this,FRHICommandListBase *param_1)

{
  FRHIResource *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FRHIResource *this_01;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_b8;
  undefined4 uStack_b6;
  undefined2 uStack_b2;
  undefined8 local_a8 [17];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_1c = 0x11;
  local_20 = 0;
  local_b8 = 0;
  uStack_b6 = 0x200004;
  uStack_b2 = 0;
  iVar3 = 0;
  if ((local_a8 <= &local_b8) &&
     (&local_b8 < &((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->ArrayNum)) {
    local_c8 = 8;
    local_d0 = 0;
    local_e0 = (longlong)local_a8;
    local_d8 = 0x11;
    local_e8 = (undefined1 *)&local_b8;
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
  (((TArray<FVertexElement,TFixedAllocator<17>_> *)local_a8)->AllocatorInstance).InlineData[iVar3] =
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

// ReleaseRHI @ 145189440

void __thiscall
_anon_4E9C524B::FPostProcessMaterialVertexDeclaration::ReleaseRHI
          (FPostProcessMaterialVertexDeclaration *this)

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

