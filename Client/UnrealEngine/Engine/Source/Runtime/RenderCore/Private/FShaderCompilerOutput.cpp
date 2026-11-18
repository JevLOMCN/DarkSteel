// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 7

// FShaderCompilerOutput @ 145e41870

/* WARNING: Type propagation algorithm not settling */

FShaderCompilerOutput * __thiscall
FShaderCompilerOutput::FShaderCompilerOutput(FShaderCompilerOutput *this)

{
  *(undefined8 *)&(this->ParameterMap).ParameterMap = 0;
  *(undefined8 *)&(this->ParameterMap).ParameterMap.field_0x8 = 0;
  *(undefined8 *)&(this->ParameterMap).ParameterMap.field_0x20 = 0;
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x28 = 0;
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x34 = 0;
  *(undefined8 *)&(this->ParameterMap).ParameterMap.field_0x40 = 0;
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x48 = 0;
  (this->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Errors).ArrayNum = 0;
  (this->Errors).ArrayMax = 0;
  (this->Target).field0_0x0.Packed = 0;
  (this->ShaderCode).ShaderCodeWithOptionalData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ShaderCode).ShaderCodeWithOptionalData.ArrayNum = 0;
  (this->ShaderCode).ShaderCodeWithOptionalData.ArrayMax = 0;
  (this->ShaderCode).SymbolData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderCode).SymbolData.ArrayNum = 0;
  (this->ShaderCode).SymbolData.ArrayMax = 0;
  (this->ShaderCode).ShaderCodeResource.Header.Owner.Owner = (FBufferOwner *)0x0;
  (this->ShaderCode).ShaderCodeResource.Code.Owner.Owner = (FBufferOwner *)0x0;
  (this->ShaderCode).ShaderCodeResource.Symbols.CompressedData.Segments.AllocatorInstance.
  SecondaryData = (ForElementType<FSharedBuffer>)0x0;
  (this->ShaderCode).OptionalDataSize = 0;
  (this->ShaderCode).ShaderCodeResource.Symbols.CompressedData.Segments.ArrayNum = 0;
  *(undefined8 *)&(this->ShaderCode).ShaderCodeResource.Symbols.CompressedData.Segments.ArrayMax = 1
  ;
  (this->ShaderCode).CompressionFormat.ComparisonIndex = 0;
  (this->ShaderCode).CompressionFormat.Number = 0;
  (this->ShaderCode).OodleCompressor = NotSet;
  (this->ShaderCode).OodleLevel = None;
  (this->ShaderCode).ShaderCodeSize = 0;
  (this->OutputHash).Hash[0] = '\0';
  (this->OutputHash).Hash[1] = '\0';
  (this->OutputHash).Hash[2] = '\0';
  (this->OutputHash).Hash[3] = '\0';
  (this->OutputHash).Hash[4] = '\0';
  (this->OutputHash).Hash[5] = '\0';
  (this->OutputHash).Hash[6] = '\0';
  (this->OutputHash).Hash[7] = '\0';
  (this->OutputHash).Hash[8] = '\0';
  (this->OutputHash).Hash[9] = '\0';
  (this->OutputHash).Hash[10] = '\0';
  (this->OutputHash).Hash[0xb] = '\0';
  (this->OutputHash).Hash[0xc] = '\0';
  (this->OutputHash).Hash[0xd] = '\0';
  (this->OutputHash).Hash[0xe] = '\0';
  (this->OutputHash).Hash[0xf] = '\0';
  (this->OutputHash).Hash[0x10] = '\0';
  (this->OutputHash).Hash[0x11] = '\0';
  (this->OutputHash).Hash[0x12] = '\0';
  (this->OutputHash).Hash[0x13] = '\0';
  (this->ValidateInputHash).Hash[0] = '\0';
  (this->ValidateInputHash).Hash[1] = '\0';
  (this->ValidateInputHash).Hash[2] = '\0';
  (this->ValidateInputHash).Hash[3] = '\0';
  (this->ValidateInputHash).Hash[4] = '\0';
  (this->ValidateInputHash).Hash[5] = '\0';
  (this->ValidateInputHash).Hash[6] = '\0';
  (this->ValidateInputHash).Hash[7] = '\0';
  (this->ValidateInputHash).Hash[8] = '\0';
  (this->ValidateInputHash).Hash[9] = '\0';
  (this->ValidateInputHash).Hash[10] = '\0';
  (this->ValidateInputHash).Hash[0xb] = '\0';
  (this->ValidateInputHash).Hash[0xc] = '\0';
  (this->ValidateInputHash).Hash[0xd] = '\0';
  (this->ValidateInputHash).Hash[0xe] = '\0';
  (this->ValidateInputHash).Hash[0xf] = '\0';
  (this->ValidateInputHash).Hash[0x10] = '\0';
  (this->ValidateInputHash).Hash[0x11] = '\0';
  (this->ValidateInputHash).Hash[0x12] = '\0';
  (this->ValidateInputHash).Hash[0x13] = '\0';
  (this->ValidateInputHash).Hash[0x14] = '\0';
  (this->ValidateInputHash).Hash[0x15] = '\0';
  (this->ValidateInputHash).Hash[0x16] = '\0';
  (this->ValidateInputHash).Hash[0x17] = '\0';
  (this->ValidateInputHash).Hash[0x18] = '\0';
  (this->ValidateInputHash).Hash[0x19] = '\0';
  (this->ValidateInputHash).Hash[0x1a] = '\0';
  (this->ValidateInputHash).Hash[0x1b] = '\0';
  (this->ValidateInputHash).Hash[0x1c] = '\0';
  (this->ValidateInputHash).Hash[0x1d] = '\0';
  (this->ValidateInputHash).Hash[0x1e] = '\0';
  (this->ValidateInputHash).Hash[0x1f] = '\0';
  this->bSucceeded = false;
  this->bSupportsQueryingUsedAttributes = false;
  this->bSerializingForCache = false;
  this->NumInstructions = 0;
  this->NumTextureSamplers = 0;
  this->CompileTime = 0.0;
  this->PreprocessTime = 0.0;
  (this->UsedAttributes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedAttributes).ArrayNum = 0;
  (this->UsedAttributes).ArrayMax = 0;
  (this->ParametersStrideToValidate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParametersStrideToValidate).ArrayNum = 0;
  (this->ParametersStrideToValidate).ArrayMax = 0;
  (this->ParametersSRVTypeToValidate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParametersSRVTypeToValidate).ArrayNum = 0;
  (this->ParametersSRVTypeToValidate).ArrayMax = 0;
  (this->ParametersUAVTypeToValidate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParametersUAVTypeToValidate).ArrayNum = 0;
  (this->ParametersUAVTypeToValidate).ArrayMax = 0;
  (this->ParametersUBSizeToValidate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParametersUBSizeToValidate).ArrayNum = 0;
  (this->ParametersUBSizeToValidate).ArrayMax = 0;
  (this->ShaderDiagnosticDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderDiagnosticDatas).ArrayNum = 0;
  (this->ShaderDiagnosticDatas).ArrayMax = 0;
  (this->ModifiedShaderSource).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifiedShaderSource).Data.ArrayNum = 0;
  (this->ModifiedShaderSource).Data.ArrayMax = 0;
  (this->ModifiedEntryPointName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifiedEntryPointName).Data.ArrayNum = 0;
  (this->ModifiedEntryPointName).Data.ArrayMax = 0;
  (this->PlatformDebugData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlatformDebugData).ArrayNum = 0;
  (this->PlatformDebugData).ArrayMax = 0;
  (this->ShaderStatistics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderStatistics).ArrayNum = 0;
  (this->ShaderStatistics).ArrayMax = 0;
  return this;
}

