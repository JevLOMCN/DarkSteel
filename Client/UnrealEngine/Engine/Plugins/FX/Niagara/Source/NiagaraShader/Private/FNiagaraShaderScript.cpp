// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 24

// FNiagaraShaderScript @ 148df0fe0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraShaderScript * __thiscall
FNiagaraShaderScript::FNiagaraShaderScript(FNiagaraShaderScript *this)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraShaderMapId *pFVar3;
  Type TVar4;
  TSharedRef<FNiagaraShaderScriptParametersMetadata,1> *pTVar5;
  TSharedRef<FNiagaraShaderScriptParametersMetadata,1> local_18;
  
  this->_padding_ = (longlong)&___7FNiagaraShaderScript__6B_;
  this->BaseVMScript = (UNiagaraScriptBase *)0x0;
  (this->GameThreadShaderMap).Reference = (FNiagaraShaderMap *)0x0;
  this->RenderingThreadShaderMap = (FNiagaraShaderMap *)0x0;
  pTVar5 = MakeShared<FNiagaraShaderScriptParametersMetadata,1>(&local_18);
  (this->ScriptParametersMetadata).Object = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (this->ScriptParametersMetadata).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  (this->ScriptParametersMetadata_RT).Object = (this->ScriptParametersMetadata).Object;
  pTVar2 = (this->ScriptParametersMetadata).SharedReferenceCount.ReferenceController;
  (this->ScriptParametersMetadata_RT).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->AdditionalDefines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalDefines).ArrayNum = 0;
  (this->AdditionalDefines).ArrayMax = 0;
  (this->AdditionalVariables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalVariables).ArrayNum = 0;
  (this->AdditionalVariables).ArrayMax = 0;
  this->bUsesRapidIterationParams = true;
  (this->BaseCompileHash).DataHash.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseCompileHash).DataHash.ArrayNum = 0;
  (this->BaseCompileHash).DataHash.ArrayMax = 0;
  (this->CompilerVersionId).A = 0;
  (this->CompilerVersionId).B = 0;
  (this->CompilerVersionId).C = 0;
  (this->CompilerVersionId).D = 0;
  (this->ReferencedCompileHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedCompileHashes).ArrayNum = 0;
  TVar4 = GMaxRHIFeatureLevel;
  (this->ReferencedCompileHashes).ArrayMax = 0;
  this->bLoadedCookedShaderMapId = 0;
  this->bQueuedForRelease = 0;
  this->bLoadedFromCookedMaterial = 0;
  (this->CachedData_RenderThread).bIsComplete = 0;
  (this->CachedData_RenderThread).bViewUniformBufferUsed = 0;
  (this->CachedData_RenderThread).bExternalConstantBufferUsed = 0;
  this->FeatureLevel = TVar4;
  this->ShaderPlatform = SP_NumPlatforms;
  this->NumPermutations = 0;
  (this->CachedData_RenderThread).NumPermutations = 0;
  (this->CookedShaderMapId).CompilerVersionID.A = 0;
  (this->CookedShaderMapId).CompilerVersionID.B = 0;
  (this->CookedShaderMapId).CompilerVersionID.C = 0;
  (this->CookedShaderMapId).CompilerVersionID.D = 0;
  (this->CookedShaderMapId).FeatureLevel = GMaxRHIFeatureLevel;
  (this->CookedShaderMapId).AdditionalDefines.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).AdditionalDefines.ArrayNum = 0;
  (this->CookedShaderMapId).AdditionalDefines.ArrayMax = 0;
  (this->CookedShaderMapId).AdditionalVariables.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).AdditionalVariables.ArrayNum = 0;
  (this->CookedShaderMapId).AdditionalVariables.ArrayMax = 0;
  (this->CookedShaderMapId).BaseCompileHash.Hash[0] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[1] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[2] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[3] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[4] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[5] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[6] = '\0';
  (this->CookedShaderMapId).BaseCompileHash.Hash[7] = '\0';
  pFVar3 = &this->CookedShaderMapId;
  (pFVar3->BaseCompileHash).Hash[8] = '\0';
  (pFVar3->BaseCompileHash).Hash[9] = '\0';
  (pFVar3->BaseCompileHash).Hash[10] = '\0';
  (pFVar3->BaseCompileHash).Hash[0xb] = '\0';
  (pFVar3->BaseCompileHash).Hash[0xc] = '\0';
  (pFVar3->BaseCompileHash).Hash[0xd] = '\0';
  (pFVar3->BaseCompileHash).Hash[0xe] = '\0';
  (pFVar3->BaseCompileHash).Hash[0xf] = '\0';
  pFVar3 = &this->CookedShaderMapId;
  (pFVar3->BaseCompileHash).Hash[0x10] = '\0';
  (pFVar3->BaseCompileHash).Hash[0x11] = '\0';
  (pFVar3->BaseCompileHash).Hash[0x12] = '\0';
  (pFVar3->BaseCompileHash).Hash[0x13] = '\0';
  (this->CookedShaderMapId).ReferencedCompileHashes.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).ReferencedCompileHashes.ArrayNum = 0;
  (this->CookedShaderMapId).ReferencedCompileHashes.ArrayMax = 0;
  (this->CookedShaderMapId).LayoutParams.MaxFieldAlignment = 0xffffffff;
  (this->CookedShaderMapId).LayoutParams.Flags = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.AllocatorInstance = (ForAnyElementType)0x0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayNum = 0;
  (this->CookedShaderMapId).ShaderTypeDependencies.ArrayMax = 0;
  (this->CookedShaderMapId).bUsesRapidIterationParams = true;
  *(undefined8 *)&this->OnCompilationCompleteDelegate = 0;
  *(undefined8 *)&(this->OnCompilationCompleteDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCompilationCompleteDelegate).field_0x10 = 0;
  (this->FriendlyName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FriendlyName).Data.ArrayNum = 0;
  (this->FriendlyName).Data.ArrayMax = 0;
  return this;
}

