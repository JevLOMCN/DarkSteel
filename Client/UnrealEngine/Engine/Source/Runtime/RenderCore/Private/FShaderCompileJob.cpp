// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 20

// FShaderCompileJob @ 145e408c0

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

FShaderCompileJob * __thiscall FShaderCompileJob::FShaderCompileJob(FShaderCompileJob *this)

{
  FShaderCommonCompileJob::FShaderCommonCompileJob((FShaderCommonCompileJob *)this,Single,0,0,Num);
  this->_padding_ = (longlong)&___7FShaderCompileJob__6B_;
  (this->Key).ShaderType = (FShaderType *)0x0;
  (this->Key).VFType = (FVertexFactoryType *)0x0;
  (this->Key).PermutationId = 0;
  (this->ShaderParameters).Object = (FParameters *)0x0;
  (this->ShaderParameters).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FShaderCompilerInput::FShaderCompilerInput(&this->Input);
  FShaderPreprocessOutput::FShaderPreprocessOutput(&this->PreprocessOutput);
  (this->SecondaryPreprocessOutput).Ptr = (FShaderPreprocessOutput *)0x0;
  FShaderCompilerOutput::FShaderCompilerOutput(&this->Output);
  (this->SecondaryOutput).Ptr = (FShaderCompilerOutput *)0x0;
  *(undefined8 *)&this->SharingPipelines = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x8 = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x20 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x28 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x2c = 0x80;
  *(undefined4 *)&(this->SharingPipelines).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharingPipelines).field_0x34 = 0;
  *(undefined8 *)&(this->SharingPipelines).field_0x40 = 0;
  *(undefined4 *)&(this->SharingPipelines).field_0x48 = 0;
  return this;
}

// ~FShaderCompileJob @ 145e437e0

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

void __thiscall FShaderCompileJob::~FShaderCompileJob(FShaderCompileJob *this)

{
  void *pvVar1;
  FShaderCompilerOutput *this_00;
  FShaderPreprocessOutput *this_01;
  
  *(undefined4 *)&(this->SharingPipelines).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SharingPipelines).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SharingPipelines);
  this_00 = (this->SecondaryOutput).Ptr;
  if (this_00 != (FShaderCompilerOutput *)0x0) {
    FShaderCompilerOutput::~FShaderCompilerOutput(this_00);
    ::operator_delete(this_00,0x1c8);
  }
  FShaderCompilerOutput::~FShaderCompilerOutput(&this->Output);
  this_01 = (this->SecondaryPreprocessOutput).Ptr;
  if (this_01 != (FShaderPreprocessOutput *)0x0) {
    FShaderPreprocessOutput::~FShaderPreprocessOutput(this_01);
    ::operator_delete(this_01,0xd0);
  }
  FShaderPreprocessOutput::~FShaderPreprocessOutput(&this->PreprocessOutput);
  FShaderCompilerInput::~FShaderCompilerInput(&this->Input);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ShaderParameters).SharedReferenceCount.ReferenceController);
  FShaderCommonCompileJob::~FShaderCommonCompileJob((FShaderCommonCompileJob *)this);
  return;
}

// operator() @ 145e48900

