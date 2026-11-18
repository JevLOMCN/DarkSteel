// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148fe6ae0

UScriptStruct * __cdecl FNiagaraScriptAsyncCompileData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScriptAsyncCompileData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScriptAsyncCompileData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptAsyncCompileData,(UObject *)pUVar1,
                         L"NiagaraScriptAsyncCompileData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScriptAsyncCompileData.OuterSingleton;
}

// FNiagaraScriptAsyncCompileData @ 149022a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraScriptAsyncCompileData * __thiscall
FNiagaraScriptAsyncCompileData::FNiagaraScriptAsyncCompileData
          (FNiagaraScriptAsyncCompileData *this,FNiagaraScriptAsyncCompileData *param_1)

{
  FNiagaraCompileHash *pFVar1;
  TArray<FNiagaraCompiledShaderInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 *puVar4;
  TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_> *pTVar5;
  TMap<FName,TObjectPtr<UNiagaraDataInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UNiagaraDataInterface>,0>_>
  *this_00;
  int iVar6;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraCompiledShaderInfo *pFVar8;
  FNiagaraVariable *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar10 = (param_1->CompileId).CompilerVersionID.B;
  uVar11 = (param_1->CompileId).CompilerVersionID.C;
  uVar12 = (param_1->CompileId).CompilerVersionID.D;
  pFVar1 = &(this->CompileId).BaseScriptCompileHash;
  (this->CompileId).CompilerVersionID.A = (param_1->CompileId).CompilerVersionID.A;
  (this->CompileId).CompilerVersionID.B = uVar10;
  (this->CompileId).CompilerVersionID.C = uVar11;
  (this->CompileId).CompilerVersionID.D = uVar12;
  (this->CompileId).InterpolatedSpawnMode = (param_1->CompileId).InterpolatedSpawnMode;
  piVar3 = &(this->CompileId).BaseScriptCompileHash.DataHash.ArrayMax;
  (pFVar1->DataHash).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->CompileId).BaseScriptCompileHash.DataHash.ArrayNum;
  _Src = (param_1->CompileId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
  (this->CompileId).BaseScriptCompileHash.DataHash.ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar6,0,(ForAnyElementType *)pFVar1,iVar6,piVar3);
    memcpy((pFVar1->DataHash).AllocatorInstance.Data,_Src,(longlong)iVar6);
  }
  (this->ExeData).Object = (param_1->ExeData).Object;
  pTVar7 = (param_1->ExeData).SharedReferenceCount.ReferenceController;
  (this->ExeData).SharedReferenceCount.ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->CompiledShaders;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->CompiledShaders).ArrayMax;
  iVar6 = (param_1->CompiledShaders).ArrayNum;
  pFVar8 = (FNiagaraCompiledShaderInfo *)(param_1->CompiledShaders).AllocatorInstance.Data;
  (this->CompiledShaders).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar6,0,&pTVar2->AllocatorInstance,iVar6,piVar3);
    ConstructItems<FNiagaraCompiledShaderInfo,FNiagaraCompiledShaderInfo,int>
              ((pTVar2->AllocatorInstance).Data,pFVar8,iVar6);
  }
  ::FString::FString(&this->UniqueEmitterName,&param_1->UniqueEmitterName);
  pTVar5 = &this->RapidIterationParameters;
  (this->EmitterID).ID = (param_1->EmitterID).ID;
  fVar13 = (param_1->CompileMetrics).DDCFetchTime;
  fVar14 = (param_1->CompileMetrics).CompilerWallTime;
  fVar15 = (param_1->CompileMetrics).CompilerWorkerTime;
  (this->CompileMetrics).TaskWallTime = (param_1->CompileMetrics).TaskWallTime;
  (this->CompileMetrics).DDCFetchTime = fVar13;
  (this->CompileMetrics).CompilerWallTime = fVar14;
  (this->CompileMetrics).CompilerWorkerTime = fVar15;
  fVar13 = (param_1->CompileMetrics).TranslateTime;
  (this->CompileMetrics).CompilerPreprocessTime = (param_1->CompileMetrics).CompilerPreprocessTime;
  (this->CompileMetrics).TranslateTime = fVar13;
  (this->CompileMetrics).ByteCodeOptimizeTime = (param_1->CompileMetrics).ByteCodeOptimizeTime;
  this->bFromDerivedDataCache = param_1->bFromDerivedDataCache;
  piVar3 = &(this->RapidIterationParameters).ArrayMax;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->RapidIterationParameters).ArrayNum;
  pFVar9 = (FNiagaraVariable *)(param_1->RapidIterationParameters).AllocatorInstance.Data;
  (this->RapidIterationParameters).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar3);
    ConstructItems<FNiagaraVariable,FNiagaraVariable,int>
              ((pTVar5->AllocatorInstance).Data,pFVar9,iVar6);
  }
  this_00 = &this->NamedDataInterfaces;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->NamedDataInterfaces).field_0x8 = 0;
  puVar4 = &(this->NamedDataInterfaces).field_0x48;
  *(undefined8 *)&(this->NamedDataInterfaces).field_0x20 = 0;
  *(undefined4 *)&(this->NamedDataInterfaces).field_0x28 = 0;
  *(undefined4 *)&(this->NamedDataInterfaces).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedDataInterfaces).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedDataInterfaces).field_0x34 = 0;
  *(undefined8 *)&(this->NamedDataInterfaces).field_0x40 = 0;
  *(undefined4 *)puVar4 = 0;
  if (this_00 != &param_1->NamedDataInterfaces) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->NamedDataInterfaces).field_0x38,
               (int *)puVar4,
               (ForElementType<FSetElementId> *)&(param_1->NamedDataInterfaces).field_0x38,
               *(int *)&(param_1->NamedDataInterfaces).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->NamedDataInterfaces);
  }
  return this;
}

// ~FNiagaraScriptAsyncCompileData @ 1490260d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraScriptAsyncCompileData::~FNiagaraScriptAsyncCompileData
          (FNiagaraScriptAsyncCompileData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->NamedDataInterfaces).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NamedDataInterfaces).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TObjectPtr<UNiagaraDataInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedDataInterfaces);
  DestructItems<FNiagaraVariable,int>
            ((FNiagaraVariable *)(this->RapidIterationParameters).AllocatorInstance.Data,
             (this->RapidIterationParameters).ArrayNum);
  pFVar2 = (this->RapidIterationParameters).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UniqueEmitterName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNiagaraCompiledShaderInfo,int>
            ((FNiagaraCompiledShaderInfo *)(this->CompiledShaders).AllocatorInstance.Data,
             (this->CompiledShaders).ArrayNum);
  pFVar2 = (this->CompiledShaders).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ExeData).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->CompileId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