// ~FNiagaraShaderScript @ 148df14f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderScript::~FNiagaraShaderScript(FNiagaraShaderScript *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  FNiagaraShaderMap *this_00;
  
  this->_padding_ = (longlong)&___7FNiagaraShaderScript__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnCompilationCompleteDelegate).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompilationCompleteDelegate);
  FNiagaraShaderMapId::~FNiagaraShaderMapId(&this->CookedShaderMapId);
  DestructItems<FNiagaraCompileHash,int>
            ((FNiagaraCompileHash *)(this->ReferencedCompileHashes).AllocatorInstance.Data,
             (this->ReferencedCompileHashes).ArrayNum);
  pFVar1 = (this->ReferencedCompileHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BaseCompileHash).DataHash.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AdditionalVariables).AllocatorInstance.Data,
             (this->AdditionalVariables).ArrayNum);
  pFVar1 = (this->AdditionalVariables).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->AdditionalDefines).AllocatorInstance.Data,
             (this->AdditionalDefines).ArrayNum);
  pFVar1 = (this->AdditionalDefines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScriptParametersMetadata_RT).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScriptParametersMetadata).SharedReferenceCount.ReferenceController);
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FNiagaraShaderMap *)0x0) {
    FNiagaraShaderMap::Release(this_00);
  }
  return;
}

// AddReferencedObjects @ 148df3a00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::AddReferencedObjects(FNiagaraShaderScript *this,FReferenceCollector *param_1)

{
  return;
}

// BuildScriptParametersMetadata @ 148df59e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::BuildScriptParametersMetadata
          (FNiagaraShaderScript *this,FNiagaraShaderScriptParametersMetadata *param_1)

