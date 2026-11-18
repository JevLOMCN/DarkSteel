// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 12

// GetShader<FNiagaraShader> @ 148dee8e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
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

TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> * __thiscall
FNiagaraShaderMap::GetShader<FNiagaraShader>
          (FNiagaraShaderMap *this,
          TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  FShaderMapContent *this_00;
  code *pcVar1;
  bool bVar2;
  FNiagaraShaderType *pFVar3;
  FNiagaraShader *pFVar4;
  FName this_01;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  this_00 = (FShaderMapContent *)this->_padding_;
  pFVar3 = FNiagaraShader::GetStaticType();
  pFVar4 = (FNiagaraShader *)
           FShaderMapContent::GetShader(this_00,(FHashedName *)&pFVar3->field_0x28,param_1);
  if (pFVar4 == (FNiagaraShader *)0x0) {
    FShaderMapContent::GetShaderPlatform(this_00);
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_01,&local_28);
    FNiagaraShader::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x91f,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ShaderContent = pFVar4;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// FNiagaraShaderMap @ 148df0d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShaderMap * __thiscall FNiagaraShaderMap::FNiagaraShaderMap(FNiagaraShaderMap *this)

{
  undefined1 *puVar1;
  
  FShaderMapBase::FShaderMapBase((FShaderMapBase *)this);
  this->bRegistered = 0;
  this->bCompilationFinalized = 1;
  this->bIsPersistent = 1;
  this->bCompiledSuccessfully = 1;
  this->_padding_ =
       (longlong)
       &_vftable__for__TShaderMap<FNiagaraShaderMapContent,FNiagaraShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->CompilingId = 1;
  this->NumRefs = 0;
  this->bDeletedThroughDeferredCleanup = false;
  return this;
}

// ~FNiagaraShaderMap @ 148df13d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderMap::~FNiagaraShaderMap(FNiagaraShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ =
       (longlong)
       &_vftable__for__TShaderMap<FNiagaraShaderMapContent,FNiagaraShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                       ,0x433,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                       ,0x434,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  return;
}

// AddRef @ 148df39a0

