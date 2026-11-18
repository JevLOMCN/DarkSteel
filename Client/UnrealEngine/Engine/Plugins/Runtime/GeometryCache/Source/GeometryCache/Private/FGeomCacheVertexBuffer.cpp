// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 7

// FGeomCacheVertexBuffer @ 14ca05800

FGeomCacheVertexBuffer * __thiscall
FGeomCacheVertexBuffer::FGeomCacheVertexBuffer(FGeomCacheVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->_padding_ = (longlong)&___7FGeomCacheVertexBuffer__6B_;
  (this->BufferSRV).Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~FGeomCacheVertexBuffer @ 14ca08b00

void __thiscall FGeomCacheVertexBuffer::~FGeomCacheVertexBuffer(FGeomCacheVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// GetFriendlyName @ 14ca1c390

FString * __thiscall
FGeomCacheVertexBuffer::GetFriendlyName
          (FGeomCacheVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FGeomCacheVertexBuffer");
  return __return_storage_ptr__;
}

// InitRHI @ 14ca21a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeomCacheVertexBuffer::InitRHI(FGeomCacheVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  bool bVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_a8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_a8._padding_._0_4_ = this->SizeInBytes;
  local_a8.OwnerName.Number = 0;
  uStack_70 = 0;
  local_a8._padding_._4_4_ = 0;
  local_a8.DebugName._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8.DebugName._0_4_ = 0x4101;
  local_58 = (ulonglong)(uint)local_a8._padding_;
  uStack_50 = CONCAT44(local_a8.DebugName._4_4_,0x4101);
  local_a8.InitialState = None;
  local_a8.InitAction = Default;
  local_a8.InitialData = (FResourceArrayUploadInterface *)0x1528e15d8;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.ClassName.ComparisonIndex.Value = 0x78;
  local_38 = 0x78;
  uStack_30 = 0;
  uStack_6c = 0;
  local_48 = L"FGeomCacheVertexBuffer";
  uStack_40 = 0;
  local_28 = 0;
  FRHICommandListBase::CreateBuffer(param_1,&local_a8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != &local_a8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_a8._padding_;
    local_a8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_14ca21b2d;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
LAB_14ca21b2d:
  if (*plVar1 != 0) {
    bVar3 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if (bVar3) {
      uStack_60 = 0;
      local_68 = 0x10d00;
      TVar4 = FRHICommandListBase::CreateShaderResourceView
                        (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
      pTVar2 = &this->BufferSRV;
      if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
        this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar2->Reference = *TVar4.Reference;
        *(undefined8 *)TVar4.Reference = 0;
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

// ReleaseRHI @ 14ca292b0

void __thiscall FGeomCacheVertexBuffer::ReleaseRHI(FGeomCacheVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->BufferSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->BufferSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// UpdateRaw @ 14ca2e1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeomCacheVertexBuffer::UpdateRaw
          (FGeomCacheVertexBuffer *this,FRHICommandListBase *param_1,void *param_2,int param_3,
          int param_4,int param_5)

{
  TRefCountPtr<FRHIShaderResourceView> *pTVar1;
  FRHIShaderResourceView *pFVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FRHICommandListBase *pFVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VertexBufferUpdate> FVar10;
  void *_Dst;
  TRefCountPtr<FRHIShaderResourceView> TVar11;
  FName FVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  FGeomCacheVertexBuffer *local_res8;
  FRHICommandListBase *local_res10;
  byte local_f7;
  undefined1 local_f0 [8];
  FColor local_e8 [2];
  FName local_e0;
  FResourceArrayUploadInterface *pFStack_d8;
  FName local_d0;
  FName local_c8;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  FName local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FVar10 = StatPtr_STAT_VertexBufferUpdate;
  local_res8 = this;
  local_res10 = param_1;
  if (StatPtr_STAT_VertexBufferUpdate == (FThreadSafeStaticStat<FStat_STAT_VertexBufferUpdate>)0x0)
  {
    pFVar9 = ::FName::FName(&local_80,"STAT_VertexBufferUpdate");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VertexBufferUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VertexBufferUpdate,*pFVar9,
                        L"Vertex Buffer Update","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar12.ComparisonIndex.Value.Value == 0) && (FVar12.Number == Default)) {
LAB_14ca2e2f0:
    bVar5 = false;
    FVar12 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_e8[0].field0_0x0.Bits = (FColor_u_0)0x0;
      FGenericPlatformMisc::BeginNamedEvent(local_e8,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar12.ComparisonIndex.Value.Value;
        local_d0.Number = FVar12.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                   ,0x6c6);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca2e2f0;
    local_e0 = FVar12;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar5 = true;
  }
  pFVar7 = local_res10;
  pFVar2 = (this->BufferSRV).Reference;
  uVar14 = param_3 * param_4;
  if (pFVar2 == (FRHIShaderResourceView *)0x0) {
    local_f7 = 0xd;
  }
  else {
    local_f7 = pFVar2->field_0x21;
  }
  bVar8 = false;
  if ((int)uVar14 <= this->SizeInBytes) goto LAB_14ca2e3ea;
  this->SizeInBytes = uVar14;
  uStack_8c = 0;
  uStack_88 = 0;
  iStack_ac = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_b4 = 0;
  uStack_a0 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_84 = 0;
  local_a8 = L"FGeomCacheVertexBuffer";
  uStack_b0 = 0x4101;
  local_78 = (ulonglong)uVar14;
  uStack_70 = CONCAT44(iStack_ac,0x4101);
  local_98 = 0x78;
  local_68 = L"FGeomCacheVertexBuffer";
  uStack_60 = 0;
  local_48 = 0;
  local_58 = 0x78;
  uStack_50 = 0;
  local_b8 = uVar14;
  FRHICommandListBase::CreateBuffer(local_res10,(FRHIBufferCreateDesc *)local_f0);
  plVar13 = &this->_padding_;
  if (plVar13 == (longlong *)local_f0) {
LAB_14ca2e3d0:
    if (local_f0 != (undefined1  [8])0x0) {
      FRHIResource::Release((FRHIResource *)local_f0);
    }
  }
  else {
    this_00 = (FRHIResource *)*plVar13;
    *plVar13 = (longlong)local_f0;
    local_f0 = (undefined1  [8])0x0;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      goto LAB_14ca2e3d0;
    }
  }
  bVar8 = true;
LAB_14ca2e3ea:
  plVar13 = &this->_padding_;
  _Dst = FRHICommandListBase::LockBuffer
                   (pFVar7,(FRHIBuffer *)*plVar13,0,this->SizeInBytes,RLM_WriteOnly);
  if (param_4 == param_5) {
    memcpy(_Dst,param_2,(longlong)(int)uVar14);
  }
  else if (0 < param_3) {
    uVar15 = (ulonglong)(uint)param_3;
    do {
      memcpy(_Dst,param_2,(longlong)param_4);
      param_2 = (void *)((longlong)param_2 + (longlong)param_5);
      _Dst = (void *)((longlong)_Dst + (longlong)param_4);
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    plVar13 = &local_res8->_padding_;
    this = local_res8;
  }
  pFVar7 = local_res10;
  FRHICommandListBase::UnlockBuffer(local_res10,(FRHIBuffer *)*plVar13);
  if ((bVar8) && (*plVar13 != 0)) {
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bSupportsManualVertexFetch != 0) {
      pFStack_d8 = (FResourceArrayUploadInterface *)0x0;
      local_e0.ComparisonIndex.Value._0_2_ = (ushort)local_f7 << 8;
      local_e0.ComparisonIndex.Value._2_1_ = 1;
      local_e0._3_5_ = 0;
      TVar11 = FRHICommandListBase::CreateShaderResourceView
                         (pFVar7,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar13);
      pTVar1 = &this->BufferSRV;
      if ((FRHIShaderResourceView *)pTVar1 != TVar11.Reference) {
        pFVar2 = pTVar1->Reference;
                    /* WARNING: Load size is inaccurate */
        pTVar1->Reference = *TVar11.Reference;
        *(undefined8 *)TVar11.Reference = 0;
        if (pFVar2 != (FRHIShaderResourceView *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar2);
        }
      }
      if (local_res8 != (FGeomCacheVertexBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_res8);
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return;
}

// UpdateSize @ 14ca2efe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGeomCacheVertexBuffer::UpdateSize
          (FGeomCacheVertexBuffer *this,FRHICommandListBase *param_1,int param_2)

{
  longlong *plVar1;
  TRefCountPtr<FRHIShaderResourceView> *pTVar2;
  FRHIResource *this_00;
  FRHIShaderResourceView *this_01;
  bool bVar3;
  TRefCountPtr<FRHIShaderResourceView> TVar4;
  FRHIResource *local_res8;
  FRHIBufferCreateDesc local_a8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_2 <= this->SizeInBytes) {
    return;
  }
  this->SizeInBytes = param_2;
  local_a8.DebugName._4_4_ = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_a8.OwnerName.Number = 0;
  uStack_70 = 0;
  local_a8.InitialData = (FResourceArrayUploadInterface *)0x1528e15d8;
  local_a8._padding_._4_4_ = 0;
  local_a8.DebugName._0_4_ = 0x4101;
  local_58 = (ulonglong)(uint)param_2;
  uStack_50 = CONCAT44(local_a8.DebugName._4_4_,0x4101);
  local_a8.InitialState = None;
  local_a8.InitAction = Default;
  local_a8.ClassName.Number = 0;
  local_a8.OwnerName.ComparisonIndex.Value = 0;
  local_a8.ClassName.ComparisonIndex.Value = 0x78;
  local_38 = 0x78;
  uStack_30 = 0;
  uStack_6c = 0;
  local_48 = L"FGeomCacheVertexBuffer";
  uStack_40 = 0;
  local_28 = 0;
  local_a8._padding_._0_4_ = param_2;
  FRHICommandListBase::CreateBuffer(param_1,&local_a8);
  plVar1 = &this->_padding_;
  if ((FRHIBufferCreateDesc *)plVar1 != &local_a8) {
    this_00 = (FRHIResource *)*plVar1;
    *plVar1 = local_a8._padding_;
    local_a8._padding_ = 0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_14ca2f0b8;
    FRHIResource::Release(this_00);
  }
  if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_a8._padding_);
  }
LAB_14ca2f0b8:
  if ((*plVar1 != 0) &&
     (bVar3 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform), bVar3)) {
    uStack_60 = 0;
    local_68 = 0x10d00;
    TVar4 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&local_res8,(FInitializer *)*plVar1);
    pTVar2 = &this->BufferSRV;
    if ((FRHIShaderResourceView *)pTVar2 != TVar4.Reference) {
      this_01 = pTVar2->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Reference = *TVar4.Reference;
      *(undefined8 *)TVar4.Reference = 0;
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

