// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// D3D12TextureAllocated @ 145a611e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl FD3D12TextureStats::D3D12TextureAllocated(FD3D12Texture *param_1)

{
  longlong lVar1;
  FRHITextureDesc *pFVar2;
  bool bVar3;
  
  lVar1 = param_1->_padding_;
  if (((lVar1 != 0) &&
      (pFVar2 = (FRHITextureDesc *)(**(code **)(param_1->_padding_ + 0x20))(),
      (pFVar2->Flags & (Virtual|CPUReadback)) == None)) &&
     (*(char *)((longlong)&param_1->_padding_ + 2) == '\0')) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId151,"D3D12RHI::UpdateTextureStats",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                 ,0x97);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId151);
    }
    UpdateD3D12TextureStats
              (param_1,(FD3D12ResourceDesc *)(lVar1 + 0x50),pFVar2,param_1->_padding_,true,true);
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// D3D12TextureDeleted @ 145a612b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl FD3D12TextureStats::D3D12TextureDeleted(FD3D12Texture *param_1)

{
  char cVar1;
  longlong lVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  FRHITextureDesc *pFVar6;
  
  lVar2 = param_1->_padding_;
  if (lVar2 != 0) {
    pFVar6 = (FRHITextureDesc *)(**(code **)(param_1->_padding_ + 0x20))();
    if (((pFVar6->Flags >> 0x13 & 1) == 0) && (*(char *)((longlong)&param_1->_padding_ + 2) == '\0')
       ) {
      uVar3 = param_1->_padding_;
      if (((uVar3 == 0) &&
          ((((pFVar6->Flags >> 0x17 & 1) == 0 && (cVar1 = (char)param_1->_padding_, cVar1 != '\x05')
            ) && (cVar1 != '\a')))) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1941583375391260500>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                             ,0xac,
                             "TextureSize > 0 || EnumHasAnyFlags(TextureDesc.Flags, ETextureCreateFlags::Virtual) || Texture.ResourceLocation.IsAliased()"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UpdateD3D12TextureStats(param_1,(FD3D12ResourceDesc *)(lVar2 + 0x50),pFVar6,uVar3,false,false)
      ;
    }
  }
  return;
}

// UpdateD3D12TextureStats @ 145a80e40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FD3D12TextureStats::UpdateD3D12TextureStats
          (FD3D12Texture *param_1,FD3D12ResourceDesc *param_2,FRHITextureDesc *param_3,
          ulong64 param_4,bool param_5,bool param_6)

{
  char cVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal> FVar11;
  FLowLevelMemTracker *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12TexturesAllocated> FVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12TexturesReleased> FVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargets> *this;
  undefined1 *puVar15;
  wchar_t *pwVar16;
  uchar auVar17 [8];
  FName local_res20;
  FName local_c8;
  FMemScope local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  FName local_40;
  
  if (param_4 == 0) {
    return;
  }
  UE::RHICore::UpdateGlobalTextureStats
            (param_3->Flags,param_3->Dimension,param_4,GTexturePoolOnlyAccountStreamableTexture,
             param_6);
  auVar17 = (uchar  [8])param_4;
  if (!param_6) {
    auVar17 = (uchar  [8])-param_4;
  }
  if ((param_2->_padding_ & 3) == 0) {
    if ((param_2->_padding_ & 4) == 0) {
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures>)StatPtr_STAT_D3D12Textures;
      if (StatPtr_STAT_D3D12Textures == (FThreadSafeStaticStat<FStat_STAT_D3D12Textures>)0x0) {
        pFVar7 = ::FName::FName(&local_58,"STAT_D3D12Textures");
        pwVar16 = L"Textures";
        this = (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargets> *)&StatPtr_STAT_D3D12Textures;
        goto LAB_145a80f4e;
      }
    }
    else {
      FVar8 = StatPtr_STAT_D3D12UAVTextures;
      if (StatPtr_STAT_D3D12UAVTextures == (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures>)0x0)
      {
        pFVar7 = ::FName::FName(&local_60,"STAT_D3D12UAVTextures");
        pwVar16 = L"UAV Textures";
        this = (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargets> *)
               &StatPtr_STAT_D3D12UAVTextures;
LAB_145a80f4e:
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)this,*pFVar7,pwVar16,
                           "STATGROUP_D3D12Resources","STATCAT_Advanced",L"D3D12RHI: Resources",true
                           ,false,ST_int64,false,false,MCR_Physical);
      }
    }
  }
  else {
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12UAVTextures>)StatPtr_STAT_D3D12RenderTargets;
    if (StatPtr_STAT_D3D12RenderTargets == (FThreadSafeStaticStat<FStat_STAT_D3D12RenderTargets>)0x0
       ) {
      pFVar7 = ::FName::FName(&local_68,"STAT_D3D12RenderTargets");
      pwVar16 = L"Render Targets";
      this = &StatPtr_STAT_D3D12RenderTargets;
      goto LAB_145a80f4e;
    }
  }
  FVar2 = *(FName *)FVar8;
  local_res20 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_a8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_c8 = FVar2;
    local_a8.StatData.Pad = auVar17;
    local_a8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar9,&local_a8);
    FStatsTrace::Add(&local_c8,(long64)auVar17);
    if (pFVar9->ScopeCount == 0) {
      FThreadStats::Flush(pFVar9,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar9,false,false);
    }
  }
  FVar11 = StatPtr_STAT_D3D12MemoryCurrentTotal;
  if (StatPtr_STAT_D3D12MemoryCurrentTotal ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)0x0) {
    pFVar7 = ::FName::FName(&local_50,"STAT_D3D12MemoryCurrentTotal");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12MemoryCurrentTotal>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12MemoryCurrentTotal,*pFVar7,
                        L"TOTAL","STATGROUP_D3D12Resources","STATCAT_Advanced",
                        L"D3D12RHI: Resources",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar2 = *(FName *)FVar11;
  local_res20 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_98.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_res20 = FVar2;
    local_98.StatData.Pad = auVar17;
    local_98.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar9,&local_98);
    FStatsTrace::Add(&local_res20,(long64)auVar17);
    if (pFVar9->ScopeCount == 0) {
      FThreadStats::Flush(pFVar9,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar9,false,false);
    }
  }
  puVar15 = (undefined1 *)((longlong)&param_1->_padding_ + 1);
  if ((undefined1 *)param_1->_padding_ != (undefined1 *)0x0) {
    puVar15 = (undefined1 *)param_1->_padding_;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar3 = param_1->_padding_;
  if ((*(longlong *)(lVar3 + 0x10) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)(*(longlong *)(lVar3 + 0x10) + 0x6d8) == '\0') && (puVar15 == (undefined1 *)0x0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!param_6) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar12 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar12 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree
                (pFVar12,Platform,(void *)((longlong)&param_1->_padding_ + 1),None,true);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        pFVar12 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          pFVar12 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree
                  (pFVar12,Default,(void *)((longlong)&param_1->_padding_ + 1),None,true);
      }
    }
    if (puVar15 != (undefined1 *)0x0) {
      MemoryTrace_Free((ulong64)puVar15,1,0);
    }
    if (FThreadStats::bPrimaryEnable == false) {
      return;
    }
    FVar14 = StatPtr_STAT_D3D12TexturesReleased;
    if (StatPtr_STAT_D3D12TexturesReleased ==
        (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesReleased>)0x0) {
      pFVar7 = ::FName::FName(&local_40,"STAT_D3D12TexturesReleased");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesReleased>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TexturesReleased,*pFVar7,
                          L"Textures Released","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar14;
    if (FVar2 == (FName)0x0) {
      return;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return;
    }
    local_res20 = FVar2;
    pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar9 == (FThreadStats *)0x0) {
      pFVar10 = FThreadStatsPool::Get();
      pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
    }
    local_78.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_78.StatData.Pad[0] = '\x01';
    local_78.StatData.Pad[1] = '\0';
    local_78.StatData.Pad[2] = '\0';
    local_78.StatData.Pad[3] = '\0';
    local_78.StatData.Pad[4] = '\0';
    local_78.StatData.Pad[5] = '\0';
    local_78.StatData.Pad[6] = '\0';
    local_78.StatData.Pad[7] = '\0';
    local_b0 = FVar2;
    local_78.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar9,&local_78);
    pFVar7 = &local_b0;
    goto LAB_145a81592;
  }
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar12 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar12 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc
              (pFVar12,Platform,(void *)((longlong)&param_1->_padding_ + 1),param_4,GraphicsPlatform
               ,None,true);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      pFVar12 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        pFVar12 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelAlloc
                (pFVar12,Default,(void *)((longlong)&param_1->_padding_ + 1),param_4,Textures,None,
                 true);
    }
  }
  iVar6 = MemoryTrace_GetActiveTag();
  FMemScope::FMemScope(&local_c0,Textures,iVar6 == 0);
  if (bVar5) {
    cVar1 = (char)param_1->_padding_;
    if ((cVar1 == '\x01') || (*(char *)((longlong)&param_1->_padding_ + 1) != '\x02')) {
      bVar5 = false;
      if (cVar1 == '\x01') goto LAB_145a812f7;
    }
    else {
      bVar5 = *(int *)(param_1->_padding_ + 0xb8) == 0;
    }
    if (!bVar5) {
      MemoryTrace_Alloc((ulong64)puVar15,param_4,(uint)param_2->_padding_,1,0);
    }
  }