void __thiscall FNiagaraShaderMap::AddRef(FNiagaraShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  if (this->bDeletedThroughDeferredCleanup != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                       ,0x3f9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->NumRefs = this->NumRefs + 1;
                    /* WARNING: Could not recover jumptable at 0x000148df39f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  return;
}

// FindId @ 148dfd7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShaderMap * __cdecl
FNiagaraShaderMap::FindId(FNiagaraShaderMapId *param_1,EShaderPlatform param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraShaderMap *pFVar4;
  longlong lVar5;
  
  iVar3 = TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraShaderMapId>
                    ((TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
                      *)(&GIdToNiagaraShaderMap + (ulonglong)param_2 * 0x50),
                     *(uint *)(param_1->BaseCompileHash).Hash,param_1);
  if ((iVar3 != -1) &&
     (lVar5 = (longlong)iVar3 * 0x90 +
              *(longlong *)
               &((TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
                  *)(&GIdToNiagaraShaderMap + (ulonglong)param_2 * 0x50))->Elements, lVar5 != 0)) {
    pFVar4 = *(FNiagaraShaderMap **)(lVar5 + 0x80);
    if ((pFVar4 != (FNiagaraShaderMap *)0x0) && (pFVar4->bDeletedThroughDeferredCleanup != false)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == nullptr || !Result->bDeletedThroughDeferredCleanup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                         ,0x20b,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNiagaraShaderMap *)(*pcVar1)();
        return pFVar4;
      }
    }
    return pFVar4;
  }
  return (FNiagaraShaderMap *)0x0;
}

// GetShaderList @ 148e002a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderMap::GetShaderList
          (FNiagaraShaderMap *this,
          TMap<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FShaderId,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  undefined1 auStack_48 [32];
  FSHAHash local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.Hash[0] = '\0';
  local_28.Hash[1] = '\0';
  local_28.Hash[2] = '\0';
  local_28.Hash[3] = '\0';
  local_28.Hash[4] = '\0';
  local_28.Hash[5] = '\0';
  local_28.Hash[6] = '\0';
  local_28.Hash[7] = '\0';
  local_28.Hash[8] = '\0';
  local_28.Hash[9] = '\0';
  local_28.Hash[10] = '\0';
  local_28.Hash[0xb] = '\0';
  local_28.Hash[0xc] = '\0';
  local_28.Hash[0xd] = '\0';
  local_28.Hash[0xe] = '\0';
  local_28.Hash[0xf] = '\0';
  local_28.Hash[0x10] = '\0';
  local_28.Hash[0x11] = '\0';
  local_28.Hash[0x12] = '\0';
  local_28.Hash[0x13] = '\0';
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,&local_28,param_1);
  return;
}

// GetShaderList @ 148e002f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderMap::GetShaderList
          (FNiagaraShaderMap *this,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1);
  return;
}

// GetShaderPipelineList @ 148e00310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderMap::GetShaderPipelineList
          (FNiagaraShaderMap *this,TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderMapContent::GetShaderPipelineList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1,EAll);
  return;
}

// Register @ 148e0bd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraShaderMap::Register(FNiagaraShaderMap *this,EShaderPlatform param_1)

{
  FName FVar1;
  EShaderPlatform EVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FNiagaraShaderMap *local_res18 [2];
  FStatMessage local_28;
  
  if (GCreateNiagaraShadersOnLoad != 0) {
    FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  }
  if (this->bRegistered == 0) {
    FVar4 = StatPtr_STAT_Shaders_NumShaderMaps;
    if (StatPtr_STAT_Shaders_NumShaderMaps ==
        (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_Shaders_NumShaderMaps");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar3,
                         L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                         L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.StatData.Pad[0] = '\x01';
      local_28.StatData.Pad[1] = '\0';
      local_28.StatData.Pad[2] = '\0';
      local_28.StatData.Pad[3] = '\0';
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar1 & 0xffffafffffffffff | 0xa00000000000);
      local_res8 = FVar1;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  EVar2 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  local_28.StatData.Pad = (uchar  [8])(this->_padding_ + 0x60);
  local_28.NameAndInfo = (FStatNameAndInfo)local_res18;
  local_res18[0] = this;
  TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FNiagaraShaderMapId_const_&,FNiagaraShaderMap_*_&&>_>
            ((TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
              *)(&GIdToNiagaraShaderMap + (ulonglong)EVar2 * 0x50),
             (TPairInitializer<FNiagaraShaderMapId_const_&,FNiagaraShaderMap_*_&&> *)&local_res8,
             (bool *)&local_28);
  this->bRegistered = 1;
                    /* WARNING: Could not recover jumptable at 0x000148e0bf71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  return;
}

// Release @ 148e0c170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderMap::Release(FNiagaraShaderMap *this)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  EShaderPlatform EVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar8;
  FDeferredCleanupInterface *pFVar9;
  FName local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  if ((this->NumRefs < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                         ,0x402,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  piVar1 = &this->NumRefs;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (this->bRegistered != 0) {
      FVar7 = StatPtr_STAT_Shaders_NumShaderMaps;
      if (StatPtr_STAT_Shaders_NumShaderMaps ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
        pFVar6 = ::FName::FName(&local_res20,"STAT_Shaders_NumShaderMaps");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar6,
                           L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                           L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar7;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_38.StatData.Pad[0] = '\x01';
        local_38.StatData.Pad[1] = '\0';
        local_38.StatData.Pad[2] = '\0';
        local_38.StatData.Pad[3] = '\0';
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_res18 = FVar2;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res18,-1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
      lVar8 = (ulonglong)EVar5 * 0x50;
      if (*(int *)(&DAT_154c76648 + lVar8) != *(int *)(&DAT_154c76674 + lVar8)) {
        TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FNiagaraShaderMapId>
                  ((TSet<TTuple<FNiagaraShaderMapId,FNiagaraShaderMap_*>,TDefaultMapHashableKeyFuncs<FNiagaraShaderMapId,FNiagaraShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&GIdToNiagaraShaderMap + lVar8),*(uint *)(this->_padding_ + 0x98),
                   (FNiagaraShaderMapId *)(this->_padding_ + 0x60));
      }
      this->bRegistered = 0;
    }
    if ((this->bDeletedThroughDeferredCleanup != false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShader.cpp"
                           ,0x40d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this->bDeletedThroughDeferredCleanup = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GIdToNiagaraShaderMapCS);
  if (this->bDeletedThroughDeferredCleanup != false) {
    pFVar9 = (FDeferredCleanupInterface *)&this->_padding_;
    if (this == (FNiagaraShaderMap *)0x0) {
      pFVar9 = (FDeferredCleanupInterface *)0x0;
    }
    BeginCleanup(pFVar9);
  }
  return;
}

// Serialize @ 148e0cda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraShaderMap::Serialize(FNiagaraShaderMap *this,FShaderSerializeContext *param_1)

{
  uint *puVar1;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar2;
  FShaderMapResource *pFVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  TCsvPersistentCustomStat<float> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  EShaderPlatform EVar10;
  EShaderPermutationFlags EVar11;
  uint uVar12;
  atomic<float> aVar13;
  atomic<float> aVar14;
  FPointerTableBase *pFVar15;
  FTypeLayoutDesc *pFVar16;
  TRefCountPtr<FShaderMapResource> TVar17;
  FShaderMapResource_InlineCode *pFVar18;
  FShaderMapResource_InlineCode *pFVar19;
  FShaderMapResource_InlineCode *pFVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar22;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar23;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar24;
  FCsvProfiler *pFVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  longlong *plVar28;
  float fVar29;
  undefined1 auStackY_208 [32];
  uint auStack_1a8 [2];
  FMemoryImageWriter FStack_1a0;
  atomic<float> aStack_198;
  FLLMScope FStack_194;
  FPlatformTypeLayoutParameters FStack_190;
  FName FStack_188;
  FString FStack_180;
  TMemoryImageObject<void> TStack_170;
  FMemoryImage FStack_158;
  FMemoryImageResult FStack_118;
  FShaderMapResource *pFStack_c8;
  FMemScope FStack_c0;
  FTypeLayoutDesc *pFStack_b8;
  void *pvStack_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  FName FStack_a0;
  FName FStack_98;
  FName FStack_90;
  FName FStack_88;
  FName FStack_80;
  FString FStack_78;
  FString FStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if ((param_1->Ar == (FArchive *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                         ,0x38,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  this_00 = (FArchiveState *)param_1->Ar;
  FLLMScope::FLLMScope(&FStack_194,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&FStack_c0,Shaders,true);
  if (this_00->ArIsSaving != '\0') {
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Content.Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                           ,0x122,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    FShaderMapContent::Validate((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this);
    pFVar15 = (FPointerTableBase *)(**(code **)(this->_padding_ + 0x28))(this);
    FStack_158.HostLayoutParameters.MaxFieldAlignment = 0xffffffff;
    FStack_158.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_158.Sections.ArrayNum = 0;
    FStack_158.Sections.ArrayMax = 0;
    FStack_158.PointerTable = (FPointerTableBase *)0x0;
    FStack_158.PrevPointerTable = (FPointerTableBase *)0x0;
    FStack_158.HostLayoutParameters.Flags = 0;
    FStack_158.TargetLayoutParameters.MaxFieldAlignment = 0xffffffff;
    FStack_158.TargetLayoutParameters.Flags = 0;
    FStack_158.CurrentStruct = (UStruct *)0x0;
    FPlatformTypeLayoutParameters::InitializeForCurrent(&FStack_158.HostLayoutParameters);
    FStack_158.PrevPointerTable = (FPointerTableBase *)this->_padding_;
    FStack_158.PointerTable = pFVar15;
    FPlatformTypeLayoutParameters::InitializeForArchive
              (&FStack_158.TargetLayoutParameters,(FArchive *)this_00);
    FMemoryImageWriter::FMemoryImageWriter(&FStack_1a0,&FStack_158);
    FMemoryImageWriter::WriteRootObject
              (&FStack_1a0,(void *)this->_padding_,(FTypeLayoutDesc *)this->_padding_);
    FStack_118.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_118.Bytes.ArrayNum = 0;
    FStack_118.Bytes.ArrayMax = 0;
    FStack_118.PointerTable = (FPointerTableBase *)0x0;
    FStack_118.TargetLayoutParameters.MaxFieldAlignment = 0xffffffff;
    FStack_118.TargetLayoutParameters.Flags = 0;
    FStack_118.VTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_118.VTables.ArrayNum = 0;
    FStack_118.VTables.ArrayMax = 0;
    FStack_118.ScriptNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_118.ScriptNames.ArrayNum = 0;
    FStack_118.ScriptNames.ArrayMax = 0;
    FStack_118.MemoryImageNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_118.MemoryImageNames.ArrayNum = 0;
    FStack_118.MemoryImageNames.ArrayMax = 0;
    FMemoryImage::Flatten(&FStack_158,&FStack_118,true);
    FMemoryImageResult::SaveToArchive(&FStack_118,(FArchive *)this_00);
    if (FStack_118.MemoryImageNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.MemoryImageNames.AllocatorInstance.Data);
    }
    if (FStack_118.ScriptNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.ScriptNames.AllocatorInstance.Data);
    }
    if (FStack_118.VTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.VTables.AllocatorInstance.Data);
    }
    if (FStack_118.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_118.Bytes.AllocatorInstance.Data);
    }
    FMemoryImageWriter::~FMemoryImageWriter(&FStack_1a0);
    DestructItems<TRefCountPtr<FMemoryImageSection>,int>
              ((TRefCountPtr<FMemoryImageSection> *)FStack_158.Sections.AllocatorInstance.Data,
               FStack_158.Sections.ArrayNum);
    if (FStack_158.Sections.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_158.Sections.AllocatorInstance.Data);
    }
    if (pFVar15 != (FPointerTableBase *)0x0) {
      (**(code **)*pFVar15)(pFVar15,1);
    }
    pFVar2 = this_00->ActiveFPLB;
    if (pFVar2->EndFastPathLoadBuffer < pFVar2->StartFastPathLoadBuffer + 4) {
      aStack_198 = (atomic<float>)0x0;
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&aStack_198,4);
      if (1 < (uint)aStack_198) {
        FArchiveState::SetError(this_00);
      }
      FShaderMapResourceCode::Serialize((FShaderMapResourceCode *)this->_padding_,param_1);
    }
    else {
      pFVar2->StartFastPathLoadBuffer = pFVar2->StartFastPathLoadBuffer + 4;
      FShaderMapResourceCode::Serialize((FShaderMapResourceCode *)this->_padding_,param_1);
    }
    goto LAB_145eb405a;
  }
  if ((this->_padding_ != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PointerTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x151,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  pFVar15 = (FPointerTableBase *)(**(code **)(this->_padding_ + 0x28))(this);
  pFVar20 = (FShaderMapResource_InlineCode *)0x0;
  this->_padding_ = (longlong)pFVar15;
  FStack_190.MaxFieldAlignment = 0xffffffff;
  FStack_190.Flags = 0;
  pFVar16 = (FTypeLayoutDesc *)(**(code **)(this->_padding_ + 0x20))(this);
  FMemoryImageResult::LoadFromArchive(&TStack_170,(FArchive *)this_00,pFVar16,pFVar15,&FStack_190);
  EVar11 = GetShaderPermutationFlags(&FStack_190);
  *(EShaderPermutationFlags *)((longlong)&this->_padding_ + 4) = EVar11;
  bVar8 = false;
  pFVar2 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar2->StartFastPathLoadBuffer + 4);
  if (pFVar2->EndFastPathLoadBuffer < puVar1) {
    auStack_1a8[0] = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,auStack_1a8,4);
    if (1 < auStack_1a8[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar12 = auStack_1a8[0];
    if (this_00->ArIsLoading != 0) goto LAB_145eb3aac;
  }
  else {
    uVar12 = *(uint *)pFVar2->StartFastPathLoadBuffer;
    pFVar2->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_145eb3aac:
    bVar8 = uVar12 != 0;
  }
  FStack_188.ComparisonIndex.Value = 0;
  FStack_188.Number = 0;
  (**(code **)(this_00->_padding_ + 0x178))(this_00,&FStack_188);
  EVar10 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FStack_188);
  auStack_1a8[0] = CONCAT22(auStack_1a8[0]._2_2_,EVar10);
  if (bVar8) {
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,&stack0xffffffffffffffa8,0x14);
    TVar17 = FShaderCodeLibrary::LoadResource
                       ((FSHAHash *)&pFStack_c8,(FArchive *)&stack0xffffffffffffffa8);
    plVar28 = &this->_padding_;
    if ((FShaderMapResource *)plVar28 != TVar17.Reference) {
      pFVar3 = (FShaderMapResource *)*plVar28;
      *plVar28 = (TVar17.Reference)->_padding_;
      (TVar17.Reference)->_padding_ = 0;
      if (pFVar3 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar3);
      }
    }
    if (pFStack_c8 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFStack_c8);
    }
    if (*plVar28 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar26 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar26,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) &&
         ((EVar10 == GMaxRHIShaderPlatform && (1 < (byte)LogShaders._0_1_)))) {
        ::FName::ToString(&param_1->SerializingAsset,&FStack_68);
        ::LexToString(&FStack_78,(EShaderPlatform)auStack_1a8[0],true);
        FStack_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FStack_180.Data.ArrayNum = 0;
        FStack_180.Data.ArrayMax = 0;
        BytesToHex((uchar *)&stack0xffffffffffffffa8,0x14,&FStack_180);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
        if (FStack_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_180.Data.AllocatorInstance.Data);
        }
        if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  else {
    pFVar18 = ::operator_new(0x48);
    pFVar19 = pFVar20;
    if (pFVar18 != (FShaderMapResource_InlineCode *)0x0) {
      *(undefined4 *)&pFVar18->_padding_ = 0;
      pFVar18->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
      pFVar18->_padding_ = 0;
      pFVar18->_padding_ = 0;
      *(undefined4 *)&pFVar18->_padding_ = 0;
      (((FWindowsRecursiveMutex *)&pFVar18->_padding_)->CriticalSection).Opaque1[0] = (void *)0x0;
      pFVar18->_padding_ = 0;
      pFVar18->_padding_ = 0;
      pFVar18->_padding_ = 0;
      pFVar19 = pFVar18;
    }
    pFVar18 = (FShaderMapResource_InlineCode *)this->_padding_;
    if (pFVar18 != pFVar19) {
      this->_padding_ = (longlong)pFVar19;
      if (pFVar19 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(int *)&pFVar19->_padding_ = (int)pFVar19->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar18 != (FShaderMapResource_InlineCode *)0x0) {
        plVar28 = &pFVar18->_padding_;
        LOCK();
        lVar5 = *plVar28;
        *(int *)plVar28 = (int)*plVar28 + -1;
        UNLOCK();
        if (((int)lVar5 == 1) && (plVar28 != (longlong *)0x0)) {
          (**(code **)pFVar18->_padding_)(pFVar18,1);
        }
      }
    }
    FShaderMapResourceCode::Serialize((FShaderMapResourceCode *)this->_padding_,param_1);
    pFVar19 = ::operator_new(0x80);
    if (pFVar19 != (FShaderMapResource_InlineCode *)0x0) {
      pFVar20 = FShaderMapResource_InlineCode::FShaderMapResource_InlineCode
                          (pFVar19,EVar10,(FShaderMapResourceCode *)this->_padding_);
    }
    pFVar19 = (FShaderMapResource_InlineCode *)this->_padding_;
    if (pFVar19 != pFVar20) {
      this->_padding_ = (longlong)pFVar20;
      if (pFVar20 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar20->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar20->_padding_ + 1);
        UNLOCK();
      }
      if (pFVar19 != (FShaderMapResource_InlineCode *)0x0) {
        FShaderMapResource::Release((FShaderMapResource *)pFVar19);
      }
    }
  }
  plVar28 = &this->_padding_;
  if (TStack_170.Object != (void *)0x0) {
    if (*plVar28 != 0) {
      pFStack_b8 = TStack_170.TypeDesc;
      pvStack_b0 = TStack_170.Object;
      uStack_a8 = TStack_170.FrozenSize;
      this->_padding_ = (longlong)TStack_170.TypeDesc;
      this->_padding_ = (longlong)TStack_170.Object;
      this->_padding_ = CONCAT44(uStack_a4,TStack_170.FrozenSize);
      if ((int)this->_padding_ == 0) {
        TMemoryImageObject<FShaderMapContent>::Freeze
                  ((TMemoryImageObject<FShaderMapContent> *)&this->_padding_,
                   (FPointerTableBase *)this->_padding_);
      }
      (**(code **)(this->_padding_ + 0x30))(this);
      uVar12 = FShaderMapContent::GetNumShaders((FShaderMapContent *)this->_padding_);
      uVar27 = (ulonglong)(uint)this->_padding_;
      *(uint *)&this->_padding_ = uVar12;
      if (uVar27 != 0) {
        FVar22 = StatPtr_STAT_Shaders_ShaderMemory;
        if (StatPtr_STAT_Shaders_ShaderMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
          pFVar21 = ::FName::FName(&FStack_a0,"STAT_Shaders_ShaderMemory");
          FVar22 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,
                              *pFVar21,L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar4 = *(FName *)FVar22;
        FStack_1a0.Section._0_4_ = FVar4.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar4.Number;
        FThreadStats::AddMessage<__int64>(FVar4,Add,uVar27,false);
      }
      uVar27 = (ulonglong)(uint)this->_padding_;
      if (uVar27 != 0) {
        FVar23 = StatPtr_STAT_Shaders_NumShadersLoaded;
        if (StatPtr_STAT_Shaders_NumShadersLoaded ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
          pFVar21 = ::FName::FName(&FStack_98,"STAT_Shaders_NumShadersLoaded");
          FVar23 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                              *pFVar21,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar4 = *(FName *)FVar23;
        FStack_1a0.Section._0_4_ = FVar4.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar4.Number;
        FThreadStats::AddMessage<__int64>(FVar4,Add,uVar27,false);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pFVar25 = FCsvProfiler::Get();
        uVar12 = _GCsvCategory_Shaders.Index;
        pFVar21 = ::FName::FName(&FStack_90,L"ShaderMemoryMB");
        CsvStatShaderMemoryMB =
             FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar25,*pFVar21,uVar12,false);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pFVar25 = FCsvProfiler::Get();
        uVar12 = _GCsvCategory_Shaders.Index;
        pFVar21 = ::FName::FName(&FStack_88,L"NumShadersLoaded");
        CsvStatNumShadersLoaded =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar25,*pFVar21,uVar12,false);
        _Init_thread_footer(&::_TSS1);
      }
      pTVar7 = CsvStatShaderMemoryMB;
      aStack_198 = CsvStatShaderMemoryMB->Value;
      fVar29 = (float)(uint)this->_padding_ * __real_35800000;
      aVar13 = aStack_198;
      do {
        LOCK();
        aVar14 = pTVar7->Value;
        bVar8 = aVar13 == aVar14;
        if (bVar8) {
          pTVar7->Value = (atomic<float>)((float)aVar13 + fVar29);
          aVar14 = aVar13;
        }
        UNLOCK();
        aVar13 = aVar14;
      } while (!bVar8);
      LOCK();
      CsvStatNumShadersLoaded->Value =
           (atomic<int>)((int)CsvStatNumShadersLoaded->Value + (int)this->_padding_);
      UNLOCK();
      BeginInitResource((FRenderResource *)*plVar28,(FRenderCommandPipe *)0x0);
      uVar12 = (**(code **)(*(longlong *)*plVar28 + 0x70))();
      if (uVar12 != 0) {
        FVar24 = StatPtr_STAT_Shaders_ShaderResourceMemory;
        if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
          pFVar21 = ::FName::FName(&FStack_80,"STAT_Shaders_ShaderResourceMemory");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Shaders_ShaderResourceMemory,*pFVar21,
                              L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar4 = *(FName *)FVar24;
        FStack_1a0.Section._0_4_ = FVar4.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar4.Number;
        FThreadStats::AddMessage<__int64>(FVar4,Add,(ulonglong)uVar12,false);
      }
      goto LAB_145eb405a;
    }
    InternalDeleteObjectFromLayout
              (TStack_170.Object,TStack_170.TypeDesc,(FPointerTableBase *)this->_padding_,
               TStack_170.FrozenSize != 0);
    if (TStack_170.FrozenSize != 0) {
      FMemory::Free(TStack_170.Object);
    }
    TStack_170.Object = (void *)0x0;
    TStack_170.FrozenSize = 0;
  }
  pFVar3 = (FShaderMapResource *)*plVar28;
  if (pFVar3 != (FShaderMapResource *)0x0) {
    *plVar28 = 0;
    FShaderMapResource::Release(pFVar3);
  }
LAB_145eb405a:
  lVar5 = this->_padding_;
  FMemScope::~FMemScope(&FStack_c0);
  FLLMScope::~FLLMScope(&FStack_194);
  return lVar5 != 0;
}

// Serialize @ 148e0cdb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraShaderMap::Serialize(FNiagaraShaderMap *this,FArchive *param_1,bool param_2,bool param_3)

{
  bool bVar1;
  FShaderSerializeContext local_28;
  
  local_28._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
  local_28.SerializingAsset.ComparisonIndex.Value = 0;
  local_28.SerializingAsset.Number = 0;
  local_28.Ar = param_1;
  local_28.bLoadingCooked = param_3;
  bVar1 = FShaderMapBase::Serialize((FShaderMapBase *)this,&local_28);
  return bVar1;
}

