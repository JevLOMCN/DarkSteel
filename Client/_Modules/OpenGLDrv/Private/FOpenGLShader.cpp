// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 2

// FOpenGLShader @ 145be3600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLShader * __thiscall
FOpenGLShader::FOpenGLShader
          (FOpenGLShader *this,TArrayView<unsigned_char_const_,int> *param_1,FSHAHash *param_2,
          uint param_3,FShaderResourceTable *param_4,FRHIShader *param_5)

{
  FOpenGLCompiledShaderKey *pFVar1;
  FOpenGLShaderBindings *pFVar2;
  TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FOpenGLShaderVarying,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<CrossCompiler::FUniformBufferCopyInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  int *piVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  FOpenGLShaderBindings *pFVar15;
  FOpenGLShaderDeviceCapabilities FVar16;
  FOpenGLShaderDeviceCapabilities FVar17;
  FRHIShader *pFVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  uint uVar22;
  FOpenGLShader *pFVar23;
  size_t sVar24;
  char *pcVar25;
  TMap<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
  *this_00;
  FOpenGLCompiledShaderValue *this_01;
  FName *pFVar26;
  FThreadSafeStaticStat<_public:___cdecl_FOpenGLShader::FOpenGLShader(TArrayView<unsigned_char_const_,int>,FSHAHash_const_&,unsigned_int,FShaderResourceTable_&,FRHIShader_*)_::_35_::FStat_STAT_GLCheckShaderCodeCRC>
  FVar27;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  ushort uVar28;
  FRHIShaderData *pFVar29;
  uchar *puVar30;
  int iVar31;
  FName FVar32;
  <unnamed_type_Debug> *p<Var33;
  longlong lVar34;
  uchar *puVar35;
  ForAnyElementType FVar36;
  ulonglong uVar37;
  undefined1 auStackY_2b8 [32];
  TArray<char,TSizedDefaultAllocator<32>_> local_248;
  TArrayView<unsigned_char_const_,int> local_238;
  FString local_228;
  TArray<char,TSizedDefaultAllocator<32>_> local_218;
  FColor_u_0 local_208 [2];
  FName local_200;
  FRHIShader *local_1f8;
  FName local_1f0;
  FShaderResourceTable *local_1e0;
  TArrayView<unsigned_char_const_,int> *local_1d8;
  LARGE_INTEGER local_1d0;
  TArray<char,TSizedDefaultAllocator<32>_> local_1c8;
  FStatMessage local_1b8;
  FArchiveState local_1a8;
  undefined8 local_118;
  uchar *local_110;
  longlong local_108;
  ulonglong local_100;
  FName local_f8;
  FName local_f0;
  uchar *local_e8;
  undefined8 uStack_e0;
  FOpenGLCodeHeader local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar1 = &this->ShaderCodeKey;
  iVar31 = 0;
  this->Resource = 0;
  (this->UniformBuffersCopyInfo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniformBuffersCopyInfo).ArrayNum = 0;
  (this->UniformBuffersCopyInfo).ArrayMax = 0;
  pFVar1->TypeEnum = 0;
  pFVar1->CodeSize = 0;
  (this->ShaderCodeKey).CodeCRC = 0;
  local_238.DataPtr = param_1->DataPtr;
  local_238.ArrayNum = param_1->ArrayNum;
  local_238._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uVar8 = *(undefined8 *)&param_1->ArrayNum;
  this->bUsesProgrammableBlending = false;
  local_1f8 = param_5;
  pFVar2 = &this->Bindings;
  pTVar3 = &(this->Bindings).InputVaryings;
  pTVar4 = &(this->Bindings).OutputVaryings;
  local_1e0 = param_4;
  (pFVar2->PackedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).PackedUniformBuffers.ArrayNum = 0;
  (this->Bindings).PackedUniformBuffers.ArrayMax = 0;
  (this->Bindings).PackedGlobalArrays.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).PackedGlobalArrays.ArrayNum = 0;
  (this->Bindings).PackedGlobalArrays.ArrayMax = 0;
  (this->Bindings).InputVaryings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).InputVaryings.ArrayNum = 0;
  (this->Bindings).InputVaryings.ArrayMax = 0;
  (this->Bindings).OutputVaryings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).OutputVaryings.ArrayNum = 0;
  (this->Bindings).OutputVaryings.ArrayMax = 0;
  (this->Bindings).InOutMask = 0;
  (this->Bindings).NumSamplers = '\0';
  (this->Bindings).NumUniformBuffers = '\0';
  (this->Bindings).NumUAVs = '\0';
  (this->Bindings).bFlattenUB = false;
  (this->Bindings).VaryingHash.Hash[0] = '\0';
  (this->Bindings).VaryingHash.Hash[1] = '\0';
  (this->Bindings).VaryingHash.Hash[2] = '\0';
  (this->Bindings).VaryingHash.Hash[3] = '\0';
  (this->Bindings).VaryingHash.Hash[4] = '\0';
  (this->Bindings).VaryingHash.Hash[5] = '\0';
  (this->Bindings).VaryingHash.Hash[6] = '\0';
  (this->Bindings).VaryingHash.Hash[7] = '\0';
  pFVar15 = &this->Bindings;
  (pFVar15->VaryingHash).Hash[8] = '\0';
  (pFVar15->VaryingHash).Hash[9] = '\0';
  (pFVar15->VaryingHash).Hash[10] = '\0';
  (pFVar15->VaryingHash).Hash[0xb] = '\0';
  (pFVar15->VaryingHash).Hash[0xc] = '\0';
  (pFVar15->VaryingHash).Hash[0xd] = '\0';
  (pFVar15->VaryingHash).Hash[0xe] = '\0';
  (pFVar15->VaryingHash).Hash[0xf] = '\0';
  *(undefined8 *)((this->Bindings).VaryingHash.Hash + 0x10) = 0;
  uVar22 = (uint)uVar8;
  local_1d8 = param_1;
  if ((uVar22 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderCode.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                          ,0x3de,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FOpenGLShader *)(*pcVar10)();
    return pFVar23;
  }
  local_e8 = param_1->DataPtr;
  uStack_e0 = *(undefined8 *)&param_1->ArrayNum;
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_110 = param_1->DataPtr;
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  local_108 = (longlong)(int)*(undefined8 *)&param_1->ArrayNum;
  local_100 = 0x7fffffffffffffff;
  FArchiveState::SetIsLoading(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8);
  local_1a8._padding_ = (longlong)&___7FMemoryReaderView__6B_;
  if (3 < uVar22) {
    puVar35 = TArrayView<unsigned_char_const_,int>::operator[](&local_238,0);
    iVar31 = *(int *)(puVar35 + (longlong)(int)uVar22 + -4);
    if ((iVar31 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("LocalOptionalDataSize >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                            ,0x45d,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FOpenGLShader *)(*pcVar10)();
      return pFVar23;
    }
    if (((int)uVar22 < iVar31) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderCode.Num() >= LocalOptionalDataSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                            ,0x45e,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FOpenGLShader *)(*pcVar10)();
      return pFVar23;
    }
  }
  local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Bindings.PackedUniformBuffers.ArrayNum = 0;
  local_d8.Bindings.PackedUniformBuffers.ArrayMax = 0;
  local_100 = (ulonglong)(uVar22 - iVar31);
  local_d8.GlslMarker = 0;
  local_d8.FrequencyMarker = 0;
  local_d8._6_2_ = 0;
  local_d8.Bindings.VaryingHash.Hash[0x10] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0x11] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0x12] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0x13] = '\0';
  local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Bindings.PackedGlobalArrays.ArrayNum = 0;
  local_d8.Bindings.PackedGlobalArrays.ArrayMax = 0;
  local_d8.Bindings.InputVaryings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Bindings.InputVaryings.ArrayNum = 0;
  local_d8.Bindings.InputVaryings.ArrayMax = 0;
  local_d8.Bindings.OutputVaryings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Bindings.OutputVaryings.ArrayNum = 0;
  local_d8.Bindings.OutputVaryings.ArrayMax = 0;
  local_d8.Bindings.InOutMask.Bitmask = 0;
  local_d8.Bindings.NumSamplers = '\0';
  local_d8.Bindings.NumUniformBuffers = '\0';
  local_d8.Bindings.NumUAVs = '\0';
  local_d8.Bindings.bFlattenUB = false;
  local_d8.Bindings.VaryingHash.Hash[0] = '\0';
  local_d8.Bindings.VaryingHash.Hash[1] = '\0';
  local_d8.Bindings.VaryingHash.Hash[2] = '\0';
  local_d8.Bindings.VaryingHash.Hash[3] = '\0';
  local_d8.Bindings.VaryingHash.Hash[4] = '\0';
  local_d8.Bindings.VaryingHash.Hash[5] = '\0';
  local_d8.Bindings.VaryingHash.Hash[6] = '\0';
  local_d8.Bindings.VaryingHash.Hash[7] = '\0';
  local_d8.Bindings.VaryingHash.Hash[8] = '\0';
  local_d8.Bindings.VaryingHash.Hash[9] = '\0';
  local_d8.Bindings.VaryingHash.Hash[10] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0xb] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0xc] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0xd] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0xe] = '\0';
  local_d8.Bindings.VaryingHash.Hash[0xf] = '\0';
  local_d8.ShaderName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ShaderName.Data.ArrayNum = 0;
  local_d8.ShaderName.Data.ArrayMax = 0;
  local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.UniformBuffersCopyInfo.ArrayNum = 0;
  local_d8.UniformBuffersCopyInfo.ArrayMax = 0;
  FOpenGLCodeHeader::Serialize(&local_d8,(FArchive *)&local_1a8,local_1e0);
  if (local_d8.GlslMarker != 0x474c534c) {
LAB_145be42f7:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data);
    }
    if (local_d8.ShaderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ShaderName.Data.AllocatorInstance.Data);
    }
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)local_d8.Bindings.OutputVaryings.AllocatorInstance.Data,
               local_d8.Bindings.OutputVaryings.ArrayNum);
    if ((FOpenGLShaderVarying *)local_d8.Bindings.OutputVaryings.AllocatorInstance.Data !=
        (FOpenGLShaderVarying *)0x0) {
      FMemory::Free(local_d8.Bindings.OutputVaryings.AllocatorInstance.Data);
    }
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)local_d8.Bindings.InputVaryings.AllocatorInstance.Data,
               local_d8.Bindings.InputVaryings.ArrayNum);
    if ((FOpenGLShaderVarying *)local_d8.Bindings.InputVaryings.AllocatorInstance.Data !=
        (FOpenGLShaderVarying *)0x0) {
      FMemory::Free(local_d8.Bindings.InputVaryings.AllocatorInstance.Data);
    }
    if (local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data);
    }
    DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
              ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
               local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data,
               local_d8.Bindings.PackedUniformBuffers.ArrayNum);
    if ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
        local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data !=
        (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data);
    }
    goto LAB_145be43ae;
  }
  if (param_3 == 0x8b31) {
    uVar28 = 0x5653;
LAB_145be38eb:
    if (local_d8.FrequencyMarker != uVar28) goto LAB_145be42f7;
  }
  else {
    if (param_3 == 0x8b30) {
      uVar28 = 0x5053;
      goto LAB_145be38eb;
    }
    if (param_3 == 0x8dd9) {
      uVar28 = 0x4753;
      goto LAB_145be38eb;
    }
    if (param_3 == 0x91b9) {
      uVar28 = 0x4353;
      goto LAB_145be38eb;
    }
  }
  if (pFVar2 != &local_d8.Bindings) {
    DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
              ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
               (pFVar2->PackedUniformBuffers).AllocatorInstance.Data,
               (this->Bindings).PackedUniformBuffers.ArrayNum);
    FVar36.Data = local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data;
    iVar21 = local_d8.Bindings.PackedUniformBuffers.ArrayNum;
    piVar7 = &(this->Bindings).PackedUniformBuffers.ArrayMax;
    iVar31 = *piVar7;
    (this->Bindings).PackedUniformBuffers.ArrayNum = local_d8.Bindings.PackedUniformBuffers.ArrayNum
    ;
    if ((local_d8.Bindings.PackedUniformBuffers.ArrayNum == 0) && (iVar31 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,local_d8.Bindings.PackedUniformBuffers.ArrayNum,iVar31,
                 (ForAnyElementType *)pFVar2,local_d8.Bindings.PackedUniformBuffers.ArrayNum,piVar7)
      ;
      ConstructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
                ((pFVar2->PackedUniformBuffers).AllocatorInstance.Data,
                 (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)FVar36.Data,
                 iVar21);
    }
  }
  FVar36.Data = local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data;
  pTVar5 = &(this->Bindings).PackedGlobalArrays;
  if (pTVar5 != &local_d8.Bindings.PackedGlobalArrays) {
    iVar21 = local_d8.Bindings.PackedGlobalArrays.ArrayNum;
    lVar34 = (longlong)local_d8.Bindings.PackedGlobalArrays.ArrayNum;
    piVar7 = &(this->Bindings).PackedGlobalArrays.ArrayMax;
    iVar31 = *piVar7;
    (this->Bindings).PackedGlobalArrays.ArrayNum = local_d8.Bindings.PackedGlobalArrays.ArrayNum;
    if ((local_d8.Bindings.PackedGlobalArrays.ArrayNum == 0) && (iVar31 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,local_d8.Bindings.PackedGlobalArrays.ArrayNum,iVar31,&pTVar5->AllocatorInstance
                 ,local_d8.Bindings.PackedGlobalArrays.ArrayNum,piVar7);
      if (iVar21 != 0) {
        memcpy((this->Bindings).PackedGlobalArrays.AllocatorInstance.Data,FVar36.Data,lVar34 << 2);
      }
    }
  }
  if (pTVar3 != &local_d8.Bindings.InputVaryings) {
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)(pTVar3->AllocatorInstance).Data,
               (this->Bindings).InputVaryings.ArrayNum);
    FVar36.Data = local_d8.Bindings.InputVaryings.AllocatorInstance.Data;
    iVar21 = local_d8.Bindings.InputVaryings.ArrayNum;
    piVar7 = &(this->Bindings).InputVaryings.ArrayMax;
    iVar31 = *piVar7;
    (this->Bindings).InputVaryings.ArrayNum = local_d8.Bindings.InputVaryings.ArrayNum;
    if ((local_d8.Bindings.InputVaryings.ArrayNum == 0) && (iVar31 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_d8.Bindings.InputVaryings.ArrayNum,iVar31,&pTVar3->AllocatorInstance,
                 local_d8.Bindings.InputVaryings.ArrayNum,piVar7);
      ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int>
                ((pTVar3->AllocatorInstance).Data,(FOpenGLShaderVarying *)FVar36.Data,iVar21);
    }
  }
  if (pTVar4 != &local_d8.Bindings.OutputVaryings) {
    DestructItems<FOpenGLShaderVarying,int>
              ((FOpenGLShaderVarying *)(pTVar4->AllocatorInstance).Data,
               (this->Bindings).OutputVaryings.ArrayNum);
    FVar36.Data = local_d8.Bindings.OutputVaryings.AllocatorInstance.Data;
    iVar21 = local_d8.Bindings.OutputVaryings.ArrayNum;
    piVar7 = &(this->Bindings).OutputVaryings.ArrayMax;
    iVar31 = *piVar7;
    (this->Bindings).OutputVaryings.ArrayNum = local_d8.Bindings.OutputVaryings.ArrayNum;
    if ((local_d8.Bindings.OutputVaryings.ArrayNum == 0) && (iVar31 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_d8.Bindings.OutputVaryings.ArrayNum,iVar31,&pTVar4->AllocatorInstance,
                 local_d8.Bindings.OutputVaryings.ArrayNum,piVar7);
      ConstructItems<FOpenGLShaderVarying,FOpenGLShaderVarying,int>
                ((pTVar4->AllocatorInstance).Data,(FOpenGLShaderVarying *)FVar36.Data,iVar21);
    }
  }
  FVar36.Data = local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data;
  (this->Bindings).InOutMask.Bitmask = local_d8.Bindings.InOutMask.Bitmask;
  (this->Bindings).NumSamplers = local_d8.Bindings.NumSamplers;
  pTVar6 = &this->UniformBuffersCopyInfo;
  (this->Bindings).NumUniformBuffers = local_d8.Bindings.NumUniformBuffers;
  (this->Bindings).NumUAVs = local_d8.Bindings.NumUAVs;
  (this->Bindings).bFlattenUB = local_d8.Bindings.bFlattenUB;
  *(undefined8 *)(this->Bindings).VaryingHash.Hash = local_d8.Bindings.VaryingHash.Hash._0_8_;
  *(undefined8 *)((this->Bindings).VaryingHash.Hash + 8) = local_d8.Bindings.VaryingHash.Hash._8_8_;
  *(undefined4 *)((this->Bindings).VaryingHash.Hash + 0x10) =
       local_d8.Bindings.VaryingHash.Hash._16_4_;
  if (pTVar6 != &local_d8.UniformBuffersCopyInfo) {
    iVar31 = local_d8.UniformBuffersCopyInfo.ArrayNum;
    lVar34 = (longlong)local_d8.UniformBuffersCopyInfo.ArrayNum;
    piVar7 = &(this->UniformBuffersCopyInfo).ArrayMax;
    (this->UniformBuffersCopyInfo).ArrayNum = local_d8.UniformBuffersCopyInfo.ArrayNum;
    if ((local_d8.UniformBuffersCopyInfo.ArrayNum == 0) && (*piVar7 == 0)) {
      *piVar7 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (10,2,local_d8.UniformBuffersCopyInfo.ArrayNum,*piVar7,&pTVar6->AllocatorInstance,
                 local_d8.UniformBuffersCopyInfo.ArrayNum,piVar7);
      if (iVar31 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,FVar36.Data,lVar34 * 10);
      }
    }
  }
  pFVar29 = (FRHIShaderData *)&local_1f8->_padding_;
  if (local_1f8 == (FRHIShader *)0x0) {
    pFVar29 = (FRHIShaderData *)0x0;
  }
  UE::RHICore::InitStaticUniformBufferSlots(pFVar29);
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  puVar35 = local_1d8->DataPtr + (int)local_118;
  sVar24 = strlen((char *)puVar35);
  iVar31 = (int)sVar24 + 1;
  if (((puVar35 == (uchar *)0x0) && (iVar31 != 0)) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9c1,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FOpenGLShader *)(*pcVar10)();
    return pFVar23;
  }
  iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar31,&local_248.AllocatorInstance,&local_248.ArrayNum,
                      &local_248.ArrayMax);
  if (iVar31 != 0) {
    memcpy(local_248.AllocatorInstance.Data + iVar21,puVar35,(longlong)iVar31);
  }
  uVar22 = (*FCrc::MemCrc32Func)(local_248.AllocatorInstance.Data,local_248.ArrayNum,0);
  pFVar1->TypeEnum = param_3;
  (this->ShaderCodeKey).CodeSize = local_248.ArrayNum;
  (this->ShaderCodeKey).CodeCRC = uVar22;
  if (((param_3 == 0x8b30) && (GRHIGlobals.SupportsShaderFramebufferFetch != false)) &&
     (pcVar25 = strstr((char *)local_248.AllocatorInstance.Data,"_Globals_gl_LastFragColor"),
     pcVar25 != (char *)0x0)) {
    this->bUsesProgrammableBlending = true;
  }
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  this_00 = GetOpenGLCompiledShaderCache();
  this_01 = TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
            ::FindOrAddImpl<FOpenGLCompiledShaderKey_const_&>
                      ((TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
                        *)this_00,
                       pFVar1->TypeEnum ^ (this->ShaderCodeKey).CodeSize ^
                       (this->ShaderCodeKey).CodeCRC,pFVar1);
  this->Resource = this_01->Resource;
  if ((this_01->Resource == 0) && ((this_01->GlslCode).ArrayNum == 0)) {
    if (::bInitialized == false) {
      Capabilities._4_12_ = SUB1612(ZEXT816(0),4);
      Capabilities.TargetPlatform = OGLSTP_Desktop;
      if (FOpenGL3::bAndroidGLESCompatibilityMode != false) {
        Capabilities._7_9_ = SUB169(ZEXT816(0),7);
        auVar13[1] = Capabilities.bRequiresARMShaderFramebufferFetchDepthStencilUndef;
        auVar13._2_4_ = Capabilities.MaxVaryingVectors;
        auVar13[6] = Capabilities.bRequiresDisabledEarlyFragmentTests;
        auVar13[7] = Capabilities.bRequiresReadOnlyBuffersWorkaround;
        auVar13[8] = Capabilities.bRequiresPreciseQualifierWorkaround;
        auVar13[9] = Capabilities._15_1_;
        auVar13[0] = GRHIGlobals.SupportsShaderFramebufferFetch;
        auVar13._10_6_ = 0;
        Capabilities = (FOpenGLShaderDeviceCapabilities)(auVar13 << 0x30);
        Capabilities.TargetPlatform = OGLSTP_Android;
        Capabilities = (FOpenGLShaderDeviceCapabilities)ZEXT716((uint7)Capabilities._0_7_);
        if ((FOpenGLBase::MaxVaryingVectors == -1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("MaxVaryingVectors != -1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                                ,0x8f,L""), bVar19)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FOpenGLShader *)(*pcVar10)();
          return pFVar23;
        }
        FVar16 = Capabilities;
        Capabilities.MaxVaryingVectors = FOpenGLBase::MaxVaryingVectors;
        FVar17 = Capabilities;
        Capabilities._15_1_ = FVar16._15_1_;
        Capabilities._0_14_ = FVar17._0_14_;
        Capabilities.bRequiresPreciseQualifierWorkaround = false;
      }
      Capabilities.MaxRHIShaderPlatform = GMaxRHIShaderPlatform;
      ::bInitialized = true;
    }
    GLSLToDeviceCompatibleGLSL(&local_248,&local_d8.ShaderName,param_3,&Capabilities,&local_218);
    FOpenGLCompiledShaderValue::CompressShader(this_01,&local_218);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      if (StatPtr_STAT_GLCheckShaderCodeCRC ==
          (FThreadSafeStaticStat<_public:___cdecl_FOpenGLShader::FOpenGLShader(TArrayView<unsigned_char_const_,int>,FSHAHash_const_&,unsigned_int,FShaderResourceTable_&,FRHIShader_*)_::_35_::FStat_STAT_GLCheckShaderCodeCRC>
           )0x0) {
        pFVar26 = ::FName::FName(&local_f8,"STAT_GLCheckShaderCodeCRC");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GLCheckShaderCodeCRC,*pFVar26,
                   L"STAT_GLCheckShaderCodeCRC","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
    FVar27 = StatPtr_STAT_GLCheckShaderCodeCRC;
    if (StatPtr_STAT_GLCheckShaderCodeCRC ==
        (FThreadSafeStaticStat<_public:___cdecl_FOpenGLShader::FOpenGLShader(TArrayView<unsigned_char_const_,int>,FSHAHash_const_&,unsigned_int,FShaderResourceTable_&,FRHIShader_*)_::_35_::FStat_STAT_GLCheckShaderCodeCRC>
         )0x0) {
      pFVar26 = ::FName::FName(&local_f0,"STAT_GLCheckShaderCodeCRC");
      FVar27 = (FThreadSafeStaticStat<_public:___cdecl_FOpenGLShader::FOpenGLShader(TArrayView<unsigned_char_const_,int>,FSHAHash_const_&,unsigned_int,FShaderResourceTable_&,FRHIShader_*)_::_35_::FStat_STAT_GLCheckShaderCodeCRC>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GLCheckShaderCodeCRC,*pFVar26
                            ,L"STAT_GLCheckShaderCodeCRC","STATGROUP_Quick","STATCAT_Advanced",
                            L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar32 = *(FName *)FVar27;
    bVar19 = false;
    bVar12 = false;
    local_1f0.ComparisonIndex.Value = 0;
    local_1f0.Number = 0;
    if ((FVar32.ComparisonIndex.Value.Value == 0) && (FVar32.Number == 0)) {
LAB_145be3ec5:
      bVar11 = false;
      FVar32 = local_1f0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_208[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
        bVar19 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_200.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
          local_200.Number = FVar32.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_200,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                     ,0x40d);
          bVar19 = true;
          bVar12 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145be3ec5;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar11 = true;
    }
    if (::bInitialized == false) {
      Capabilities._4_12_ = SUB1612(ZEXT816(0),4);
      Capabilities.TargetPlatform = OGLSTP_Desktop;
      if (FOpenGL3::bAndroidGLESCompatibilityMode != false) {
        Capabilities._7_9_ = SUB169(ZEXT816(0),7);
        auVar14[1] = Capabilities.bRequiresARMShaderFramebufferFetchDepthStencilUndef;
        auVar14._2_4_ = Capabilities.MaxVaryingVectors;
        auVar14[6] = Capabilities.bRequiresDisabledEarlyFragmentTests;
        auVar14[7] = Capabilities.bRequiresReadOnlyBuffersWorkaround;
        auVar14[8] = Capabilities.bRequiresPreciseQualifierWorkaround;
        auVar14[9] = Capabilities._15_1_;
        auVar14[0] = GRHIGlobals.SupportsShaderFramebufferFetch;
        auVar14._10_6_ = 0;
        Capabilities = (FOpenGLShaderDeviceCapabilities)(auVar14 << 0x30);
        Capabilities.TargetPlatform = OGLSTP_Android;
        Capabilities = (FOpenGLShaderDeviceCapabilities)ZEXT716((uint7)Capabilities._0_7_);
        if ((FOpenGLBase::MaxVaryingVectors == -1) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("MaxVaryingVectors != -1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                                ,0x8f,L""), bVar20)) {
          pcVar10 = (code *)swi(3);
          pFVar23 = (FOpenGLShader *)(*pcVar10)();
          return pFVar23;
        }
        FVar16 = Capabilities;
        Capabilities.MaxVaryingVectors = FOpenGLBase::MaxVaryingVectors;
        FVar17 = Capabilities;
        Capabilities._15_1_ = FVar16._15_1_;
        Capabilities._0_14_ = FVar17._0_14_;
        Capabilities.bRequiresPreciseQualifierWorkaround = false;
      }
      Capabilities.MaxRHIShaderPlatform = GMaxRHIShaderPlatform;
      ::bInitialized = true;
    }
    GLSLToDeviceCompatibleGLSL(&local_248,&local_d8.ShaderName,param_3,&Capabilities,&local_218);
    FOpenGLCompiledShaderValue::GetUncompressedShader(this_01,&local_1c8);
    FVar36.Data = local_1c8.AllocatorInstance.Data;
    if ((local_1c8.ArrayNum != local_218.ArrayNum) ||
       (iVar31 = memcmp(local_1c8.AllocatorInstance.Data,local_218.AllocatorInstance.Data,
                        (longlong)local_1c8.ArrayNum), iVar31 != 0)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      FVar36.Data = local_1c8.AllocatorInstance.Data;
    }
    if (FVar36.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar36.Data);
    }
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar19) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar11) && (FVar32 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_02 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_02 == (FThreadStats *)0x0) {
        this_03 = FThreadStatsPool::Get();
        this_02 = FThreadStatsPool::GetFromPool(this_03);
      }
      if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
        local_1b8.NameAndInfo.Index = FVar32.ComparisonIndex.Value;
        local_1b8.NameAndInfo.Number = FVar32.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1d0);
        local_1b8.StatData.Pad[4] = '\0';
        local_1b8.StatData.Pad[5] = '\0';
        local_1b8.StatData.Pad[6] = '\0';
        local_1b8.StatData.Pad[7] = '\0';
        local_1b8.StatData.Pad[0] = local_1d0.s.LowPart._0_1_;
        local_1b8.StatData.Pad[1] = local_1d0.s.LowPart._1_1_;
        local_1b8.StatData.Pad[2] = local_1d0.s.LowPart._2_1_;
        local_1b8.StatData.Pad[3] = local_1d0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_02,&local_1b8);
        piVar7 = &this_02->ScopeCount;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          FThreadStats::Flush(this_02,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_02,false,false);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  iVar31 = local_238.ArrayNum;
  if ((iVar31 < 4) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderCode.Num() >= 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                          ,0x415,L""), bVar19)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FOpenGLShader *)(*pcVar10)();
    return pFVar23;
  }
  if ((iVar31 < 1) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    pFVar23 = (FOpenGLShader *)(*pcVar10)();
    return pFVar23;
  }
  puVar35 = local_238.DataPtr;
  uVar37 = (ulonglong)iVar31;
  if (uVar37 < 4) {
    iVar21 = 0;
  }
  else {
    puVar30 = TArrayView<unsigned_char_const_,int>::operator[](&local_238,0);
    iVar21 = *(int *)(puVar30 + (uVar37 - 4));
    if ((iVar21 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("LocalOptionalDataSize >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                            ,0x45d,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FOpenGLShader *)(*pcVar10)();
      return pFVar23;
    }
    if ((iVar31 < iVar21) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("ShaderCode.Num() >= LocalOptionalDataSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                            ,0x45e,L""), bVar19)) {
      pcVar10 = (code *)swi(3);
      pFVar23 = (FOpenGLShader *)(*pcVar10)();
      return pFVar23;
    }
  }
  for (puVar30 = puVar35 + (uVar37 - (longlong)iVar21); pFVar29 = (FRHIShaderData *)0x0,
      puVar30 < puVar35 + (uVar37 - 4);
      puVar30 = (uchar *)((longlong)
                          &(((FRHIShaderData *)(puVar30 + 5))->ShaderResourceTable).
                           ResourceTableBits + (ulonglong)*(uint *)(puVar30 + 1))) {
    pFVar29 = (FRHIShaderData *)(puVar30 + 5);
    if (*puVar30 == 'n') break;
  }
  ::FString::FString(&local_228,(char *)pFVar29);
  pFVar18 = local_1f8;
  p<Var33 = &local_1f8->Debug;
  if (p<Var33 != (<unnamed_type_Debug> *)&local_228) {
    pFVar9 = (p<Var33->ShaderName).Data.AllocatorInstance.Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (p<Var33->ShaderName).Data.AllocatorInstance.Data = local_228.Data.AllocatorInstance.Data;
    (pFVar18->Debug).ShaderName.Data.ArrayNum = local_228.Data.ArrayNum;
    (pFVar18->Debug).ShaderName.Data.ArrayMax = local_228.Data.ArrayMax;
    local_228.Data.ArrayNum = 0;
    local_228.Data.ArrayMax = 0;
    local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  if (local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.UniformBuffersCopyInfo.AllocatorInstance.Data);
  }
  if (local_d8.ShaderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ShaderName.Data.AllocatorInstance.Data);
  }
  DestructItems<FOpenGLShaderVarying,int>
            ((FOpenGLShaderVarying *)local_d8.Bindings.OutputVaryings.AllocatorInstance.Data,
             local_d8.Bindings.OutputVaryings.ArrayNum);
  if ((FOpenGLShaderVarying *)local_d8.Bindings.OutputVaryings.AllocatorInstance.Data !=
      (FOpenGLShaderVarying *)0x0) {
    FMemory::Free(local_d8.Bindings.OutputVaryings.AllocatorInstance.Data);
  }
  DestructItems<FOpenGLShaderVarying,int>
            ((FOpenGLShaderVarying *)local_d8.Bindings.InputVaryings.AllocatorInstance.Data,
             local_d8.Bindings.InputVaryings.ArrayNum);
  if ((FOpenGLShaderVarying *)local_d8.Bindings.InputVaryings.AllocatorInstance.Data !=
      (FOpenGLShaderVarying *)0x0) {
    FMemory::Free(local_d8.Bindings.InputVaryings.AllocatorInstance.Data);
  }
  if (local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_d8.Bindings.PackedGlobalArrays.AllocatorInstance.Data);
  }
  DestructItems<TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_>,int>
            ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
             local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data,
             local_d8.Bindings.PackedUniformBuffers.ArrayNum);
  if ((TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)
      local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data !=
      (TArray<CrossCompiler::FPackedArrayInfo,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_d8.Bindings.PackedUniformBuffers.AllocatorInstance.Data);
  }