{
  TSharedPtr<FNiagaraShaderScriptParametersMetadata,1> *pTVar1;
  FNiagaraShaderScriptParametersMetadata *pFVar2;
  FNiagaraShaderMap *this_00;
  FNiagaraShaderScriptParametersMetadata *pFVar3;
  ForAnyElementType _Src;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  TSharedRef<FNiagaraShaderScriptParametersMetadata,1> *pTVar8;
  UNiagaraDataInterfaceBase *pUVar9;
  FRenderCommandList *pFVar10;
  FCommandList *pFVar11;
  FRenderCommandTag *pFVar12;
  FShaderParametersMetadata *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  code *pcVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  code **ppcVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  INiagaraShaderModule *this_01;
  TSharedPtr<FShaderParametersMetadata,1> *pTVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_248 [32];
  undefined1 local_1d8 [4];
  uint local_1d4;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_1d0;
  FShaderParametersMetadataBuilder local_1c0;
  FNiagaraShaderScriptParametersMetadata *local_1a8;
  FSharedReferencer<1> local_1a0;
  FShaderParametersMetadata *local_198;
  FSharedReferencer<1> local_190;
  FScriptContainerElement *local_188;
  INiagaraShaderModule *local_180;
  FString local_178;
  FScriptContainerElement *local_168;
  TArray<FNiagaraDataInterfaceStructIncludeInfo,TSizedDefaultAllocator<32>_> *local_160;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_158;
  FShaderParametersMetadataBuilder *local_150;
  TSharedRef<FNiagaraShaderScriptParametersMetadata,1> local_148;
  int local_130;
  code *local_128 [2];
  undefined **local_118;
  FNiagaraShaderScript *pFStack_110;
  undefined8 local_108;
  undefined ***local_100;
  code *local_f8 [2];
  code *local_e8 [3];
  code **local_d0;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FNiagaraShaderScript *pFStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  byte local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pTVar8 = MakeShared<FNiagaraShaderScriptParametersMetadata,1>(&local_148);
  local_1a0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_1a8 = pTVar8->Object;
  if (local_1a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ScriptParametersMetadata;
  if (pTVar1 != (TSharedPtr<FNiagaraShaderScriptParametersMetadata,1> *)&local_1a8) {
    pTVar1->Object = local_1a8;
    local_1a8 = (FNiagaraShaderScriptParametersMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ScriptParametersMetadata).SharedReferenceCount,&local_1a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if ((pTVar1->Object == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  TArray<FNiagaraDataInterfaceGPUParamInfo,TSizedDefaultAllocator<32>_>::operator=
            (&pTVar1->Object->DataInterfaceParamInfo,&param_1->DataInterfaceParamInfo);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__), uVar4 = local_1d8[0],
     `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pcVar16 = FNiagaraShader::FParameters::zzAppendMemberGetPrev;
    local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.ArrayNum = 0;
    local_1d0.ArrayMax = 0;
    do {
      pcVar16 = (code *)(*pcVar16)(uVar4,&local_1d0);
    } while (pcVar16 != (code *)0x0);
    AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
              ((FMember *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
    FShaderParametersMetadata::FShaderParametersMetadata
              (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
                ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,L"FParameters",
               L"FParameters",(wchar_t *)0x0,(wchar_t *)0x0,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShader.h"
               ,0x9c,0x6c0,&local_1d0,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
    if ((FMember *)local_1d0.AllocatorInstance.Data != (FMember *)0x0) {
      FMemory::Free(local_1d0.AllocatorInstance.Data);
    }
    atexit(`FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata'::__l2::
           _dynamic_atexit_destructor_for__StaticStructMetadata__);
    _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  _Src.Data = `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata.Members.AllocatorInstance.Data;
  lVar21 = (longlong)
           `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
           ::__l2::StaticStructMetadata.Members.ArrayNum;
  local_1c0.Members.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.Members.ArrayMax = 0;
  local_1c0.NextMemberOffset = 0;
  local_1c0.Members.ArrayNum =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Members.ArrayNum;
  if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::StaticStructMetadata.Members.ArrayNum != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
                      ::__l2::StaticStructMetadata.Members.ArrayNum,0,
               (ForAnyElementType *)&local_1c0,
               `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
               ::__l2::StaticStructMetadata.Members.ArrayNum,&local_1c0.Members.ArrayMax);
    memcpy(local_1c0.Members.AllocatorInstance.Data,_Src.Data,lVar21 * 0x30);
  }
  this_01 = INiagaraShaderModule::Singleton;
  local_180 = INiagaraShaderModule::Singleton;
  local_1c0.NextMemberOffset =
       `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FNiagaraShader::FParameters::FTypeInfo::GetStructMetadata(void)'
       ::__l2::StaticStructMetadata.Size;
  if ((pTVar1->Object == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar2 = pTVar1->Object;
  local_1d4 = (pFVar2->DataInterfaceParamInfo).ArrayNum;
  uVar17 = (ulonglong)(int)local_1d4;
  pFVar23 = (pFVar2->DataInterfaceParamInfo).AllocatorInstance.Data;
  local_188 = pFVar23 + uVar17 * 0x38;
  do {
    while( true ) {
      pFVar6 = local_188;
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if ((pFVar2->DataInterfaceParamInfo).ArrayNum != (int)uVar17) {
        local_1d8[0] = 0;
        `TCheckedPointerIterator<FNiagaraDataInterfaceGPUParamInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1d8);
      }
      if (pFVar23 == pFVar6) {
        pFVar13 = FShaderParametersMetadataBuilder::Build
                            (&local_1c0,ShaderParameterStruct,L"FNiagaraShaderScript");
        if ((pTVar1->Object == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar2 = pTVar1->Object;
        pTVar22 = &pFVar2->ShaderParametersMetadata;
        local_198 = pFVar13;
        pTVar14 = ::operator_new(0x18);
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          pTVar14->SharedReferenceCount = (atomic<int>)0x1;
          pTVar14->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFShaderParametersMetadata__U__DefaultDeleter_VFShaderParametersMetadata___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
          pTVar14->WeakReferenceCount = (atomic<int>)0x1;
          pTVar14[1]._padding_ = (longlong)pFVar13;
          pTVar15 = pTVar14;
        }
        local_190.ReferenceController = pTVar15;
        if (pTVar22 != (TSharedPtr<FShaderParametersMetadata,1> *)&local_198) {
          pTVar22->Object = pFVar13;
          local_198 = (FShaderParametersMetadata *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(pFVar2->ShaderParametersMetadata).SharedReferenceCount,&local_190);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_190.ReferenceController);
        pTVar15 = (this->ScriptParametersMetadata).SharedReferenceCount.ReferenceController;
        pFVar2 = pTVar1->Object;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f8[0] = (code *)0x0;
        local_d0 = FMemory::Malloc(0x20,8);
        local_d0[1] = (code *)this;
        local_d0[2] = (code *)pFVar2;
        *local_d0 = (code *)&UE::Core::Private::Function::
                             TFunction_OwnedObject<`FNiagaraShaderScript::BuildScriptParametersMetadata'::`2'::<lambda_1>,1,1>
                             ::_vftable_;
        local_d0[3] = (code *)pTVar15;
        if (local_d0 != (code **)&DAT_fffffffffffffff8) {
          local_f8[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
        }
        pFVar10 = FRenderCommandList::GetInstanceTLS();
        if (pFVar10 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FNiagaraShaderScript::BuildScriptParametersMetadata_::__l2::TSTR_SetScriptParametersMetadata738>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_f8);
        }
        else {
          pFVar11 = FRenderCommandList::GetRenderThread(pFVar10);
          local_88[0] = local_f8[0];
          local_60 = local_d0;
          local_d0 = (code **)0x0;
          local_78[0] = local_e8[0];
          local_78[1] = local_e8[1];
          local_78[2] = local_e8[2];
          local_f8[0] = (code *)0x0;
          local_58 = 2;
          pFVar12 = (FRenderCommandTag *)
                    TRenderCommandTag<`FNiagaraShaderScript::BuildScriptParametersMetadata'::__l2::TSTR_SetScriptParametersMetadata738>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar11,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_88,pFVar12);
          uVar17 = (ulonglong)local_58;
          if ((2 < uVar17) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar7)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar17] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if (local_88[0] != (code *)0x0) {
              ppcVar19 = local_88 + 2;
              if (local_60 != (code **)0x0) {
                ppcVar19 = local_60;
              }
              (**(code **)(*ppcVar19 + 0x10))();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar17])();
          }
        }
        if (local_f8[0] != (code *)0x0) {
          ppcVar19 = local_f8 + 2;
          if (local_d0 != (code **)0x0) {
            ppcVar19 = local_d0;
          }
          (**(code **)(*ppcVar19 + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        if (local_1c0.Members.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Members.AllocatorInstance.Data);
        }
        return;
      }
      if (*(int *)(pFVar23 + 0x18) == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = *(wchar_t **)(pFVar23 + 0x10);
      }
      ::FString::FString(&local_178,pwVar20);
      pUVar9 = INiagaraShaderModule::RequestDefaultDataInterface(this_01,&local_178);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (pUVar9 == (UNiagaraDataInterfaceBase *)0x0) break;
      uVar5 = local_1c0.NextMemberOffset;
      if ((pTVar1->Object == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar3 = pTVar1->Object;
      if ((pFVar3 == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_160 = &pFVar3->StructIncludeInfos;
      local_158 = &pTVar1->Object->LooseMetadataNames;
      local_150 = &local_1c0;
      local_168 = pFVar23;
      (**(code **)(*(longlong *)pUVar9 + 0x2b0))(pUVar9);
      *(uint *)(pFVar23 + 0x20) = uVar5;
LAB_148df5e30:
      pFVar23 = pFVar23 + 0x38;
      uVar17 = (ulonglong)local_1d4;
      this_01 = local_180;
    }
    this_00 = (this->GameThreadShaderMap).Reference;
    if (this_00 == (FNiagaraShaderMap *)0x0) goto LAB_148df5e30;
    (this->GameThreadShaderMap).Reference = (FNiagaraShaderMap *)0x0;
    FNiagaraShaderMap::Release(this_00);
    if (this->bQueuedForRelease == 0) {
      local_100 = (undefined ***)0x0;
      local_118 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::`8'::<lambda_1>,1,0>
                   ::_vftable_;
      local_128[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                     ::Call;
      pFStack_110 = this;
      pFVar10 = FRenderCommandList::GetInstanceTLS();
      if (pFVar10 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraShaderScript::ReleaseShaderMap_::__l8::TSTR_ReleaseShaderMap312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_128);
      }
      else {
        pFVar11 = FRenderCommandList::GetRenderThread(pFVar10);
        local_c8._0_8_ = local_128[0];
        local_a0 = local_100;
        local_100 = (undefined ***)0x0;
        local_b8 = local_118;
        pFStack_b0 = pFStack_110;
        local_a8 = local_108;
        local_128[0] = (code *)0x0;
        local_98 = 2;
        pFVar12 = (FRenderCommandTag *)
                  TRenderCommandTag<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::TSTR_ReleaseShaderMap312>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar11,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_c8,pFVar12);
        uVar17 = (ulonglong)local_98;
        if ((2 < uVar17) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar17] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_c8._0_8_ != (code *)0x0) {
            pppuVar18 = (undefined ***)(local_c8 + 0x10);
            if (local_a0 != (undefined ***)0x0) {
              pppuVar18 = local_a0;
            }
            (*(code *)(*pppuVar18)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar17])(local_c8);
        }
      }
      if (local_128[0] != (code *)0x0) {
        pppuVar18 = &local_118;
        if (local_100 != (undefined ***)0x0) {
          pppuVar18 = local_100;
        }
        (*(code *)(*pppuVar18)[2])();
      }
    }
    if (this->BaseVMScript == (UNiagaraScriptBase *)0x0) {
      this->NumPermutations = 0;
      UpdateCachedData_PostCompile(this,false);
      uVar17 = (ulonglong)local_1d4;
      pFVar23 = pFVar23 + 0x38;
      this_01 = local_180;
    }
    else {
      (**(code **)(*(longlong *)this->BaseVMScript + 0x2c0))();
      this->NumPermutations = local_130;
      UpdateCachedData_PostCompile(this,false);
      uVar17 = (ulonglong)local_1d4;
      pFVar23 = pFVar23 + 0x38;
      this_01 = local_180;
    }
  } while( true );
}

// GetOwnerFName @ 148dff5f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FName __thiscall FNiagaraShaderScript::GetOwnerFName(FNiagaraShaderScript *this)

{
  UPackage *pUVar1;
  FName in_RDX;
  
  if ((UObjectBaseUtility *)this->BaseVMScript != (UObjectBaseUtility *)0x0) {
    pUVar1 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->BaseVMScript);
    *(longlong *)in_RDX = pUVar1->_padding_;
    return in_RDX;
  }
  *(longlong *)in_RDX = 0;
  return in_RDX;
}

// GetShader @ 148e001d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> * __thiscall
FNiagaraShaderScript::GetShader
          (FNiagaraShaderScript *this,
          TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *pTVar3;
  
  if (GIsThreadedRendering) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GIsThreadedRendering || !IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                         ,0x2ec,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  FNiagaraShaderMap::GetShader<FNiagaraShader>
            (this->RenderingThreadShaderMap,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetShaderGameThread @ 148e00250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> * __thiscall
FNiagaraShaderScript::GetShaderGameThread
          (FNiagaraShaderScript *this,
          TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *__return_storage_ptr__,
          int param_1)

{
  FNiagaraShaderMap *this_00;
  
  this_00 = (this->GameThreadShaderMap).Reference;
  if (((this_00 != (FNiagaraShaderMap *)0x0) &&
      (this_00->bCompilationFinalized == 1 && this_00->bCompiledSuccessfully == 1)) &&
     (this_00->bDeletedThroughDeferredCleanup == false)) {
    FNiagaraShaderMap::GetShader<FNiagaraShader>(this_00,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ShaderContent = (FNiagaraShader *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  return __return_storage_ptr__;
}

// GetUsesCompressedAttributes @ 148e07fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraShaderScript::GetUsesCompressedAttributes(FNiagaraShaderScript *this)

{
  int iVar1;
  wchar_t *pwVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->AdditionalDefines).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)(this->AdditionalDefines).ArrayNum * 0x10;
  while( true ) {
    if (pFVar3 == pFVar4) {
      return false;
    }
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = *(wchar_t **)pFVar3;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(pwVar2,L"CompressAttributes");
    if (iVar1 == 0) break;
    pFVar3 = pFVar3 + 0x10;
  }
  return true;
}

// Invalidate @ 148e08f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderScript::Invalidate(FNiagaraShaderScript *this)

{
  FNiagaraShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [40];
  int local_90;
  code *local_88 [2];
  undefined **local_78;
  FNiagaraShaderScript *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraShaderScript *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FNiagaraShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FNiagaraShaderMap *)0x0;
    FNiagaraShaderMap::Release(this_00);
    if (this->bQueuedForRelease == 0) {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = this;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraShaderScript::ReleaseShaderMap_::__l8::TSTR_ReleaseShaderMap312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::TSTR_ReleaseShaderMap312>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar3);
        uVar5 = (ulonglong)local_28;
        if (2 < uVar5) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar4 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar4 = local_30;
            }
            (*(code *)(*pppuVar4)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar4 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar4 = local_60;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    if (this->BaseVMScript == (UNiagaraScriptBase *)0x0) {
      this->NumPermutations = 0;
    }
    else {
      (**(code **)(*(longlong *)this->BaseVMScript + 0x2c0))();
      this->NumPermutations = local_90;
    }
    UpdateCachedData_PostCompile(this,false);
  }
  return;
}

// IsCompilationFinished @ 148e09190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraShaderScript::IsCompilationFinished(FNiagaraShaderScript *this)

{
  return true;
}

// IsPersistent @ 148e09200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FNiagaraShaderScript::IsPersistent(FNiagaraShaderScript *this)

{
  return true;
}

// IsSame @ 148e09210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraShaderScript::IsSame(FNiagaraShaderScript *this,FNiagaraShaderMapId *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  
  iVar6 = (this->ReferencedCompileHashes).ArrayNum;
  if ((((param_1->ReferencedCompileHashes).ArrayNum == iVar6) &&
      ((param_1->AdditionalDefines).ArrayNum == (this->AdditionalDefines).ArrayNum)) &&
     ((param_1->AdditionalVariables).ArrayNum == (this->AdditionalVariables).ArrayNum)) {
    uVar9 = 0;
    if (0 < iVar6) {
      do {
        uVar5 = 0;
        if ((int)uVar9 < (this->ReferencedCompileHashes).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->ReferencedCompileHashes).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar9 < (param_1->ReferencedCompileHashes).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar7 = (param_1->ReferencedCompileHashes).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)(&param_1->BaseCompileHash + 1) + ((longlong)FVar7 >> 0x18) + 4);
        }
        bVar3 = FNiagaraCompileHash::operator==
                          ((FNiagaraCompileHash *)(pFVar1 + (longlong)(int)uVar9 * 0x10),
                           (FSHAHash *)((longlong)FVar7 + (longlong)(int)uVar9 * 0x14));
        if (!bVar3) {
          return false;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (this->ReferencedCompileHashes).ArrayNum);
    }
    uVar9 = 0;
    if (0 < (this->AdditionalDefines).ArrayNum) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (param_1->AdditionalDefines).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar7 = (param_1->AdditionalDefines).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)(param_1->BaseCompileHash).Hash + ((longlong)FVar7 >> 0x18) + -0x20);
        }
        if (*(int *)(lVar11 + 8 + (longlong)FVar7) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(lVar11 + (longlong)FVar7);
          if (((ulonglong)pwVar10 & 1) != 0) {
            pwVar10 = (wchar_t *)(((longlong)pwVar10 >> 0x18) + lVar11 + (longlong)FVar7);
          }
        }
        uVar5 = 0;
        if ((int)uVar9 < (this->AdditionalDefines).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->AdditionalDefines).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(pFVar1 + lVar11);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar10);
        if (iVar6 != 0) {
          return false;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar9 < (this->AdditionalDefines).ArrayNum);
    }
    uVar9 = 0;
    if (0 < (this->AdditionalVariables).ArrayNum) {
      lVar11 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar9 < (param_1->AdditionalVariables).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        FVar7 = (param_1->AdditionalVariables).AllocatorInstance;
        if (((ulonglong)FVar7 & 1) != 0) {
          FVar7 = (ForAnyElementType)
                  ((longlong)(param_1->BaseCompileHash).Hash + ((longlong)FVar7 >> 0x18) + -0x10);
        }
        if (*(int *)(lVar11 + 8 + (longlong)FVar7) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(lVar11 + (longlong)FVar7);
          if (((ulonglong)pwVar10 & 1) != 0) {
            pwVar10 = (wchar_t *)(((longlong)pwVar10 >> 0x18) + lVar11 + (longlong)FVar7);
          }
        }
        uVar5 = 0;
        if ((int)uVar9 < (this->AdditionalVariables).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->AdditionalVariables).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar11 + 8) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(pFVar1 + lVar11);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(pwVar8,pwVar10);
        if (iVar6 != 0) {
          return false;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar9 < (this->AdditionalVariables).ArrayNum);
    }
    if ((((param_1->FeatureLevel == this->FeatureLevel) &&
         (param_1->bUsesRapidIterationParams == this->bUsesRapidIterationParams)) &&
        (bVar3 = FNiagaraCompileHash::operator==(&this->BaseCompileHash,&param_1->BaseCompileHash),
        bVar3)) &&
       ((((this->CompilerVersionId).D == (param_1->CompilerVersionID).D &&
         (this->CompilerVersionId).C == (param_1->CompilerVersionID).C) &&
        (this->CompilerVersionId).B == (param_1->CompilerVersionID).B) &&
        (this->CompilerVersionId).A == (param_1->CompilerVersionID).A)) {
      return true;
    }
  }
  return false;
}

