// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraVertexFactories
// Functions: 3

// InitRHI @ 148dcc150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148dcc343) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec8 : 0x000148dcc347 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraCutoutVertexBuffer::InitRHI(FNiagaraCutoutVertexBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  int *piVar2;
  ERHIPipeline EVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  longlong *plVar10;
  ulonglong _Size;
  undefined1 auStackY_1d8 [32];
  FRHIResource *local_170;
  undefined1 local_168 [240];
  longlong local_78 [3];
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  iVar4 = (this->Data).ArrayNum;
  if (iVar4 != 0) {
    EVar3 = param_1->ActivePipelines;
    local_168._80_8_ = ZEXT48((uint)(iVar4 * 8));
    local_168._88_8_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x4101);
    local_168._112_8_ = 0x300000078;
    local_168._96_8_ = L"FNiagaraCutoutVertexBuffer";
    local_168._104_8_ = 0;
    local_168._128_8_ = 0;
    local_168._120_8_ = 0;
    if (((EVar3 != None) && ((EVar3 & EVar3 - Graphics) != None)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x2a5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->ActivePipelines == None) {
      FRHICommandListBase::SwitchPipeline(param_1,Graphics);
      (**(code **)(GDynamicRHI->_padding_ + 0x140))
                (GDynamicRHI,local_168 + 0x90,param_1,local_168 + 0x50);
      FRHICommandListBase::SwitchPipeline(param_1,None);
    }
    else {
      (**(code **)(GDynamicRHI->_padding_ + 0x140))
                (GDynamicRHI,local_168 + 0x90,param_1,local_168 + 0x50);
    }
    uVar6 = local_168._152_8_;
    local_168._224_8_ = local_168._144_8_;
    local_60 = (longlong *)local_168._184_8_;
    if (local_168._144_8_ != 0) {
      local_168._144_8_ = 0;
    }
    local_168._32_8_ = local_168._144_8_;
    local_58 = local_168._192_8_;
    local_50 = local_168._200_8_;
    local_48 = (void *)local_168._208_8_;
    local_40 = local_168._216_8_;
    local_168._144_8_ = 0;
    local_168._152_8_ = local_168._40_8_;
    local_168._160_4_ = local_168._48_4_;
    local_168._164_4_ = local_168._52_4_;
    local_168._168_4_ = local_168._56_4_;
    local_168._172_4_ = local_168._60_4_;
    local_168._176_4_ = local_168._64_4_;
    local_168._180_4_ = local_168._68_4_;
    local_168._184_8_ = (longlong *)0x0;
    local_168._40_8_ = uVar6;
    local_168._72_8_ = 0;
    if (local_168._32_8_ != 0) {
      (**(code **)(local_168._48_8_ + 0x10))();
    }
    local_168._208_8_ = 0;
    local_168._192_8_ = 0;
    local_168._200_8_ = 0;
    local_168._216_4_ = 0;
    local_168._220_4_ = 0;
    if (local_168._144_8_ != 0) {
      plVar10 = (longlong *)(local_168 + 0xa0);
      if ((longlong *)local_168._184_8_ != (longlong *)0x0) {
        plVar10 = (longlong *)local_168._184_8_;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    iVar4 = (this->Data).ArrayNum;
    _Src = (this->Data).AllocatorInstance.Data;
    if ((iVar4 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    _Size = (longlong)iVar4 * 8;
    if ((local_40 < _Size) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size <= GetWritableDataSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                           ,0x27,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    memcpy(local_48,_Src,_Size);
    TVar8 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)(local_168 + 0xe0));
    plVar10 = &this->_padding_;
    if ((FRHIBuffer *)plVar10 != TVar8.Reference) {
      this_00 = (FRHIResource *)*plVar10;
      *plVar10 = (TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_170 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_170);
    }
    local_168._16_8_ = 0;
    local_168._8_8_ = 0x11100;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)local_168,(FInitializer *)*plVar10);
    pTVar1 = &this->VertexBufferSRV;
    if ((FRHIShaderResourceView *)pTVar1 != TVar9.Reference) {
      this_01 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar1->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if ((FRHIResource *)local_168._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_168._0_8_);
    }
    piVar2 = &(this->Data).ArrayMax;
    (this->Data).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->Data).AllocatorInstance,0,piVar2);
    }
    if ((local_58 != 0) && (local_50 != 0)) {
      FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)(local_168 + 0xe0));
    }
    if (local_168._224_8_ != 0) {
      plVar10 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar10 = local_60;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  return;
}

// ReleaseRHI @ 148dcc530

void __thiscall FNiagaraCutoutVertexBuffer::ReleaseRHI(FNiagaraCutoutVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->VertexBufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// FNiagaraCutoutVertexBuffer @ 148dcd680

FNiagaraCutoutVertexBuffer * __thiscall
FNiagaraCutoutVertexBuffer::FNiagaraCutoutVertexBuffer(FNiagaraCutoutVertexBuffer *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FNiagaraCutoutVertexBuffer__6B_;
  piVar1 = &(this->Data).ArrayNum;
  *piVar1 = 0;
  piVar2 = &(this->Data).ArrayMax;
  (this->VertexBufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  if (0 < param_1) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,param_1,&(this->Data).AllocatorInstance,piVar1,piVar2);
    memset((this->Data).AllocatorInstance.Data + (longlong)iVar3 * 8,0,(longlong)param_1 << 3);
  }
  return this;
}

