// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// FShaderStage @ 145be6690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderStage": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FShaderStage * __thiscall
FOpenGLLinkedProgram::FShaderStage::FShaderStage
          (FShaderStage *this,FOpenGLLinkedProgramBase *param_1,FOpenGLShader *param_2,
          EShaderStage param_3,uint param_4)

{
  TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FSHAHash *pFVar2;
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> FVar3;
  uint *puVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  char cVar8;
  bool bVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FOpenGLLinkedProgramBase *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  FShaderStage *pFVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderBindParameterTime> FVar25;
  HGLRC pHVar26;
  longlong lVar27;
  ForAnyElementType FVar28;
  char *pcVar29;
  EShaderStage EVar30;
  ulonglong uVar31;
  FName FVar32;
  byte bVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  ForElementType<unsigned_int> FVar36;
  uchar uVar37;
  uint uVar38;
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> FVar39;
  FScriptContainerElement *pFVar40;
  uint uVar41;
  int *piVar42;
  undefined1 auStackY_2c8 [32];
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  uint local_264;
  EShaderStage local_260;
  uint local_25c;
  FName local_258;
  FString local_250;
  undefined1 local_240 [8];
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> local_238;
  FShaderStage *local_230;
  uint local_228;
  undefined8 local_220;
  int local_218;
  uchar uStack_214;
  byte bStack_213;
  uchar auStack_212 [2];
  int local_210;
  uchar uStack_20c;
  uchar uStack_20b;
  uchar auStack_20a [2];
  FOpenGLLinkedProgramBase *local_208;
  FColor_u_0 local_200 [2];
  undefined1 local_1f8 [8];
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> local_1f0;
  undefined1 local_1e8 [8];
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> local_1e0;
  FString local_1d8;
  FString local_1c8;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FName local_150;
  FScriptContainerElement *local_140;
  FString local_138;
  FString local_128;
  FName local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined1 local_c0 [2];
  char cStack_be;
  uchar auStack_bd [21];
  ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo> local_a8;
  uint local_68;
  uint local_64 [3];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  local_264 = 0;
  local_260 = param_3;
  local_230 = this;
  local_208 = param_1;
  FOpenGLShaderBindings::FOpenGLShaderBindings(&this->Bindings,&param_2->Bindings);
  pvVar10 = ThreadLocalStoragePointer;
  uVar31 = (ulonglong)_tls_index;
  pTVar1 = &this->PackedUniformInfos;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PackedUniformInfos).ArrayNum = 0;
  (this->PackedUniformInfos).ArrayMax = 0;
  lVar27 = *(longlong *)((longlong)pvVar10 + uVar31 * 8);
  (this->PackedUniformBufferInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PackedUniformBufferInfos).ArrayNum = 0;
  (this->PackedUniformBufferInfos).ArrayMax = 0;
  (this->LastEmulatedUniformBufferSet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastEmulatedUniformBufferSet).ArrayNum = 0;
  (this->LastEmulatedUniformBufferSet).ArrayMax = 0;
  if ((*(int *)(lVar27 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x78,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    FirstTextureUnit[0] = FOpenGLBase::MaxTextureImageUnits;
    FirstTextureUnit[1] = 0;
    if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x78,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    iVar19 = FOpenGLBase::MaxTextureImageUnits;
    if ((FOpenGLBase::MaxVertexTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxVertexTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x79,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    FirstTextureUnit[2] = FOpenGLBase::MaxVertexTextureImageUnits + iVar19;
    FirstTextureUnit[3] = 0;
    FirstTextureUnit[4] = 0;
    FirstTextureUnit[5] = 0;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if ((FOpenGLBase::MaxVertexTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxVertexTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x79,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    MaxTextureUnit[0] = FOpenGLBase::MaxVertexTextureImageUnits;
    if ((FOpenGLBase::MaxTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x78,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    MaxTextureUnit[1] = FOpenGLBase::MaxTextureImageUnits;
    if ((FOpenGLBase::MaxGeometryTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxGeometryTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x7a,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    MaxTextureUnit[2] = FOpenGLBase::MaxGeometryTextureImageUnits;
    MaxTextureUnit[3] = 0;
    MaxTextureUnit[4] = 0;
    if ((FOpenGLBase::MaxComputeTextureImageUnits == -1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("MaxComputeTextureImageUnits != -1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                            ,0x7b,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    MaxTextureUnit[5] = FOpenGLBase::MaxComputeTextureImageUnits;
    _Init_thread_footer(&::_TSS1);
  }
  local_228 = 0xffffffff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    FirstUAVUnit[0] = ___xmm_ffffffffffffffff0000000000000000;
    FirstUAVUnit[1] = _UNK_15076cb64;
    FirstUAVUnit[2] = _UNK_15076cb68;
    FirstUAVUnit[3] = _UNK_15076cb6c;
    FirstUAVUnit[4] = -1;
    FirstUAVUnit[5] = 0;
    _Init_thread_footer(&::_TSS2);
  }
  FVar25 = StatPtr_STAT_OpenGLShaderBindParameterTime;
  if (StatPtr_STAT_OpenGLShaderBindParameterTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderBindParameterTime>)0x0) {
    pFVar24 = ::FName::FName(&local_118,"STAT_OpenGLShaderBindParameterTime");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderBindParameterTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderBindParameterTime,
                        *pFVar24,L"Shader bind param time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                        L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar25;
  bVar16 = false;
  bVar9 = false;
  local_150.ComparisonIndex.Value = 0;
  local_150.Number = 0;
  bVar15 = false;
  bVar17 = false;
  if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_145be6ae1:
    bVar9 = bVar17;
    bVar16 = bVar15;
    bVar15 = false;
    local_258 = local_150;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200[0]._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar16 = false;
      bVar9 = true;
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x7ad);
        bVar16 = true;
        bVar9 = true;
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145be6ae1;
    local_258 = FVar32;
    FThreadStats::AddMessage(FVar32,CycleScopeStart);
    bVar15 = true;
  }
  pHVar26 = wglGetCurrentContext();
  if (pHVar26 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  piVar42 = &(this->PackedUniformInfos).ArrayMax;
  EVar30 = local_260 & 0xff;
  _local_c0 = 0;
  auStack_bd[5] = '\0';
  auStack_bd[6] = '\0';
  if ((undefined1)local_260 == '\0') {
    uVar18 = 0x76;
  }
  else if (EVar30 == SHADER_STAGE_PIXEL) {
    uVar18 = 0x70;
  }
  else if (EVar30 == SHADER_STAGE_GEOMETRY) {
    uVar18 = 0x67;
  }
  else if (EVar30 == NUM_NON_COMPUTE_SHADER_STAGES) {
    uVar18 = 99;
  }
  else {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\CrossCompilerCommon.h"
                        ,0x55,L"invalid value: ShaderStageIndexToTypeName(ShaderStage = \'%u\')");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    uVar18 = 0;
  }
  pFVar14 = local_208;
  bVar33 = 0;
  _local_c0 = CONCAT41(0x5f75,uVar18);
  local_a8.SecondaryData = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0;
  local_68 = 0;
  local_64[0] = 7;
  do {
    switch(bVar33) {
    case 0:
      uVar37 = 'h';
      break;
    case 1:
      uVar37 = 'm';
      break;
    case 2:
      uVar37 = 'l';
      break;
    case 3:
      uVar37 = 'i';
      break;
    case 4:
      uVar37 = 'u';
      break;
    case 5:
      uVar37 = 's';
      break;
    case 6:
      uVar37 = 'g';
      break;
    default:
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\CrossCompilerCommon.h"
                          ,0x66,L"invalid value: PackedTypeIndexToTypeName(ArrayType = %d)");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      uVar37 = '\0';
    }
    _local_c0 = CONCAT13(uVar37,_local_c0);
    iVar19 = (*glGetUniformLocation)(pFVar14->Program,local_c0);
    if (iVar19 != -1) {
      FVar39 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0) {
        FVar39 = local_a8.SecondaryData;
      }
      local_218 = iVar19;
      uStack_214 = uVar37;
      bStack_213 = bVar33;
      if ((ulonglong)FVar39 <= &local_218) {
        FVar39 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)&local_a8;
        if (local_a8.SecondaryData != (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0)
        {
          FVar39 = local_a8.SecondaryData;
        }
        if ((&local_218 < (int *)((longlong)FVar39 + (longlong)(int)local_64[0] * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar23 = (FShaderStage *)(*pcVar7)();
          return pFVar23;
        }
      }
      uVar20 = local_68;
      if (local_68 == local_64[0]) {
        uVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>::ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>_>
                           (0x408,&local_a8,(int *)local_64);
      }
      local_68 = uVar20 + 1;
      FVar39 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0) {
        FVar39 = local_a8.SecondaryData;
      }
      *(ulonglong *)((longlong)FVar39 + (longlong)(int)uVar20 * 8) =
           CONCAT26(auStack_212,CONCAT15(bStack_213,CONCAT14(uStack_214,local_218)));
    }
    pFVar23 = local_230;
    bVar33 = bVar33 + 1;
  } while (bVar33 < 7);
  uVar20 = (local_230->Bindings).PackedGlobalArrays.ArrayNum;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
  }
  (this->PackedUniformInfos).ArrayNum = 0;
  if (*piVar42 != uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar20,&pTVar1->AllocatorInstance,0,piVar42);
  }
  pFVar34 = (pFVar23->Bindings).PackedGlobalArrays.AllocatorInstance.Data;
  iVar19 = (pFVar23->Bindings).PackedGlobalArrays.ArrayNum;
  pFVar40 = pFVar34 + (longlong)iVar19 * 4;
  while( true ) {
    if ((pFVar23->Bindings).PackedGlobalArrays.ArrayNum != iVar19) {
      local_267 = 0;
      `TCheckedPointerIterator<CrossCompiler::FPackedArrayInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_267);
    }
    uVar20 = local_68;
    uVar12 = local_220;
    FVar32 = local_258;
    if (pFVar34 == pFVar40) break;
    uVar31 = (ulonglong)(int)local_68;
    local_220 = CONCAT44((uint)(byte)pFVar34[2],0xffffffff);
    uVar13 = local_220;
    local_220._6_2_ = SUB82(uVar12,6);
    local_220._0_6_ = CONCAT15(7,(int5)uVar13);
    FVar39 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)&local_a8;
    if (local_a8.SecondaryData != (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0) {
      FVar39 = local_a8.SecondaryData;
    }
    FVar3 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)
            ((longlong)FVar39 + uVar31 * 8);
    while( true ) {
      if ((uint)uVar31 != uVar20) {
        local_266 = 0;
        `TCheckedPointerIterator<FOpenGLLinkedProgram::FPackedUniformInfo,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_266);
        uVar31 = (ulonglong)local_68;
      }
      if (FVar39 == FVar3) goto LAB_145be6e55;
      if (*(FScriptContainerElement *)((longlong)FVar39 + 4) == pFVar34[2]) break;
      FVar39 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)((longlong)FVar39 + 8);
    }
    local_220 = *(undefined8 *)FVar39;
LAB_145be6e55:
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_220) &&
        ((FScriptContainerElement *)&local_220 <
         pFVar5 + (longlong)(this->PackedUniformInfos).ArrayMax * 8)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar7 = (code *)swi(3);
      pFVar23 = (FShaderStage *)(*pcVar7)();
      return pFVar23;
    }
    iVar21 = (this->PackedUniformInfos).ArrayNum;
    if (iVar21 == (this->PackedUniformInfos).ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&pTVar1->AllocatorInstance,&(this->PackedUniformInfos).ArrayMax);
    }
    (this->PackedUniformInfos).ArrayNum = iVar21 + 1;
    pFVar34 = pFVar34 + 4;
    *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar21 * 8) = local_220;
    pFVar23 = local_230;
  }
  if (local_a8.SecondaryData != (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  uVar12 = _local_c0;
  bVar33 = (pFVar23->Bindings).NumUniformBuffers;
  iVar19 = (pFVar23->PackedUniformBufferInfos).ArrayNum;
  _local_c0 = CONCAT41(99,local_c0[0]);
  auStack_bd[4] = SUB81(uVar12,7);
  _local_c0 = (uint7)_local_c0;
  if (iVar19 < (int)(uint)bVar33) {
    iVar19 = (uint)bVar33 - iVar19;
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar19,&(pFVar23->PackedUniformBufferInfos).AllocatorInstance,
                        &(pFVar23->PackedUniformBufferInfos).ArrayNum,
                        &(pFVar23->PackedUniformBufferInfos).ArrayMax);
    memset((pFVar23->PackedUniformBufferInfos).AllocatorInstance.Data + (longlong)iVar21 * 0x10,0,
           (longlong)iVar19 << 4);
  }
  else if ((int)(uint)bVar33 < iVar19) {
    iVar19 = iVar19 - (uint)bVar33;
    if (iVar19 < 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x458,
                          L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                         );
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
    }
    else if (iVar19 == 0) goto LAB_145be6ffa;
    TArray<TArray<FOpenGLLinkedProgram::FPackedUniformInfo,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::RemoveAtImpl(&pFVar23->PackedUniformBufferInfos,(uint)bVar33,iVar19);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&(pFVar23->PackedUniformBufferInfos).AllocatorInstance,
               (pFVar23->PackedUniformBufferInfos).ArrayNum,
               &(pFVar23->PackedUniformBufferInfos).ArrayMax);
  }
