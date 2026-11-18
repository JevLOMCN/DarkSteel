// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// InitRHI @ 144b79cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FStencilConeVertexBuffer::InitRHI(FStencilConeVertexBuffer *this,FRHICommandListBase *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  FRHIResource *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  longlong lVar6;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  undefined1 local_a8 [40];
  FNameEntryId local_80;
  uint uStack_7c;
  FName FStack_78;
  undefined8 local_70;
  undefined **local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_50;
  undefined8 uStack_48;
  wchar_t *local_40;
  undefined ***pppuStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  lVar6 = 0x1b0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,0x1b0,&local_b8,0,&iStack_ac);
  do {
    if (local_b0 == iStack_ac) {
      local_b0 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1010,&local_b8,&iStack_ac);
    }
    FVar4.Data = local_b8.Data;
    iVar1 = local_b0 + 1;
    *(undefined8 *)(local_b8.Data + (longlong)local_b0 * 0x10) = 0;
    *(undefined8 *)(local_b8.Data + (longlong)local_b0 * 0x10 + 8) = 0;
    lVar6 = lVar6 + -1;
    local_b0 = iVar1;
  } while (lVar6 != 0);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_80.Value = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_68 = &___7FResourceArrayUploadArrayView__6B_;
  local_a8._32_8_ = &local_68;
  local_a8._8_4_ = iVar1 * 0x10;
  local_a8._20_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8._24_8_ = L"FStencilConeVertexBuffer";
  local_a8._12_4_ = 0;
  local_40 = L"FStencilConeVertexBuffer";
  local_a8._16_4_ = 0x4001;
  local_50 = (ulonglong)(uint)local_a8._8_4_;
  uStack_48 = CONCAT44(local_a8._20_4_,0x4001);
  FStack_78.ComparisonIndex.Value = 0;
  FStack_78.Number = 0;
  uStack_7c = 2;
  local_70 = 0;
  local_30 = CONCAT44(2,local_80.Value);
  local_60 = FVar4.Data;
  uStack_28 = 0;
  local_20 = 0;
  local_58 = local_a8._8_4_;
  pppuStack_38 = (undefined ***)local_a8._32_8_;
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)local_a8);
  puVar2 = &this->field_0x20;
  if (puVar2 != local_a8) {
    this_00 = *(FRHIResource **)puVar2;
    *(undefined8 *)puVar2 = local_a8._0_8_;
    local_a8._0_8_ = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_144b79e4c;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._0_8_);
  }
LAB_144b79e4c:
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

