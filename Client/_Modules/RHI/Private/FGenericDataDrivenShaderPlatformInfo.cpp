// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// FGenericDataDrivenShaderPlatformInfo @ 145c451f0

FGenericDataDrivenShaderPlatformInfo * __thiscall
FGenericDataDrivenShaderPlatformInfo::FGenericDataDrivenShaderPlatformInfo
          (FGenericDataDrivenShaderPlatformInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->PlatformName).ComparisonIndex = 0;
  (this->PlatformName).Number = 0;
  (this->Language).ComparisonIndex = 0;
  (this->Language).Number = 0;
  this->MaxFeatureLevel = ES2_REMOVED;
  (this->ShaderFormat).ComparisonIndex = 0;
  *(undefined8 *)&(this->ShaderFormat).Number = 0;
  puVar2 = &this->field_0x28;
  this->bIsMobile = 0;
  this->bNeedsOfflineCompiler = 0;
  this->bTargetsTiledGPU = 0;
  this->bSupportsGen5TemporalAA = 0;
  this->bRequiresExplicit128bitRT = 0;
  this->bSupportsConservativeRasterization = 0;
  this->bSupportsIntrinsicWaveOnce = 0;
  this->MaximumWaveSize = 0;
  this->MinimumWaveSize = 0;
  this->bSupportsWavePermute = 0;
  this->bSupportsWaveOperations = 0;
  this->bSupportsRTIndexFromVS = 0;
  this->bSupportsTemporalHistoryUpscale = 0;
  this->bSupportsSSDIndirect = 0;
  this->bSupportsLumenGI = 0;
  this->bSupportsNanite = 0;
  this->bRequiresVendorExtensionsForAtomics = 0;
  this->bSupportsUInt64ImageAtomics = 0;
  this->bSupportsPrimitiveShaders = 0;
  this->bSupportsUnrestrictedHalfFloatBuffers = 0;
  this->bSupportsGPUScene = 0;
  this->bSupportsShaderExecutionReordering = 0;
  this->bSupportsPathTracing = 0;
  this->bSupportsRayTracingClusterOps = 0;
  this->bSupportsRayTracingIndirectInstanceData = 0;
  this->bSupportsRayTracingTraversalStatistics = 0;
  this->bSupportsRayTracingProceduralPrimitive = 0;
  this->bSupportsRayTracingCallableShaders = 0;
  this->bSupportsRayTracing = 0;
  this->bSupportsRenderTargetWriteMask = 0;
  this->bSupportsShaderBundleDispatch = 0;
  this->bSupportsShaderRootConstants = 0;
  this->bSupports4ComponentUAVReadWrite = 0;
  this->bSupportsMSAA = 0;
  this->SupportsMultiViewport = 0;
  this->bSupportsInstancedStereo = 0;
  this->bSupportsIndexBufferUAVs = 0;
  this->bSupportsPercentageCloserShadows = 0;
  this->bSupportsRGBColorBuffer = 0;
  this->bSupportsDiaphragmDOF = 0;
  this->bSupportsDistanceFields = 0;
  this->bSupportsArrayTextureCompression = 0;
  this->bSupportsMobileMultiView = 0;
  this->bSupportsDebugViewShaders = 0;
  this->bIsAndroidOpenGLES = 0;
  this->bIsConsole = 0;
  this->bIsPC = 0;
  this->bIsMetalMRT = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  this->bSupportsMSAA = 1;
  this->bSupportsUnrestrictedHalfFloatBuffers = 1;
  this->MaxFeatureLevel = Num;
  puVar1 = &this->field_0x34;
  this->bSupportsDOFHybridScattering = 1;
  this->bSupportsManualVertexFetch = 1;
  this->bSupportsTypedBufferSRVs = 1;
  this->bSupportsVertexShaderUAVs = 0;
  this->bSupportsVertexShaderSRVs = 1;
  this->bSupportsAsyncPipelineCompilation = 1;
  this->bSupportsWaterIndirectDraw = 1;
  this->bSupportsHZBOcclusion = 1;
  *(uint *)&this->field_0x38 = *(uint *)&this->field_0x38 & 0xff887fff | 0x81401;
  return this;
}

// GetShaderPlatformFromName @ 145c5b760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPlatform __cdecl
FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FName param_1)

{
  int iVar1;
  uint uVar2;
  EShaderPlatform *pEVar3;
  longlong lVar4;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (PlatformNameToShaderPlatformMap._8_4_ != PlatformNameToShaderPlatformMap._52_4_) {
    lVar4 = 0x154be5988;
    if (PlatformNameToShaderPlatformMap._64_8_ != 0) {
      lVar4 = PlatformNameToShaderPlatformMap._64_8_;
    }
    iVar1 = *(int *)(lVar4 + (ulonglong)
                             (PlatformNameToShaderPlatformMap._72_4_ - 1 & param_1.Number + uVar2) *
                             4);
    while (iVar1 != -1) {
      lVar4 = PlatformNameToShaderPlatformMap._0_8_ + (longlong)iVar1 * 0x14;
      if (*(FName *)(PlatformNameToShaderPlatformMap._0_8_ + (longlong)iVar1 * 0x14) == param_1) {
        pEVar3 = (EShaderPlatform *)(lVar4 + 8);
        if (lVar4 == 0) {
          pEVar3 = (EShaderPlatform *)0x0;
        }
        if (pEVar3 == (EShaderPlatform *)0x0) {
          return SP_NumPlatforms;
        }
        return *pEVar3;
      }
      iVar1 = *(int *)(lVar4 + 0xc);
    }
  }
  return SP_NumPlatforms;
}

// Initialize @ 145c5da90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FGenericDataDrivenShaderPlatformInfo::Initialize(void)

{
  FGenericDataDrivenShaderPlatformInfo *pFVar1;
  ulonglong uVar2;
  FName FVar3;
  code *pcVar4;
  byte bVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  FName *pFVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FString *this;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [4];
  int local_234;
  int local_230;
  int local_22c;
  FString local_228;
  int local_218;
  int local_214;
  FName local_210;
  FGenericDataDrivenShaderPlatformInfo *local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  longlong *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  int iStack_168;
  undefined4 uStack_164;
  FName local_160;
  FString local_158 [3];
  undefined1 local_128 [32];
  uint *local_108;
  longlong local_100;
  int local_f4;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (!::bInitialized) {
    bVar7 = 1 < (int)PlatformNameToShaderPlatformMap._72_4_;
    if (!bVar7) {
      TSet<TTuple<FName,enum_EShaderPlatform>,TDefaultMapHashableKeyFuncs<FName,enum_EShaderPlatform,0>,FDefaultSetAllocator>
      ::UnhashElements(&PlatformNameToShaderPlatformMap);
    }
    PlatformNameToShaderPlatformMap._8_4_ = 0;
    if (PlatformNameToShaderPlatformMap._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,(ForAnyElementType *)&PlatformNameToShaderPlatformMap,0,
                 (int *)&PlatformNameToShaderPlatformMap.field_0xc);
    }
    PlatformNameToShaderPlatformMap._48_4_ = 0xffffffff;
    PlatformNameToShaderPlatformMap._52_4_ = 0;
    PlatformNameToShaderPlatformMap._40_4_ = 0;
    if (0x80 < (uint)PlatformNameToShaderPlatformMap._44_4_) {
      PlatformNameToShaderPlatformMap._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&PlatformNameToShaderPlatformMap.field_0x10
                 ,0);
    }
    if (bVar7) {
      PlatformNameToShaderPlatformMap._72_4_ = 1;
      TSet<TTuple<FName,enum_EShaderPlatform>,TDefaultMapHashableKeyFuncs<FName,enum_EShaderPlatform,0>,FDefaultSetAllocator>
      ::Rehash(&PlatformNameToShaderPlatformMap);
    }
    local_22c = FDataDrivenPlatformInfoRegistry::GetNumDataDrivenIniFiles();
    local_234 = 0;
    if (0 < local_22c) {
      do {
        iVar13 = local_234;
        iVar15 = 0;
        FConfigFile::FConfigFile((FConfigFile *)local_128);
        local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.Data.ArrayNum = 0;
        local_228.Data.ArrayMax = 0;
        FDataDrivenPlatformInfoRegistry::LoadDataDrivenIniFile
                  (iVar13,(FConfigFile *)local_128,&local_228);
        AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        uStack_1b4 = 1;
        uVar16 = (uint)local_100;
        uStack_1a4 = 0;
        iStack_1b8 = iVar15;
        local_1a0 = iVar15;
        if (uVar16 != 0) {
          puVar18 = (uint *)(local_128 + 0x10);
          if (local_108 != (uint *)0x0) {
            puVar18 = local_108;
          }
          uVar17 = *puVar18;
          while (uVar17 == 0) {
            lVar11 = (longlong)iStack_1b8;
            local_1a0 = local_1a0 + 0x20;
            iStack_1b8 = iStack_1b8 + 1;
            uStack_1a4 = uVar16;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
            goto LAB_145c5dc61;
            uVar17 = puVar18[lVar11 + 1];
          }
          uStack_1b4 = -uVar17 & uVar17;
          uVar2 = (ulonglong)uStack_1b4 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_218 = (int)lVar11;
          uStack_1a4 = local_1a0 + -1 + local_218;
          if ((int)uVar16 < (int)uStack_1a4) {
            uStack_1a4 = uVar16;
          }
        }
LAB_145c5dc61:
        local_1c0 = (longlong *)local_128;
        local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10);
        uStack_19c = local_158[2].Data.ArrayMax;
        iStack_198 = local_128._8_4_ - local_f4;
        TStack_188._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
        uStack_1a8 = 0xffffffff;
        TStack_188.UnvisitedBitMask = 0xffffffff;
        TStack_188._28_4_ = local_158[2].Data.ArrayMax;
        uStack_164 = uStack_194;
        local_190 = local_1c0;
        TStack_188.CurrentBitIndex = uStack_1a4;
        TStack_188.BaseBitIndex = local_1a0;
        iStack_168 = iStack_198;
        TStack_188.Array = local_1b0;
        ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        AcquireSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        uVar16 = (uint)local_100;
        bVar5 = (byte)local_100;
        iVar13 = (int)uVar16 >> 5;
        uVar14 = uVar16 & 0xffffffe0;
        uVar17 = uVar16;
        if ((int)uVar16 < 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar17 = (uint)local_100;
        }
        if (uVar16 != uVar17) {
          puVar18 = (uint *)(local_128 + 0x10);
          if (local_108 != (uint *)0x0) {
            puVar18 = local_108;
          }
          uVar16 = -1 << (bVar5 & 0x1f) & puVar18[iVar13];
          while (uVar16 == 0) {
            lVar11 = (longlong)iVar13;
            uVar14 = uVar14 + 0x20;
            iVar13 = iVar13 + 1;
            uVar16 = uVar17;
            if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
            goto LAB_145c5dd81;
            uVar16 = puVar18[lVar11 + 1];
          }
          uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          local_214 = (int)lVar11;
          uVar16 = local_214 + -1 + uVar14;
          if ((int)uVar17 < (int)uVar16) {
            uVar16 = uVar17;
          }
        }
LAB_145c5dd81:
        ReleaseSRWLockShared((PSRWLOCK)&FConfigFile::ConfigFileMapLock);
        while( true ) {
          plVar6 = local_190;
          if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != iStack_168) {
            local_238[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_238);
          }
          iVar13 = local_234;
          if (((TStack_188.CurrentBitIndex == uVar16) &&
              (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10))) &&
             (plVar6 == (longlong *)local_128)) break;
          this = (FString *)((longlong)TStack_188.CurrentBitIndex * 0x110 + *plVar6);
          bVar7 = ::FString::StartsWith(this,L"ShaderPlatform ",0xf,IgnoreCase);
          if (bVar7) {
            ::FString::RightChop(this,&local_1f0,0xf);
            FVar12.Data = (FScriptContainerElement *)L"";
            if (local_1f0.Data.ArrayNum != 0) {
              FVar12.Data = local_1f0.Data.AllocatorInstance.Data;
            }
            uVar17 = 0;
            do {
              pFVar9 = ::LexToString(local_158,(EShaderPlatform)uVar17,false);
              ::FString::FString(&local_200,(wchar_t *)FVar12.Data);
              iVar13 = (pFVar9->Data).ArrayNum;
              if (iVar13 == local_200.Data.ArrayNum) {
                if (iVar13 < 2) {
                  bVar7 = true;
                }
                else {
                  iVar13 = FGenericPlatformStricmp::Stricmp
                                     ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,
                                      (wchar_t *)local_200.Data.AllocatorInstance.Data);
                  bVar7 = iVar13 == 0;
                }
              }
              else {
                bVar7 = local_200.Data.ArrayNum + iVar13 == 1;
              }
              if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_200.Data.AllocatorInstance.Data);
              }
              if (local_158[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158[0].Data.AllocatorInstance.Data);
              }
              if (bVar7) goto LAB_145c5dec4;
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < 0x9b);
            uVar17 = 0x9b;
