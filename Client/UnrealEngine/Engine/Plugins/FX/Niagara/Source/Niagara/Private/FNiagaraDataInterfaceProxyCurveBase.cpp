// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FNiagaraDataInterfaceProxyCurveBase @ 1490b7dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyCurveBase::~FNiagaraDataInterfaceProxyCurveBase
          (FNiagaraDataInterfaceProxyCurveBase *this)

{
  FName FVar1;
  FRHIBuffer *pFVar2;
  FRHIShaderResourceView *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar8 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxyCurveBase__6B_;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCurveBase.cpp"
                         ,0x81,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  auVar8._0_4_ = (this->CurveLUT).NumBytes;
  if (auVar8 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_res10,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_28.StatData.Pad = auVar8;
      local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  (this->CurveLUT).NumBytes = 0;
  pFVar2 = (this->CurveLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    (this->CurveLUT).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = (this->CurveLUT).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    (this->CurveLUT).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar3 = (this->CurveLUT).SRV.Reference;
  if (pFVar3 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar3);
  }
  pFVar2 = (this->CurveLUT).Buffer.Reference;
  if (pFVar2 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  return;
}

// ConsumePerInstanceDataFromGameThread @ 1490d66a0

void __thiscall
FNiagaraDataInterfaceProxyCurveBase::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyCurveBase *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceCurveBase.cpp"
                     ,0x93,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14911acd0

int __thiscall
FNiagaraDataInterfaceProxyCurveBase::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyCurveBase *this)

{
  return 0;
}

