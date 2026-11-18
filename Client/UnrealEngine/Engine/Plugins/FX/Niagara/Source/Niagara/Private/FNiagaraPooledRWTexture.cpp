// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// CopyToTexture @ 149399a40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraPooledRWTexture::CopyToTexture
          (FNiagaraPooledRWTexture *this,FRDGBuilder *param_1,FRHITexture *param_2,wchar_t *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  FRDGTexture *pFVar4;
  FRDGTexture *pFVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  longlong *local_res8;
  TIntVector3<int>_u_0 local_58;
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined8 local_34;
  uint local_2c;
  undefined8 local_28;
  uint local_20;
  
  lVar2 = (**(code **)(((this->Texture).Reference)->_padding_ + 0x10))();
  lVar3 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((*(char *)(lVar3 + 0x32) != '\x02') || (*(char *)(lVar3 + 0x33) != *(char *)(lVar2 + 0x28))
        ) || (*(int *)(lVar3 + 0x24) != *(int *)(lVar2 + 0x2c))) ||
      ((*(int *)(lVar3 + 0x28) != *(int *)(lVar2 + 0x30) ||
       (*(short *)(lVar3 + 0x2c) != *(short *)(lVar2 + 0x34))))) &&
     (bVar1 = `FNiagaraPooledRWTexture::CopyToTexture'::__l3::<lambda_1>::operator()(&local_res8),
     !bVar1)) {
    return;
  }
  pFVar4 = GetOrCreateTexture(this,param_1);
  pFVar5 = FRDGBuilder::FindExternalTexture(param_1,param_2);
  if (pFVar5 == (FRDGTexture *)0x0) {
    TVar6 = CreateRenderTarget((FRHITexture *)&local_res8,(wchar_t *)param_2);
    pFVar5 = FRDGBuilder::RegisterExternalTexture
                       (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar6.Reference,None);
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x38))();
    }
  }
  local_58._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_44 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_38 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  local_34 = 0;
  local_28 = 0;
  local_58._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_4c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_40 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  local_20 = (uint)(byte)(pFVar4->Desc).field_0x30;
  local_2c = (uint)*(ushort *)&(pFVar4->Desc).field_0x2e;
  AddCopyTexturePass(param_1,pFVar4,pFVar5,(FRHICopyTextureInfo *)&local_58._s_0);
  return;
}

// EndGraphUsage @ 14939fa90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FNiagaraPooledRWTexture::EndGraphUsage(FNiagaraPooledRWTexture *this)

{
  this->TransientRDGTexture = (FRDGTexture *)0x0;
  this->TransientRDGSRV = (FRDGTextureSRV *)0x0;
  this->TransientRDGUAV = (FRDGTextureUAV *)0x0;
  return;
}

// GetOrCreateSRV @ 1493a6a30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTextureSRV * __thiscall
FNiagaraPooledRWTexture::GetOrCreateSRV(FNiagaraPooledRWTexture *this,FRDGBuilder *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  IPooledRenderTarget *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FRDGTextureSRV *pFVar8;
  FRDGTexture *pFVar9;
  FRDGTextureSRVDesc local_38;
  
  if ((this->Texture).Reference == (IPooledRenderTarget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x81,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRDGTextureSRV *)(*pcVar5)();
      return pFVar8;
    }
  }
  if (this->TransientRDGSRV == (FRDGTextureSRV *)0x0) {
    local_38.Texture = GetOrCreateTexture(this,param_1);
    local_38._padding_._0_2_ = 0;
    local_38._padding_._3_1_ = 0;
    local_38._padding_._6_2_ = 0;
    local_38._padding_._0_1_ = 0;
    local_38._padding_._2_1_ = '\0';
    local_38._padding_._2_1_ = ((local_38.Texture)->Desc).field_0x30;
    cVar2 = ((local_38.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_38._padding_._6_2_ = *(undefined2 *)&((local_38.Texture)->Desc).field_0x2e;
    }
    local_38._padding_._4_2_ = 0;
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,&local_38);
    pFVar9 = local_38.Texture;
    pFVar8 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
    lVar3 = pFVar9->_padding_;
    *(byte *)&pFVar8->_padding_ = (byte)pFVar8->_padding_ & 0xfe;
    pFVar8->_padding_ = 0;
    pFVar8->_padding_ = lVar3;
    *(undefined1 *)&pFVar8->_padding_ = 1;
    *(undefined8 *)((longlong)&pFVar8->_padding_ + 4) = 0xffffffffffffffff;
    pFVar8->_padding_ = (longlong)&___7FRDGTextureSRV__6B_;
    *(undefined1 *)&(pFVar8->Desc)._padding_ = (undefined1)local_38._padding_;
    *(undefined1 *)((longlong)&(pFVar8->Desc)._padding_ + 1) = local_38._padding_._1_1_;
    *(undefined1 *)((longlong)&(pFVar8->Desc)._padding_ + 2) = local_38._padding_._2_1_;
    *(undefined1 *)((longlong)&(pFVar8->Desc)._padding_ + 3) = local_38._padding_._3_1_;
    *(undefined2 *)((longlong)&(pFVar8->Desc)._padding_ + 4) = local_38._padding_._4_2_;
    *(undefined2 *)((longlong)&(pFVar8->Desc)._padding_ + 6) = local_38._padding_._6_2_;
    *(undefined1 *)((longlong)&(pFVar8->Desc)._padding_ + 2) = 0;
    *(undefined1 *)&(pFVar8->Desc)._padding_ = (undefined1)local_38._padding_;
    *(char *)((longlong)&(pFVar8->Desc)._padding_ + 2) = local_38._padding_._2_1_;
    if (local_38._padding_._2_1_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar8->Desc)._padding_ + 1) = local_38._padding_._1_1_;
    }
    piVar1 = &(param_1->Views).Array.ArrayMax;
    (pFVar8->Desc).Texture = local_38.Texture;
    iVar7 = (param_1->Views).Array.ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar7 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar7] = (FRDGView *)pFVar8;
    *(int *)((longlong)&pFVar8->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateSRV(&param_1->UserValidation,pFVar8);
    this->TransientRDGSRV = pFVar8;
    return pFVar8;
  }
  pIVar4 = (this->Texture).Reference;
  if (pIVar4 != (IPooledRenderTarget *)0x0) {
    pFVar9 = FRDGBuilder::FindExternalTexture
                       (param_1,(pIVar4->RenderTargetItem).TargetableTexture.Reference);
    if (pFVar9 != (FRDGTexture *)0x0) goto LAB_1493a6c36;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("GraphBuilder.FindExternalTexture(Texture) != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                     ,0x88,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FRDGTextureSRV *)(*pcVar5)();
    return pFVar8;
  }
LAB_1493a6c36:
  return this->TransientRDGSRV;
}

// GetOrCreateTexture @ 1493a6c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTexture * __thiscall
FNiagaraPooledRWTexture::GetOrCreateTexture(FNiagaraPooledRWTexture *this,FRDGBuilder *param_1)

{
  IPooledRenderTarget *pIVar1;
  code *pcVar2;
  bool bVar3;
  FRDGTexture *pFVar4;
  
  if (this->TransientRDGTexture == (FRDGTexture *)0x0) {
    pFVar4 = FRDGBuilder::RegisterExternalTexture(param_1,&this->Texture,None);
    this->TransientRDGTexture = pFVar4;
    return pFVar4;
  }
  pIVar1 = (this->Texture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar4 = FRDGBuilder::FindExternalTexture
                       (param_1,(pIVar1->RenderTargetItem).TargetableTexture.Reference);
    if (pFVar4 != (FRDGTexture *)0x0) goto LAB_1493a6cba;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("GraphBuilder.FindExternalTexture(Texture) != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                     ,0x7a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRDGTexture *)(*pcVar2)();
    return pFVar4;
  }
LAB_1493a6cba:
  return this->TransientRDGTexture;
}

// GetOrCreateUAV @ 1493a6e60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGTextureUAV * __thiscall
FNiagaraPooledRWTexture::GetOrCreateUAV(FNiagaraPooledRWTexture *this,FRDGBuilder *param_1)

{
  int *piVar1;
  longlong lVar2;
  IPooledRenderTarget *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRDGTextureUAV *pFVar7;
  FRDGTexture *pFVar8;
  FRDGTextureUAVDesc local_38;
  
  if ((this->Texture).Reference == (IPooledRenderTarget *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                       ,0x8f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRDGTextureUAV *)(*pcVar4)();
      return pFVar7;
    }
  }
  if (this->TransientRDGUAV == (FRDGTextureUAV *)0x0) {
    local_38.Texture = GetOrCreateTexture(this,param_1);
    local_38._padding_._1_1_ = 0;
    local_38._padding_._2_4_ = 0;
    local_38._padding_._6_1_ = 0;
    local_38._padding_._0_1_ = ((local_38.Texture)->Desc).field_0x34;
    local_38._padding_._0_1_ = '\0';
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_38);
    pFVar8 = local_38.Texture;
    pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,8);
    lVar2 = pFVar8->_padding_;
    *(byte *)&pFVar7->_padding_ = (byte)pFVar7->_padding_ & 0xfe;
    pFVar7->_padding_ = 0;
    *(undefined1 *)&pFVar7->_padding_ = 0;
    *(undefined1 *)&pFVar7->_padding_ = 0;
    pFVar7->_padding_ = lVar2;
    *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = 0xffffffffffffffff;
    pFVar7->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
    *(undefined1 *)&(pFVar7->Desc)._padding_ = (undefined1)local_38._padding_;
    *(undefined1 *)((longlong)&(pFVar7->Desc)._padding_ + 1) = local_38._padding_._1_1_;
    *(undefined2 *)((longlong)&(pFVar7->Desc)._padding_ + 2) = local_38._padding_._2_2_;
    *(undefined2 *)((longlong)&(pFVar7->Desc)._padding_ + 4) = local_38._padding_._4_2_;
    *(undefined1 *)&(pFVar7->Desc)._padding_ = 0;
    *(undefined1 *)((longlong)&(pFVar7->Desc)._padding_ + 6) = local_38._padding_._6_1_;
    *(char *)&(pFVar7->Desc)._padding_ = (char)local_38._padding_;
    if ((char)local_38._padding_ != '\0') {
      *(undefined1 *)((longlong)&(pFVar7->Desc)._padding_ + 7) = local_38._padding_._7_1_;
    }
    piVar1 = &(param_1->Views).Array.ArrayMax;
    (pFVar7->Desc).Texture = local_38.Texture;
    iVar6 = (param_1->Views).Array.ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                        (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
    }
    (param_1->Views).Array.ArrayNum = iVar6 + 1;
    (param_1->Views).Array.AllocatorInstance.Data[iVar6] = (FRDGView *)pFVar7;
    *(int *)((longlong)&pFVar7->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
    FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar7);
    this->TransientRDGUAV = pFVar7;
    return pFVar7;
  }
  pIVar3 = (this->Texture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pFVar8 = FRDGBuilder::FindExternalTexture
                       (param_1,(pIVar3->RenderTargetItem).TargetableTexture.Reference);
    if (pFVar8 != (FRDGTexture *)0x0) goto LAB_1493a7036;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("GraphBuilder.FindExternalTexture(Texture) != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderGraphUtils.cpp"
                     ,0x96,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRDGTextureUAV *)(*pcVar4)();
    return pFVar7;
  }
LAB_1493a7036:
  return this->TransientRDGUAV;
}

// InitializeInternal @ 1493a9780

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraPooledRWTexture::InitializeInternal
          (FNiagaraPooledRWTexture *this,FRDGBuilder *param_1,wchar_t *param_2,
          FRDGTextureDesc *param_3)

{
  FName FVar1;
  IPooledRenderTarget *pIVar2;
  IPooledRenderTarget *pIVar3;
  uint uVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FRDGTexture *pFVar9;
  TRefCountPtr<IPooledRenderTarget> *pTVar10;
  uchar auVar11 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar11 = (uchar  [8])this->NumBytes;
  if (auVar11 != (uchar  [8])0x0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  this->NumBytes = 0;
  pIVar2 = (this->Texture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->Texture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar9 = FRDGBuilder::CreateTexture(param_1,param_3,param_2,None);
  this->TransientRDGTexture = pFVar9;
  pTVar10 = FRDGBuilder::ConvertToExternalTexture(param_1,pFVar9);
  pIVar2 = (this->Texture).Reference;
  pIVar3 = pTVar10->Reference;
  if (pIVar2 != pIVar3) {
    (this->Texture).Reference = pIVar3;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x30))();
    }
    if (pIVar2 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar2->_padding_ + 0x38))(pIVar2);
    }
  }
  uVar4 = (**(code **)(GDynamicRHI->_padding_ + 0x1d0))
                    (GDynamicRHI,
                     (((this->Texture).Reference)->RenderTargetItem).TargetableTexture.Reference);
  auVar11[4] = '\0';
  auVar11[5] = '\0';
  auVar11[6] = '\0';
  auVar11[7] = '\0';
  auVar11[0] = (char)uVar4;
  auVar11[1] = (char)(uVar4 >> 8);
  auVar11[2] = (char)(uVar4 >> 0x10);
  auVar11[3] = (char)(uVar4 >> 0x18);
  this->NumBytes = (ulong64)auVar11;
  if (uVar4 != 0) {
    FVar6 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar5,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar6;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar7 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar11;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar7,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar11);
      if (pFVar7->ScopeCount == 0) {
        FThreadStats::Flush(pFVar7,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar7,false,false);
      }
    }
  }
  return;
}

// Release @ 1493b4940

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraPooledRWTexture::Release(FNiagaraPooledRWTexture *this)

{
  uchar auVar1 [8];
  FName FVar2;
  IPooledRenderTarget *pIVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  auVar1 = (uchar  [8])this->NumBytes;
  if (auVar1 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar4,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar5;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_28.StatData.Pad = auVar1;
      local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->NumBytes = 0;
  pIVar3 = (this->Texture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (this->Texture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  return;
}

// operator() @ 150541810

bool __thiscall `FNiagaraPooledRWTexture::CopyToTexture'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5625347456184090789>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5625347456184090789>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

