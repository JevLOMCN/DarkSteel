// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 2

// FPaperRenderSceneProxy_SpriteBase @ 14ace92c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPaperRenderSceneProxy_SpriteBase * __thiscall
FPaperRenderSceneProxy_SpriteBase::FPaperRenderSceneProxy_SpriteBase
          (FPaperRenderSceneProxy_SpriteBase *this,UMeshComponent *param_1)

{
  code *pcVar1;
  EShaderPlatform EVar2;
  UMaterialInterface *pUVar3;
  UMaterial *pUVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  FPaperRenderSceneProxy::FPaperRenderSceneProxy
            ((FPaperRenderSceneProxy *)this,(UPrimitiveComponent *)param_1);
  *(undefined ***)this = &___7FPaperRenderSceneProxy_SpriteBase__6B_;
  pUVar3 = (UMaterialInterface *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
  this->Material = pUVar3;
  if (pUVar3 == (UMaterialInterface *)0x0) {
    pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
    this->Material = (UMaterialInterface *)pUVar4;
  }
  pUVar3 = (UMaterialInterface *)(**(code **)(param_1->_padding_ + 0x690))(param_1,1);
  this->AlternateMaterial = pUVar3;
  if (pUVar3 == (UMaterialInterface *)0x0) {
    pUVar4 = UMaterial::GetDefaultMaterial(MD_Surface);
    this->AlternateMaterial = (UMaterialInterface *)pUVar4;
  }
  pcVar1 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar2 = FSceneInterface::GetShaderPlatform(*(FSceneInterface **)&this->field_0x220);
  puVar5 = (undefined8 *)(*pcVar1)(param_1,local_res8,EVar2);
  *(undefined8 *)&this->field_0x630 = *puVar5;
  return this;
}

// SetSprite_RenderThread @ 14ad0a7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPaperRenderSceneProxy_SpriteBase::SetSprite_RenderThread
          (FPaperRenderSceneProxy_SpriteBase *this,FSpriteDrawCallRecord *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_PaperRender_SetSpriteRT> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FSpriteRenderSection *pFVar15;
  FName FVar16;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  FVar14 = StatPtr_STAT_PaperRender_SetSpriteRT;
  if (StatPtr_STAT_PaperRender_SetSpriteRT ==
      (FThreadSafeStaticStat<FStat_STAT_PaperRender_SetSpriteRT>)0x0) {
    pFVar13 = ::FName::FName(&local_60,"STAT_PaperRender_SetSpriteRT");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_PaperRender_SetSpriteRT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PaperRender_SetSpriteRT,*pFVar13,
                        L"SetSprite (RT)","STATGROUP_Paper2D","STATCAT_Advanced",L"Paper2D",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar14;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_res8.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\2D\\Paper2D\\Source\\Paper2D\\Private\\PaperRenderSceneProxy.cpp"
                   ,0x28c);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar7 = true;
      goto LAB_14ad0a8fe;
    }
  }
  bVar7 = false;
  FVar16 = local_58;
LAB_14ad0a8fe:
  puVar3 = &this->field_0x280;
  puVar1 = &this->field_0x28c;
  if (*(int *)puVar1 < 0) {
    DestructItems<FSpriteRenderSection,int>
              (*(FSpriteRenderSection **)puVar3,*(int *)&this->field_0x288);
    *(undefined4 *)&this->field_0x288 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x48,8,0,(ForAnyElementType *)puVar3,0,(int *)puVar1);
    }
  }
  else {
    DestructItems<FSpriteRenderSection,int>
              (*(FSpriteRenderSection **)puVar3,*(int *)&this->field_0x288);
    *(undefined4 *)&this->field_0x288 = 0;
  }
  puVar4 = &this->field_0x290;
  *(undefined4 *)&this->field_0x298 = 0;
  if (*(int *)&this->field_0x29c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,0,(ForAnyElementType *)puVar4,0,(int *)&this->field_0x29c);
  }
  if (param_2 == -1) {
    uVar11 = *(uint *)&this->field_0x288;
    if (uVar11 == *(uint *)puVar1) {
      uVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)puVar3,(int *)puVar1);
    }
    *(uint *)&this->field_0x288 = uVar11 + 1;
    local_res20 = (FName)((longlong)(int)uVar11 * 0x48);
    DefaultConstructItems<FSpriteRenderSection,int>
              ((void *)(*(longlong *)puVar3 + (longlong)local_res20),1);
    uVar12 = 0;
    if ((int)uVar11 < *(int *)&this->field_0x288) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar15 = (FSpriteRenderSection *)(*(longlong *)puVar3 + (longlong)local_res20);
    param_2 = 0;
    pFVar15->Material = this->Material;
    iVar10 = (param_1->RenderVerts).ArrayNum;
  }
  else {
    iVar10 = *(int *)&this->field_0x288;
    if (iVar10 == *(int *)puVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)puVar3,(int *)puVar1);
    }
    *(int *)&this->field_0x288 = iVar10 + 1;
    DefaultConstructItems<FSpriteRenderSection,int>
              ((void *)(*(longlong *)puVar3 + (longlong)iVar10 * 0x48),1);
    iVar10 = *(int *)&this->field_0x288;
    if (iVar10 == *(int *)puVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,(ForAnyElementType *)puVar3,(int *)puVar1);
    }
    *(int *)&this->field_0x288 = iVar10 + 1;
    DefaultConstructItems<FSpriteRenderSection,int>
              ((void *)(*(longlong *)puVar3 + (longlong)iVar10 * 0x48),1);
    if (*(int *)&this->field_0x288 < 1) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar15 = *(FSpriteRenderSection **)puVar3;
    pFVar15->Material = this->Material;
    FSpriteRenderSection::AddVerticesFromDrawCallRecord<TSizedDefaultAllocator<32>_>
              (pFVar15,param_1,0,param_2,
               (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)puVar4);
    if (*(int *)&this->field_0x288 < 2) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar15 = (FSpriteRenderSection *)(*(longlong *)puVar3 + 0x48);
    pFVar15->Material = this->AlternateMaterial;
    iVar10 = (param_1->RenderVerts).ArrayNum - param_2;
  }
  FSpriteRenderSection::AddVerticesFromDrawCallRecord<TSizedDefaultAllocator<32>_>
            (pFVar15,param_1,param_2,iVar10,
             (TArray<FDynamicMeshVertex,TSizedDefaultAllocator<32>_> *)puVar4);
  bVar9 = IsInRenderingThread();
  if (!bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FPaperRenderSceneProxy::RecreateCachedRenderData
            ((FPaperRenderSceneProxy *)this,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

