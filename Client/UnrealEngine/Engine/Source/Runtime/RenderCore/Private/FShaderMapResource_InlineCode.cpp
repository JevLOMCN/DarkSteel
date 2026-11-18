// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// FShaderMapResource_InlineCode @ 145e81c90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FShaderMapResource_InlineCode * __thiscall
FShaderMapResource_InlineCode::FShaderMapResource_InlineCode
          (FShaderMapResource_InlineCode *this,EShaderPlatform param_1,
          FShaderMapResourceCode *param_2)

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  ulong64 uVar5;
  void *_Dst;
  ulonglong uVar6;
  undefined8 local_38 [2];
  
  uVar2 = (param_2->ShaderCodeResources).ArrayNum;
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&FShaderMapResource::_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&FShaderMapResource::_vftable__for__FDeferredCleanupInterface__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  *(EShaderPlatform *)((longlong)&this->_padding_ + 4) = param_1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  plVar1 = &this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *plVar1 = 0;
  uVar6 = CONCAT44(0,uVar2 & 0x7fffffff);
  *(undefined4 *)&this->_padding_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar6;
  uVar5 = SUB168(ZEXT816(8) * auVar4,0);
  *(uint *)&this->_padding_ = uVar2 & 0x7fffffff;
  if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
    uVar5 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar5);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else if (uVar6 != 0) {
    memset(_Dst,0,uVar6 * 8);
  }
  if (plVar1 != local_38) {
    pvVar3 = (void *)*plVar1;
    *plVar1 = (longlong)_Dst;
    _Dst = (void *)0x0;
    operator_delete__(pvVar3);
  }
  operator_delete__(_Dst);
  if ((GRHIGlobals.RayTracing.Supported != false) &&
     (GRHIGlobals.RayTracing.SupportsShaders != false)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,
               (int *)((longlong)&this->_padding_ + 4));
    memset((void *)this->_padding_,0xff,(ulonglong)(uVar2 * 4));
  }
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  (this->Code).Reference = param_2;
  LOCK();
  *(int *)&param_2->_padding_ = (int)param_2->_padding_ + 1;
  UNLOCK();
  return this;
}

// CreateRHIShaderOrCrash @ 145e93470

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FRHIShader * __thiscall
FShaderMapResource_InlineCode::CreateRHIShaderOrCrash
          (FShaderMapResource_InlineCode *this,int param_1,bool param_2)

