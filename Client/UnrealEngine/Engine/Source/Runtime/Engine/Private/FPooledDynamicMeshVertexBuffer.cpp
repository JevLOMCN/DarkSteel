// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// InitPrimitiveResource @ 147b75fe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshVertexBuffer::InitPrimitiveResource
          (FPooledDynamicMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147b75fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  return;
}

// InitRHI @ 147b76540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshVertexBuffer::InitRHI
          (FPooledDynamicMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIBuffer> *pTVar2;
  FRHIResource *pFVar3;
  FRHIShaderResourceView *pFVar4;
  FRHIBuffer *this_00;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  TRefCountPtr<FRHIShaderResourceView> TVar16;
  byte bVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  TRefCountPtr<FRHIShaderResourceView> *pTVar23;
  bool bVar24;
  bool bVar25;
  undefined4 local_res20;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar26;
  longlong local_110;
  longlong local_100;
  longlong local_f8;
  FRHIResource *local_e8;
  FRHIResource *local_e0;
  FRHIResource *local_d8;
  FRHIResource *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  longlong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshVertexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId423,"FPooledDynamicMeshVertexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshVertexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId423);
  }
  bVar25 = (char)this->NumTexCoords == '\0';
  iVar21 = 4;
  if (bVar25) {
    iVar21 = 8;
  }
  bVar17 = 0xf;
  if (bVar25) {
    bVar17 = 0x11;
  }
  plVar9 = (longlong *)
           (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x28))
                     (*(longlong **)&this->Use16bitTexCoord,&local_e8,param_1,0xc,
                      CONCAT44(uVar26,*(undefined4 *)&(this->Vertices).AllocatorInstance.Data));
  plVar1 = &(this->PositionBuffer)._padding_;
  if (plVar1 != plVar9) {
    pFVar3 = (FRHIResource *)*plVar1;
    *plVar1 = *plVar9;
    *plVar9 = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_e8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_e8);
  }
  plVar10 = (longlong *)
            (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x28))
                      (*(longlong **)&this->Use16bitTexCoord,&local_e0,param_1,4,
                       *(int *)&(this->Vertices).AllocatorInstance.Data * 2);
  plVar9 = &(this->TangentBuffer)._padding_;
  if (plVar9 != plVar10) {
    pFVar3 = (FRHIResource *)*plVar9;
    *plVar9 = *plVar10;
    *plVar10 = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_e0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_e0);
  }
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x28))
                      (*(longlong **)&this->Use16bitTexCoord,&local_d8,param_1,iVar21,
                       (this->Vertices).ArrayNum * *(int *)&(this->Vertices).AllocatorInstance.Data)
  ;
  plVar10 = &(this->TexCoordBuffer)._padding_;
  if (plVar10 != plVar11) {
    pFVar3 = (FRHIResource *)*plVar10;
    *plVar10 = *plVar11;
    *plVar11 = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_d8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_d8);
  }
  plVar12 = (longlong *)
            (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x28))
                      (*(longlong **)&this->Use16bitTexCoord,&local_d0,param_1,4,
                       *(undefined4 *)&(this->Vertices).AllocatorInstance.Data);
  plVar11 = &(this->ColorBuffer)._padding_;
  if (plVar11 != plVar12) {
    pFVar3 = (FRHIResource *)*plVar11;
    *plVar11 = *plVar12;
    *plVar12 = 0;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar3);
    }
  }
  if (local_d0 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_d0);
  }
  local_b8 = FRHICommandListBase::LockBuffer
                       (param_1,(FRHIBuffer *)*plVar10,0,
                        iVar21 * *(int *)&(this->Vertices).AllocatorInstance.Data *
                        (this->Vertices).ArrayNum,RLM_WriteOnly);
  local_c0 = (void *)0x0;
  if ((char)this->NumTexCoords != '\0') {
    local_c0 = local_b8;
    local_b8 = (void *)0x0;
  }
  puVar13 = FRHICommandListBase::LockBuffer
                      (param_1,(FRHIBuffer *)*plVar1,0,
                       *(int *)&(this->Vertices).AllocatorInstance.Data * 0xc,RLM_WriteOnly);
  local_c8 = FRHICommandListBase::LockBuffer
                       (param_1,(FRHIBuffer *)*plVar9,0,
                        *(int *)&(this->Vertices).AllocatorInstance.Data << 3,RLM_WriteOnly);
  puVar14 = FRHICommandListBase::LockBuffer
                      (param_1,(FRHIBuffer *)*plVar11,0,
                       *(int *)&(this->Vertices).AllocatorInstance.Data << 2,RLM_WriteOnly);
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_FPooledDynamicMeshVertexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
                ::__l6::__CpuProfilerEventSpecId451,"CopyDataToVertexBuffers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DynamicMeshBuilder.cpp"
               ,0x1c3);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_FPooledDynamicMeshVertexBuffer::InitRHI(FRHICommandListBase&___ptr64)___ptr64'
               ::__l6::__CpuProfilerEventSpecId451);
  }
  iVar21 = *(int *)&(this->Vertices).AllocatorInstance.Data;
  uVar20 = 0;
  if (0 < iVar21) {
    local_110 = 0;
    local_f8 = 0;
    local_100 = 0;
    do {
      uVar18 = ~uVar20 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar20 < iVar21) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->PositionBufferSRV).Reference;
      *puVar13 = *(undefined8 *)(&pFVar4->field_0x0 + local_f8);
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&pFVar4->field_0x8 + local_f8);
      uVar8 = 0;
      if ((int)uVar20 < *(int *)&(this->Vertices).AllocatorInstance.Data) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pvVar6 = local_c8;
      *(undefined4 *)(local_100 + (longlong)local_c8) =
           *(undefined4 *)(&(this->PositionBufferSRV).Reference[1].field_0x1c + local_f8);
      uVar8 = 0;
      if ((int)uVar20 < *(int *)&(this->Vertices).AllocatorInstance.Data) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(local_100 + 4 + (longlong)pvVar6) =
           *(undefined4 *)(&(this->PositionBufferSRV).Reference[1].field_0x20 + local_f8);
      uVar8 = 0;
      if ((int)uVar20 < *(int *)&(this->Vertices).AllocatorInstance.Data) {
        uVar8 = uVar18;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar15 = 0;
      *puVar14 = *(undefined4 *)(&(this->PositionBufferSRV).Reference[1].field_0x24 + local_f8);
      if ((this->Vertices).ArrayNum != 0) {
        do {
          iVar21 = *(int *)&(this->Vertices).AllocatorInstance.Data;
          iVar22 = (int)uVar15;
          if ((char)this->NumTexCoords == '\0') {
            uVar8 = 0;
            if ((int)uVar20 < iVar21) {
              uVar8 = uVar18;
            }
            if ((uVar8 == 0) &&
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
            *(undefined8 *)
             ((longlong)local_b8 + (ulonglong)(uVar20 * (this->Vertices).ArrayNum + iVar22) * 8) =
                 *(undefined8 *)
                  (&((this->PositionBufferSRV).Reference)->field_0xc + (uVar15 + local_110) * 8);
          }
          else {
            uVar8 = 0;
            if ((int)uVar20 < iVar21) {
              uVar8 = uVar18;
            }
            if ((uVar8 == 0) &&
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
            pFVar4 = (this->PositionBufferSRV).Reference;
            local_res20 = local_res20 & 0xffff0000;
            lVar19 = (longlong)(int)uVar20 * 0xb + uVar15;
            FGenericPlatformMath::StoreHalf
                      ((ushort *)&local_res20,*(float *)((longlong)pFVar4 + lVar19 * 8 + 0xc));
            local_res20 = local_res20 & 0xffff;
            FGenericPlatformMath::StoreHalf
                      ((ushort *)((longlong)&local_res20 + 2),
                       *(float *)((longlong)pFVar4 + lVar19 * 8 + 0x10));
            *(uint *)((longlong)local_c0 +
                     (ulonglong)(uVar20 * (this->Vertices).ArrayNum + iVar22) * 4) = local_res20;
          }
          uVar15 = (ulonglong)(iVar22 + 1U);
        } while (iVar22 + 1U < (uint)(this->Vertices).ArrayNum);
      }
      local_100 = local_100 + 8;
      local_110 = local_110 + 0xb;
      puVar13 = (undefined8 *)((longlong)puVar13 + 0xc);
      iVar21 = *(int *)&(this->Vertices).AllocatorInstance.Data;
      local_f8 = local_f8 + 0x58;
      puVar14 = puVar14 + 1;
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < iVar21);
  }
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->PositionBuffer)._padding_);
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->TangentBuffer)._padding_);
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->TexCoordBuffer)._padding_);
  FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)(this->ColorBuffer)._padding_);
  uVar15 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid(Platform)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                          ,0x2ce,L""), bVar25)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsManualVertexFetch != 0) {
    lStack_88 = 0;
    local_90 = 0x13d00;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_b0,
                        (FInitializer *)(this->TangentBuffer)._padding_);
    pTVar2 = &(this->ColorBuffer).VertexBufferRHI;
    if ((FRHIShaderResourceView *)pTVar2 != TVar16.Reference) {
      this_00 = pTVar2->Reference;
      pTVar2->Reference = *(FRHIBuffer **)TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (this_00 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if ((FRHIResource *)local_b0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b0._0_8_);
    }
    lStack_78 = 0;
    local_80._0_2_ = (ushort)bVar17 << 8;
    local_80 = (ulonglong)CONCAT12(1,(short)local_80);
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_b0 + 8),
                        (FInitializer *)(this->TexCoordBuffer)._padding_);
    pTVar23 = &this->TangentBufferSRV;
    if ((FRHIShaderResourceView *)pTVar23 != TVar16.Reference) {
      pFVar4 = pTVar23->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar23->Reference = *TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_b0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_b0._8_8_);
    }
    lStack_68 = 0;
    local_70 = 0x12500;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)local_a0,(FInitializer *)(this->ColorBuffer)._padding_
                       );
    pTVar23 = &this->TexCoordBufferSRV;
    if ((FRHIShaderResourceView *)pTVar23 != TVar16.Reference) {
      pFVar4 = pTVar23->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar23->Reference = *TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_a0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0._0_8_);
    }
    lStack_58 = 0;
    local_60 = 0x10d00;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)(local_a0 + 8),
                        (FInitializer *)(this->PositionBuffer)._padding_);
    pTVar23 = &this->ColorBufferSRV;
    if ((FRHIShaderResourceView *)pTVar23 != TVar16.Reference) {
      pFVar4 = pTVar23->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar23->Reference = *TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    if ((FRHIResource *)local_a0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a0._8_8_);
    }
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitResource @ 147b76db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPooledDynamicMeshVertexBuffer::InitResource
          (FPooledDynamicMeshVertexBuffer *this,FRHICommandListBase *param_1)