LAB_145a812f7:
  FMemScope::~FMemScope(&local_c0);
  if (FThreadStats::bPrimaryEnable == false) {
    return;
  }
  FVar13 = StatPtr_STAT_D3D12TexturesAllocated;
  if (StatPtr_STAT_D3D12TexturesAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesAllocated>)0x0) {
    pFVar7 = ::FName::FName(&local_48,"STAT_D3D12TexturesAllocated");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12TexturesAllocated>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12TexturesAllocated,*pFVar7,
                        L"Textures Allocated","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",
                        true,true,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar13;
  if (FVar2 == (FName)0x0) {
    return;
  }
  if (FThreadStats::bPrimaryDisableForever != false) {
    return;
  }
  if (FThreadStats::TlsSlot == 0xffffffff) {
    return;
  }
  local_res20 = FVar2;
  pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
  if (pFVar9 == (FThreadStats *)0x0) {
    pFVar10 = FThreadStatsPool::Get();
    pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
  }
  local_88.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
  local_88.StatData.Pad[0] = '\x01';
  local_88.StatData.Pad[1] = '\0';
  local_88.StatData.Pad[2] = '\0';
  local_88.StatData.Pad[3] = '\0';
  local_88.StatData.Pad[4] = '\0';
  local_88.StatData.Pad[5] = '\0';
  local_88.StatData.Pad[6] = '\0';
  local_88.StatData.Pad[7] = '\0';
  local_b8 = FVar2;
  local_88.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
  FThreadStats::AddStatMessage(pFVar9,&local_88);
  pFVar7 = &local_b8;
LAB_145a81592:
  FStatsTrace::Add(pFVar7,1);
  if (pFVar9->ScopeCount == 0) {
    FThreadStats::Flush(pFVar9,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar9,false,false);
  }
  return;
}

