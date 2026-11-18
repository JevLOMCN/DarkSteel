// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// FOpenGLShaderParameterCache @ 145be4630

FOpenGLShaderParameterCache * __thiscall
FOpenGLShaderParameterCache::FOpenGLShaderParameterCache(FOpenGLShaderParameterCache *this)

{
  this->GlobalUniformArraySize = -1;
  this->PackedGlobalUniformDirty[0].StartVector = 0;
  this->PackedGlobalUniformDirty[0].NumVectors = 0;
  this->PackedGlobalUniformDirty[1].StartVector = 0;
  this->PackedGlobalUniformDirty[1].NumVectors = 0;
  this->PackedGlobalUniformDirty[2].StartVector = 0;
  this->PackedGlobalUniformDirty[2].NumVectors = 0;
  this->PackedGlobalUniformDirty[3].StartVector = 0;
  this->PackedGlobalUniformDirty[3].NumVectors = 0;
  this->PackedGlobalUniformDirty[4].StartVector = 0;
  this->PackedGlobalUniformDirty[4].NumVectors = 0;
  this->PackedGlobalUniformDirty[5].StartVector = 0;
  this->PackedGlobalUniformDirty[5].NumVectors = 0;
  this->PackedGlobalUniformDirty[6].StartVector = 0;
  this->PackedGlobalUniformDirty[6].NumVectors = 0;
  return this;
}

// ~FOpenGLShaderParameterCache @ 145be9db0

void __thiscall
FOpenGLShaderParameterCache::~FOpenGLShaderParameterCache(FOpenGLShaderParameterCache *this)

{
  if (0 < this->GlobalUniformArraySize) {
    FMemory::Free(this->PackedUniformsScratch[0]);
    FMemory::Free(this->PackedGlobalUniforms[0]);
  }
  this->PackedUniformsScratch[0] = (uchar *)0x0;
  this->PackedUniformsScratch[1] = (uchar *)0x0;
  this->PackedUniformsScratch[2] = (uchar *)0x0;
  this->PackedUniformsScratch[3] = (uchar *)0x0;
  this->PackedUniformsScratch[4] = (uchar *)0x0;
  this->PackedUniformsScratch[5] = (uchar *)0x0;
  this->PackedUniformsScratch[6] = (uchar *)0x0;
  this->PackedGlobalUniforms[0] = (uchar *)0x0;
  this->PackedGlobalUniforms[1] = (uchar *)0x0;
  this->PackedGlobalUniforms[2] = (uchar *)0x0;
  this->PackedGlobalUniforms[3] = (uchar *)0x0;
  this->PackedGlobalUniforms[4] = (uchar *)0x0;
  this->PackedGlobalUniforms[5] = (uchar *)0x0;
  this->PackedGlobalUniforms[6] = (uchar *)0x0;
  this->GlobalUniformArraySize = -1;
  return;
}

// CommitPackedGlobals @ 145bf72c0

