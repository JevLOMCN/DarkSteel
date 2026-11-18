// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FSkeletalMeshObjectCPUSkin @ 1486216e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectCPUSkin * __thiscall
FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectCPUSkin
          (FSkeletalMeshObjectCPUSkin *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  TArray<FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_> *pTVar1;
  FSkeletalMeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSkeletalMeshObjectCPUSkin *pFVar6;
  FSkelMeshComponentLODInfo *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  FSkeletalMeshObjectLOD *this_00;
  
  FSkeletalMeshObject::FSkeletalMeshObject((FSkeletalMeshObject *)this,param_1,param_2,param_3);
  uVar10 = 0;
  this->CachedVertexLOD = -1;
  pTVar1 = &this->LODs;
  this->DynamicData = (FDynamicSkelMeshObjectDataCPUSkin *)0x0;
  this->bRenderOverlayMaterial = false;
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectCPUSkin__6B_;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  (this->CachedFinalVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedFinalVertices).ArrayNum = 0;
  (this->CachedFinalVertices).ArrayMax = 0;
  (this->BonesOfInterest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BonesOfInterest).ArrayNum = 0;
  (this->BonesOfInterest).ArrayMax = 0;
  (this->MorphTargetOfInterest).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MorphTargetOfInterest).ArrayNum = 0;
  (this->MorphTargetOfInterest).ArrayMax = 0;
  uVar11 = uVar10;
  if (0 < (param_2->LODRenderData).Array.ArrayNum) {
    do {
      uVar5 = (this->LODs).ArrayNum;
      if (uVar5 == (this->LODs).ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x460,8,&pTVar1->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      (this->LODs).ArrayNum = uVar5 + 1;
      uVar8 = 0;
      if ((int)uVar5 < (int)(uVar5 + 1)) {
        uVar8 = ~uVar5 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSkeletalMeshObjectCPUSkin *)(*pcVar3)();
        return pFVar6;
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x460;
      if (pFVar9 != (FScriptContainerElement *)0x0) {
        *(FSkeletalMeshRenderData **)pFVar9 = param_2;
        *(int *)(pFVar9 + 8) = (int)uVar11;
        FLocalVertexFactory::FLocalVertexFactory
                  ((FLocalVertexFactory *)(pFVar9 + 0x10),param_3,"FSkeletalMeshObjectLOD");
        FStaticMeshVertexBuffer::FStaticMeshVertexBuffer
                  ((FStaticMeshVertexBuffer *)(pFVar9 + 0x240));
        FPositionVertexBuffer::FPositionVertexBuffer((FPositionVertexBuffer *)(pFVar9 + 0x2f8));
        *(undefined8 *)(pFVar9 + 0x348) = 0;
        *(undefined8 *)(pFVar9 + 0x350) = 0;
        FRayTracingGeometry::FRayTracingGeometry((FRayTracingGeometry *)(pFVar9 + 0x358));
        pFVar9[0x458] = (FScriptContainerElement)0x0;
      }
      uVar5 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar5;
    } while ((int)uVar5 < (param_2->LODRenderData).Array.ArrayNum);
  }
  uVar11 = uVar10;
  uVar13 = uVar10;
  if ((this->LODs).ArrayNum < 1) {
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  }
  else {
    do {
      uVar8 = (uint)uVar10;
      uVar12 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->LODs).ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSkeletalMeshObjectCPUSkin *)(*pcVar3)();
        return pFVar6;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((pTVar1->AllocatorInstance).Data + uVar13);
      pFVar2 = this_00->SkelMeshRenderData;
      uVar5 = 0;
      if ((int)uVar8 < (pFVar2->LODRenderData).Array.ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FSkeletalMeshObjectCPUSkin *)(*pcVar3)();
        return pFVar6;
      }
      if (*(int *)(*(longlong *)((pFVar2->LODRenderData).Array.AllocatorInstance.Data + uVar11 * 8)
                  + 300) != 0) {
        if (((int)uVar8 < 0) || ((param_1->LODInfo).ArrayNum <= (int)uVar8)) {
          pFVar7 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar8 < (param_1->LODInfo).ArrayNum) {
            uVar5 = uVar12;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FSkeletalMeshObjectCPUSkin *)(*pcVar3)();
            return pFVar6;
          }
          pFVar7 = (param_1->LODInfo).DataPtr + (int)uVar8;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar7);
      }
      uVar10 = (ulonglong)(uVar8 + 1);
      uVar11 = uVar11 + 1;
      uVar13 = uVar13 + 0x460;
    } while ((int)(uVar8 + 1) < (this->LODs).ArrayNum);
    *(undefined1 *)((longlong)&this->_padding_ + 6) = 0;
  }
  return this;
}

// FSkeletalMeshObjectCPUSkin @ 1486219f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectCPUSkin * __thiscall
FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectCPUSkin
          (FSkeletalMeshObjectCPUSkin *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshObjectCPUSkin(this,pFVar1,param_2,param_3);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectCPUSkin__6B_;
  return this;
}

// ~FSkeletalMeshObjectCPUSkin @ 148625100

void __thiscall
FSkeletalMeshObjectCPUSkin::~FSkeletalMeshObjectCPUSkin(FSkeletalMeshObjectCPUSkin *this)

