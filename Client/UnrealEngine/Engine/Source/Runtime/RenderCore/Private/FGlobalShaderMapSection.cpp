// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FGlobalShaderMapSection @ 145d0aa10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderMapSection * __thiscall
FGlobalShaderMapSection::FGlobalShaderMapSection
          (FGlobalShaderMapSection *this,EShaderPlatform param_1,FHashedName *param_2)

{
  uint uStack_34;
  TMemoryImageObject<FShaderMapContent> local_28;
  
  FShaderMapBase::FShaderMapBase((FShaderMapBase *)this);
  *(undefined ***)this = &___7FGlobalShaderMapSection__6B_;
  local_28.Object = ::operator_new(0x68);
  if (local_28.Object == (FShaderMapContent *)0x0) {
    local_28.Object = (FShaderMapContent *)0x0;
    local_28.TypeDesc = (FTypeLayoutDesc *)0x0;
  }
  else {
    FShaderMapContent::FShaderMapContent(local_28.Object,param_1);
    FHashedName::FHashedName((FHashedName *)(local_28.Object + 1),param_2);
    local_28.TypeDesc = FGlobalShaderMapContent::StaticGetTypeLayout();
  }
  local_28._16_8_ = (ulonglong)uStack_34 << 0x20;
  FShaderMapBase::AssignContent((FShaderMapBase *)this,&local_28);
  return this;
}

// CreateFromArchive @ 145d1b470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FGlobalShaderMapSection * __cdecl FGlobalShaderMapSection::CreateFromArchive(FArchive *param_1)

{
  bool bVar1;
  FShaderMapBase *this;
  FShaderSerializeContext local_28;
  
  this = ::operator_new(0x40);
  if (this == (FShaderMapBase *)0x0) {
    this = (FShaderMapBase *)0x0;
  }
  else {
    FShaderMapBase::FShaderMapBase(this);
    this->_padding_ = (longlong)&___7FGlobalShaderMapSection__6B_;
  }
  local_28._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
  local_28.bLoadingCooked = false;
  local_28.SerializingAsset.ComparisonIndex.Value = 0;
  local_28.SerializingAsset.Number = 0;
  local_28.Ar = param_1;
  bVar1 = FShaderMapBase::Serialize(this,&local_28);
  if (bVar1) {
    return (FGlobalShaderMapSection *)this;
  }
  if (this != (FShaderMapBase *)0x0) {
    (**(code **)this->_padding_)(this,1);
  }
  return (FGlobalShaderMapSection *)0x0;
}

// GetShader @ 145d2bb20

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

TShaderRefBase<FShader,FShaderMapPointerTable> * __thiscall
FGlobalShaderMapSection::GetShader
          (FGlobalShaderMapSection *this,
          TShaderRefBase<FShader,FShaderMapPointerTable> *__return_storage_ptr__,
          FShaderType *param_1,int param_2)