void __thiscall
`FShaderCompileJob::OnComplete'::__l2::<lambda_1>::operator()
          (void *this,FShaderPreprocessOutput *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  
  *(double *)(*(longlong *)this + 0x6f8) =
       param_1->PreprocessTime + *(double *)(*(longlong *)this + 0x6f8);
  lVar2 = *(longlong *)this;
  pFVar6 = (ForAnyElementType *)(lVar2 + 0x758);
  if ((TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> *)pFVar6 ==
      &param_1->ShaderDiagnosticDatas) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = (param_1->ShaderDiagnosticDatas).ArrayNum;
  if (iVar1 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar1,pFVar6,(int *)(lVar2 + 0x760),(int *)(lVar2 + 0x764));
    ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
              (pFVar6->Data + (longlong)iVar5 * 0x18,
               (FShaderDiagnosticData *)(param_1->ShaderDiagnosticDatas).AllocatorInstance.Data,
               iVar1);
  }
  return;
}

// AppendDebugName @ 145e4be40

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

void __thiscall
FShaderCompileJob::AppendDebugName(FShaderCompileJob *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0x178;
  if (1 < (this->Input).DumpDebugInfoPath.Data.ArrayNum) {
    lVar2 = 0x168;
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + lVar2);
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,*(wchar_t **)((longlong)&this->_padding_ + lVar2),iVar3);
  return;
}

// AppendDiagnostics @ 145e4c020

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

void __thiscall
FShaderCompileJob::AppendDiagnostics
          (FShaderCompileJob *this,FString *param_1,int param_2,int param_3,wchar_t *param_4)

{
  FString local_18;
  
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::AppendChar(param_1,L'\n');
  }
  FShaderCompilerInput::GenerateShaderName(&this->Input,&local_18);
  ::FString::AppendfImpl(param_1,L"%sJob [%d/%d]: %s (PermutationId=%d)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetFinalSourceView @ 145e58380

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

TStringView<wchar_t> * __thiscall
FShaderCompileJob::GetFinalSourceView
          (FShaderCompileJob *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  int iVar1;
  undefined4 uVar2;
  TStringView<wchar_t> *pTVar3;
  TStringView<wchar_t> local_18;
  
  if ((this->Input).ExtraSettings.bExtractShaderSource == false) {
    *(undefined8 *)&__return_storage_ptr__->Size = 0;
    __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
    return __return_storage_ptr__;
  }
  iVar1 = (this->Output).ModifiedShaderSource.Data.ArrayNum;
  if (iVar1 < 2) {
    pTVar3 = FShaderPreprocessOutput::GetUnstrippedSourceView(&this->PreprocessOutput,&local_18);
    iVar1 = pTVar3->Size;
    uVar2 = *(undefined4 *)&pTVar3->field_0xc;
    __return_storage_ptr__->DataPtr = pTVar3->DataPtr;
    __return_storage_ptr__->Size = iVar1;
    *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->DataPtr =
       (wchar_t *)(this->Output).ModifiedShaderSource.Data.AllocatorInstance.Data;
  *(ulonglong *)&__return_storage_ptr__->Size = CONCAT44(local_18._12_4_,iVar1 + -1);
  return __return_storage_ptr__;
}

// GetInputHash @ 145e58bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FBlake3Hash * __thiscall
FShaderCompileJob::GetInputHash(FShaderCompileJob *this,FBlake3Hash *__return_storage_ptr__)

{
  int iVar1;
  FSharedShaderCompilerEnvironment *pFVar2;
  FShaderPreprocessOutput *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  ITargetPlatformManagerModule *pIVar9;
  FBlake3Hash *pFVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_c28 [32];
  ulonglong local_c08;
  longlong local_c00;
  uint local_bf8;
  uint local_bf4;
  uint local_bf0;
  uint local_bec;
  uint local_be8;
  uint local_be4;
  int local_be0;
  FScriptContainerElement *local_bd8;
  FBlake3Hash *local_bd0;
  code *local_bc8;
  undefined **local_bb8;
  FMemoryArchive *local_bb0;
  undefined ***local_ba0;
  FGuid local_b98;
  FMemoryArchive local_b88;
  FBlake3 local_af0;
  uchar local_378 [4];
  uchar auStack_374 [4];
  uchar auStack_370 [4];
  uchar auStack_36c [4];
  uchar local_368 [4];
  uchar auStack_364 [4];
  uchar auStack_360 [4];
  uchar auStack_35c [4];
  FBlake3Hash local_358;
  FShaderCompilerEnvironment local_338;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c28;
  if ((this->_padding_ & 0x10) != 0) {
    uVar5 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)__return_storage_ptr__->Hash = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 8) = uVar5;
    uVar5 = *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 0x10) =
         *(undefined8 *)((longlong)&this->_padding_ + 4);
    *(undefined8 *)(__return_storage_ptr__->Hash + 0x18) = uVar5;
    return __return_storage_ptr__;
  }
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_b88._padding_ = 0;
  local_bd0 = __return_storage_ptr__;
  FArchiveState::FArchiveState((FArchiveState *)&local_b88);
  uVar14 = 0;
  local_b88._padding_ = (longlong)&___7__TMemoryHasher_VFBlake3__UFBlake3Hash____6B_;
  local_b88.Offset = 0;
  FBlake3::Reset(&local_af0);
  (**(code **)(local_b88._padding_ + 0xd8))(&local_b88,1);
  (**(code **)(local_b88._padding_ + 0x108))(&local_b88,0);
  local_b98 = UE_SHADER_CACHE_VERSION;
  ::operator<<((FArchive *)&local_b88,&local_b98);
  pIVar9 = GetTargetPlatformManagerRef();
  local_bec = (**(code **)((longlong)*pIVar9 + 0xe8))(pIVar9,(this->Input).ShaderFormat);
  if (*(uint **)(local_b88._padding_ + 8) < *(uint **)local_b88._padding_ + 1) {
    if ((local_b88._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize)
      {
        FBlake3::Update(&local_af0,&local_bec,4);
      }
      else {
        (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b88,&local_bec);
    }
  }
  else {
    local_bec = **(uint **)local_b88._padding_;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  if (*(code **)(local_b88._padding_ + 0x178) == FMemoryArchive::operator<<) {
    FMemoryArchive::operator<<(&local_b88,&(this->Input).PreferredShaderCodeFormat);
  }
  else {
    (**(code **)(local_b88._padding_ + 0x178))();
  }
  uVar8 = (this->Input).Target.field0_0x0.Packed;
  local_be8 = uVar8 & 0xf;
  local_be4 = uVar8 >> 4 & 0xffff;
  if (*(uint **)(local_b88._padding_ + 8) < *(uint **)local_b88._padding_ + 1) {
    if ((local_b88._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize)
      {
        FBlake3::Update(&local_af0,&local_be8,4);
      }
      else {
        (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b88,&local_be8);
    }
  }
  else {
    local_be8 = **(uint **)local_b88._padding_;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  if (*(uint **)(local_b88._padding_ + 8) < *(uint **)local_b88._padding_ + 1) {
    if ((local_b88._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize)
      {
        FBlake3::Update(&local_af0,&local_be4,4);
      }
      else {
        (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b88,&local_be4);
    }
  }
  else {
    local_be4 = **(uint **)local_b88._padding_;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  ::operator<<((FArchive *)&local_b88,&(this->Input).EntryPointName);
  if (*(int **)(local_b88._padding_ + 8) < *(int **)local_b88._padding_ + 1) {
    local_bf8 = 0;
    if ((local_b88._padding_ & 1U) == 0) {
      local_bf8 = (uint)((this->Input).bCompilingForShaderPipeline != false);
    }
    if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize) {
      FBlake3::Update(&local_af0,&local_bf8,4);
    }
    else {
      (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
    }
    if (1 < local_bf8) {
      FArchiveState::SetError((FArchiveState *)&local_b88);
    }
    if ((local_b88._padding_ & 1U) != 0) {
      (this->Input).bCompilingForShaderPipeline = local_bf8 != 0;
    }
  }
  else {
    (this->Input).bCompilingForShaderPipeline = **(int **)local_b88._padding_ != 0;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  if (*(int **)(local_b88._padding_ + 8) < *(int **)local_b88._padding_ + 1) {
    local_bf4 = 0;
    if (((byte)local_b88._padding_ & 1) == 0) {
      local_bf4 = (uint)((this->Input).bBindlessEnabled != false);
    }
    if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize) {
      FBlake3::Update(&local_af0,&local_bf4,4);
    }
    else {
      (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
    }
    if (1 < local_bf4) {
      FArchiveState::SetError((FArchiveState *)&local_b88);
    }
    if ((local_b88._padding_ & 1U) != 0) {
      (this->Input).bBindlessEnabled = local_bf4 != 0;
    }
  }
  else {
    (this->Input).bBindlessEnabled = **(int **)local_b88._padding_ != 0;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  FShaderCompilerEnvironment::FShaderCompilerEnvironment(&local_338,&(this->Input).Environment);
  pFVar2 = (this->Input).SharedEnvironment.Reference;
  if (pFVar2 != (FSharedShaderCompilerEnvironment *)0x0) {
    FShaderCompilerEnvironment::Merge(&local_338,(FShaderCompilerEnvironment *)&pFVar2->field_0x10);
  }
  TSetPrivateFriend::
  Serialize<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b88,
             (TSet<TTuple<FString,TVariant<bool,float,int,unsigned_int,FString>_>,TDefaultMapHashableKeyFuncs<FString,TVariant<bool,float,int,unsigned_int,FString>,0>,FDefaultSetAllocator>
              *)&local_338.CompileArgs);
  if (*(ulong64 **)(local_b88._padding_ + 8) < *(ulong64 **)local_b88._padding_ + 1) {
    if ((local_b88._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize)
      {
        FBlake3::Update(&local_af0,&local_338.CompilerFlags,8);
      }
      else {
        (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_b88,&local_338.CompilerFlags.Data);
    }
  }
  else {
    local_338.CompilerFlags.Data = **(ulong64 **)local_b88._padding_;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 8;
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b88,
             (TSet<TTuple<unsigned_int,unsigned_char>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_char,0>,FDefaultSetAllocator>
              *)&local_338.RenderTargetOutputFormatsMap);
  TArrayPrivateFriend::Serialize<FUniformResourceEntry,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_b88,&local_338.ResourceTableMap.Resources);
  TSetPrivateFriend::
  Serialize<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
            ((FArchive *)&local_b88,
             (TSet<TTuple<FString,FUniformBufferEntry>,TDefaultMapHashableKeyFuncs<FString,FUniformBufferEntry,0>,FDefaultSetAllocator>
              *)&local_338.UniformBufferMap);
  ::operator<<((FArchive *)&local_b88,&local_338.RHIShaderBindingLayout);
  if (*(int **)(local_b88._padding_ + 8) < *(int **)local_b88._padding_ + 1) {
    local_bf0 = 0;
    if ((local_b88._padding_ & 1U) == 0) {
      local_bf0 = (uint)(local_338.FullPrecisionInPS != false);
    }
    if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize) {
      FBlake3::Update(&local_af0,&local_bf0,4);
    }
    else {
      (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
    }
    if (1 < local_bf0) {
      FArchiveState::SetError((FArchiveState *)&local_b88);
    }
    if ((local_b88._padding_ & 1U) == 0) goto LAB_145e590eb;
    local_338.FullPrecisionInPS = local_bf0 != 0;
  }
  else {
    local_338.FullPrecisionInPS = **(int **)local_b88._padding_ != 0;
    *(longlong *)local_b88._padding_ = *(longlong *)local_b88._padding_ + 4;
  }
  if (((byte)local_b88._padding_ & 1) != 0) {
    FShaderResourceTableMap::FixupOnLoad(&local_338.ResourceTableMap,&local_338.UniformBufferMap);
  }
LAB_145e590eb:
  local_ba0 = (undefined ***)0x0;
  local_bb8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FShaderCompileJob::GetInputHash'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_bb0 = &local_b88;
  local_bc8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,void,FString_const_*>
              ::Call;
  local_be0 = (this->PreprocessOutput).PragmaDirectives.ArrayNum;
  uVar15 = uVar14;
  uVar16 = uVar14;
  if (0 < local_be0) {
    do {
      iVar1 = (this->PreprocessOutput).PragmaDirectives.ArrayNum;
      uVar13 = (uint)uVar14;
      uVar8 = 0;
      if ((int)uVar13 < iVar1) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (local_c08 = uVar16, local_c00 = (longlong)iVar1,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FBlake3Hash *)(*pcVar4)();
        return pFVar10;
      }
      local_bd8 = (this->PreprocessOutput).PragmaDirectives.AllocatorInstance.Data + uVar15;
      UE::Core::Private::Function::CheckCallable(local_bc8);
      pcVar4 = local_bc8;
      pppuVar12 = &local_bb8;
      if (local_ba0 != (undefined ***)0x0) {
        pppuVar12 = local_ba0;
      }
      puVar11 = (undefined8 *)(*(code *)(*pppuVar12)[1])();
      pFVar6 = local_bd8;
      if (pcVar4 == UE::Core::Private::Function::
                    TFunctionRefCaller<`FShaderCompileJob::GetInputHash'::__l2::<lambda_1>,void,FString_const_*>
                    ::Call) {
        if (((local_bd8 == (FScriptContainerElement *)0x0) || (*(int *)(local_bd8 + 8) < 2)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Directive && !Directive->IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                               ,0x112e,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FBlake3Hash *)(*pcVar4)();
          return pFVar10;
        }
        ::operator<<((FArchive *)*puVar11,(FString *)pFVar6);
      }
      else {
        (*pcVar4)(puVar11,&local_bd8);
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      __return_storage_ptr__ = local_bd0;
      uVar15 = uVar15 + 0x10;
      uVar16 = uVar16 + 1;
    } while ((int)(uVar13 + 1) < local_be0);
  }
  if (local_bc8 != (code *)0x0) {
    pppuVar12 = &local_bb8;
    if (local_ba0 != (undefined ***)0x0) {
      pppuVar12 = local_ba0;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  ::operator<<((FArchive *)&local_b88,&(this->PreprocessOutput).PreprocessedSource);
  pFVar3 = (this->SecondaryPreprocessOutput).Ptr;
  if (pFVar3 != (FShaderPreprocessOutput *)0x0) {
    ::operator<<((FArchive *)&local_b88,&pFVar3->PreprocessedSource);
  }
  if ((this->Input).RootParametersStructure != (FShaderParametersMetadata *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                       ,0x1b4,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FBlake3Hash *)(*pcVar4)();
      return pFVar10;
    }
    local_378[0] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[0];
    local_378[1] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[1];
    local_378[2] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[2];
    local_378[3] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[3];
    auStack_374[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[4];
    auStack_374[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[5];
    auStack_374[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[6];
    auStack_374[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[7];
    auStack_370[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[8];
    auStack_370[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[9];
    auStack_370[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[10];
    auStack_370[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0xb];
    auStack_36c[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0xc];
    auStack_36c[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0xd];
    auStack_36c[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0xe];
    auStack_36c[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0xf];
    local_368[0] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[0x10];
    local_368[1] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[0x11];
    local_368[2] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[0x12];
    local_368[3] = `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
                   ::__l2::Dummy.Hash[0x13];
    auStack_364[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x14];
    auStack_364[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x15];
    auStack_364[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x16];
    auStack_364[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x17];
    auStack_360[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x18];
    auStack_360[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x19];
    auStack_360[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1a];
    auStack_360[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1b];
    auStack_35c[0] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1c];
    auStack_35c[1] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1d];
    auStack_35c[2] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1e];
    auStack_35c[3] =
         `public:_struct_FBlake3Hash_const&___ptr64___cdecl_FShaderParametersMetadata::GetLayoutSignature(void)const___ptr64'
         ::__l2::Dummy.Hash[0x1f];
    if (*(code **)(local_b88._padding_ + 0x188) == TMemoryHasher<FBlake3,FBlake3Hash>::Serialize) {
      FBlake3::Update(&local_af0,local_378,0x20);
    }
    else {
      (**(code **)(local_b88._padding_ + 0x188))(&local_b88);
    }
  }
  FBlake3::Finalize(&local_af0,&local_358);
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0x10;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = local_358.Hash._0_8_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = local_358.Hash._8_8_;
  *(undefined8 *)(this->Input).Hash.Hash = local_358.Hash._0_8_;
  *(undefined8 *)((this->Input).Hash.Hash + 8) = local_358.Hash._8_8_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = local_358.Hash._16_8_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = local_358.Hash._24_8_;
  *(undefined8 *)((this->Input).Hash.Hash + 0x10) = local_358.Hash._16_8_;
  *(undefined8 *)((this->Input).Hash.Hash + 0x18) = local_358.Hash._24_8_;
  *(undefined8 *)__return_storage_ptr__->Hash = local_358.Hash._0_8_;
  *(undefined8 *)(__return_storage_ptr__->Hash + 8) = local_358.Hash._8_8_;
  *(undefined8 *)(__return_storage_ptr__->Hash + 0x10) = local_358.Hash._16_8_;
  *(undefined8 *)(__return_storage_ptr__->Hash + 0x18) = local_358.Hash._24_8_;
  FShaderCompilerEnvironment::~FShaderCompilerEnvironment(&local_338);
  FArchive::~FArchive((FArchive *)&local_b88);
  return __return_storage_ptr__;
}

// OnComplete @ 145e62fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FShaderCompileJob::OnComplete(FShaderCompileJob *this,FShaderDebugDataContext *param_1)

{
  FShaderCompilerInput *this_00;
  char cVar1;
  int iVar2;
  FShaderCompilerOutput *pFVar3;
  FShaderPreprocessOutput *pFVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  ForAnyElementType _Src;
  bool bVar7;
  bool bVar8;
  FShaderCodeResource *pFVar9;
  ITargetPlatformManagerModule *pIVar10;
  longlong *plVar11;
  TStringBuilderBase<wchar_t> *this_01;
  wchar_t *pwVar12;
  ForElementType<FSharedBuffer> FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  ForElementType<FSharedBuffer> FVar17;
  FScriptContainerElement *pFVar18;
  FShaderCompilerOutput *pFVar19;
  undefined1 auStackY_298 [32];
  undefined1 local_258 [4];
  uint local_254;
  FShaderDebugDataContext *local_250;
  ForAnyElementType local_248;
  int local_240;
  int local_23c;
  ForAnyElementType local_238;
  int local_230;
  int local_22c;
  FShaderCompileJob *local_228;
  FShaderCompileJob *local_220;
  FShaderCompilerOutput *local_218;
  ulong64 local_210;
  wchar_t *local_208;
  int iStack_200;
  FString local_1f8;
  FSHAHash local_1e8;
  void *local_1c8;
  FCompositeBuffer local_1b8;
  FCompositeBuffer local_1a0;
  FCompressedBuffer local_188;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_298;
  plVar11 = (longlong *)0x0;
  pFVar19 = &this->Output;
  local_254 = 0;
  local_250 = param_1;
  local_220 = this;
  local_218 = pFVar19;
  if ((this->Output).bSucceeded == false) {
    local_1a0.Segments.AllocatorInstance.InlineData[0] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[1] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[2] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[3] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[4] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[5] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[6] = '\0';
    local_1a0.Segments.AllocatorInstance.InlineData[7] = '\0';
    local_1a0.Segments.ArrayMax = 1;
    local_1a0.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    local_1a0.Segments.ArrayNum = 0;
    FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(&local_188.CompressedData,&local_1a0);
    FCompositeBuffer::~FCompositeBuffer(&local_1a0);
    local_254 = 0;
  }
  else {
    local_1e8.Hash._0_8_ = *(undefined8 *)(this->Output).OutputHash.Hash;
    local_1e8.Hash._8_8_ = *(undefined8 *)((this->Output).OutputHash.Hash + 8);
    local_1e8.Hash._16_4_ = *(undefined4 *)((this->Output).OutputHash.Hash + 0x10);
    pFVar9 = FShaderCode::GetFinalizedResource
                       (&(this->Output).ShaderCode,
                        *(EShaderFrequency *)&(this->Output).Target.field0_0x0 &
                        (SF_NumFrequencies|SF_Pixel),&local_1e8);
    local_1b8.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
    FVar17 = (pFVar9->Symbols).CompressedData.Segments.AllocatorInstance.SecondaryData;
    iVar2 = (pFVar9->Symbols).CompressedData.Segments.ArrayNum;
    if (FVar17 == (ForElementType<FSharedBuffer>)0x0) {
      FVar17 = (ForElementType<FSharedBuffer>)&pFVar9->Symbols;
    }
    local_1b8.Segments.ArrayNum = iVar2;
    if (iVar2 == 0) {
      local_1b8.Segments.ArrayMax = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSharedBuffer>_>
                (8,8,iVar2,0,(ForElementType<FSharedBuffer> *)&local_1b8,iVar2,
                 &local_1b8.Segments.ArrayMax);
      FVar13 = (ForElementType<FSharedBuffer>)&local_1b8;
      if (local_1b8.Segments.AllocatorInstance.SecondaryData != (ForElementType<FSharedBuffer>)0x0)
      {
        FVar13 = local_1b8.Segments.AllocatorInstance.SecondaryData;
      }
      ConstructItems<FSharedBuffer,FSharedBuffer,int>((void *)FVar13,(FSharedBuffer *)FVar17,iVar2);
    }
    FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>(&local_188.CompressedData,&local_1b8);
    local_254 = 0;
    FCompositeBuffer::~FCompositeBuffer(&local_1b8);
  }
  uVar16 = 0;
  lVar15 = 1;
  pFVar3 = (this->SecondaryOutput).Ptr;
  local_210 = FCompressedBuffer::GetRawSize(&local_188);
  if (((local_210 != 0) || (bVar7 = FShaderCompilerInput::DumpDebugInfoEnabled(&this->Input), bVar7)
      ) || (pFVar3 != (FShaderCompilerOutput *)0x0)) {
    pIVar10 = GetTargetPlatformManagerRef();
    plVar11 = (longlong *)
              (**(code **)((longlong)*pIVar10 + 0x50))(pIVar10,(this->Input).ShaderFormat);
  }
  if (((this->Input).Environment.CompilerFlags.Data & 0x20000000000) == 0) {
    FShaderPreprocessOutput::RemapErrors(&this->PreprocessOutput,pFVar19);
    uVar16 = 0;
    if (pFVar3 != (FShaderCompilerOutput *)0x0) {
      if (((this->SecondaryPreprocessOutput).Ptr == (FShaderPreprocessOutput *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SecondaryPreprocessOutput.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                             ,0x117e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FShaderPreprocessOutput::RemapErrors
                ((this->SecondaryPreprocessOutput).Ptr,(this->SecondaryOutput).Ptr);
LAB_145e631db:
      if ((plVar11 == (longlong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShaderFormat",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                             ,0x1185,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(*plVar11 + 0x88))(plVar11,&local_208);
      uVar16 = 0;
      if (iStack_200 != 0) {
        local_168.Base = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        local_168.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_148,1,"(",1);
        this_01 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_168,local_208,iStack_200);
        if (this_01->End < this_01->CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(this_01,2);
        }
        pwVar12 = FGenericPlatformString::Convert<char,wchar_t>(this_01->CurPos,2,") ",2);
        this_01->CurPos = pwVar12;
        pFVar19 = (this->SecondaryOutput).Ptr;
        iVar2 = (pFVar19->Errors).ArrayNum;
        pFVar14 = (pFVar19->Errors).AllocatorInstance.Data;
        pFVar18 = pFVar14 + (longlong)iVar2 * 0x50;
        while( true ) {
          if ((pFVar19->Errors).ArrayNum != iVar2) {
            local_258[0] = 0;
            `TCheckedPointerIterator<FShaderCompilerError,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_258);
          }
          if (pFVar14 == pFVar18) break;
          if (local_168.End < local_168.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_168,1);
          }
          *local_168.CurPos = L'\0';
          ::FString::FString(&local_1f8,local_168.Base);
          ::FString::InsertAt((FString *)(pFVar14 + 0x20),0,&local_1f8);
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          pFVar14 = pFVar14 + 0x50;
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        this = local_220;
        pFVar19 = local_218;
        uVar16 = local_254;
      }
      TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_>::
      Append<FShaderCompilerError,TSizedDefaultAllocator<32>_>
                (&pFVar19->Errors,&((this->SecondaryOutput).Ptr)->Errors);
    }
  }
  else if (pFVar3 != (FShaderCompilerOutput *)0x0) goto LAB_145e631db;
  this_00 = &this->Input;
  bVar7 = FShaderCompilerInput::DumpDebugInfoEnabled(this_00);
  if ((bVar7) || ((this->Input).ExtraSettings.bExtractShaderSource != false)) {
    FShaderSource::Decompress(&(this->PreprocessOutput).PreprocessedSource);
    FShaderSource::Decompress(&(this->PreprocessOutput).OriginalPreprocessedSource);
    pFVar4 = (this->SecondaryPreprocessOutput).Ptr;
    if (pFVar4 != (FShaderPreprocessOutput *)0x0) {
      FShaderSource::Decompress(&pFVar4->PreprocessedSource);
      FShaderSource::Decompress(&pFVar4->OriginalPreprocessedSource);
    }
  }
  local_228 = this;
  `FShaderCompileJob::OnComplete'::__l2::<lambda_1>::operator()(&local_228,&this->PreprocessOutput);
  pFVar4 = (this->SecondaryPreprocessOutput).Ptr;
  if (pFVar4 != (FShaderPreprocessOutput *)0x0) {
    `FShaderCompileJob::OnComplete'::__l2::<lambda_1>::operator()(&local_228,pFVar4);
  }
  bVar7 = FShaderCompilerInput::DumpDebugInfoEnabled(this_00);
  pTVar6 = CVarDumpDebugInfoForCacheHits.Ref;
  if (bVar7) {
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), bVar7)) {
      lVar15 = 0;
    }
    if (pTVar6->ShadowedValue[lVar15] == false) {
      if ((this->_padding_ == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      cVar1 = *(char *)(this->_padding_ + 8);
      if (((*(char *)(this->_padding_ + 9) == '\0') && (cVar1 != '\x02')) &&
         (1 < (byte)(cVar1 - 9U))) goto LAB_145e6346e;
      bVar7 = false;
    }
    else {
LAB_145e6346e:
      bVar7 = true;
    }
    if ((plVar11 == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ShaderFormat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x11b6,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->PreprocessOutput).bSucceeded == false) {
      (**(code **)(*plVar11 + 0xa8))(plVar11,this_00,local_250);
      if (bVar7) {
LAB_145e6353c:
        if (local_250->bIsPipeline == false) {
          FShaderCompileWorkerUtil::DumpDebugCompileInput((FShaderCommonCompileJob *)this,local_250)
          ;
        }
      }
    }
    else if (bVar7) {
      if (((this->SecondaryPreprocessOutput).Ptr == (FShaderPreprocessOutput *)0x0) ||
         ((this->SecondaryOutput).Ptr == (FShaderCompilerOutput *)0x0)) {
        (**(code **)(*plVar11 + 0xa0))(plVar11,this_00,&this->PreprocessOutput);
      }
      else {
        (**(code **)(*plVar11 + 0x98))(plVar11,this_00,&this->PreprocessOutput);
      }
      goto LAB_145e6353c;
    }
  }
  if (local_210 == 0) goto LAB_145e636cb;
  if ((plVar11 == (longlong *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderFormat",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x11d5,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcVar5 = *(code **)(*plVar11 + 0x48);
  if (((this->Input).Environment.CompilerFlags.Data & 0x1000000000) == 0) {
    local_240 = 0;
    uVar16 = uVar16 | 8;
    local_1c8 = (void *)0x0;
LAB_145e63679:
    local_248.Data = (FScriptContainerElement *)0x0;
    local_23c = 0;
  }
  else {
    local_230 = (this->Input).DebugGroupName.Data.ArrayNum;
    lVar15 = (longlong)local_230;
    pFVar14 = (this->Input).DebugGroupName.Data.AllocatorInstance.Data;
    local_238.Data = (FScriptContainerElement *)0x0;
    if (local_230 == 0) {
      local_22c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_230,0,&local_238,local_230,&local_22c);
      memcpy(local_238.Data,pFVar14,lVar15 * 2);
    }
    iVar2 = local_230;
    _Src.Data = local_238.Data;
    uVar16 = uVar16 | 4;
    local_248.Data = (FScriptContainerElement *)0x0;
    local_240 = local_230;
    if (local_230 == 0) goto LAB_145e63679;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_230,0,&local_248,local_230,&local_23c);
    memcpy(local_248.Data,_Src.Data,(longlong)iVar2 * 2);
  }
  if (((uVar16 & 8) != 0) && (uVar16 = uVar16 & 0xfffffff7, local_1c8 != (void *)0x0)) {
    FMemory::Free(local_1c8);
  }
  if (((uVar16 & 4) != 0) && (local_238.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_238.Data);
  }
  (*pcVar5)(plVar11,&local_188,(this->Input).ShaderFormat,&local_248);
  if (local_248.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data);
  }
LAB_145e636cb:
  FCompositeBuffer::~FCompositeBuffer(&local_188.CompressedData);
  return;
}

// OnComplete @ 145e63710

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

void __thiscall FShaderCompileJob::OnComplete(FShaderCompileJob *this)

{
  return;
}

// SerializeArtifact @ 145e6c070

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

void __thiscall FShaderCompileJob::SerializeArtifact(FShaderCompileJob *this,FArchive *param_1)

{
  SerializeWorkerInput(this,param_1);
  SerializeWorkerOutputInner(this,param_1,true);
  return;
}

// SerializeOutput @ 145e6c2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FShaderCompileJob::SerializeOutput
          (FShaderCompileJob *this,FShaderCacheSerializeContext *param_1,int param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  uint uVar3;
  uint uVar4;
  FBufferOwner *pFVar5;
  code *pcVar6;
  FSharedBuffer FVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FShaderCodeResource *pFVar11;
  int *piVar12;
  FName FVar13;
  byte bVar14;
  int *piVar15;
  undefined1 auStack_d8 [32];
  FName local_b8 [2];
  FSHAHash local_a8 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  FSharedBuffer local_68;
  FSharedBuffer FStack_60;
  FCompositeBuffer local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_d8;
  (this->Output).bSerializingForCache = true;
  if ((param_1->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Internal\\ShaderSerialization.h"
                         ,0x38,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar14 = ((FArchive *)param_1->_padding_)->field_0x28;
  ::operator<<((FArchive *)param_1->_padding_,&this->Output);
  piVar12 = (int *)0x0;
  local_58.Segments.ArrayMax = 1;
  local_58.Segments.AllocatorInstance.SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  local_58.Segments.ArrayNum = 0;
  local_68.Owner.Owner = (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0
  ;
  FStack_60.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  if ((bVar14 & 4) != 0) {
    local_a8[0].Hash._0_8_ = *(undefined8 *)(this->Output).OutputHash.Hash;
    local_a8[0].Hash._8_8_ = *(undefined8 *)((this->Output).OutputHash.Hash + 8);
    local_a8[0].Hash._16_4_ = *(undefined4 *)((this->Output).OutputHash.Hash + 0x10);
    pFVar11 = FShaderCode::GetFinalizedResource
                        (&(this->Output).ShaderCode,
                         *(EShaderFrequency *)&(this->Output).Target.field0_0x0 &
                         (SF_NumFrequencies|SF_Pixel),local_a8);
    FSharedBuffer::operator=(&local_68,&pFVar11->Header);
    FSharedBuffer::operator=(&FStack_60,&pFVar11->Code);
    FCompositeBuffer::operator=(&local_58,&(pFVar11->Symbols).CompressedData);
  }
  cVar9 = (**(code **)(param_1->_padding_ + 8))(param_1);
  if ((cVar9 == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ctx.EnableCustomCodeSerialize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1157,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_68,param_2);
  pFVar11 = &(this->Output).ShaderCode.ShaderCodeResource;
  FSharedBuffer::operator=(&pFVar11->Header,&local_68);
  FSharedBuffer::operator=(&(this->Output).ShaderCode.ShaderCodeResource.Code,&FStack_60);
  FCompositeBuffer::operator=
            (&(this->Output).ShaderCode.ShaderCodeResource.Symbols.CompressedData,&local_58);
  (this->Output).ShaderCode.OptionalDataSize = -1;
  iVar10 = FShaderCodeResource::GetShaderCodeSize(pFVar11);
  (this->Output).ShaderCode.ShaderCodeSize = iVar10;
  if (((pFVar11->Header).Owner.Owner == (FBufferOwner *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x4c5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pFVar11->Header).Owner.Owner;
  piVar15 = piVar12;
  if (pFVar5 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar5->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    }
    piVar15 = pFVar5->Data;
  }
  pFVar5 = (this->Output).ShaderCode.ShaderCodeResource.Code.Owner.Owner;
  iVar10 = *piVar15;
  if (pFVar5 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar5->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar5->_padding_ + 8))(pFVar5);
    }
    piVar12 = (int *)pFVar5->Size;
  }
  if ((int *)(longlong)iVar10 == piVar12) {
    iVar10 = 0;
  }
  (this->Output).ShaderCode.UncompressedSize = iVar10;
  FVar13 = GetShaderCompressionFormat();
  local_b8[0].ComparisonIndex.Value = 0;
  local_b8[0].Number = 0;
  (this->Output).ShaderCode.CompressionFormat = *(FName *)FVar13;
  GetShaderCompressionOodleSettings
            (&(this->Output).ShaderCode.OodleCompressor,&(this->Output).ShaderCode.OodleLevel,
             local_b8);
  if ((this->Output).bSucceeded != false) {
    local_70 = 0;
    local_80 = 0;
    uStack_78 = 0;
    if ((((*(longlong *)(this->Output).OutputHash.Hash == 0) &&
         (*(longlong *)((this->Output).OutputHash.Hash + 8) == 0)) &&
        (*(int *)((this->Output).OutputHash.Hash + 0x10) == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Output.bSucceeded || Output.OutputHash != FSHAHash()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                           ,0x115f,L"Successful compile job does not have an OutputHash generated.")
       , bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = (this->Output).Target.field0_0x0.Packed;
  uVar4 = (this->Input).Target.field0_0x0.Packed;
  if (((((uVar3 ^ uVar4) & 0xf) != 0) || (((uVar4 ^ uVar3) & 0xffff0) != 0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Output.Target == Input.Target",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                         ,0x1160,
                         L"Output FShaderTarget does not match the input struct; incorrect results associated with job?"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((bVar14 & 1) != 0) {
    bVar14 = (byte)this->_padding_ | 1;
    *(byte *)&this->_padding_ = ((this->Output).bSucceeded * '\x02' ^ bVar14) & 2 ^ bVar14;
  }
  FCompositeBuffer::~FCompositeBuffer(&local_58);
  FVar7.Owner.Owner = FStack_60.Owner.Owner;
  if (FStack_60.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)FStack_60.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)FStack_60.Owner.Owner + 0x10))(FStack_60.Owner.Owner);
      *(void **)((longlong)FVar7.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar7.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar7.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar7.Owner.Owner)(FVar7.Owner.Owner,1);
      }
    }
  }
  FVar7.Owner.Owner = local_68.Owner.Owner;
  if (local_68.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_68.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_68.Owner.Owner + 0x10))(local_68.Owner.Owner);
      *(void **)((longlong)FVar7.Owner.Owner + 8) = (void *)0x0;
      *(ulong64 *)((longlong)FVar7.Owner.Owner + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)FVar7.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)FVar7.Owner.Owner)(FVar7.Owner.Owner,1);
      }
    }
  }
  return;
}

// SerializeOutput @ 145e6c6d0

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

void __thiscall
FShaderCompileJob::SerializeOutput(FShaderCompileJob *this,FShaderCacheSerializeContext *param_1)

{
  SerializeOutput(this,param_1,0);
  return;
}

// SerializeWorkerInput @ 145e6cf20

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

void __thiscall FShaderCompileJob::SerializeWorkerInput(FShaderCompileJob *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  TUniquePtr<FShaderPreprocessOutput,TDefaultDelete<FShaderPreprocessOutput>_> *pTVar3;
  uint uVar4;
  ulonglong *puVar5;
  FShaderPreprocessOutput *pFVar6;
  FShaderPreprocessOutput *this_00;
  bool bVar7;
  uint local_res8 [2];
  longlong local_28 [2];
  
  ::operator<<(param_1,&this->Input);
  ::operator<<(param_1,&this->PreprocessOutput);
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  pTVar3 = &this->SecondaryPreprocessOutput;
  puVar1 = &param_1->field_0x28;
  bVar7 = pTVar3->Ptr != (FShaderPreprocessOutput *)0x0;
  this_00 = (FShaderPreprocessOutput *)0x0;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_res8[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res8[0] = (uint)(pTVar3->Ptr != (FShaderPreprocessOutput *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res8[0];
    if ((*puVar1 & 1) != 0) goto LAB_145e6cfd4;
  }
  else {
    uVar4 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
LAB_145e6cfd4:
    bVar7 = uVar4 != 0;
  }
  if (!bVar7) {
    return;
  }
  if ((*puVar1 & 1) != 0) {
    pFVar6 = ::operator_new(0xd0);
    if (pFVar6 != (FShaderPreprocessOutput *)0x0) {
      this_00 = FShaderPreprocessOutput::FShaderPreprocessOutput(pFVar6);
    }
    if (pTVar3 == (TUniquePtr<FShaderPreprocessOutput,TDefaultDelete<FShaderPreprocessOutput>_> *)
                  local_28) {
      if (this_00 == (FShaderPreprocessOutput *)0x0) goto LAB_145e6d03d;
      FShaderPreprocessOutput::~FShaderPreprocessOutput(this_00);
    }
    else {
      pFVar6 = pTVar3->Ptr;
      pTVar3->Ptr = this_00;
      if (pFVar6 == (FShaderPreprocessOutput *)0x0) goto LAB_145e6d03d;
      FShaderPreprocessOutput::~FShaderPreprocessOutput(pFVar6);
      this_00 = pFVar6;
    }
    ::operator_delete(this_00,0xd0);
  }
LAB_145e6d03d:
  ::operator<<(param_1,pTVar3->Ptr);
  return;
}

// SerializeWorkerInputNoSource @ 145e6d060

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

void __thiscall
FShaderCompileJob::SerializeWorkerInputNoSource(FShaderCompileJob *this,FArchive *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FShaderPreprocessOutput *pFVar12;
  FScriptContainerElement *pFVar13;
  FShaderPreprocessOutput *pFVar14;
  FShaderSource *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  FShaderSource local_e8;
  FShaderSource local_c0;
  undefined8 local_98 [2];
  undefined8 local_88 [3];
  
  pFVar14 = &this->PreprocessOutput;
  pFVar19 = (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data;
  pTVar1 = &(this->PreprocessOutput).PreprocessedSource.SourceCompressed;
  (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = (this->PreprocessOutput).PreprocessedSource.Source.ArrayNum;
  iVar3 = (this->PreprocessOutput).PreprocessedSource.Source.ArrayMax;
  (this->PreprocessOutput).PreprocessedSource.Source.ArrayNum = 0;
  (this->PreprocessOutput).PreprocessedSource.Source.ArrayMax = 0;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayNum;
  iVar5 = (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayMax;
  (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayNum = 0;
  (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayMax = 0;
  pFVar12 = (this->SecondaryPreprocessOutput).Ptr;
  iVar6 = (this->PreprocessOutput).PreprocessedSource.DecompressedCharCount;
  bVar20 = pFVar12 == (FShaderPreprocessOutput *)0x0;
  if (bVar20) {
    pFVar15 = FShaderSource::FShaderSource(&local_c0);
    pFVar17 = (pFVar15->Source).AllocatorInstance.Data;
  }
  else {
    pFVar17 = (pFVar12->PreprocessedSource).Source.AllocatorInstance.Data;
    (pFVar12->PreprocessedSource).Source.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Source.ArrayNum = (pFVar12->PreprocessedSource).Source.ArrayNum;
    local_e8.Source.ArrayMax = (pFVar12->PreprocessedSource).Source.ArrayMax;
    (pFVar12->PreprocessedSource).Source.ArrayNum = 0;
    (pFVar12->PreprocessedSource).Source.ArrayMax = 0;
    local_e8.SourceCompressed.AllocatorInstance.Data =
         (pFVar12->PreprocessedSource).SourceCompressed.AllocatorInstance.Data;
    (pFVar12->PreprocessedSource).SourceCompressed.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_e8.SourceCompressed.ArrayNum = (pFVar12->PreprocessedSource).SourceCompressed.ArrayNum;
    local_e8.SourceCompressed.ArrayMax = (pFVar12->PreprocessedSource).SourceCompressed.ArrayMax;
    (pFVar12->PreprocessedSource).SourceCompressed.ArrayNum = 0;
    (pFVar12->PreprocessedSource).SourceCompressed.ArrayMax = 0;
    local_e8.DecompressedCharCount = (pFVar12->PreprocessedSource).DecompressedCharCount;
    pFVar15 = &local_e8;
  }
  (pFVar15->Source).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = (pFVar15->Source).ArrayNum;
  iVar8 = (pFVar15->Source).ArrayMax;
  (pFVar15->Source).ArrayNum = 0;
  (pFVar15->Source).ArrayMax = 0;
  pFVar16 = (pFVar15->SourceCompressed).AllocatorInstance.Data;
  (pFVar15->SourceCompressed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = (pFVar15->SourceCompressed).ArrayNum;
  iVar10 = (pFVar15->SourceCompressed).ArrayMax;
  (pFVar15->SourceCompressed).ArrayNum = 0;
  (pFVar15->SourceCompressed).ArrayMax = 0;
  iVar11 = pFVar15->DecompressedCharCount;
  if (bVar20) {
    if (local_c0.SourceCompressed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.SourceCompressed.AllocatorInstance.Data);
    }
    if (local_c0.Source.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Source.AllocatorInstance.Data);
    }
  }
  if (!bVar20) {
    if (local_e8.SourceCompressed.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.SourceCompressed.AllocatorInstance.Data);
    }
    if (local_e8.Source.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Source.AllocatorInstance.Data);
    }
  }
  SerializeWorkerInput(this,param_1);
  if (pFVar14 != (FShaderPreprocessOutput *)local_98) {
    pFVar13 = (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data = pFVar19;
    pFVar19 = (FScriptContainerElement *)0x0;
    (this->PreprocessOutput).PreprocessedSource.Source.ArrayNum = iVar2;
    (this->PreprocessOutput).PreprocessedSource.Source.ArrayMax = iVar3;
  }
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)local_88) {
    pFVar13 = (pTVar1->AllocatorInstance).Data;
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
    (pTVar1->AllocatorInstance).Data = pFVar18;
    pFVar18 = (FScriptContainerElement *)0x0;
    (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayNum = iVar4;
    (this->PreprocessOutput).PreprocessedSource.SourceCompressed.ArrayMax = iVar5;
  }
  (this->PreprocessOutput).PreprocessedSource.DecompressedCharCount = iVar6;
  if (pFVar12 != (FShaderPreprocessOutput *)0x0) {
    pFVar14 = (this->SecondaryPreprocessOutput).Ptr;
    if (pFVar14 != (FShaderPreprocessOutput *)&stack0xffffffffffffff90) {
      pFVar13 = (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pFVar14->PreprocessedSource).Source.AllocatorInstance.Data = pFVar17;
      pFVar17 = (FScriptContainerElement *)0x0;
      (pFVar14->PreprocessedSource).Source.ArrayNum = iVar7;
      (pFVar14->PreprocessedSource).Source.ArrayMax = iVar8;
    }
    pTVar1 = &(pFVar14->PreprocessedSource).SourceCompressed;
    if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&stack0xffffffffffffffa0) {
      pFVar13 = (pTVar1->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pTVar1->AllocatorInstance).Data = pFVar16;
      pFVar16 = (FScriptContainerElement *)0x0;
      (pFVar14->PreprocessedSource).SourceCompressed.ArrayNum = iVar9;
      (pFVar14->PreprocessedSource).SourceCompressed.ArrayMax = iVar10;
    }
    (pFVar14->PreprocessedSource).DecompressedCharCount = iVar11;
  }
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  if (pFVar17 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar17);
  }
  if (pFVar18 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar18);
  }
  if (pFVar19 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar19);
  }
  return;
}

// SerializeWorkerOutput @ 145e6d310

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

void __thiscall FShaderCompileJob::SerializeWorkerOutput(FShaderCompileJob *this,FArchive *param_1)

{
  SerializeWorkerOutputInner(this,param_1,false);
  return;
}

// SerializeWorkerOutputInner @ 145e6d320

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

void __thiscall
FShaderCompileJob::SerializeWorkerOutputInner
          (FShaderCompileJob *this,FArchive *param_1,bool param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  TUniquePtr<FShaderCompilerOutput,TDefaultDelete<FShaderCompilerOutput>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  FShaderCompilerOutput *this_00;
  bool bVar7;
  int iVar8;
  FShaderCompilerOutput *pFVar9;
  bool bVar10;
  uint local_res18 [2];
  longlong local_38 [2];
  
  ::operator<<(param_1,&this->Output);
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  pTVar3 = &this->SecondaryOutput;
  puVar1 = &param_1->field_0x28;
  bVar10 = pTVar3->Ptr != (FShaderCompilerOutput *)0x0;
  puVar2 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar2) {
    local_res18[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res18[0] = (uint)(pTVar3->Ptr != (FShaderCompilerOutput *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res18[0];
    if ((*puVar1 & 1) != 0) goto LAB_145e6d3d1;
  }
  else {
    uVar4 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar2;
LAB_145e6d3d1:
    bVar10 = uVar4 != 0;
  }
  if (((!param_2) &&
      (iVar8 = memcmp(&(this->Output).ValidateInputHash,&(this->Input).Hash,0x20), iVar8 != 0)) &&
     (bVar7 = `FShaderCompileJob::SerializeWorkerOutputInner'::__l6::<lambda_1>::operator()
                        (local_res18), !bVar7)) {
    DumpShaderCompileJobArtifact(this,L"ShaderCompileJob-InputHashMismatch");
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
  (this->Output).ValidateInputHash.Hash[0] = '\0';
  (this->Output).ValidateInputHash.Hash[1] = '\0';
  (this->Output).ValidateInputHash.Hash[2] = '\0';
  (this->Output).ValidateInputHash.Hash[3] = '\0';
  (this->Output).ValidateInputHash.Hash[4] = '\0';
  (this->Output).ValidateInputHash.Hash[5] = '\0';
  (this->Output).ValidateInputHash.Hash[6] = '\0';
  (this->Output).ValidateInputHash.Hash[7] = '\0';
  pFVar9 = &this->Output;
  (pFVar9->ValidateInputHash).Hash[8] = '\0';
  (pFVar9->ValidateInputHash).Hash[9] = '\0';
  (pFVar9->ValidateInputHash).Hash[10] = '\0';
  (pFVar9->ValidateInputHash).Hash[0xb] = '\0';
  (pFVar9->ValidateInputHash).Hash[0xc] = '\0';
  (pFVar9->ValidateInputHash).Hash[0xd] = '\0';
  (pFVar9->ValidateInputHash).Hash[0xe] = '\0';
  (pFVar9->ValidateInputHash).Hash[0xf] = '\0';
  pFVar9 = &this->Output;
  (pFVar9->ValidateInputHash).Hash[0x10] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x11] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x12] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x13] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x14] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x15] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x16] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x17] = '\0';
  pFVar9 = &this->Output;
  (pFVar9->ValidateInputHash).Hash[0x18] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x19] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1a] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1b] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1c] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1d] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1e] = '\0';
  (pFVar9->ValidateInputHash).Hash[0x1f] = '\0';
  if (bVar10) {
    if ((*puVar1 & 1) != 0) {
      pFVar9 = ::operator_new(0x1c8);
      if (pFVar9 == (FShaderCompilerOutput *)0x0) {
        pFVar9 = (FShaderCompilerOutput *)0x0;
      }
      else {
        pFVar9 = FShaderCompilerOutput::FShaderCompilerOutput(pFVar9);
      }
      if (pTVar3 == (TUniquePtr<FShaderCompilerOutput,TDefaultDelete<FShaderCompilerOutput>_> *)
                    local_38) {
        if (pFVar9 != (FShaderCompilerOutput *)0x0) {
          FShaderCompilerOutput::~FShaderCompilerOutput(pFVar9);
          goto LAB_145e6d497;
        }
      }
      else {
        this_00 = pTVar3->Ptr;
        pTVar3->Ptr = pFVar9;
        if (this_00 != (FShaderCompilerOutput *)0x0) {
          FShaderCompilerOutput::~FShaderCompilerOutput(this_00);
          pFVar9 = this_00;
LAB_145e6d497:
          ::operator_delete(pFVar9,0x1c8);
        }
      }
    }
    ::operator<<(param_1,pTVar3->Ptr);
    if (((!param_2) &&
        (iVar8 = memcmp(&pTVar3->Ptr->ValidateInputHash,&(this->Input).Hash,0x20), iVar8 != 0)) &&
       (bVar7 = `FShaderCompileJob::SerializeWorkerOutputInner'::__l36::<lambda_2>::operator()
                          (local_res18), !bVar7)) {
      DumpShaderCompileJobArtifact(this,L"ShaderCompileJob-SecondaryOutput-InputHashMismatch");
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar9 = pTVar3->Ptr;
    (pFVar9->ValidateInputHash).Hash[0] = '\0';
    (pFVar9->ValidateInputHash).Hash[1] = '\0';
    (pFVar9->ValidateInputHash).Hash[2] = '\0';
    (pFVar9->ValidateInputHash).Hash[3] = '\0';
    (pFVar9->ValidateInputHash).Hash[4] = '\0';
    (pFVar9->ValidateInputHash).Hash[5] = '\0';
    (pFVar9->ValidateInputHash).Hash[6] = '\0';
    (pFVar9->ValidateInputHash).Hash[7] = '\0';
    (pFVar9->ValidateInputHash).Hash[8] = '\0';
    (pFVar9->ValidateInputHash).Hash[9] = '\0';
    (pFVar9->ValidateInputHash).Hash[10] = '\0';
    (pFVar9->ValidateInputHash).Hash[0xb] = '\0';
    (pFVar9->ValidateInputHash).Hash[0xc] = '\0';
    (pFVar9->ValidateInputHash).Hash[0xd] = '\0';
    (pFVar9->ValidateInputHash).Hash[0xe] = '\0';
    (pFVar9->ValidateInputHash).Hash[0xf] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x10] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x11] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x12] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x13] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x14] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x15] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x16] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x17] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x18] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x19] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1a] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1b] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1c] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1d] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1e] = '\0';
    (pFVar9->ValidateInputHash).Hash[0x1f] = '\0';
  }
  puVar6 = *(ulonglong **)&param_1->field_0x8;
  bVar7 = (bool)((byte)this->_padding_ >> 1 & 1);
  puVar2 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar2) {
    local_res18[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_res18[0] = (uint)bVar7;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    if (1 < local_res18[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar4 = local_res18[0];
    if ((*puVar1 & 1) == 0) goto LAB_145e6d587;
  }
  else {
    uVar4 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar2;
  }
  bVar7 = uVar4 != 0;
LAB_145e6d587:
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfd;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | bVar7 * '\x02';
  if (!param_2) {
    uVar4 = (this->Output).Target.field0_0x0.Packed;
    uVar5 = (this->Input).Target.field0_0x0.Packed;
    if (((((uVar4 ^ uVar5) & 0xf) != 0) || (((uVar4 ^ uVar5) & 0xffff0) != 0)) &&
       (bVar7 = `FShaderCompileJob::SerializeWorkerOutputInner'::__l60::<lambda_3>::operator()
                          (local_res18), !bVar7)) {
      DumpShaderCompileJobArtifact(this,L"ShaderCompileJob-ShaderTargetMismatch");
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    if (bVar10) {
      uVar4 = (this->Input).Target.field0_0x0.Packed;
      uVar5 = (pTVar3->Ptr->Target).field0_0x0.Packed;
      if (((((uVar5 ^ uVar4) & 0xf) != 0) || (((uVar5 ^ uVar4) & 0xffff0) != 0)) &&
         (bVar10 = `FShaderCompileJob::SerializeWorkerOutputInner'::__l84::<lambda_4>::operator()
                             (local_res18), !bVar10)) {
        DumpShaderCompileJobArtifact(this,L"ShaderCompileJob-SecondaryOutput-ShaderTargetMismatch");
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
  }
  return;
}

// operator() @ 1504dd850

bool __thiscall
`FShaderCompileJob::SerializeWorkerOutputInner'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2629161060560540152>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2629161060560540152>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dd940

bool __thiscall
`FShaderCompileJob::SerializeWorkerOutputInner'::__l36::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2629161060560540170>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2629161060560540170>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dd980

bool __thiscall
`FShaderCompileJob::SerializeWorkerOutputInner'::__l60::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2629161060560540186>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2629161060560540186>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dd9c0

bool __thiscall
`FShaderCompileJob::SerializeWorkerOutputInner'::__l84::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2629161060560540193>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2629161060560540193>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

