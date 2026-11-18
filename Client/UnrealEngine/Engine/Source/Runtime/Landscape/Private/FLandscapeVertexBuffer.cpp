// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 2

// ~FLandscapeVertexBuffer @ 145f7e160

void __thiscall FLandscapeVertexBuffer::~FLandscapeVertexBuffer(FLandscapeVertexBuffer *this)

{
  this->_padding_ = (longlong)&___7FLandscapeVertexBuffer__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// InitRHI @ 145f97430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145f97673) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffed8 : 0x000145f97677 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeVertexBuffer::InitRHI(FLandscapeVertexBuffer *this,FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 local_184;
  FRHIResource *local_178;
  int local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  wchar_t *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  FRHICommandListBase *local_98;
  FRHIBuffer *pFStack_90;
  void *local_88;
  ulong64 local_80;
  undefined1 local_78 [48];
  FRHICommandListBase *local_48;
  FRHIBuffer *local_40;
  void *local_38;
  ulong64 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3231,"FLandscapeVertexBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
               ,0xc9f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3231);
  }
  uVar17 = 0;
  local_170 = this->NumVertices << 2;
  iStack_164 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  iVar16 = 0;
  uStack_16c = 0;
  local_160 = L"FLandscapeVertexBuffer";
  uStack_158 = 0;
  uStack_168 = 0x4001;
  local_150 = 8;
  FLazyName::Resolve(&::ClassName);
  local_108 = CONCAT44(uStack_16c,local_170);
  uStack_100 = CONCAT44(iStack_164,uStack_168);
  uStack_148 = local_184;
  local_140 = this->_padding_;
  EVar1 = param_1->ActivePipelines;
  uStack_14c = 3;
  local_e8 = CONCAT44(3,local_150);
  local_f8 = local_160;
  uStack_f0 = uStack_158;
  uStack_e0 = local_184;
  local_d8 = local_140;
  if (((EVar1 != None) && ((EVar1 & EVar1 - Graphics) != None)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x2a5,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_1->ActivePipelines == None) {
    FRHICommandListBase::SwitchPipeline(param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_108);
    FRHICommandListBase::SwitchPipeline(param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,&local_c8,param_1,&local_108);
  }
  uVar4 = uStack_c0;
  local_78._0_8_ = local_c8;
  local_78._40_8_ = plStack_a0;
  if (local_c8 != 0) {
    local_c8 = 0;
  }
  local_138 = local_c8;
  local_48 = local_98;
  local_40 = pFStack_90;
  local_38 = local_88;
  local_30 = local_80;
  local_c8 = 0;
  uStack_c0 = uStack_130;
  local_b8 = (undefined4)local_128;
  uStack_b4 = local_128._4_4_;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  plStack_a0 = (longlong *)0x0;
  uStack_130 = uVar4;
  uStack_110 = 0;
  if (local_138 != 0) {
    (**(code **)(local_128 + 0x10))();
  }
  local_88 = (void *)0x0;
  local_98 = (FRHICommandListBase *)0x0;
  pFStack_90 = (FRHIBuffer *)0x0;
  local_80 = 0;
  if (local_c8 != 0) {
    plVar10 = (longlong *)&local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar10 = plStack_a0;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  iVar9 = this->NumSubsections;
  uVar11 = uVar17;
  uVar14 = uVar17;
  if (0 < iVar9) {
    do {
      if (0 < iVar9) {
        iVar16 = this->SubsectionSizeVerts;
        uVar15 = uVar17;
        do {
          uVar12 = uVar17;
          uVar13 = uVar14;
          iVar9 = iVar16;
          if (0 < iVar16) {
            do {
              uVar7 = uVar17;
              uVar14 = uVar13;
              if (0 < iVar9) {
                do {
                  uVar14 = (ulonglong)((int)uVar13 + 1);
                  uVar6 = (int)uVar7 + 1;
                  local_188 = CONCAT13((char)uVar11,
                                       CONCAT12((char)uVar15,CONCAT11((char)uVar12,(char)uVar7)));
                  *(undefined4 *)((longlong)local_38 + uVar13 * 4) = local_188;
                  iVar16 = this->SubsectionSizeVerts;
                  uVar7 = (ulonglong)uVar6;
                  uVar13 = uVar14;
                  iVar9 = iVar16;
                } while ((int)uVar6 < iVar16);
              }
              uVar6 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar6;
              uVar13 = uVar14;
            } while ((int)uVar6 < iVar9);
          }
          iVar9 = this->NumSubsections;
          uVar6 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar9);
      }
      iVar16 = (int)uVar14;
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
    } while ((int)uVar6 < iVar9);
  }
  if ((this->NumVertices != iVar16) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumVertices == VertexIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                         ,0xcc3,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar8 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_78);
  plVar10 = &this->_padding_;
  if ((FRHIBuffer *)plVar10 != TVar8.Reference) {
    this_00 = (FRHIResource *)*plVar10;
    *plVar10 = (TVar8.Reference)->_padding_;
    (TVar8.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_178 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_178);
  }
  if ((local_48 != (FRHICommandListBase *)0x0) && (local_40 != (FRHIBuffer *)0x0)) {
    FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_78);
  }
  if (local_78._0_8_ != 0) {
    plVar10 = (longlong *)(local_78 + 0x10);
    if ((longlong *)local_78._40_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_78._40_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

