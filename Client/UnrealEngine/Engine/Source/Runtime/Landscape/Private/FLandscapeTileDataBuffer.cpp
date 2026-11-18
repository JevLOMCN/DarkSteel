// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// ~FLandscapeTileDataBuffer @ 145f27a90

void __thiscall
UE::Landscape::Culling::FLandscapeTileDataBuffer::~FLandscapeTileDataBuffer
          (FLandscapeTileDataBuffer *this)

{
  this->_padding_ = (longlong)&___7FLandscapeTileDataBuffer_Culling_Landscape_UE__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// InitRHI @ 145f30340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::Landscape::Culling::FLandscapeTileDataBuffer::InitRHI
          (FLandscapeTileDataBuffer *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_178 [32];
  int local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  wchar_t *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  FRHIResource *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  wchar_t *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  void *local_98;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  uVar10 = this->SubsectionSizeQuads + 3;
  uVar15 = 0;
  uVar11 = uVar10 >> 2;
  uStack_154 = 4;
  uStack_150 = 0x4001;
  uStack_140 = 0;
  uStack_130 = 0;
  local_138 = 8;
  local_158 = this->NumSubsections * this->NumSubsections * uVar11 * uVar11 * 4;
  iStack_14c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_134 = 3;
  local_118 = CONCAT44(4,local_158);
  uStack_110 = CONCAT44(iStack_14c,0x4001);
  local_148 = L"FLandscapeTileVertexBuffer";
  EVar1 = param_1->ActivePipelines;
  local_128 = 0;
  local_f8 = 0x300000008;
  local_108 = L"FLandscapeTileVertexBuffer";
  uStack_100 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_88,param_1,&local_118);
  }
  FRHIBufferInitializer::FRHIBufferInitializer
            ((FRHIBufferInitializer *)local_d8,(FRHIBufferInitializer *)local_88);
  if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
  }
  if (local_88._0_8_ != 0) {
    plVar6 = (longlong *)(local_88 + 0x10);
    if ((longlong *)local_88._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_88._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar8 = this->NumSubsections;
  uVar14 = uVar15;
  uVar16 = uVar15;
  if (uVar8 != 0) {
    do {
      uVar9 = uVar15;
      if (uVar8 != 0) {
        do {
          uVar8 = uVar15;
          if (uVar10 >> 2 != 0) {
            do {
              iVar4 = uVar14 + 2;
              uVar13 = uVar15;
              do {
                cVar12 = (char)uVar13;
                lVar7 = (longlong)(int)uVar14;
                uVar13 = uVar13 + 1;
                uVar14 = uVar14 + 4;
                *(char *)(lVar7 + (longlong)local_98) = cVar12 << 2;
                *(char *)((longlong)iVar4 + -1 + (longlong)local_98) = (char)uVar8 << 2;
                *(char *)((longlong)iVar4 + (longlong)local_98) = (char)uVar9;
                lVar7 = (longlong)iVar4;
                iVar4 = iVar4 + 4;
                *(char *)(lVar7 + 1 + (longlong)local_98) = (char)uVar16;
              } while (uVar13 < uVar11);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar11);
          }
          uVar8 = this->NumSubsections;
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar8);
  }
  TVar5 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_d8);
  plVar6 = &this->_padding_;
  if ((FRHIBuffer *)plVar6 != TVar5.Reference) {
    this_00 = (FRHIResource *)*plVar6;
    *plVar6 = (TVar5.Reference)->_padding_;
    (TVar5.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_120 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_120);
  }
  if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
  }
  if (local_d8._0_8_ != 0) {
    plVar6 = (longlong *)(local_d8 + 0x10);
    if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_d8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

