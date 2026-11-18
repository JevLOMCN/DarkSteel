// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// FParticleMeshEmitterInstance @ 1480f4040

FParticleMeshEmitterInstance * __thiscall
FParticleMeshEmitterInstance::FParticleMeshEmitterInstance
          (FParticleMeshEmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  FParticleEmitterInstance::FParticleEmitterInstance((FParticleEmitterInstance *)this,param_1);
  *(undefined ***)this = &___7FParticleMeshEmitterInstance__6B_;
  this->MeshTypeData = (UParticleModuleTypeDataMesh *)0x0;
  this->MeshRotationActive = false;
  this->MeshRotationOffset = 0;
  this->MeshMotionBlurOffset = 0;
  (this->CurrentMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentMaterials).ArrayNum = 0;
  (this->CurrentMaterials).ArrayMax = 0;
  return this;
}

// FillReplayData @ 148109f50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FParticleMeshEmitterInstance::FillReplayData
          (FParticleMeshEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleMeshEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_FillReplayData>
  FVar12;
  UMaterial *pUVar13;
  longlong lVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleMeshEmitterInstance_FillReplayData ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleMeshEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_FillReplayData>
         )0x0) {
      pFVar11 = ::FName::FName(&local_70,"STAT_ParticleMeshEmitterInstance_FillReplayData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleMeshEmitterInstance_FillReplayData,*pFVar11,
                 L"STAT_ParticleMeshEmitterInstance_FillReplayData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_ParticleMeshEmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleMeshEmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleMeshEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_FillReplayData>
       )0x0) {
    pFVar11 = ::FName::FName(&local_68,"STAT_ParticleMeshEmitterInstance_FillReplayData");
    FVar12 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleMeshEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_FillReplayData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleMeshEmitterInstance_FillReplayData,*pFVar11,
                          L"STAT_ParticleMeshEmitterInstance_FillReplayData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_14810a0c7:
    bVar6 = false;
    FVar17 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar16.Value;
        local_res20.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xf34);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14810a0c7;
    local_78.s.LowPart = FVar16.Value;
    local_78.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar6 = true;
  }
  bVar8 = FParticleEmitterInstance::FillReplayData((FParticleEmitterInstance *)this,param_1);
  if (((!bVar8) || (lVar14 = *(longlong *)&this->field_0x18, lVar14 == 0)) ||
     ((*(byte *)(lVar14 + 0x2c) & 1) == 0)) {
    bVar8 = false;
    goto LAB_14810a39f;
  }
  param_1->eEmitterType = DET_Mesh;
  pUVar13 = *(UMaterial **)&this->field_0x238;
  if ((pUVar13 == (UMaterial *)0x0) ||
     (cVar9 = (**(code **)(pUVar13->_padding_ + 0x378))(pUVar13,3), cVar9 == '\0')) {
    pUVar13 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  param_1[1]._padding_ = (longlong)pUVar13;
  *(UMaterial **)&this->field_0x238 = pUVar13;
  *(byte *)&param_1[2].DataContainer.ParticleData =
       *(byte *)(*(longlong *)(lVar14 + 0x30) + 0xc2) & 1;
  param_1[2].DataContainer.MemBlockSize = (uint)*(byte *)(*(longlong *)(lVar14 + 0x30) + 0xc1);
  param_1[2].DataContainer.ParticleDataNumBytes = *(int *)&this->field_0x2c;
  param_1[2].DataContainer.ParticleIndicesNumShorts = *(int *)(*(longlong *)(lVar14 + 0x30) + 200);
  *(undefined4 *)&param_1[2].DataContainer.field_0xc =
       *(undefined4 *)(*(longlong *)(lVar14 + 0x30) + 0xcc);
  *(int *)((longlong)&param_1[2].DataContainer.ParticleData + 4) = this->MeshRotationOffset;
  *(int *)&param_1[2].DataContainer.ParticleIndices = this->MeshMotionBlurOffset;
  *(bool *)((longlong)&param_1[2].DataContainer.ParticleIndices + 5) = this->MeshRotationActive;
  *(uchar *)((longlong)&param_1[2].DataContainer.ParticleIndices + 4) =
       (this->MeshTypeData->MeshAlignment).Value;
  *(undefined8 *)&(param_1->Scale).field0_0x0 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_
  ;
  (param_1->Scale).field0_0x0._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpriteTemplate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xf5f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  lVar14 = *(longlong *)&this->field_0x18;
  if ((lVar14 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xf61,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if ((*(longlong *)(lVar14 + 0x30) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel2->RequiredModule",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xf62,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return (bool)uVar10;
  }
  if (((*(byte *)(*(longlong *)(lVar14 + 0x30) + 0x71) & 1) == 0) && (-1 < (char)this->field_0x160))
  {
    lVar14 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    dVar3 = *(double *)(lVar14 + 0x48);
    dVar4 = *(double *)(lVar14 + 0x50);
    (param_1->Scale).field0_0x0._s_0.X = (float)*(double *)(lVar14 + 0x40);
    (param_1->Scale).field0_0x0._s_0.Y = (float)dVar3;
    (param_1->Scale).field0_0x0._s_0.Z = (float)dVar4;
  }
  if ((((this->MeshTypeData->AxisLockOption).Value == '\0') && ((this->field_0x161 & 2) != 0)) &&
     (param_1[1].field_0x5f = this->field_0x162, this->field_0x162 != '\0')) {
    param_1[1].field_0x5d = 1;
    switch(this->field_0x162) {
    case 1:
      *(undefined8 *)&param_1[2].Scale.field0_0x0 = 0x3f800000;
      param_1[2].Scale.field0_0x0._s_0.Z = 0.0;
      bVar8 = true;
      break;
    case 2:
      param_1[2].Scale.field0_0x0._s_0.X = 0.0;
      *(undefined8 *)((longlong)&param_1[2].Scale.field0_0x0 + 4) = 0x3f800000;
      bVar8 = true;
      break;
    default:
      *(undefined8 *)&param_1[2].Scale.field0_0x0 = 0;
      param_1[2].Scale.field0_0x0._s_0.Z = 1.0;
      goto LAB_14810a397;
    case 4:
      param_1[2].Scale.field0_0x0._s_0.X = -1.0;
      *(undefined8 *)((longlong)&param_1[2].Scale.field0_0x0 + 4) = 0;
      bVar8 = true;
      break;
    case 5:
      param_1[2].Scale.field0_0x0._s_0.X = 0.0;
      param_1[2].Scale.field0_0x0._s_0.Y = -1.0;
      param_1[2].Scale.field0_0x0._s_0.Z = 0.0;
      bVar8 = true;
      break;
    case 6:
      *(undefined8 *)&param_1[2].Scale.field0_0x0 = 0;
      param_1[2].Scale.field0_0x0._s_0.Z = -1.0;
      bVar8 = true;
    }
  }
  else {
LAB_14810a397:
    bVar8 = true;
  }
LAB_14810a39f:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar8;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar8;
}

// GatherMaterialRelevance @ 14810d200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticleMeshEmitterInstance::GatherMaterialRelevance
          (FParticleMeshEmitterInstance *this,FMaterialRelevance *param_1,UParticleLODLevel *param_2
          ,EShaderPlatform param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMaterialRelevance FVar4;
  ForElementType<UMaterialInterface_*> FVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [8];
  TArray<UMaterialInterface_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_50.AllocatorInstance.SecondaryData = (ForElementType<UMaterialInterface_*>)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 2;
  GetMeshMaterials(this,&local_50,param_2,true);
  uVar7 = 0;
  if (0 < local_50.ArrayNum) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < local_50.ArrayNum) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if (uVar3 == 0) {
        local_60 = (longlong)local_50.ArrayNum;
        local_68 = (longlong)(int)uVar7;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FVar5 = (ForElementType<UMaterialInterface_*>)&local_50;
      if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
        FVar5 = local_50.AllocatorInstance.SecondaryData;
      }
      FVar4 = UMaterialInterface::GetRelevance_Concurrent
                        (*(UMaterialInterface **)(lVar8 + (longlong)FVar5),(EShaderPlatform)local_58
                        );
      uVar6 = *(uint *)&param_1->field0_0x0 >> 0x12;
      (param_1->field0_0x0).Raw = (param_1->field0_0x0).Raw | *(ulonglong *)FVar4.field0_0x0;
      uVar3 = *(uint *)FVar4.field0_0x0 >> 0x12;
      if (((byte)(*(uint *)FVar4.field0_0x0 >> 0x12) & 0x3f) < ((byte)uVar6 & 0x3f)) {
        uVar3 = uVar6;
      }
      uVar7 = uVar7 + 1;
      uVar6 = (uint)(param_1->field0_0x0).Raw;
      lVar8 = lVar8 + 8;
      *(uint *)&param_1->field0_0x0 = (uVar3 << 0x12 ^ uVar6) & 0xfc0000 ^ uVar6;
    } while ((int)uVar7 < local_50.ArrayNum);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<UMaterialInterface_*>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// GatherMaterialRelevance @ 14810d360

void __thiscall
FParticleMeshEmitterInstance::GatherMaterialRelevance
          (FParticleMeshEmitterInstance *this,FMaterialRelevance *param_1,UParticleLODLevel *param_2
          ,Type param_3)

{
  if (param_3 == Num) {
                    /* WARNING: Could not recover jumptable at 0x00014810d376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x168))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014810d388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x168))();
  return;
}

// GetAllocatedSize @ 14810fe30

void __thiscall
FParticleMeshEmitterInstance::GetAllocatedSize
          (FParticleMeshEmitterInstance *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar4 = iVar2;
  iVar3 = iVar2;
  if (*(longlong *)&this->field_0x168 != 0) {
    iVar4 = *(int *)&this->field_0x188 * *(int *)&this->field_0x18c;
    iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
  }
  if (*(longlong *)&this->field_0x170 != 0) {
    iVar1 = *(int *)&this->field_0x18c * 2;
    iVar2 = *(int *)&this->field_0x194 * 2;
  }
  *param_1 = iVar1 + 0x2b0 + iVar4;
  *param_2 = iVar2 + 0x2b0 + iVar3;
  return;
}

// GetDynamicData @ 1481130c0

/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterDataBase * __thiscall
FParticleMeshEmitterInstance::GetDynamicData
          (FParticleMeshEmitterInstance *this,bool param_1,Type param_2)

{
  int *piVar1;
  LARGE_INTEGER LVar2;
  longlong lVar3;
  UParticleModuleTypeDataMesh *pUVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleMeshEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_GetDynamicData>
  FVar10;
  FDynamicMeshEmitterData *this_00;
  FDynamicMeshEmitterData *this_01;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount> FVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_DynamicMeshCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem> FVar15;
  LARGE_INTEGER local_res8;
  bool local_res10;
  Type local_res18;
  FName local_res20;
  LARGE_INTEGER local_68;
  FStatMessage local_58;
  
  this_01 = (FDynamicMeshEmitterData *)0x0;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleMeshEmitterInstance_GetDynamicData ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleMeshEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_GetDynamicData>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_ParticleMeshEmitterInstance_GetDynamicData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleMeshEmitterInstance_GetDynamicData,*pFVar9,
                 L"STAT_ParticleMeshEmitterInstance_GetDynamicData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_ParticleMeshEmitterInstance_GetDynamicData;
  if (StatPtr_STAT_ParticleMeshEmitterInstance_GetDynamicData ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleMeshEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_GetDynamicData>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_ParticleMeshEmitterInstance_GetDynamicData");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleMeshEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleMeshEmitterInstance_GetDynamicData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleMeshEmitterInstance_GetDynamicData,*pFVar9,
                          L"STAT_ParticleMeshEmitterInstance_GetDynamicData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar2 = *(LARGE_INTEGER *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_68.s.LowPart = 0;
  local_68.s.HighPart = 0;
  if ((LVar2.s.LowPart == 0) && (LVar2.s.HighPart == 0)) {
LAB_14811322e:
    bVar6 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar2;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xe5e);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14811322e;
    local_res8 = LVar2;
    FThreadStats::AddMessage((FName)LVar2.s,CycleScopeStart);
    bVar6 = true;
    local_68 = LVar2;
  }
  lVar3 = *(longlong *)&this->field_0x18;
  cVar8 = (**(code **)(*(longlong *)this + 0x118))(this,lVar3);
  if ((cVar8 != '\0') && ((this->field_0x160 & 1) != 0)) {
    this_00 = FDynamicEmitterDataBase::operator_new(0x180);
    if (this_00 != (FDynamicMeshEmitterData *)0x0) {
      this_01 = FDynamicMeshEmitterData::FDynamicMeshEmitterData
                          (this_00,*(UParticleModuleRequired **)(lVar3 + 0x30));
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar11 = StatPtr_STAT_DynamicEmitterCount;
      if (StatPtr_STAT_DynamicEmitterCount ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)0x0) {
        pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterCount");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterCount,*pFVar9,
                            L"DynEmitter Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar2 = *(LARGE_INTEGER *)FVar11;
      local_res8 = LVar2;
      if ((((FName)LVar2.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_58.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
        local_58.StatData.Pad[0] = '\x01';
        local_58.StatData.Pad[1] = '\0';
        local_58.StatData.Pad[2] = '\0';
        local_58.StatData.Pad[3] = '\0';
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_res8 = LVar2;
        local_58.NameAndInfo.Index.Value = LVar2.s.LowPart;
        FThreadStats::AddStatMessage(pFVar12,&local_58);
        FStatsTrace::Add((FName *)&local_res8.s,1);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar14 = StatPtr_STAT_DynamicMeshCount;
        if (StatPtr_STAT_DynamicMeshCount == (FThreadSafeStaticStat<FStat_STAT_DynamicMeshCount>)0x0
           ) {
          pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicMeshCount");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_DynamicMeshCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicMeshCount,*pFVar9,
                              L"DynMesh Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                              L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
        }
        LVar2 = *(LARGE_INTEGER *)FVar14;
        local_res8 = LVar2;
        if ((((FName)LVar2.QuadPart != (FName)0x0) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          local_58.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
          local_58.StatData.Pad[0] = '\x01';
          local_58.StatData.Pad[1] = '\0';
          local_58.StatData.Pad[2] = '\0';
          local_58.StatData.Pad[3] = '\0';
          local_58.StatData.Pad[4] = '\0';
          local_58.StatData.Pad[5] = '\0';
          local_58.StatData.Pad[6] = '\0';
          local_58.StatData.Pad[7] = '\0';
          local_res8 = LVar2;
          local_58.NameAndInfo.Index.Value = LVar2.s.LowPart;
          FThreadStats::AddStatMessage(pFVar12,&local_58);
          FStatsTrace::Add((FName *)&local_res8.s,1);
          if (pFVar12->ScopeCount == 0) {
            FThreadStats::Flush(pFVar12,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar12,false,false);
          }
        }
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar15 = StatPtr_STAT_DynamicEmitterMem;
      if (StatPtr_STAT_DynamicEmitterMem == (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)0x0
         ) {
        pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterMem");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterMem,*pFVar9,
                            L"DynEmitter Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar2 = *(LARGE_INTEGER *)FVar15;
      local_res8 = LVar2;
      if ((((FName)LVar2.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar12 == (FThreadStats *)0x0) {
          pFVar13 = FThreadStatsPool::Get();
          pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
        }
        local_58.NameAndInfo.Number = LVar2.s.HighPart & 0xffffafffU | 0xa000;
        local_58.StatData.Pad[0] = 0x80;
        local_58.StatData.Pad[1] = '\x01';
        local_58.StatData.Pad[2] = '\0';
        local_58.StatData.Pad[3] = '\0';
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_res8 = LVar2;
        local_58.NameAndInfo.Index.Value = LVar2.s.LowPart;
        FThreadStats::AddStatMessage(pFVar12,&local_58);
        FStatsTrace::Add((FName *)&local_res8.s,0x180);
        if (pFVar12->ScopeCount == 0) {
          FThreadStats::Flush(pFVar12,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    cVar8 = (**(code **)(*(longlong *)this + 0x220))(this,&this_01->Source);
    if (cVar8 != '\0') {
      pUVar4 = this->MeshTypeData;
      FDynamicMeshEmitterData::Init
                (this_01,local_res10,this,(pUVar4->Mesh).field0_0x0.DebugPtr,
                 pUVar4->bUseStaticMeshLODs,pUVar4->LODSizeScale,local_res18);
      goto LAB_14811367a;
    }
    if (this_01 != (FDynamicMeshEmitterData *)0x0) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  this_01 = (FDynamicMeshEmitterData *)0x0;
LAB_14811367a:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)local_68.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68._0_4_;
      local_58.NameAndInfo.Number = local_68.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar12,&local_58);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return (FDynamicEmitterDataBase *)this_01;
}

// GetMeshMaterials @ 148116350

void __thiscall
FParticleMeshEmitterInstance::GetMeshMaterials
          (FParticleMeshEmitterInstance *this,
          TArray<UMaterialInterface_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,UParticleLODLevel *param_2,Type param_3,bool param_4)

{
  GetMeshMaterials(this,param_1,param_2,param_4);
  return;
}

// GetMeshMaterials @ 148116370

void __thiscall
FParticleMeshEmitterInstance::GetMeshMaterials
          (FParticleMeshEmitterInstance *this,
          TArray<UMaterialInterface_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_1,UParticleLODLevel *param_2,bool param_3)

{
  UStaticMesh *pUVar1;
  UObject *pUVar2;
  ForElementType<UMaterialInterface_*> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FStaticMeshRenderData *pFVar8;
  UClass *pUVar9;
  ForElementType<UMaterialInterface_*> FVar10;
  FObjectPtr_u_0 *this_00;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_res8;
  TObjectPtr<UMaterialInterface>_u_0 local_38;
  longlong local_30;
  
  if ((this->MeshTypeData != (UParticleModuleTypeDataMesh *)0x0) &&
     (pUVar1 = (this->MeshTypeData->Mesh).field0_0x0.DebugPtr, pUVar1 != (UStaticMesh *)0x0)) {
    pFVar8 = UStaticMesh::GetRenderData(pUVar1);
    if (((pFVar8->LODResources).Array.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar12 = 0;
    local_30 = *(longlong *)(pFVar8->LODResources).Array.AllocatorInstance.Data;
    if (0 < *(int *)(local_30 + 0x38)) {
      lVar16 = 0;
      local_res8 = 0;
      do {
        lVar11 = local_30;
        local_38.DebugPtr = (UMaterialInterface *)0x0;
        if ((int)uVar12 < (this->CurrentMaterials).ArrayNum) {
          if (((int)uVar12 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_38 = (TObjectPtr<UMaterialInterface>_u_0)
                     ((TObjectPtr<UMaterialInterface>_u_0 *)
                     ((this->CurrentMaterials).AllocatorInstance.Data + lVar16))->DebugPtr;
          if ((UMaterial *)local_38.DebugPtr == (UMaterial *)0x0) goto LAB_14811649b;
        }
        else {
LAB_14811649b:
          uVar15 = 0;
          if (0 < (param_2->Modules).ArrayNum) {
            lVar13 = 0;
            do {
              uVar6 = 0;
              if ((int)uVar15 < (param_2->Modules).ArrayNum) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = (FObjectPtr_u_0 *)((param_2->Modules).AllocatorInstance.Data + lVar13);
              if (this_00->Handle != (UObject *)0x0) {
                pUVar9 = Z_Construct_UClass_UParticleModuleMeshMaterial_NoRegister();
                bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
                if ((((bVar5) && (pUVar2 = this_00->Handle, pUVar2 != (UObject *)0x0)) &&
                    (*(char *)(pUVar2 + 1) < '\0')) && ((int)uVar12 < *(int *)&pUVar2[1].field_0x10)
                   ) {
                  uVar15 = 0;
                  if ((int)uVar12 < *(int *)&pUVar2[1].field_0x10) {
                    uVar15 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar15 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  local_38 = (TObjectPtr<UMaterialInterface>_u_0)
                             ((TObjectPtr<UMaterialInterface>_u_0 *)
                             (lVar16 + *(longlong *)&pUVar2[1].field_0x8))->DebugPtr;
                  lVar11 = local_30;
                  break;
                }
              }
              uVar15 = uVar15 + 1;
              lVar13 = lVar13 + 8;
              lVar11 = local_30;
            } while ((int)uVar15 < (param_2->Modules).ArrayNum);
          }
        }
        piVar14 = &param_1->ArrayMax;
        if (((UMaterial *)local_38.DebugPtr == (UMaterial *)0x0) &&
           ((this->MeshTypeData->bOverrideMaterial == 0 ||
            ((local_38 = *(TObjectPtr<UMaterialInterface>_u_0 *)&this->field_0x238,
             (UMaterial *)local_38.DebugPtr == (UMaterial *)0x0 &&
             (local_38 = (TObjectPtr<UMaterialInterface>_u_0)
                         (((param_2->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0.
                         DebugPtr, (UMaterial *)local_38.DebugPtr == (UMaterial *)0x0)))))) {
          pUVar1 = (this->MeshTypeData->Mesh).field0_0x0.DebugPtr;
          uVar15 = 0;
          if ((int)uVar12 < *(int *)(lVar11 + 0x38)) {
            uVar15 = ~uVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar13 = lVar11 + 0x10;
          if (*(longlong *)(lVar11 + 0x30) != 0) {
            lVar13 = *(longlong *)(lVar11 + 0x30);
          }
          local_38.DebugPtr = UStaticMesh::GetMaterial(pUVar1,*(int *)(lVar13 + local_res8));
          if ((((UMaterial *)local_38.DebugPtr == (UMaterial *)0x0) &&
              (local_38.DebugPtr = (UMaterialInterface *)UMaterial::GetDefaultMaterial(MD_Surface),
              (UMaterial *)local_38.DebugPtr == (UMaterial *)0x0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Material",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                 ,0xf25,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar3 = (param_1->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<UMaterialInterface_*>)param_1;
        if (FVar3 != (ForElementType<UMaterialInterface_*>)0x0) {
          FVar10 = FVar3;
        }
        if ((ulonglong)FVar10 <= &local_38) {
          FVar10 = (ForElementType<UMaterialInterface_*>)param_1;
          if (FVar3 != (ForElementType<UMaterialInterface_*>)0x0) {
            FVar10 = FVar3;
          }
          if ((&local_38 <
               (TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar10 + (longlong)*piVar14 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == *piVar14) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UMaterialInterface_*>_>
                            (0x808,&param_1->AllocatorInstance,piVar14);
        }
        param_1->ArrayNum = iVar7 + 1;
        FVar3 = (param_1->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<UMaterialInterface_*>)param_1;
        if (FVar3 != (ForElementType<UMaterialInterface_*>)0x0) {
          FVar10 = FVar3;
        }
        local_res8 = local_res8 + 0x1c;
        uVar12 = uVar12 + 1;
        lVar16 = lVar16 + 8;
        ((TObjectPtr<UMaterialInterface>_u_0 *)((longlong)FVar10 + (longlong)iVar7 * 8))->DebugPtr =
             (UMaterialInterface *)local_38;
      } while ((int)uVar12 < *(int *)(local_30 + 0x38));
    }
  }
  return;
}

// GetMeshRotationOffset @ 1481167c0

int __thiscall
FParticleMeshEmitterInstance::GetMeshRotationOffset(FParticleMeshEmitterInstance *this)

{
  return this->MeshRotationOffset;
}

// GetReplayData @ 148118cc0

FDynamicEmitterReplayDataBase * __thiscall
FParticleMeshEmitterInstance::GetReplayData(FParticleMeshEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDynamicSpriteEmitterReplayDataBase *this_00;
  FDynamicEmitterReplayDataBase *pFVar4;
  
  if ((0 < *(int *)&this->field_0x18c) && ((this->field_0x160 & 1) != 0)) {
    this_00 = ::operator_new(0x108);
    if (this_00 == (FDynamicSpriteEmitterReplayDataBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewEmitterReplayData != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                         ,0xe91,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    else {
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase(this_00);
      this_00->_padding_ = (longlong)&___7FDynamicMeshEmitterReplayData__6B_;
      this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0;
      *(undefined1 *)&this_00[1]._padding_ = 0;
      *(undefined8 *)((longlong)&this_00[1]._padding_ + 4) = 0;
      *(undefined2 *)((longlong)&this_00[1]._padding_ + 4) = 0;
      *(undefined4 *)&this_00[1]._padding_ = 0;
      this_00[1]._padding_ = 0x3f800000;
    }
    cVar3 = (**(code **)(*(longlong *)this + 0x220))(this,this_00);
    if (cVar3 != '\0') {
      return (FDynamicEmitterReplayDataBase *)this_00;
    }
    if (this_00 != (FDynamicSpriteEmitterReplayDataBase *)0x0) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  return (FDynamicEmitterReplayDataBase *)0x0;
}

// GetResourceSizeEx @ 148118f30

void __thiscall
FParticleMeshEmitterInstance::GetResourceSizeEx
          (FParticleMeshEmitterInstance *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if ((TVar1 == EstimatedTotal) ||
     (lVar2 = (**(code **)(**(longlong **)&this->field_0x10 + 0xf8))(), lVar2 != 0)) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (*(longlong *)&this->field_0x168 != 0) {
      iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
    }
    if (*(longlong *)&this->field_0x170 != 0) {
      iVar4 = *(int *)&this->field_0x194 * 2;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x180);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar3);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar4);
  }
  return;
}

// Init @ 14811efa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleMeshEmitterInstance::Init(FParticleMeshEmitterInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_Init> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  FVar5 = StatPtr_STAT_MeshEmitterInstance_Init;
  if (StatPtr_STAT_MeshEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_Init>)0x0) {
    pFVar4 = ::FName::FName(&local_res18,"STAT_MeshEmitterInstance_Init");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_Init>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshEmitterInstance_Init,*pFVar4,
                       L"MeshEmitterInstance Init GT","STATGROUP_Particles","STATCAT_Advanced",
                       L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar8 = *(FName *)FVar5;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar5 + 0x10));
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar7.Value;
        local_res10.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar5 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xc8d);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar7.Value;
      local_res10.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res10);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
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
  }
  return;
}

// InitParameters @ 1481201d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleMeshEmitterInstance::InitParameters
          (FParticleMeshEmitterInstance *this,UParticleEmitter *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_InitParameters> FVar8;
  UClass *pUVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FString *pFVar10;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_88;
  FName local_80;
  FStatMessage local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  lVar15 = 0;
  FVar8 = StatPtr_STAT_MeshEmitterInstance_InitParameters;
  if (StatPtr_STAT_MeshEmitterInstance_InitParameters ==
      (FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_InitParameters>)0x0) {
    pFVar7 = ::FName::FName(&local_88,"STAT_MeshEmitterInstance_InitParameters");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_MeshEmitterInstance_InitParameters>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshEmitterInstance_InitParameters
                       ,*pFVar7,L"MeshEmitterInstance InitParams GT","STATGROUP_Particles",
                       "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xc7a);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_148120323;
    }
  }
  bVar4 = false;
  FVar13 = local_80;
LAB_148120323:
  FParticleEmitterInstance::InitParameters((FParticleEmitterInstance *)this,param_1);
  pwVar16 = L"";
  if (((param_1->LODLevels).ArrayNum < 1) ||
     (lVar15 = *(longlong *)(param_1->LODLevels).AllocatorInstance.Data, lVar15 == 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0xc80,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)(lVar15 + 0x48) != 0) {
    pUVar9 = Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)(lVar15 + 0x48),pUVar9);
    if ((bVar6) &&
       (*(UParticleModuleTypeDataMesh **)(lVar15 + 0x48) != (UParticleModuleTypeDataMesh *)0x0)) {
      this->MeshTypeData = *(UParticleModuleTypeDataMesh **)(lVar15 + 0x48);
      this->MeshRotationActive = param_1->bMeshRotationActive;
      if (bVar5) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
          local_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_res20);
          local_70.StatData.Pad[4] = '\0';
          local_70.StatData.Pad[5] = '\0';
          local_70.StatData.Pad[6] = '\0';
          local_70.StatData.Pad[7] = '\0';
          local_70.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
          local_70.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
          local_70.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
          local_70.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_70);
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
    pFVar10 = GetTypeName<UParticleModuleTypeDataMesh>(&local_60);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<UParticleModuleTypeDataBase>
                        (&local_50,*(UParticleModuleTypeDataBase **)(lVar15 + 0x48));
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar14);
  }
  pFVar10 = GetTypeName<UParticleModuleTypeDataMesh>(&local_40);
  if ((pFVar10->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar16);
}

// IsDynamicDataRequired @ 1481233d0

bool __thiscall
FParticleMeshEmitterInstance::IsDynamicDataRequired
          (FParticleMeshEmitterInstance *this,UParticleLODLevel *param_1)

{
  UStaticMesh *this_00;
  UParticleModuleRequired *pUVar1;
  bool bVar2;
  
  this_00 = (this->MeshTypeData->Mesh).field0_0x0.DebugPtr;
  if (this_00 != (UStaticMesh *)0x0) {
    bVar2 = UStaticMesh::HasValidRenderData(this_00,false,-1);
    if (((((bVar2) && (0 < *(int *)&this->field_0x18c)) &&
         ((*(longlong *)&this->field_0x8 == 0 ||
          (*(char *)(*(longlong *)&this->field_0x8 + 0x34) != '\x04')))) &&
        ((param_1 != (UParticleLODLevel *)0x0 && (param_1->bEnabled != 0)))) &&
       ((pUVar1 = (param_1->RequiredModule).field0_0x0.DebugPtr, pUVar1->bUseMaxDrawCount == '\0' ||
        (pUVar1->MaxDrawCount != 0)))) {
      return true;
    }
  }
  return false;
}

// IsMeshRotationActive @ 148123520

bool __thiscall
FParticleMeshEmitterInstance::IsMeshRotationActive(FParticleMeshEmitterInstance *this)

{
  return this->MeshRotationActive;
}

// PostSpawn @ 148127050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FParticleMeshEmitterInstance::PostSpawn
          (FParticleMeshEmitterInstance *this,FBaseParticle *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  uchar uVar3;
  int iVar4;
  undefined4 uVar5;
  UParticleLODLevel *pUVar6;
  longlong lVar7;
  double dVar8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TQuat<double> local_48 [2];
  
  FParticleEmitterInstance::PostSpawn((FParticleEmitterInstance *)this,param_1,param_2,param_3);
  pUVar6 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
  lVar7 = (longlong)this->MeshRotationOffset;
  uVar3 = (((pUVar6->RequiredModule).field0_0x0.DebugPtr)->ScreenAlignment).Value;
  if ((uVar3 == '\x03') || (uVar3 == '\x04')) {
    local_a8._s_0.Z = (double)(param_1->Velocity).field0_0x0._s_0.Z;
    local_a8._s_0.X = (double)(param_1->Velocity).field0_0x0._s_0.X;
    local_a8._s_0.Y = (double)(param_1->Velocity).field0_0x0._s_0.Y;
    if (uVar3 == '\x04') {
      local_a8._s_0.X = (param_1->Location).field0_0x0._s_0.X;
      local_a8._s_0.Y = (param_1->Location).field0_0x0._s_0.Y;
      local_a8._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
    }
    dVar8 = local_a8._s_0.Y * local_a8._s_0.Y + local_a8._s_0.X * local_a8._s_0.X +
            local_a8._s_0.Z * local_a8._s_0.Z;
    if (__real_3e45798ee0000000 < dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      local_a8._s_0.X = local_a8._s_0.X * dVar8;
      local_a8._s_0.Y = local_a8._s_0.Y * dVar8;
      local_a8._s_0.Z = local_a8._s_0.Z * dVar8;
    }
    local_60._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_60._s_0.Y = _UNK_150689518;
    local_60._s_0.Z = 0.0;
    UE::Math::TQuat<double>::FindBetweenNormals
              (local_48,(TVector<double> *)&local_60._s_0,(TVector<double> *)&local_a8._s_0);
    UE::Math::TQuat<double>::Euler(local_48,(TVector<double> *)&local_90._s_0);
    fVar1 = *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 4);
    *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7) =
         (float)((double)*(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7) +
                local_90._s_0.X);
    fVar2 = *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 8);
    *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 4) =
         (float)((double)fVar1 + local_90._s_0.Y);
    *(float *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 8) =
         (float)((double)fVar2 + local_90._s_0.Z);
  }
  FRawDistributionVector::GetValue
            (&this->MeshTypeData->RollPitchYawRange,(TVector<double> *)&local_78._s_0,param_3,
             (UObject *)0x0,0,&this->MeshTypeData->RandomStream);
  *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7) = (float)local_78._s_0.X;
  *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7 + 4) = (float)local_78._s_0.Y;
  *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7 + 8) = (float)local_78._s_0.Z;
  lVar7 = (longlong)this->MeshMotionBlurOffset;
  if (this->MeshMotionBlurOffset != 0) {
    iVar4 = this->MeshRotationOffset;
    *(float *)((longlong)&(param_1->BaseVelocity).field0_0x0 + lVar7) = param_1->Rotation;
    *(undefined8 *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7) =
         *(undefined8 *)&(param_1->Velocity).field0_0x0;
    *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7 + 8) =
         (param_1->Velocity).field0_0x0._s_0.Z;
    *(undefined8 *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7 + 0xc) =
         *(undefined8 *)&(param_1->Size).field0_0x0;
    *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + lVar7 + 0x14) =
         (param_1->Size).field0_0x0._s_0.Z;
    *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + lVar7) =
         *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + (longlong)iVar4);
    *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 8) =
         *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + (longlong)iVar4 + 8);
    if (*(int *)&this->field_0x40 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)
               ((longlong)&(param_1->OldLocation).field0_0x0 +
               (longlong)*(int *)&this->field_0x40 + 4);
    }
    *(undefined4 *)((longlong)&(param_1->BaseVelocity).field0_0x0 + lVar7 + 4) = uVar5;
    iVar4 = *(int *)&this->field_0x3c;
    if (iVar4 == 0) {
      *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 0xc) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar5 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      *(undefined8 *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 0xc) =
           *(undefined8 *)((longlong)&(param_1->OldLocation).field0_0x0 + (longlong)iVar4 + 0xc);
      uVar5 = *(float *)((longlong)&(param_1->OldLocation).field0_0x0 + (longlong)iVar4 + 0x14);
    }
    *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + lVar7 + 0x14) = uVar5;
  }
  return;
}

// RequiredBytes @ 14812a160

uint __thiscall FParticleMeshEmitterInstance::RequiredBytes(FParticleMeshEmitterInstance *this)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = FParticleEmitterInstance::RequiredBytes((FParticleEmitterInstance *)this);
  this->MeshRotationOffset = *(int *)&this->field_0x44 + uVar2;
  if (this->MeshTypeData != (UParticleModuleTypeDataMesh *)0x0) {
    cVar1 = (**(code **)(this->MeshTypeData->_padding_ + 0x3e0))();
    if (cVar1 != '\0') {
      this->MeshMotionBlurOffset = *(int *)&this->field_0x44 + uVar2 + 0x48;
      return uVar2 + 0x80;
    }
  }
  return uVar2 + 0x48;
}

// Resize @ 14812b3c0

bool __thiscall
FParticleMeshEmitterInstance::Resize(FParticleMeshEmitterInstance *this,int param_1,bool param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(int *)&this->field_0x194;
  bVar1 = FParticleEmitterInstance::Resize((FParticleEmitterInstance *)this,param_1,param_2);
  if (!bVar1) {
    return false;
  }
  if (this->MeshRotationActive != false) {
    for (; lVar3 < param_1; lVar3 = lVar3 + 1) {
      lVar2 = (longlong)
              (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + lVar3 * 2) *
                   *(int *)&this->field_0x188) + (longlong)this->MeshRotationOffset +
              *(longlong *)&this->field_0x168;
      *(undefined8 *)(lVar2 + 0x3c) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(lVar2 + 0x44) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
  }
  return true;
}

// SetMeshMaterials @ 148130740

void __thiscall
FParticleMeshEmitterInstance::SetMeshMaterials
          (FParticleMeshEmitterInstance *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                       ,0xec7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurrentMaterials,param_1);
  return;
}

// Tick @ 148139b90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleMeshEmitterInstance::Tick(FParticleMeshEmitterInstance *this,float param_1,bool param_2)

{
  uchar uVar1;
  int iVar2;
  UParticleModuleRequired *pUVar3;
  UParticleModule *pUVar4;
  FName FVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_MeshTickTime> FVar17;
  UParticleLODLevel *pUVar18;
  uint *puVar19;
  TVector<double> *pTVar20;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticles> FVar21;
  FThreadStats *pFVar22;
  FThreadStatsPool *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_MeshParticles> FVar24;
  ulonglong uVar25;
  longlong lVar26;
  double *pdVar27;
  ulonglong uVar28;
  FName FVar29;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  uchar auVar34 [8];
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  uint local_res20;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  FColor_u_0 local_160 [2];
  FName local_158;
  FName local_150;
  FName local_148;
  UParticleLODLevel *local_138;
  FName local_130;
  FName local_128;
  FStatMessage local_120;
  FStatMessage local_110;
  FName local_100;
  double local_f8;
  FName local_f0;
  FName local_e8;
  TVector<double>_u_0 local_e0;
  TQuat<double> local_c8;
  TVector<double> local_a8 [4];
  
  uVar28 = 0;
  FVar17 = StatPtr_STAT_MeshTickTime;
  if (StatPtr_STAT_MeshTickTime == (FThreadSafeStaticStat<FStat_STAT_MeshTickTime>)0x0) {
    pFVar16 = ::FName::FName(&local_100,"STAT_MeshTickTime");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_MeshTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshTickTime,*pFVar16,
                        L"Mesh Tick Time GT,AT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar17;
  bVar9 = false;
  bVar8 = false;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  bVar15 = false;
  bVar14 = false;
  if ((FVar29.ComparisonIndex.Value.Value != 0) || (FVar29.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar9 = false;
      bVar8 = true;
      bVar15 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_158.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xcb6);
        bVar9 = true;
        bVar8 = true;
        bVar15 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_150 = FVar29;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar14 = true;
      goto LAB_148139d13;
    }
  }
  bVar9 = bVar15;
  bVar8 = bVar14;
  bVar14 = false;
  local_150 = local_148;
  FVar29 = local_148;
LAB_148139d13:
  if ((((this->field_0x160 & 1) != 0) && (this->MeshMotionBlurOffset != 0)) &&
     (uVar25 = uVar28, uVar32 = uVar28, 0 < *(int *)&this->field_0x18c)) {
    do {
      lVar26 = (longlong)this->MeshMotionBlurOffset;
      lVar30 = (longlong)
               (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + uVar32) *
                    *(int *)&this->field_0x188) + *(longlong *)&this->field_0x168;
      iVar2 = this->MeshRotationOffset;
      *(undefined4 *)(lVar26 + 0x30 + lVar30) = *(undefined4 *)(lVar30 + 0x3c);
      *(undefined8 *)(lVar26 + lVar30) = *(undefined8 *)(lVar30 + 0x40);
      *(undefined4 *)(lVar26 + 8 + lVar30) = *(undefined4 *)(lVar30 + 0x48);
      *(undefined8 *)(lVar26 + 0xc + lVar30) = *(undefined8 *)(lVar30 + 0x60);
      *(undefined4 *)(lVar26 + 0x14 + lVar30) = *(undefined4 *)(lVar30 + 0x68);
      *(undefined8 *)(lVar26 + 0x18 + lVar30) = *(undefined8 *)((longlong)iVar2 + 0x18 + lVar30);
      *(undefined4 *)(lVar26 + 0x20 + lVar30) = *(undefined4 *)((longlong)iVar2 + 0x20 + lVar30);
      if (*(int *)&this->field_0x40 == 0) {
        uVar35 = 0;
      }
      else {
        uVar35 = *(undefined4 *)((longlong)*(int *)&this->field_0x40 + 4 + lVar30);
      }
      *(undefined4 *)(lVar26 + 0x34 + lVar30) = uVar35;
      iVar2 = *(int *)&this->field_0x3c;
      if (iVar2 == 0) {
        *(undefined8 *)(lVar26 + 0x24 + lVar30) =
             UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
        uVar35 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        *(undefined8 *)(lVar26 + 0x24 + lVar30) = *(undefined8 *)((longlong)iVar2 + 0xc + lVar30);
        uVar35 = *(float *)((longlong)iVar2 + 0x14 + lVar30);
      }
      uVar31 = (int)uVar25 + 1;
      *(undefined4 *)(lVar26 + 0x2c + lVar30) = uVar35;
      uVar25 = (ulonglong)uVar31;
      uVar32 = uVar32 + 2;
    } while ((int)uVar31 < *(int *)&this->field_0x18c);
  }
  pUVar18 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
  dVar13 = _UNK_150689518;
  dVar12 = ___xmm_00000000000000003ff0000000000000;
  dVar11 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  local_138 = pUVar18;
  if (((this->MeshRotationActive != false) && ((this->field_0x160 & 1) != 0)) &&
     (local_res20 = 0, uVar25 = uVar28, 0 < *(int *)&this->field_0x18c)) {
    do {
      lVar26 = (longlong)this->MeshRotationOffset;
      pdVar27 = (double *)
                ((longlong)
                 (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + uVar28) *
                      *(int *)&this->field_0x188) + *(longlong *)&this->field_0x168);
      *(undefined8 *)(lVar26 + 0x30 + (longlong)pdVar27) =
           *(undefined8 *)(lVar26 + 0x3c + (longlong)pdVar27);
      *(undefined4 *)(lVar26 + 0x38 + (longlong)pdVar27) =
           *(undefined4 *)(lVar26 + 0x44 + (longlong)pdVar27);
      pUVar3 = (pUVar18->RequiredModule).field0_0x0.DebugPtr;
      uVar1 = (pUVar3->ScreenAlignment).Value;
      if ((byte)(uVar1 - 3) < 2) {
        dVar7 = (double)(float)((ulonglong)pdVar27[8] >> 0x20);
        unique0x100002de = SUB84(dVar7,0);
        local_178 = (double)SUB84(pdVar27[8],0);
        unique0x100002e2 = (int)((ulonglong)dVar7 >> 0x20);
        local_168 = (undefined8)*(float *)(pdVar27 + 9);
        if (uVar1 == '\x03') {
          if ((pUVar3->bOrbitModuleAffectsVelocityAlignment != 0) &&
             (0 < (pUVar18->OrbitModules).ArrayNum)) {
            lVar30 = *(longlong *)&this->field_0x8;
            if ((*(int *)(lVar30 + 0x48) < 1) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar33 = (pUVar18->OrbitModules).ArrayNum - 1;
            lVar30 = **(longlong **)(lVar30 + 0x40);
            uVar31 = 0;
            if ((int)uVar33 < *(int *)(lVar30 + 0x98)) {
              uVar31 = ~uVar33 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pUVar4 = *(UParticleModule **)(*(longlong *)(lVar30 + 0x90) + (longlong)(int)uVar33 * 8)
            ;
            if ((pUVar4 == (UParticleModule *)0x0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("LastOrbit",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                                    ,0xcf3,L""), bVar15)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar19 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                      ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                              *)(*(longlong *)&this->field_0x8 + 0x60),pUVar4);
            uVar25 = (ulonglong)*puVar19;
            if (*puVar19 != 0) {
              dStack_170 = ((double)*(float *)(uVar25 + 0x10 + (longlong)pdVar27) + pdVar27[4]) -
                           ((double)*(float *)(uVar25 + 0x40 + (longlong)pdVar27) + pdVar27[1]);
              local_168 = ((double)*(float *)(uVar25 + 0x14 + (longlong)pdVar27) + pdVar27[5]) -
                          ((double)*(float *)(uVar25 + 0x44 + (longlong)pdVar27) + pdVar27[2]);
              local_178 = ((double)*(float *)(uVar25 + 0xc + (longlong)pdVar27) + pdVar27[3]) -
                          ((double)*(float *)(uVar25 + 0x3c + (longlong)pdVar27) + *pdVar27);
              dVar37 = dStack_170;
              dVar7 = local_178;
              goto LAB_14813a143;
            }
          }
LAB_14813a137:
          dVar37 = dStack_170;
          dVar7 = local_178;
        }
        else {
          if (uVar1 != '\x04') goto LAB_14813a137;
          dVar7 = *(double *)*(undefined1 (*) [16])(pdVar27 + 3);
          dVar37 = pdVar27[4];
          _local_178 = *(undefined1 (*) [16])(pdVar27 + 3);
          local_168 = pdVar27[5];
        }
LAB_14813a143:
        dVar36 = dVar37 * dVar37 + dVar7 * dVar7 + (double)local_168 * (double)local_168;
        if (dVar11 < dVar36) {
          local_f8 = dVar10 / SQRT(dVar36);
          local_168 = (double)local_168 * local_f8;
          dStack_170 = dVar37 * local_f8;
          local_178 = dVar7 * local_f8;
        }
        local_e0._s_0.Z = 0.0;
        local_e0._s_0.X = dVar12;
        local_e0._s_0.Y = dVar13;
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_c8,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_178);
        pTVar20 = UE::Math::TQuat<double>::Euler(&local_c8,local_a8);
        dVar7 = (pTVar20->field0_0x0)._s_0.Y;
        dVar37 = (pTVar20->field0_0x0)._s_0.Z;
        *(float *)(lVar26 + 0x18 + (longlong)pdVar27) =
             (float)(pTVar20->field0_0x0)._s_0.X + *(float *)(lVar26 + 0xc + (longlong)pdVar27) +
             *(float *)(lVar26 + 0x24 + (longlong)pdVar27);
        *(float *)(lVar26 + 0x1c + (longlong)pdVar27) =
             (float)dVar7 + *(float *)(lVar26 + 0x10 + (longlong)pdVar27) +
             *(float *)(lVar26 + 0x28 + (longlong)pdVar27);
        *(float *)(lVar26 + 0x20 + (longlong)pdVar27) =
             (float)dVar37 + *(float *)(lVar26 + 0x14 + (longlong)pdVar27) +
             *(float *)(lVar26 + 0x2c + (longlong)pdVar27);
        pUVar18 = local_138;
      }
      else {
        local_res20 = (uint)uVar25;
        if ((*(uint *)((longlong)pdVar27 + 0x6c) & 0x20000000) == 0) {
          *(float *)(lVar26 + 0x18 + (longlong)pdVar27) =
               *(float *)(lVar26 + 0x24 + (longlong)pdVar27) +
               *(float *)(lVar26 + 0xc + (longlong)pdVar27);
          *(float *)(lVar26 + 0x1c + (longlong)pdVar27) =
               *(float *)(lVar26 + 0x28 + (longlong)pdVar27) +
               *(float *)(lVar26 + 0x10 + (longlong)pdVar27);
          *(float *)(lVar26 + 0x20 + (longlong)pdVar27) =
               *(float *)(lVar26 + 0x2c + (longlong)pdVar27) +
               *(float *)(lVar26 + 0x14 + (longlong)pdVar27);
        }
      }
      local_res20 = local_res20 + 1;
      uVar28 = uVar28 + 2;
      FVar29 = local_150;
      uVar25 = (ulonglong)local_res20;
    } while ((int)local_res20 < *(int *)&this->field_0x18c);
  }
  uVar28 = 0;
  FParticleEmitterInstance::Tick((FParticleEmitterInstance *)this,param_1,param_2);
  if (((this->MeshRotationActive != false) && ((this->field_0x160 & 1) != 0)) &&
     (uVar25 = uVar28, 0 < *(int *)&this->field_0x18c)) {
    do {
      uVar31 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar31;
      lVar30 = (longlong)
               (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + uVar25) *
                    *(int *)&this->field_0x188) + (longlong)this->MeshRotationOffset;
      lVar26 = *(longlong *)&this->field_0x168;
      *(float *)(lVar30 + 0x28 + lVar26) =
           param_1 * *(float *)(lVar30 + 0x34 + lVar26) + *(float *)(lVar30 + 0x28 + lVar26);
      *(float *)(lVar30 + 0x2c + lVar26) =
           param_1 * *(float *)(lVar30 + 0x38 + lVar26) + *(float *)(lVar30 + 0x2c + lVar26);
      *(float *)(lVar30 + 0x24 + lVar26) =
           param_1 * *(float *)(lVar30 + 0x30 + lVar26) + *(float *)(lVar30 + 0x24 + lVar26);
      uVar25 = uVar25 + 2;
    } while ((int)uVar31 < *(int *)&this->field_0x18c);
  }
  auVar34 = (uchar  [8])(longlong)*(int *)&this->field_0x18c;
  if ((auVar34 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar21 = StatPtr_STAT_SpriteParticles;
    if (StatPtr_STAT_SpriteParticles == (FThreadSafeStaticStat<FStat_STAT_SpriteParticles>)0x0) {
      pFVar16 = ::FName::FName(&local_f0,"STAT_SpriteParticles");
      FVar21 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticles,*pFVar16,
                          L"Sprite Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar21;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_120.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_130 = FVar5;
      local_120.StatData.Pad = auVar34;
      local_120.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_120);
      FStatsTrace::Add(&local_130,-(longlong)auVar34);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  auVar34 = (uchar  [8])(longlong)*(int *)&this->field_0x18c;
  if ((auVar34 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar24 = StatPtr_STAT_MeshParticles;
    if (StatPtr_STAT_MeshParticles == (FThreadSafeStaticStat<FStat_STAT_MeshParticles>)0x0) {
      pFVar16 = ::FName::FName(&local_e8,"STAT_MeshParticles");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_MeshParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MeshParticles,*pFVar16,
                          L"Mesh Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar24;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar22 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar22 == (FThreadStats *)0x0) {
        pFVar23 = FThreadStatsPool::Get();
        pFVar22 = FThreadStatsPool::GetFromPool(pFVar23);
      }
      local_110.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_128 = FVar5;
      local_110.StatData.Pad = auVar34;
      local_110.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar22,&local_110);
      FStatsTrace::Add(&local_128,(long64)auVar34);
      if (pFVar22->ScopeCount == 0) {
        FThreadStats::Flush(pFVar22,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar22,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
  return;
}

// Tick_MaterialOverrides @ 14813b200

void __thiscall
FParticleMeshEmitterInstance::Tick_MaterialOverrides(FParticleMeshEmitterInstance *this,int param_1)

{
  int *piVar1;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong *local_res18;
  int *local_res20;
  longlong local_60;
  int local_58;
  
  (**(code **)(**(longlong **)&this->field_0x10 + 0xf0))(*(longlong **)&this->field_0x10,&local_60);
  if ((-1 < param_1) && (param_1 < local_58)) {
    uVar15 = 0;
    if (param_1 < local_58) {
      uVar15 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(longlong *)(local_60 + (longlong)param_1 * 8) != 0) {
      pFVar14 = (this->CurrentMaterials).AllocatorInstance.Data;
      iVar10 = (this->CurrentMaterials).ArrayNum;
      pFVar3 = pFVar14 + (longlong)iVar10 * 8;
      while( true ) {
        if ((this->CurrentMaterials).ArrayNum != iVar10) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar14 == pFVar3) break;
        uVar15 = 0;
        if (param_1 < local_58) {
          uVar15 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(undefined8 *)pFVar14 = *(undefined8 *)(local_60 + (longlong)param_1 * 8);
        pFVar14 = pFVar14 + 8;
      }
    }
  }
  lVar4 = *(longlong *)&this->field_0x18;
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) &&
     (lVar12 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))(), lVar12 != 0)) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar12 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
    uVar15 = *(uint *)(lVar4 + 0x148);
    plVar19 = (longlong *)(lVar12 + 0x168);
    if (0 < (int)uVar15) {
      pTVar2 = &this->CurrentMaterials;
      iVar10 = (this->CurrentMaterials).ArrayNum;
      piVar1 = &(this->CurrentMaterials).ArrayNum;
      local_res18 = plVar19;
      local_res20 = piVar1;
      if (iVar10 < (int)uVar15) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,uVar15 - iVar10,&pTVar2->AllocatorInstance,piVar1,
                           &(this->CurrentMaterials).ArrayMax);
        memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8,0,
               (longlong)(int)(uVar15 - iVar10) << 3);
      }
      else if ((int)uVar15 < iVar10) {
        uVar13 = iVar10 - uVar15;
        if (((int)(uVar15 | uVar13) < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar13 != 0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 8;
          iVar10 = (*piVar1 - uVar15) - uVar13;
          if (iVar10 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar13 * 8,(longlong)iVar10 << 3);
          }
          *piVar1 = *piVar1 - uVar13;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,*piVar1,&(this->CurrentMaterials).ArrayMax);
        }
      }
      uVar15 = 0;
      if (0 < *(int *)(lVar4 + 0x148)) {
        local_res8 = 0;
        do {
          iVar10 = (int)plVar19[1];
          uVar13 = 0;
          lVar12 = 0;
          if (0 < iVar10) {
            uVar18 = ~uVar15 >> 0x1f;
            lVar16 = 0;
            do {
              uVar17 = ~uVar13 >> 0x1f;
              uVar11 = 0;
              if ((int)uVar13 < iVar10) {
                uVar11 = uVar17;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar5 = *plVar19;
              uVar11 = 0;
              if ((int)uVar15 < *(int *)(lVar4 + 0x148)) {
                uVar11 = uVar18;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar10 = (int)local_res18[1];
              if (*(longlong *)(local_res8 + *(longlong *)(lVar4 + 0x140)) ==
                  *(longlong *)(lVar5 + lVar16)) {
                uVar11 = 0;
                if ((int)uVar13 < iVar10) {
                  uVar11 = uVar17;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                plVar19 = local_res18;
                uVar6 = *(undefined8 *)(*local_res18 + 8 + lVar12 * 0x10);
                uVar11 = 0;
                if ((int)uVar15 < *local_res20) {
                  uVar11 = uVar18;
                }
                if ((uVar11 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(undefined8 *)((pTVar2->AllocatorInstance).Data + local_res8) = uVar6;
                if ((-1 < (int)uVar13) && ((int)uVar13 < local_58)) {
                  uVar11 = 0;
                  if ((int)uVar13 < local_58) {
                    uVar11 = uVar17;
                  }
                  if ((uVar11 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                         ,0x14f,
                                         L"Array index out of bounds: %lld from an array of size %lld"
                                        ), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (*(longlong *)(local_60 + lVar12 * 8) != 0) {
                    uVar11 = 0;
                    if ((int)uVar13 < local_58) {
                      uVar11 = uVar17;
                    }
                    if ((uVar11 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                           ,0x14f,
                                           L"Array index out of bounds: %lld from an array of size %lld"
                                          ), bVar8)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    uVar6 = *(undefined8 *)(local_60 + lVar12 * 8);
                    uVar13 = 0;
                    if ((int)uVar15 < *local_res20) {
                      uVar13 = uVar18;
                    }
                    if ((uVar13 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    *(undefined8 *)((pTVar2->AllocatorInstance).Data + local_res8) = uVar6;
                  }
                }
                break;
              }
              uVar13 = uVar13 + 1;
              lVar12 = lVar12 + 1;
              lVar16 = lVar16 + 0x10;
              plVar19 = local_res18;
            } while ((int)uVar13 < iVar10);
          }
          local_res8 = local_res8 + 8;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < *(int *)(lVar4 + 0x148));
      }
    }
  }
  return;
}

// UpdateBoundingBox @ 1481400a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleMeshEmitterInstance::UpdateBoundingBox(FParticleMeshEmitterInstance *this,float param_1)

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined8 uVar3;
  byte bVar4;
  UStaticMesh *this_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  char cVar25;
  byte bVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds> FVar28;
  longlong lVar29;
  TBoxSphereBounds<double,double> *pTVar30;
  UParticleLODLevel *pUVar31;
  TTransform<double> *this_01;
  TMatrix<double> *pTVar32;
  FNameEntryId FVar33;
  ulonglong uVar34;
  FName FVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  FName local_380;
  FColor_u_0 local_378 [2];
  double local_370;
  double local_368;
  double local_360;
  FName local_358;
  FName local_350;
  double local_340;
  double dStack_338;
  double local_330;
  double dStack_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 local_308 [24];
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  FName local_2d8 [2];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  TMatrix<double> local_248;
  undefined1 local_198;
  undefined7 uStack_197;
  TBoxSphereBounds<double,double> local_190;
  TMatrix<double> local_158 [2];
  
  uVar34 = 0;
  FVar28 = StatPtr_STAT_ParticleUpdateBounds;
  if (StatPtr_STAT_ParticleUpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)0x0) {
    pFVar27 = ::FName::FName(local_2d8,"STAT_ParticleUpdateBounds");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateBounds,*pFVar27,
                        L"Update Bounds Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar28;
  bVar20 = false;
  bVar23 = false;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  bVar24 = false;
  bVar21 = false;
  FVar33 = FVar35.ComparisonIndex.Value;
  uVar37 = FVar35.Number;
  if ((FVar33.Value != 0) || (bVar19 = bVar20, bVar22 = bVar23, uVar37 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_378[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_378[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar20 = false;
      bVar23 = true;
      bVar24 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_380.ComparisonIndex.Value = FVar33.Value;
        local_380.Number = uVar37;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_380,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                   ,0xd6c);
        bVar20 = true;
        bVar23 = true;
        bVar24 = true;
        bVar21 = true;
      }
    }
    bVar19 = bVar20;
    bVar22 = bVar23;
    if (FThreadStats::bPrimaryEnable != false) {
      local_380.ComparisonIndex.Value = FVar33.Value;
      local_380.Number = uVar37;
      local_358 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar24 = true;
      goto LAB_148140211;
    }
  }
  bVar23 = bVar21;
  bVar20 = bVar24;
  bVar24 = false;
  local_358 = local_350;
  FVar35 = local_350;
LAB_148140211:
  if (0 < *(int *)&this->field_0x18c) {
    lVar29 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
    cVar25 = (**(code **)(**(longlong **)&this->field_0x10 + 0x100))();
    if (((cVar25 == '\0') && (lVar29 != 0)) && ((*(byte *)(lVar29 + 0xf4) & 2) == 0)) {
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
    lVar29 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
    local_2f0 = *(undefined4 *)(lVar29 + 0x40);
    uStack_2ec = *(undefined4 *)(lVar29 + 0x44);
    uStack_2e8 = *(undefined4 *)(lVar29 + 0x48);
    uStack_2e4 = *(undefined4 *)(lVar29 + 0x4c);
    local_2e0 = *(undefined4 *)(lVar29 + 0x50);
    uStack_2dc = *(undefined4 *)(lVar29 + 0x54);
    cVar25 = (**(code **)(**(longlong **)&this->field_0x10 + 0x100))();
    if ((cVar25 == '\0') &&
       (this_00 = (this->MeshTypeData->Mesh).field0_0x0.DebugPtr, this_00 != (UStaticMesh *)0x0)) {
      pTVar30 = UStaticMesh::GetBounds(this_00,&local_190);
      local_340 = (pTVar30->Origin).field0_0x0._s_0.X;
      dStack_338 = (pTVar30->Origin).field0_0x0._s_0.Y;
      local_330 = (pTVar30->Origin).field0_0x0._s_0.Z;
      dStack_328 = (pTVar30->BoxExtent).field0_0x0._s_0.X;
      local_320 = *(undefined4 *)((longlong)&(pTVar30->BoxExtent).field0_0x0 + 8);
      uStack_31c = *(undefined4 *)((longlong)&(pTVar30->BoxExtent).field0_0x0 + 0xc);
      uStack_318 = *(undefined4 *)((longlong)&(pTVar30->BoxExtent).field0_0x0 + 0x10);
      uStack_314 = *(undefined4 *)((longlong)&(pTVar30->BoxExtent).field0_0x0 + 0x14);
    }
    else {
      dStack_328 = 0.0;
      local_330 = 0.0;
      uStack_314 = 0;
      uStack_318 = 0;
      uStack_31c = 0;
      local_320 = 0;
      local_340 = 0.0;
      dStack_338 = 0.0;
    }
    pUVar31 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
    bVar26 = ((pUVar31->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
    if (bVar26 == 0) {
      pTVar32 = &local_248;
      local_248.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
      local_248.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
      local_248.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
      local_248.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
      local_248.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
      local_248.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
      local_248.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
      local_248.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
      local_248.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
      local_248.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
      local_248.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
      local_248.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
      local_248.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
      local_248.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
      local_248.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
      local_248.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
    }
    else {
      this_01 = (TTransform<double> *)(**(code **)(**(longlong **)&this->field_0x10 + 0x20))();
      pTVar32 = UE::Math::TTransform<double>::ToMatrixWithScale(this_01,local_158);
    }
    uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2c8 = pTVar32->M[0][0];
    dStack_2c0 = pTVar32->M[0][1];
    local_2b8 = pTVar32->M[0][2];
    dStack_2b0 = pTVar32->M[0][3];
    local_2a8 = pTVar32->M[1][0];
    dStack_2a0 = pTVar32->M[1][1];
    local_298 = pTVar32->M[1][2];
    dStack_290 = pTVar32->M[1][3];
    local_288 = pTVar32->M[2][0];
    dStack_280 = pTVar32->M[2][1];
    local_278 = pTVar32->M[2][2];
    dStack_270 = pTVar32->M[2][3];
    local_268 = pTVar32->M[3][0];
    dStack_260 = pTVar32->M[3][1];
    local_258 = pTVar32->M[3][2];
    dStack_250 = pTVar32->M[3][3];
    if (bVar21) {
      *(double *)&this->field_0x1d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)&this->field_0x1e0 = uVar3;
      *(double *)&this->field_0x1e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this->field_0x1f0 = 0;
      *(undefined8 *)&this->field_0x1c0 = *(undefined8 *)&this->field_0x1d8;
      *(undefined8 *)&this->field_0x1c8 = *(undefined8 *)&this->field_0x1e0;
      *(undefined8 *)&this->field_0x1d0 = *(undefined8 *)&this->field_0x1e8;
    }
    local_370 = __real_4290000000000000;
    local_368 = __real_c290000000000000;
    local_360 = __real_c290000000000000;
    bVar4 = *(byte *)(*(longlong *)&this->field_0x8 + 0x37);
    uVar38 = uVar34;
    dVar7 = __real_4290000000000000;
    dVar16 = __real_c290000000000000;
    dVar17 = __real_4290000000000000;
    dVar8 = __real_4290000000000000;
    dVar41 = __real_c290000000000000;
    dVar42 = __real_4290000000000000;
    if (0 < *(int *)&this->field_0x18c) {
      do {
        fVar39 = __real_40c90fdb;
        dVar8 = __real_3fe0000000000000;
        lVar29 = *(longlong *)&this->field_0x168;
        lVar36 = (longlong)
                 (int)((uint)*(ushort *)(*(longlong *)&this->field_0x170 + uVar34) *
                      *(int *)&this->field_0x188);
        uVar34 = uVar34 + 2;
        uVar37 = *(uint *)(lVar36 + 0x6c + lVar29);
        pauVar1 = (undefined1 (*) [16])(lVar36 + 0x18 + lVar29);
        uVar3 = *(undefined8 *)*pauVar1;
        uVar18 = *(undefined8 *)(*pauVar1 + 8);
        auVar5 = *pauVar1;
        local_308._0_16_ = *pauVar1;
        dVar43 = *(double *)(lVar36 + 0x28 + lVar29);
        *(uint *)(lVar36 + 0x6c + lVar29) = uVar37 & 0xfdffffff;
        *(undefined8 *)(lVar36 + lVar29) = uVar3;
        ((undefined8 *)(lVar36 + lVar29))[1] = uVar18;
        *(double *)(lVar36 + 0x10 + lVar29) = dVar43;
        if (((uVar37 >> 0x19 & 1) == 0) || ((~bVar4 & 1) == 0)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (((uVar37 >> 0x1a & 1) != 0) || (bVar19)) {
          fVar40 = *(float *)(lVar36 + 0x3c + lVar29);
          local_308._0_16_ = auVar5;
        }
        else {
          if ((uVar37 >> 0x1c & 1) == 0) {
            uVar3 = *(undefined8 *)(lVar36 + 0x40 + lVar29);
            dVar41 = (double)param_1;
            pdVar2 = (double *)(lVar36 + 0x18 + lVar29);
            dVar42 = (double)(float)((ulonglong)uVar3 >> 0x20) * dVar41 + pdVar2[1];
            dVar43 = (double)*(float *)(lVar36 + 0x48 + lVar29) * dVar41 +
                     *(double *)(lVar36 + 0x28 + lVar29);
            local_308._8_4_ = SUB84(dVar42,0);
            local_308._0_8_ = (double)(float)uVar3 * dVar41 + *pdVar2;
            local_308._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          }
          fVar40 = *(float *)(lVar36 + 0x3c + lVar29);
          if ((uVar37 >> 0x1d & 1) == 0) {
            fVar40 = param_1 * *(float *)(lVar36 + 0x5c + lVar29) + fVar40;
          }
        }
        dVar43 = dVar43 + *(double *)&this->field_0x258;
        dVar12 = (double)local_308._8_8_ + *(double *)&this->field_0x250;
        dVar11 = ((local_340 + dStack_328) - (local_340 - dStack_328)) * dVar8 *
                 (double)*(float *)(lVar36 + 0x60 + lVar29) * (double)CONCAT44(uStack_2ec,local_2f0)
        ;
        dVar15 = (double)local_308._0_8_ + *(double *)&this->field_0x248;
        dVar13 = ((dStack_338 + (double)CONCAT44(uStack_31c,local_320)) -
                 (dStack_338 - (double)CONCAT44(uStack_31c,local_320))) * dVar8 *
                 (double)*(float *)(lVar36 + 100 + lVar29) * (double)CONCAT44(uStack_2e4,uStack_2e8)
        ;
        *(double *)(lVar36 + lVar29) = *(double *)&this->field_0x248 + *(double *)(lVar36 + lVar29);
        *(double *)(lVar36 + 8 + lVar29) =
             *(double *)(lVar36 + 8 + lVar29) + *(double *)&this->field_0x250;
        *(double *)(lVar36 + 0x10 + lVar29) =
             *(double *)&this->field_0x258 + *(double *)(lVar36 + 0x10 + lVar29);
        dVar14 = ((local_330 + (double)CONCAT44(uStack_314,uStack_318)) -
                 (local_330 - (double)CONCAT44(uStack_314,uStack_318))) * dVar8 *
                 (double)*(float *)(lVar36 + 0x68 + lVar29) * (double)CONCAT44(uStack_2dc,local_2e0)
        ;
        fVar39 = FGenericPlatformMath::Fmod(fVar40,fVar39);
        *(float *)(lVar36 + 0x3c + lVar29) = fVar39;
        *(double *)(lVar36 + 0x18 + lVar29) = dVar15;
        *(double *)(lVar36 + 0x20 + lVar29) = dVar12;
        *(double *)(lVar36 + 0x28 + lVar29) = dVar43;
        dVar8 = dVar7;
        dVar41 = dVar16;
        dVar42 = dVar17;
        dVar10 = local_360;
        if (bVar21) {
          if (bVar26 != 0) {
            dVar8 = dVar15 * dStack_2c0;
            dVar42 = dVar15 * local_2b8;
            dVar41 = dVar12 * local_298;
            dVar15 = dVar12 * local_2a8 + dVar15 * local_2c8 + dVar43 * local_288 +
                     __real_3ff0000000000000 * local_268;
            dVar12 = dVar12 * dStack_2a0 + dVar8 + dVar43 * dStack_280 +
                     __real_3ff0000000000000 * dStack_260;
            dVar43 = dVar41 + dVar42 + dVar43 * local_278 + __real_3ff0000000000000 * local_258;
          }
          dVar8 = dVar15 - dVar11;
          dVar41 = dVar11 + dVar15;
          if (dVar7 <= dVar8) {
            dVar8 = dVar7;
          }
          if (dVar41 <= dVar16) {
            dVar41 = dVar16;
          }
          dVar42 = dVar12 - dVar13;
          dVar12 = dVar12 + dVar13;
          if (dVar17 <= dVar42) {
            dVar42 = dVar17;
          }
          if (dVar12 <= local_368) {
            dVar12 = local_368;
          }
          dVar7 = dVar43 - dVar14;
          dVar10 = dVar43 + dVar14;
          if (local_370 <= dVar7) {
            dVar7 = local_370;
          }
          local_370 = dVar7;
          local_368 = dVar12;
          if (dVar10 <= local_360) {
            dVar10 = local_360;
          }
        }
        local_360 = dVar10;
        uVar37 = (int)uVar38 + 1;
        FVar35 = local_358;
        uVar38 = (ulonglong)uVar37;
        dVar7 = dVar8;
        dVar16 = dVar41;
        dVar17 = dVar42;
        bVar19 = bVar20;
        bVar22 = bVar23;
      } while ((int)uVar37 < *(int *)&this->field_0x18c);
    }
    if (bVar21) {
      auVar5._8_4_ = SUB84(dVar42,0);
      auVar5._0_8_ = dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      *(undefined1 (*) [16])&this->field_0x1c0 = auVar5;
      local_198 = 1;
      auVar9._8_4_ = SUB84(dVar41,0);
      auVar9._0_8_ = local_370;
      auVar9._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
      *(undefined1 (*) [16])&this->field_0x1d0 = auVar9;
      auVar6._8_4_ = SUB84(local_360,0);
      auVar6._0_8_ = local_368;
      auVar6._12_4_ = (int)((ulonglong)local_360 >> 0x20);
      *(undefined1 (*) [16])&this->field_0x1e0 = auVar6;
      *(ulonglong *)&this->field_0x1f0 = CONCAT71(uStack_197,1);
    }
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar24) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  return;
}