{
  FShader *pFVar1;
  
  pFVar1 = FShaderMapContent::GetShader
                     (*(FShaderMapContent **)&this->field_0x28,&param_1->HashedName,param_2);
  __return_storage_ptr__->ShaderContent = pFVar1;
  if (pFVar1 == (FShader *)0x0) {
    this = (FGlobalShaderMapSection *)(FShaderMapBase *)0x0;
  }
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// GetShaderList @ 145d2bb70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShaderMapSection::GetShaderList
          (FGlobalShaderMapSection *this,
          TMap<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,TShaderRefBase<FShader,FShaderMapPointerTable>,0>_>
          *param_1)

{
  FShaderMapContent::GetShaderList
            (*(FShaderMapContent **)&this->field_0x28,(FShaderMapBase *)this,param_1);
  return;
}

// GetShaderPipeline @ 145d2bde0

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

FShaderPipelineRef * __thiscall
FGlobalShaderMapSection::GetShaderPipeline
          (FGlobalShaderMapSection *this,FShaderPipelineRef *__return_storage_ptr__,
          FShaderPipelineType *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FShaderPipelineRef *pFVar5;
  FShaderPipeline *pFVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *pTVar9;
  FProjectShaderPipelineToKey local_res8;
  
  lVar1 = *(longlong *)&this->field_0x28;
  pTVar9 = (TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_> *)(lVar1 + 0x48);
  uVar4 = Algo::
          BinarySearchBy<TArray<TMemoryImagePtr<FShaderPipeline>,TMemoryImageAllocator<0>_>,FHashedName,FShaderMapContent::FProjectShaderPipelineToKey,TLess<void>_>
                    (pTVar9,&param_1->HashedName,local_res8,(TLess<void>)local_res8);
  pFVar6 = (FShaderPipeline *)0x0;
  if (uVar4 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar4 < *(int *)(lVar1 + 0x50)) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FShaderPipelineRef *)(*pcVar2)();
      return pFVar5;
    }
    FVar8 = pTVar9->AllocatorInstance;
    if (((ulonglong)FVar8 & 1) != 0) {
      FVar8 = (ForAnyElementType)
              ((longlong)&(pTVar9->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
    }
    pFVar6 = *(FShaderPipeline **)((longlong)FVar8 + (longlong)(int)uVar4 * 8);
    if (((ulonglong)pFVar6 & 1) != 0) {
      pFVar6 = (FShaderPipeline *)
               (((longlong)pFVar6 >> 0x18) + (longlong)FVar8 + (longlong)(int)uVar4 * 8);
    }
  }
  __return_storage_ptr__->ShaderPipeline = pFVar6;
  if (pFVar6 == (FShaderPipeline *)0x0) {
    this = (FGlobalShaderMapSection *)(FShaderPipeline *)0x0;
  }
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)this;
  return __return_storage_ptr__;
}

// GetShaderPipelineList @ 145d2bec0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGlobalShaderMapSection::GetShaderPipelineList
          (FGlobalShaderMapSection *this,
          TArray<FShaderPipelineRef,TSizedDefaultAllocator<32>_> *param_1)

{
  FShaderMapContent::GetShaderPipelineList
            (*(FShaderMapContent **)&this->field_0x28,(FShaderMapBase *)this,param_1,EAll);
  return;
}

