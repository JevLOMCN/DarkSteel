// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// GetElementShaderBindings @ 145f90e30

/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLandscapeFixedGridVertexFactoryVertexShaderParameters::GetElementShaderBindings
          (FLandscapeFixedGridVertexFactoryVertexShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  int *piVar1;
  ushort uVar2;
  undefined8 *puVar3;
  TUniformBuffer<FLandscapeUniformShaderParameters> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS> FVar12;
  FShaderParametersMetadata *pFVar13;
  FHashedName FVar14;
  TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> *pTVar15;
  FShaderUniformBufferParameter *pFVar16;
  FRHIUniformBuffer *pFVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  uint uVar21;
  TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *this_02;
  FHashedName local_88;
  FColor_u_0 local_80 [2];
  FName local_78;
  FName local_70;
  FHashedName local_60;
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  FHashedName local_38;
  FHashedName local_30;
  FHashedName local_28 [2];
  
  FVar12 = StatPtr_STAT_LandscapeVFDrawTimeVS;
  if (StatPtr_STAT_LandscapeVFDrawTimeVS ==
      (FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS>)0x0) {
    pFVar11 = ::FName::FName(&local_40,"STAT_LandscapeVFDrawTimeVS");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeVFDrawTimeVS,*pFVar11,
                        L"Render SetMesh Draw Time VS","STATGROUP_Landscape","STATCAT_Advanced",
                        L"Landscape",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_80[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_80[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar19.Value;
        local_78.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                   ,0xe30);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.Hash._0_4_ = FVar19.Value;
      local_88.Hash._4_4_ = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar8 = true;
      goto LAB_145f90f74;
    }
  }
  bVar8 = false;
  FVar20 = local_70;
LAB_145f90f74:
  puVar3 = param_7->UserData;
  if (puVar3 == (undefined8 *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("BatchElementParams",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                        ,0xe33,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar4 = (TUniformBuffer<FLandscapeUniformShaderParameters> *)puVar3[1];
  pFVar13 = FLandscapeUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_7,&pFVar13->ShaderVariableHashedName);
  FVar14.Hash = (ulong64)FHashedName::FHashedName(&local_38,(FHashedName *)&param_7);
  pTVar15 = (TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> *)
            FShader::GetUniformBufferParameter((FShader *)param_3,FVar14);
  FMeshDrawSingleShaderBindings::Add<FLandscapeUniformShaderParameters>(param_8,pTVar15,pTVar4);
  uVar18 = *(uint *)(puVar3 + 5);
  plVar5 = (longlong *)puVar3[2];
  uVar21 = 0;
  if ((int)uVar18 < (int)plVar5[1]) {
    uVar21 = ~uVar18 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_02 = (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *)
            ((longlong)(int)uVar18 * 0x38 + *plVar5);
  pFVar13 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_88,&pFVar13->ShaderVariableHashedName);
  FVar14.Hash = (ulong64)FHashedName::FHashedName(&local_30,&local_88);
  pFVar16 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar14);
  if (pFVar16->BaseIndex != 0xffff) {
    pFVar17 = TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::GetUniformBufferRHI
                        (this_02);
    if (pFVar17 == (FRHIUniformBuffer *)0x0) {
      FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value.GetUniformBufferRHI()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                          ,0x84,L"Attempted to set null uniform buffer for type %s");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (pFVar16->BaseIndex == 0xffff) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4717616138333192331>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                          ,0x8b,"IsBound()");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar2 = pFVar16->BaseIndex;
    pFVar17 = TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::GetUniformBufferRHI
                        (this_02);
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer(param_8,pFVar17,(uint)uVar2);
  }
  bVar10 = IsRayTracingEnabled();
  if (bVar10) {
    pFVar17 = (FRHIUniformBuffer *)*puVar3;
    pFVar13 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_60,&pFVar13->ShaderVariableHashedName);
    FVar14.Hash = (ulong64)FHashedName::FHashedName(local_28,&local_60);
    pFVar16 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar14);
    if (pFVar16->BaseIndex != 0xffff) {
      if (pFVar17 == (FRHIUniformBuffer *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                            ,0x8f,L"Attempted to set null uniform buffer");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (pFVar16->BaseIndex == 0xffff) {
        bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4717616138333192331>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                            ,0x8b,"IsBound()");
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_8,pFVar17,(uint)pFVar16->BaseIndex);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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

// GetTypeLayout @ 145f960e0

FTypeLayoutDesc * __thiscall
FLandscapeFixedGridVertexFactoryVertexShaderParameters::GetTypeLayout
          (FLandscapeFixedGridVertexFactoryVertexShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeFixed;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FLandscapeFixedGridVertexFactoryVertexShaderParameters,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145f97c00

void __cdecl
FLandscapeFixedGridVertexFactoryVertexShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 145fa3fe0

FTypeLayoutDesc * __cdecl
FLandscapeFixedGridVertexFactoryVertexShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeFixed;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FLandscapeFixedGridVertexFactoryVertexShaderParameters,0>::Do;
    ::FieldBuffer._0_8_ = u_BASE;
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