// ~FShaderCompilerOutput @ 145e43bb0

void __thiscall FShaderCompilerOutput::~FShaderCompilerOutput(FShaderCompilerOutput *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FGenericShaderStat,int>
            ((FGenericShaderStat *)(this->ShaderStatistics).AllocatorInstance.Data,
             (this->ShaderStatistics).ArrayNum);
  pFVar1 = (this->ShaderStatistics).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlatformDebugData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModifiedEntryPointName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModifiedShaderSource).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FShaderDiagnosticData,int>
            ((FShaderDiagnosticData *)(this->ShaderDiagnosticDatas).AllocatorInstance.Data,
             (this->ShaderDiagnosticDatas).ArrayNum);
  pFVar1 = (this->ShaderDiagnosticDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParametersUBSizeToValidate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParametersUAVTypeToValidate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParametersSRVTypeToValidate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParametersStrideToValidate).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->UsedAttributes).AllocatorInstance.Data,
             (this->UsedAttributes).ArrayNum);
  pFVar1 = (this->UsedAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCompositeBuffer::~FCompositeBuffer(&(this->ShaderCode).ShaderCodeResource.Symbols.CompressedData)
  ;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            (&(this->ShaderCode).ShaderCodeResource.Code.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)
             &(this->ShaderCode).ShaderCodeResource);
  pFVar1 = (this->ShaderCode).SymbolData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderCode).ShaderCodeWithOptionalData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FShaderCompilerError,int>
            ((FShaderCompilerError *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar1 = (this->Errors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ParameterMap).ParameterMap.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ParameterMap).ParameterMap.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FParameterAllocation>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator= @ 145e45660

FShaderCompilerOutput * __thiscall
FShaderCompilerOutput::operator=(FShaderCompilerOutput *this,FShaderCompilerOutput *param_1)

{
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FGenericShaderStat,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FShaderCompilerError *pFVar7;
  FScriptContainerElement *pFVar8;
  FGenericShaderStat *pFVar9;
  undefined8 uVar10;
  
  TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                       *)param_1);
  pTVar1 = &this->Errors;
  if (pTVar1 != &param_1->Errors) {
    DestructItems<FShaderCompilerError,int>
              ((FShaderCompilerError *)(pTVar1->AllocatorInstance).Data,(this->Errors).ArrayNum);
    iVar6 = (param_1->Errors).ArrayNum;
    piVar2 = &(this->Errors).ArrayMax;
    pFVar7 = (FShaderCompilerError *)(param_1->Errors).AllocatorInstance.Data;
    (this->Errors).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar6,*piVar2,&pTVar1->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FShaderCompilerError,FShaderCompilerError,int>
                ((pTVar1->AllocatorInstance).Data,pFVar7,iVar6);
    }
  }
  (this->Target).field0_0x0 = (param_1->Target).field0_0x0;
  (this->ShaderCode).OptionalDataSize = (param_1->ShaderCode).OptionalDataSize;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ShaderCode).ShaderCodeWithOptionalData,
             &(param_1->ShaderCode).ShaderCodeWithOptionalData);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ShaderCode).SymbolData,&(param_1->ShaderCode).SymbolData);
  FSharedBuffer::operator=
            (&(this->ShaderCode).ShaderCodeResource.Header,
             &(param_1->ShaderCode).ShaderCodeResource.Header);
  FSharedBuffer::operator=
            (&(this->ShaderCode).ShaderCodeResource.Code,
             &(param_1->ShaderCode).ShaderCodeResource.Code);
  FCompositeBuffer::operator=
            (&(this->ShaderCode).ShaderCodeResource.Symbols.CompressedData,
             &(param_1->ShaderCode).ShaderCodeResource.Symbols.CompressedData);
  (this->ShaderCode).UncompressedSize = (param_1->ShaderCode).UncompressedSize;
  (this->ShaderCode).CompressionFormat = (param_1->ShaderCode).CompressionFormat;
  (this->ShaderCode).OodleCompressor = (param_1->ShaderCode).OodleCompressor;
  (this->ShaderCode).OodleLevel = (param_1->ShaderCode).OodleLevel;
  (this->ShaderCode).ShaderCodeSize = (param_1->ShaderCode).ShaderCodeSize;
  uVar10 = *(undefined8 *)((param_1->OutputHash).Hash + 8);
  *(undefined8 *)(this->OutputHash).Hash = *(undefined8 *)(param_1->OutputHash).Hash;
  *(undefined8 *)((this->OutputHash).Hash + 8) = uVar10;
  *(undefined4 *)((this->OutputHash).Hash + 0x10) =
       *(undefined4 *)((param_1->OutputHash).Hash + 0x10);
  uVar10 = *(undefined8 *)((param_1->ValidateInputHash).Hash + 8);
  *(undefined8 *)(this->ValidateInputHash).Hash = *(undefined8 *)(param_1->ValidateInputHash).Hash;
  *(undefined8 *)((this->ValidateInputHash).Hash + 8) = uVar10;
  uVar10 = *(undefined8 *)((param_1->ValidateInputHash).Hash + 0x18);
  *(undefined8 *)((this->ValidateInputHash).Hash + 0x10) =
       *(undefined8 *)((param_1->ValidateInputHash).Hash + 0x10);
  *(undefined8 *)((this->ValidateInputHash).Hash + 0x18) = uVar10;
  this->NumInstructions = param_1->NumInstructions;
  this->NumTextureSamplers = param_1->NumTextureSamplers;
  this->CompileTime = param_1->CompileTime;
  this->PreprocessTime = param_1->PreprocessTime;
  this->bSucceeded = param_1->bSucceeded;
  this->bSupportsQueryingUsedAttributes = param_1->bSupportsQueryingUsedAttributes;
  this->bSerializeModifiedSource = param_1->bSerializeModifiedSource;
  this->bSerializingForCache = param_1->bSerializingForCache;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&this->UsedAttributes,&param_1->UsedAttributes);
  pTVar3 = &this->ParametersStrideToValidate;
  if (pTVar3 != &param_1->ParametersStrideToValidate) {
    iVar6 = (param_1->ParametersStrideToValidate).ArrayNum;
    piVar2 = &(this->ParametersStrideToValidate).ArrayMax;
    pFVar8 = (param_1->ParametersStrideToValidate).AllocatorInstance.Data;
    (this->ParametersStrideToValidate).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,2,iVar6,*piVar2,&pTVar3->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 2);
      }
    }
  }
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParametersSRVTypeToValidate,&param_1->ParametersSRVTypeToValidate);
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>::operator=
            (&this->ParametersUAVTypeToValidate,&param_1->ParametersUAVTypeToValidate);
  pTVar4 = &this->ParametersUBSizeToValidate;
  if (pTVar4 != &param_1->ParametersUBSizeToValidate) {
    iVar6 = (param_1->ParametersUBSizeToValidate).ArrayNum;
    piVar2 = &(this->ParametersUBSizeToValidate).ArrayMax;
    pFVar8 = (param_1->ParametersUBSizeToValidate).AllocatorInstance.Data;
    (this->ParametersUBSizeToValidate).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,*piVar2,&pTVar4->AllocatorInstance,iVar6,piVar2);
      if (iVar6 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,pFVar8,(longlong)iVar6 << 3);
      }
    }
  }
  TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>::operator=
            (&this->ShaderDiagnosticDatas,&param_1->ShaderDiagnosticDatas);
  ::FString::operator=(&this->ModifiedShaderSource,&param_1->ModifiedShaderSource);
  ::FString::operator=(&this->ModifiedEntryPointName,&param_1->ModifiedEntryPointName);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->PlatformDebugData,&param_1->PlatformDebugData);
  pTVar5 = &this->ShaderStatistics;
  if (pTVar5 != &param_1->ShaderStatistics) {
    DestructItems<FGenericShaderStat,int>
              ((FGenericShaderStat *)(pTVar5->AllocatorInstance).Data,
               (this->ShaderStatistics).ArrayNum);
    iVar6 = (param_1->ShaderStatistics).ArrayNum;
    piVar2 = &(this->ShaderStatistics).ArrayMax;
    pFVar9 = (FGenericShaderStat *)(param_1->ShaderStatistics).AllocatorInstance.Data;
    (this->ShaderStatistics).ArrayNum = iVar6;
    if ((iVar6 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar6,*piVar2,&pTVar5->AllocatorInstance,iVar6,piVar2);
      ConstructItems<FGenericShaderStat,FGenericShaderStat,int>
                ((pTVar5->AllocatorInstance).Data,pFVar9,iVar6);
    }
  }
  return this;
}

