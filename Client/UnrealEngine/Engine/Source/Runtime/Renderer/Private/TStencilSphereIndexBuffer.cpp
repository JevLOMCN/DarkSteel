// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 144b79f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
StencilingGeometry::TStencilSphereIndexBuffer<18,12>::InitRHI
          (TStencilSphereIndexBuffer<18,12> *this,FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be [3];
  undefined1 local_b8 [40];
  FNameEntryId local_90;
  uint uStack_8c;
  FName FStack_88;
  undefined8 local_80;
  undefined **local_78;
  FScriptContainerElement *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  wchar_t *local_50;
  undefined ***pppuStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x510,&local_d8,0,&iStack_cc);
  iVar10 = 0;
  do {
    iVar8 = iVar10 + 0xd;
    iVar9 = 0;
    do {
      sVar6 = (short)iVar10 + (short)iVar9;
      local_c8 = sVar6;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      sVar7 = (short)iVar8 + (short)iVar9;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c8;
      local_c6 = sVar7;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c6) &&
          ((FScriptContainerElement *)&local_c6 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      sVar6 = sVar6 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c6;
      local_c4 = sVar6;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c4) &&
          ((FScriptContainerElement *)&local_c4 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c4;
      local_c2 = sVar7;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c2) &&
          ((FScriptContainerElement *)&local_c2 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      local_c0 = sVar7 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c2;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c0;
      local_be[0] = sVar6;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)local_be) &&
          ((FScriptContainerElement *)local_be < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      FVar4.Data = local_d8.Data;
      iVar1 = local_d0 + 1;
      iVar9 = iVar9 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_be[0];
      local_d0 = iVar1;
    } while (iVar9 < 0xc);
    iVar10 = iVar8;
  } while (iVar8 < 0xea);
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
  local_90.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_78 = &___7FResourceArrayUploadArrayView__6B_;
  local_b8._32_8_ = &local_78;
  local_b8._8_4_ = iVar1 * 2;
  local_b8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_b8._24_8_ = L"TStencilSphereIndexBuffer";
  local_50 = L"TStencilSphereIndexBuffer";
  local_b8._12_4_ = 2;
  local_b8._16_4_ = 0x8001;
  local_60 = CONCAT44(2,local_b8._8_4_);
  uStack_58 = CONCAT44(local_b8._20_4_,0x8001);
  FStack_88.ComparisonIndex.Value = 0;
  FStack_88.Number = 0;
  uStack_8c = 2;
  local_80 = 0;
  local_40 = CONCAT44(2,local_90.Value);
  local_70 = FVar4.Data;
  uStack_38 = 0;
  local_30 = 0;
  local_68 = local_b8._8_4_;
  pppuStack_48 = (undefined ***)local_b8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_b8);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_b8) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_b8._0_8_;
    local_b8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b7a481;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._0_8_);
  }
LAB_144b7a481:
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// InitRHI @ 144b7b390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
StencilingGeometry::TStencilSphereIndexBuffer<4,4>::InitRHI
          (TStencilSphereIndexBuffer<4,4> *this,FRHICommandListBase *param_1)

{
  int iVar1;
  longlong *plVar2;
  FRHIResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType local_d8;
  int local_d0;
  int iStack_cc;
  short local_c8;
  short local_c6;
  short local_c4;
  short local_c2;
  short local_c0;
  short local_be [3];
  undefined1 local_b8 [40];
  FNameEntryId local_90;
  uint uStack_8c;
  FName FStack_88;
  undefined8 local_80;
  undefined **local_78;
  FScriptContainerElement *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  wchar_t *local_50;
  undefined ***pppuStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  iStack_cc = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x60,&local_d8,0,&iStack_cc);
  iVar10 = 0;
  do {
    iVar8 = iVar10 + 5;
    iVar9 = 0;
    do {
      sVar6 = (short)iVar10 + (short)iVar9;
      local_c8 = sVar6;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c8) &&
          ((FScriptContainerElement *)&local_c8 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      sVar7 = (short)iVar8 + (short)iVar9;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c8;
      local_c6 = sVar7;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c6) &&
          ((FScriptContainerElement *)&local_c6 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      sVar6 = sVar6 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c6;
      local_c4 = sVar6;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c4) &&
          ((FScriptContainerElement *)&local_c4 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c4;
      local_c2 = sVar7;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c2) &&
          ((FScriptContainerElement *)&local_c2 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      local_c0 = sVar7 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c2;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      iVar1 = local_d0 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_c0;
      local_be[0] = sVar6;
      local_d0 = iVar1;
      if (((local_d8.Data <= (FScriptContainerElement *)local_be) &&
          ((FScriptContainerElement *)local_be < local_d8.Data + (longlong)iStack_cc * 2)) &&
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
      if (local_d0 == iStack_cc) {
        local_d0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_d8,&iStack_cc);
      }
      FVar4.Data = local_d8.Data;
      iVar1 = local_d0 + 1;
      iVar9 = iVar9 + 1;
      *(short *)(local_d8.Data + (longlong)local_d0 * 2) = local_be[0];
      local_d0 = iVar1;
    } while (iVar9 < 4);
    iVar10 = iVar8;
  } while (iVar8 < 0x14);
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
  local_90.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_78 = &___7FResourceArrayUploadArrayView__6B_;
  local_b8._32_8_ = &local_78;
  local_b8._8_4_ = iVar1 * 2;
  local_b8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_b8._24_8_ = L"TStencilSphereIndexBuffer";
  local_50 = L"TStencilSphereIndexBuffer";
  local_b8._12_4_ = 2;
  local_b8._16_4_ = 0x8001;
  local_60 = CONCAT44(2,local_b8._8_4_);
  uStack_58 = CONCAT44(local_b8._20_4_,0x8001);
  FStack_88.ComparisonIndex.Value = 0;
  FStack_88.Number = 0;
  uStack_8c = 2;
  local_80 = 0;
  local_40 = CONCAT44(2,local_90.Value);
  local_70 = FVar4.Data;
  uStack_38 = 0;
  local_30 = 0;
  local_68 = local_b8._8_4_;
  pppuStack_48 = (undefined ***)local_b8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_b8);
  plVar2 = &this->_padding_;
  if (plVar2 != (longlong *)local_b8) {
    this_00 = (FRHIResource *)*plVar2;
    *plVar2 = local_b8._0_8_;
    local_b8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b7b8fe;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._0_8_);
  }
LAB_144b7b8fe:
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

