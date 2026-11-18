// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 13

// GetShader<FComputeKernelShader> @ 1494c1900

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

TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> * __thiscall
FComputeKernelShaderMap::GetShader<FComputeKernelShader>
          (FComputeKernelShaderMap *this,
          TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  FShaderMapContent *this_00;
  code *pcVar1;
  bool bVar2;
  FComputeKernelShaderType *pFVar3;
  FShader *pFVar4;
  FName this_01;
  TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *pTVar5;
  undefined1 local_res8 [8];
  FString local_28;
  
  this_00 = (FShaderMapContent *)this->_padding_;
  pFVar3 = FComputeKernelShader::GetStaticType();
  pFVar4 = FShaderMapContent::GetShader(this_00,(FHashedName *)&pFVar3->field_0x28,param_1);
  if (pFVar4 == (FShader *)0x0) {
    FShaderMapContent::GetShaderPlatform(this_00);
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)this_01,&local_28);
    FComputeKernelShader::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x91f,L"Failed to find shader type %s in Platform %s");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TShaderRefBase<FComputeKernelShader,FShaderMapPointerTable> *)(*pcVar1)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->ShaderContent = (FComputeKernelShader *)pFVar4;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// FComputeKernelShaderMap @ 1494c4350

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FComputeKernelShaderMap * __thiscall
FComputeKernelShaderMap::FComputeKernelShaderMap(FComputeKernelShaderMap *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  FComputeKernelShaderMap *pFVar4;
  longlong lVar5;
  FComputeKernelShaderMap *local_18 [2];
  
  FShaderMapBase::FShaderMapBase((FShaderMapBase *)this);
  this->bRegistered = 0;
  this->bCompilationFinalized = 1;
  this->bIsPersistent = 1;
  this->bCompiledSuccessfully = 1;
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable>__
  ;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->CompilingId = 1;
  this->NumRefs = 0;
  this->bDeletedThroughDeferredCleanup = false;
  local_18[0] = this;
  if (((AllComputeKernelShaderMaps.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 <
       AllComputeKernelShaderMaps.AllocatorInstance.Data +
       (longlong)AllComputeKernelShaderMaps.ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FComputeKernelShaderMap *)(*pcVar2)();
    return pFVar4;
  }
  if (AllComputeKernelShaderMaps.ArrayNum == AllComputeKernelShaderMaps.ArrayMax) {
    AllComputeKernelShaderMaps.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&AllComputeKernelShaderMaps.AllocatorInstance,
                    &AllComputeKernelShaderMaps.ArrayMax);
  }
  lVar5 = (longlong)AllComputeKernelShaderMaps.ArrayNum;
  AllComputeKernelShaderMaps.ArrayNum = AllComputeKernelShaderMaps.ArrayNum + 1;
  *(FComputeKernelShaderMap **)(AllComputeKernelShaderMaps.AllocatorInstance.Data + lVar5 * 8) =
       local_18[0];
  return this;
}

// ~FComputeKernelShaderMap @ 1494c5a20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FComputeKernelShaderMap::~FComputeKernelShaderMap(FComputeKernelShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  FComputeKernelShaderMap *local_res8 [4];
  
  this->_padding_ =
       (longlong)&_vftable__for__TShaderMap<FComputeKernelShaderMapContent,FShaderMapPointerTable>__
  ;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  if (this->bDeletedThroughDeferredCleanup == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bDeletedThroughDeferredCleanup",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                       ,0x296,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->bRegistered != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                       ,0x297,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = this;
  TArray<FComputeKernelShaderMap_*,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&AllComputeKernelShaderMaps,local_res8,Default);
  this->_padding_ = (longlong)&___7FDeferredCleanupInterface__6B_;
  FShaderMapBase::~FShaderMapBase((FShaderMapBase *)this);
  return;
}

// AddRef @ 1494c9330

void __thiscall FComputeKernelShaderMap::AddRef(FComputeKernelShaderMap *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bDeletedThroughDeferredCleanup == false) {
    LOCK();
    this->NumRefs = this->NumRefs + 1;
    UNLOCK();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!bDeletedThroughDeferredCleanup",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                     ,0x26f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  LOCK();
  this->NumRefs = this->NumRefs + 1;
  UNLOCK();
  return;
}

