// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// CacheOptimize @ 1483f2690

void __thiscall FRawIndexBuffer16or32::CacheOptimize(FRawIndexBuffer16or32 *this)

{
  return;
}

// ComputeIndexWidth @ 1483f74b0

void __thiscall FRawIndexBuffer16or32::ComputeIndexWidth(FRawIndexBuffer16or32 *this)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 4);
  TVar5 = (uint)bVar1;
  if (bVar1 == 5) {
    TVar5 = GMaxRHIFeatureLevel;
  }
  if (2 < (int)TVar5) {
    this->b32Bit = true;
    return;
  }
  bVar4 = false;
  iVar2 = (this->Indices).ArrayNum;
  uVar8 = 0;
  lVar7 = 0;
  do {
    if (iVar2 <= lVar7) break;
    uVar6 = 0;
    if ((int)uVar8 < (this->Indices).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = *(uint *)((this->Indices).AllocatorInstance.Data + lVar7 * 4);
    bVar4 = 0xffff < uVar6;
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 1;
  } while (uVar6 < 0x10000);
  this->b32Bit = bVar4;
  return;
}

// InitRHI @ 14840d4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawIndexBuffer16or32::InitRHI(FRawIndexBuffer16or32 *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  ERHIPipeline EVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FRHIResource *pFVar4;
  code *pcVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TRefCountPtr<FRHIBuffer> TVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStackY_228 [32];
  FRHIResource *local_1c0;
  FRHIResource *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  wchar_t *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_178 [48];
  FRHICommandListBase *local_148;
  FRHIBuffer *local_140;
  void *local_138;
  ulonglong local_130;
  undefined1 local_128 [48];
  FRHICommandListBase *local_f8;
  FRHIBuffer *local_f0;
  undefined1 local_d8 [48];
  FRHICommandListBase *local_a8;
  FRHIBuffer *local_a0;
  undefined1 local_88 [48];
  FRHICommandListBase *local_58;
  FRHIBuffer *local_50;
  void *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  iVar3 = (this->Indices).ArrayNum;
  iVar8 = 2;
  if (this->b32Bit != false) {
    iVar8 = 4;
  }
  uVar12 = 0;
  if (iVar3 * iVar8 != 0) {
    EVar2 = param_1->ActivePipelines;
    local_1b0 = CONCAT44(iVar8,iVar3 * iVar8);
    uStack_1a8 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x8001);
    local_190 = 0x300000078;
    local_1a0 = L"FRawIndexBuffer";
    uStack_198 = 0;
    local_180 = 0;
    uStack_188 = 0;
    if (this->b32Bit == false) {
      if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
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
        (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_d8,param_1,&local_1b0);
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x140))(GDynamicRHI,local_d8,param_1,&local_1b0);
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_88,(FRHIBufferInitializer *)local_d8);
      if ((local_a8 != (FRHICommandListBase *)0x0) && (local_a0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_d8);
      }
      if (local_d8._0_8_ != 0) {
        plVar11 = (longlong *)(local_d8 + 0x10);
        if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_d8._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      uVar14 = uVar12;
      if (0 < (longlong)iVar3) {
        do {
          uVar13 = (uint)uVar14;
          uVar9 = 0;
          if ((int)uVar13 < (this->Indices).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          *(undefined2 *)((longlong)local_48 + uVar12 * 2) =
               *(undefined2 *)((this->Indices).AllocatorInstance.Data + uVar12 * 4);
          uVar12 = uVar12 + 1;
          uVar14 = (ulonglong)(uVar13 + 1);
        } while ((longlong)uVar12 < (longlong)iVar3);
      }
      TVar10 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_88);
      plVar11 = &this->_padding_;
      if ((FRHIBuffer *)plVar11 != TVar10.Reference) {
        pFVar4 = (FRHIResource *)*plVar11;
        *plVar11 = (TVar10.Reference)->_padding_;
        (TVar10.Reference)->_padding_ = 0;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar4);
        }
      }
      if (local_1b8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_1b8);
      }
      if ((local_58 != (FRHICommandListBase *)0x0) && (local_50 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_88);
      }
      if (local_88._0_8_ == 0) goto LAB_14840d910;
      puVar6 = local_88;
      local_178._40_8_ = local_88._40_8_;
    }
    else {
      if (((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) &&
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
                  (GDynamicRHI,(FRHIBufferInitializer *)local_128,param_1,&local_1b0);
        FRHICommandListBase::SwitchPipeline(param_1,None);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x140))
                  (GDynamicRHI,(FRHIBufferInitializer *)local_128,param_1,&local_1b0);
      }
      FRHIBufferInitializer::FRHIBufferInitializer
                ((FRHIBufferInitializer *)local_178,(FRHIBufferInitializer *)local_128);
      if ((local_f8 != (FRHICommandListBase *)0x0) && (local_f0 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_128);
      }
      if (local_128._0_8_ != 0) {
        plVar11 = (longlong *)(local_128 + 0x10);
        if ((longlong *)local_128._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_128._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      iVar3 = (this->Indices).ArrayNum;
      _Src = (this->Indices).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = (longlong)iVar3 * 4;
      if ((local_130 < uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Size <= GetWritableDataSize()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBufferInitializer.h"
                             ,0x27,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      memcpy(local_138,_Src,uVar12);
      TVar10 = FRHIBufferInitializer::Finalize((FRHIBufferInitializer *)local_178);
      plVar11 = &this->_padding_;
      if ((FRHIBuffer *)plVar11 != TVar10.Reference) {
        pFVar4 = (FRHIResource *)*plVar11;
        *plVar11 = (TVar10.Reference)->_padding_;
        (TVar10.Reference)->_padding_ = 0;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar4);
        }
      }
      if (local_1c0 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_1c0);
      }
      if ((local_148 != (FRHICommandListBase *)0x0) && (local_140 != (FRHIBuffer *)0x0)) {
        FRHIBufferInitializer::RemovePendingBufferUpload((FRHIBufferInitializer *)local_178);
      }
      if (local_178._0_8_ == 0) goto LAB_14840d910;
      puVar6 = local_178;
    }
    plVar11 = (longlong *)(puVar6 + 0x10);
    if ((longlong *)local_178._40_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_178._40_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_14840d910:
  if (PRIVATE_GIsRunningCommandlet == false) {
    piVar1 = &(this->Indices).ArrayMax;
    (this->Indices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Indices).AllocatorInstance,0,piVar1);
    }
  }
  return;
}

