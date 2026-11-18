// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 144b79120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStencilConeIndexBuffer::InitRHI(FStencilConeIndexBuffer *this,FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  ForAnyElementType local_f8;
  int local_f0;
  int iStack_ec;
  short local_e8;
  short local_e6;
  short local_e4;
  short local_e2;
  short local_e0;
  short local_de;
  short local_dc;
  short local_da;
  short local_d8;
  short local_d6;
  short local_d4;
  short local_d2;
  undefined1 local_d0 [40];
  FNameEntryId local_a8;
  uint uStack_a4;
  FName FStack_a0;
  undefined8 local_98;
  undefined **local_90;
  FScriptContainerElement *local_88;
  int local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined ***pppuStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  iStack_ec = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x948,&local_f8,0,&iStack_ec);
  sVar13 = 0;
  iVar12 = 0;
  do {
    uVar11 = 0;
    do {
      uVar8 = uVar11 + 1;
      sVar7 = (short)((ulonglong)uVar11 / 0x12);
      sVar6 = (short)uVar8 + (short)((int)uVar8 / 0x12) * -0x12 + (short)iVar12;
      sVar9 = (short)uVar11 + ((sVar13 - sVar7) + 1) * 0x12;
      local_e8 = (sVar13 - sVar7) * 0x12 + (short)uVar11;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_e8;
      local_e6 = sVar6;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e6) &&
          ((FScriptContainerElement *)&local_e6 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_e6;
      local_e4 = sVar9;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e4) &&
          ((FScriptContainerElement *)&local_e4 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_e4;
      local_e2 = sVar9;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e2) &&
          ((FScriptContainerElement *)&local_e2 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_e2;
      local_e0 = sVar6;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      local_de = sVar6 + 0x12;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_e0;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_de) &&
          ((FScriptContainerElement *)&local_de < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_de;
      uVar11 = uVar8;
      local_f0 = iVar1;
    } while ((int)uVar8 < 0x12);
    sVar13 = sVar13 + 1;
    iVar12 = iVar12 + 0x12;
  } while (iVar12 < 0xc6);
  sVar13 = 0;
  iVar12 = 0xea;
  do {
    uVar11 = 0;
    do {
      uVar8 = uVar11 + 1;
      sVar7 = (short)uVar8 + (short)((int)uVar8 / 0x12) * -0x12;
      sVar9 = sVar7 + (short)iVar12 + -0x12;
      sVar7 = (short)iVar12 + sVar7;
      sVar6 = (short)((ulonglong)uVar11 / 0x12);
      sVar10 = (short)uVar11 + ((sVar13 - sVar6) + 0xd) * 0x12;
      local_dc = ((sVar13 - sVar6) + 0xc) * 0x12 + (short)uVar11;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_dc) &&
          ((FScriptContainerElement *)&local_dc < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_dc;
      local_da = sVar10;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_da) &&
          ((FScriptContainerElement *)&local_da < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_da;
      local_d8 = sVar9;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_d8;
      local_d6 = sVar9;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_d6) &&
          ((FScriptContainerElement *)&local_d6 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_d6;
      local_d4 = sVar10;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_d4) &&
          ((FScriptContainerElement *)&local_d4 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_d4;
      local_d2 = sVar7;
      local_f0 = iVar1;
      if (((local_f8.Data <= (FScriptContainerElement *)&local_d2) &&
          ((FScriptContainerElement *)&local_d2 < local_f8.Data + (longlong)iStack_ec * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_f0 == iStack_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_f8,&iStack_ec);
      }
      FVar4.Data = local_f8.Data;
      iVar1 = local_f0 + 1;
      *(short *)(local_f8.Data + (longlong)local_f0 * 2) = local_d2;
      uVar11 = uVar8;
      local_f0 = iVar1;
    } while ((int)uVar8 < 0x12);
    sVar13 = sVar13 + 1;
    iVar12 = iVar12 + 0x12;
  } while (iVar12 < 0x1b0);
  this->NumIndices = iVar1;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_a8.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_90 = &___7FResourceArrayUploadArrayView__6B_;
  local_d0._32_8_ = &local_90;
  local_d0._8_4_ = iVar1 * 2;
  local_d0._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_d0._24_8_ = L"FStencilConeIndexBuffer";
  local_68 = L"FStencilConeIndexBuffer";
  local_d0._12_4_ = 2;
  local_d0._16_4_ = 0x8001;
  local_78 = CONCAT44(2,local_d0._8_4_);
  uStack_70 = CONCAT44(local_d0._20_4_,0x8001);
  FStack_a0.ComparisonIndex.Value = 0;
  FStack_a0.Number = 0;
  uStack_a4 = 2;
  local_98 = 0;
  local_58 = CONCAT44(2,local_a8.Value);
  local_88 = FVar4.Data;
  uStack_50 = 0;
  local_48 = 0;
  local_80 = local_d0._8_4_;
  pppuStack_60 = (undefined ***)local_d0._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_d0);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_d0) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_d0._0_8_;
    local_d0._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b79bf9;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_d0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d0._0_8_);
  }
LAB_144b79bf9:
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