// IsShaderMapComplete @ 148e095f0

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

bool __thiscall FNiagaraShaderScript::IsShaderMapComplete(FNiagaraShaderScript *this)

{
  FNiagaraShaderMap *pFVar1;
  FShaderMapContent *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNiagaraShaderType *pFVar5;
  FShader *pFVar6;
  FName this_01;
  int iVar7;
  undefined1 local_res8 [8];
  FString local_18;
  
  pFVar1 = (this->GameThreadShaderMap).Reference;
  if (((pFVar1 == (FNiagaraShaderMap *)0x0) ||
      (pFVar1->bCompilationFinalized != 1 || pFVar1->bCompiledSuccessfully != 1)) ||
     (pFVar1->bDeletedThroughDeferredCleanup != false)) {
    return false;
  }
  iVar7 = 0;
  if (0 < this->NumPermutations) {
    do {
      this_00 = (FShaderMapContent *)((this->GameThreadShaderMap).Reference)->_padding_;
      pFVar5 = FNiagaraShader::GetStaticType();
      pFVar6 = FShaderMapContent::GetShader(this_00,(FHashedName *)&pFVar5->field_0x28,iVar7);
      if (pFVar6 == (FShader *)0x0) {
        FShaderMapContent::GetShaderPlatform(this_00);
        this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
        ::FName::ToString((FName *)this_01,&local_18);
        FNiagaraShader::GetStaticType();
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x91f,L"Failed to find shader type %s in Platform %s");
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (!bVar3) {
          return false;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < this->NumPermutations);
  }
  return true;
}

// ModifyCompilationEnvironment @ 148e0aa30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::ModifyCompilationEnvironment
          (FNiagaraShaderScript *this,EShaderPlatform param_1,FShaderCompilerEnvironment *param_2)

{
  if (this->BaseVMScript != (UNiagaraScriptBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148e0aa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->BaseVMScript + 0x2b0))();
    return;
  }
  return;
}