LAB_145c5dec4:
            if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
            }
            if ((short)uVar17 == 0x9b) {
              if (2 < (byte)LogRHI._0_1_) {
                ::FString::RightChop(this,&local_1e0,0xf);
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
                if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
                }
              }
            }
            else {
              ::FString::RightChop(this,&local_1d0,0xf);
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_1d0.Data.ArrayNum != 0) {
                FVar12.Data = local_1d0.Data.AllocatorInstance.Data;
              }
              ::FName::FName(&local_210,(wchar_t *)FVar12.Data);
              uVar14 = uVar17 & 0xffff;
              Infos[uVar14].Name = local_210;
              pFVar1 = Infos + uVar14;
              if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
              }
              FVar12.Data = (FScriptContainerElement *)L"";
              if (local_228.Data.ArrayNum != 0) {
                FVar12.Data = local_228.Data.AllocatorInstance.Data;
              }
              pFVar10 = ::FName::FName(&local_160,(wchar_t *)FVar12.Data);
              Infos[uVar14].PlatformName = *pFVar10;
              FVar3 = pFVar1->Name;
              uVar8 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
              uVar8 = uVar8 + FVar3.Number;
              if (PlatformNameToShaderPlatformMap._8_4_ != PlatformNameToShaderPlatformMap._52_4_) {
                lVar11 = 0x154be5988;
                if (PlatformNameToShaderPlatformMap._64_8_ != 0) {
                  lVar11 = PlatformNameToShaderPlatformMap._64_8_;
                }
                iVar13 = *(int *)(lVar11 + (ulonglong)
                                           (PlatformNameToShaderPlatformMap._72_4_ - 1 & uVar8) * 4)
                ;
                if (iVar13 != -1) {
                  do {
                    lVar11 = PlatformNameToShaderPlatformMap._0_8_ + (longlong)iVar13 * 0x14;
                    if (*(FName *)(PlatformNameToShaderPlatformMap._0_8_ + (longlong)iVar13 * 0x14)
                        == pFVar1->Name) {
                      if (lVar11 != 0) goto LAB_145c5e05a;
                      break;
                    }
                    iVar13 = *(int *)(lVar11 + 0xc);
                  } while (iVar13 != -1);
                }
              }
              local_208 = pFVar1;
              TSet<TTuple<FName,enum_EShaderPlatform>,TDefaultMapHashableKeyFuncs<FName,enum_EShaderPlatform,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                        (&PlatformNameToShaderPlatformMap,(uint)&local_230,
                         (TKeyInitializer<FName_const_&> *)(ulonglong)uVar8,(bool *)&local_208);
              lVar11 = PlatformNameToShaderPlatformMap._0_8_ + (longlong)local_230 * 0x14;
LAB_145c5e05a:
              *(short *)(lVar11 + 8) = (short)uVar17;
              ParseDataDrivenShaderInfo((FConfigSection *)(this + 1),uVar17 & 0xffff);
              Infos[uVar14].bContainsValidPlatformInfo = 1;
            }
          }
          TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
        }
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        FConfigFile::~FConfigFile((FConfigFile *)local_128);
        local_234 = iVar13 + 1;
      } while (local_234 < local_22c);
    }
    ::bInitialized = true;
  }
  return;
}

// ParseDataDrivenShaderInfo @ 145c67030

