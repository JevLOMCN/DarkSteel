// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 4

// GetElementShaderBindings @ 145f91590

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
FLandscapeVertexFactoryVertexShaderParameters::GetElementShaderBindings
          (FLandscapeVertexFactoryVertexShaderParameters *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,
          FMeshDrawSingleShaderBindings *param_8,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  TUniformBuffer<FLandscapeUniformShaderParameters> *pTVar4;
  FRHIUniformBuffer *pFVar5;
  ForElementType<FVertexInputStream> FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS> FVar13;
  FShaderParametersMetadata *pFVar14;
  FHashedName FVar15;
  TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> *pTVar16;
  FShaderUniformBufferParameter *pFVar17;
  FVertexFactoryType *pFVar18;
  FVertexFactoryType *pFVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  ForElementType<FVertexInputStream> FVar23;
  ForElementType<FVertexInputStream> FVar24;
  FMeshDrawSingleShaderBindings *this_02;
  FColor_u_0 local_res18 [2];
  FMeshMaterialShader *local_res20;
  FHashedName local_b8;
  FName local_b0;
  FName local_a8;
  FHashedName local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FArguments local_78;
  FName local_60;
  FHashedName local_58;
  FHashedName local_50;
  FHashedName local_48 [2];
  
  FVar13 = StatPtr_STAT_LandscapeVFDrawTimeVS;
  local_res20 = param_3;
  if (StatPtr_STAT_LandscapeVFDrawTimeVS ==
      (FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS>)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_LandscapeVFDrawTimeVS");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_LandscapeVFDrawTimeVS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LandscapeVFDrawTimeVS,*pFVar12,
                        L"Render SetMesh Draw Time VS","STATGROUP_Landscape","STATCAT_Advanced",
                        L"Landscape",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar21.Value;
        local_b0.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                   ,0xdfc);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Hash._0_4_ = FVar21.Value;
      local_b8.Hash._4_4_ = uVar20;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar9 = true;
      goto LAB_145f916d2;
    }
  }
  bVar9 = false;
  FVar22 = local_a8;
LAB_145f916d2:
  puVar2 = param_7->UserData;
  if ((puVar2 == (undefined8 *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BatchElementParams",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                          ,0xdff,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar3 = puVar2[4];
  pTVar4 = (TUniformBuffer<FLandscapeUniformShaderParameters> *)puVar2[1];
  pFVar14 = FLandscapeUniformShaderParameters::GetStructMetadata();
  FHashedName::FHashedName((FHashedName *)&param_7,&pFVar14->ShaderVariableHashedName);
  FVar15.Hash = (ulong64)FHashedName::FHashedName(&local_58,(FHashedName *)&param_7);
  pTVar16 = (TShaderUniformBufferParameter<FLandscapeUniformShaderParameters> *)
            FShader::GetUniformBufferParameter((FShader *)param_3,FVar15);
  FMeshDrawSingleShaderBindings::Add<FLandscapeUniformShaderParameters>(param_8,pTVar16,pTVar4);
  pFVar5 = (FRHIUniformBuffer *)puVar2[3];
  pFVar14 = FLandscapeSectionLODUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_b8,&pFVar14->ShaderVariableHashedName);
  FVar15.Hash = (ulong64)FHashedName::FHashedName(&local_50,&local_b8);
  pFVar17 = FShader::GetUniformBufferParameter((FShader *)local_res20,FVar15);
  this_02 = param_8;
  if (pFVar17->BaseIndex != 0xffff) {
    if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Value",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                            ,0x8f,L"Attempted to set null uniform buffer"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar17->BaseIndex == 0xffff) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4717616138333192331>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                            ,0x8b,"IsBound()"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = param_8;
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_8,pFVar5,(uint)pFVar17->BaseIndex);
  }
  if (param_2 != (FSceneView *)0x0) {
    pFVar18 = (FVertexFactoryType *)(**(code **)(param_6->_padding_ + 0x30))();
    pFVar19 = UE::Landscape::Culling::GetTileVertexFactoryType();
    if (pFVar18 == pFVar19) {
      local_78.IndirectArgsOffset = 0;
      local_78.TileDataOffset = 0;
      local_78.IndirectArgsBuffer = (FRHIBuffer *)0x0;
      local_78.TileDataVertexBuffer = (FRHIBuffer *)0x0;
      bVar11 = UE::Landscape::Culling::GetViewArguments
                         (param_2,*(uint *)(lVar3 + 0x298),
                          (TIntPoint<int>)((TIntPoint<int>_u_0 *)(lVar3 + 0x2a0))->_s_0,0,&local_78)
      ;
      FVar23 = (ForElementType<FVertexInputStream>)param_9;
      if (bVar11) {
        if ((param_9->ArrayNum < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("VertexStreams.IsValidIndex(1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeRender.cpp"
                                ,0xe0e,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *
              )FVar23)->ArrayNum < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar23)->AllocatorInstance).SecondaryData;
        FVar24 = FVar23;
        if (FVar6 != (ForElementType<FVertexInputStream>)0x0) {
          FVar24 = FVar6;
        }
        *(uint *)((longlong)FVar24 + 0xc) =
             (local_78.TileDataOffset & 0x7ffffff) << 4 |
             *(uint *)((longlong)FVar24 + 0xc) & 0x8000000f;
        if ((((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> *
              )FVar23)->ArrayNum < 2) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar6 = (((TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar23)->AllocatorInstance).SecondaryData;
        if (FVar6 != (ForElementType<FVertexInputStream>)0x0) {
          FVar23 = FVar6;
        }
        *(FRHIBuffer **)((longlong)FVar23 + 0x10) = local_78.TileDataVertexBuffer;
      }
    }
  }
  bVar11 = IsRayTracingEnabled();
  if (bVar11) {
    pFVar5 = (FRHIUniformBuffer *)*puVar2;
    pFVar14 = FLandscapeVertexFactoryMVFParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_98,&pFVar14->ShaderVariableHashedName);
    FVar15.Hash = (ulong64)FHashedName::FHashedName(local_48,&local_98);
    pFVar17 = FShader::GetUniformBufferParameter((FShader *)local_res20,FVar15);
    if (pFVar17->BaseIndex != 0xffff) {
      if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                              ,0x8f,L"Attempted to set null uniform buffer"), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((pFVar17->BaseIndex == 0xffff) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4717616138333192331>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                              ,0x8b,"IsBound()"), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (this_02,pFVar5,(uint)pFVar17->BaseIndex);
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
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

// GetTypeLayout @ 145f96120

FTypeLayoutDesc * __thiscall
FLandscapeVertexFactoryVertexShaderParameters::GetTypeLayout
          (FLandscapeVertexFactoryVertexShaderParameters *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeVerte;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FLandscapeVertexFactoryVertexShaderParameters,0>::Do;
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
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

// InternalDestroy @ 145f97ca0

void __cdecl
FLandscapeVertexFactoryVertexShaderParameters::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined4 *)param_1 = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 145fa4600

FTypeLayoutDesc * __cdecl FLandscapeVertexFactoryVertexShaderParameters::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x04';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = u_FLandscapeVerte;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ =
         TGetDefaultObjectHelper<FLandscapeVertexFactoryVertexShaderParameters,0>::Do;
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
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
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