// FindId @ 1494cdad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FComputeKernelShaderMap * __cdecl
FComputeKernelShaderMap::FindId(FComputeKernelShaderMapId *param_1,EShaderPlatform param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FComputeKernelShaderMap *pFVar4;
  longlong lVar5;
  
  iVar3 = TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FComputeKernelShaderMapId>
                    ((TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
                      *)(&GIdToComputeKernelShaderMap + (ulonglong)param_2 * 0x50),
                     (int)(param_1->ShaderCodeHash >> 0x20) * 0x17 + (int)param_1->ShaderCodeHash,
                     param_1);
  if ((iVar3 != -1) &&
     (lVar5 = (longlong)iVar3 * 0x38 +
              *(longlong *)
               &((TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
                  *)(&GIdToComputeKernelShaderMap + (ulonglong)param_2 * 0x50))->Elements,
     lVar5 != 0)) {
    pFVar4 = *(FComputeKernelShaderMap **)(lVar5 + 0x28);
    if ((pFVar4 != (FComputeKernelShaderMap *)0x0) &&
       (pFVar4->bDeletedThroughDeferredCleanup != false)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result == nullptr || !Result->bDeletedThroughDeferredCleanup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                         ,0xe3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FComputeKernelShaderMap *)(*pcVar1)();
        return pFVar4;
      }
    }
    return pFVar4;
  }
  return (FComputeKernelShaderMap *)0x0;
}

// GetShaderList @ 1494d10e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FComputeKernelShaderMap::GetShaderList
          (FComputeKernelShaderMap *this,
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

// GetShaderList @ 1494d1130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FComputeKernelShaderMap::GetShaderList
          (FComputeKernelShaderMap *this,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  FShaderMapContent::GetShaderList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1);
  return;
}

// GetShaderPipelineList @ 1494d1770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FComputeKernelShaderMap::GetShaderPipelineList
          (FComputeKernelShaderMap *this,
          TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderMapContent::GetShaderPipelineList
            ((FShaderMapContent *)this->_padding_,(FShaderMapBase *)this,param_1,EAll);
  return;
}

// IsComplete @ 1494d4440

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
FComputeKernelShaderMap::IsComplete
          (FComputeKernelShaderMap *this,FComputeKernelResource *param_1,bool param_2)