{
  FMemStackBase *this_00;
  longlong *plVar1;
  FShaderCodeResource *this_01;
  ulonglong uVar2;
  FStaticShaderPlatform FVar3;
  FShaderMapResourceCode *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  EShaderPlatform EVar8;
  uint uVar9;
  void *pvVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  EShaderFrequency EVar19;
  Type TVar20;
  int iVar21;
  FNameEntryId FVar22;
  FRHIShader *pFVar23;
  FName FVar24;
  uint *puVar25;
  FTlsAutoCleanup *pFVar26;
  FRHIShader *pFVar27;
  undefined4 extraout_var;
  FName *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated> FVar29;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FCsvProfiler *this_04;
  TCsvPersistentCustomStat<int> *pTVar30;
  FRHIShader *pFVar31;
  FRHIShader *pFVar32;
  FRHIShader *pFVar33;
  bool bVar34;
  FRHIShader *in_stack_fffffffffffffd38;
  undefined7 uVar35;
  undefined1 local_288 [4];
  Type local_284;
  FLLMScope local_280;
  FLLMScope local_27c;
  FLLMScope local_278;
  FLLMScope local_274;
  FLLMScope local_270;
  FLLMScope local_26c;
  FLLMScope local_268;
  FLLMScope local_264;
  FMemMark local_260;
  FString local_238;
  FRHIShader *local_228;
  FRHIShader *local_220;
  FRHIShader *local_218;
  FRHIShader *local_210;
  FRHIShader *local_208;
  FRHIShader *local_200;
  FRHIShader *local_1f8;
  FRHIShader *local_1f0;
  FRHIShader *local_1e8;
  FRHIShader *local_1e0;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FMemScope local_1c8;
  FMemScope local_1c0;
  FMemScope local_1b8;
  FMemScope local_1b0;
  FMemScope local_1a8;
  FMemScope local_1a0;
  FMemScope local_198;
  FMemScope local_190;
  FName local_188;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_180;
  undefined1 local_178 [16];
  TArrayView<unsigned_char_const_,int> local_168;
  FStatMessage local_158;
  FShaderCodeResource *local_148;
  code *local_140;
  undefined1 *local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  FName local_120;
  FName local_118;
  FString local_110;
  FString local_100;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId713,"FShaderMapResource_InlineCode::CreateRHIShaderOrCrash",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
               ,0x2c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
  }
  EVar8 = GMaxRHIShaderPlatform;
  FVar3.Platform = *(EShaderPlatform *)((longlong)&this->_padding_ + 4);
  if (GMaxRHIShaderPlatform != FVar3.Platform) {
    bVar14 = IsPCPlatform((FStaticShaderPlatform)GMaxRHIShaderPlatform);
    if ((bVar14) && (bVar14 = IsPCPlatform(FVar3), bVar14)) {
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].bContainsValidPlatformInfo == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid(Platform)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                              ,0xe2,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FRHIShader *)(*pcVar6)();
        return pFVar23;
      }
      TVar20 = FGenericDataDrivenShaderPlatformInfo::Infos[EVar8].MaxFeatureLevel;
      if ((FGenericDataDrivenShaderPlatformInfo::Infos[FVar3.Platform].bContainsValidPlatformInfo ==
           0) && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid(Platform)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                                      ,0xe2,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        pFVar23 = (FRHIShader *)(*pcVar6)();
        return pFVar23;
      }
      local_284 = FGenericDataDrivenShaderPlatformInfo::Infos[FVar3.Platform].MaxFeatureLevel;
      bVar14 = IsD3DPlatform(FVar3);
      bVar15 = IsD3DPlatform((FStaticShaderPlatform)EVar8);
      bVar16 = IsMetalPlatform((FStaticShaderPlatform)EVar8);
      bVar17 = IsMetalPlatform(FVar3);
      if ((bVar16 != bVar17) || (bVar16 = IsMetalPlatform((FStaticShaderPlatform)EVar8), bVar16)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      bVar17 = IsOpenGLPlatform((FStaticShaderPlatform)EVar8);
      bVar18 = IsOpenGLPlatform(FVar3);
      if (((((int)local_284 <= (int)TVar20) && (bVar15 == bVar14)) && (bVar16)) &&
         (bVar17 == bVar18)) goto LAB_145e936d7;
    }
    FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_130);
    ::FName::ToString((FName *)FVar24,&local_100);
    FVar24 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_128);
    ::FName::ToString((FName *)FVar24,&local_110);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    pFVar23 = (FRHIShader *)0x0;
    goto LAB_145e94048;
  }