void __cdecl
FGenericDataDrivenShaderPlatformInfo::ParseDataDrivenShaderInfo
          (FConfigSection *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  FName *pFVar6;
  FConfigValue *pFVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  FName FVar13;
  FName local_res18;
  FName local_res20;
  FString local_bf8;
  FString local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  FString local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  FString local_b68;
  FString local_b58;
  FString local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FString local_8d8;
  FString local_8c8;
  FString local_8b8;
  FString local_8a8;
  FString local_898;
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  FString local_6a8;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FName local_528;
  FName local_520;
  FName local_518;
  FName local_510;
  FName local_508;
  FName local_500;
  FName local_4f8;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  FName local_478;
  FName local_470;
  FName local_468;
  FName local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FName local_440;
  FName local_438;
  FName local_430;
  FName local_428;
  FName local_420;
  FName local_418;
  FName local_410;
  FName local_408;
  FName local_400;
  FName local_3f8;
  FName local_3f0;
  FName local_3e8;
  FName local_3e0;
  FName local_3d8;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  FName local_3b0;
  FName local_3a8;
  FName local_3a0;
  FName local_398;
  FName local_390;
  FName local_388;
  FName local_380;
  FName local_378;
  FName local_370;
  FName local_368;
  FName local_360;
  FName local_358;
  FName local_350;
  FName local_348;
  FName local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  FName local_1c0;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  
  bVar4 = false;
  FVar13 = Infos[param_2].Language;
  pFVar6 = ::FName::FName(&local_res20,"Language");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_1b0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_528,pwVar9);
    bVar4 = true;
    FVar13 = *pFVar6;
  }
  if ((bVar4) && (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  bVar4 = false;
  Infos[param_2].Language = FVar13;
  FVar13 = Infos[param_2].ShaderFormat;
  pFVar6 = ::FName::FName(&local_520,"ShaderFormat");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    bVar4 = true;
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_1a0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_518,pwVar9);
    FVar13 = *pFVar6;
  }
  if ((bVar4) && (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  Infos[param_2].ShaderFormat = FVar13;
  if (FVar13 == (FName)0x0) {
    ::FName::ToString(&Infos[param_2].ShaderFormat,&local_180);
    ::FName::ToString(&Infos[param_2].Name,&local_190);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Info.ShaderFormat.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DataDrivenShaderPlatformInfo.cpp"
                       ,0xab,L"Missing ShaderFormat for ShaderPlatform %s  ShaderFormat %s");
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar6 = ::FName::FName(&local_510,"MaxFeatureLevel");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_170);
    GetFeatureLevelFromName(pFVar8,&Infos[param_2].MaxFeatureLevel);
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
  }
  Infos[param_2].ShaderPropertiesHash = 0;
  ::FName::GetPlainNameString(&Infos[param_2].Name,&local_bf8);
  bVar5 = Infos[param_2].field_0x28;
  pFVar6 = ::FName::FName(&local_508,"bIsMobile");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_160);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar5 = FToBoolHelper::FromCStringWide(pwVar9);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^ ((uint)bVar5 ^ Infos[param_2].bIsMobile) & 1;
  ::FString::AppendChars(&local_bf8,L"bIsMobile",9);
  ::FString::PrintfImpl(&local_b98,L"_%d");
  iVar12 = local_b98.Data.ArrayNum + -1;
  if (local_b98.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b98.Data.AllocatorInstance.Data,iVar12);
  if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b98.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 1;
  pFVar6 = ::FName::FName(&local_500,"bIsMetalMRT");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_150);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) * 2 ^ *(uint *)&Infos[param_2].field_0x28) & 2;
  ::FString::AppendChars(&local_bf8,L"bIsMetalMRT",0xb);
  ::FString::PrintfImpl(&local_b88,L"_%d");
  iVar12 = local_b88.Data.ArrayNum + -1;
  if (local_b88.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b88.Data.AllocatorInstance.Data,iVar12);
  if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b88.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 2;
  pFVar6 = ::FName::FName(&local_4f8,"bIsPC");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_140);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 2 ^ *(uint *)&Infos[param_2].field_0x28) & 4;
  ::FString::AppendChars(&local_bf8,L"bIsPC",5);
  ::FString::PrintfImpl(&local_b78,L"_%d");
  iVar12 = local_b78.Data.ArrayNum + -1;
  if (local_b78.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b78.Data.AllocatorInstance.Data,iVar12);
  if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 3;
  pFVar6 = ::FName::FName(&local_4f0,"bIsConsole");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_130);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 3 ^ *(uint *)&Infos[param_2].field_0x28) & 8;
  ::FString::AppendChars(&local_bf8,L"bIsConsole",10);
  ::FString::PrintfImpl(&local_b68,L"_%d");
  iVar12 = local_b68.Data.ArrayNum + -1;
  if (local_b68.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b68.Data.AllocatorInstance.Data,iVar12);
  if (local_b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b68.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 4;
  pFVar6 = ::FName::FName(&local_4e8,"bIsAndroidOpenGLES");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_120);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 4 ^ *(uint *)&Infos[param_2].field_0x28) & 0x10;
  ::FString::AppendChars(&local_bf8,L"bIsAndroidOpenGLES",0x12);
  ::FString::PrintfImpl(&local_b58,L"_%d");
  iVar12 = local_b58.Data.ArrayNum + -1;
  if (local_b58.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b58.Data.AllocatorInstance.Data,iVar12);
  if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b58.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 5;
  pFVar6 = ::FName::FName(&local_4e0,"bSupportsDebugViewShaders");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_110);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 5 ^ *(uint *)&Infos[param_2].field_0x28) & 0x20;
  ::FString::AppendChars(&local_bf8,L"bSupportsDebugViewShaders",0x19);
  ::FString::PrintfImpl(&local_b48,L"_%d");
  iVar12 = local_b48.Data.ArrayNum + -1;
  if (local_b48.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b48.Data.AllocatorInstance.Data,iVar12);
  if (local_b48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b48.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 6;
  pFVar6 = ::FName::FName(&local_4d8,"bSupportsMobileMultiView");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_100);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 6 ^ *(uint *)&Infos[param_2].field_0x28) & 0x40;
  ::FString::AppendChars(&local_bf8,L"bSupportsMobileMultiView",0x18);
  ::FString::PrintfImpl(&local_b38,L"_%d");
  iVar12 = local_b38.Data.ArrayNum + -1;
  if (local_b38.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b38.Data.AllocatorInstance.Data,iVar12);
  if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 7;
  pFVar6 = ::FName::FName(&local_4d0,"bSupportsArrayTextureCompression");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_f0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 7 ^ *(uint *)&Infos[param_2].field_0x28) & 0x80;
  ::FString::AppendChars(&local_bf8,L"bSupportsArrayTextureCompression",0x20);
  ::FString::PrintfImpl(&local_b28,L"_%d");
  iVar12 = local_b28.Data.ArrayNum + -1;
  if (local_b28.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b28.Data.AllocatorInstance.Data,iVar12);
  if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b28.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 8;
  pFVar6 = ::FName::FName(&local_4c8,"bSupportsDistanceFields");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_e0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 8 ^ *(uint *)&Infos[param_2].field_0x28) & 0x100;
  ::FString::AppendChars(&local_bf8,L"bSupportsDistanceFields",0x17);
  ::FString::PrintfImpl(&local_628,L"_%d");
  iVar12 = local_628.Data.ArrayNum + -1;
  if (local_628.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_628.Data.AllocatorInstance.Data,iVar12);
  if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_628.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 9;
  pFVar6 = ::FName::FName(&local_4c0,"bSupportsDiaphragmDOF");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_d0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 9 ^ *(uint *)&Infos[param_2].field_0x28) & 0x200;
  ::FString::AppendChars(&local_bf8,L"bSupportsDiaphragmDOF",0x15);
  ::FString::PrintfImpl(&local_b08,L"_%d");
  iVar12 = local_b08.Data.ArrayNum + -1;
  if (local_b08.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b08.Data.AllocatorInstance.Data,iVar12);
  if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b08.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 10;
  pFVar6 = ::FName::FName(&local_4b8,"bSupportsRGBColorBuffer");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_c0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 10 ^ *(uint *)&Infos[param_2].field_0x28) & 0x400;
  ::FString::AppendChars(&local_bf8,L"bSupportsRGBColorBuffer",0x17);
  ::FString::PrintfImpl(&local_af8,L"_%d");
  iVar12 = local_af8.Data.ArrayNum + -1;
  if (local_af8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_af8.Data.AllocatorInstance.Data,iVar12);
  if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_af8.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 0xb;
  pFVar6 = ::FName::FName(&local_4b0,"bSupportsPercentageCloserShadows");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_b0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 0xb ^ *(uint *)&Infos[param_2].field_0x28) & 0x800;
  ::FString::AppendChars(&local_bf8,L"bSupportsPercentageCloserShadows",0x20);
  ::FString::PrintfImpl(&local_ae8,L"_%d");
  iVar12 = local_ae8.Data.ArrayNum + -1;
  if (local_ae8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_ae8.Data.AllocatorInstance.Data,iVar12);
  if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 0xc;
  pFVar6 = ::FName::FName(&local_4a8,"bSupportsIndexBufferUAVs");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_a0);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 0xc ^ *(uint *)&Infos[param_2].field_0x28) & 0x1000;
  ::FString::AppendChars(&local_bf8,L"bSupportsIndexBufferUAVs",0x18);
  ::FString::PrintfImpl(&local_ad8,L"_%d");
  iVar12 = local_ad8.Data.ArrayNum + -1;
  if (local_ad8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_ad8.Data.AllocatorInstance.Data,iVar12);
  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 0xd;
  pFVar6 = ::FName::FName(&local_4a0,"bSupportsInstancedStereo");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_90);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 0xd ^ *(uint *)&Infos[param_2].field_0x28) & 0x2000;
  ::FString::AppendChars(&local_bf8,L"bSupportsInstancedStereo",0x18);
  ::FString::PrintfImpl(&local_ac8,L"_%d");
  iVar12 = local_ac8.Data.ArrayNum + -1;
  if (local_ac8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_ac8.Data.AllocatorInstance.Data,iVar12);
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_498,"SupportsMultiViewport");
  uVar11 = GetSectionFeatureSupport(param_1,*pFVar6,Infos[param_2].SupportsMultiViewport);
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       (uVar11 << 0xe ^ *(uint *)&Infos[param_2].field_0x28) & 0xc000;
  ::FString::AppendChars(&local_bf8,L"SupportsMultiViewport",0x15);
  ::FString::PrintfImpl(&local_ab8,L"_%d");
  iVar12 = local_ab8.Data.ArrayNum + -1;
  if (local_ab8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_ab8.Data.AllocatorInstance.Data,iVar12);
  if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  bVar5 = Infos[param_2].field_0x2a;
  pFVar6 = ::FName::FName(&local_490,"bSupportsMSAA");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_80);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar5 = FToBoolHelper::FromCStringWide(pwVar9);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uint)bVar5 << 0x10 ^ *(uint *)&Infos[param_2].field_0x28) & 0x10000;
  ::FString::AppendChars(&local_bf8,L"bSupportsMSAA",0xd);
  ::FString::PrintfImpl(&local_aa8,L"_%d");
  iVar12 = local_aa8.Data.ArrayNum + -1;
  if (local_aa8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_aa8.Data.AllocatorInstance.Data,iVar12);
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 0x11;
  pFVar6 = ::FName::FName(&local_488,"bSupports4ComponentUAVReadWrite");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_70);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 0x11 ^ *(uint *)&Infos[param_2].field_0x28) & 0x20000;
  ::FString::AppendChars(&local_bf8,L"bSupports4ComponentUAVReadWrite",0x1f);
  ::FString::PrintfImpl(&local_a98,L"_%d");
  iVar12 = local_a98.Data.ArrayNum + -1;
  if (local_a98.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a98.Data.AllocatorInstance.Data,iVar12);
  if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a98.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x28 >> 0x12;
  pFVar6 = ::FName::FName(&local_480,"bSupportsShaderRootConstants");
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,*pFVar6);
  if (pFVar7 != (FConfigValue *)0x0) {
    pFVar8 = FConfigValue::GetValue(pFVar7,&local_60);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    bVar4 = FToBoolHelper::FromCStringWide(pwVar9);
    uVar11 = (uint)bVar4;
    if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.Data.AllocatorInstance.Data);
    }
  }
  *(uint *)&Infos[param_2].field_0x28 =
       *(uint *)&Infos[param_2].field_0x28 ^
       ((uVar11 & 0xff) << 0x12 ^ *(uint *)&Infos[param_2].field_0x28) & 0x40000;
  ::FString::AppendChars(&local_bf8,L"bSupportsShaderRootConstants",0x1c);
  ::FString::PrintfImpl(&local_a88,L"_%d");
  iVar12 = local_a88.Data.ArrayNum + -1;
  if (local_a88.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a88.Data.AllocatorInstance.Data,iVar12);
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_478,"bSupportsShaderBundleDispatch");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsShaderBundleDispatch);
  Infos[param_2].bSupportsShaderBundleDispatch = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x13;
  ::FString::AppendChars(&local_bf8,L"bSupportsShaderBundleDispatch",0x1d);
  ::FString::PrintfImpl(&local_a78,L"_%d");
  iVar12 = local_a78.Data.ArrayNum + -1;
  if (local_a78.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a78.Data.AllocatorInstance.Data,iVar12);
  if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_470,"bSupportsRenderTargetWriteMask");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRenderTargetWriteMask);
  Infos[param_2].bSupportsRenderTargetWriteMask = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x14;
  ::FString::AppendChars(&local_bf8,L"bSupportsRenderTargetWriteMask",0x1e);
  ::FString::PrintfImpl(&local_a68,L"_%d");
  iVar12 = local_a68.Data.ArrayNum + -1;
  if (local_a68.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a68.Data.AllocatorInstance.Data,iVar12);
  if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a68.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_468,"bSupportsRayTracing");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracing);
  Infos[param_2].bSupportsRayTracing = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x15;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracing",0x13);
  ::FString::PrintfImpl(&local_a58,L"_%d");
  iVar12 = local_a58.Data.ArrayNum + -1;
  if (local_a58.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a58.Data.AllocatorInstance.Data,iVar12);
  if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a58.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_460,"bSupportsRayTracingShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingShaders);
  Infos[param_2].bSupportsRayTracingShaders = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x1b;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingShaders",0x1a);
  ::FString::PrintfImpl(&local_a48,L"_%d");
  iVar12 = local_a48.Data.ArrayNum + -1;
  if (local_a48.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a48.Data.AllocatorInstance.Data,iVar12);
  if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a48.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_458,"bSupportsInlineRayTracing");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsInlineRayTracing);
  Infos[param_2].bSupportsInlineRayTracing = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x19;
  ::FString::AppendChars(&local_bf8,L"bSupportsInlineRayTracing",0x19);
  ::FString::PrintfImpl(&local_a38,L"_%d");
  iVar12 = local_a38.Data.ArrayNum + -1;
  if (local_a38.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a38.Data.AllocatorInstance.Data,iVar12);
  if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_450,"bInlineRayTracingRequiresBindless");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bInlineRayTracingRequiresBindless);
  Infos[param_2].bInlineRayTracingRequiresBindless = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x1a;
  ::FString::AppendChars(&local_bf8,L"bInlineRayTracingRequiresBindless",0x21);
  ::FString::PrintfImpl(&local_a28,L"_%d");
  iVar12 = local_a28.Data.ArrayNum + -1;
  if (local_a28.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a28.Data.AllocatorInstance.Data,iVar12);
  if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a28.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_448,"bSupportsRayTracingCallableShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingCallableShaders);
  Infos[param_2].bSupportsRayTracingCallableShaders = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x16;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingCallableShaders",0x22);
  ::FString::PrintfImpl(&local_a18,L"_%d");
  iVar12 = local_a18.Data.ArrayNum + -1;
  if (local_a18.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a18.Data.AllocatorInstance.Data,iVar12);
  if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_440,"bSupportsRayTracingProceduralPrimitive");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingProceduralPrimitive);
  Infos[param_2].bSupportsRayTracingProceduralPrimitive = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x17;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingProceduralPrimitive",0x26);
  ::FString::PrintfImpl(&local_a08,L"_%d");
  iVar12 = local_a08.Data.ArrayNum + -1;
  if (local_a08.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_a08.Data.AllocatorInstance.Data,iVar12);
  if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a08.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1c0,"bSupportsRayTracingTraversalStatistics");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingTraversalStatistics);
  Infos[param_2].bSupportsRayTracingTraversalStatistics = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x18;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingTraversalStatistics",0x26);
  ::FString::PrintfImpl(&local_9e8,L"_%d");
  iVar12 = local_9e8.Data.ArrayNum + -1;
  if (local_9e8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9e8.Data.AllocatorInstance.Data,iVar12);
  if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_438,"bSupportsRayTracingIndirectInstanceData");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingIndirectInstanceData);
  Infos[param_2].bSupportsRayTracingIndirectInstanceData = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x19;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingIndirectInstanceData",0x27);
  ::FString::PrintfImpl(&local_9d8,L"_%d");
  iVar12 = local_9d8.Data.ArrayNum + -1;
  if (local_9d8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9d8.Data.AllocatorInstance.Data,iVar12);
  if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_430,"bSupportsRayTracingClusterOps");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRayTracingClusterOps);
  Infos[param_2].bSupportsRayTracingClusterOps = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1a;
  ::FString::AppendChars(&local_bf8,L"bSupportsRayTracingClusterOps",0x1d);
  ::FString::PrintfImpl(&local_9c8,L"_%d");
  iVar12 = local_9c8.Data.ArrayNum + -1;
  if (local_9c8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9c8.Data.AllocatorInstance.Data,iVar12);
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_428,"bSupportsPathTracing");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsPathTracing);
  Infos[param_2].bSupportsPathTracing = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1b;
  ::FString::AppendChars(&local_bf8,L"bSupportsPathTracing",0x14);
  ::FString::PrintfImpl(&local_9b8,L"_%d");
  iVar12 = local_9b8.Data.ArrayNum + -1;
  if (local_9b8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9b8.Data.AllocatorInstance.Data,iVar12);
  if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_420,"bSupportsShaderExecutionReordering");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsShaderExecutionReordering);
  Infos[param_2].bSupportsShaderExecutionReordering = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1c;
  ::FString::AppendChars(&local_bf8,L"bSupportsShaderExecutionReordering",0x22);
  ::FString::PrintfImpl(&local_9a8,L"_%d");
  iVar12 = local_9a8.Data.ArrayNum + -1;
  if (local_9a8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9a8.Data.AllocatorInstance.Data,iVar12);
  if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_418,"bSupportsUnrestrictedHalfFloatBuffers");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsUnrestrictedHalfFloatBuffers);
  Infos[param_2].bSupportsUnrestrictedHalfFloatBuffers = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1e;
  ::FString::AppendChars(&local_bf8,L"bSupportsUnrestrictedHalfFloatBuffers",0x25);
  ::FString::PrintfImpl(&local_998,L"_%d");
  iVar12 = local_998.Data.ArrayNum + -1;
  if (local_998.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_998.Data.AllocatorInstance.Data,iVar12);
  if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_998.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_410,"bSupportsGPUScene");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsGPUScene);
  Infos[param_2].bSupportsGPUScene = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1d;
  ::FString::AppendChars(&local_bf8,L"bSupportsGPUScene",0x11);
  ::FString::PrintfImpl(&local_988,L"_%d");
  iVar12 = local_988.Data.ArrayNum + -1;
  if (local_988.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_988.Data.AllocatorInstance.Data,iVar12);
  if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_408,"bSupportsPrimitiveShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsPrimitiveShaders);
  Infos[param_2].bSupportsPrimitiveShaders = 0;
  *(uint *)&Infos[param_2].field_0x28 = *(uint *)&Infos[param_2].field_0x28 | (uint)bVar4 << 0x1f;
  ::FString::AppendChars(&local_bf8,L"bSupportsPrimitiveShaders",0x19);
  ::FString::PrintfImpl(&local_978,L"_%d");
  iVar12 = local_978.Data.ArrayNum + -1;
  if (local_978.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_978.Data.AllocatorInstance.Data,iVar12);
  if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_400,"bSupportsUInt64ImageAtomics");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsUInt64ImageAtomics);
  Infos[param_2].bSupportsUInt64ImageAtomics = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4;
  ::FString::AppendChars(&local_bf8,L"bSupportsUInt64ImageAtomics",0x1b);
  ::FString::PrintfImpl(&local_968,L"_%d");
  iVar12 = local_968.Data.ArrayNum + -1;
  if (local_968.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_968.Data.AllocatorInstance.Data,iVar12);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3f8,"bRequiresVendorExtensionsForAtomics");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresVendorExtensionsForAtomics);
  Infos[param_2].bRequiresVendorExtensionsForAtomics = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 * 2;
  ::FString::AppendChars(&local_bf8,L"bRequiresVendorExtensionsForAtomics",0x23);
  ::FString::PrintfImpl(&local_958,L"_%d");
  iVar12 = local_958.Data.ArrayNum + -1;
  if (local_958.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_958.Data.AllocatorInstance.Data,iVar12);
  if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_958.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3f0,"bSupportsNanite");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsNanite);
  Infos[param_2].bSupportsNanite = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 2;
  ::FString::AppendChars(&local_bf8,L"bSupportsNanite",0xf);
  ::FString::PrintfImpl(&local_948,L"_%d");
  iVar12 = local_948.Data.ArrayNum + -1;
  if (local_948.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_948.Data.AllocatorInstance.Data,iVar12);
  if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3e8,"bSupportsLumenGI");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsLumenGI);
  Infos[param_2].bSupportsLumenGI = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 3;
  ::FString::AppendChars(&local_bf8,L"bSupportsLumenGI",0x10);
  ::FString::PrintfImpl(&local_938,L"_%d");
  iVar12 = local_938.Data.ArrayNum + -1;
  if (local_938.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_938.Data.AllocatorInstance.Data,iVar12);
  if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_938.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3e0,"bSupportsSSDIndirect");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsSSDIndirect);
  Infos[param_2].bSupportsSSDIndirect = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 4;
  ::FString::AppendChars(&local_bf8,L"bSupportsSSDIndirect",0x14);
  ::FString::PrintfImpl(&local_9f8,L"_%d");
  iVar12 = local_9f8.Data.ArrayNum + -1;
  if (local_9f8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_9f8.Data.AllocatorInstance.Data,iVar12);
  if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3d8,"bSupportsTemporalHistoryUpscale");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsTemporalHistoryUpscale);
  Infos[param_2].bSupportsTemporalHistoryUpscale = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 5;
  ::FString::AppendChars(&local_bf8,L"bSupportsTemporalHistoryUpscale",0x1f);
  ::FString::PrintfImpl(&local_928,L"_%d");
  iVar12 = local_928.Data.ArrayNum + -1;
  if (local_928.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_928.Data.AllocatorInstance.Data,iVar12);
  if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3d0,"bSupportsRTIndexFromVS");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsRTIndexFromVS);
  Infos[param_2].bSupportsRTIndexFromVS = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 6;
  ::FString::AppendChars(&local_bf8,L"bSupportsRTIndexFromVS",0x16);
  ::FString::PrintfImpl(&local_918,L"_%d");
  iVar12 = local_918.Data.ArrayNum + -1;
  if (local_918.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_918.Data.AllocatorInstance.Data,iVar12);
  if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_918.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3c8,"bSupportsIntrinsicWaveOnce");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsIntrinsicWaveOnce);
  Infos[param_2].bSupportsIntrinsicWaveOnce = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1a;
  ::FString::AppendChars(&local_bf8,L"bSupportsIntrinsicWaveOnce",0x1a);
  ::FString::PrintfImpl(&local_908,L"_%d");
  iVar12 = local_908.Data.ArrayNum + -1;
  if (local_908.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_908.Data.AllocatorInstance.Data,iVar12);
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3c0,"bSupportsConservativeRasterization");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsConservativeRasterization);
  Infos[param_2].bSupportsConservativeRasterization = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1b;
  ::FString::AppendChars(&local_bf8,L"bSupportsConservativeRasterization",0x22);
  ::FString::PrintfImpl(&local_8f8,L"_%d");
  iVar12 = local_8f8.Data.ArrayNum + -1;
  if (local_8f8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8f8.Data.AllocatorInstance.Data,iVar12);
  if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3b8,"bSupportsWaveOperations");
  uVar11 = GetSectionFeatureSupport(param_1,*pFVar6,Infos[param_2].bSupportsWaveOperations);
  *(uint *)&Infos[param_2].field_0x2c =
       *(uint *)&Infos[param_2].field_0x2c ^
       (uVar11 << 7 ^ *(uint *)&Infos[param_2].field_0x2c) & 0x180;
  ::FString::AppendChars(&local_bf8,L"bSupportsWaveOperations",0x17);
  ::FString::PrintfImpl(&local_8e8,L"_%d");
  iVar12 = local_8e8.Data.ArrayNum + -1;
  if (local_8e8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8e8.Data.AllocatorInstance.Data,iVar12);
  if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3b0,"bSupportsWavePermute");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsWavePermute);
  Infos[param_2].bSupportsWavePermute = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 9;
  ::FString::AppendChars(&local_bf8,L"bSupportsWavePermute",0x14);
  ::FString::PrintfImpl(&local_8d8,L"_%d");
  iVar12 = local_8d8.Data.ArrayNum + -1;
  if (local_8d8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8d8.Data.AllocatorInstance.Data,iVar12);
  if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3a8,"MinimumWaveSize");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].MinimumWaveSize);
  *(uint *)&Infos[param_2].field_0x2c =
       *(uint *)&Infos[param_2].field_0x2c ^
       (uVar11 << 10 ^ *(uint *)&Infos[param_2].field_0x2c) & 0x3fc00;
  ::FString::AppendChars(&local_bf8,L"MinimumWaveSize",0xf);
  ::FString::PrintfImpl(&local_8c8,L"_%d");
  iVar12 = local_8c8.Data.ArrayNum + -1;
  if (local_8c8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8c8.Data.AllocatorInstance.Data,iVar12);
  if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_3a0,"MaximumWaveSize");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].MaximumWaveSize);
  *(uint *)&Infos[param_2].field_0x2c =
       *(uint *)&Infos[param_2].field_0x2c ^
       (uVar11 << 0x12 ^ *(uint *)&Infos[param_2].field_0x2c) & 0x3fc0000;
  ::FString::AppendChars(&local_bf8,L"MaximumWaveSize",0xf);
  ::FString::PrintfImpl(&local_8b8,L"_%d");
  iVar12 = local_8b8.Data.ArrayNum + -1;
  if (local_8b8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8b8.Data.AllocatorInstance.Data,iVar12);
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_398,"bRequiresExplicit128bitRT");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresExplicit128bitRT);
  Infos[param_2].bRequiresExplicit128bitRT = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1c;
  ::FString::AppendChars(&local_bf8,L"bRequiresExplicit128bitRT",0x19);
  ::FString::PrintfImpl(&local_8a8,L"_%d");
  iVar12 = local_8a8.Data.ArrayNum + -1;
  if (local_8a8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_8a8.Data.AllocatorInstance.Data,iVar12);
  if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_390,"bSupportsGen5TemporalAA");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsGen5TemporalAA);
  Infos[param_2].bSupportsGen5TemporalAA = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1d;
  ::FString::AppendChars(&local_bf8,L"bSupportsGen5TemporalAA",0x17);
  ::FString::PrintfImpl(&local_898,L"_%d");
  iVar12 = local_898.Data.ArrayNum + -1;
  if (local_898.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_898.Data.AllocatorInstance.Data,iVar12);
  if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_898.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_388,"bTargetsTiledGPU");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bTargetsTiledGPU);
  Infos[param_2].bTargetsTiledGPU = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1e;
  ::FString::AppendChars(&local_bf8,L"bTargetsTiledGPU",0x10);
  ::FString::PrintfImpl(&local_888,L"_%d");
  iVar12 = local_888.Data.ArrayNum + -1;
  if (local_888.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_888.Data.AllocatorInstance.Data,iVar12);
  if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_888.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_380,"bNeedsOfflineCompiler");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bNeedsOfflineCompiler);
  Infos[param_2].bNeedsOfflineCompiler = 0;
  *(uint *)&Infos[param_2].field_0x2c = *(uint *)&Infos[param_2].field_0x2c | (uint)bVar4 << 0x1f;
  ::FString::AppendChars(&local_bf8,L"bNeedsOfflineCompiler",0x15);
  ::FString::PrintfImpl(&local_878,L"_%d");
  iVar12 = local_878.Data.ArrayNum + -1;
  if (local_878.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_878.Data.AllocatorInstance.Data,iVar12);
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_378,"bSupportsComputeFramework");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsComputeFramework);
  Infos[param_2].bSupportsComputeFramework = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4;
  ::FString::AppendChars(&local_bf8,L"bSupportsComputeFramework",0x19);
  ::FString::PrintfImpl(&local_868,L"_%d");
  iVar12 = local_868.Data.ArrayNum + -1;
  if (local_868.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_868.Data.AllocatorInstance.Data,iVar12);
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_370,"bSupportsAnisotropicMaterials");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsAnisotropicMaterials);
  Infos[param_2].bSupportsAnisotropicMaterials = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 * 2;
  ::FString::AppendChars(&local_bf8,L"bSupportsAnisotropicMaterials",0x1d);
  ::FString::PrintfImpl(&local_858,L"_%d");
  iVar12 = local_858.Data.ArrayNum + -1;
  if (local_858.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_858.Data.AllocatorInstance.Data,iVar12);
  if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_858.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_368,"bSupportsDualSourceBlending");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsDualSourceBlending);
  Infos[param_2].bSupportsDualSourceBlending = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 2;
  ::FString::AppendChars(&local_bf8,L"bSupportsDualSourceBlending",0x1b);
  ::FString::PrintfImpl(&local_848,L"_%d");
  iVar12 = local_848.Data.ArrayNum + -1;
  if (local_848.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_848.Data.AllocatorInstance.Data,iVar12);
  if (local_848.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_848.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_360,"bRequiresGeneratePrevTransformBuffer");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresGeneratePrevTransformBuffer);
  Infos[param_2].bRequiresGeneratePrevTransformBuffer = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 3;
  ::FString::AppendChars(&local_bf8,L"bRequiresGeneratePrevTransformBuffer",0x24);
  ::FString::PrintfImpl(&local_838,L"_%d");
  iVar12 = local_838.Data.ArrayNum + -1;
  if (local_838.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_838.Data.AllocatorInstance.Data,iVar12);
  if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_838.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_358,"bRequiresRenderTargetDuringRaster");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresRenderTargetDuringRaster);
  Infos[param_2].bRequiresRenderTargetDuringRaster = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 4;
  ::FString::AppendChars(&local_bf8,L"bRequiresRenderTargetDuringRaster",0x21);
  ::FString::PrintfImpl(&local_828,L"_%d");
  iVar12 = local_828.Data.ArrayNum + -1;
  if (local_828.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_828.Data.AllocatorInstance.Data,iVar12);
  if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_828.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_350,"bRequiresDisableForwardLocalLights");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresDisableForwardLocalLights);
  Infos[param_2].bRequiresDisableForwardLocalLights = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 5;
  ::FString::AppendChars(&local_bf8,L"bRequiresDisableForwardLocalLights",0x22);
  ::FString::PrintfImpl(&local_818,L"_%d");
  iVar12 = local_818.Data.ArrayNum + -1;
  if (local_818.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_818.Data.AllocatorInstance.Data,iVar12);
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_348,"bCompileSignalProcessingPipeline");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bCompileSignalProcessingPipeline);
  Infos[param_2].bCompileSignalProcessingPipeline = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 6;
  ::FString::AppendChars(&local_bf8,L"bCompileSignalProcessingPipeline",0x20);
  ::FString::PrintfImpl(&local_808,L"_%d");
  iVar12 = local_808.Data.ArrayNum + -1;
  if (local_808.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_808.Data.AllocatorInstance.Data,iVar12);
  if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_808.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_340,"bSupportsMeshShadersTier0");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsMeshShadersTier0);
  Infos[param_2].bSupportsMeshShadersTier0 = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 7;
  ::FString::AppendChars(&local_bf8,L"bSupportsMeshShadersTier0",0x19);
  ::FString::PrintfImpl(&local_7f8,L"_%d");
  iVar12 = local_7f8.Data.ArrayNum + -1;
  if (local_7f8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7f8.Data.AllocatorInstance.Data,iVar12);
  if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_338,"bSupportsMeshShadersTier1");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsMeshShadersTier1);
  Infos[param_2].bSupportsMeshShadersTier1 = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 8;
  ::FString::AppendChars(&local_bf8,L"bSupportsMeshShadersTier1",0x19);
  ::FString::PrintfImpl(&local_7e8,L"_%d");
  iVar12 = local_7e8.Data.ArrayNum + -1;
  if (local_7e8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7e8.Data.AllocatorInstance.Data,iVar12);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_330,"bSupportsMeshShadersWithClipDistance");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsMeshShadersWithClipDistance);
  Infos[param_2].bSupportsMeshShadersWithClipDistance = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 9;
  ::FString::AppendChars(&local_bf8,L"bSupportsMeshShadersWithClipDistance",0x24);
  ::FString::PrintfImpl(&local_7d8,L"_%d");
  iVar12 = local_7d8.Data.ArrayNum + -1;
  if (local_7d8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7d8.Data.AllocatorInstance.Data,iVar12);
  if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_328,"MaxMeshShaderThreadGroupSize");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].MaxMeshShaderThreadGroupSize);
  *(uint *)&Infos[param_2].field_0x30 =
       *(uint *)&Infos[param_2].field_0x30 ^
       (uVar11 << 10 ^ *(uint *)&Infos[param_2].field_0x30) & 0xffc00;
  ::FString::AppendChars(&local_bf8,L"MaxMeshShaderThreadGroupSize",0x1c);
  ::FString::PrintfImpl(&local_7c8,L"_%d");
  iVar12 = local_7c8.Data.ArrayNum + -1;
  if (local_7c8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7c8.Data.AllocatorInstance.Data,iVar12);
  if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_320,"bRequiresUnwrappedMeshShaderArgs");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresUnwrappedMeshShaderArgs);
  Infos[param_2].bRequiresUnwrappedMeshShaderArgs = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x14;
  ::FString::AppendChars(&local_bf8,L"bRequiresUnwrappedMeshShaderArgs",0x20);
  ::FString::PrintfImpl(&local_7b8,L"_%d");
  iVar12 = local_7b8.Data.ArrayNum + -1;
  if (local_7b8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7b8.Data.AllocatorInstance.Data,iVar12);
  if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_318,"bSupportsPerPixelDBufferMask");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsPerPixelDBufferMask);
  Infos[param_2].bSupportsPerPixelDBufferMask = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x15;
  ::FString::AppendChars(&local_bf8,L"bSupportsPerPixelDBufferMask",0x1c);
  ::FString::PrintfImpl(&local_7a8,L"_%d");
  iVar12 = local_7a8.Data.ArrayNum + -1;
  if (local_7a8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_7a8.Data.AllocatorInstance.Data,iVar12);
  if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_310,"bIsHlslcc");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bIsHlslcc);
  Infos[param_2].bIsHlslcc = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x16;
  ::FString::AppendChars(&local_bf8,L"bIsHlslcc",9);
  ::FString::PrintfImpl(&local_798,L"_%d");
  iVar12 = local_798.Data.ArrayNum + -1;
  if (local_798.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_798.Data.AllocatorInstance.Data,iVar12);
  if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_308,"bSupportsDxc");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsDxc);
  Infos[param_2].bSupportsDxc = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x17;
  ::FString::AppendChars(&local_bf8,L"bSupportsDxc",0xc);
  ::FString::PrintfImpl(&local_788,L"_%d");
  iVar12 = local_788.Data.ArrayNum + -1;
  if (local_788.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_788.Data.AllocatorInstance.Data,iVar12);
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_300,"bSupportsVariableRateShading");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsVariableRateShading);
  Infos[param_2].bSupportsVariableRateShading = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x19;
  ::FString::AppendChars(&local_bf8,L"bSupportsVariableRateShading",0x1c);
  ::FString::PrintfImpl(&local_778,L"_%d");
  iVar12 = local_778.Data.ArrayNum + -1;
  if (local_778.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_778.Data.AllocatorInstance.Data,iVar12);
  if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2f8,"bIsSPIRV");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bIsSPIRV);
  Infos[param_2].bIsSPIRV = 0;
  *(uint *)&Infos[param_2].field_0x30 = *(uint *)&Infos[param_2].field_0x30 | (uint)bVar4 << 0x18;
  ::FString::AppendChars(&local_bf8,L"bIsSPIRV",8);
  ::FString::PrintfImpl(&local_768,L"_%d");
  iVar12 = local_768.Data.ArrayNum + -1;
  if (local_768.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_768.Data.AllocatorInstance.Data,iVar12);
  if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2f0,"NumberOfComputeThreads");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].NumberOfComputeThreads);
  *(uint *)&Infos[param_2].field_0x34 =
       *(uint *)&Infos[param_2].field_0x34 ^
       (Infos[param_2].NumberOfComputeThreads ^ uVar11) & 0x3ff;
  ::FString::AppendChars(&local_bf8,L"NumberOfComputeThreads",0x16);
  ::FString::PrintfImpl(&local_758,L"_%d");
  iVar12 = local_758.Data.ArrayNum + -1;
  if (local_758.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_758.Data.AllocatorInstance.Data,iVar12);
  if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2e8,"bWaterUsesSimpleForwardShading");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bWaterUsesSimpleForwardShading);
  Infos[param_2].bWaterUsesSimpleForwardShading = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 10;
  ::FString::AppendChars(&local_bf8,L"bWaterUsesSimpleForwardShading",0x1e);
  ::FString::PrintfImpl(&local_748,L"_%d");
  iVar12 = local_748.Data.ArrayNum + -1;
  if (local_748.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_748.Data.AllocatorInstance.Data,iVar12);
  if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_748.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2e0,"bSupportsHairStrandGeometry");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsHairStrandGeometry);
  Infos[param_2].bSupportsHairStrandGeometry = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0xb;
  ::FString::AppendChars(&local_bf8,L"bSupportsHairStrandGeometry",0x1b);
  ::FString::PrintfImpl(&local_738,L"_%d");
  iVar12 = local_738.Data.ArrayNum + -1;
  if (local_738.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_738.Data.AllocatorInstance.Data,iVar12);
  if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_738.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2d8,"bSupportsDOFHybridScattering");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsDOFHybridScattering);
  Infos[param_2].bSupportsDOFHybridScattering = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0xc;
  ::FString::AppendChars(&local_bf8,L"bSupportsDOFHybridScattering",0x1c);
  ::FString::PrintfImpl(&local_728,L"_%d");
  iVar12 = local_728.Data.ArrayNum + -1;
  if (local_728.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_728.Data.AllocatorInstance.Data,iVar12);
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2d0,"bNeedsExtraMobileFrames");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bNeedsExtraMobileFrames);
  Infos[param_2].bNeedsExtraMobileFrames = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0xd;
  ::FString::AppendChars(&local_bf8,L"bNeedsExtraMobileFrames",0x17);
  ::FString::PrintfImpl(&local_718,L"_%d");
  iVar12 = local_718.Data.ArrayNum + -1;
  if (local_718.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_718.Data.AllocatorInstance.Data,iVar12);
  if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2c8,"bSupportsHZBOcclusion");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsHZBOcclusion);
  Infos[param_2].bSupportsHZBOcclusion = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0xe;
  ::FString::AppendChars(&local_bf8,L"bSupportsHZBOcclusion",0x15);
  ::FString::PrintfImpl(&local_708,L"_%d");
  iVar12 = local_708.Data.ArrayNum + -1;
  if (local_708.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_708.Data.AllocatorInstance.Data,iVar12);
  if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_708.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2c0,"bSupportsWaterIndirectDraw");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsWaterIndirectDraw);
  Infos[param_2].bSupportsWaterIndirectDraw = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0xf;
  ::FString::AppendChars(&local_bf8,L"bSupportsWaterIndirectDraw",0x1a);
  ::FString::PrintfImpl(&local_6f8,L"_%d");
  iVar12 = local_6f8.Data.ArrayNum + -1;
  if (local_6f8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6f8.Data.AllocatorInstance.Data,iVar12);
  if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2b8,"bSupportsAsyncPipelineCompilation");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsAsyncPipelineCompilation);
  Infos[param_2].bSupportsAsyncPipelineCompilation = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x10;
  ::FString::AppendChars(&local_bf8,L"bSupportsAsyncPipelineCompilation",0x21);
  ::FString::PrintfImpl(&local_6e8,L"_%d");
  iVar12 = local_6e8.Data.ArrayNum + -1;
  if (local_6e8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6e8.Data.AllocatorInstance.Data,iVar12);
  if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2b0,"bSupportsVertexShaderSRVs");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsVertexShaderSRVs);
  Infos[param_2].bSupportsVertexShaderSRVs = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x11;
  ::FString::AppendChars(&local_bf8,L"bSupportsVertexShaderSRVs",0x19);
  ::FString::PrintfImpl(&local_6d8,L"_%d");
  iVar12 = local_6d8.Data.ArrayNum + -1;
  if (local_6d8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6d8.Data.AllocatorInstance.Data,iVar12);
  if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2a8,"bSupportsVertexShaderUAVs");
  uVar11 = GetSectionFeatureSupport(param_1,*pFVar6,Infos[param_2].bSupportsVertexShaderUAVs);
  *(uint *)&Infos[param_2].field_0x34 =
       *(uint *)&Infos[param_2].field_0x34 ^
       (uVar11 << 0x12 ^ *(uint *)&Infos[param_2].field_0x34) & 0xc0000;
  ::FString::AppendChars(&local_bf8,L"bSupportsVertexShaderUAVs",0x19);
  ::FString::PrintfImpl(&local_6c8,L"_%d");
  iVar12 = local_6c8.Data.ArrayNum + -1;
  if (local_6c8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6c8.Data.AllocatorInstance.Data,iVar12);
  if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_2a0,"bSupportsTypedBufferSRVs");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsTypedBufferSRVs);
  Infos[param_2].bSupportsTypedBufferSRVs = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x14;
  ::FString::AppendChars(&local_bf8,L"bSupportsTypedBufferSRVs",0x18);
  ::FString::PrintfImpl(&local_6b8,L"_%d");
  iVar12 = local_6b8.Data.ArrayNum + -1;
  if (local_6b8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6b8.Data.AllocatorInstance.Data,iVar12);
  if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_298,"bSupportsManualVertexFetch");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsManualVertexFetch);
  Infos[param_2].bSupportsManualVertexFetch = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x15;
  ::FString::AppendChars(&local_bf8,L"bSupportsManualVertexFetch",0x1a);
  ::FString::PrintfImpl(&local_6a8,L"_%d");
  iVar12 = local_6a8.Data.ArrayNum + -1;
  if (local_6a8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_6a8.Data.AllocatorInstance.Data,iVar12);
  if (local_6a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_290,"bRequiresReverseCullingOnMobile");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresReverseCullingOnMobile);
  Infos[param_2].bRequiresReverseCullingOnMobile = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x16;
  ::FString::AppendChars(&local_bf8,L"bRequiresReverseCullingOnMobile",0x1f);
  ::FString::PrintfImpl(&local_698,L"_%d");
  iVar12 = local_698.Data.ArrayNum + -1;
  if (local_698.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_698.Data.AllocatorInstance.Data,iVar12);
  if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_698.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_288,"bOverrideFMaterial_NeedsGBufferEnabled");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bOverrideFMaterial_NeedsGBufferEnabled);
  Infos[param_2].bOverrideFMaterial_NeedsGBufferEnabled = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x17;
  ::FString::AppendChars(&local_bf8,L"bOverrideFMaterial_NeedsGBufferEnabled",0x26);
  ::FString::PrintfImpl(&local_688,L"_%d");
  iVar12 = local_688.Data.ArrayNum + -1;
  if (local_688.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_688.Data.AllocatorInstance.Data,iVar12);
  if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_688.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_280,"bSupportsFFTBloom");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsFFTBloom);
  Infos[param_2].bSupportsFFTBloom = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x18;
  ::FString::AppendChars(&local_bf8,L"bSupportsFFTBloom",0x11);
  ::FString::PrintfImpl(&local_678,L"_%d");
  iVar12 = local_678.Data.ArrayNum + -1;
  if (local_678.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_678.Data.AllocatorInstance.Data,iVar12);
  if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_278,"bSupportsVertexShaderLayer");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsVertexShaderLayer);
  Infos[param_2].bSupportsVertexShaderLayer = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x1c;
  ::FString::AppendChars(&local_bf8,L"bSupportsVertexShaderLayer",0x1a);
  ::FString::PrintfImpl(&local_668,L"_%d");
  iVar12 = local_668.Data.ArrayNum + -1;
  if (local_668.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_668.Data.AllocatorInstance.Data,iVar12);
  if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_270,"bSupportsBindless");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsBindless);
  Infos[param_2].bSupportsBindless = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | (uint)bVar4 << 0x1d;
  ::FString::AppendChars(&local_bf8,L"bSupportsBindless",0x11);
  ::FString::PrintfImpl(&local_658,L"_%d");
  iVar12 = local_658.Data.ArrayNum + -1;
  if (local_658.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_658.Data.AllocatorInstance.Data,iVar12);
  if (local_658.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.Data.AllocatorInstance.Data);
  }
  uVar11 = *(uint *)&Infos[param_2].field_0x34;
  pFVar6 = ::FName::FName(&local_268,"StaticShaderBindingLayoutSupport");
  local_res18 = *pFVar6;
  pFVar7 = TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           ::Find((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                   *)param_1,local_res18);
  if (pFVar7 != (FConfigValue *)0x0) {
    FConfigValue::GetValue(pFVar7,&local_be8);
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_be8.Data.ArrayNum != 0) {
      FVar10.Data = local_be8.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"Unsupported");
    if (iVar12 == 0) {
      if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Data.AllocatorInstance.Data);
      }
      uVar11 = 0;
      goto LAB_145c6ac81;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_be8.Data.ArrayNum != 0) {
      FVar10.Data = local_be8.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"RayTracingOnly");
    if (iVar12 == 0) {
      if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Data.AllocatorInstance.Data);
      }
      uVar11 = 0x40000000;
      goto LAB_145c6ac81;
    }
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_be8.Data.ArrayNum != 0) {
      FVar10.Data = local_be8.Data.AllocatorInstance.Data;
    }
    iVar12 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"AllShaderTypes");
    if (iVar12 == 0) {
      if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_be8.Data.AllocatorInstance.Data);
      }
      uVar11 = 0x80000000;
      goto LAB_145c6ac81;
    }
    ::FName::ToString(&local_res18,&local_50);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\DataDrivenShaderPlatformInfo.cpp"
                       ,0x8b,L"Unknown ERHIStaticShaderBindingLayoutSupport value \"%s\" for %s");
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_be8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_be8.Data.AllocatorInstance.Data);
    }
  }
  uVar11 = uVar11 & 0xc0000000;