{
  FComputeKernelPermutationVector *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  EShaderPlatform EVar6;
  int iVar7;
  TLinkedList<FShaderType_*> **ppTVar8;
  FShader *pFVar9;
  TLinkedList<FShaderType_*> *pTVar10;
  FShaderType *this_00;
  int iVar11;
  FShaderType *pFVar12;
  FShaderPermutationParameters local_38;
  
  if ((this->NumRefs < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                         ,0x210,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  ppTVar8 = FShaderType::GetTypeList();
  pTVar10 = *ppTVar8;
  if (pTVar10 != (TLinkedList<FShaderType_*> *)0x0) {
    do {
      this_00 = (FShaderType *)0x0;
      if (pTVar10->Element->ShaderTypeForDynamicCast == ComputeKernel) {
        this_00 = pTVar10->Element;
      }
      if (this_00 != (FShaderType *)0x0) {
        EVar6 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
        local_38.PermutationId = 0;
        local_38.Flags = HasEditorOnlyData;
        local_38.Platform = EVar6;
        bVar3 = FShaderType::ShouldCompilePermutation(this_00,&local_38);
        if ((bVar3) &&
           (cVar5 = (**(code **)(param_1->_padding_ + 8))(param_1,EVar6,this_00),
           pFVar12 = (FShaderType *)0x0, cVar5 != '\0')) {
          while( true ) {
            pFVar1 = (param_1->ShaderPermutationVector).Object;
            iVar7 = 1;
            if (pFVar1 != (FComputeKernelPermutationVector *)0x0) {
              iVar7 = 1 << ((byte)pFVar1->BitCount & 0x1f);
            }
            iVar11 = (int)pFVar12;
            if (iVar7 <= iVar11) break;
            pFVar9 = FShaderMapContent::GetShader
                               ((FShaderMapContent *)this->_padding_,&this_00->HashedName,iVar11);
            if (pFVar9 == (FShader *)0x0) {
              if ((!param_2) && (2 < (byte)LogComputeFramework._0_1_)) {
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
              }
              return false;
            }
            pFVar12 = (FShaderType *)(ulonglong)(iVar11 + 1);
          }
        }
      }
      pTVar10 = (TLinkedList<FShaderType_*> *)pTVar10->_padding_;
    } while (pTVar10 != (TLinkedList<FShaderType_*> *)0x0);
  }
  return true;
}

// IsComputeKernelShaderComplete @ 1494d45b0

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
FComputeKernelShaderMap::IsComputeKernelShaderComplete
          (FComputeKernelShaderMap *this,FComputeKernelResource *param_1,
          FComputeKernelShaderType *param_2,bool param_3)

{
  FComputeKernelPermutationVector *pFVar1;
  bool bVar2;
  char cVar3;
  EShaderPlatform EVar4;
  int iVar5;
  FShader *pFVar6;
  int iVar7;
  FShaderPermutationParameters local_28;
  
  EVar4 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
  iVar7 = 0;
  local_28.PermutationId = 0;
  local_28.Flags = HasEditorOnlyData;
  local_28.Platform = EVar4;
  bVar2 = FShaderType::ShouldCompilePermutation((FShaderType *)param_2,&local_28);
  if ((bVar2) &&
     (cVar3 = (**(code **)(param_1->_padding_ + 8))(param_1,EVar4,param_2), cVar3 != '\0')) {
    while( true ) {
      pFVar1 = (param_1->ShaderPermutationVector).Object;
      iVar5 = 1;
      if (pFVar1 != (FComputeKernelPermutationVector *)0x0) {
        iVar5 = 1 << ((byte)pFVar1->BitCount & 0x1f);
      }
      if (iVar5 <= iVar7) goto LAB_1494d46a5;
      pFVar6 = FShaderMapContent::GetShader
                         ((FShaderMapContent *)this->_padding_,(FHashedName *)&param_2->field_0x28,
                          iVar7);
      if (pFVar6 == (FShader *)0x0) break;
      iVar7 = iVar7 + 1;
    }
    if ((!param_3) && (2 < (byte)LogComputeFramework._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogComputeFramework);
    }
    bVar2 = false;
  }
  else {
LAB_1494d46a5:
    bVar2 = true;
  }
  return bVar2;
}

// Register @ 1494d5010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FComputeKernelShaderMap::Register(FComputeKernelShaderMap *this,EShaderPlatform param_1)

{
  FName FVar1;
  EShaderPlatform EVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FComputeKernelShaderMap *local_res18 [2];
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
  TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FComputeKernelShaderMapId_const_&,FComputeKernelShaderMap_*_&&>_>
            ((TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
              *)(&GIdToComputeKernelShaderMap + (ulonglong)EVar2 * 0x50),
             (TPairInitializer<FComputeKernelShaderMapId_const_&,FComputeKernelShaderMap_*_&&> *)
             &local_res8,(bool *)&local_28);
  this->bRegistered = 1;
  return;
}

// Release @ 1494d5be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FComputeKernelShaderMap::Release(FComputeKernelShaderMap *this)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  EShaderPlatform EVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShaderMaps> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar10;
  FDeferredCleanupInterface *pFVar11;
  FName local_res10;
  FName local_res18 [2];
  FStatMessage local_38;
  
  if ((this->NumRefs < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumRefs > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                         ,0x275,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  piVar1 = &this->NumRefs;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
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
      FVar3 = *(FName *)FVar9;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_38.StatData.Pad[0] = '\x01';
        local_38.StatData.Pad[1] = '\0';
        local_38.StatData.Pad[2] = '\0';
        local_38.StatData.Pad[3] = '\0';
        local_38.StatData.Pad[4] = '\0';
        local_38.StatData.Pad[5] = '\0';
        local_38.StatData.Pad[6] = '\0';
        local_38.StatData.Pad[7] = '\0';
        local_res10 = FVar3;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_38);
        FStatsTrace::Add(&local_res10,-1);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
      EVar7 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this->_padding_);
      lVar10 = (ulonglong)EVar7 * 0x50;
      if (*(int *)(&DAT_154c863b8 + lVar10) != *(int *)(&DAT_154c863e4 + lVar10)) {
        uVar4 = *(undefined8 *)(this->_padding_ + 0x78);
        TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
        ::RemoveImpl<FComputeKernelShaderMapId>
                  ((TSet<TTuple<FComputeKernelShaderMapId,FComputeKernelShaderMap_*>,TDefaultMapHashableKeyFuncs<FComputeKernelShaderMapId,FComputeKernelShaderMap_*,0>,FDefaultSetAllocator>
                    *)(&GIdToComputeKernelShaderMap + lVar10),
                   (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4,
                   (FComputeKernelShaderMapId *)(this->_padding_ + 0x70));
      }
      this->bRegistered = 0;
    }
    if ((this->bDeletedThroughDeferredCleanup != false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bDeletedThroughDeferredCleanup",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ComputeFramework\\Source\\ComputeFramework\\Private\\ComputeKernelShaderMap.cpp"
                           ,0x280,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this->bDeletedThroughDeferredCleanup = true;
    pFVar11 = (FDeferredCleanupInterface *)&this->_padding_;
    if (this == (FComputeKernelShaderMap *)0x0) {
      pFVar11 = (FDeferredCleanupInterface *)0x0;
    }
    BeginCleanup(pFVar11);
  }
  return;
}

// Serialize @ 1494d6df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FComputeKernelShaderMap::Serialize(FComputeKernelShaderMap *this,FArchive *param_1)

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