LAB_145e936d7:
  puVar25 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_138 = local_288;
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar26 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_140,puVar25);
  pFVar4 = (this->Code).Reference;
  pFVar23 = (FRHIShader *)0x0;
  local_228 = (FRHIShader *)(longlong)param_1;
  this_00 = (FMemStackBase *)(pFVar26 + 2);
  local_284 = (uint)~param_1 >> 0x1f;
  TVar20 = ES2_REMOVED;
  if (param_1 < (pFVar4->ShaderCodeResources).ArrayNum) {
    TVar20 = local_284;
  }
  if ((TVar20 == ES2_REMOVED) &&
     (in_stack_fffffffffffffd38 = local_228,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FRHIShader *)(*pcVar6)();
    return pFVar23;
  }
  pFVar5 = (pFVar4->ShaderCodeResources).AllocatorInstance.Data;
  pFVar33 = *(FRHIShader **)(pFVar5 + (longlong)local_228 * 0x28 + 8);
  this_01 = (FShaderCodeResource *)(pFVar5 + (longlong)local_228 * 0x28);
  if (pFVar33 != (FRHIShader *)0x0) {
    LOCK();
    plVar1 = &pFVar33->_padding_;
    uVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      pFVar33->_padding_ = pFVar33->_padding_ + 0x40000000;
      UNLOCK();
    }
  }
  local_180.Owner = (FBufferOwner *)pFVar33;
  local_148 = this_01;
  FShaderCodeResource::GetCodeView(this_01,&local_168);
  local_260.Top = this_00->Top;
  local_260.SavedChunk = *(FTaggedMemory **)(pFVar26 + 4);
  local_260.bPopped = false;
  local_260.NextTopmostMark = *(FMemMark **)(pFVar26 + 5);
  pFVar26[5] = (FTlsAutoCleanup)&local_260;
  *(int *)(pFVar26 + 6) = *(int *)(pFVar26 + 6) + 1;
  local_260.Mem = this_00;
  iVar21 = FShaderCodeResource::GetUncompressedSize(this_01);
  pFVar27 = pFVar23;
  pFVar31 = pFVar23;
  if (pFVar33 != (FRHIShader *)0x0) {
    if (((ulonglong)pFVar33->_padding_ >> 0x3c & 4) == 0) {
      (**(code **)(pFVar33->_padding_ + 8))(pFVar33);
    }
    pFVar27 = (FRHIShader *)pFVar33->_padding_;
    pFVar31 = pFVar33;
  }
  pFVar32 = (FRHIShader *)(longlong)iVar21;
  if (pFVar27 != pFVar32) {
    local_1d8 = FMemStackBase::Alloc(this_00,(ulong64)pFVar32,0x10);
    pFVar27 = pFVar23;
    in_stack_fffffffffffffd38 = pFVar23;
    if (pFVar33 != (FRHIShader *)0x0) {
      if (((ulonglong)pFVar31->_padding_ >> 0x3c & 4) == 0) {
        (**(code **)(pFVar31->_padding_ + 8))(pFVar31);
      }
      in_stack_fffffffffffffd38 = (FRHIShader *)pFVar31->_padding_;
      if (((ulonglong)pFVar31->_padding_ >> 0x3c & 4) == 0) {
        (**(code **)(pFVar31->_padding_ + 8))(pFVar31);
      }
      pFVar27 = (FRHIShader *)pFVar31->_padding_;
    }
    FVar22 = FNameEntryId::FromValidEName((EName)local_178);
    pvVar10 = local_1d8;
    FVar24.Number = 0;
    FVar24.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar22.Value);
    bVar14 = FCompression::UncompressMemory
                       (FVar24,local_1d8,(long64)pFVar32,pFVar27,(long64)in_stack_fffffffffffffd38,
                        COMPRESS_NoFlags,0);
    if ((!bVar14) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("bSucceed",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                            ,0x2df,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar23 = (FRHIShader *)(*pcVar6)();
      return pFVar23;
    }
    local_1d8 = pvVar10;
    iStack_1d0 = iVar21;
    if ((iVar21 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar23 = (FRHIShader *)(*pcVar6)();
      return pFVar23;
    }
    local_168.DataPtr._0_4_ = (undefined4)local_1d8;
    local_168.DataPtr._4_4_ = local_1d8._4_4_;
    local_168.ArrayNum = iStack_1d0;
    local_168._12_4_ = uStack_1cc;
  }
  uVar13 = local_168._12_4_;
  iVar21 = local_168.ArrayNum;
  uVar12 = local_168.DataPtr._4_4_;
  uVar11 = local_168.DataPtr._0_4_;
  pFVar33 = local_228;
  pFVar4 = (this->Code).Reference;
  TVar20 = ES2_REMOVED;
  if (param_1 < (pFVar4->ShaderHashes).ArrayNum) {
    TVar20 = local_284;
  }
  if ((TVar20 == ES2_REMOVED) &&
     (in_stack_fffffffffffffd38 = local_228,
     bVar14 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    pFVar23 = (FRHIShader *)(*pcVar6)();
    return pFVar23;
  }
  pFVar5 = (pFVar4->ShaderHashes).AllocatorInstance.Data + (longlong)pFVar33 * 0x14;
  EVar19 = FShaderCodeResource::GetFrequency(local_148);
  uVar35 = (undefined7)((ulonglong)in_stack_fffffffffffffd38 >> 8);
  switch(EVar19) {
  case SF_Vertex:
    FLLMScope::FLLMScope(&local_280,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1c8,Shaders,true);
    local_e8 = uVar11;
    uStack_e4 = uVar12;
    iStack_e0 = iVar21;
    uStack_dc = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0x78))(GDynamicRHI,&local_220);
    FMemScope::~FMemScope(&local_1c8);
    FLLMScope::~FLLMScope(&local_280);
    pFVar33 = local_220;
    local_220 = (FRHIShader *)0x0;
    break;
  case SF_Mesh:
    FLLMScope::FLLMScope(&local_27c,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1c0,Shaders,true);
    local_d8 = uVar11;
    uStack_d4 = uVar12;
    iStack_d0 = iVar21;
    uStack_cc = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0x88))(GDynamicRHI,&local_218);
    FMemScope::~FMemScope(&local_1c0);
    FLLMScope::~FLLMScope(&local_27c);
    pFVar33 = local_218;
    local_218 = (FRHIShader *)0x0;
    break;
  case SF_Amplification:
    FLLMScope::FLLMScope(&local_278,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1b8,Shaders,true);
    local_c8 = uVar11;
    uStack_c4 = uVar12;
    iStack_c0 = iVar21;
    uStack_bc = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0x90))(GDynamicRHI,&local_210);
    FMemScope::~FMemScope(&local_1b8);
    FLLMScope::~FLLMScope(&local_278);
    pFVar33 = local_210;
    local_210 = (FRHIShader *)0x0;
    break;
  case SF_Pixel:
    FLLMScope::FLLMScope(&local_274,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1b0,Shaders,true);
    local_68 = uVar11;
    uStack_64 = uVar12;
    iStack_60 = iVar21;
    uStack_5c = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0x70))(GDynamicRHI,&local_208);
    FMemScope::~FMemScope(&local_1b0);
    FLLMScope::~FLLMScope(&local_274);
    pFVar33 = local_208;
    local_208 = (FRHIShader *)0x0;
    break;
  case SF_Geometry:
    FLLMScope::FLLMScope(&local_270,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1a8,Shaders,true);
    local_b8 = uVar11;
    uStack_b4 = uVar12;
    iStack_b0 = iVar21;
    uStack_ac = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0x80))(GDynamicRHI,&local_200);
    FMemScope::~FMemScope(&local_1a8);
    FLLMScope::~FLLMScope(&local_270);
    pFVar33 = local_200;
    local_200 = (FRHIShader *)0x0;
    break;
  case SF_Compute:
    FLLMScope::FLLMScope(&local_26c,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_1a0,Shaders,true);
    local_a8 = uVar11;
    uStack_a4 = uVar12;
    iStack_a0 = iVar21;
    uStack_9c = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0xa0))(GDynamicRHI,&local_1f8);
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(&local_26c);
    pFVar33 = local_1f8;
    local_1f8 = (FRHIShader *)0x0;
    break;
  case SF_NumStandardFrequencies:
  case SF_RayMiss:
  case SF_RayHitGroup:
  case SF_RayCallable:
    if ((GRHIGlobals.RayTracing.Supported != false) &&
       (GRHIGlobals.RayTracing.SupportsShaders != false)) {
      local_78 = uVar11;
      uStack_74 = uVar12;
      iStack_70 = iVar21;
      uStack_6c = uVar13;
      (**(code **)(GDynamicRHI->_padding_ + 0x4a0))
                (GDynamicRHI,&local_1e0,&local_78,pFVar5,CONCAT71(uVar35,EVar19));
      pFVar33 = local_1e0;
      local_1e0 = (FRHIShader *)0x0;
      break;
    }
    goto LAB_145e93f73;
  case SF_WorkGraphRoot:
    FLLMScope::FLLMScope(&local_268,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_198,Shaders,true);
    local_98 = uVar11;
    uStack_94 = uVar12;
    iStack_90 = iVar21;
    uStack_8c = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0xa8))
              (GDynamicRHI,&local_1f0,&local_98,pFVar5,CONCAT71(uVar35,10));
    FMemScope::~FMemScope(&local_198);
    FLLMScope::~FLLMScope(&local_268);
    pFVar33 = local_1f0;
    local_1f0 = (FRHIShader *)0x0;
    break;
  case SF_WorkGraphComputeNode:
    FLLMScope::FLLMScope(&local_264,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_190,Shaders,true);
    local_88 = uVar11;
    uStack_84 = uVar12;
    iStack_80 = iVar21;
    uStack_7c = uVar13;
    (**(code **)(GDynamicRHI->_padding_ + 0xa8))
              (GDynamicRHI,&local_1e8,&local_88,pFVar5,CONCAT71(uVar35,0xb));
    FMemScope::~FMemScope(&local_190);
    FLLMScope::~FLLMScope(&local_264);
    pFVar33 = local_1e8;
    local_1e8 = (FRHIShader *)0x0;
    break;
  default:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                        ,0x2fa,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pFVar23 = (FRHIShader *)(*pcVar6)();
      return pFVar23;
    }
    goto LAB_145e93f73;
  }
  if (pFVar33 == (FRHIShader *)0x0) {
LAB_145e93f73:
    if (param_2) {
      local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_238.Data.ArrayNum = 0;
      local_238.Data.ArrayMax = 0;
      BytesToHex((uchar *)pFVar5,0x14,&local_238);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    FVar29 = StatPtr_STAT_Shaders_NumShadersCreated;
    if (StatPtr_STAT_Shaders_NumShadersCreated ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)0x0) {
      pFVar28 = ::FName::FName(&local_120,"STAT_Shaders_NumShadersCreated");
      FVar29 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersCreated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersCreated,
                          *pFVar28,L"Num Shaders Created","STATGROUP_Shaders","STATCAT_Advanced",
                          L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar24 = *(FName *)FVar29;
    if (((FVar24 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      local_158.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_158.NameAndInfo.Number = FVar24.Number & 0xffffafff | 0xa000;
      local_158.StatData.Pad[0] = '\x01';
      local_158.StatData.Pad[1] = '\0';
      local_158.StatData.Pad[2] = '\0';
      local_158.StatData.Pad[3] = '\0';
      local_158.StatData.Pad[4] = '\0';
      local_158.StatData.Pad[5] = '\0';
      local_158.StatData.Pad[6] = '\0';
      local_158.StatData.Pad[7] = '\0';
      local_188 = FVar24;
      FThreadStats::AddStatMessage(this_02,&local_158);
      FStatsTrace::Add(&local_188,1);
      if (this_02->ScopeCount == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
    this_04 = FCsvProfiler::Get();
    uVar9 = _GCsvCategory_Shaders.Index;
    pFVar28 = ::FName::FName(&local_118,L"NumShadersCreated");
    pTVar30 = FCsvProfiler::GetOrCreatePersistentCustomStatInt(this_04,*pFVar28,uVar9,false);
    LOCK();
    pTVar30->Value = (atomic<int>)((int)pTVar30->Value + 1);
    UNLOCK();
    uVar7 = *(undefined8 *)(pFVar5 + 8);
    *(undefined8 *)(pFVar33->Hash).Hash = *(undefined8 *)pFVar5;
    *(undefined8 *)((pFVar33->Hash).Hash + 8) = uVar7;
    *(undefined4 *)((pFVar33->Hash).Hash + 0x10) = *(undefined4 *)(pFVar5 + 0x10);
    FRHIResource::AddRef((FRHIResource *)pFVar33);
    FRHIResource::Release((FRHIResource *)pFVar33);
    pFVar23 = pFVar33;
  }
  if (local_260.bPopped == false) {
    if (((local_260.Mem)->TopMark != &local_260) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      pFVar23 = (FRHIShader *)(*pcVar6)();
      return pFVar23;
    }
    local_260.bPopped = true;
    (local_260.Mem)->NumMarks = (local_260.Mem)->NumMarks + -1;
    if (local_260.SavedChunk != (local_260.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_260.Mem,local_260.SavedChunk);
    }
    (local_260.Mem)->Top = local_260.Top;
    (local_260.Mem)->TopMark = local_260.NextTopmostMark;
    local_260.Top = (uchar *)0x0;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_180);
LAB_145e94048:
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar23;
}

// GetFriendlyName @ 145e9d5c0

FString * __thiscall
FShaderMapResource_InlineCode::GetFriendlyName
          (FShaderMapResource_InlineCode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"InlineCode");
  return __return_storage_ptr__;
}

// GetShaderHash @ 145e9f340

FSHAHash * __thiscall
FShaderMapResource_InlineCode::GetShaderHash
          (FShaderMapResource_InlineCode *this,FSHAHash *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FShaderMapResourceCode *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FSHAHash *pFVar9;
  
  pFVar3 = (this->Code).Reference;
  uVar8 = 0;
  if (param_1 < (pFVar3->ShaderHashes).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FSHAHash *)(*pcVar5)();
      return pFVar9;
    }
  }
  pFVar4 = (pFVar3->ShaderHashes).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)param_1 * 0x14;
  uVar6 = *(undefined8 *)(pFVar1 + 8);
  uVar2 = *(undefined4 *)(pFVar4 + (longlong)param_1 * 0x14 + 0x10);
  *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)pFVar1;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar6;
  *(undefined4 *)(__return_storage_ptr__->Hash + 0x10) = uVar2;
  return __return_storage_ptr__;
}