LAB_145c6ac81:
  Infos[param_2].StaticShaderBindingLayoutSupport = 0;
  *(uint *)&Infos[param_2].field_0x34 = *(uint *)&Infos[param_2].field_0x34 | uVar11;
  ::FString::AppendChars(&local_bf8,L"StaticShaderBindingLayoutSupport",0x20);
  ::FString::PrintfImpl(&local_648,L"_%d");
  iVar12 = local_648.Data.ArrayNum + -1;
  if (local_648.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_648.Data.AllocatorInstance.Data,iVar12);
  if (local_648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_648.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_260,"bSupportsVolumeTextureAtomics");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsVolumeTextureAtomics);
  Infos[param_2].bSupportsVolumeTextureAtomics = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4;
  ::FString::AppendChars(&local_bf8,L"bSupportsVolumeTextureAtomics",0x1d);
  ::FString::PrintfImpl(&local_638,L"_%d");
  iVar12 = local_638.Data.ArrayNum + -1;
  if (local_638.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_638.Data.AllocatorInstance.Data,iVar12);
  if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_638.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1b8,"bSupportsROV");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsROV);
  Infos[param_2].bSupportsROV = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 * 2;
  ::FString::AppendChars(&local_bf8,L"bSupportsROV",0xc);
  ::FString::PrintfImpl(&local_618,L"_%d");
  iVar12 = local_618.Data.ArrayNum + -1;
  if (local_618.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_618.Data.AllocatorInstance.Data,iVar12);
  if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_618.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_258,"bSupportsOIT");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsOIT);
  Infos[param_2].bSupportsOIT = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 2;
  ::FString::AppendChars(&local_bf8,L"bSupportsOIT",0xc);
  ::FString::PrintfImpl(&local_608,L"_%d");
  iVar12 = local_608.Data.ArrayNum + -1;
  if (local_608.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_608.Data.AllocatorInstance.Data,iVar12);
  if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_608.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_250,"bSupportsRealTypes");
  uVar11 = GetSectionFeatureSupport(param_1,*pFVar6,Infos[param_2].bSupportsRealTypes);
  *(uint *)&Infos[param_2].field_0x38 =
       *(uint *)&Infos[param_2].field_0x38 ^
       (uVar11 * 8 ^ *(uint *)&Infos[param_2].field_0x38) & 0x18;
  ::FString::AppendChars(&local_bf8,L"bSupportsRealTypes",0x12);
  ::FString::PrintfImpl(&local_5f8,L"_%d");
  iVar12 = local_5f8.Data.ArrayNum + -1;
  if (local_5f8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5f8.Data.AllocatorInstance.Data,iVar12);
  if (local_5f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_248,"EnablesHLSL2021ByDefault");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].EnablesHLSL2021ByDefault);
  *(uint *)&Infos[param_2].field_0x38 =
       *(uint *)&Infos[param_2].field_0x38 ^
       (uVar11 << 5 ^ *(uint *)&Infos[param_2].field_0x38) & 0x60;
  ::FString::AppendChars(&local_bf8,L"EnablesHLSL2021ByDefault",0x18);
  ::FString::PrintfImpl(&local_5e8,L"_%d");
  iVar12 = local_5e8.Data.ArrayNum + -1;
  if (local_5e8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5e8.Data.AllocatorInstance.Data,iVar12);
  if (local_5e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_240,"bSupportsSceneDataCompressedTransforms");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsSceneDataCompressedTransforms);
  Infos[param_2].bSupportsSceneDataCompressedTransforms = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 7;
  ::FString::AppendChars(&local_bf8,L"bSupportsSceneDataCompressedTransforms",0x26);
  ::FString::PrintfImpl(&local_5d8,L"_%d");
  iVar12 = local_5d8.Data.ArrayNum + -1;
  if (local_5d8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5d8.Data.AllocatorInstance.Data,iVar12);
  if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_238,"bSupportsSwapchainUAVs");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsSwapchainUAVs);
  Infos[param_2].bSupportsSwapchainUAVs = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 9;
  ::FString::AppendChars(&local_bf8,L"bSupportsSwapchainUAVs",0x16);
  ::FString::PrintfImpl(&local_5c8,L"_%d");
  iVar12 = local_5c8.Data.ArrayNum + -1;
  if (local_5c8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5c8.Data.AllocatorInstance.Data,iVar12);
  if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_230,"bSupportsClipDistance");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsClipDistance);
  Infos[param_2].bSupportsClipDistance = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 10;
  ::FString::AppendChars(&local_bf8,L"bSupportsClipDistance",0x15);
  ::FString::PrintfImpl(&local_5b8,L"_%d");
  iVar12 = local_5b8.Data.ArrayNum + -1;
  if (local_5b8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5b8.Data.AllocatorInstance.Data,iVar12);
  if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_228,"bSupportsNNEShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsNNEShaders);
  Infos[param_2].bSupportsNNEShaders = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0xb;
  ::FString::AppendChars(&local_bf8,L"bSupportsNNEShaders",0x13);
  ::FString::PrintfImpl(&local_5a8,L"_%d");
  iVar12 = local_5a8.Data.ArrayNum + -1;
  if (local_5a8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_5a8.Data.AllocatorInstance.Data,iVar12);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_220,"bSupportsShaderPipelines");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsShaderPipelines);
  Infos[param_2].bSupportsShaderPipelines = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0xc;
  ::FString::AppendChars(&local_bf8,L"bSupportsShaderPipelines",0x18);
  ::FString::PrintfImpl(&local_598,L"_%d");
  iVar12 = local_598.Data.ArrayNum + -1;
  if (local_598.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_598.Data.AllocatorInstance.Data,iVar12);
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_218,"bSupportsUniformBufferObjects");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsUniformBufferObjects);
  Infos[param_2].bSupportsUniformBufferObjects = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0xd;
  ::FString::AppendChars(&local_bf8,L"bSupportsUniformBufferObjects",0x1d);
  ::FString::PrintfImpl(&local_588,L"_%d");
  iVar12 = local_588.Data.ArrayNum + -1;
  if (local_588.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_588.Data.AllocatorInstance.Data,iVar12);
  if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_588.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_210,"bRequiresBindfulUtilityShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bRequiresBindfulUtilityShaders);
  Infos[param_2].bRequiresBindfulUtilityShaders = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0xe;
  ::FString::AppendChars(&local_bf8,L"bRequiresBindfulUtilityShaders",0x1e);
  ::FString::PrintfImpl(&local_578,L"_%d");
  iVar12 = local_578.Data.ArrayNum + -1;
  if (local_578.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_578.Data.AllocatorInstance.Data,iVar12);
  if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_578.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_208,"MaxSamplers");
  uVar11 = GetSectionUint(param_1,*pFVar6,Infos[param_2].MaxSamplers);
  *(uint *)&Infos[param_2].field_0x38 =
       *(uint *)&Infos[param_2].field_0x38 ^
       (uVar11 << 0xf ^ *(uint *)&Infos[param_2].field_0x38) & 0x7f8000;
  ::FString::AppendChars(&local_bf8,L"MaxSamplers",0xb);
  ::FString::PrintfImpl(&local_568,L"_%d");
  iVar12 = local_568.Data.ArrayNum + -1;
  if (local_568.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_568.Data.AllocatorInstance.Data,iVar12);
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_200,"SupportsBarycentricsIntrinsics");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].SupportsBarycentricsIntrinsics);
  Infos[param_2].SupportsBarycentricsIntrinsics = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x17;
  ::FString::AppendChars(&local_bf8,L"SupportsBarycentricsIntrinsics",0x1e);
  ::FString::PrintfImpl(&local_b18,L"_%d");
  iVar12 = local_b18.Data.ArrayNum + -1;
  if (local_b18.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_b18.Data.AllocatorInstance.Data,iVar12);
  if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b18.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1f8,"SupportsBarycentricsSemantic");
  uVar11 = GetSectionFeatureSupport(param_1,*pFVar6,Infos[param_2].SupportsBarycentricsSemantic);
  *(uint *)&Infos[param_2].field_0x38 =
       *(uint *)&Infos[param_2].field_0x38 ^
       (uVar11 << 0x18 ^ *(uint *)&Infos[param_2].field_0x38) & 0x3000000;
  ::FString::AppendChars(&local_bf8,L"SupportsBarycentricsSemantic",0x1c);
  ::FString::PrintfImpl(&local_558,L"_%d");
  iVar12 = local_558.Data.ArrayNum + -1;
  if (local_558.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_558.Data.AllocatorInstance.Data,iVar12);
  if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_558.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1f0,"bSupportsWave64");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsWave64);
  Infos[param_2].bSupportsWave64 = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1a;
  ::FString::AppendChars(&local_bf8,L"bSupportsWave64",0xf);
  ::FString::PrintfImpl(&local_548,L"_%d");
  iVar12 = local_548.Data.ArrayNum + -1;
  if (local_548.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_548.Data.AllocatorInstance.Data,iVar12);
  if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_548.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1e8,"bSupportsIndependentSamplers");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsIndependentSamplers);
  Infos[param_2].bSupportsIndependentSamplers = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1b;
  ::FString::AppendChars(&local_bf8,L"bSupportsIndependentSamplers",0x1c);
  ::FString::PrintfImpl(&local_538,L"_%d");
  iVar12 = local_538.Data.ArrayNum + -1;
  if (local_538.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_538.Data.AllocatorInstance.Data,iVar12);
  if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_538.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1e0,"bSupportsWorkGraphs");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsWorkGraphs);
  Infos[param_2].bSupportsWorkGraphs = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1c;
  ::FString::AppendChars(&local_bf8,L"bSupportsWorkGraphs",0x13);
  ::FString::PrintfImpl(&local_bd8,L"_%d");
  iVar12 = local_bd8.Data.ArrayNum + -1;
  if (local_bd8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_bd8.Data.AllocatorInstance.Data,iVar12);
  if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1d8,"bSupportsWorkGraphsTier1_1");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsWorkGraphsTier1_1);
  Infos[param_2].bSupportsWorkGraphsTier1_1 = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1d;
  ::FString::AppendChars(&local_bf8,L"bSupportsWorkGraphsTier1_1",0x1a);
  ::FString::PrintfImpl(&local_bc8,L"_%d");
  iVar12 = local_bc8.Data.ArrayNum + -1;
  if (local_bc8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_bc8.Data.AllocatorInstance.Data,iVar12);
  if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1d0,"bSupportsDLSSShaders");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsDLSSShaders);
  Infos[param_2].bSupportsDLSSShaders = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1e;
  ::FString::AppendChars(&local_bf8,L"bSupportsDLSSShaders",0x14);
  ::FString::PrintfImpl(&local_bb8,L"_%d");
  iVar12 = local_bb8.Data.ArrayNum + -1;
  if (local_bb8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_bb8.Data.AllocatorInstance.Data,iVar12);
  if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FName::FName(&local_1c8,"bSupportsAdaptiveGBuffer");
  bVar4 = GetSectionBool(param_1,*pFVar6,Infos[param_2].bSupportsAdaptiveGBuffer);
  Infos[param_2].bSupportsAdaptiveGBuffer = 0;
  *(uint *)&Infos[param_2].field_0x38 = *(uint *)&Infos[param_2].field_0x38 | (uint)bVar4 << 0x1f;
  ::FString::AppendChars(&local_bf8,L"bSupportsAdaptiveGBuffer",0x18);
  ::FString::PrintfImpl(&local_ba8,L"_%d");
  iVar12 = local_ba8.Data.ArrayNum + -1;
  if (local_ba8.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  ::FString::AppendChars(&local_bf8,(wchar_t *)local_ba8.Data.AllocatorInstance.Data,iVar12);
  if (local_ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ba8.Data.AllocatorInstance.Data);
  }
  iVar12 = local_bf8.Data.ArrayNum + -1;
  FVar10.Data = local_bf8.Data.AllocatorInstance.Data;
  if (local_bf8.Data.ArrayNum == 0) {
    iVar12 = 0;
    FVar10.Data = (FScriptContainerElement *)L"";
  }
  uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,(wchar_t *)FVar10.Data);
  Infos[param_2].ShaderPropertiesHash = uVar11;
  if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDefaultValues @ 145c78e80

void __thiscall
FGenericDataDrivenShaderPlatformInfo::SetDefaultValues(FGenericDataDrivenShaderPlatformInfo *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  this->bSupportsMSAA = 1;
  this->bSupportsUnrestrictedHalfFloatBuffers = 1;
  this->MaxFeatureLevel = Num;
  puVar2 = &this->field_0x34;
  this->bSupportsDOFHybridScattering = 1;
  this->bSupportsManualVertexFetch = 1;
  this->bSupportsTypedBufferSRVs = 1;
  this->bSupportsVertexShaderUAVs = 0;
  this->bSupportsVertexShaderSRVs = 1;
  this->bSupportsAsyncPipelineCompilation = 1;
  this->bSupportsWaterIndirectDraw = 1;
  this->bSupportsHZBOcclusion = 1;
  *(uint *)&this->field_0x38 = *(uint *)&this->field_0x38 & 0xff887fff | 0x81401;
  return;
}