/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLShaderParameterCache::CommitPackedGlobals
          (FOpenGLShaderParameterCache *this,FOpenGLLinkedProgram *param_1,EShaderStage param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLUniformCommitTime> FVar10;
  HGLRC pHVar11;
  FShaderStage *pFVar12;
  FName FVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  FColor_u_0 local_68 [2];
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  
  FVar10 = StatPtr_STAT_OpenGLUniformCommitTime;
  if (StatPtr_STAT_OpenGLUniformCommitTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformCommitTime>)0x0) {
    pFVar9 = ::FName::FName(&local_50,"STAT_OpenGLUniformCommitTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLUniformCommitTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLUniformCommitTime,*pFVar9,
                        L"Uniform commit time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                        L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar13.ComparisonIndex.Value.Value != 0) || (FVar13.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_68[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_68[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_60.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value;
        local_60.Number = FVar13.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_60,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0xc8d);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_145bf744a;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  local_58 = local_48;
  FVar13 = local_48;
LAB_145bf744a:
  pHVar11 = wglGetCurrentContext();
  if (pHVar11 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar12 = FOpenGLLinkedProgram::GetStage(param_1,param_2);
  uVar15 = 0;
  if (0 < (pFVar12->PackedUniformInfos).ArrayNum) {
    lVar18 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < (pFVar12->PackedUniformInfos).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (pFVar12->PackedUniformInfos).AllocatorInstance.Data;
      iVar14 = *(int *)(pFVar2 + lVar18 * 8);
      if ((-1 < iVar14) &&
         (this->PackedGlobalUniformDirty[(byte)pFVar2[lVar18 * 8 + 5]].NumVectors != 0)) {
        if ((6 < (byte)pFVar2[lVar18 * 8 + 5]) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("UniformInfo.Index < CrossCompiler::PACKED_TYPEINDEX_MAX",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                               ,0xca8,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar15 < (pFVar12->Bindings).PackedGlobalArrays.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = pFVar2[lVar18 * 8 + 5];
        uVar8 = this->PackedGlobalUniformDirty[(byte)FVar1].StartVector;
        uVar16 = (*(ushort *)
                   ((pFVar12->Bindings).PackedGlobalArrays.AllocatorInstance.Data + lVar18 * 4) >> 4
                 ) - uVar8;
        if (this->PackedGlobalUniformDirty[(byte)FVar1].NumVectors < uVar16) {
          uVar16 = this->PackedGlobalUniformDirty[(byte)FVar1].NumVectors;
        }
        if ((uVar16 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumDirtyVectors",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                               ,0xcae,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar1 = pFVar2[lVar18 * 8 + 5];
        iVar14 = iVar14 + uVar8;
        pfVar17 = (float *)(this->PackedGlobalUniforms[(byte)FVar1] + (ulonglong)uVar8 * 0x10);
        if (((FVar1 == (FScriptContainerElement)0x0) || (FVar1 == (FScriptContainerElement)0x1)) ||
           (FVar1 == (FScriptContainerElement)0x2)) {
          (*glUniform4fv)(iVar14,uVar16,pfVar17);
        }
        else if (FVar1 == (FScriptContainerElement)0x3) {
          (*glUniform4iv)(iVar14,uVar16,(int *)pfVar17);
        }
        else if (FVar1 == (FScriptContainerElement)0x4) {
          (*glUniform4uiv)(iVar14,uVar16,(uint *)pfVar17);
        }
        this->PackedGlobalUniformDirty[(byte)pFVar2[lVar18 * 8 + 5]].StartVector = 0;
        this->PackedGlobalUniformDirty[(byte)pFVar2[lVar18 * 8 + 5]].NumVectors = 0;
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 1;
      FVar13 = local_58;
    } while ((int)uVar15 < (pFVar12->PackedUniformInfos).ArrayNum);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// CommitPackedUniformBuffers @ 145bf76f0

/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLShaderParameterCache::CommitPackedUniformBuffers
          (FOpenGLShaderParameterCache *this,FOpenGLLinkedProgram *param_1,EShaderStage param_2,
          FRHIUniformBuffer **param_3,
          TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  char cVar3;
  uint uVar4;
  FRHIUniformBuffer *pFVar5;
  float *pfVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_OpenGLConstantBufferUpdateTime> FVar13;
  HGLRC pHVar14;
  FShaderStage *pFVar15;
  FShaderStage *pFVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  FScriptContainerElement *pFVar29;
  FRHIUniformBuffer **local_res20;
  uint local_c4;
  FName local_c0;
  longlong local_b8;
  longlong local_b0;
  FColor_u_0 local_a8;
  uint local_a4;
  longlong local_a0;
  FShaderStage *local_98;
  FName local_90;
  FName local_88;
  FScriptContainerElement *local_78;
  FShaderStage *local_70;
  FName local_68;
  FString local_60 [2];
  
  uVar27 = 0;
  FVar13 = StatPtr_STAT_OpenGLConstantBufferUpdateTime;
  if (StatPtr_STAT_OpenGLConstantBufferUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLConstantBufferUpdateTime>)0x0) {
    pFVar12 = ::FName::FName(&local_68,"STAT_OpenGLConstantBufferUpdateTime");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_OpenGLConstantBufferUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLConstantBufferUpdateTime,
                        *pFVar12,L"Constant buffer update time","STATGROUP_OpenGLRHI",
                        "STATCAT_Advanced",L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_c0 = *(FName *)FVar13;
  bVar8 = false;
  bVar9 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((local_c0.ComparisonIndex.Value.Value != 0) || (local_c0.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_90.ComparisonIndex.Value = local_c0.ComparisonIndex.Value.Value;
        local_90.Number = local_c0.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_90,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0xccc);
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_c0,CycleScopeStart);
      bVar10 = true;
      goto LAB_145bf7877;
    }
  }
  bVar9 = bVar11;
  bVar8 = bVar10;
  bVar10 = false;
  local_c0 = local_88;
LAB_145bf7877:
  pHVar14 = wglGetCurrentContext();
  if (pHVar14 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar15 = FOpenGLLinkedProgram::GetStage(param_1,param_2);
  local_98 = pFVar15;
  if ((0xe < (pFVar15->Bindings).NumUniformBuffers) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bindings.NumUniformBuffers <= FOpenGLRHIState::MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                          ,0xcd2,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = local_98;
  if ((pFVar15->Bindings).bFlattenUB == false) {
    pFVar16 = FOpenGLLinkedProgram::GetStage(param_1,param_2);
    local_c4 = 0;
    local_70 = pFVar16;
    if ((pFVar15->Bindings).NumUniformBuffers != '\0') {
      local_b0 = 0;
      local_b8 = 0;
      local_a0 = 0;
      do {
        lVar20 = local_a0;
        pFVar5 = *param_3;
        if (pFVar5 == (FRHIUniformBuffer *)0x0) {
          if ((-1 < (int)uVar27) && ((int)uVar27 < (pFVar16->LastEmulatedUniformBufferSet).ArrayNum)
             ) {
            FOpenGLProgramKey::ToString((FOpenGLProgramKey *)param_1,local_60);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
            }
          }
        }
        else if (((*(char *)((longlong)&pFVar5[1]._padding_ + 5) != '\0') && (-1 < (int)uVar27)) &&
                ((int)uVar27 < (pFVar16->LastEmulatedUniformBufferSet).ArrayNum)) {
          if (((int)uVar27 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar18 = (int)pFVar5[1]._padding_;
          if (*(int *)((pFVar16->LastEmulatedUniformBufferSet).AllocatorInstance.Data + lVar20) !=
              iVar18) {
            uVar17 = 0;
            if ((int)uVar27 < (pFVar16->LastEmulatedUniformBufferSet).ArrayNum) {
              uVar17 = ~uVar27 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(int *)((pFVar16->LastEmulatedUniformBufferSet).AllocatorInstance.Data + lVar20) =
                 iVar18;
            iVar18 = param_4->ArrayNum;
            uVar17 = local_c4;
            lVar20 = local_b0;
            if ((int)local_c4 < iVar18) {
              lVar24 = local_b0 * 10;
              lVar22 = local_b0;
              uVar25 = local_c4;
              do {
                uVar17 = 0;
                if ((int)uVar25 < iVar18) {
                  uVar17 = ~uVar25 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar23 = (param_4->AllocatorInstance).Data + lVar24;
                if ((byte)pFVar23[2] == uVar27) {
                  memcpy(this->PackedUniformsScratch[(byte)pFVar23[5]] +
                         (ulonglong)*(ushort *)(pFVar23 + 6) * 4,
                         (void *)(*(longlong *)(pFVar5[1]._padding_ + 0x10) +
                                 (ulonglong)*(ushort *)pFVar23 * 4),
                         (ulonglong)*(ushort *)(pFVar23 + 8) << 2);
                }
                else {
                  uVar17 = uVar25;
                  lVar20 = lVar22;
                  if ((int)uVar27 < (int)(uint)(byte)pFVar23[2]) break;
                }
                iVar18 = param_4->ArrayNum;
                uVar25 = uVar25 + 1;
                lVar22 = lVar22 + 1;
                lVar24 = lVar24 + 10;
                uVar17 = local_c4;
                lVar20 = local_b0;
              } while ((int)uVar25 < iVar18);
            }
            local_b0 = lVar20;
            local_c4 = uVar17;
            uVar17 = 0;
            if ((int)uVar27 < (pFVar16->PackedUniformBufferInfos).ArrayNum) {
              uVar17 = ~uVar27 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = 0;
            local_78 = (pFVar16->PackedUniformBufferInfos).AllocatorInstance.Data + local_b8;
            lVar24 = 0;
            lVar20 = local_a0;
            if (0 < *(int *)(local_78 + 8)) {
              local_a4 = ~uVar27 >> 0x1f;
              do {
                pFVar23 = local_78;
                pFVar15 = local_98;
                uVar25 = 0;
                if ((int)uVar27 < (local_98->Bindings).PackedUniformBuffers.ArrayNum) {
                  uVar25 = local_a4;
                }
                if ((uVar25 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar29 = (pFVar15->Bindings).PackedUniformBuffers.AllocatorInstance.Data + local_b8
                ;
                uVar26 = ~uVar17 >> 0x1f;
                uVar25 = 0;
                if ((int)uVar17 < *(int *)(pFVar23 + 8)) {
                  uVar25 = uVar26;
                }
                if ((uVar25 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                lVar20 = *(longlong *)pFVar23;
                piVar1 = (int *)(lVar20 + lVar24 * 8);
                if (-1 < *(int *)(lVar20 + lVar24 * 8)) {
                  pfVar6 = (float *)this->PackedUniformsScratch[*(byte *)((longlong)piVar1 + 5)];
                  uVar25 = 0;
                  if ((int)uVar17 < *(int *)(pFVar29 + 8)) {
                    uVar25 = uVar26;
                  }
                  if ((uVar25 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  uVar25 = 0;
                  if ((int)uVar17 < *(int *)(pFVar29 + 8)) {
                    uVar25 = uVar26;
                  }
                  if ((uVar25 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if (((char)piVar1[1] != *(char *)(*(longlong *)pFVar29 + 2 + lVar24 * 4)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("UniformInfo.ArrayType == UBInfo[InfoIndex].TypeName",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                          ,0xd30,L""), bVar11)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  cVar3 = *(char *)((longlong)piVar1 + 5);
                  if (((cVar3 == '\0') || (cVar3 == '\x01')) || (cVar3 == '\x02')) {
                    (*glUniform4fv)(*piVar1,0,pfVar6);
                  }
                  else if (cVar3 == '\x03') {
                    (*glUniform4iv)(*piVar1,0,(int *)pfVar6);
                  }
                  else if (cVar3 == '\x04') {
                    (*glUniform4uiv)(*piVar1,0,(uint *)pfVar6);
                  }
                }
                uVar17 = uVar17 + 1;
                lVar24 = lVar24 + 1;
                lVar20 = local_a0;
                pFVar16 = local_70;
              } while ((int)uVar17 < *(int *)(local_78 + 8));
            }
          }
        }
        param_3 = param_3 + 1;
        local_a0 = lVar20 + 4;
        local_b8 = local_b8 + 0x10;
        uVar27 = uVar27 + 1;
      } while ((int)uVar27 < (int)(uint)(local_98->Bindings).NumUniformBuffers);
    }
  }
  else {
    uVar17 = 0;
    local_c4 = 0;
    if ((pFVar15->Bindings).NumUniformBuffers != '\0') {
      lVar20 = 0;
      local_res20 = param_3;
      do {
        pFVar5 = *local_res20;
        uVar25 = uVar17;
        if ((pFVar5 == (FRHIUniformBuffer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("UniformBuffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                ,0xcda,L""), uVar25 = local_c4, bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar24 = lVar20;
        uVar17 = uVar25;
        uVar26 = local_c4;
        if (*(char *)((longlong)&pFVar5[1]._padding_ + 5) != '\0') {
          iVar18 = param_4->ArrayNum;
          lVar22 = *(longlong *)(pFVar5[1]._padding_ + 0x10);
          if ((int)uVar25 < iVar18) {
            lVar28 = lVar20 * 10;
            lVar21 = lVar20;
            do {
              uVar17 = 0;
              if ((int)uVar25 < iVar18) {
                uVar17 = ~uVar25 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pFVar23 = (param_4->AllocatorInstance).Data + lVar28;
              lVar24 = lVar21;
              uVar17 = uVar25;
              uVar26 = uVar25;
              if ((byte)pFVar23[2] != uVar27) break;
              if (((uint)this->GlobalUniformArraySize <
                   ((uint)*(ushort *)(pFVar23 + 8) + (uint)*(ushort *)(pFVar23 + 6)) * 4) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Info.DestOffsetInFloats + Info.SizeInFloats) * sizeof(float) <= (uint32)GlobalUniformArraySize"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                      ,0xce7,L""), bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              memcpy(this->PackedGlobalUniforms[(byte)pFVar23[5]] +
                     (ulonglong)*(ushort *)(pFVar23 + 6) * 4,
                     (void *)(lVar22 + (ulonglong)*(ushort *)pFVar23 * 4),
                     (ulonglong)*(ushort *)(pFVar23 + 8) << 2);
              FVar2 = pFVar23[5];
              uVar19 = *(ushort *)(pFVar23 + 8) + 3 >> 2;
              uVar26 = (uint)(*(ushort *)(pFVar23 + 6) >> 2);
              uVar17 = this->PackedGlobalUniformDirty[(byte)FVar2].NumVectors;
              if (uVar17 != 0) {
                uVar4 = this->PackedGlobalUniformDirty[(byte)FVar2].StartVector;
                uVar19 = uVar19 + uVar26;
                uVar17 = uVar17 + uVar4;
                if (uVar4 < uVar26) {
                  uVar26 = uVar4;
                }
                if (uVar19 < uVar17) {
                  uVar19 = uVar17;
                }
                uVar19 = (uVar19 - uVar26) + 1;
              }
              this->PackedGlobalUniformDirty[(byte)FVar2].StartVector = uVar26;
              uVar25 = uVar25 + 1;
              this->PackedGlobalUniformDirty[(byte)FVar2].NumVectors = uVar19;
              lVar21 = lVar21 + 1;
              iVar18 = param_4->ArrayNum;
              lVar28 = lVar28 + 10;
              lVar24 = lVar20;
              uVar17 = local_c4;
              uVar26 = local_c4;
            } while ((int)uVar25 < iVar18);
          }
        }
        local_c4 = uVar26;
        local_res20 = local_res20 + 1;
        uVar27 = uVar27 + 1;
        lVar20 = lVar24;
      } while ((int)uVar27 < (int)(uint)(pFVar16->Bindings).NumUniformBuffers);
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(local_c0,CycleScopeEnd);
  }
  return;
}

// InitializeResources @ 145c09670

void __thiscall
FOpenGLShaderParameterCache::InitializeResources(FOpenGLShaderParameterCache *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar *puVar3;
  uchar *puVar4;
  ulong64 _Size;
  uint uVar5;
  
  if (this->GlobalUniformArraySize != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlobalUniformArraySize == -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0xc45,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = param_1 + 0xfU & 0xfffffff0;
  _Size = (ulong64)(int)(uVar5 * 7);
  puVar3 = FMemory::Malloc(_Size,0);
  this->PackedGlobalUniforms[0] = puVar3;
  puVar3 = FMemory::Malloc(_Size,0);
  this->PackedUniformsScratch[0] = puVar3;
  memset(this->PackedGlobalUniforms[0],0,_Size);
  memset(this->PackedUniformsScratch[0],0,_Size);
  puVar3 = this->PackedGlobalUniforms[0] + (int)uVar5;
  puVar4 = this->PackedUniformsScratch[0] + (int)uVar5;
  this->PackedGlobalUniforms[1] = puVar3;
  this->PackedUniformsScratch[1] = puVar4;
  puVar3 = puVar3 + (int)uVar5;
  this->PackedGlobalUniforms[2] = puVar3;
  puVar4 = puVar4 + (int)uVar5;
  this->PackedUniformsScratch[2] = puVar4;
  puVar3 = puVar3 + (int)uVar5;
  this->PackedGlobalUniforms[3] = puVar3;
  puVar4 = puVar4 + (int)uVar5;
  this->PackedUniformsScratch[3] = puVar4;
  puVar3 = puVar3 + (int)uVar5;
  this->PackedGlobalUniforms[4] = puVar3;
  puVar4 = puVar4 + (int)uVar5;
  this->PackedUniformsScratch[4] = puVar4;
  this->PackedGlobalUniforms[5] = puVar3 + (int)uVar5;
  this->PackedUniformsScratch[5] = puVar4 + (int)uVar5;
  this->PackedGlobalUniforms[6] = puVar3 + (int)uVar5 + (int)uVar5;
  this->PackedUniformsScratch[6] = puVar4 + (int)uVar5 + (int)uVar5;
  this->GlobalUniformArraySize = uVar5;
  this->PackedGlobalUniformDirty[0].StartVector = 0;
  uVar5 = param_1 + 0xfU >> 4;
  this->PackedGlobalUniformDirty[0].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[1].StartVector = 0;
  this->PackedGlobalUniformDirty[1].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[2].StartVector = 0;
  this->PackedGlobalUniformDirty[2].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[3].StartVector = 0;
  this->PackedGlobalUniformDirty[3].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[4].StartVector = 0;
  this->PackedGlobalUniformDirty[4].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[5].StartVector = 0;
  this->PackedGlobalUniformDirty[5].NumVectors = uVar5;
  this->PackedGlobalUniformDirty[6].StartVector = 0;
  this->PackedGlobalUniformDirty[6].NumVectors = uVar5;
  return;
}

// MarkAllDirty @ 145c0d210

void __thiscall FOpenGLShaderParameterCache::MarkAllDirty(FOpenGLShaderParameterCache *this)

{
  uint uVar1;
  
  this->PackedGlobalUniformDirty[0].StartVector = 0;
  uVar1 = (uint)this->GlobalUniformArraySize >> 4;
  this->PackedGlobalUniformDirty[0].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[1].StartVector = 0;
  this->PackedGlobalUniformDirty[1].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[2].StartVector = 0;
  this->PackedGlobalUniformDirty[2].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[3].StartVector = 0;
  this->PackedGlobalUniformDirty[3].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[4].StartVector = 0;
  this->PackedGlobalUniformDirty[4].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[5].StartVector = 0;
  this->PackedGlobalUniformDirty[5].NumVectors = uVar1;
  this->PackedGlobalUniformDirty[6].StartVector = 0;
  this->PackedGlobalUniformDirty[6].NumVectors = uVar1;
  return;
}

// Set @ 145c2ce00

void __thiscall
FOpenGLShaderParameterCache::Set
          (FOpenGLShaderParameterCache *this,uint param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = CrossCompiler::PackedTypeNameToTypeIndex((uchar)param_1);
  if (this->GlobalUniformArraySize == -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GlobalUniformArraySize != -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0xc7e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (6 < bVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferIndex < CrossCompiler::PACKED_TYPEINDEX_MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0xc7f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((uint)this->GlobalUniformArraySize < param_2 + param_3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ByteOffset + NumBytes <= (uint32)GlobalUniformArraySize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0xc80,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = this->PackedGlobalUniformDirty[bVar3].NumVectors;
  uVar6 = param_3 + 0xf >> 4;
  uVar7 = param_2 >> 4;
  if (uVar5 != 0) {
    uVar1 = this->PackedGlobalUniformDirty[bVar3].StartVector;
    uVar6 = uVar6 + uVar7;
    uVar5 = uVar5 + uVar1;
    if (uVar1 < uVar7) {
      uVar7 = uVar1;
    }
    if (uVar6 < uVar5) {
      uVar6 = uVar5;
    }
    uVar6 = (uVar6 - uVar7) + 1;
  }
  this->PackedGlobalUniformDirty[bVar3].StartVector = uVar7;
  this->PackedGlobalUniformDirty[bVar3].NumVectors = uVar6;
  memcpy(this->PackedGlobalUniforms[bVar3] + param_2,param_4,(ulonglong)param_3);
  return;
}