{
  TRefCountPtr<FRHIBuffer> *pTVar1;
  
  FRenderResource::InitResource((FRenderResource *)this,param_1);
  (**(code **)(this->_padding_ + 0x18))(&this->_padding_,param_1);
  (*(code *)((this->PositionBuffer).VertexBufferRHI.Reference)->_padding_)
            (&(this->PositionBuffer).VertexBufferRHI,param_1);
  (*(code *)((this->TangentBuffer).VertexBufferRHI.Reference)->_padding_)
            (&(this->TangentBuffer).VertexBufferRHI,param_1);
  pTVar1 = &(this->TexCoordBuffer).VertexBufferRHI;
                    /* WARNING: Could not recover jumptable at 0x000147b76e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)pTVar1->Reference->_padding_)(pTVar1,param_1);
  return;
}

// ReleasePrimitiveResource @ 147b83620

void __thiscall
FPooledDynamicMeshVertexBuffer::ReleasePrimitiveResource(FPooledDynamicMeshVertexBuffer *this)

{
  longlong *plVar1;
  
  plVar1 = &this->_padding_;
  (**(code **)(this->_padding_ + 0x20))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000147b83644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar1)(plVar1,1);
  return;
}

// ReleaseRHI @ 147b83720

void __thiscall FPooledDynamicMeshVertexBuffer::ReleaseRHI(FPooledDynamicMeshVertexBuffer *this)

{
  (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x30))
            (*(longlong **)&this->Use16bitTexCoord,&(this->PositionBuffer)._padding_);
  (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x30))
            (*(longlong **)&this->Use16bitTexCoord,&(this->TangentBuffer)._padding_);
  (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x30))
            (*(longlong **)&this->Use16bitTexCoord,&(this->TexCoordBuffer)._padding_);
                    /* WARNING: Could not recover jumptable at 0x000147b83775. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->Use16bitTexCoord + 0x30))
            (*(longlong **)&this->Use16bitTexCoord,&(this->ColorBuffer)._padding_);
  return;
}

// ReleaseResource @ 147b83780

void __thiscall
FPooledDynamicMeshVertexBuffer::ReleaseResource(FPooledDynamicMeshVertexBuffer *this)

{
  FRenderResource::ReleaseResource((FRenderResource *)this);
  (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
  (*(code *)((this->PositionBuffer).VertexBufferRHI.Reference)->_padding_)
            (&(this->PositionBuffer).VertexBufferRHI);
  (*(code *)((this->TangentBuffer).VertexBufferRHI.Reference)->_padding_)
            (&(this->TangentBuffer).VertexBufferRHI);
                    /* WARNING: Could not recover jumptable at 0x000147b837be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((this->TexCoordBuffer).VertexBufferRHI.Reference)->_padding_)();
  return;
}

