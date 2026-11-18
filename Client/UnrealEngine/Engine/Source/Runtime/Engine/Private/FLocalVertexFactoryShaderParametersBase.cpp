// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Bind @ 147eb1020

void __thiscall
FLocalVertexFactoryShaderParametersBase::Bind
          (FLocalVertexFactoryShaderParametersBase *this,FShaderParameterMap *param_1)

{
  bool bVar1;
  TStringView<wchar_t> local_18;
  
  FShaderParameter::Bind(&this->LODParameter,param_1,L"SpeedTreeLODInfo",SPF_Optional);
  if ((this->LODParameter).NumBytes == 0) {
    local_18.Size = 0xd;
    local_18.DataPtr = L"SpeedTreeData";
    bVar1 = FShaderParameterMap::ContainsParameterAllocation(param_1,&local_18);
    if (!bVar1) {
      this->bAnySpeedTreeParamIsBound = false;
      return;
    }
  }
  this->bAnySpeedTreeParamIsBound = true;
  return;
}

// GetElementShaderBindingsBase @ 147ebfbf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase
          (FLocalVertexFactoryShaderParametersBase *this,FSceneInterface *param_1,
          FSceneView *param_2,FMeshMaterialShader *param_3,EVertexInputStreamType param_4,
          Type param_5,FVertexFactory *param_6,FMeshBatchElement *param_7,FRHIUniformBuffer *param_8
          ,FMeshDrawSingleShaderBindings *param_9,
          TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>
          *param_10)