// CompressOutput @ 145e4f170

void __thiscall
FShaderCompilerOutput::CompressOutput
          (FShaderCompilerOutput *this,FName param_1,ECompressor param_2,ECompressionLevel param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (((*(longlong *)(this->OutputHash).Hash == 0) &&
      (*(longlong *)((this->OutputHash).Hash + 8) == 0)) &&
     (*(int *)((this->OutputHash).Hash + 0x10) == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputHash != FSHAHash()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x627,L"Output hash must be generated before compressing the shader code.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FName)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCompressionFormat != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x628,L"Compression format should be valid");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FShaderCode::Compress(&this->ShaderCode,param_1,param_2,param_3);
  return;
}

// GenerateOutputHash @ 145e55e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FShaderCompilerOutput::GenerateOutputHash(FShaderCompilerOutput *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auStack_f8 [32];
  FCompressedBuffer local_d8;
  TArrayView<unsigned_char_const_,int> local_c0;
  FSHA1 local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FSHA1::FSHA1(&local_a8);
  local_d8.CompressedData.Segments.ArrayMax = 1;
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.InlineData[7] = '\0';
  local_d8.CompressedData.Segments.AllocatorInstance.SecondaryData =
       (ForElementType<FSharedBuffer>)0x0;
  local_d8.CompressedData.Segments.ArrayNum = 0;
  FShaderCode::FinalizeShaderCode(&this->ShaderCode,&local_d8);
  FShaderCodeResource::GetCodeView(&(this->ShaderCode).ShaderCodeResource,&local_c0);
  uVar3 = FShaderCode::GetShaderCodeSize(&this->ShaderCode);
  if ((this->ShaderCode).UncompressedSize != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ShaderCode.IsCompressed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCore.cpp"
                       ,0x61c,L"Attempting to generate the output hash of a compressed code");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FSHA1::Update(&local_a8,local_c0.DataPtr,(ulonglong)uVar3);
  FShaderParameterMap::UpdateHash(&this->ParameterMap,&local_a8);
  FSHA1::Final(&local_a8);
  FSHA1::GetHash(&local_a8,(this->OutputHash).Hash);
  FSHA1::~FSHA1(&local_a8);
  return;
}

// SerializeShaderCodeValidation @ 145e6c880

void __thiscall FShaderCompilerOutput::SerializeShaderCodeValidation(FShaderCompilerOutput *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_> local_148;
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> local_138;
  TArray<FShaderCodeValidationType,TSizedDefaultAllocator<32>_> local_128;
  TArray<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_> local_118;
  ushort local_108 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  if ((((0 < (this->ParametersStrideToValidate).ArrayNum) ||
       (0 < (this->ParametersSRVTypeToValidate).ArrayNum)) ||
      (0 < (this->ParametersUAVTypeToValidate).ArrayNum)) ||
     (0 < (this->ParametersUBSizeToValidate).ArrayNum)) {
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    local_108[0] = 0;
    if (&local_148 == &this->ParametersStrideToValidate) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (this->ParametersStrideToValidate).ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,2,iVar1,&local_148.AllocatorInstance,&local_148.ArrayNum,
                         &local_148.ArrayMax);
      memcpy(local_148.AllocatorInstance.Data + (longlong)iVar4 * 4,
             (this->ParametersStrideToValidate).AllocatorInstance.Data,(longlong)iVar1 << 2);
    }
    AlgoImpl::
    IntroSortInternal<FShaderCodeValidationStride,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationStride,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_1>_>_>
              ((FShaderCodeValidationStride *)local_148.AllocatorInstance.Data,local_148.ArrayNum,
               local_res8[0],(<lambda_1> *)local_res8);
    if (&local_138 == &this->ParametersSRVTypeToValidate) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (this->ParametersSRVTypeToValidate).ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,2,iVar1,&local_138.AllocatorInstance,&local_138.ArrayNum,
                         &local_138.ArrayMax);
      memcpy(local_138.AllocatorInstance.Data + (longlong)iVar4 * 4,
             (this->ParametersSRVTypeToValidate).AllocatorInstance.Data,(longlong)iVar1 << 2);
    }
    AlgoImpl::
    IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_2>_>_>
              ((FShaderCodeValidationType *)local_138.AllocatorInstance.Data,local_138.ArrayNum,
               local_res8[0],(<lambda_2> *)local_res10);
    if (&local_128 == &this->ParametersUAVTypeToValidate) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (this->ParametersUAVTypeToValidate).ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,2,iVar1,&local_128.AllocatorInstance,&local_128.ArrayNum,
                         &local_128.ArrayMax);
      memcpy(local_128.AllocatorInstance.Data + (longlong)iVar4 * 4,
             (this->ParametersUAVTypeToValidate).AllocatorInstance.Data,(longlong)iVar1 << 2);
    }
    AlgoImpl::
    IntroSortInternal<FShaderCodeValidationType,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationType,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_3>_>_>
              ((FShaderCodeValidationType *)local_128.AllocatorInstance.Data,local_128.ArrayNum,
               local_res8[0],(<lambda_3> *)local_res18);
    if (&local_118 == &this->ParametersUBSizeToValidate) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar1 = (this->ParametersUBSizeToValidate).ArrayNum;
    if (iVar1 != 0) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar1,&local_118.AllocatorInstance,&local_118.ArrayNum,
                         &local_118.ArrayMax);
      memcpy(local_118.AllocatorInstance.Data + (longlong)iVar4 * 8,
             (this->ParametersUBSizeToValidate).AllocatorInstance.Data,(longlong)iVar1 << 3);
    }
    AlgoImpl::
    IntroSortInternal<FShaderCodeValidationUBSize,int,FIdentityFunctor,TDereferenceWrapper<FShaderCodeValidationUBSize,_FShaderCompilerOutput::SerializeShaderCodeValidation_::__l5::<lambda_4>_>_>
              ((FShaderCodeValidationUBSize *)local_118.AllocatorInstance.Data,local_118.ArrayNum,
               local_res8[0],(<lambda_4> *)local_res20);
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_e8 = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_d8);
    local_d8._padding_ = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8.Bytes = &local_f8;
    local_d8.ArchiveName.ComparisonIndex.Value = 0;
    local_d8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(ushort **)(local_d8._padding_ + 8) < *(ushort **)local_d8._padding_ + 1) {
      if ((local_d8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,local_108,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_d8,local_108);
      }
    }
    else {
      local_108[0] = **(ushort **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 2;
    }
    TArrayPrivateFriend::Serialize<FShaderCodeValidationStride,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_148);
    TArrayPrivateFriend::Serialize<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_138);
    TArrayPrivateFriend::Serialize<FShaderCodeValidationType,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_128);
    TArrayPrivateFriend::Serialize<FShaderCodeValidationUBSize,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_118);
    FShaderCode::AddOptionalData
              (&this->ShaderCode,Validation,(uchar *)local_f8.AllocatorInstance.Data,
               local_f8.ArrayNum);
    FArchive::~FArchive((FArchive *)&local_d8);
    if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
    if ((FShaderCodeValidationUBSize *)local_118.AllocatorInstance.Data !=
        (FShaderCodeValidationUBSize *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if ((FShaderCodeValidationType *)local_128.AllocatorInstance.Data !=
        (FShaderCodeValidationType *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if ((FShaderCodeValidationType *)local_138.AllocatorInstance.Data !=
        (FShaderCodeValidationType *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    if ((FShaderCodeValidationStride *)local_148.AllocatorInstance.Data !=
        (FShaderCodeValidationStride *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
  }
  return;
}

// SerializeShaderDiagnosticData @ 145e6cd20

void __thiscall FShaderCompilerOutput::SerializeShaderDiagnosticData(FShaderCompilerOutput *this)

{
  int iVar1;
  FShaderDiagnosticData *pFVar2;
  TArray<FShaderDiagnosticData,TSizedDefaultAllocator<32>_> local_f8;
  ushort local_e8 [4];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  if (0 < (this->ShaderDiagnosticDatas).ArrayNum) {
    local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ArrayNum = 0;
    local_f8.ArrayMax = 0;
    local_e8[0] = 0;
    if (&local_f8 != &this->ShaderDiagnosticDatas) {
      DestructItems<FShaderDiagnosticData,int>((FShaderDiagnosticData *)0x0,0);
      iVar1 = (this->ShaderDiagnosticDatas).ArrayNum;
      pFVar2 = (FShaderDiagnosticData *)(this->ShaderDiagnosticDatas).AllocatorInstance.Data;
      local_f8.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_f8.ArrayMax == 0)) {
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar1,local_f8.ArrayMax,&local_f8.AllocatorInstance,iVar1,
                   &local_f8.ArrayMax);
        ConstructItems<FShaderDiagnosticData,FShaderDiagnosticData,int>
                  (local_f8.AllocatorInstance.Data,pFVar2,iVar1);
      }
    }
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    local_c8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_c8);
    local_c8._padding_ = 0;
    local_c8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_c8.Bytes = &local_e0;
    local_c8.ArchiveName.ComparisonIndex.Value = 0;
    local_c8.ArchiveName.Number = 0;
    FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
    (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
    local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(ushort **)(local_c8._padding_ + 8) < *(ushort **)local_c8._padding_ + 1) {
      if ((local_c8._padding_ & 0x10000U) == 0) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,local_e8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,local_e8);
      }
    }
    else {
      local_e8[0] = **(ushort **)local_c8._padding_;
      *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 2;
    }
    TArrayPrivateFriend::Serialize<FShaderDiagnosticData,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_c8,&local_f8);
    FShaderCode::AddOptionalData
              (&this->ShaderCode,Diagnostic,(uchar *)local_e0.AllocatorInstance.Data,
               local_e0.ArrayNum);
    FArchive::~FArchive((FArchive *)&local_c8);
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
    DestructItems<FShaderDiagnosticData,int>
              ((FShaderDiagnosticData *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
    if ((FShaderDiagnosticData *)local_f8.AllocatorInstance.Data != (FShaderDiagnosticData *)0x0) {
      FMemory::Free(local_f8.AllocatorInstance.Data);
    }
  }
  return;
}