// GetShaderSizeBytes @ 145ea0640

uint __thiscall
FShaderMapResource_InlineCode::GetShaderSizeBytes(FShaderMapResource_InlineCode *this,int param_1)

{
  FShaderMapResourceCode *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  pFVar1 = (this->Code).Reference;
  uVar4 = 0;
  if (pFVar1 != (FShaderMapResourceCode *)0x0) {
    uVar4 = 0;
    if (param_1 < (pFVar1->ShaderCodeResources).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return uVar4;
      }
    }
    uVar4 = FShaderCodeResource::GetUncompressedSize
                      ((FShaderCodeResource *)
                       ((pFVar1->ShaderCodeResources).AllocatorInstance.Data +
                       (longlong)param_1 * 0x28));
  }
  return uVar4;
}

// GetSizeBytes @ 145ea10f0

uint __thiscall FShaderMapResource_InlineCode::GetSizeBytes(FShaderMapResource_InlineCode *this)

{
  FShaderMapResourceCode *this_00;
  uint uVar1;
  
  uVar1 = 0;
  this_00 = (this->Code).Reference;
  if (this_00 != (FShaderMapResourceCode *)0x0) {
    uVar1 = FShaderMapResourceCode::GetSizeBytes(this_00);
  }
  return uVar1 + (*(int *)((longlong)&this->_padding_ + 4) + ((int)this->_padding_ + 0x10) * 2) * 4;
}