LAB_145be43ae:
  FArchive::~FArchive((FArchive *)&local_1a8);
  return this;
}

// Compile @ 145bf80d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLShader::Compile(FOpenGLShader *this,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  HGLRC pHVar8;
  TMap<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
  *this_00;
  FOpenGLCompiledShaderValue *this_01;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileTime> FVar10;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  longlong lVar11;
  FNameEntryId FVar12;
  FName FVar13;
  uint *puVar14;
  uint uVar15;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  uint local_a8;
  int local_a4;
  int local_a0 [2];
  FName local_98;
  FScriptContainerElement *local_90;
  FName local_88;
  uint *local_78;
  LARGE_INTEGER local_70;
  TArray<char,TSizedDefaultAllocator<32>_> local_68;
  FStatMessage local_58;
  FName local_48 [2];
  
  pHVar8 = wglGetCurrentContext();
  if (pHVar8 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  this_00 = GetOpenGLCompiledShaderCache();
  this_01 = TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
            ::FindOrAddImpl<FOpenGLCompiledShaderKey_const_&>
                      ((TMapBase<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLCompiledShaderKey,FOpenGLCompiledShaderValue,0>_>
                        *)this_00,
                       (this->ShaderCodeKey).CodeCRC ^ (this->ShaderCodeKey).CodeSize ^
                       (this->ShaderCodeKey).TypeEnum,&this->ShaderCodeKey);
  uVar7 = this_01->Resource;
  this->Resource = uVar7;
  if (uVar7 != 0) goto LAB_145bf8600;
  FVar10 = StatPtr_STAT_OpenGLShaderCompileTime;
  if (StatPtr_STAT_OpenGLShaderCompileTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileTime>)0x0) {
    pFVar9 = ::FName::FName(local_48,"STAT_OpenGLShaderCompileTime");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderCompileTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderCompileTime,*pFVar9,
                        L"Shader compile time","STATGROUP_OpenGLRHI","STATCAT_Advanced",
                        L"OpenGL RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar13 = *(FName *)FVar10;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar7 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar7 == 0)) {
LAB_145bf8299:
    bVar4 = false;
    FVar13 = local_88;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar12.Value;
        local_98.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x2f1);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bf8299;
    local_res18 = FVar12.Value;
    uStackX_1c = uVar7;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar4 = true;
  }
  local_res18 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    atexit(`FOpenGL3::CreateShader'::__l2::_dynamic_atexit_destructor_for__ShaderNames__);
    _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::ShaderNames.
      _8_4_ != `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
               ShaderNames._52_4_) {
    lVar11 = 0x154be54c8;
    if (`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
        ShaderNames._64_8_ != 0) {
      lVar11 = `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
               ShaderNames._64_8_;
    }
    uVar7 = *(uint *)(lVar11 + (ulonglong)
                               (`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'
                                ::__l2::ShaderNames._72_4_ - 1 & local_res18) * 4);
    while (uVar7 != 0xffffffff) {
      puVar14 = (uint *)((longlong)(int)uVar7 * 0x20 +
                        `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::
                        __l2::ShaderNames._0_8_);
      if (*puVar14 == local_res18) {
        if (puVar14 != (uint *)0x0) goto LAB_145bf8369;
        break;
      }
      uVar7 = puVar14[6];
    }
  }
  local_78 = &local_res18;
  TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&`public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2::
                 ShaderNames,(uint)&local_a4,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18,(bool *)&local_78);
  puVar14 = (uint *)((longlong)local_a4 * 0x20 +
                    `public:_static_unsigned_int___cdecl_FOpenGL3::CreateShader(unsigned_int)'::__l2
                    ::ShaderNames._0_8_);
