// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 13

// GetShader<FOpenColorIOPixelShader> @ 14d768070

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

TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> * __thiscall
FOpenColorIOShaderMap::GetShader<FOpenColorIOPixelShader>
          (FOpenColorIOShaderMap *this,
          TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> *__return_storage_ptr__)

{
  FShaderMapContent *this_00;
  code *pcVar1;
  bool bVar2;
  FOpenColorIOShaderType *pFVar3;
  FShader *pFVar4;
  FName this_01;
  TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = (FShaderMapContent *)this->_padding_;
  pFVar3 = FOpenColorIOPixelShader::GetStaticType();
  pFVar4 = FShaderMapContent::GetShader(this_00,(FHashedName *)&pFVar3->field_0x28,0);
  if (pFVar4 == (FShader *)0x0) {
    FShaderMapContent::GetShaderPlatform(this_00);
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_01,&local_18);
    FOpenColorIOPixelShader::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x91f,L"Failed to find shader type %s in Platform %s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FOpenColorIOPixelShader,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ShaderContent = (FOpenColorIOPixelShader *)pFVar4;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// FOpenColorIOShaderMap @ 14d768ff0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOpenColorIOShaderMap * __thiscall
FOpenColorIOShaderMap::FOpenColorIOShaderMap(FOpenColorIOShaderMap *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FOpenColorIOShaderMap *pFVar4;
  longlong lVar5;
  FOpenColorIOShaderMap *local_18 [2];
  
  FShaderMapBase::FShaderMapBase((FShaderMapBase *)this);
  this->bRegistered = 0;
  this->bCompilationFinalized = 1;
  this->bIsPersistent = 1;
  this->bCompiledSuccessfully = 1;
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->CompilingId = 1;
  this->NumRefs = 0;
  this->bDeletedThroughDeferredCleanup = false;
  local_18[0] = this;
  if (((AllOpenColorIOShaderMaps.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       AllOpenColorIOShaderMaps.AllocatorInstance.Data +
       (longlong)AllOpenColorIOShaderMaps.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FOpenColorIOShaderMap *)(*pcVar2)();
    return pFVar4;
  }
  if (AllOpenColorIOShaderMaps.ArrayNum == AllOpenColorIOShaderMaps.ArrayMax) {
    AllOpenColorIOShaderMaps.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&AllOpenColorIOShaderMaps.AllocatorInstance,
                    &AllOpenColorIOShaderMaps.ArrayMax);
  }
  lVar5 = (longlong)AllOpenColorIOShaderMaps.ArrayNum;
  AllOpenColorIOShaderMaps.ArrayNum = AllOpenColorIOShaderMaps.ArrayNum + 1;
  *(FOpenColorIOShaderMap **)(AllOpenColorIOShaderMaps.AllocatorInstance.Data + lVar5 * 8) =
       local_18[0];
  return this;
}

// ~FOpenColorIOShaderMap @ 14d769bc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FOpenColorIOShaderMap::~FOpenColorIOShaderMap(FOpenColorIOShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  FOpenColorIOShaderMap *local_res8 [4];
  
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FOpenColorIOShaderMapContent,FShaderMapPointerTable>__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0x26e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0x26f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = this;
  TArray<FOpenColorIOShaderMap_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllOpenColorIOShaderMaps,local_res8,Default);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  return;
}

// AddRef @ 14d76c550

void __thiscall FOpenColorIOShaderMap::AddRef(FOpenColorIOShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bDeletedThroughDeferredCleanup == false) {
    this->NumRefs = this->NumRefs + 1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bDeletedThroughDeferredCleanup",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                     ,0x247,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->NumRefs = this->NumRefs + 1;
  return;
}

// FindId @ 14d76fcb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOpenColorIOShaderMap * __cdecl
FOpenColorIOShaderMap::FindId(FOpenColorIOShaderMapId *param_1,EShaderPlatform param_2)