// Serialize @ 145d4a0c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGlobalShaderMapSection::Serialize(FGlobalShaderMapSection *this,FShaderSerializeContext *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FArchiveState *this_00;
  FFastPathLoadBuffer *pFVar3;
  FShaderMapResource *pFVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  TCsvPersistentCustomStat<float> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  EShaderPlatform EVar11;
  EShaderPermutationFlags EVar12;
  uint uVar13;
  atomic<float> aVar14;
  atomic<float> aVar15;
  uint uVar16;
  FPointerTableBase *pFVar17;
  FTypeLayoutDesc *pFVar18;
  TRefCountPtr<FShaderMapResource> TVar19;
  FShaderMapResource_InlineCode *pFVar20;
  FShaderMapResource_InlineCode *pFVar21;
  FShaderMapResource_InlineCode *pFVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory> FVar24;
  FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded> FVar25;
  FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory> FVar26;
  FCsvProfiler *pFVar27;
  wchar_t *pwVar28;
  undefined1 *puVar29;
  float fVar30;
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
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                         ,0x38,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  this_00 = (FArchiveState *)param_1->Ar;
  FLLMScope::FLLMScope(&FStack_194,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&FStack_c0,Shaders,true);
  if (this_00->ArIsSaving != '\0') {
    if ((*(longlong *)&this->field_0x28 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Content.Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                           ,0x122,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      uVar10 = (*pcVar7)();
      return (bool)uVar10;
    }
    FShaderMapContent::Validate(*(FShaderMapContent **)&this->field_0x28,(FShaderMapBase *)this);
    pFVar17 = (FPointerTableBase *)(**(code **)(*(longlong *)this + 0x28))(this);
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
    FStack_158.PrevPointerTable = *(FPointerTableBase **)&this->field_0x18;
    FStack_158.PointerTable = pFVar17;
    FPlatformTypeLayoutParameters::InitializeForArchive
              (&FStack_158.TargetLayoutParameters,(FArchive *)this_00);
    FMemoryImageWriter::FMemoryImageWriter(&FStack_1a0,&FStack_158);
    FMemoryImageWriter::WriteRootObject
              (&FStack_1a0,*(void **)&this->field_0x28,*(FTypeLayoutDesc **)&this->field_0x20);
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
    if (pFVar17 != (FPointerTableBase *)0x0) {
      (**(code **)*pFVar17)(pFVar17,1);
    }
    pFVar3 = this_00->ActiveFPLB;
    if (pFVar3->EndFastPathLoadBuffer < pFVar3->StartFastPathLoadBuffer + 4) {
      aStack_198 = (atomic<float>)0x0;
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&aStack_198,4);
      if (1 < (uint)aStack_198) {
        FArchiveState::SetError(this_00);
      }
      FShaderMapResourceCode::Serialize(*(FShaderMapResourceCode **)&this->field_0x10,param_1);
    }
    else {
      pFVar3->StartFastPathLoadBuffer = pFVar3->StartFastPathLoadBuffer + 4;
      FShaderMapResourceCode::Serialize(*(FShaderMapResourceCode **)&this->field_0x10,param_1);
    }
    goto LAB_145eb405a;
  }
  if ((*(longlong *)&this->field_0x18 != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PointerTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderMap.cpp"
                         ,0x151,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    uVar10 = (*pcVar7)();
    return (bool)uVar10;
  }
  pFVar17 = (FPointerTableBase *)(**(code **)(*(longlong *)this + 0x28))(this);
  pFVar22 = (FShaderMapResource_InlineCode *)0x0;
  *(FPointerTableBase **)&this->field_0x18 = pFVar17;
  FStack_190.MaxFieldAlignment = 0xffffffff;
  FStack_190.Flags = 0;
  pFVar18 = (FTypeLayoutDesc *)(**(code **)(*(longlong *)this + 0x20))(this);
  FMemoryImageResult::LoadFromArchive(&TStack_170,(FArchive *)this_00,pFVar18,pFVar17,&FStack_190);
  EVar12 = GetShaderPermutationFlags(&FStack_190);
  *(EShaderPermutationFlags *)&this->field_0x3c = EVar12;
  bVar9 = false;
  pFVar3 = this_00->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar3->StartFastPathLoadBuffer + 4);
  if (pFVar3->EndFastPathLoadBuffer < puVar1) {
    auStack_1a8[0] = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,auStack_1a8,4);
    if (1 < auStack_1a8[0]) {
      FArchiveState::SetError(this_00);
    }
    uVar16 = auStack_1a8[0];
    if (this_00->ArIsLoading != 0) goto LAB_145eb3aac;
  }
  else {
    uVar16 = *(uint *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_145eb3aac:
    bVar9 = uVar16 != 0;
  }
  FStack_188.ComparisonIndex.Value = 0;
  FStack_188.Number = 0;
  (**(code **)(this_00->_padding_ + 0x178))(this_00,&FStack_188);
  EVar11 = FGenericDataDrivenShaderPlatformInfo::GetShaderPlatformFromName(FStack_188);
  auStack_1a8[0] = CONCAT22(auStack_1a8[0]._2_2_,EVar11);
  if (bVar9) {
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    (**(code **)(this_00->_padding_ + 0x188))(this_00,&stack0xffffffffffffffa8,0x14);
    TVar19 = FShaderCodeLibrary::LoadResource
                       ((FSHAHash *)&pFStack_c8,(FArchive *)&stack0xffffffffffffffa8);
    puVar29 = &this->field_0x8;
    if ((FShaderMapResource *)puVar29 != TVar19.Reference) {
      pFVar4 = *(FShaderMapResource **)puVar29;
      *(longlong *)puVar29 = (TVar19.Reference)->_padding_;
      (TVar19.Reference)->_padding_ = 0;
      if (pFVar4 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar4);
      }
    }
    if (pFStack_c8 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFStack_c8);
    }
    if (*(longlong *)puVar29 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar28 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar28,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) &&
         ((EVar11 == GMaxRHIShaderPlatform && (1 < (byte)LogShaders._0_1_)))) {
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
    pFVar20 = ::operator_new(0x48);
    pFVar21 = pFVar22;
    if (pFVar20 != (FShaderMapResource_InlineCode *)0x0) {
      *(undefined4 *)&pFVar20->_padding_ = 0;
      pFVar20->_padding_ = (longlong)&___7FShaderMapResourceCode__6B_;
      pFVar20->_padding_ = 0;
      pFVar20->_padding_ = 0;
      *(undefined4 *)&pFVar20->_padding_ = 0;
      (((FWindowsRecursiveMutex *)&pFVar20->_padding_)->CriticalSection).Opaque1[0] = (void *)0x0;
      pFVar20->_padding_ = 0;
      pFVar20->_padding_ = 0;
      pFVar20->_padding_ = 0;
      pFVar21 = pFVar20;
    }
    pFVar20 = *(FShaderMapResource_InlineCode **)&this->field_0x10;
    if (pFVar20 != pFVar21) {
      *(FShaderMapResource_InlineCode **)&this->field_0x10 = pFVar21;
      if (pFVar21 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(int *)&pFVar21->_padding_ = (int)pFVar21->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar20 != (FShaderMapResource_InlineCode *)0x0) {
        plVar2 = &pFVar20->_padding_;
        LOCK();
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar20->_padding_)(pFVar20,1);
        }
      }
    }
    FShaderMapResourceCode::Serialize(*(FShaderMapResourceCode **)&this->field_0x10,param_1);
    pFVar21 = ::operator_new(0x80);
    if (pFVar21 != (FShaderMapResource_InlineCode *)0x0) {
      pFVar22 = FShaderMapResource_InlineCode::FShaderMapResource_InlineCode
                          (pFVar21,EVar11,*(FShaderMapResourceCode **)&this->field_0x10);
    }
    pFVar21 = *(FShaderMapResource_InlineCode **)&this->field_0x8;
    if (pFVar21 != pFVar22) {
      *(FShaderMapResource_InlineCode **)&this->field_0x8 = pFVar22;
      if (pFVar22 != (FShaderMapResource_InlineCode *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar22->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar22->_padding_ + 1);
        UNLOCK();
      }
      if (pFVar21 != (FShaderMapResource_InlineCode *)0x0) {
        FShaderMapResource::Release((FShaderMapResource *)pFVar21);
      }
    }
  }
  puVar29 = &this->field_0x8;
  if (TStack_170.Object != (void *)0x0) {
    if (*(longlong *)puVar29 != 0) {
      pFStack_b8 = TStack_170.TypeDesc;
      pvStack_b0 = TStack_170.Object;
      uStack_a8 = TStack_170.FrozenSize;
      *(FTypeLayoutDesc **)&this->field_0x20 = TStack_170.TypeDesc;
      *(void **)&this->field_0x28 = TStack_170.Object;
      *(ulonglong *)&this->field_0x30 = CONCAT44(uStack_a4,TStack_170.FrozenSize);
      if (*(int *)&this->field_0x30 == 0) {
        TMemoryImageObject<FShaderMapContent>::Freeze
                  ((TMemoryImageObject<FShaderMapContent> *)&this->field_0x20,
                   *(FPointerTableBase **)&this->field_0x18);
      }
      (**(code **)(*(longlong *)this + 0x30))(this);
      uVar13 = FShaderMapContent::GetNumShaders(*(FShaderMapContent **)&this->field_0x28);
      uVar16 = *(uint *)&this->field_0x30;
      *(uint *)&this->field_0x38 = uVar13;
      if ((ulonglong)uVar16 != 0) {
        FVar24 = StatPtr_STAT_Shaders_ShaderMemory;
        if (StatPtr_STAT_Shaders_ShaderMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)0x0) {
          pFVar23 = ::FName::FName(&FStack_a0,"STAT_Shaders_ShaderMemory");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_ShaderMemory,
                              *pFVar23,L"Shader Memory","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar24;
        FStack_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,(ulonglong)uVar16,false);
      }
      uVar16 = *(uint *)&this->field_0x38;
      if ((ulonglong)uVar16 != 0) {
        FVar25 = StatPtr_STAT_Shaders_NumShadersLoaded;
        if (StatPtr_STAT_Shaders_NumShadersLoaded ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)0x0) {
          pFVar23 = ::FName::FName(&FStack_98,"STAT_Shaders_NumShadersLoaded");
          FVar25 = (FThreadSafeStaticStat<FStat_STAT_Shaders_NumShadersLoaded>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Shaders_NumShadersLoaded,
                              *pFVar23,L"Num Shaders Loaded","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Invalid);
        }
        FVar5 = *(FName *)FVar25;
        FStack_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,(ulonglong)uVar16,false);
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pFVar27 = FCsvProfiler::Get();
        uVar16 = _GCsvCategory_Shaders.Index;
        pFVar23 = ::FName::FName(&FStack_90,L"ShaderMemoryMB");
        CsvStatShaderMemoryMB =
             FCsvProfiler::GetOrCreatePersistentCustomStatFloat(pFVar27,*pFVar23,uVar16,false);
        _Init_thread_footer(&::_TSS0);
      }
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pFVar27 = FCsvProfiler::Get();
        uVar16 = _GCsvCategory_Shaders.Index;
        pFVar23 = ::FName::FName(&FStack_88,L"NumShadersLoaded");
        CsvStatNumShadersLoaded =
             FCsvProfiler::GetOrCreatePersistentCustomStatInt(pFVar27,*pFVar23,uVar16,false);
        _Init_thread_footer(&::_TSS1);
      }
      pTVar8 = CsvStatShaderMemoryMB;
      aStack_198 = CsvStatShaderMemoryMB->Value;
      fVar30 = (float)*(uint *)&this->field_0x30 * __real_35800000;
      aVar14 = aStack_198;
      do {
        LOCK();
        aVar15 = pTVar8->Value;
        bVar9 = aVar14 == aVar15;
        if (bVar9) {
          pTVar8->Value = (atomic<float>)((float)aVar14 + fVar30);
          aVar15 = aVar14;
        }
        UNLOCK();
        aVar14 = aVar15;
      } while (!bVar9);
      LOCK();
      CsvStatNumShadersLoaded->Value =
           (atomic<int>)((int)CsvStatNumShadersLoaded->Value + *(int *)&this->field_0x38);
      UNLOCK();
      BeginInitResource(*(FRenderResource **)puVar29,(FRenderCommandPipe *)0x0);
      uVar16 = (**(code **)(**(longlong **)puVar29 + 0x70))();
      if (uVar16 != 0) {
        FVar26 = StatPtr_STAT_Shaders_ShaderResourceMemory;
        if (StatPtr_STAT_Shaders_ShaderResourceMemory ==
            (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)0x0) {
          pFVar23 = ::FName::FName(&FStack_80,"STAT_Shaders_ShaderResourceMemory");
          FVar26 = (FThreadSafeStaticStat<FStat_STAT_Shaders_ShaderResourceMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Shaders_ShaderResourceMemory,*pFVar23,
                              L"Shader Resource Mem","STATGROUP_Shaders","STATCAT_Advanced",
                              L"Shader Compression",true,false,ST_int64,false,false,MCR_Physical);
        }
        FVar5 = *(FName *)FVar26;
        FStack_1a0.Section._0_4_ = FVar5.ComparisonIndex.Value;
        FStack_1a0.Section._4_4_ = FVar5.Number;
        FThreadStats::AddMessage<__int64>(FVar5,Add,(ulonglong)uVar16,false);
      }
      goto LAB_145eb405a;
    }
    InternalDeleteObjectFromLayout
              (TStack_170.Object,TStack_170.TypeDesc,*(FPointerTableBase **)&this->field_0x18,
               TStack_170.FrozenSize != 0);
    if (TStack_170.FrozenSize != 0) {
      FMemory::Free(TStack_170.Object);
    }
    TStack_170.Object = (void *)0x0;
    TStack_170.FrozenSize = 0;
  }
  pFVar4 = *(FShaderMapResource **)puVar29;
  if (pFVar4 != (FShaderMapResource *)0x0) {
    *(undefined8 *)puVar29 = 0;
    FShaderMapResource::Release(pFVar4);
  }
LAB_145eb405a:
  lVar6 = *(longlong *)&this->field_0x28;
  FMemScope::~FMemScope(&FStack_c0);
  FLLMScope::~FLLMScope(&FStack_194);
  return lVar6 != 0;
}