{
  int *piVar1;
  FVertexBuffer *pFVar2;
  code *pcVar3;
  FMeshBatchElement *pFVar4;
  bool bVar5;
  bool bVar6;
  Type TVar7;
  FVertexFactory *this_00;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase(FSceneInterface_const_*,FSceneView_const_*,FMeshMaterialShader_const_*,EVertexInputStreamType,ERHIFeatureLevel::Type,FVertexFactory_const_*,FMeshBatchElement_const_&,FRHIUniformBuffer_*,FMeshDrawSingleShaderBindings_&,TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>_&)const_::_24_::FStat_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree>
  FVar15;
  FRHIUniformBuffer *pFVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FMeshDrawSingleShaderBindings *this_03;
  FName local_res8;
  TVector<float>_u_0 local_98;
  FHashedName local_88;
  FHashedName local_80;
  LARGE_INTEGER local_78;
  FStatMessage local_70;
  FHashedName local_60;
  FName local_58;
  FName local_50;
  FHashedName local_48 [2];
  
  this_00 = param_6;
  lVar10 = (**(code **)(param_6->_padding_ + 0x30))(param_6);
  TVar7 = param_5;
  if ((*(uint *)(lVar10 + 0x38) & 0x4000) == 0) {
LAB_147ebfc44:
    pFVar4 = param_7;
    if (FReadOnlyCVARCache::bAllowStaticLighting != false) goto LAB_147ebfc51;
  }
  else {
    bVar8 = FVertexFactoryType::CheckManualVertexFetchSupport(param_5);
    if (!bVar8) goto LAB_147ebfc44;
LAB_147ebfc51:
    pFVar16 = param_8;
    if (param_8 == (FRHIUniformBuffer *)0x0) {
      pFVar16 = *(FRHIUniformBuffer **)&this_00[1].PositionStream.ArrayNum;
    }
    pFVar11 = FLocalVertexFactoryUniformShaderParameters::GetStructMetadata();
    FHashedName::FHashedName(&local_88,&pFVar11->ShaderVariableHashedName);
    FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_60,&local_88);
    pFVar13 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar12);
    pFVar4 = param_7;
    if (pFVar13->BaseIndex != 0xffff) {
      if (pFVar16 == (FRHIUniformBuffer *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                           ,0x8f,L"Attempted to set null uniform buffer");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pFVar13->BaseIndex == 0xffff) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4717616138333192331>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                           ,0x8b,"IsBound()");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
                (param_9,pFVar16,(uint)pFVar13->BaseIndex);
      pFVar4 = param_7;
    }
  }
  param_7 = pFVar4;
  if (pFVar4->bUserDataIsColorVertexBuffer != 0) {
    pFVar2 = pFVar4->UserData;
    if (pFVar2 == (FVertexBuffer *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverrideColorVertexBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                         ,0xa7,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar10 = (**(code **)(this_00->_padding_ + 0x30))(this_00);
    if ((*(uint *)(lVar10 + 0x38) & 0x4000) != 0) {
      bVar8 = FVertexFactoryType::CheckManualVertexFetchSupport(TVar7);
      if (bVar8) goto LAB_147ebfd74;
    }
    FLocalVertexFactory::GetColorOverrideStream((FLocalVertexFactory *)this_00,pFVar2,param_10);
  }
LAB_147ebfd74:
  if (this->bAnySpeedTreeParamIsBound == false) {
    return;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree ==
          (FThreadSafeStaticStat<_public:_void___cdecl_FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase(FSceneInterface_const_*,FSceneView_const_*,FMeshMaterialShader_const_*,EVertexInputStreamType,ERHIFeatureLevel::Type,FVertexFactory_const_*,FMeshBatchElement_const_&,FRHIUniformBuffer_*,FMeshDrawSingleShaderBindings_&,TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>_&)const_::_24_::FStat_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree>
           )0x0) {
        pFVar14 = ::FName::FName(&local_58,
                                 "STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree,*pFVar14,
                   L"STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar15 = StatPtr_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree;
  if (StatPtr_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase(FSceneInterface_const_*,FSceneView_const_*,FMeshMaterialShader_const_*,EVertexInputStreamType,ERHIFeatureLevel::Type,FVertexFactory_const_*,FMeshBatchElement_const_&,FRHIUniformBuffer_*,FMeshDrawSingleShaderBindings_&,TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>_&)const_::_24_::FStat_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree>
       )0x0) {
    pFVar14 = ::FName::FName(&local_50,"STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree")
    ;
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FLocalVertexFactoryShaderParametersBase::GetElementShaderBindingsBase(FSceneInterface_const_*,FSceneView_const_*,FMeshMaterialShader_const_*,EVertexInputStreamType,ERHIFeatureLevel::Type,FVertexFactory_const_*,FMeshBatchElement_const_&,FRHIUniformBuffer_*,FMeshDrawSingleShaderBindings_&,TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_>_&)const_::_24_::FStat_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree,
                          *pFVar14,L"STAT_FLocalVertexFactoryShaderParameters_SetMesh_SpeedTree",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  bVar8 = false;
  bVar6 = false;
  FVar19 = *(FName *)FVar15;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_147ebfec7:
    bVar5 = false;
    FVar19.ComparisonIndex.Value = 0;
    FVar19.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      param_5 = ES2_REMOVED;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&param_5,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar18.Value;
        local_res8.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                   ,0xb1);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147ebfec7;
    param_7._0_4_ = FVar18.Value;
    param_7._4_4_ = uVar17;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar5 = true;
  }
  if (param_1 != (FSceneInterface *)0x0) {
    pFVar16 = (FRHIUniformBuffer *)(**(code **)(param_1->_padding_ + 0x3c8))(param_1,this_00);
    if (pFVar16 != (FRHIUniformBuffer *)0x0) goto LAB_147ebff7e;
  }
  if (GSpeedTreeWindNullUniformBuffer._40_8_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (GSpeedTreeWindNullUniformBuffer._40_8_ == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniformBufferRHI.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                         ,0x66,L"");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  pFVar16 = (FRHIUniformBuffer *)GSpeedTreeWindNullUniformBuffer._40_8_;
  if (GSpeedTreeWindNullUniformBuffer._40_8_ == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpeedTreeUniformBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LocalVertexFactory.cpp"
                       ,0xb7,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
LAB_147ebff7e:
  pFVar11 = FSpeedTreeUniformParameters::GetStructMetadata();
  FHashedName::FHashedName(&local_80,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(local_48,&local_80);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)param_3,FVar12);
  this_03 = param_9;
  if (pFVar13->BaseIndex != 0xffff) {
    if (pFVar16 == (FRHIUniformBuffer *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Value",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x8f,L"Attempted to set null uniform buffer");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (pFVar13->BaseIndex == 0xffff) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4717616138333192331>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameters.h"
                         ,0x8b,"IsBound()");
      if (bVar9) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_03 = param_9;
    FMeshDrawSingleShaderBindings::WriteBindingUniformBuffer
              (param_9,pFVar16,(uint)pFVar13->BaseIndex);
  }
  if ((this->LODParameter).NumBytes != 0) {
    local_98._s_0.Y = pFVar4->MaxScreenSize;
    local_98._s_0.X = pFVar4->MinScreenSize;
    param_6._0_2_ = (this->LODParameter).BufferIndex;
    param_6._2_2_ = (this->LODParameter).BaseIndex;
    local_98._s_0.Z = local_98._s_0.Y - local_98._s_0.X;
    param_6._4_2_ = (this->LODParameter).NumBytes;
    FMeshDrawSingleShaderBindings::Add<UE::Math::TVector<float>_>
              (this_03,SUB86(&param_6,0),(TVector<float> *)&local_98._s_0);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_70.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_78);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_78.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_78.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_78.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_78.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_70);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// GetTypeLayout @ 147ec71a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FLocalVertexFactoryShaderParametersBase::GetTypeLayout
          (FLocalVertexFactoryShaderParametersBase *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLocalVertexFac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLocalVertexFactoryShaderParametersBase,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bAnySpeedTreeParamIsBound";
    DAT_1552136c2 = Freeze::FindFieldNameLength(L"bAnySpeedTreeParamIsBound");
    _DAT_1552136a0 = StaticGetTypeLayoutDesc<bool>();
    DAT_1552136a8 = ::TypeBuffer[0x10];
    DAT_1552136a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552136a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552136a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552136a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552136a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552136a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552136a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552136b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552136b8 = 10;
    _DAT_1552136bc = 1;
    _DAT_1552136c0 = 0;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LODParameter";
    DAT_155213692 = Freeze::FindFieldNameLength(L"LODParameter");
    _DAT_155213670 = FShaderParameter::StaticGetTypeLayout();
    DAT_155213678 = ::TypeBuffer[0x10];
    DAT_155213678_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155213678_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155213678_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155213678_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155213678_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155213678_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155213678_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155213680 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155213688 = 4;
    _DAT_15521368c = 1;
    _DAT_155213690 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// InternalDestroy @ 147ecc5d0

void __cdecl
FLocalVertexFactoryShaderParametersBase::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0xfefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 8) = 0xfefefefe;
  return;
}

// StaticGetTypeLayout @ 147eded70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FLocalVertexFactoryShaderParametersBase::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\f';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FLocalVertexFac;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FLocalVertexFactoryShaderParametersBase,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "bAnySpeedTreeParamIsBound";
    DAT_1552136c2 = Freeze::FindFieldNameLength(L"bAnySpeedTreeParamIsBound");
    _DAT_1552136a0 = StaticGetTypeLayoutDesc<bool>();
    DAT_1552136a8 = ::TypeBuffer[0x10];
    DAT_1552136a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1552136a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1552136a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1552136a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1552136a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1552136a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1552136a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1552136b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552136b8 = 10;
    _DAT_1552136bc = 1;
    _DAT_1552136c0 = 0;
    `public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LODParameter";
    DAT_155213692 = Freeze::FindFieldNameLength(L"LODParameter");
    _DAT_155213670 = FShaderParameter::StaticGetTypeLayout();
    DAT_155213678 = ::TypeBuffer[0x10];
    DAT_155213678_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155213678_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155213678_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155213678_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155213678_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155213678_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155213678_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FLocalVertexFactoryShaderParametersBase::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_155213680 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155213688 = 4;
    _DAT_15521368c = 1;
    _DAT_155213690 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FVertexFactoryShaderParameters::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

