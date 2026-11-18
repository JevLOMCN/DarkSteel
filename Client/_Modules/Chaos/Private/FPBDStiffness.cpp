// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FPBDStiffness<3> @ 143c217f0

FPBDStiffness * __thiscall
Chaos::Softs::FPBDStiffness::FPBDStiffness<3>
          (FPBDStiffness *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,3>_const_,int> *param_3,int param_4,int param_5,int param_6,
          float param_7,float param_8)

{
  byte bVar1;
  float fVar2;
  undefined8 local_res8;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FPBDWeightMap::FPBDWeightMap<3>
            ((FPBDWeightMap *)this,(TVector<float,2> *)&local_res8,param_2,param_3,param_4,param_5,
             param_6,(void *)0x0);
  this->ParameterFitBase = param_7;
  this->_padding_ = (longlong)&___7FPBDStiffness_Softs_Chaos__6B_;
  fVar2 = logf(param_7);
  this->ParameterFitLogBase = fVar2;
  this->PrevDtOrMaxStiffness = 0.0;
  this->PrevNumIterations = 0;
  local_res8._0_4_ = *(float *)param_1;
  if (param_8 <= *(float *)param_1) {
    local_res8._0_4_ = param_8;
  }
  if ((float)local_res8 <= 0.0) {
    local_res8._0_4_ = 0.0;
  }
  local_res8._4_4_ = *(float *)&param_1->field_0x4;
  if (param_8 <= *(float *)&param_1->field_0x4) {
    local_res8._4_4_ = param_8;
  }
  if (local_res8._4_4_ <= 0.0) {
    local_res8._4_4_ = 0.0;
  }
  if (((float)local_res8 == *(float *)&this->_padding_) &&
     (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar1;
  this->_padding_ = (longlong)local_res8;
  return this;
}

// ~FPBDStiffness @ 143c45a70

void __thiscall Chaos::Softs::FPBDStiffness::~FPBDStiffness(FPBDStiffness *this)

{
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ApplyPBDValues @ 143c5a430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::Softs::FPBDStiffness::ApplyPBDValues(FPBDStiffness *this,float param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res20;
  FStatMessage local_48 [2];
  
  FVar10.Value = 0;
  FVar6 = ::StatPtr_STAT_PBD_StiffnessApplyValues;
  if (::StatPtr_STAT_PBD_StiffnessApplyValues ==
      (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_PBD_StiffnessApplyValues");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PBD_StiffnessApplyValues>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&::StatPtr_STAT_PBD_StiffnessApplyValues,*pFVar5
                       ,L"Chaos PBD Stiffness Apply Values","STATGROUP_Chaos","STATCAT_Advanced",
                       L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDStiffness.h"
                   ,0x7e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_143c5a594;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_143c5a594:
  local_48[0].NameAndInfo.Index.Value = (uint)((param_1 * __real_42f00000) / (float)param_2);
  if ((param_1 != this->PrevDtOrMaxStiffness) || (param_2 != this->PrevNumIterations)) {
    this->PrevDtOrMaxStiffness = param_1;
    this->PrevNumIterations = param_2;
    *(undefined1 *)&this->_padding_ = 1;
  }
  local_48[0].StatData.Pad = (uchar  [8])this;
  FPBDWeightMap::ApplyValues<_Chaos::Softs::FPBDStiffness::ApplyPBDValues_::__l2::<lambda_1>_&>
            ((FPBDWeightMap *)this,(<lambda_1> *)local_48,(bool *)0x0);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48[0].NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_48[0].NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_48[0].StatData.Pad[4] = '\0';
      local_48[0].StatData.Pad[5] = '\0';
      local_48[0].StatData.Pad[6] = '\0';
      local_48[0].StatData.Pad[7] = '\0';
      local_48[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FPBDStiffness @ 143c881d0

FPBDStiffness * __thiscall
Chaos::Softs::FPBDStiffness::FPBDStiffness
          (FPBDStiffness *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          int param_3,int param_4,float param_5,float param_6)

{
  byte bVar1;
  float fVar2;
  undefined8 local_res8;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FPBDWeightMap::FPBDWeightMap
            ((FPBDWeightMap *)this,(TVector<float,2> *)&local_res8,param_2,param_3,param_4);
  this->ParameterFitBase = param_5;
  this->_padding_ = (longlong)&___7FPBDStiffness_Softs_Chaos__6B_;
  fVar2 = logf(param_5);
  this->ParameterFitLogBase = fVar2;
  this->PrevDtOrMaxStiffness = 0.0;
  this->PrevNumIterations = 0;
  local_res8._0_4_ = *(float *)param_1;
  if (param_6 <= *(float *)param_1) {
    local_res8._0_4_ = param_6;
  }
  if ((float)local_res8 <= 0.0) {
    local_res8._0_4_ = 0.0;
  }
  local_res8._4_4_ = *(float *)&param_1->field_0x4;
  if (param_6 <= *(float *)&param_1->field_0x4) {
    local_res8._4_4_ = param_6;
  }
  if (local_res8._4_4_ <= 0.0) {
    local_res8._4_4_ = 0.0;
  }
  if (((float)local_res8 == *(float *)&this->_padding_) &&
     (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar1;
  this->_padding_ = (longlong)local_res8;
  return this;
}

// FPBDStiffness<2> @ 143d83920

FPBDStiffness * __thiscall
Chaos::Softs::FPBDStiffness::FPBDStiffness<2>
          (FPBDStiffness *this,TVector<float,2> *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<Chaos::TVector<int,2>_const_,int> *param_3,int param_4,int param_5,int param_6,
          float param_7,float param_8)

{
  byte bVar1;
  float fVar2;
  undefined8 local_res8;
  
  local_res8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  FPBDWeightMap::FPBDWeightMap<2>
            ((FPBDWeightMap *)this,(TVector<float,2> *)&local_res8,param_2,param_3,param_4,param_5,
             param_6,(void *)0x0);
  this->ParameterFitBase = param_7;
  this->_padding_ = (longlong)&___7FPBDStiffness_Softs_Chaos__6B_;
  fVar2 = logf(param_7);
  this->ParameterFitLogBase = fVar2;
  this->PrevDtOrMaxStiffness = 0.0;
  this->PrevNumIterations = 0;
  local_res8._0_4_ = *(float *)param_1;
  if (param_8 <= *(float *)param_1) {
    local_res8._0_4_ = param_8;
  }
  if ((float)local_res8 <= 0.0) {
    local_res8._0_4_ = 0.0;
  }
  local_res8._4_4_ = *(float *)&param_1->field_0x4;
  if (param_8 <= *(float *)&param_1->field_0x4) {
    local_res8._4_4_ = param_8;
  }
  if (local_res8._4_4_ <= 0.0) {
    local_res8._4_4_ = 0.0;
  }
  if (((float)local_res8 == *(float *)&this->_padding_) &&
     (local_res8._4_4_ == *(float *)((longlong)&this->_padding_ + 4))) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar1;
  this->_padding_ = (longlong)local_res8;
  return this;
}

// operator= @ 143dffa90

FPBDStiffness * __thiscall
Chaos::Softs::FPBDStiffness::operator=(FPBDStiffness *this,FPBDStiffness *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = &param_1->_padding_;
  plVar2 = &this->_padding_;
  if (plVar2 != plVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  plVar1 = &param_1->_padding_;
  plVar2 = &this->_padding_;
  if (plVar2 != plVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  this->_padding_ = param_1->_padding_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->ParameterFitBase = param_1->ParameterFitBase;
  this->ParameterFitLogBase = param_1->ParameterFitLogBase;
  this->PrevDtOrMaxStiffness = param_1->PrevDtOrMaxStiffness;
  this->PrevNumIterations = param_1->PrevNumIterations;
  return this;
}