LAB_145bf8369:
  if (puVar14[4] == 0) {
    do {
      local_a8 = (*glCreateShader)(local_res18);
      if (((*(uint **)(puVar14 + 2) <= &local_a8) &&
          (&local_a8 < *(uint **)(puVar14 + 2) + (int)puVar14[5])) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = puVar14[4];
      if (uVar7 == puVar14[5]) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(puVar14 + 2),(int *)(puVar14 + 5));
      }
      puVar14[4] = uVar7 + 1;
      *(uint *)(*(longlong *)(puVar14 + 2) + (longlong)(int)uVar7 * 4) = local_a8;
    } while ((int)puVar14[4] < 0x400);
  }
  else if (((int)puVar14[4] < 1) &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
          bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = *(uint *)(*(longlong *)(puVar14 + 2) + -4 + (longlong)(int)puVar14[4] * 4);
  uVar15 = puVar14[4] - 1;
  puVar14[4] = uVar15;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,(ForAnyElementType *)(puVar14 + 2),uVar15,(int *)(puVar14 + 5));
  this->Resource = uVar7;
  FOpenGLCompiledShaderValue::GetUncompressedShader(this_01,&local_68);
  local_a0[0] = local_68.ArrayNum + -1;
  local_90 = local_68.AllocatorInstance.Data;
  (*glShaderSource)(this->Resource,1,(char **)&local_90,local_a0);
  (*glCompileShader)(this->Resource);
  bVar6 = VerifyShaderCompilation(this->Resource,(char *)local_90);
  if ((!bVar6) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8399118768520823547>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x2fb,"bSuccessfullyCompiled"), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01->Resource = this->Resource;
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar13 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_58);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
LAB_145bf8600:
                    /* WARNING: Could not recover jumptable at 0x000145bf8618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GCompiledShaderCacheCS);
  return;
}

