// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// InitRHI @ 145ddc3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FUnitCubeVertexBuffer::InitRHI(FUnitCubeVertexBuffer *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FRHIResource *this_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ForAnyElementType local_f8;
  int local_f0 [2];
  FRHIBufferCreateDesc local_e8;
  ERHIAccess local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  FScriptContainerElement *local_90;
  uint local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  wchar_t *local_70;
  FName FStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar11 = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,0x10,8,&local_f8,local_f0,local_f0 + 1);
  uVar4 = __real_bf800000;
  uVar3 = __real_3f800000;
  local_e8.DebugName._4_4_ = 0x3f800000;
  uVar8 = uVar11;
  uVar12 = uVar11;
  uVar9 = uVar11;
  do {
    local_e8.DebugName._0_4_ = uVar3;
    if (uVar12 != 0) {
      local_e8.DebugName._0_4_ = uVar4;
    }
    local_e8._padding_._4_4_ = uVar3;
    if (uVar9 != 0) {
      local_e8._padding_._4_4_ = uVar4;
    }
    local_e8._padding_._0_4_ = uVar3;
    if (uVar8 != 0) {
      local_e8._padding_._0_4_ = uVar4;
    }
    uVar10 = uVar12 + (uVar9 + uVar8 * 2) * 2 & 0xffff;
    if ((local_f0[0] <= (int)uVar10) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar5.Data = local_f8.Data;
    uVar8 = uVar8 + 1;
    *(ulonglong *)(local_f8.Data + (ulonglong)uVar10 * 0x10) =
         CONCAT44(local_e8._padding_._4_4_,(undefined4)local_e8._padding_);
    *(ulonglong *)(local_f8.Data + (ulonglong)uVar10 * 0x10 + 8) =
         CONCAT44(local_e8.DebugName._4_4_,local_e8.DebugName._0_4_);
  } while (((uVar8 < 2) || (uVar9 = uVar9 + 1, uVar8 = uVar11, uVar9 < 2)) ||
          (uVar12 = uVar12 + 1, uVar9 = uVar11, uVar12 < 2));
  iVar6 = local_f0[0];
  if ((local_f0[0] < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b0 = RHIGetDefaultResourceState(VertexBuffer|Static,false);
  local_98 = &___7FResourceArrayUploadArrayView__6B_;
  local_e8.OwnerName = (FName)&local_98;
  local_e8.InitialData._0_4_ = iVar6 << 4;
  local_e8.InitAction = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - Zeroed;
  local_e8.ClassName = (FName)0x151148120;
  local_e8.InitialData._4_4_ = 0;
  local_70 = L"FUnitCubeVertexBuffer";
  local_e8.InitialState = ResolveDst|CPURead;
  local_80 = (ulonglong)(uint)local_e8.InitialData;
  uStack_78 = CONCAT44(local_e8.InitAction,0x4001);
  uStack_a8 = 0;
  uStack_ac = 2;
  local_a0 = 0;
  local_60 = CONCAT44(2,local_b0);
  local_90 = FVar5.Data;
  uStack_58 = 0;
  local_50 = 0;
  local_88 = (uint)local_e8.InitialData;
  FStack_68 = local_e8.OwnerName;
  FRHICommandListBase::CreateBuffer(param_1,&local_e8);
  puVar1 = &this->field_0x20;
  if ((FRHIBufferCreateDesc *)puVar1 != &local_e8) {
    this_00 = *(FRHIResource **)puVar1;
    *(longlong *)puVar1 = local_e8._padding_;
    local_e8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145ddc612;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_e8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_e8._padding_);
  }
LAB_145ddc612:
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