// QueueForRelease @ 148e0bba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNiagaraShaderScript::QueueForRelease(FNiagaraShaderScript *this,FThreadSafeBool *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FThreadSafeBool *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FThreadSafeBool *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->bQueuedForRelease != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bQueuedForRelease",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                       ,0x1dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->BaseVMScript != (UNiagaraScriptBase *)0x0) {
    this->bQueuedForRelease = 1;
    LOCK();
    *param_1 = (FThreadSafeBool)0x0;
    UNLOCK();
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraShaderScript::QueueForRelease'::`12'::<lambda_1>,1,0>
                ::_vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraShaderScript::QueueForRelease'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraShaderScript::QueueForRelease_::__l12::TSTR_BeginDestroyCommand484>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar4 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraShaderScript::QueueForRelease'::__l12::TSTR_BeginDestroyCommand484>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar4);
      uVar6 = (ulonglong)local_28;
      if (2 < uVar6) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return this->bQueuedForRelease;
}

// ReleaseShaderMap @ 148e0c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderScript::ReleaseShaderMap(FNiagaraShaderScript *this)

{
  FNiagaraShaderMap *this_00;
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_b8 [40];
  int local_90;
  code *local_88 [2];
  undefined **local_78;
  FNiagaraShaderScript *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraShaderScript *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this_00 = (this->GameThreadShaderMap).Reference;
  if (this_00 != (FNiagaraShaderMap *)0x0) {
    (this->GameThreadShaderMap).Reference = (FNiagaraShaderMap *)0x0;
    FNiagaraShaderMap::Release(this_00);
    if (this->bQueuedForRelease == 0) {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraShaderScript::ReleaseShaderMap'::`8'::<lambda_1>,1,0>
                  ::_vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_70 = this;
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraShaderScript::ReleaseShaderMap_::__l8::TSTR_ReleaseShaderMap312>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pFStack_40 = pFStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`FNiagaraShaderScript::ReleaseShaderMap'::__l8::TSTR_ReleaseShaderMap312>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar3);
        uVar5 = (ulonglong)local_28;
        if (2 < uVar5) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar4 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar4 = local_30;
            }
            (*(code *)(*pppuVar4)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar5])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar4 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar4 = local_60;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    if (this->BaseVMScript == (UNiagaraScriptBase *)0x0) {
      this->NumPermutations = 0;
    }
    else {
      (**(code **)(*(longlong *)this->BaseVMScript + 0x2c0))();
      this->NumPermutations = local_90;
    }
    UpdateCachedData_PostCompile(this,false);
  }
  return;
}

// SerializeShaderMap @ 148e0cdf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::SerializeShaderMap(FNiagaraShaderScript *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  ulonglong *puVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  FNiagaraShaderMap *pFVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  FNiagaraShaderMap *this_00;
  uint uVar12;
  FNiagaraShaderMap *pFVar13;
  uint local_res8 [2];
  FShaderSerializeContext local_38;
  
  if ((*(longlong *)&param_1->field_0x68 == 0) ||
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  pFVar13 = (FNiagaraShaderMap *)0x0;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = uVar12;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) == 0) goto LAB_148e0ce89;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  uVar12 = (uint)(uVar4 != 0);
LAB_148e0ce89:
  piVar3 = &this->NumPermutations;
  piVar6 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->BaseCompileHash);
  if ((*puVar1 & 1) != 0) {
    this->bLoadedFromCookedMaterial = 0;
    *(uint *)&this->field_0xa0 = *(uint *)&this->field_0xa0 | uVar12 * 2;
  }
  if ((char)uVar12 == '\0') {
    if ((*puVar1 & 1) != 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
  }
  else if ((*(longlong *)&param_1->field_0x68 == 0) ||
          (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) == 0)) {
    puVar5 = *(ulonglong **)&param_1->field_0x8;
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar12 = local_res8[0];
      if ((param_1->field_0x28 & 1) == 0) {
        return;
      }
    }
    else {
      uVar12 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    if (uVar12 != 0) {
      pFVar9 = ::operator_new(0x58);
      this_00 = pFVar13;
      if (pFVar9 != (FNiagaraShaderMap *)0x0) {
        FShaderMapBase::FShaderMapBase((FShaderMapBase *)pFVar9);
        pFVar9->bRegistered = 0;
        pFVar9->bCompilationFinalized = 1;
        pFVar9->bIsPersistent = 1;
        pFVar9->bCompiledSuccessfully = 1;
        pFVar9->_padding_ =
             (longlong)
             &FNiagaraShaderMap::
              _vftable__for__TShaderMap<FNiagaraShaderMapContent,FNiagaraShaderMapPointerTable>__;
        pFVar9->_padding_ = (longlong)&FNiagaraShaderMap::_vftable__for__FDeferredCleanupInterface__
        ;
        pFVar9->CompilingId = 1;
        pFVar9->NumRefs = 0;
        pFVar9->bDeletedThroughDeferredCleanup = false;
        FNiagaraShaderMap::AddRef(pFVar9);
        this_00 = pFVar9;
      }
      local_38._padding_ = (longlong)&___7FShaderSerializeContext__6B_;
      local_38.SerializingAsset.ComparisonIndex.Value = 0;
      local_38.SerializingAsset.Number = 0;
      local_38.bLoadingCooked = true;
      local_38.Ar = param_1;
      bVar8 = FShaderMapBase::Serialize((FShaderMapBase *)this_00,&local_38);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
           _thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                               _thread_safe_static_guard_0__),
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__ == -1)) {
        pwVar11 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar11,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
      if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
          && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
              bHasNullRHIOnCommandline == false)) && (bVar8)) {
        this->RenderingThreadShaderMap = this_00;
        pFVar9 = (this->GameThreadShaderMap).Reference;
        if (pFVar9 != this_00) {
          (this->GameThreadShaderMap).Reference = this_00;
          if (this_00 != (FNiagaraShaderMap *)0x0) {
            FNiagaraShaderMap::AddRef(this_00);
          }
          if (pFVar9 != (FNiagaraShaderMap *)0x0) {
            FNiagaraShaderMap::Release(pFVar9);
          }
        }
        lVar7 = ((this->GameThreadShaderMap).Reference)->_padding_;
        if ((UObjectBaseUtility *)this->BaseVMScript != (UObjectBaseUtility *)0x0) {
          pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this->BaseVMScript);
          pFVar13 = (FNiagaraShaderMap *)pUVar10->_padding_;
        }
        *(FNiagaraShaderMap **)(lVar7 + 8) = pFVar13;
        UpdateCachedData_PostCompile(this,true);
      }
      if (this_00 != (FNiagaraShaderMap *)0x0) {
        FNiagaraShaderMap::Release(this_00);
      }
    }
  }
  return;
}

// SetRenderThreadCachedData @ 148e0dbb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::SetRenderThreadCachedData
          (FNiagaraShaderScript *this,FNiagaraShaderMapCachedData *param_1)

{
  this->CachedData_RenderThread = *param_1;
  return;
}

// SetRenderingThreadShaderMap @ 148e0dbd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::SetRenderingThreadShaderMap
          (FNiagaraShaderScript *this,FNiagaraShaderMap *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                       ,0x1c2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->RenderingThreadShaderMap = param_1;
  return;
}

// SetScript @ 148e0dc30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraShaderScript::SetScript
          (FNiagaraShaderScript *this,UNiagaraScriptBase *param_1,Type param_2,
          EShaderPlatform param_3,FGuid *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_6,FNiagaraCompileHash *param_7,
          TArray<FNiagaraCompileHash,TSizedDefaultAllocator<32>_> *param_8,bool param_9,
          FString *param_10)

{
  int *piVar1;
  TArray<FNiagaraCompileHash,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  int local_30;
  
  bVar9 = FNiagaraCompileHash::IsValid(param_7);
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBaseCompileHash.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                         ,0x1a4,L"Invalid base compile hash.  Script caching will fail."), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->BaseVMScript = param_1;
  uVar6 = param_4->B;
  uVar7 = param_4->C;
  uVar8 = param_4->D;
  (this->CompilerVersionId).A = param_4->A;
  (this->CompilerVersionId).B = uVar6;
  (this->CompilerVersionId).C = uVar7;
  (this->CompilerVersionId).D = uVar8;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->AdditionalDefines,param_5);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&this->AdditionalVariables,param_6);
  this->bUsesRapidIterationParams = param_9;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->BaseCompileHash).DataHash,&param_7->DataHash);
  pTVar2 = &this->ReferencedCompileHashes;
  if (pTVar2 != param_8) {
    DestructItems<FNiagaraCompileHash,int>
              ((FNiagaraCompileHash *)(pTVar2->AllocatorInstance).Data,
               (this->ReferencedCompileHashes).ArrayNum);
    iVar10 = param_8->ArrayNum;
    piVar1 = &(this->ReferencedCompileHashes).ArrayMax;
    pFVar4 = (param_8->AllocatorInstance).Data;
    (this->ReferencedCompileHashes).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar10,*piVar1,&pTVar2->AllocatorInstance,iVar10,piVar1);
      ConstructItems<FNiagaraCompileHash,FNiagaraCompileHash,int>
                ((pTVar2->AllocatorInstance).Data,(FNiagaraCompileHash *)pFVar4,iVar10);
    }
  }
  iVar3 = (param_10->Data).ArrayNum;
  iVar10 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            (&this->FriendlyName,(wchar_t *)(param_10->Data).AllocatorInstance.Data,iVar10);
  this->FeatureLevel = param_2;
  this->ShaderPlatform = param_3;
  if (this->BaseVMScript == (UNiagaraScriptBase *)0x0) {
    this->NumPermutations = 0;
  }
  else {
    (**(code **)(*(longlong *)this->BaseVMScript + 0x2c0))();
    this->NumPermutations = local_30;
  }
  UpdateCachedData_PostCompile(this,false);
  pFVar4 = (param_10->Data).AllocatorInstance.Data;
  if (pFVar4 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar4);
  return;
}

// ShouldCache @ 148e0de20

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
FNiagaraShaderScript::ShouldCache
          (FNiagaraShaderScript *this,EShaderPlatform param_1,FShaderType *param_2)

{
  UNiagaraScriptBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FShaderType *pFVar6;
  
  pFVar6 = (FShaderType *)0x0;
  if (param_2->ShaderTypeForDynamicCast == Niagara) {
    pFVar6 = param_2;
  }
  if (pFVar6 == (FShaderType *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderType->GetNiagaraShaderType() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                       ,0x5e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pUVar1 = this->BaseVMScript;
  if (pUVar1 != (UNiagaraScriptBase *)0x0) {
    cVar5 = (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1,param_1);
    return cVar5 != '\0';
  }
  return true;
}

// UpdateCachedData_All @ 148e123b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderScript::UpdateCachedData_All(FNiagaraShaderScript *this)

{
  int local_10;
  
  if (this->BaseVMScript != (UNiagaraScriptBase *)0x0) {
    (**(code **)(*(longlong *)this->BaseVMScript + 0x2c0))();
    this->NumPermutations = local_10;
    UpdateCachedData_PostCompile(this,false);
    return;
  }
  this->NumPermutations = 0;
  UpdateCachedData_PostCompile(this,false);
  return;
}

// UpdateCachedData_PostCompile @ 148e12410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FNiagaraShaderScript::UpdateCachedData_PostCompile(FNiagaraShaderScript *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FNiagaraShaderMap *pFVar4;
  longlong *plVar5;
  FShaderMapResource *this_00;
  code *pcVar6;
  FNiagaraShaderMapCachedData FVar7;
  bool bVar8;
  EShaderPlatform EVar9;
  uint uVar10;
  FNiagaraShaderType *pFVar11;
  FShader *pFVar12;
  atomic<FRHIShader_*> aVar13;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar14;
  uint uVar15;
  TRefCountPtr<FBaseGraphTask> *pTVar16;
  undefined ***pppuVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_118 [32];
  int local_f8;
  uint uStack_f4;
  FPSOPrecacheRequestResult local_f0;
  code *local_d8 [2];
  undefined **local_c8;
  FNiagaraShaderScript *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FNiagaraShaderScript *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  TRefCountPtr<FBaseGraphTask> local_68 [4];
  TRefCountPtr<FBaseGraphTask> *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  bVar8 = IsInGameThread();
  if (((!bVar8) && (!param_1)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread() || bCalledFromSerialize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                         ,0x203,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = 0;
  pFVar4 = (this->GameThreadShaderMap).Reference;
  uStack_f4 = uStack_f4 & 0xfffffff0;
  iVar3 = this->NumPermutations;
  uVar20 = uStack_f4 | 1;
  local_f8 = iVar3;
  if (((pFVar4 != (FNiagaraShaderMap *)0x0) &&
      (pFVar4->bCompilationFinalized == 1 && pFVar4->bCompiledSuccessfully == 1)) &&
     ((pFVar4->bDeletedThroughDeferredCleanup == false && (uStack_f4 = uVar20, 0 < iVar3)))) {
    do {
      pFVar4 = (this->GameThreadShaderMap).Reference;
      pFVar11 = FNiagaraShader::GetStaticType();
      pFVar12 = FShaderMapContent::GetShader
                          ((FShaderMapContent *)pFVar4->_padding_,
                           (FHashedName *)&pFVar11->field_0x28,iVar19);
      if (pFVar12 == (FShader *)0x0) {
        uStack_f4 = uVar20 & 0xfffffffe;
        break;
      }
      uVar15 = 0;
      if (*(short *)&pFVar12[1].Bindings.Parameters.AllocatorInstance.field_0x6 != -1) {
        uVar15 = 4;
      }
      uVar10 = 0;
      if (*(short *)&pFVar12[1].Bindings.Parameters.AllocatorInstance.field_0x4 != -1) {
        uVar10 = 2;
      }
      uVar20 = (uVar15 | uVar10 | uVar20 & 6) ^ uVar20 & 0xfffffff9;
      uVar20 = ((uint)*(byte *)&pFVar12[1].Bindings.Parameters.AllocatorInstance << 3 | uVar20) & 8
               ^ uVar20 & 0xfffffff7;
      uStack_f4 = uVar20;
      EVar9 = FShaderMapContent::GetShaderPlatform
                        ((FShaderMapContent *)((this->GameThreadShaderMap).Reference)->_padding_);
      if (GMaxRHIShaderPlatform == EVar9) {
        bVar8 = IsPSOShaderPreloadingEnabled();
        if (bVar8) {
          local_48 = (TRefCountPtr<FBaseGraphTask> *)0x0;
          local_3c = 4;
          local_40 = 0;
          plVar5 = (longlong *)((this->GameThreadShaderMap).Reference)->_padding_;
          (**(code **)(*plVar5 + 0x38))(plVar5,pFVar12->ResourceIndex,local_68);
          pTVar16 = local_68;
          if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
            pTVar16 = local_48;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar16,local_40);
          if (local_48 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
            FMemory::Free(local_48);
          }
        }
        else {
          bVar8 = IsResourcePSOPrecachingEnabled();
          if ((bVar8) || (bVar8 = IsComponentPSOPrecachingEnabled(), bVar8)) {
            if (((*(byte *)&(pFVar12->Target).field0_0x0 & 0xf) != 5) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NiagaraShader->GetFrequency() == SF_Compute",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraShared.cpp"
                                   ,0x229,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (FShaderMapResource *)((this->GameThreadShaderMap).Reference)->_padding_;
            aVar13 = (this_00->RHIShaders).Ptr[pFVar12->ResourceIndex];
            if (aVar13 == (atomic<FRHIShader_*>)0x0) {
              aVar13 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash(this_00,pFVar12->ResourceIndex,true);
            }
            PipelineStateCache::PrecacheComputePipelineState
                      (&local_f0,(FRHIComputeShader *)aVar13,L"NiagaraCompute",false);
            if (local_f0.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
              LOCK();
              puVar1 = &(local_f0.AsyncCompileEvent.Reference)->field_0x30;
              iVar2 = *(int *)puVar1;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (*(code *)**(undefined8 **)local_f0.AsyncCompileEvent.Reference)
                          (local_f0.AsyncCompileEvent.Reference,1);
              }
            }
          }
        }
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 < iVar3);
  }
  if (param_1) {
    FVar7._4_4_ = uStack_f4;
    FVar7.NumPermutations = local_f8;
    this->CachedData_RenderThread = FVar7;
  }
  else if (this->bQueuedForRelease == 0) {
    local_b0 = (undefined ***)0x0;
    local_c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::`45'::<lambda_1>,1,0>
                ::_vftable_;
    local_b8._4_4_ = uStack_f4;
    local_b8._0_4_ = local_f8;
    local_d8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_c0 = this;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraShaderScript::UpdateCachedData_PostCompile_::__l45::TSTR_UpdateCachedData572>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_a8._0_8_ = local_d8[0];
      local_80 = local_b0;
      local_98 = local_c8;
      pFStack_90 = pFStack_c0;
      local_88 = local_b8;
      local_d8[0] = (code *)0x0;
      local_78 = 2;
      pFVar14 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraShaderScript::UpdateCachedData_PostCompile'::__l45::TSTR_UpdateCachedData572>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_a8,pFVar14);
      uVar18 = (ulonglong)local_78;
      if ((2 < uVar18) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          pppuVar17 = (undefined ***)(local_a8 + 0x10);
          if (local_80 != (undefined ***)0x0) {
            pppuVar17 = local_80;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar18])(local_a8);
      }
    }
    if (local_d8[0] != (code *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
  }
  return;
}

// UpdateCachedData_PreCompile @ 148e12810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNiagaraShaderScript::UpdateCachedData_PreCompile(FNiagaraShaderScript *this)

{
  UNiagaraScriptBase *pUVar1;
  undefined1 local_18 [8];
  int local_10;
  
  pUVar1 = this->BaseVMScript;
  if (pUVar1 != (UNiagaraScriptBase *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,local_18);
    this->NumPermutations = local_10;
    return;
  }
  this->NumPermutations = 0;
  return;
}

