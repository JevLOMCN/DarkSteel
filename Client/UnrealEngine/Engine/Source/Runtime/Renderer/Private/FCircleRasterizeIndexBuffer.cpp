// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 145838200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FCircleRasterizeIndexBuffer::InitRHI(FCircleRasterizeIndexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *this_00;
  code *pcVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  undefined2 local_b8;
  short local_b6;
  short local_b4 [2];
  undefined1 local_b0 [40];
  FNameEntryId local_88;
  uint uStack_84;
  FName FStack_80;
  undefined8 local_78;
  undefined **local_70;
  FScriptContainerElement *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined ***pppuStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  iVar9 = 0;
  iVar8 = FCircleRasterizeVertexBuffer::NumVertices + -2;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_bc = 0;
  uVar3 = iVar8 * 3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  local_c0 = 0;
  if (uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar3,&local_c8,0,&local_bc);
  }
  if (0 < iVar8) {
    do {
      local_b8 = 0;
      if (((local_c8.Data <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 < local_c8.Data + (longlong)local_bc * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c0 == local_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_c8,&local_bc);
      }
      iVar6 = local_c0 + 1;
      sVar7 = (short)iVar9 + 2;
      *(undefined2 *)(local_c8.Data + (longlong)local_c0 * 2) = local_b8;
      local_b6 = (short)iVar9 + 1;
      local_c0 = iVar6;
      if (((local_c8.Data <= (FScriptContainerElement *)&local_b6) &&
          ((FScriptContainerElement *)&local_b6 < local_c8.Data + (longlong)local_bc * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c0 == local_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_c8,&local_bc);
      }
      iVar6 = local_c0 + 1;
      *(short *)(local_c8.Data + (longlong)local_c0 * 2) = local_b6;
      local_c0 = iVar6;
      local_b4[0] = sVar7;
      if (((local_c8.Data <= (FScriptContainerElement *)local_b4) &&
          ((FScriptContainerElement *)local_b4 < local_c8.Data + (longlong)local_bc * 2)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_c0 == local_bc) {
        local_c0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x202,&local_c8,&local_bc);
      }
      iVar6 = local_c0 + 1;
      iVar9 = iVar9 + 1;
      *(short *)(local_c8.Data + (longlong)local_c0 * 2) = local_b4[0];
      local_c0 = iVar6;
    } while (iVar9 < iVar8);
  }
  iVar8 = local_c0;
  FVar4.Data = local_c8.Data;
  if ((local_c0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88.Value = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_70 = &___7FResourceArrayUploadArrayView__6B_;
  local_b0._32_8_ = &local_70;
  local_b0._8_4_ = iVar8 * 2;
  local_b0._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_b0._24_8_ = L"FCircleRasterizeIndexBuffer";
  local_b0._12_4_ = 2;
  local_48 = L"FCircleRasterizeIndexBuffer";
  local_b0._16_4_ = 0x8001;
  local_58 = CONCAT44(2,local_b0._8_4_);
  uStack_50 = CONCAT44(local_b0._20_4_,0x8001);
  FStack_80.ComparisonIndex.Value = 0;
  FStack_80.Number = 0;
  uStack_84 = 2;
  local_78 = 0;
  local_38 = CONCAT44(2,local_88.Value);
  local_68 = FVar4.Data;
  uStack_30 = 0;
  local_28 = 0;
  local_60 = local_b0._8_4_;
  pppuStack_40 = (undefined ***)local_b0._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_b0);
  puVar1 = &this->field_0x20;
  if (puVar1 != local_b0) {
    this_00 = *(FRHIResource **)puVar1;
    *(undefined8 *)puVar1 = local_b0._0_8_;
    local_b0._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_14583858d;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_b0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b0._0_8_);
  }
LAB_14583858d:
  if (local_c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  return;
}