{
  FDynamicSkelMeshObjectDataCPUSkin *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FSkeletalMeshObjectCPUSkin__6B_;
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar2 = (this->MorphTargetOfInterest).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->BonesOfInterest).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CachedFinalVertices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FSkeletalMeshObjectCPUSkin::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7FSkeletalMeshObject__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FSkeletalMeshObject::FSkelMeshObjectLODInfo,int>
            ((FSkelMeshObjectLODInfo *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  return;
}

// operator() @ 148629020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectCPUSkin::Update'::__l6::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FSkeletalMeshObjectCPUSkin *this_00;
  FDynamicSkelMeshObjectDataCPUSkin *pFVar3;
  FDynamicSkelMeshObjectDataCPUSkin *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FName FVar11;
  FNameEntryId FVar12;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FStatMessage local_38;
  
  bVar6 = false;
  bVar8 = false;
  pFVar2 = *(FName **)(*(longlong *)this + 0x68);
  FVar11 = *pFVar2;
  FVar12 = FVar11.ComparisonIndex.Value;
  uVar10 = FVar11.Number;
  if ((FVar12.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar2[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                   ,0xa1);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar12.Value;
      local_res20.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar7 = true;
      goto LAB_1486290f7;
    }
  }
  bVar7 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_1486290f7:
  this_00 = *(FSkeletalMeshObjectCPUSkin **)this;
  pFVar3 = *(FDynamicSkelMeshObjectDataCPUSkin **)((longlong)this + 0x18);
  pFVar4 = this_00->DynamicData;
  if (pFVar4 != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  this_00->DynamicData = pFVar3;
  if (pFVar3 == (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                       ,0xbe,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FSkeletalMeshObjectCPUSkin::CacheVertices(this_00,this_00->DynamicData->LODIndex,true,param_1);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_38.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_38);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// CacheVertices @ 148630490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectCPUSkin::CacheVertices
          (FSkeletalMeshObjectCPUSkin *this,int param_1,bool param_2,FRHICommandList *param_3)

{
  FFinalSkinVertex *pFVar1;
  undefined8 *puVar2;
  FVector2DHalf *this_00;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  FFinalSkinVertex *pFVar7;
  FDynamicSkelMeshObjectDataCPUSkin *pFVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  code *pcVar11;
  TVector2<double>_u_0 TVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FSkeletalMeshObjectCPUSkin *pFVar24;
  FSkeletalMeshLODRenderData *pFVar25;
  FRHICommandListBase *pFVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  FName *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_CPUSkinUpdateRTTime> FVar32;
  FThreadSafeStaticStat<FStat_STAT_SkinningTime> FVar33;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  float fVar34;
  double *pdVar35;
  ulonglong uVar36;
  FNameEntryId FVar37;
  uint uVar38;
  FName FVar39;
  longlong lVar40;
  TArray<FFinalSkinVertex,TSizedDefaultAllocator<32>_> *pTVar41;
  ForAnyElementType FVar42;
  int *piVar43;
  FName FVar44;
  uint uVar45;
  uint uVar46;
  FScriptContainerElement *pFVar47;
  undefined1 in_XMM1 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auStackY_378 [32];
  undefined1 local_316 [6];
  FSkeletalMeshObjectCPUSkin *local_310;
  TArray<FFinalSkinVertex,TSizedDefaultAllocator<32>_> *local_308;
  FName local_300;
  FSkeletalMeshLODRenderData *local_2f8;
  TVector2<float>_u_0 local_2f0;
  int *local_2e8;
  FScriptContainerElement *local_2e0;
  ForAnyElementType local_2d8;
  uint local_2d0;
  int local_2cc;
  FColor_u_0 local_2c8;
  FColor_u_0 local_2c4;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_288;
  undefined8 local_278;
  float local_270;
  undefined8 local_26c;
  float local_264;
  undefined8 local_260;
  float local_258;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_238;
  TVector<float>_u_0 local_228;
  LARGE_INTEGER local_218;
  FRHICommandListBase *local_210;
  FStatMessage local_208;
  FName local_1f8;
  FName local_1f0;
  FMorphTargetDeltaIterator local_1e8;
  FDataType local_1a8;
  ulonglong local_d0;
  
  local_d0 = __security_cookie.value ^ (ulonglong)auStackY_378;
  FVar32 = StatPtr_STAT_CPUSkinUpdateRTTime;
  local_310 = this;
  local_210 = (FRHICommandListBase *)param_3;
  if (StatPtr_STAT_CPUSkinUpdateRTTime == (FThreadSafeStaticStat<FStat_STAT_CPUSkinUpdateRTTime>)0x0
     ) {
    pFVar31 = ::FName::FName(&local_1f8,"STAT_CPUSkinUpdateRTTime");
    FVar32 = (FThreadSafeStaticStat<FStat_STAT_CPUSkinUpdateRTTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CPUSkinUpdateRTTime,*pFVar31,
                        L"Update CPU Skin","STATGROUP_SceneUpdate","STATCAT_Advanced",
                        L"Scene Update",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar44 = *(FName *)FVar32;
  bVar17 = false;
  bVar20 = false;
  local_298.ComparisonIndex.Value = 0;
  local_298.Number = 0;
  bVar27 = false;
  bVar28 = false;
  FVar37 = FVar44.ComparisonIndex.Value;
  fVar34 = (float)FVar44.Number;
  if ((FVar37.Value == 0) && (fVar34 == 0.0)) {
LAB_148630605:
    bVar20 = bVar28;
    bVar17 = bVar27;
    bVar27 = false;
    local_2a0 = local_298;
    FVar44 = local_298;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2c8._s_0,(char *)*(FName *)((longlong)FVar32 + 0x10));
      bVar17 = false;
      bVar20 = true;
      bVar27 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2b0.ComparisonIndex.Value = FVar37.Value;
        local_2b0.Number = (uint)fVar34;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2b0,(wchar_t *)*(FName *)((longlong)FVar32 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                   ,0xdd);
        bVar17 = true;
        bVar20 = true;
        bVar27 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148630605;
    local_2f0._s_0.X = (float)FVar37.Value;
    local_2f0._4_4_ = fVar34;
    local_2a0 = FVar44;
    FThreadStats::AddMessage(FVar44,CycleScopeStart);
    bVar27 = true;
  }
  bVar28 = IsInParallelRenderingThread();
  if ((!bVar28) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                          ,0xde,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  plVar5 = (longlong *)this->_padding_;
  uVar38 = (uint)~param_1 >> 0x1f;
  uVar45 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar45 = uVar38;
  }
  if ((uVar45 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar24 = local_310;
  local_2f8 = *(FSkeletalMeshLODRenderData **)(*plVar5 + (longlong)param_1 * 8);
  uVar45 = 0;
  if (param_1 < (local_310->LODs).ArrayNum) {
    uVar45 = uVar38;
  }
  if ((uVar45 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar47 = (pFVar24->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x460;
  local_2e0 = pFVar47;
  if ((((param_1 == pFVar24->CachedVertexLOD) && (!param_2)) ||
      (pFVar24->DynamicData == (FDynamicSkelMeshObjectDataCPUSkin *)0x0)) ||
     ((*(longlong *)(pFVar47 + 0x280) == 0 || (*(longlong *)(pFVar47 + 0x2a8) == 0))))
  goto LAB_1486317d3;
  uVar45 = 0;
  if (param_1 < (int)pFVar24->_padding_) {
    uVar45 = uVar38;
  }
  if ((uVar45 == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar25 = local_2f8;
  pFVar6 = (pFVar24->DynamicData->ReferenceToLocal).AllocatorInstance.Data;
  local_308 = &pFVar24->CachedFinalVertices;
  uVar45 = (local_2f8->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
  if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
  }
  local_2e8 = &(pFVar24->CachedFinalVertices).ArrayNum;
  piVar43 = &(pFVar24->CachedFinalVertices).ArrayMax;
  *local_2e8 = 0;
  if (*piVar43 != uVar45) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,uVar45,&local_308->AllocatorInstance,0,piVar43);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,uVar45,&local_308->AllocatorInstance,local_2e8,piVar43);
  pFVar7 = (FFinalSkinVertex *)(local_308->AllocatorInstance).Data;
  if (pFVar7 != (FFinalSkinVertex *)0x0) {
    bVar28 = FStaticMeshVertexBuffer::GetAllowCPUAccess
                       (&(pFVar25->StaticVertexBuffers).StaticMeshVertexBuffer);
    if ((!bVar28) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("false || LOD.StaticVertexBuffers.StaticMeshVertexBuffer.GetAllowCPUAccess()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                            ,0xf9,L""), bVar28)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar33 = StatPtr_STAT_SkinningTime;
    if (StatPtr_STAT_SkinningTime == (FThreadSafeStaticStat<FStat_STAT_SkinningTime>)0x0) {
      pFVar31 = ::FName::FName(&local_1f0,"STAT_SkinningTime");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_SkinningTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SkinningTime,*pFVar31,
                          L"Skel Skin Time","STATGROUP_Engine","STATCAT_Advanced",L"Engine",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    FVar39 = *(FName *)FVar33;
    local_288.ComparisonIndex.Value = 0;
    local_288.Number = 0;
    bVar18 = false;
    bVar28 = false;
    if ((FVar39.ComparisonIndex.Value.Value == 0) && (FVar39.Number == 0)) {
LAB_148630969:
      bVar19 = false;
      FVar39 = local_288;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2c4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2c4._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
        bVar18 = false;
        bVar28 = true;
        if (-1 < CpuChannel->Enabled) {
          local_2a8.ComparisonIndex.Value = FVar39.ComparisonIndex.Value.Value;
          local_2a8.Number = FVar39.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2a8,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                     ,0xfa);
          bVar18 = true;
          bVar28 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_148630969;
      local_300 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar19 = true;
    }
    uVar45 = (local_2f8->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords;
    if ((local_2f8->StaticVertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
      if (uVar45 == 1) {
        pFVar8 = local_310->DynamicData;
        SkinVertices<TGPUSkinVertexFloat16Uvs<1>,1>
                  (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                   *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                   &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,
                   pFVar8->ClothBlendWeight,&pFVar8->WorldToLocal,
                   (TVector<double> *)&local_310->_padding_);
      }
      else if (uVar45 == 2) {
        pFVar8 = local_310->DynamicData;
        SkinVertices<TGPUSkinVertexFloat16Uvs<2>,2>
                  (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                   *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                   &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,
                   pFVar8->ClothBlendWeight,&pFVar8->WorldToLocal,
                   (TVector<double> *)&local_310->_padding_);
      }
      else if (uVar45 == 3) {
        pFVar8 = local_310->DynamicData;
        SkinVertices<TGPUSkinVertexFloat16Uvs<3>,3>
                  (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                   *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                   &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,
                   pFVar8->ClothBlendWeight,&pFVar8->WorldToLocal,
                   (TVector<double> *)&local_310->_padding_);
      }
      else if (uVar45 == 4) {
        pFVar8 = local_310->DynamicData;
        SkinVertices<TGPUSkinVertexFloat16Uvs<4>,4>
                  (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                   *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                   &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,
                   pFVar8->ClothBlendWeight,&pFVar8->WorldToLocal,
                   (TVector<double> *)&local_310->_padding_);
      }
      else {
        bVar29 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                            ,0x103,L"Invalid number of UV sets.  Must be between 1 and 4");
        if (bVar29) goto code_r0x000148630bf8;
      }
    }
    else if (uVar45 == 1) {
      pFVar8 = local_310->DynamicData;
      SkinVertices<TGPUSkinVertexFloat32Uvs<1>,1>
                (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                 *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                 &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,pFVar8->ClothBlendWeight,
                 &pFVar8->WorldToLocal,(TVector<double> *)&local_310->_padding_);
    }
    else if (uVar45 == 2) {
      pFVar8 = local_310->DynamicData;
      SkinVertices<TGPUSkinVertexFloat32Uvs<2>,2>
                (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                 *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                 &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,pFVar8->ClothBlendWeight,
                 &pFVar8->WorldToLocal,(TVector<double> *)&local_310->_padding_);
    }
    else if (uVar45 == 3) {
      pFVar8 = local_310->DynamicData;
      SkinVertices<TGPUSkinVertexFloat32Uvs<3>,3>
                (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                 *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                 &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,pFVar8->ClothBlendWeight,
                 &pFVar8->WorldToLocal,(TVector<double> *)&local_310->_padding_);
    }
    else if (uVar45 == 4) {
      pFVar8 = local_310->DynamicData;
      SkinVertices<TGPUSkinVertexFloat32Uvs<4>,4>
                (pFVar7,(TMatrix<float> *)pFVar6,pFVar8->LODIndex,local_2f8,
                 *(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&pFVar8->ActiveMorphTargets,
                 &pFVar8->MorphTargetWeights,&pFVar8->ClothSimulUpdateData,pFVar8->ClothBlendWeight,
                 &pFVar8->WorldToLocal,(TVector<double> *)&local_310->_padding_);
    }
    else {
      bVar29 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                          ,0xff,L"Invalid number of UV sets.  Must be between 1 and 4");
      if (bVar29) {
code_r0x000148630bf8:
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (local_310->bRenderOverlayMaterial != false) {
      uVar45 = (local_310->MorphTargetOfInterest).ArrayNum;
      if ((int)uVar45 < 1) {
        local_2c0.ArrayNum = (local_310->BonesOfInterest).ArrayNum;
        lVar40 = (longlong)local_2c0.ArrayNum;
        pFVar6 = (local_310->BonesOfInterest).AllocatorInstance.Data;
        local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_2c0.ArrayNum == 0) {
          local_2c0.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_2c0.ArrayNum,0,&local_2c0.AllocatorInstance,local_2c0.ArrayNum,
                     &local_2c0.ArrayMax);
          memcpy(local_2c0.AllocatorInstance.Data,pFVar6,lVar40 << 2);
        }
        CalculateBoneWeights
                  (pFVar7,local_2f8,*(FSkinWeightVertexBuffer **)(pFVar47 + 0x348),&local_2c0);
      }
      else {
        pFVar47 = (local_310->MorphTargetOfInterest).AllocatorInstance.Data;
        local_2d8.Data = (FScriptContainerElement *)0x0;
        local_2d0 = uVar45;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar45,0,&local_2d8,uVar45,&local_2cc);
        memcpy(local_2d8.Data,pFVar47,(longlong)(int)uVar45 << 3);
        uVar38 = local_2d0;
        uVar45 = (local_2f8->StaticVertexBuffers).PositionVertexBuffer.NumVertices;
        if (pFVar7 != pFVar7 + uVar45) {
          pdVar35 = &pFVar7->TextureCoordinates[0].field0_0x0._s_0.Y;
          do {
            ((TVector2<double>_u_0_s_0 *)(pdVar35 + -1))->X = 0.0;
            *pdVar35 = 0.0;
            pFVar1 = (FFinalSkinVertex *)(pdVar35 + 7);
            pdVar35 = pdVar35 + 0xc;
          } while (pFVar1 != pFVar7 + uVar45);
        }
        dVar15 = _UNK_150689688;
        dVar14 = ___xmm_3ff00000000000003ff0000000000000;
        uVar36 = (ulonglong)(int)local_2d0;
        pFVar6 = local_2d8.Data + uVar36 * 8;
        FVar42.Data = local_2d8.Data;
        while( true ) {
          if ((uint)uVar36 != uVar38) {
            local_316[0] = 0;
            `TCheckedPointerIterator<UMorphTarget_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_316);
          }
          pFVar47 = local_2e0;
          if (FVar42.Data == pFVar6) break;
          (**(code **)(**(longlong **)FVar42.Data + 0x2c0))(*(longlong **)FVar42.Data,&local_1e8);
          while (local_1e8.Token != 0xffffffffffffffff) {
            dVar13 = pFVar7[local_1e8.CurrentDelta.SourceIdx].TextureCoordinates[0].field0_0x0._s_0.
                     Y + dVar15;
            TVar12._8_4_ = SUB84(dVar13,0);
            TVar12._s_0.X =
                 pFVar7[local_1e8.CurrentDelta.SourceIdx].TextureCoordinates[0].field0_0x0._s_0.X +
                 dVar14;
            TVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
            pFVar7[local_1e8.CurrentDelta.SourceIdx].TextureCoordinates[0].field0_0x0 = TVar12;
            FMorphTargetDeltaIterator::Advance(&local_1e8);
          }
          uVar36 = (ulonglong)local_2d0;
          FVar42.Data = FVar42.Data + 8;
        }
        if (local_2d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data);
        }
      }
    }
    if (bVar28) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar19) && (FVar39 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_01 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_01 == (FThreadStats *)0x0) {
        this_02 = FThreadStatsPool::Get();
        this_01 = FThreadStatsPool::GetFromPool(this_02);
      }
      if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
        local_208.NameAndInfo.Index = FVar39.ComparisonIndex.Value;
        local_208.NameAndInfo.Number = FVar39.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_218);
        local_208.StatData.Pad[4] = '\0';
        local_208.StatData.Pad[5] = '\0';
        local_208.StatData.Pad[6] = '\0';
        local_208.StatData.Pad[7] = '\0';
        local_208.StatData.Pad[0] = local_218.s.LowPart._0_1_;
        local_208.StatData.Pad[1] = local_218.s.LowPart._1_1_;
        local_208.StatData.Pad[2] = local_218.s.LowPart._2_1_;
        local_208.StatData.Pad[3] = local_218.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_01,&local_208);
        piVar43 = &this_01->ScopeCount;
        *piVar43 = *piVar43 + -1;
        if (*piVar43 == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
  }
  pTVar41 = local_308;
  pFVar24 = local_310;
  uVar45 = (local_310->CachedFinalVertices).ArrayNum;
  local_310->CachedVertexLOD = param_1;
  if (((local_2f8->StaticVertexBuffers).PositionVertexBuffer.NumVertices != uVar45) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("LOD.GetNumVertices() == CachedFinalVertices.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                          ,0x11a,L""), bVar28)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  fVar23 = _UNK_15104007c;
  fVar22 = _UNK_151040078;
  fVar21 = _UNK_151040074;
  fVar34 = ___xmm_3c0102043c0102043c0102043c010204;
  uVar36 = 0;
  if (0 < (pFVar24->CachedFinalVertices).ArrayNum) {
    piVar43 = &pTVar41->ArrayNum;
    local_300.ComparisonIndex.Value = 0;
    local_300.Number = 0;
    local_2e0 = (FScriptContainerElement *)0x0;
    do {
      pFVar6 = local_2e0;
      uVar46 = (uint)uVar36;
      uVar38 = ~uVar46 >> 0x1f;
      uVar45 = 0;
      if ((int)uVar46 < *piVar43) {
        uVar45 = uVar38;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = (pTVar41->AllocatorInstance).Data;
      iVar3 = *(int *)(pFVar47 + 0x338);
      lVar40 = *(longlong *)(pFVar47 + 0x330);
      uVar4 = *(undefined4 *)(pFVar6 + 8 + (longlong)pFVar9);
      *(undefined8 *)((ulonglong)(uVar46 * iVar3) + lVar40) =
           *(undefined8 *)(pFVar6 + (longlong)pFVar9);
      *(undefined4 *)((ulonglong)(uVar46 * iVar3) + 8 + lVar40) = uVar4;
      uVar45 = 0;
      if ((int)uVar46 < *piVar43) {
        uVar45 = uVar38;
      }
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      auVar48 = pmovsxbd(in_XMM1,*(undefined4 *)
                                  (pFVar6 + 0x10 + (longlong)(pTVar41->AllocatorInstance).Data));
      uVar45 = 0;
      if ((int)uVar46 < *piVar43) {
        uVar45 = uVar38;
      }
      fVar55 = (float)auVar48._0_4_ * fVar34;
      fVar56 = (float)auVar48._4_4_ * fVar21;
      fVar57 = (float)auVar48._8_4_ * fVar22;
      local_278 = CONCAT44(fVar56,fVar55);
      local_270 = fVar57;
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar9 = (pTVar41->AllocatorInstance).Data;
      auVar48 = pmovsxbd(auVar48,*(undefined4 *)(pFVar6 + 0xc + (longlong)pFVar9));
      auVar49 = pmovsxbd(auVar48,*(undefined4 *)(pFVar6 + 0x10 + (longlong)pFVar9));
      fVar50 = (float)auVar48._0_4_ * fVar34;
      fVar51 = (float)auVar48._4_4_ * fVar21;
      local_26c = CONCAT44(fVar51,fVar50);
      local_264 = (float)auVar48._8_4_ * fVar22;
      uVar45 = 0;
      if ((int)uVar46 < *piVar43) {
        uVar45 = uVar38;
      }
      dVar14 = (double)local_264;
      dVar13 = (double)fVar51;
      dVar16 = (double)fVar50;
      dVar52 = (double)((float)auVar49._8_4_ * fVar22);
      dVar54 = (double)((float)auVar49._4_4_ * fVar21);
      dVar15 = (double)((float)auVar49._0_4_ * fVar34);
      dVar53 = (double)((float)auVar49._12_4_ * fVar23);
      auVar48._0_8_ = (dVar54 * dVar14 - dVar52 * dVar13) * dVar53;
      auVar48._8_8_ = 0;
      fVar50 = (float)auVar48._0_8_;
      if ((uVar45 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      auVar48 = pmovsxbd(auVar48,*(undefined4 *)
                                  (pFVar6 + 0xc + (longlong)(pTVar41->AllocatorInstance).Data));
      local_228._s_0.X = (float)auVar48._0_4_ * fVar34;
      local_228._s_0.Y = (float)auVar48._4_4_ * fVar21;
      local_260 = CONCAT44(local_228._s_0.Y,local_228._s_0.X);
      local_258 = (float)auVar48._8_4_ * fVar22;
      in_XMM1 = ZEXT416((uint)local_228._s_0.Y);
      local_248._s_0.X = fVar55;
      local_248._s_0.Y = fVar56;
      local_248._s_0.Z = fVar57;
      local_238._s_0.X = fVar50;
      local_238._s_0.Y = (float)((dVar52 * dVar16 - dVar15 * dVar14) * dVar53);
      local_238._s_0.Z = (float)((dVar15 * dVar13 - dVar54 * dVar16) * dVar53);
      local_228._s_0.Z = local_258;
      FStaticMeshVertexBuffer::SetVertexTangents
                ((FStaticMeshVertexBuffer *)(pFVar47 + 0x240),uVar46,
                 (TVector<float> *)&local_228._s_0,(TVector<float> *)&local_238._s_0,
                 (TVector<float> *)&local_248._s_0);
      uVar45 = 0;
      if ((local_2f8->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords != 0) {
        do {
          uVar30 = 0;
          if ((int)uVar46 < *piVar43) {
            uVar30 = uVar38;
          }
          if ((uVar30 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar40 = (longlong)local_300 + (ulonglong)uVar45;
          fVar55 = (float)*(double *)
                           ((local_310->CachedFinalVertices).AllocatorInstance.Data +
                           lVar40 * 0x10 + 0x28);
          uVar30 = 0;
          if ((int)uVar46 < *local_2e8) {
            uVar30 = uVar38;
          }
          if ((uVar30 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar10 = *(longlong *)(pFVar47 + 0x2d8);
          local_2f0._s_0.X =
               (float)*(double *)
                       ((local_310->CachedFinalVertices).AllocatorInstance.Data +
                       (lVar40 + 2) * 0x10);
          lVar40 = *(uint *)(pFVar47 + 0x2e8) * uVar36 + (ulonglong)uVar45;
          local_2f0._s_0.Y = fVar55;
          if (pFVar47[0x2f0] == (FScriptContainerElement)0x0) {
            this_00 = (FVector2DHalf *)(lVar10 + lVar40 * 4);
            lVar40 = (**(code **)(**(longlong **)(pFVar47 + 0x2c0) + 0x50))();
            if (((FVector2DHalf *)(lVar40 + lVar10) < this_00 + 1) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x166,L""), bVar28)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((this_00 < *(FVector2DHalf **)(pFVar47 + 0x2d8)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x167,L""), bVar28)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            FVector2DHalf::operator=(this_00,(TVector2<float> *)&local_2f0._s_0);
          }
          else {
            puVar2 = (undefined8 *)(lVar10 + lVar40 * 8);
            lVar40 = (**(code **)(**(longlong **)(pFVar47 + 0x2c0) + 0x50))();
            if (((undefined8 *)(lVar40 + lVar10) < puVar2 + 1) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15d,L""), bVar28)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((puVar2 < *(undefined8 **)(pFVar47 + 0x2d8)) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                    ,0x15e,L""), bVar28)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *puVar2 = CONCAT44(local_2f0._s_0.Y,local_2f0._s_0.X);
          }
          uVar45 = uVar45 + 1;
          pTVar41 = local_308;
          piVar43 = local_2e8;
        } while (uVar45 < (local_2f8->StaticVertexBuffers).StaticMeshVertexBuffer.NumTexCoords);
      }
      uVar36 = (ulonglong)(uVar46 + 1);
      local_2e0 = local_2e0 + 0x60;
      local_300 = (FName)((longlong)local_300 + 6);
      FVar44 = local_2a0;
    } while ((int)(uVar46 + 1) < (local_310->CachedFinalVertices).ArrayNum);
  }
  pFVar26 = local_210;
  FRenderResource::UpdateRHI((FRenderResource *)(pFVar47 + 0x2f8),local_210);
  FRenderResource::UpdateRHI((FRenderResource *)(pFVar47 + 0x240),pFVar26);
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_._0_4_ = 0;
  local_1a8._padding_._4_4_ = 4;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_._0_4_ = 0xffffffff;
  local_1a8._padding_._4_2_ = 0xff;
  local_1a8._padding_._6_1_ = 0;
  local_1a8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_1a8.PreSkinPositionComponent.StreamOffset = 0;
  local_1a8.PreSkinPositionComponent.Offset = '\0';
  local_1a8.PreSkinPositionComponent.Stride = '\0';
  local_1a8.PreSkinPositionComponent.Type.Value = '\0';
  local_1a8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_1a8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(pFVar47 + 0x2f8),(FVertexFactory *)(pFVar47 + 0x10),
             (FStaticMeshDataType *)&local_1a8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(pFVar47 + 0x240),(FVertexFactory *)(pFVar47 + 0x10),
             (FStaticMeshDataType *)&local_1a8);
  FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(pFVar47 + 0x240),(FVertexFactory *)(pFVar47 + 0x10),
             (FStaticMeshDataType *)&local_1a8,4);
  FStaticMeshVertexBuffer::BindLightMapVertexBuffer
            ((FStaticMeshVertexBuffer *)(pFVar47 + 0x240),(FVertexFactory *)(pFVar47 + 0x10),
             (FStaticMeshDataType *)&local_1a8,0);
  FColorVertexBuffer::BindColorVertexBuffer
            (*(FColorVertexBuffer **)(pFVar47 + 0x350),(FVertexFactory *)(pFVar47 + 0x10),
             (FStaticMeshDataType *)&local_1a8);
  FLocalVertexFactory::SetData((FLocalVertexFactory *)(pFVar47 + 0x10),pFVar26,&local_1a8);
  (**(code **)(*(longlong *)(pFVar47 + 0x10) + 0x18))(pFVar47 + 0x10,pFVar26);
LAB_1486317d3:
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar44,CycleScopeEnd);
  }
  return;
}

// CreateSceneExtensionProxy @ 148635f40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinningSceneExtensionProxy * __thiscall
FSkeletalMeshObjectCPUSkin::CreateSceneExtensionProxy
          (FSkeletalMeshObjectCPUSkin *this,USkinnedAsset *param_1,bool param_2)

{
  return (FSkinningSceneExtensionProxy *)0x0;
}

// DrawVertexElements @ 148638c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectCPUSkin::DrawVertexElements
          (FSkeletalMeshObjectCPUSkin *this,FPrimitiveDrawInterface *param_1,
          TMatrix<double> *param_2,bool param_3,bool param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  TMatrix<double> *pTVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  double dVar24;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_348 [32];
  ulonglong local_328;
  ulonglong local_320;
  undefined4 local_318;
  undefined1 local_310;
  char local_308;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  float local_2c8;
  undefined8 local_2c4;
  float local_2bc;
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
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double local_218;
  double local_210;
  double local_208;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_348;
  uVar4 = (this->CachedFinalVertices).ArrayNum;
  local_308 = param_3;
  pTVar11 = UE::Math::TMatrix<double>::InverseFast(param_2,&local_168);
  dVar8 = __real_3ff0000000000000;
  uVar13 = 0;
  local_2b8 = pTVar11->M[0][0];
  dStack_2b0 = pTVar11->M[1][0];
  local_2a8 = pTVar11->M[2][0];
  dStack_2a0 = pTVar11->M[3][0];
  local_298 = pTVar11->M[0][1];
  dStack_290 = pTVar11->M[1][1];
  local_288 = pTVar11->M[2][1];
  dStack_280 = pTVar11->M[3][1];
  local_278 = pTVar11->M[0][2];
  dStack_270 = pTVar11->M[1][2];
  dVar1 = pTVar11->M[2][2];
  dStack_260 = pTVar11->M[3][2];
  dVar2 = pTVar11->M[0][3];
  dVar3 = pTVar11->M[1][3];
  local_248 = pTVar11->M[2][3];
  dStack_240 = pTVar11->M[3][3];
  local_268 = dVar1;
  local_258 = dVar2;
  dStack_250 = dVar3;
  if (uVar4 != 0) {
    do {
      fVar26 = _UNK_151040078;
      fVar25 = _UNK_151040074;
      fVar23 = ___xmm_3c0102043c0102043c0102043c010204;
      iVar5 = (this->CachedFinalVertices).ArrayNum;
      uVar10 = 0;
      if ((int)uVar13 < iVar5) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        local_328 = (ulonglong)(int)uVar13;
        local_320 = (longlong)iVar5;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      dVar24 = local_248;
      pFVar6 = (this->CachedFinalVertices).AllocatorInstance.Data;
      lVar12 = (longlong)(int)uVar13 * 0x60;
      dVar28 = (double)*(float *)(pFVar6 + lVar12);
      dVar17 = (double)*(float *)(pFVar6 + lVar12 + 4);
      dVar27 = (double)*(float *)(pFVar6 + lVar12 + 8);
      auVar18._8_4_ = SUB84(dVar27,0);
      auVar18._0_8_ = dVar27;
      auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar19._0_8_ = param_2->M[1][2] * dVar17;
      auVar19._8_8_ = param_2->M[1][3] * dVar17;
      local_2e8 = dVar28 * param_2->M[0][0] + param_2->M[1][0] * dVar17 + dVar27 * param_2->M[2][0]
                  + param_2->M[3][0] * dVar8;
      local_2e0 = dVar28 * param_2->M[0][1] + param_2->M[1][1] * dVar17 +
                  auVar18._8_8_ * param_2->M[2][1] + param_2->M[3][1] * dVar8;
      local_2d8 = dVar28 * param_2->M[0][2] + auVar19._0_8_ + dVar27 * param_2->M[2][2] +
                  param_2->M[3][2] * dVar8;
      auVar18 = pmovsxbd(auVar19,*(undefined4 *)(pFVar6 + lVar12 + 0x10));
      auVar19 = pmovsxbd(auVar18,*(undefined4 *)(pFVar6 + lVar12 + 0xc));
      fVar23 = (float)auVar18._0_4_ * fVar23;
      fVar25 = (float)auVar18._4_4_ * fVar25;
      local_2d0 = CONCAT44(fVar25,fVar23);
      local_2c8 = (float)auVar18._8_4_ * fVar26;
      dVar28 = (double)local_2c8;
      dVar27 = (double)fVar25;
      fVar25 = (float)auVar19._0_4_ * ___xmm_3c0102043c0102043c0102043c010204;
      fVar26 = (float)auVar19._4_4_ * _UNK_151040074;
      local_2c4 = CONCAT44(fVar26,fVar25);
      local_2bc = (float)auVar19._8_4_ * _UNK_151040078;
      dVar17 = (double)fVar23;
      local_218 = (double)fVar26;
      local_228 = (double)local_2bc;
      local_238 = (double)fVar25;
      local_2f8 = dVar27 * local_228 - local_218 * dVar28;
      local_210 = local_238 * dVar28 - dVar17 * local_228;
      local_208 = local_218 * dVar17 - local_238 * dVar27;
      if (local_308 != '\0') {
        local_198 = ___xmm_3f800000000000003f80000000000000;
        uStack_190 = _UNK_15076b198;
        auVar20._8_4_ = SUB84(dVar28,0);
        auVar20._0_8_ = dVar28;
        auVar20._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        auVar29._8_4_ = SUB84(dVar27,0);
        auVar29._0_8_ = dVar27;
        auVar29._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        auVar14._8_4_ = SUB84(dVar17,0);
        auVar14._0_8_ = dVar17;
        auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        local_1f8 = dVar27 * local_298 + dVar17 * local_2b8 + dVar28 * local_278 + dVar2 * 0.0;
        local_1f0 = auVar29._8_8_ * dStack_290 + auVar14._8_8_ * dStack_2b0 +
                    auVar20._8_8_ * dStack_270 + dVar3 * 0.0;
        local_1e8 = dVar27 * local_288 + dVar17 * local_2a8 + dVar28 * dVar1 + local_248 * 0.0;
        dVar17 = local_1f0 * local_1f0 + local_1f8 * local_1f8 + local_1e8 * local_1e8;
        if (dVar17 <= __real_3e45798ee0000000) {
          local_1f0 = 0.0;
          local_1e8 = 0.0;
          local_1f8 = 0.0;
        }
        else {
          local_1b0 = dVar8 / SQRT(dVar17);
          local_1f0 = local_1b0 * local_1f0;
          local_1e8 = local_1b0 * local_1e8;
          local_1f8 = local_1b0 * local_1f8;
        }
        local_310 = 0;
        local_1f8 = local_1f8 + local_2e8;
        local_318 = 0;
        local_1f0 = local_1f0 + local_2e0;
        local_1e8 = local_1e8 + local_2d8;
        local_320 = local_320 & 0xffffffff00000000;
        local_328 = local_328 & 0xffffffffffffff00;
        (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_2e8,&local_1f8,&local_198);
      }
      if (param_4) {
        local_188 = ___xmm_3f80000000000000000000003f800000;
        uStack_180 = _UNK_15076b188;
        auVar15._8_4_ = SUB84(local_238,0);
        auVar15._0_8_ = local_238;
        auVar15._12_4_ = (int)((ulonglong)local_238 >> 0x20);
        auVar21._8_4_ = SUB84(local_228,0);
        auVar21._0_8_ = local_228;
        auVar21._12_4_ = (int)((ulonglong)local_228 >> 0x20);
        auVar30._8_4_ = SUB84(local_218,0);
        auVar30._0_8_ = local_218;
        auVar30._12_4_ = (int)((ulonglong)local_218 >> 0x20);
        local_1e0 = local_218 * local_298 + local_238 * local_2b8 + local_228 * local_278 +
                    dVar2 * 0.0;
        local_1d8 = auVar30._8_8_ * dStack_290 + auVar15._8_8_ * dStack_2b0 +
                    auVar21._8_8_ * dStack_270 + dVar3 * 0.0;
        local_1d0 = local_218 * local_288 + local_238 * local_2a8 + local_228 * dVar1 + dVar24 * 0.0
        ;
        dVar17 = local_1d8 * local_1d8 + local_1e0 * local_1e0 + local_1d0 * local_1d0;
        if (dVar17 <= __real_3e45798ee0000000) {
          local_1d8 = 0.0;
          local_1d0 = 0.0;
          local_1e0 = 0.0;
        }
        else {
          local_1a8 = dVar8 / SQRT(dVar17);
          local_1d8 = local_1a8 * local_1d8;
          local_1d0 = local_1a8 * local_1d0;
          local_1e0 = local_1a8 * local_1e0;
        }
        local_310 = 0;
        local_1e0 = local_2e8 + local_1e0;
        local_318 = 0;
        local_1d8 = local_1d8 + local_2e0;
        local_1d0 = local_1d0 + local_2d8;
        local_320 = local_320 & 0xffffffff00000000;
        local_328 = local_328 & 0xffffffffffffff00;
        (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_2e8,&local_1e0,&local_188);
      }
      if (param_5) {
        local_178 = ___xmm_3f8000003f8000000000000000000000;
        uStack_170 = _UNK_15076b1e8;
        auVar16._8_4_ = SUB84(local_2f8,0);
        auVar16._0_8_ = local_2f8;
        auVar16._12_4_ = (int)((ulonglong)local_2f8 >> 0x20);
        auVar22._8_4_ = SUB84(local_208,0);
        auVar22._0_8_ = local_208;
        auVar22._12_4_ = (int)((ulonglong)local_208 >> 0x20);
        auVar31._8_4_ = SUB84(local_210,0);
        auVar31._0_8_ = local_210;
        auVar31._12_4_ = (int)((ulonglong)local_210 >> 0x20);
        local_1c8 = local_210 * local_298 + local_2f8 * local_2b8 + local_208 * local_278 +
                    dVar2 * 0.0;
        local_1c0 = auVar31._8_8_ * dStack_290 + auVar16._8_8_ * dStack_2b0 +
                    auVar22._8_8_ * dStack_270 + dVar3 * 0.0;
        local_1b8 = local_210 * local_288 + local_2f8 * local_2a8 + local_208 * dVar1 + dVar24 * 0.0
        ;
        dVar24 = local_1c0 * local_1c0 + local_1c8 * local_1c8 + local_1b8 * local_1b8;
        if (dVar24 <= __real_3e45798ee0000000) {
          local_1c0 = 0.0;
          local_1b8 = 0.0;
          local_1c8 = 0.0;
        }
        else {
          local_1a0 = dVar8 / SQRT(dVar24);
          local_1c0 = local_1c0 * local_1a0;
          local_1b8 = local_1b8 * local_1a0;
          local_1c8 = local_1c8 * local_1a0;
        }
        local_310 = 0;
        local_1c8 = local_2e8 + local_1c8;
        local_318 = 0;
        local_1c0 = local_1c0 + local_2e0;
        local_1b8 = local_1b8 + local_2d8;
        local_320 = local_320 & 0xffffffff00000000;
        local_328 = local_328 & 0xffffffffffffff00;
        (**(code **)(param_1->_padding_ + 0x30))(param_1,&local_2e8,&local_1c8,&local_178);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar4);
  }
  return;
}

// EnableOverlayRendering @ 148639a70

void __thiscall
FSkeletalMeshObjectCPUSkin::EnableOverlayRendering
          (FSkeletalMeshObjectCPUSkin *this,bool param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *_Src;
  TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *pTVar9;
  size_t _Size;
  
  pTVar4 = &this->BonesOfInterest;
  this->bRenderOverlayMaterial = param_1;
  piVar1 = &(this->BonesOfInterest).ArrayMax;
  piVar2 = &(this->BonesOfInterest).ArrayNum;
  *piVar2 = 0;
  if ((this->BonesOfInterest).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  pTVar9 = &this->MorphTargetOfInterest;
  piVar3 = &(this->MorphTargetOfInterest).ArrayMax;
  (this->MorphTargetOfInterest).ArrayNum = 0;
  if ((this->MorphTargetOfInterest).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar9->AllocatorInstance,0,piVar3);
  }
  if (param_2 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    if (param_3 == (TArray<UMorphTarget_*,TSizedDefaultAllocator<32>_> *)0x0) {
      return;
    }
    if ((pTVar9 == param_3) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar5 = param_3->ArrayNum;
    if (iVar5 == 0) {
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar5,&pTVar9->AllocatorInstance,&(this->MorphTargetOfInterest).ArrayNum,
                       piVar3);
    _Src = (param_3->AllocatorInstance).Data;
    _Size = (longlong)iVar5 << 3;
    _Dst = (pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 8;
  }
  else {
    if ((pTVar4 == param_2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == 0) {
      return;
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar5,&pTVar4->AllocatorInstance,piVar2,piVar1);
    _Src = (param_2->AllocatorInstance).Data;
    _Size = (longlong)iVar5 << 2;
    _Dst = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 4;
  }
  memcpy(_Dst,_Src,_Size);
  return;
}

// GetComponentSpaceTransforms @ 1486478f0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObjectCPUSkin::GetComponentSpaceTransforms(FSkeletalMeshObjectCPUSkin *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  if (this->DynamicData != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    pTVar1 = &this->DynamicData->MeshComponentSpaceTransforms;
  }
  return pTVar1;
}

// GetLOD @ 14864b3a0

int __thiscall FSkeletalMeshObjectCPUSkin::GetLOD(FSkeletalMeshObjectCPUSkin *this)

{
  if (this->DynamicData != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    return this->DynamicData->LODIndex;
  }
  return 0;
}

// GetReferenceToLocalMatrices @ 14864d010

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectCPUSkin::GetReferenceToLocalMatrices
          (FSkeletalMeshObjectCPUSkin *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  
  iVar1 = (this->DynamicData->ReferenceToLocal).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TMatrix<float> *)(this->DynamicData->ReferenceToLocal).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 14864d640

void __thiscall
FSkeletalMeshObjectCPUSkin::GetResourceSizeEx
          (FSkeletalMeshObjectCPUSkin *this,FResourceSizeEx *param_1)

{
  FDynamicSkelMeshObjectDataCPUSkin *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0xf0);
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 0x460);
  uVar7 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->LODs).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->LODs).AllocatorInstance.Data;
      FResourceSizeEx::AddUnknownMemoryBytes
                (param_1,(ulonglong)
                         (uint)((*(int *)(pFVar2 + lVar6 + 0x2e8) * *(int *)(pFVar2 + lVar6 + 0x2e4)
                                + *(int *)(pFVar2 + lVar6 + 0x2e0)) *
                                *(int *)(pFVar2 + lVar6 + 0x2ec) +
                               *(int *)(pFVar2 + lVar6 + 0x33c) * *(int *)(pFVar2 + lVar6 + 0x338)))
      ;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x460;
    } while ((int)uVar7 < (this->LODs).ArrayNum);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->CachedFinalVertices).ArrayMax * 0x60);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,(longlong)(this->BonesOfInterest).ArrayMax << 2);
  return;
}

// GetSkinVertexFactory @ 14864e900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectCPUSkin::GetSkinVertexFactory
          (FSkeletalMeshObjectCPUSkin *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  FVertexFactory *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014864e911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FVertexFactory *)(**(code **)(this->_padding_ + 0x30))(this,param_2,param_3,param_4);
  return pFVar1;
}

// GetStaticSkinVertexFactory @ 14864fa60

FVertexFactory * __thiscall
FSkeletalMeshObjectCPUSkin::GetStaticSkinVertexFactory
          (FSkeletalMeshObjectCPUSkin *this,int param_1,int param_2,ESkinVertexFactoryMode param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexFactory *pFVar4;
  
  if ((param_1 < 0) || ((this->LODs).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODs.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                       ,0x13d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVertexFactory *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FVertexFactory *)((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x460 + 0x10);
}

// HaveValidDynamicData @ 148651b20

bool __thiscall FSkeletalMeshObjectCPUSkin::HaveValidDynamicData(FSkeletalMeshObjectCPUSkin *this)

{
  return this->DynamicData != (FDynamicSkelMeshObjectDataCPUSkin *)0x0;
}

// InitResources @ 148656440

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectCPUSkin::InitResources
          (FSkeletalMeshObjectCPUSkin *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar9);
      pFVar1 = this_00->SkelMeshRenderData;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar7 * 8) +
                  300) != 0) {
        if (((int)uVar6 < 0) || ((param_1->LODInfo).ArrayNum <= (int)uVar6)) {
          pFVar5 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          uVar4 = 0;
          if ((int)uVar6 < (param_1->LODInfo).ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar5 = (param_1->LODInfo).DataPtr + (int)uVar6;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar5);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x460;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  return;
}

// IsCPUSkinned @ 148659900

bool __thiscall FSkeletalMeshObjectCPUSkin::IsCPUSkinned(FSkeletalMeshObjectCPUSkin *this)

{
  return true;
}

// ReleaseResources @ 14865f920

void __thiscall FSkeletalMeshObjectCPUSkin::ReleaseResources(FSkeletalMeshObjectCPUSkin *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LODs).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->LODs).AllocatorInstance.Data;
      BeginReleaseResource
                ((FRenderResource *)(pFVar1 + lVar6 + 0x10),&UE::RenderCommandPipe::SkeletalMesh);
      BeginReleaseResource
                ((FRenderResource *)(pFVar1 + lVar6 + 0x2f8),&UE::RenderCommandPipe::SkeletalMesh);
      BeginReleaseResource
                ((FRenderResource *)(pFVar1 + lVar6 + 0x240),&UE::RenderCommandPipe::SkeletalMesh);
      BeginReleaseResource
                ((FRenderResource *)(pFVar1 + lVar6 + 0x358),&UE::RenderCommandPipe::SkeletalMesh);
      uVar5 = uVar5 + 1;
      pFVar1[lVar6 + 0x458] = (FScriptContainerElement)0x0;
      lVar6 = lVar6 + 0x460;
    } while ((int)uVar5 < (this->LODs).ArrayNum);
  }
  return;
}

// Update @ 148669f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectCPUSkin::Update
          (FSkeletalMeshObjectCPUSkin *this,int param_1,FSkinnedMeshSceneProxyDynamicData *param_2,
          FPrimitiveSceneProxy *param_3,USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDynamicSkelMeshObjectDataCPUSkin *this_00;
  code **ppcVar4;
  undefined1 auStackY_e8 [32];
  TArrayView<float_const_,int> local_a8;
  FSkeletalMeshObjectCPUSkin *local_98;
  code *pcStack_90;
  uint local_88;
  undefined4 uStack_84;
  FDynamicSkelMeshObjectDataCPUSkin *pFStack_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  this_00 = ::operator_new(0x170);
  if (this_00 == (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    pFStack_80 = (FDynamicSkelMeshObjectDataCPUSkin *)0x0;
  }
  else {
    local_a8.DataPtr = (float *)(param_6->AllocatorInstance).Data;
    iVar1 = param_6->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_a8.ArrayNum = iVar1;
    pFStack_80 = FDynamicSkelMeshObjectDataCPUSkin::FDynamicSkelMeshObjectDataCPUSkin
                           (this_00,param_2,param_4,(FSkeletalMeshRenderData *)this->_padding_,
                            param_1,param_5,&local_a8);
  }
  local_88 = 0;
  if (param_3 != (FPrimitiveSceneProxy *)0x0) {
    local_88 = param_2->CurrentBoneTransformRevisionNumber;
  }
  pcStack_90 = (code *)GFrameCounter;
  local_78[0] = (code *)0x0;
  local_98 = this;
  local_50 = FMemory::Malloc(0x28,8);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshObjectCPUSkin::Update'::`6'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[1] = (code *)local_98;
  local_50[2] = pcStack_90;
  local_50[3] = (code *)CONCAT44(uStack_84,local_88);
  local_50[4] = (code *)pFStack_80;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshObjectCPUSkin::Update'::__l6::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectCPUSkin::Update_::__l6::TSTR_SkelMeshObjectUpdateDataCommand158>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar4 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar4 = local_50;
    }
    (**(code **)(*ppcVar4 + 0x10))();
  }
  return;
}

// UpdateDynamicData_RenderThread @ 14866b6a0

void __thiscall
FSkeletalMeshObjectCPUSkin::UpdateDynamicData_RenderThread
          (FSkeletalMeshObjectCPUSkin *this,FRHICommandList *param_1,
          FDynamicSkelMeshObjectDataCPUSkin *param_2,ulong64 param_3,uint param_4)

{
  FDynamicSkelMeshObjectDataCPUSkin *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->DynamicData = param_2;
  if (param_2 == (FDynamicSkelMeshObjectDataCPUSkin *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                       ,0xbe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  CacheVertices(this,this->DynamicData->LODIndex,true,param_1);
  return;
}

// UpdateSkinWeightBuffer @ 148672dc0

void __thiscall
FSkeletalMeshObjectCPUSkin::UpdateSkinWeightBuffer
          (FSkeletalMeshObjectCPUSkin *this,
          TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FSkinWeightVertexBuffer *pFVar6;
  uint uVar7;
  FSkelMeshComponentLODInfo *pFVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  uVar7 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar11 = 0;
    lVar9 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->LODs).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->LODs).AllocatorInstance.Data + lVar9;
      plVar1 = *(longlong **)pFVar10;
      uVar4 = 0;
      if ((int)uVar7 < (int)plVar1[1]) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)(*plVar1 + lVar11 * 8) + 300) != 0) {
        if (((int)uVar7 < 0) || (param_1->ArrayNum <= (int)uVar7)) {
          pFVar8 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          if (((int)uVar7 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = param_1->DataPtr + (int)uVar7;
        }
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("SkelMeshRenderData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                               ,0x1ab,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((*(int *)(pFVar10 + 8) < 0) ||
            (*(int *)(*(longlong *)pFVar10 + 8) <= *(int *)(pFVar10 + 8))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderCPUSkin.cpp"
                               ,0x1ac,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = *(uint *)(pFVar10 + 8);
        plVar1 = *(longlong **)pFVar10;
        uVar5 = 0;
        if ((int)uVar4 < (int)plVar1[1]) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar6 = FSkeletalMeshObject::GetSkinWeightVertexBuffer
                           (*(FSkeletalMeshLODRenderData **)(*plVar1 + (longlong)(int)uVar4 * 8),
                            pFVar8);
        *(FSkinWeightVertexBuffer **)(pFVar10 + 0x348) = pFVar6;
      }
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x460;
    } while ((int)uVar7 < (this->LODs).ArrayNum);
  }
  return;
}

