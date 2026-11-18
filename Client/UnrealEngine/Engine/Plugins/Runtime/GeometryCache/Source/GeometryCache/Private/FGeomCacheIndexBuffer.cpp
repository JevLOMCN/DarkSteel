// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 4

// InitRHI @ 14ca21830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeomCacheIndexBuffer::InitRHI(FGeomCacheIndexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRHIResource *local_res8;
  
  TVar2 = CreateGeomCacheIndexBuffer((FRHICommandListBase *)&local_res8,(int)param_1);
  plVar1 = &this->_padding_;
  if ((FRHIBuffer *)plVar1 != TVar2.Reference) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = (TVar2.Reference)->_padding_;
    (TVar2.Reference)->_padding_ = 0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  this->NumValidIndices = 0;
  if (((FInitializer *)*plVar1 != (FInitializer *)0x0) && (this->NumAllocatedIndices != 0)) {
    TVar3 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
    pTVar4 = &this->BufferSRV;
    if ((FRHIShaderResourceView *)pTVar4 != TVar3.Reference) {
      this_01 = pTVar4->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar4->Reference = *TVar3.Reference;
      *(undefined8 *)TVar3.Reference = 0;
      if (this_01 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  return;
}

// ReleaseRHI @ 14ca29270

void __thiscall FGeomCacheIndexBuffer::ReleaseRHI(FGeomCacheIndexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->BufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FIndexBuffer::ReleaseRHI((FIndexBuffer *)this);
  return;
}

// Update @ 14ca2cb90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeomCacheIndexBuffer::Update
          (FGeomCacheIndexBuffer *this,FRHICommandListBase *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  FRHIResource *pFVar3;
  FRHIShaderResourceView *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int *piVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_IndexBufferUpdate> FVar12;
  TRefCountPtr<FRHIBuffer> TVar13;
  void *_Dst;
  TRefCountPtr<FRHIShaderResourceView> TVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  FName FVar18;
  TRefCountPtr<FRHIShaderResourceView> *pTVar19;
  FRHIResource *local_res18;
  FColor_u_0 local_res20 [2];
  FName local_88;
  int *local_80;
  undefined1 local_78 [32];
  FName local_58;
  
  FVar12 = StatPtr_STAT_IndexBufferUpdate;
  local_res18 = (FRHIResource *)param_2;
  if (StatPtr_STAT_IndexBufferUpdate == (FThreadSafeStaticStat<FStat_STAT_IndexBufferUpdate>)0x0) {
    pFVar11 = ::FName::FName((FName *)(local_78 + 0x18),"STAT_IndexBufferUpdate");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_IndexBufferUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IndexBufferUpdate,*pFVar11,
                        L"Index Buffer Update","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar5 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_88.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_88,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                   ,0x643);
        bVar5 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar6 = true;
      goto LAB_14ca2ccf4;
    }
  }
  bVar6 = false;
  FVar18 = local_58;
LAB_14ca2ccf4:
  local_78._8_8_ = &param_2->ArrayNum;
  this->NumValidIndices = 0;
  bVar7 = false;
  if (this->NumAllocatedIndices < *(int *)local_78._8_8_) {
    this->NumAllocatedIndices = *(int *)local_78._8_8_;
    TVar13 = CreateGeomCacheIndexBuffer((FRHICommandListBase *)local_78,(int)param_1);
    plVar1 = &this->_padding_;
    if ((FRHIBuffer *)plVar1 != TVar13.Reference) {
      pFVar3 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar13.Reference)->_padding_;
      (TVar13.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    if ((FRHIResource *)local_78._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_78._0_8_);
    }
    bVar7 = true;
  }
  local_80 = &param_2->ArrayNum;
  if ((0 < *(int *)local_78._8_8_) &&
     (_Dst = FRHICommandListBase::LockBuffer
                       (param_1,(FRHIBuffer *)this->_padding_,0,this->NumAllocatedIndices << 2,
                        RLM_WriteOnly), piVar9 = local_80, pFVar3 = local_res18, _Dst != (void *)0x0
     )) {
    memcpy(_Dst,((ForAnyElementType *)&local_res18->_padding_)->Data,(longlong)*local_80 << 2);
    this->NumValidIndices = *piVar9;
    if ((*piVar9 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar16 = (ulonglong)this->NumValidIndices;
    uVar2 = *(undefined4 *)((ForAnyElementType *)&pFVar3->_padding_)->Data;
    if (this->NumValidIndices < this->NumAllocatedIndices) {
      puVar17 = (undefined4 *)(uVar16 * 4 + (longlong)_Dst);
      do {
        *puVar17 = uVar2;
        puVar17 = puVar17 + 1;
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while ((int)uVar15 < this->NumAllocatedIndices);
    }
    FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)this->_padding_);
  }
  if (((bVar7) && ((FInitializer *)this->_padding_ != (FInitializer *)0x0)) &&
     (this->NumAllocatedIndices != 0)) {
    local_78._16_8_ = (FTaggedMemory *)0x0;
    local_78._8_8_ = (int *)0x11c00;
    TVar14 = FRHICommandListBase::CreateShaderResourceView
                       (param_1,(FRHIBuffer *)&local_res18,(FInitializer *)this->_padding_);
    pTVar19 = &this->BufferSRV;
    if ((FRHIShaderResourceView *)pTVar19 != TVar14.Reference) {
      this_00 = pTVar19->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar19->Reference = *TVar14.Reference;
      *(undefined8 *)TVar14.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// UpdateSizeOnly @ 14ca2f140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGeomCacheIndexBuffer::UpdateSizeOnly
          (FGeomCacheIndexBuffer *this,FRHICommandListBase *param_1,int param_2)

{
  longlong *plVar1;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  TRefCountPtr<FRHIBuffer> TVar2;
  TRefCountPtr<FRHIShaderResourceView> TVar3;
  TRefCountPtr<FRHIShaderResourceView> *pTVar4;
  FRHIResource *local_res8;
  
  if (this->NumAllocatedIndices < param_2) {
    TVar2 = CreateGeomCacheIndexBuffer((FRHICommandListBase *)&local_res8,(int)param_1);
    plVar1 = &this->_padding_;
    if ((FRHIBuffer *)plVar1 != TVar2.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar2.Reference)->_padding_;
      (TVar2.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    this->NumAllocatedIndices = param_2;
    this->NumValidIndices = 0;
    if (((FInitializer *)*plVar1 != (FInitializer *)0x0) && (param_2 != 0)) {
      TVar3 = FRHICommandListBase::CreateShaderResourceView
                        (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
      pTVar4 = &this->BufferSRV;
      if ((FRHIShaderResourceView *)pTVar4 != TVar3.Reference) {
        this_01 = pTVar4->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar4->Reference = *TVar3.Reference;
        *(undefined8 *)TVar3.Reference = 0;
        if (this_01 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
        }
      }
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_res8);
      }
    }
  }
  return;
}