LAB_145be6ffa:
  if (((int)(uint)(pFVar23->Bindings).NumUniformBuffers <
       (pFVar23->Bindings).PackedUniformBuffers.ArrayNum) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Bindings.PackedUniformBuffers.Num() <= Bindings.NumUniformBuffers",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                          ,0x7e5,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    pFVar23 = (FShaderStage *)(*pcVar7)();
    return pFVar23;
  }
  iVar19 = (pFVar23->Bindings).PackedUniformBuffers.ArrayNum;
  local_25c = 0;
  if (0 < iVar19) {
    do {
      uVar20 = local_25c;
      uVar38 = ~local_25c;
      uVar41 = 0;
      if ((int)local_25c < iVar19) {
        uVar41 = uVar38 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      local_140 = (pFVar23->Bindings).PackedUniformBuffers.AllocatorInstance.Data +
                  (longlong)(int)uVar20 * 0x10;
      uVar41 = 0;
      if ((int)uVar20 < (pFVar23->PackedUniformBufferInfos).ArrayNum) {
        uVar41 = uVar38 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      pFVar40 = (pFVar23->PackedUniformBufferInfos).AllocatorInstance.Data +
                (longlong)(int)uVar20 * 0x10;
      if ((99 < uVar20) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 100",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x4be,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      pFVar34 = local_140;
      pFVar14 = local_208;
      pcVar29 = local_c0 + 2;
      cVar8 = (char)((int)uVar20 >> 0x1f);
      if (9 < (int)uVar20) {
        pcVar29 = local_c0 + 3;
        _local_c0 = CONCAT12((((char)((int)uVar20 / 10) + cVar8) -
                             (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) + '0',local_c0);
      }
      *pcVar29 = (char)uVar20 +
                 (((char)((int)uVar20 / 10) + cVar8) -
                 (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) * -10 + '0';
      pcVar29[1] = '_';
      pcVar29[3] = '\0';
      lVar35 = *(longlong *)local_140;
      iVar19 = *(int *)(local_140 + 8);
      lVar27 = lVar35 + (longlong)iVar19 * 4;
      while( true ) {
        if (*(int *)(pFVar34 + 8) != iVar19) {
          local_265 = 0;
          `TCheckedPointerIterator<CrossCompiler::FPackedArrayInfo_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_265);
        }
        if (lVar35 == lVar27) break;
        uVar20 = pFVar14->Program;
        pcVar29[2] = *(char *)(lVar35 + 2);
        local_210 = (*glGetUniformLocation)(uVar20,local_c0);
        uStack_20c = *(uchar *)(lVar35 + 2);
        uStack_20b = *(uchar *)(lVar35 + 3);
        if (((*(int **)&pFVar40->field_0x0 <= &local_210) &&
            (&local_210 < *(int **)&pFVar40->field_0x0 + (longlong)*(int *)(pFVar40 + 0xc) * 2)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar23 = (FShaderStage *)(*pcVar7)();
          return pFVar23;
        }
        iVar21 = *(int *)&pFVar40[8].field_0x0;
        if (iVar21 == *(int *)(pFVar40 + 0xc)) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)pFVar40,(int *)(pFVar40 + 0xc));
        }
        lVar35 = lVar35 + 4;
        *(int *)&pFVar40[8].field_0x0 = iVar21 + 1;
        *(ulonglong *)(*(longlong *)&pFVar40->field_0x0 + (longlong)iVar21 * 8) =
             CONCAT26(auStack_20a,CONCAT15(uStack_20b,CONCAT14(uStack_20c,local_210)));
      }
      local_25c = local_25c + 1;
      iVar19 = (local_230->Bindings).PackedUniformBuffers.ArrayNum;
      FVar32 = local_258;
      pFVar23 = local_230;
    } while ((int)local_25c < iVar19);
  }
  uVar31 = 0;
  bVar33 = (pFVar23->Bindings).NumUniformBuffers;
  (pFVar23->LastEmulatedUniformBufferSet).ArrayNum = 0;
  uVar20 = (uint)bVar33;
  if ((pFVar23->LastEmulatedUniformBufferSet).ArrayMax != uVar20) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar20,&(pFVar23->LastEmulatedUniformBufferSet).AllocatorInstance,0,
               &(pFVar23->LastEmulatedUniformBufferSet).ArrayMax);
  }
  uVar20 = (uint)(pFVar23->Bindings).NumUniformBuffers;
  iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,uVar20,&(pFVar23->LastEmulatedUniformBufferSet).AllocatorInstance,
                      &(pFVar23->LastEmulatedUniformBufferSet).ArrayNum,
                      &(pFVar23->LastEmulatedUniformBufferSet).ArrayMax);
  memset((pFVar23->LastEmulatedUniformBufferSet).AllocatorInstance.Data + (longlong)iVar19 * 4,0,
         (ulonglong)uVar20 << 2);
  pFVar14 = local_208;
  uVar20 = 0xffffffff;
  _local_c0 = CONCAT41(0x73,local_c0[0]);
  uVar41 = 0;
  if ((pFVar23->Bindings).NumSamplers != '\0') {
    do {
      if ((99 < uVar41) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 100",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x4be,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      pcVar29 = local_c0 + 2;
      cVar8 = (char)((int)uVar41 >> 0x1f);
      if (9 < (int)uVar41) {
        pcVar29 = local_c0 + 3;
        _local_c0 = CONCAT12((((char)((int)uVar41 / 10) + cVar8) -
                             (char)((longlong)(int)uVar41 * 0x66666667 >> 0x3f)) + '0',local_c0);
      }
      *pcVar29 = (char)uVar41 +
                 (((char)((int)uVar41 / 10) + cVar8) -
                 (char)((longlong)(int)uVar41 * 0x66666667 >> 0x3f)) * -10 + '0';
      pcVar29[1] = '\0';
      iVar19 = (*glGetUniformLocation)(pFVar14->Program,local_c0);
      uVar38 = uVar41;
      if (iVar19 == -1) {
        if (uVar20 != 0xffffffff) {
          if ((99 < uVar20) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < 100",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                  ,0x4be,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
          pcVar29 = local_c0 + 2;
          cVar8 = (char)((int)uVar20 >> 0x1f);
          if (9 < (int)uVar20) {
            pcVar29 = local_c0 + 3;
            _local_c0 = CONCAT12((((char)((int)uVar20 / 10) + cVar8) -
                                 (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) + '0',local_c0)
            ;
          }
          *pcVar29 = (char)uVar20 +
                     (((char)((int)uVar20 / 10) + cVar8) -
                     (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) * -10 + '0';
          pcVar29[1] = '\0';
          iVar19 = uVar41 - uVar20;
          local_c0[(ulonglong)(9 < (int)uVar20) + 3] = 0x5b;
          if (((iVar19 < 0) || (99 < iVar19)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < 100",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                  ,0x4be,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
          pcVar29 = local_c0 + (ulonglong)(9 < (int)uVar20) + 4;
          cVar8 = (char)(iVar19 >> 0x1f);
          if (9 < iVar19) {
            *pcVar29 = (((char)(iVar19 / 10) + cVar8) -
                       (char)((longlong)iVar19 * 0x66666667 >> 0x3f)) + '0';
            pcVar29 = local_c0 + (ulonglong)(9 < (int)uVar20) + 5;
          }
          *pcVar29 = (char)iVar19 +
                     (((char)(iVar19 / 10) + cVar8) - (char)((longlong)iVar19 * 0x66666667 >> 0x3f))
                     * -10 + '0';
          pcVar29[1] = ']';
          pcVar29[2] = '\0';
          iVar19 = (*glGetUniformLocation)(pFVar14->Program,local_c0);
          uVar38 = uVar20;
          if (iVar19 != -1) goto LAB_145be7554;
        }
      }
      else {
LAB_145be7554:
        lVar27 = (longlong)(int)local_260;
        (*glUniform1i)(iVar19,FirstTextureUnit[lVar27] + uVar41);
        iVar19 = FirstTextureUnit[lVar27] + uVar41;
        if (((iVar19 < 0) || ((pFVar14->TextureStageNeeds).NumBits <= iVar19)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar23 = (FShaderStage *)(*pcVar7)();
          return pFVar23;
        }
        FVar6 = (pFVar14->TextureStageNeeds).AllocatorInstance.SecondaryData;
        FVar36 = (ForElementType<unsigned_int>)&pFVar14->TextureStageNeeds;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar36 = FVar6;
        }
        iVar21 = iVar19;
        if (iVar19 < 0) {
          iVar21 = iVar19 + 0x1f;
        }
        puVar4 = (uint *)((longlong)FVar36 + (longlong)(iVar21 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << ((byte)iVar19 & 0x1f);
        iVar19 = FirstTextureUnit[lVar27] + uVar41;
        if ((int)(FirstTextureUnit[lVar27] + uVar41) < pFVar14->MaxTextureStage) {
          iVar19 = pFVar14->MaxTextureStage;
        }
        iVar21 = MaxTextureUnit[lVar27];
        pFVar14->MaxTextureStage = iVar19;
        pFVar23 = local_230;
        uVar20 = uVar38;
        if (iVar21 <= (int)uVar41) {
          if (1 < (byte)LogShaders._0_1_) {
            local_240 = (undefined1  [8])0x0;
            local_238 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0;
            local_100 = 0;
            local_110 = 0;
            uStack_108 = 0;
            if (((*(longlong *)(pFVar14->ProgramKey).ShaderHashes[0].Hash == 0) &&
                (*(longlong *)((pFVar14->ProgramKey).ShaderHashes[0].Hash + 8) == 0)) &&
               (*(int *)((pFVar14->ProgramKey).ShaderHashes[0].Hash + 0x10) == 0)) {
              pFVar2 = (pFVar14->ProgramKey).ShaderHashes + 5;
              local_fc = 0;
              uStack_f4 = 0;
              local_ec = 0;
              if (((*(longlong *)pFVar2->Hash != 0) ||
                  (*(longlong *)((pFVar14->ProgramKey).ShaderHashes[5].Hash + 8) != 0)) ||
                 (*(int *)((pFVar14->ProgramKey).ShaderHashes[5].Hash + 0x10) != 0)) {
                local_1b0.Data.ArrayNum = 0;
                local_1b0.Data.ArrayMax = 0;
                local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                BytesToHex(pFVar2->Hash,0x14,&local_1b0);
                ::FString::ConcatCF((FString *)local_1f8,L"Program C_",&local_1b0);
                if (local_240 != (undefined1  [8])0x0) {
                  FMemory::Free((void *)local_240);
                }
                local_240 = local_1f8;
                local_238 = local_1f0;
                local_1f0 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0;
                local_1f8 = (undefined1  [8])0x0;
                FVar28.Data = local_1b0.Data.AllocatorInstance.Data;
                goto LAB_145be77f5;
              }
              ::FString::operator=((FString *)local_240,L"Program with unset key");
            }
            else {
              local_1a0.Data.ArrayNum = 0;
              local_1a0.Data.ArrayMax = 0;
              local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              BytesToHex((uchar *)pFVar14,0x14,&local_1a0);
              ::FString::ConcatCF((FString *)local_1e8,L"Program V_",&local_1a0);
              if (local_240 != (undefined1  [8])0x0) {
                FMemory::Free((void *)local_240);
              }
              local_240 = local_1e8;
              local_238 = local_1e0;
              local_1e0 = (ForElementType<FOpenGLLinkedProgram::FPackedUniformInfo>)0x0;
              local_1e8 = (undefined1  [8])0x0;
              if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
              }
              local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_190.Data.ArrayNum = 0;
              local_190.Data.ArrayMax = 0;
              BytesToHex((pFVar14->ProgramKey).ShaderHashes[1].Hash,0x14,&local_190);
              ::FString::ConcatCF(&local_138,L"_P_",&local_190);
              iVar19 = local_138.Data.ArrayNum + -1;
              if (local_138.Data.ArrayNum == 0) {
                iVar19 = 0;
              }
              ::FString::AppendChars
                        ((FString *)local_240,(wchar_t *)local_138.Data.AllocatorInstance.Data,
                         iVar19);
              FVar28.Data = local_190.Data.AllocatorInstance.Data;
              if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_138.Data.AllocatorInstance.Data);
                FVar28.Data = local_190.Data.AllocatorInstance.Data;
              }
LAB_145be77f5:
              if (FVar28.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar28.Data);
              }
            }
            if (((local_264 & 2) != 0) &&
               (local_264 = local_264 & 0xfffffffd, local_240 != (undefined1  [8])0x0)) {
              FMemory::Free((void *)local_240);
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
            if (local_240 != (undefined1  [8])0x0) {
              FMemory::Free((void *)local_240);
            }
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x82b,L"");
          pFVar23 = local_230;
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
        }
      }
      uVar41 = uVar41 + 1;
      FVar32 = local_258;
    } while ((int)uVar41 < (int)(uint)(pFVar23->Bindings).NumSamplers);
  }
  pFVar14 = local_208;
  uVar41 = 0;
  _local_c0 = CONCAT41(0x69,local_c0[0]);
  pFVar23 = local_230;
  uVar20 = local_264;
  if ((local_230->Bindings).NumUAVs != '\0') {
    do {
      if ((99 < uVar41) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 100",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x4be,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      pcVar29 = local_c0 + 2;
      cVar8 = (char)((int)uVar41 >> 0x1f);
      if (9 < (int)uVar41) {
        pcVar29 = local_c0 + 3;
        _local_c0 = CONCAT12((((char)((int)uVar41 / 10) + cVar8) -
                             (char)((longlong)(int)uVar41 * 0x66666667 >> 0x3f)) + '0',local_c0);
      }
      uVar38 = pFVar14->Program;
      *pcVar29 = (char)uVar41 +
                 (((char)((int)uVar41 / 10) + cVar8) -
                 (char)((longlong)(int)uVar41 * 0x66666667 >> 0x3f)) * -10 + '0';
      pcVar29[1] = '\0';
      iVar19 = (*glGetUniformLocation)(uVar38,local_c0);
      uVar38 = uVar41;
      if (iVar19 == -1) {
        builtin_strncpy(pcVar29 + 1,"_VAR",5);
        uVar22 = (*glGetProgramResourceIndex)(pFVar14->Program,0x92e6,local_c0);
        uVar11 = local_228;
        if (uVar22 != 0xffffffff) goto LAB_145be7af9;
        local_228 = uVar11;
        if (local_228 != 0xffffffff) {
          if ((99 < local_228) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < 100",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                  ,0x4be,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
          pcVar29 = local_c0 + 2;
          cVar8 = (char)((int)uVar11 >> 0x1f);
          if (9 < (int)uVar11) {
            pcVar29 = local_c0 + 3;
            _local_c0 = CONCAT12((((char)((int)uVar11 / 10) + cVar8) -
                                 (char)((longlong)(int)uVar11 * 0x66666667 >> 0x3f)) + '0',local_c0)
            ;
          }
          *pcVar29 = (char)uVar11 +
                     (((char)((int)uVar11 / 10) + cVar8) -
                     (char)((longlong)(int)uVar11 * 0x66666667 >> 0x3f)) * -10 + '0';
          pcVar29[1] = '\0';
          iVar19 = uVar41 - uVar11;
          local_c0[(ulonglong)(9 < (int)uVar11) + 3] = 0x5b;
          if (((iVar19 < 0) || (99 < iVar19)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index >= 0 && Index < 100",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                                  ,0x4be,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
          pcVar29 = local_c0 + (ulonglong)(9 < (int)uVar11) + 4;
          cVar8 = (char)(iVar19 >> 0x1f);
          if (9 < iVar19) {
            *pcVar29 = (((char)(iVar19 / 10) + cVar8) -
                       (char)((longlong)iVar19 * 0x66666667 >> 0x3f)) + '0';
            pcVar29 = local_c0 + (ulonglong)(9 < (int)uVar11) + 5;
          }
          *pcVar29 = (char)iVar19 +
                     (((char)(iVar19 / 10) + cVar8) - (char)((longlong)iVar19 * 0x66666667 >> 0x3f))
                     * -10 + '0';
          pcVar29[1] = ']';
          pcVar29[2] = '\0';
          iVar19 = (*glGetUniformLocation)(pFVar14->Program,local_c0);
          local_228 = uVar11;
          uVar38 = uVar11;
          if (iVar19 != -1) goto LAB_145be7af9;
        }
      }
      else {
LAB_145be7af9:
        local_228 = uVar38;
        lVar27 = (longlong)(int)local_260;
        if ((local_260 - SHADER_STAGE_PIXEL & 0xfffffffb) != 0) {
          local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_250.Data.ArrayNum = 0;
          local_250.Data.ArrayMax = 0;
          local_d8 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          if (((*(longlong *)(pFVar14->ProgramKey).ShaderHashes[0].Hash == 0) &&
              (*(longlong *)((pFVar14->ProgramKey).ShaderHashes[0].Hash + 8) == 0)) &&
             (*(int *)((pFVar14->ProgramKey).ShaderHashes[0].Hash + 0x10) == 0)) {
            pFVar2 = (pFVar14->ProgramKey).ShaderHashes + 5;
            local_d4 = 0;
            uStack_cc = 0;
            local_c4 = 0;
            if (((*(longlong *)pFVar2->Hash != 0) ||
                (*(longlong *)((pFVar14->ProgramKey).ShaderHashes[5].Hash + 8) != 0)) ||
               (*(int *)((pFVar14->ProgramKey).ShaderHashes[5].Hash + 0x10) != 0)) {
              local_180.Data.ArrayNum = 0;
              local_180.Data.ArrayMax = 0;
              local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              BytesToHex(pFVar2->Hash,0x14,&local_180);
              ::FString::ConcatCF(&local_1d8,L"Program C_",&local_180);
              if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_250.Data.AllocatorInstance.Data);
              }
              local_250.Data.AllocatorInstance.Data = local_1d8.Data.AllocatorInstance.Data;
              local_250.Data.ArrayNum = local_1d8.Data.ArrayNum;
              local_250.Data.ArrayMax = local_1d8.Data.ArrayMax;
              local_1d8.Data.ArrayNum = 0;
              local_1d8.Data.ArrayMax = 0;
              local_1d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar28.Data = local_180.Data.AllocatorInstance.Data;
              goto LAB_145be7cde;
            }
            ::FString::operator=(&local_250,L"Program with unset key");
          }
          else {
            local_170.Data.ArrayNum = 0;
            local_170.Data.ArrayMax = 0;
            local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            BytesToHex((uchar *)pFVar14,0x14,&local_170);
            ::FString::ConcatCF(&local_1c8,L"Program V_",&local_170);
            if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_250.Data.AllocatorInstance.Data);
            }
            local_250.Data.AllocatorInstance.Data = local_1c8.Data.AllocatorInstance.Data;
            local_250.Data.ArrayNum = local_1c8.Data.ArrayNum;
            local_250.Data.ArrayMax = local_1c8.Data.ArrayMax;
            local_1c8.Data.ArrayNum = 0;
            local_1c8.Data.ArrayMax = 0;
            local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data.AllocatorInstance.Data);
            }
            local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_160.Data.ArrayNum = 0;
            local_160.Data.ArrayMax = 0;
            BytesToHex((pFVar14->ProgramKey).ShaderHashes[1].Hash,0x14,&local_160);
            ::FString::ConcatCF(&local_128,L"_P_",&local_160);
            iVar19 = local_128.Data.ArrayNum + -1;
            if (local_128.Data.ArrayNum == 0) {
              iVar19 = 0;
            }
            ::FString::AppendChars
                      (&local_250,(wchar_t *)local_128.Data.AllocatorInstance.Data,iVar19);
            FVar28.Data = local_160.Data.AllocatorInstance.Data;
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
              FVar28.Data = local_160.Data.AllocatorInstance.Data;
            }
LAB_145be7cde:
            if (FVar28.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar28.Data);
            }
          }
          if (((uVar20 & 1) != 0) &&
             (uVar20 = 0, local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Stage == CrossCompiler::SHADER_STAGE_COMPUTE || Stage == CrossCompiler::SHADER_STAGE_PIXEL"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x863,L"%s uses UAV in vertex shader");
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            pFVar23 = (FShaderStage *)(*pcVar7)();
            return pFVar23;
          }
        }
        iVar19 = FirstUAVUnit[lVar27] + uVar41;
        if (((iVar19 < 0) || ((pFVar14->UAVStageNeeds).NumBits <= iVar19)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar17)) {
          pcVar7 = (code *)swi(3);
          pFVar23 = (FShaderStage *)(*pcVar7)();
          return pFVar23;
        }
        FVar6 = (pFVar14->UAVStageNeeds).AllocatorInstance.SecondaryData;
        FVar36 = (ForElementType<unsigned_int>)&pFVar14->UAVStageNeeds;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar36 = FVar6;
        }
        iVar21 = iVar19;
        if (iVar19 < 0) {
          iVar21 = iVar19 + 0x1f;
        }
        puVar4 = (uint *)((longlong)FVar36 + (longlong)(iVar21 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << ((byte)iVar19 & 0x1f);
        iVar19 = FirstUAVUnit[lVar27] + uVar41;
        if ((int)(FirstUAVUnit[lVar27] + uVar41) < pFVar14->MaxUAVUnitUsed) {
          iVar19 = pFVar14->MaxUAVUnitUsed;
        }
        pFVar14->MaxUAVUnitUsed = iVar19;
        pFVar23 = local_230;
      }
      uVar41 = uVar41 + 1;
      FVar32 = local_258;
    } while ((int)uVar41 < (int)(uint)(pFVar23->Bindings).NumUAVs);
  }
  _local_c0 = CONCAT41(0x62,local_c0[0]);
  if ((pFVar23->Bindings).NumUniformBuffers != '\0') {
    do {
      uVar20 = (uint)uVar31;
      if ((99 < uVar20) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0 && Index < 100",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                              ,0x4be,L""), bVar17)) {
        pcVar7 = (code *)swi(3);
        pFVar23 = (FShaderStage *)(*pcVar7)();
        return pFVar23;
      }
      pcVar29 = local_c0 + 2;
      cVar8 = (char)(uVar31 >> 0x18) >> 7;
      if (9 < (int)uVar20) {
        pcVar29 = local_c0 + 3;
        _local_c0 = CONCAT12((((char)((int)uVar20 / 10) + cVar8) -
                             (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) + '0',local_c0);
      }
      *pcVar29 = (char)uVar31 +
                 (((char)((int)uVar20 / 10) + cVar8) -
                 (char)((longlong)(int)uVar20 * 0x66666667 >> 0x3f)) * -10 + '0';
      pcVar29[1] = '\0';
      uVar41 = (*glGetUniformBlockIndex)(pFVar14->Program,local_c0);
      if (-1 < (int)uVar41) {
        (*glUniformBlockBinding)(pFVar14->Program,uVar41,uVar20 + param_4);
      }
      uVar31 = (ulonglong)(uVar20 + 1);
    } while ((int)(uVar20 + 1) < (int)(uint)(pFVar23->Bindings).NumUniformBuffers);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return pFVar23;
}

