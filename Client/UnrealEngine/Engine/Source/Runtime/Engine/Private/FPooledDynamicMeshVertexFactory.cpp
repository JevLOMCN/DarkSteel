// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FPooledDynamicMeshVertexFactory @ 147b39e00

FPooledDynamicMeshVertexFactory * __thiscall
FPooledDynamicMeshVertexFactory::FPooledDynamicMeshVertexFactory
          (FPooledDynamicMeshVertexFactory *this,Type param_1,
          FPooledDynamicMeshVertexBuffer *param_2)

{
  this->_padding_ = (longlong)&___7FDynamicPrimitiveResource__6B_;
  FLocalVertexFactory::FLocalVertexFactory
            ((FLocalVertexFactory *)&this->_padding_,param_1,"FPooledDynamicMeshVertexFactory");
  this->_padding_ = (longlong)&_vftable__for__FDynamicPrimitiveResource__;
  this->_padding_ = (longlong)&_vftable__for__FLocalVertexFactory__;
  this->VertexBuffer = param_2;
  return this;
}

// InitPrimitiveResource @ 147b76000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshVertexFactory::InitPrimitiveResource
          (FPooledDynamicMeshVertexFactory *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b76008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  return;
}

// InitResource @ 147b76e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshVertexFactory::InitResource
          (FPooledDynamicMeshVertexFactory *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  FRHICommandListBase *pFVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  FPooledDynamicMeshVertexFactory *pFVar12;
  undefined1 uVar13;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  undefined1 *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  char local_158;
  longlong local_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  longlong local_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  FRHICommandListBase *local_130;
  FPooledDynamicMeshVertexFactory *local_128;
  FPooledDynamicMeshVertexFactory *local_120;
  undefined1 local_118 [56];
  undefined8 auStack_e0 [7];
  int local_a8;
  int local_a4 [5];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  FVertexBuffer *local_58;
  undefined8 local_50;
  FRHIShaderResourceView *local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  pFVar12 = (FPooledDynamicMeshVertexFactory *)0x0;
  local_60 = 0xffffffff;
  local_118._16_8_ = 0;
  local_118._24_8_ = 0;
  local_118._32_8_ = 0;
  local_118._40_8_ = 0;
  uVar9 = 0;
  local_a8 = 0;
  local_a4[0] = 4;
  lVar1 = this->_padding_;
  local_a4[1] = 0;
  local_a4[2] = 0;
  local_a4[3] = 0;
  local_a4[4] = 0;
  local_90 = 0;
  local_88 = 0;
  local_118._0_8_ = lVar1 + 0x28;
  lVar7 = lVar1 + 0x78;
  local_5a = 0;
  local_58 = (FVertexBuffer *)0x0;
  local_50._0_4_ = 0;
  local_50._4_1_ = '\0';
  local_50._5_1_ = '\0';
  local_50._6_1_ = '\0';
  local_50._7_1_ = Default;
  local_48 = (FRHIShaderResourceView *)0x0;
  local_118._8_4_ = 0;
  local_118._12_4_ = 0x30c00;
  local_5b = *(undefined1 *)(lVar1 + 0xf8);
  local_5c = *(undefined1 *)(lVar1 + 0xfc);
  local_78 = *(longlong *)(lVar1 + 200);
  local_70 = *(longlong *)(lVar1 + 0xd0);
  local_68 = *(longlong *)(lVar1 + 0xd8);
  local_80 = *(longlong *)(lVar1 + 0xe0);
  local_120 = this;
  if (this == (FPooledDynamicMeshVertexFactory *)&DAT_00000008) {
    local_120 = pFVar12;
  }
  local_158 = *(char *)(lVar1 + 0x100);
  iVar8 = *(int *)(lVar1 + 0xf8);
  iVar3 = 4;
  if (local_158 == '\0') {
    iVar3 = 8;
  }
  uVar11 = iVar8 * iVar3;
  uVar10 = (undefined1)uVar11;
  local_130 = param_1;
  local_128 = this;
  if (0 < iVar8 + -1) {
    uVar13 = 0xd;
    if (local_158 == '\0') {
      uVar13 = 4;
    }
    do {
      uVar9 = iVar3 * (int)pFVar12;
      uStack_148 = 0;
      uStack_141 = 4;
      uStack_144 = (undefined1)uVar9;
      local_150 = lVar7;
      uStack_143 = uVar10;
      uStack_142 = uVar13;
      if ((0xff < uVar11) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStride <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x39,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((0xff < uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOffset <= 0xFF",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                             ,0x3a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((local_118 + 0x30 <= &local_150) &&
         (&local_150 < local_118 + (longlong)local_a4[0] * 0x10 + 0x30)) {
        local_170 = (longlong)local_a8;
        local_168 = 0x10;
        local_180 = local_118 + 0x30;
        local_188 = &local_150;
        local_178 = (longlong)local_a4[0];
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (local_a8 == local_a4[0]) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                             (0x810,(ForElementType<FVertexStreamComponent> *)(local_118 + 0x30),
                              local_a4);
      }
      uVar9 = (int)pFVar12 + 2;
      pFVar12 = (FPooledDynamicMeshVertexFactory *)(ulonglong)uVar9;
      lVar6 = (longlong)local_a8;
      local_a8 = local_a8 + 1;
      *(longlong *)(local_118 + lVar6 * 0x10 + 0x30) = local_150;
      auStack_e0[lVar6 * 2] =
           CONCAT17(uStack_141,
                    CONCAT16(uStack_142,CONCAT15(uStack_143,CONCAT14(uStack_144,uStack_148))));
      iVar8 = *(int *)(lVar1 + 0xf8);
    } while ((int)uVar9 < iVar8 + -1);
  }
  pFVar12 = local_128;
  pFVar4 = local_130;
  if ((int)uVar9 < iVar8) {
    uStack_138 = 0;
    uStack_132 = 0xc;
    if (local_158 == '\0') {
      uStack_132 = 2;
    }
    uStack_134 = (undefined1)(iVar3 * uVar9);
    uStack_131 = 4;
    local_140 = lVar7;
    uStack_133 = uVar10;
    if ((0xff < uVar11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStride <= 0xFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                           ,0x39,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((0xff < iVar3 * uVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOffset <= 0xFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                           ,0x3a,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_118 + 0x30 <= &local_140) &&
       (&local_140 < local_118 + (longlong)local_a4[0] * 0x10 + 0x30)) {
      local_170 = (longlong)local_a8;
      local_168 = 0x10;
      local_180 = local_118 + 0x30;
      local_188 = &local_140;
      local_178 = (longlong)local_a4[0];
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_a8 == local_a4[0]) {
      local_a8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FVertexStreamComponent>_>
                           (0x810,(ForElementType<FVertexStreamComponent> *)(local_118 + 0x30),
                            local_a4);
    }
    lVar7 = (longlong)local_a8;
    local_a8 = local_a8 + 1;
    *(longlong *)(local_118 + lVar7 * 0x10 + 0x30) = local_140;
    auStack_e0[lVar7 * 2] =
         CONCAT17(uStack_131,
                  CONCAT16(uStack_132,CONCAT15(uStack_133,CONCAT14(uStack_134,uStack_138))));
  }
  local_118._16_8_ = lVar1 + 0x50;
  local_118._24_8_ = 0x405080000000000;
  local_90 = lVar1 + 0xa0;
  local_118._40_8_ = 0x405080400000000;
  local_88 = 0x408040000000000;
  local_118._32_8_ = local_118._16_8_;
  FLocalVertexFactory::SetData((FLocalVertexFactory *)local_120,pFVar4,(FDataType *)local_118);
  FRenderResource::InitResource((FRenderResource *)pFVar12,pFVar4);
  return;
}

// ReleasePrimitiveResource @ 147b83650

void __thiscall
FPooledDynamicMeshVertexFactory::ReleasePrimitiveResource(FPooledDynamicMeshVertexFactory *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  (**(code **)(this->_padding_ + 0x20))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147b83674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar1)(plVar1,1);
  return;
}