{
  code *pcVar1;
  bool bVar2;
  FOpenColorIOShaderMap *pFVar3;
  TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*> *pTVar4;
  
  if ((param_1->ShaderCodeAndConfigHash).Data.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InShaderMapId.ShaderCodeAndConfigHash.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0xee,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FOpenColorIOShaderMap *)(*pcVar1)();
      return pFVar3;
    }
  }
  pTVar4 = TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
                   *)(&GIdToOpenColorIOShaderMap + (ulonglong)param_2 * 0x50),param_1);
  if (pTVar4 != (TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*> *)0x0) {
    return *(FOpenColorIOShaderMap **)&pTVar4->field_0x30;
  }
  return (FOpenColorIOShaderMap *)0x0;
}

// GetShaderList @ 14d772110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenColorIOShaderMap::GetShaderList
          (FOpenColorIOShaderMap *this,
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

// GetShaderList @ 14d772160

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenColorIOShaderMap::GetShaderList
          (FOpenColorIOShaderMap *this,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1);
  return;
}

// GetShaderPipelineList @ 14d772460

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOpenColorIOShaderMap::GetShaderPipelineList
          (FOpenColorIOShaderMap *this,
          TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderMapContent::GetShaderPipelineList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1,EAll);
  return;
}

// IsComplete @ 14d773480

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FOpenColorIOShaderMap::IsComplete
          (FOpenColorIOShaderMap *this,FOpenColorIOTransformResource *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  EShaderPlatform EVar5;
  TLinkedList<FShaderType_*> **ppTVar6;
  FShader *pFVar7;
  TLinkedList<FShaderType_*> *pTVar8;
  FShaderType *this_00;
  FShaderPermutationParameters local_48;
  FName local_3c;
  FOpenColorIOTransformResource *local_30;
  
  if ((this->NumRefs < 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                         ,0x210,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  ppTVar6 = FShaderType::GetTypeList();
  pTVar8 = *ppTVar6;
  if (pTVar8 != (TLinkedList<FShaderType_*> *)0x0) {
    do {
      this_00 = (FShaderType *)0x0;
      if (pTVar8->Element->ShaderTypeForDynamicCast == OCIO) {
        this_00 = pTVar8->Element;
      }
      if (this_00 != (FShaderType *)0x0) {
        EVar5 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
        local_3c = this_00->TypeName;
        local_48.PermutationId = 0;
        local_48.Flags = HasEditorOnlyData;
        local_48.Platform = EVar5;
        local_30 = param_1;
        bVar2 = FShaderType::ShouldCompilePermutation(this_00,&local_48);
        if (((bVar2) &&
            (cVar4 = (**(code **)(param_1->_padding_ + 8))(param_1,EVar5), cVar4 != '\0')) &&
           (pFVar7 = FShaderMapContent::GetShader
                               ((FShaderMapContent *)this->_padding_,&this_00->HashedName,0),
           pFVar7 == (FShader *)0x0)) {
          if ((!param_2) && (2 < (byte)LogShaders._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          return false;
        }
      }
      pTVar8 = (TLinkedList<FShaderType_*> *)pTVar8->_padding_;
    } while (pTVar8 != (TLinkedList<FShaderType_*> *)0x0);
  }
  return true;
}

// IsOpenColorIOShaderComplete @ 14d773600

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

bool __thiscall
FOpenColorIOShaderMap::IsOpenColorIOShaderComplete
          (FOpenColorIOShaderMap *this,FOpenColorIOTransformResource *param_1,
          FOpenColorIOShaderType *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  EShaderPlatform EVar3;
  FShader *pFVar4;
  FShaderPermutationParameters local_28;
  undefined8 local_1c;
  FOpenColorIOTransformResource *local_10;
  
  EVar3 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  local_1c = *(undefined8 *)&param_2->field_0x20;
  local_28.PermutationId = 0;
  local_28.Flags = HasEditorOnlyData;
  local_28.Platform = EVar3;
  local_10 = param_1;
  bVar1 = FShaderType::ShouldCompilePermutation((FShaderType *)param_2,&local_28);
  if (((bVar1) && (cVar2 = (**(code **)(param_1->_padding_ + 8))(param_1,EVar3), cVar2 != '\0')) &&
     (pFVar4 = FShaderMapContent::GetShader
                         ((FShaderMapContent *)this->_padding_,(FHashedName *)&param_2->field_0x28,0
                         ), pFVar4 == (FShader *)0x0)) {
    if ((!param_3) && (2 < (byte)LogShaders._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

// Register @ 14d774860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenColorIOShaderMap::Register(FOpenColorIOShaderMap *this,EShaderPlatform param_1)

{
  FName FVar1;
  EShaderPlatform EVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FOpenColorIOShaderMap *local_res18 [2];
  FStatMessage local_28;
  
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
  EVar2 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  local_28.StatData.Pad = (uchar  [8])(this->_padding_ + 0x70);
  local_28.NameAndInfo = (FStatNameAndInfo)local_res18;
  local_res18[0] = this;
  TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&>_>
            ((TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
              *)(&GIdToOpenColorIOShaderMap + (ulonglong)EVar2 * 0x50),
             (TPairInitializer<FOpenColorIOShaderMapId_const_&,FOpenColorIOShaderMap_*_&&> *)
             &local_res8,(bool *)&local_28);
  this->bRegistered = 1;
  return;
}

// Release @ 14d774c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FOpenColorIOShaderMap::Release(FOpenColorIOShaderMap *this)

{
  int *piVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  EShaderPlatform EVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  wchar_t *pwVar10;
  FDeferredCleanupInterface *pFVar11;
  longlong lVar12;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if (this->NumRefs < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                       ,0x24d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &this->NumRefs;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (this->bRegistered != 0) {
      FVar9 = StatPtr_STAT_Shaders_NumShaderMaps;
      if (StatPtr_STAT_Shaders_NumShaderMaps ==
          (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)0x0) {
        pFVar8 = ::FName::FName(local_res18,"STAT_Shaders_NumShaderMaps");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShaderMaps,*pFVar8,
                           L"Num ShaderMaps Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                           L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar9;
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
        local_res10 = FVar2;
        local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res10,-1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
      lVar3 = this->_padding_;
      lVar12 = (ulonglong)EVar6 * 0x50;
      if (*(int *)(&DAT_154d8cc68 + lVar12) != *(int *)(&DAT_154d8cc94 + lVar12)) {
        if (*(int *)(lVar3 + 0x80) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(lVar3 + 0x78);
          if (((ulonglong)pwVar10 & 1) != 0) {
            pwVar10 = (wchar_t *)(((longlong)pwVar10 >> 0x18) + (longlong)(lVar3 + 0x78));
          }
        }
        uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(pwVar10);
        TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FOpenColorIOShaderMapId>
                  ((TSet<TTuple<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*>,TDefaultMapHashableKeyFuncs<FOpenColorIOShaderMapId,FOpenColorIOShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&GIdToOpenColorIOShaderMap + lVar12),uVar7,
                   (FOpenColorIOShaderMapId *)(lVar3 + 0x70));
      }
      this->bRegistered = 0;
    }
    if (this->bDeletedThroughDeferredCleanup != false) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bDeletedThroughDeferredCleanup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Compositing\\OpenColorIO\\Source\\OpenColorIO\\Private\\OpenColorIOShaderMap.cpp"
                         ,600,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this->bDeletedThroughDeferredCleanup = true;
    pFVar11 = (FDeferredCleanupInterface *)&this->_padding_;
    if (this == (FOpenColorIOShaderMap *)0x0) {
      pFVar11 = (FDeferredCleanupInterface *)0x0;
    }
    BeginCleanup(pFVar11);
  }
  return;
}

// Serialize @ 14d776560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FOpenColorIOShaderMap::Serialize(FOpenColorIOShaderMap *this,FArchive *param_1)

{
  bool bVar1;
  FShaderSerializeContext local_28;
  
  local_28._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
  local_28.bLoadingCooked = false;
  local_28.SerializingAsset.ComparisonIndex.Value = 0;
  local_28.SerializingAsset.Number = 0;
  local_28.Ar = param_1;
  bVar1 = FShaderMapBase::Serialize((FShaderMapBase *)this,&local_28);
  return bVar1;
}

