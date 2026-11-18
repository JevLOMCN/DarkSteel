// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 86

// FRigVMRegistry_NoLock @ 14a0bf3b0

FRigVMRegistry_NoLock * __thiscall
FRigVMRegistry_NoLock::FRigVMRegistry_NoLock(FRigVMRegistry_NoLock *this,bool param_1)

{
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  (this->ThisHandle).Registry = this;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRigVMRegistry_NoLock__6B_;
  this->_padding_ = 0;
  this->bIsGlobalRegistry = param_1;
  (this->Types).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Types).ArrayNum = 0;
  (this->Types).ArrayMax = 0;
  *(undefined8 *)&this->TypeToIndex = 0;
  *(undefined8 *)&(this->TypeToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TypeToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->TypeToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->TypeToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypeToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypeToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->TypeToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->TypeToIndex).field_0x48 = 0;
  TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>(&this->Functions,0);
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>(&this->Templates,0);
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>(&this->DeprecatedTemplates,0);
  (this->Factories).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Factories).ArrayNum = 0;
  (this->Factories).ArrayMax = 0;
  *(undefined8 *)&this->FactoryNameToFactory = 0;
  *(undefined8 *)&(this->FactoryNameToFactory).field_0x8 = 0;
  *(undefined8 *)&(this->FactoryNameToFactory).field_0x20 = 0;
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x28 = 0;
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x2c = 0x80;
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x34 = 0;
  *(undefined8 *)&(this->FactoryNameToFactory).field_0x40 = 0;
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x48 = 0;
  *(undefined8 *)&this->FactoryStructToFactory = 0;
  *(undefined8 *)&(this->FactoryStructToFactory).field_0x8 = 0;
  *(undefined8 *)&(this->FactoryStructToFactory).field_0x20 = 0;
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x28 = 0;
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x2c = 0x80;
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x34 = 0;
  *(undefined8 *)&(this->FactoryStructToFactory).field_0x40 = 0;
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x48 = 0;
  *(undefined8 *)&this->FunctionNameToIndex = 0;
  *(undefined8 *)&(this->FunctionNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->FunctionNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x48 = 0;
  *(undefined8 *)&this->PreviousFunctionNameToIndex = 0;
  *(undefined8 *)&(this->PreviousFunctionNameToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousFunctionNameToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousFunctionNameToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x48 = 0;
  *(undefined8 *)&this->StructNameToPredicates = 0;
  *(undefined8 *)&(this->StructNameToPredicates).field_0x8 = 0;
  *(undefined8 *)&(this->StructNameToPredicates).field_0x20 = 0;
  *(undefined4 *)&(this->StructNameToPredicates).field_0x28 = 0;
  *(undefined4 *)&(this->StructNameToPredicates).field_0x2c = 0x80;
  *(undefined4 *)&(this->StructNameToPredicates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StructNameToPredicates).field_0x34 = 0;
  *(undefined8 *)&(this->StructNameToPredicates).field_0x40 = 0;
  *(undefined4 *)&(this->StructNameToPredicates).field_0x48 = 0;
  *(undefined8 *)&this->TemplateNotationToIndex = 0;
  *(undefined8 *)&(this->TemplateNotationToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->TemplateNotationToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TemplateNotationToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x48 = 0;
  *(undefined8 *)&this->PreviousTemplateNotationToIndex = 0;
  *(undefined8 *)&(this->PreviousTemplateNotationToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousTemplateNotationToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PreviousTemplateNotationToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x48 = 0;
  *(undefined8 *)&this->DeprecatedTemplateNotationToIndex = 0;
  *(undefined8 *)&(this->DeprecatedTemplateNotationToIndex).field_0x8 = 0;
  *(undefined8 *)&(this->DeprecatedTemplateNotationToIndex).field_0x20 = 0;
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x28 = 0;
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x34 = 0;
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DeprecatedTemplateNotationToIndex).field_0x40 = 0;
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x48 = 0;
  *(undefined8 *)&this->TypesPerCategory = 0;
  *(undefined8 *)&(this->TypesPerCategory).field_0x8 = 0;
  *(undefined8 *)&(this->TypesPerCategory).field_0x20 = 0;
  *(undefined4 *)&(this->TypesPerCategory).field_0x28 = 0;
  *(undefined4 *)&(this->TypesPerCategory).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypesPerCategory).field_0x34 = 0;
  *(undefined4 *)&(this->TypesPerCategory).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TypesPerCategory).field_0x40 = 0;
  *(undefined4 *)&(this->TypesPerCategory).field_0x48 = 0;
  *(undefined8 *)&this->TemplatesPerCategory = 0;
  *(undefined8 *)&(this->TemplatesPerCategory).field_0x8 = 0;
  *(undefined8 *)&(this->TemplatesPerCategory).field_0x20 = 0;
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x28 = 0;
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x34 = 0;
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TemplatesPerCategory).field_0x40 = 0;
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x48 = 0;
  *(undefined8 *)&this->SoftObjectPathToTypeIndex = 0;
  *(undefined8 *)&(this->SoftObjectPathToTypeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->SoftObjectPathToTypeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x34 = 0;
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SoftObjectPathToTypeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x48 = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedClasses).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllowedClasses).Elements.field_0x30 = 0xffffffff;
  (this->AllowedClasses).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedClasses).HashSize = 0;
  *(undefined8 *)&(this->AllowedStructs).Elements = 0;
  *(undefined8 *)&(this->AllowedStructs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedStructs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedStructs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedStructs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedStructs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->AllowedStructs).Elements.field_0x30 = 0xffffffff;
  (this->AllowedStructs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedStructs).HashSize = 0;
  this->bAvoidTypePropagation = false;
  this->bEverRefreshedEngineTypes = false;
  this->bEverRefreshedDispatchFactoriesAfterEngineInit = false;
  return this;
}

// ~FRigVMRegistry_NoLock @ 14a0c2eb0

void __thiscall FRigVMRegistry_NoLock::~FRigVMRegistry_NoLock(FRigVMRegistry_NoLock *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  
  this->_padding_ = (longlong)&___7FRigVMRegistry_NoLock__6B_;
  Reset_NoLock(this);
  (this->AllowedStructs).HashSize = 0;
  FVar3 = (this->AllowedStructs).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UScriptStruct_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllowedStructs).Elements);
  (this->AllowedClasses).HashSize = 0;
  FVar3 = (this->AllowedClasses).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UClass_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllowedClasses).Elements);
  *(undefined4 *)&(this->SoftObjectPathToTypeIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SoftObjectPathToTypeIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SoftObjectPathToTypeIndex);
  *(undefined4 *)&(this->TemplatesPerCategory).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TemplatesPerCategory).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TemplatesPerCategory);
  *(undefined4 *)&(this->TypesPerCategory).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TypesPerCategory).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TypesPerCategory);
  *(undefined4 *)&(this->DeprecatedTemplateNotationToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->DeprecatedTemplateNotationToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeprecatedTemplateNotationToIndex);
  *(undefined4 *)&(this->PreviousTemplateNotationToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PreviousTemplateNotationToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousTemplateNotationToIndex);
  *(undefined4 *)&(this->TemplateNotationToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TemplateNotationToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TemplateNotationToIndex);
  *(undefined4 *)&(this->StructNameToPredicates).field_0x48 = 0;
  pvVar4 = *(void **)&(this->StructNameToPredicates).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructNameToPredicates);
  *(undefined4 *)&(this->PreviousFunctionNameToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PreviousFunctionNameToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousFunctionNameToIndex);
  *(undefined4 *)&(this->FunctionNameToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FunctionNameToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionNameToIndex);
  *(undefined4 *)&(this->FactoryStructToFactory).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FactoryStructToFactory).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FactoryStructToFactory);
  *(undefined4 *)&(this->FactoryNameToFactory).field_0x48 = 0;
  pvVar4 = *(void **)&(this->FactoryNameToFactory).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigVMDispatchFactory_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FactoryNameToFactory);
  pFVar5 = (this->Factories).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->DeprecatedTemplates).Chunks,0);
  pFVar5 = (this->DeprecatedTemplates).Chunks.Array.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Templates).Chunks,0);
  pFVar5 = (this->Templates).Chunks.Array.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Functions).Chunks,0);
  pFVar5 = (this->Functions).Chunks.Array.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->TypeToIndex).field_0x48 = 0;
  pvVar4 = *(void **)&(this->TypeToIndex).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypeToIndex);
  pFVar5 = (this->Types).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  plVar6 = (longlong *)this->_padding_;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// operator() @ 14a0c8f90

void __thiscall
`FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
          (void *this,ETypeCategory param_1,TRigVMTypeIndex *param_2)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this_00;
  TRigVMTypeIndex local_18;
  
  local_18.Name = param_2->Name;
  local_18.Index = param_2->Index;
  lVar2 = *(longlong *)this;
  if (param_1 == ETypeCategory_Invalid) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x5c5,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((void *)(lVar2 + 0x368),param_1);
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
            (this_00,&local_18);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar7 = *(int *)&pFVar3[1].Data;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  pFVar4 = pFVar3->Data;
  pFVar4[(longlong)iVar7 * 8] = (FScriptContainerElement)param_1;
  *(int *)(pFVar4 + (longlong)iVar7 * 8 + 4) = param_2->Index;
  return;
}

// operator() @ 14a0c9060

void __thiscall
`FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock'::__l6::<lambda_1>::operator()(void *this)

{
  FName *pFVar1;
  IModuleInterface *pIVar2;
  longlong *plVar3;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *pTVar4;
  IPluginManager *pIVar5;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar6;
  FModuleManager *pFVar7;
  FName local_res8;
  
  (**(code **)(**(longlong **)this + 0xb8))();
  pFVar1 = ::FName::FName(&local_res8,L"AssetRegistry");
  pIVar2 = FModuleManager::GetModulePtr_Internal(*pFVar1);
  if ((pIVar2 != (IModuleInterface *)0x0) &&
     (UE::AssetRegistry::Private::IAssetRegistrySingleton::Singleton != (IAssetRegistry *)0x0)) {
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x308))(plVar3);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,*(void **)this);
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2);
    pTVar4 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
             (**(code **)(*plVar3 + 0x318))(plVar3);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(pTVar4,*(void **)this);
  }
  pIVar5 = IPluginManager::Get();
  pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar5 + 0x120))(pIVar5);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar6,*(void **)this);
  pIVar5 = IPluginManager::Get();
  pTVar6 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar5 + 0x138))(pIVar5);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar6,*(void **)this);
  pFVar7 = FModuleManager::Get();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar7->OnModulesUnloadCallback,
             *(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &UE::Anim::AttributeTypes::OnAttributeTypesChangedDelegate,*(void **)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::CleanupUnloadingObjects,*(void **)this);
  return;
}

// operator() @ 14a0c9320

void __thiscall
`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l48::<lambda_1>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRigVMFunction *pFVar6;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                      (*(longlong *)this + 0x90),param_1);
  if ((1 < (pFVar6->Name).Data.ArrayNum) &&
     (pFVar6->FunctionPtr !=
      (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
       *)0x0)) {
    pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                       ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                        (*(longlong *)this + 0x90),local_res10[0]);
    if (pFVar6->Struct != (UScriptStruct *)0x0) {
      pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                         ((TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *)
                          (*(longlong *)this + 0x90),local_res10[0]);
      bVar4 = FRigVMRegistry_NoLock::IsWithinPlugin
                        (*(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),
                         (UObject *)pFVar6->Struct);
      if (bVar4) {
        lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 0x10);
        if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(lpCriticalSection);
        pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
        if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
           ((FScriptContainerElement *)local_res10 <
            pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 4)) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,pFVar2,piVar1);
          *(int *)&pFVar2[1].Data = iVar5 + 1;
        }
        else {
          *(int *)&pFVar2[1].Data = iVar5 + 1;
        }
        *(int *)(pFVar2->Data + (longlong)iVar5 * 4) = local_res10[0];
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return;
}

// operator() @ 14a0c96b0

void __thiscall
`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l56::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  UScriptStruct *pUVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_res10 [2];
  
  lVar9 = *(longlong *)this;
  uVar8 = 0;
  if (param_1 < *(int *)(lVar9 + 0x38)) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  local_res10[0] = param_1;
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)param_1 * 0x30 + *(longlong *)(lVar9 + 0x30);
  if (*(longlong *)(lVar9 + 8) != 0) {
    pUVar7 = RigVMTypeUtils::GetWildCardCPPTypeObject();
    pUVar2 = *(UScriptStruct **)(lVar9 + 8);
    if (pUVar2 == (UScriptStruct *)0x0) {
      bVar5 = pUVar7 == (UScriptStruct *)0x0;
    }
    else {
      bVar5 = pUVar2 == pUVar7;
    }
    if (bVar5) {
      return;
    }
  }
  lVar10 = (longlong)(int)local_res10[0];
  lVar9 = *(longlong *)this;
  uVar8 = 0;
  if ((int)local_res10[0] < *(int *)(lVar9 + 0x38)) {
    uVar8 = ~local_res10[0] >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(char *)(*(longlong *)(lVar9 + 0x30) + 0x28 + lVar10 * 0x30) == '\0') {
    lVar10 = (longlong)(int)local_res10[0];
    lVar9 = *(longlong *)this;
    uVar8 = 0;
    if ((int)local_res10[0] < *(int *)(lVar9 + 0x38)) {
      uVar8 = ~local_res10[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FRigVMRegistry_NoLock::IsWithinPlugin
                      (*(TArray<FString,TSizedDefaultAllocator<32>_> **)((longlong)this + 8),
                       *(UObject **)(*(longlong *)(lVar9 + 0x30) + 8 + lVar10 * 0x30));
    if (bVar5) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 0x10);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
      if (((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)&pFVar3[1].Data;
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar3,piVar1);
        *(int *)&pFVar3[1].Data = iVar6 + 1;
      }
      else {
        *(int *)&pFVar3[1].Data = iVar6 + 1;
      }
      *(uint *)(pFVar3->Data + (longlong)iVar6 * 4) = local_res10[0];
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return;
}

// AddReferencedObjects @ 14a0ccc80

void __thiscall
FRigVMRegistry_NoLock::AddReferencedObjects
          (FRigVMRegistry_NoLock *this,FReferenceCollector *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FUObjectItem *pFVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  UObjectBase *local_res8;
  
  iVar1 = (this->Types).ArrayNum;
  pFVar7 = (this->Types).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x30;
  while( true ) {
    if ((this->Types).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMRegistry_NoLock::FTypeInfo,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar7 == pFVar9) break;
    if (((*(UObjectBase **)(pFVar7 + 8) != (UObjectBase *)0x0) &&
        (bVar3 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)(pFVar7 + 8),true), bVar3)) &&
       (pFVar4 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)(*(longlong *)(pFVar7 + 8) + 0xc)),
       ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar7 + 8);
    }
    pFVar7 = pFVar7 + 0x30;
  }
  uVar5 = (this->Functions).NumElements;
  uVar8 = 0;
  pFVar7 = (this->Functions).Chunks.Array.AllocatorInstance.Data;
  if (uVar5 != 0) {
    uVar10 = (ulonglong)uVar5;
    do {
      lVar6 = uVar8 * 0x70;
      lVar2 = *(longlong *)pFVar7;
      if ((1 < *(int *)(lVar6 + 8 + lVar2)) && (*(longlong *)(lVar6 + 0x28 + lVar2) != 0)) {
        local_res8 = *(UObjectBase **)(lVar6 + 0x10 + lVar2);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_res8 == (UObjectBase *)0x0) goto LAB_14a0ccdc2;
          UE::GC::MarkAsReachable((UObject *)local_res8);
        }
        if (((local_res8 != (UObjectBase *)0x0) &&
            (bVar3 = UObjectBase::IsValidLowLevelFast(local_res8,true), bVar3)) &&
           (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,local_res8->InternalIndex),
           ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) {
          (**(code **)(param_1->_padding_ + 0x88))(param_1,&local_res8,0,0);
        }
      }
LAB_14a0ccdc2:
      uVar5 = (int)uVar8 + 1;
      uVar8 = 0;
      pFVar9 = pFVar7 + 8;
      if (uVar5 < 0x92) {
        uVar8 = (ulonglong)uVar5;
        pFVar9 = pFVar7;
      }
      pFVar7 = pFVar9;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  pFVar9 = (this->Factories).AllocatorInstance.Data;
  iVar1 = (this->Factories).ArrayNum;
  pFVar7 = pFVar9 + (longlong)iVar1 * 8;
  do {
    if ((this->Factories).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar9 == pFVar7) {
      return;
    }
    if (*(longlong *)pFVar9 != 0) {
      local_res8 = *(UObjectBase **)(*(longlong *)pFVar9 + 0x28);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (local_res8 == (UObjectBase *)0x0) goto LAB_14a0cce80;
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      if (((local_res8 != (UObjectBase *)0x0) &&
          (bVar3 = UObjectBase::IsValidLowLevelFast(local_res8,true), bVar3)) &&
         (pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,local_res8->InternalIndex),
         ((uint)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0)) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,&local_res8,0,0);
      }
    }
LAB_14a0cce80:
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// AddTemplateFromArguments_NoLock @ 14a0ccf50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FRigVMTemplate * __thiscall
FRigVMRegistry_NoLock::AddTemplateFromArguments_NoLock
          (FRigVMRegistry_NoLock *this,FName *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2,
          FRigVMTemplateDelegates *param_3)

{
  FRigVMTemplateArgument *this_00;
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_01;
  undefined1 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  FRigVMTemplateDelegates *pFVar4;
  bool bVar5;
  char cVar6;
  FScriptContainerElement FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FRigVMTemplate *pFVar14;
  TTuple<FName,int> *pTVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  byte *pbVar21;
  ForAnyElementType this_02;
  byte *pbVar22;
  ulonglong uVar23;
  byte *pbVar24;
  FRigVMTemplateArgument *pFVar25;
  byte *pbVar26;
  uint uVar27;
  ulonglong uVar28;
  byte *pbVar29;
  ulonglong uVar30;
  undefined1 auStackY_2b8 [32];
  FScriptContainerElement local_268;
  FScriptContainerElement local_267 [3];
  int local_264;
  uint local_260;
  undefined1 local_25c;
  undefined1 local_25b;
  undefined1 local_25a [2];
  undefined4 local_258 [2];
  FRigVMTemplate *local_250;
  TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_> local_248;
  undefined1 local_238 [16];
  undefined4 local_228;
  FRigVMRegistryHandle *local_220;
  FRigVMRegistry_NoLock *local_218;
  FRigVMTemplateDelegates *local_210;
  FName local_208 [2];
  FName local_1f8;
  undefined4 local_1f0;
  FName local_1e8;
  undefined4 local_1e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  FName *local_1c8;
  int *local_1c0;
  FString local_1b8;
  FRigVMTemplate local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_250 = (FRigVMTemplate *)0x0;
  local_260 = 0;
  local_220 = &this->ThisHandle;
  local_238._0_8_ = param_1;
  local_218 = this;
  local_210 = param_3;
  FRigVMTemplate::FRigVMTemplate(&local_1a8,param_1,param_2,local_220);
  iVar10 = local_1a8.Arguments.ArrayNum;
  uVar23 = (ulonglong)local_1a8.Arguments.ArrayNum;
  pFVar25 = (FRigVMTemplateArgument *)(local_1a8.Arguments.AllocatorInstance.Data + uVar23 * 0x80);
  this_02.Data = local_1a8.Arguments.AllocatorInstance.Data;
  uVar11 = 0;
  while( true ) {
    if ((uint)uVar23 != iVar10) {
      local_25c = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_25c);
      uVar23 = (ulonglong)(uint)local_1a8.Arguments.ArrayNum;
    }
    if ((FRigVMTemplateArgument *)this_02.Data == pFVar25) break;
    uVar9 = FRigVMTemplateArgument::GetNumTypes_NoLock
                      ((FRigVMTemplateArgument *)this_02.Data,&this->ThisHandle);
    local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.ArrayNum = 0;
    local_1d8.ArrayMax = 0;
    bVar5 = FRigVMTemplateArgument::IsSingleton_NoLock
                      ((FRigVMTemplateArgument *)this_02.Data,&local_1d8,&this->ThisHandle);
    if (((!bVar5) && (1 < (int)uVar11)) && (uVar9 != uVar11)) {
      if (1 < (byte)LogRigVM._0_1_) {
        ::FName::ToString((FName *)local_238._0_8_,&local_1b8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
LAB_14a0cd8ec:
        if ((FRigVMTypeCacheScope_NoLock *)local_1b8.Data.AllocatorInstance.Data !=
            (FRigVMTypeCacheScope_NoLock *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
      }
      FRigVMTemplate::~FRigVMTemplate(&local_1a8);
      return local_250;
    }
    if ((int)uVar9 < (int)uVar11) {
      uVar9 = uVar11;
    }
    this_02.Data = this_02.Data + 0x80;
    uVar23 = (ulonglong)(uint)local_1a8.Arguments.ArrayNum;
    uVar11 = uVar9;
  }
  local_260 = (uint)uVar23;
  uVar16 = (ulonglong)(int)local_260;
  pFVar25 = (FRigVMTemplateArgument *)(local_1a8.Arguments.AllocatorInstance.Data + uVar16 * 0x80);
  pFVar19 = local_1a8.Arguments.AllocatorInstance.Data + 0x30;
  while( true ) {
    uVar9 = (uint)uVar23;
    if ((uint)uVar23 != (uint)uVar16) {
      local_25b = 0;
      `TCheckedPointerIterator<FRigVMTemplateArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_25b);
      uVar9 = local_1a8.Arguments.ArrayNum;
    }
    this_00 = (FRigVMTemplateArgument *)(pFVar19 + -0x30);
    if (this_00 == pFVar25) break;
    iVar10 = FRigVMTemplateArgument::GetNumTypes_NoLock(this_00,&this->ThisHandle);
    uVar9 = uVar11;
    if (iVar10 == 1) {
      FRigVMTemplateArgument::GetTypeIndex_NoLock
                (this_00,(TRigVMTypeIndex *)(local_238 + 8),0,&this->ThisHandle);
      uVar3 = local_228;
      local_1f8.ComparisonIndex.Value = local_238._8_4_;
      local_1f8.Number = local_238._12_4_;
      local_1f0 = local_228;
      cVar6 = (**(code **)(this->_padding_ + 0x128))(this,&local_1f8);
      if (cVar6 != '\0') {
        local_1e8.ComparisonIndex.Value = local_238._8_4_;
        local_1e8.Number = local_238._12_4_;
        local_1e0 = uVar3;
        cVar6 = (**(code **)(this->_padding_ + 0x108))(this,&local_1e8);
        pFVar17 = (((TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
                   (pFVar19 + -8))->AllocatorInstance).Data;
        if (cVar6 == '\0') {
          local_267[0] = (FScriptContainerElement)0x1;
          if (((pFVar17 <= local_267) && (local_267 < pFVar17 + *(int *)(pFVar19 + 4))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar14 = (FRigVMTemplate *)(*pcVar2)();
            return pFVar14;
          }
          iVar10 = *(int *)pFVar19;
          FVar7 = local_267[0];
          if (iVar10 == *(int *)(pFVar19 + 4)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,(ForAnyElementType *)(pFVar19 + -8),(int *)(pFVar19 + 4));
            FVar7 = local_267[0];
          }
        }
        else {
          local_268 = (FScriptContainerElement)0x2;
          if (((pFVar17 <= &local_268) && (&local_268 < pFVar17 + *(int *)(pFVar19 + 4))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar14 = (FRigVMTemplate *)(*pcVar2)();
            return pFVar14;
          }
          iVar10 = *(int *)pFVar19;
          FVar7 = local_268;
          if (iVar10 == *(int *)(pFVar19 + 4)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,(ForAnyElementType *)(pFVar19 + -8),(int *)(pFVar19 + 4));
            FVar7 = local_268;
          }
        }
        *(int *)pFVar19 = iVar10 + 1;
        (((TArray<FRigVMTemplateArgument::ETypeCategory,TSizedDefaultAllocator<32>_> *)
         (pFVar19 + -8))->AllocatorInstance).Data[iVar10] = FVar7;
        pFVar19[-0x10] = (FScriptContainerElement)0x1;
        *(int *)(pFVar19 + -0x18) = 0;
        if (*(int *)(pFVar19 + -0x14) < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)(pFVar19 + -0x20),0,(int *)(pFVar19 + -0x14));
        }
        uVar9 = FRigVMTemplateArgument::GetNumTypes_NoLock(this_00,&this->ThisHandle);
        if ((int)uVar9 < (int)uVar11) {
          uVar9 = uVar11;
        }
      }
    }
    uVar11 = uVar9;
    uVar23 = (ulonglong)(uint)local_1a8.Arguments.ArrayNum;
    pFVar19 = pFVar19 + 0x80;
    uVar16 = (ulonglong)local_260;
  }
  uVar23 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  local_260 = uVar11;
  if (uVar9 != 0) {
    TArray<FRigVMTypeCacheScope_NoLock,TSizedDefaultAllocator<32>_>::SetNum
              (&local_248,uVar9,Default);
    bVar5 = false;
    local_250 = (FRigVMTemplate *)(longlong)(int)uVar9;
    uVar16 = uVar23;
    uVar28 = uVar23;
    uVar30 = uVar23;
    if (0 < (int)uVar9) {
      do {
        uVar9 = (uint)uVar23;
        uVar11 = 0;
        if ((int)uVar9 < local_248.ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FRigVMTemplate *)(*pcVar2)();
          return pFVar14;
        }
        pFVar19 = local_248.AllocatorInstance.Data + uVar28;
        uVar11 = 0;
        if ((int)uVar9 < local_1a8.Arguments.ArrayNum) {
          uVar11 = ~uVar9 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FRigVMTemplate *)(*pcVar2)();
          return pFVar14;
        }
        pFVar17 = local_1a8.Arguments.AllocatorInstance.Data + uVar30;
        if (*(FRigVMRegistry_NoLock **)pFVar19 != local_220->Registry) {
          *(FRigVMRegistry_NoLock **)pFVar19 = local_220->Registry;
          *(longlong *)(pFVar19 + 8) = 0;
        }
        if (*(FScriptContainerElement **)(pFVar19 + 8) != pFVar17) {
          *(FScriptContainerElement **)(pFVar19 + 8) = pFVar17;
          pFVar19[0x10] = (FScriptContainerElement)(*(longlong *)(pFVar17 + 0x40) != 0);
        }
        if (bVar5) {
LAB_14a0cd43f:
          bVar5 = true;
        }
        else {
          uVar11 = 0;
          if ((int)uVar9 < local_248.ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar14 = (FRigVMTemplate *)(*pcVar2)();
            return pFVar14;
          }
          iVar10 = FRigVMTypeCacheScope_NoLock::GetNumTypes_NoLock
                             ((FRigVMTypeCacheScope_NoLock *)
                              (local_248.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30));
          if (iVar10 == 0) goto LAB_14a0cd43f;
          bVar5 = false;
        }
        uVar23 = (ulonglong)(uVar9 + 1);
        uVar16 = uVar16 + 1;
        uVar28 = uVar28 + 0x30;
        this = local_218;
        uVar30 = uVar30 + 0x80;
        uVar11 = local_260;
      } while ((longlong)uVar16 < (longlong)local_250);
    }
  }
  pbVar22 = (byte *)0x0;
  local_258[0] = 0xffffffff;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  uVar9 = 0;
  local_1a8.Permutations.ArrayNum = 0;
  pbVar26 = pbVar22;
  if (local_1a8.Permutations.ArrayMax != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&local_1a8.Permutations.AllocatorInstance,0,
               &local_1a8.Permutations.ArrayMax);
    pbVar26 = (byte *)(ulonglong)(uint)local_1a8.Permutations.ArrayNum;
  }
  if (0 < (int)uVar11) {
    uVar23 = (ulonglong)uVar11;
    while( true ) {
      uVar11 = (uint)pbVar26;
      if (((local_1a8.Permutations.AllocatorInstance.Data <= (FScriptContainerElement *)local_258)
          && ((FScriptContainerElement *)local_258 <
              local_1a8.Permutations.AllocatorInstance.Data +
              (longlong)local_1a8.Permutations.ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), uVar11 = local_1a8.Permutations.ArrayNum, bVar5)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FRigVMTemplate *)(*pcVar2)();
        return pFVar14;
      }
      if (uVar11 == local_1a8.Permutations.ArrayMax) {
        uVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1a8.Permutations.AllocatorInstance,
                            &local_1a8.Permutations.ArrayMax);
      }
      local_1a8.Permutations.ArrayNum = uVar11 + 1;
      *(undefined4 *)(local_1a8.Permutations.AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
           local_258[0];
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) break;
      pbVar26 = (byte *)(ulonglong)(uint)local_1a8.Permutations.ArrayNum;
    }
  }
  FRigVMTemplate::RecomputeTypesHashToPermutations(&local_1a8,&local_248,&this->ThisHandle);
  this_01 = &this->Templates;
  local_264 = (this->Templates).NumElements;
  local_208[0] = local_1a8.Notation;
  pTVar15 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->PreviousTemplateNotationToIndex,local_1a8.Notation);
  pbVar26 = &pTVar15->field_0x8;
  if (pTVar15 == (TTuple<FName,int> *)0x0) {
    pbVar26 = pbVar22;
  }
  if (pbVar26 != (byte *)0x0) {
    local_264 = *(int *)pbVar26;
  }
  if (local_264 == (this->Templates).NumElements) {
    pFVar14 = operator_new<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>(0x150,this_01);
    if (pFVar14 != (FRigVMTemplate *)0x0) {
      FRigVMTemplate::FRigVMTemplate(pFVar14,&local_1a8);
    }
  }
  else {
    pFVar14 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                        (this_01,local_264);
    FRigVMTemplate::operator=(pFVar14,&local_1a8);
  }
  iVar10 = local_264;
  pFVar14 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,local_264);
  pFVar14->Index = iVar10;
  pFVar14 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,local_264);
  pFVar14->OwnerRegistry = this;
  pFVar14 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_01,local_264);
  pFVar4 = local_210;
  TDelegate<TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>___cdecl(FName_const_&,TRigVMTypeIndex,FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar14->Delegates).NewArgumentTypeDelegate,&local_210->NewArgumentTypeDelegate);
  TDelegate<FRigVMDispatchFactory_*___cdecl(FRigVMRegistryHandle_const_&),FDefaultDelegateUserPolicy>
  ::CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar14->Delegates).GetDispatchFactoryDelegate,&pFVar4->GetDispatchFactoryDelegate);
  local_1c8 = local_208;
  local_1c0 = &local_264;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->TemplateNotationToIndex,
             (TPairInitializer<FName_const_&,int_const_&> *)local_238,(bool *)&local_1c8);
  local_260 = 0;
  pbVar26 = pbVar22;
  pbVar29 = pbVar22;
  while( true ) {
    iVar10 = local_264;
    uVar11 = local_264 / 0x30;
    uVar27 = uVar9;
    if ((int)uVar11 < (this->Templates).Chunks.Array.ArrayNum) {
      uVar27 = ~uVar11 >> 0x1f;
    }
    local_250 = (FRigVMTemplate *)pbVar26;
    if ((uVar27 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FRigVMTemplate *)(*pcVar2)();
      return pFVar14;
    }
    iVar13 = local_264;
    uVar27 = (uint)pbVar29;
    if (*(int *)((ulonglong)(uint)(iVar10 % 0x30) * 0x150 + 0x18 +
                *(longlong *)
                 ((this->Templates).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                ) <= (int)uVar27) break;
    uVar11 = local_264 / 0x30;
    uVar12 = uVar9;
    if ((int)uVar11 < (this->Templates).Chunks.Array.ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FRigVMTemplate *)(*pcVar2)();
      return pFVar14;
    }
    lVar20 = *(longlong *)
              ((this->Templates).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar11 * 8) +
             (ulonglong)(uint)(iVar13 % 0x30) * 0x150;
    uVar11 = uVar9;
    if ((int)uVar27 < *(int *)(lVar20 + 0x18)) {
      uVar11 = ~uVar27 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FRigVMTemplate *)(*pcVar2)();
      return pFVar14;
    }
    lVar20 = *(longlong *)(lVar20 + 0x10);
    pbVar24 = *(byte **)(pbVar26 + lVar20 + 0x28);
    iVar10 = *(int *)(pbVar26 + lVar20 + 0x30);
    pbVar29 = pbVar24 + iVar10;
    while( true ) {
      if (*(int *)(pbVar26 + lVar20 + 0x30) != iVar10) {
        local_25a[0] = 0;
        `TCheckedPointerIterator<enum_FRigVMTemplateArgument::ETypeCategory,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_25a);
      }
      if (pbVar24 == pbVar29) break;
      pbVar21 = pbVar22;
      if (*(int *)&(this->TemplatesPerCategory).field_0x8 !=
          *(int *)&(this->TemplatesPerCategory).field_0x34) {
        puVar1 = *(undefined1 **)&(this->TemplatesPerCategory).field_0x40;
        puVar18 = &(this->TemplatesPerCategory).field_0x38;
        if (puVar1 != (undefined1 *)0x0) {
          puVar18 = puVar1;
        }
        iVar13 = *(int *)(puVar18 +
                         ((ulonglong)(*(int *)&(this->TemplatesPerCategory).field_0x48 - 1) &
                         (ulonglong)*pbVar24) * 4);
        if (iVar13 != -1) {
          do {
            pbVar21 = (byte *)((longlong)iVar13 * 0x20 + *(longlong *)&this->TemplatesPerCategory);
            if (*pbVar21 == *pbVar24) {
              if (pbVar21 != (byte *)0x0) goto LAB_14a0cd890;
              break;
            }
            iVar13 = *(int *)(pbVar21 + 0x18);
            pbVar21 = pbVar22;
          } while (iVar13 != -1);
        }
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FRigVMTemplate *)(*pcVar2)();
        return pFVar14;
      }
LAB_14a0cd890:
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(pbVar21 + 8),&local_264);
      pbVar24 = pbVar24 + 1;
    }
    local_260 = local_260 + 1;
    pbVar29 = (byte *)(ulonglong)local_260;
    pbVar26 = (byte *)((longlong)local_250 + 0x80);
  }
  local_250 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                        (&this->Templates,local_264);
  DestructItems<FRigVMTypeCacheScope_NoLock,int>
            ((FRigVMTypeCacheScope_NoLock *)local_248.AllocatorInstance.Data,local_248.ArrayNum);
  local_1b8.Data.AllocatorInstance.Data = local_248.AllocatorInstance.Data;
  goto LAB_14a0cd8ec;
}

// CanMatchTypes_NoLock @ 14a0cf160

bool __thiscall
FRigVMRegistry_NoLock::CanMatchTypes_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1,TRigVMTypeIndex *param_2,
          bool param_3)

{
  FName FVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  FName local_28;
  int local_20;
  
  iVar4 = param_1->Index;
  if ((((-1 < iVar4) && (iVar5 = (this->Types).ArrayNum, iVar4 < iVar5)) &&
      (iVar2 = param_2->Index, -1 < iVar2)) && (iVar2 < iVar5)) {
    if (iVar4 == iVar2) {
      return true;
    }
    local_28 = param_1->Name;
    local_20 = iVar4;
    cVar3 = (**(code **)(this->_padding_ + 0x110))(local_28,&local_28);
    if (cVar3 != '\0') {
      local_28 = param_2->Name;
      local_20 = iVar2;
      cVar3 = (**(code **)(this->_padding_ + 0x110))(this,&local_28);
      if (cVar3 != '\0') {
        local_28 = param_1->Name;
        local_20 = iVar4;
        iVar4 = (**(code **)(this->_padding_ + 0x120))(this,&local_28);
        local_28 = param_2->Name;
        local_20 = iVar2;
        iVar5 = (**(code **)(this->_padding_ + 0x120))(this,&local_28);
        return iVar4 == iVar5;
      }
    }
    if (param_3) {
      if (iVar2 < iVar4) {
        FVar1 = param_1->Name;
        param_1->Name = param_2->Name;
        param_2->Name = FVar1;
        param_1->Index = iVar2;
        param_2->Index = iVar4;
      }
      if ((param_1->Index == RigVMTypeUtils::TypeIndex::Float.Index) &&
         (param_2->Index == RigVMTypeUtils::TypeIndex::Double.Index)) {
        return true;
      }
      if ((param_1->Index == RigVMTypeUtils::TypeIndex::FloatArray.Index) &&
         (param_2->Index == RigVMTypeUtils::TypeIndex::DoubleArray.Index)) {
        return true;
      }
    }
  }
  return false;
}

// CloneLocalizedRegistry @ 14a0cf570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<FRigVMRegistry_NoLock,1> * __cdecl
FRigVMRegistry_NoLock::CloneLocalizedRegistry
          (TSharedRef<FRigVMRegistry_NoLock,1> *__return_storage_ptr__,
          FRigVMRegistry_NoLock *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  TRawPtrProxy<FRigVMRegistry_NoLock> TVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FRigVMRegistry_NoLock *pFVar11;
  TSharedRef<FRigVMRegistry_NoLock,1> *pTVar12;
  FRigVMTemplate *this;
  FRigVMDispatchFactory *pFVar13;
  FRigVMTemplate *pFVar14;
  uint uVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [8];
  TRawPtrProxy<FRigVMRegistry_NoLock> local_e0;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> local_d8;
  longlong local_c8 [5];
  longlong *plStack_a0;
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined8 uStack_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar11 = ::operator_new(0x500);
  if (pFVar11 == (FRigVMRegistry_NoLock *)0x0) {
    local_e0.Object = (FRigVMRegistry_NoLock *)0x0;
  }
  else {
    local_e0.Object = FRigVMRegistry_NoLock(pFVar11,false);
    if ((((local_e0.Object != (FRigVMRegistry_NoLock *)0x0) && ((local_e0.Object)->_padding_ != 0))
        && ((local_e0.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_e0.Object)->_padding_ + 8) &&
        (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar10)))) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<FRigVMRegistry_NoLock,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  TSharedRef<FRigVMRegistry_NoLock,1>::TSharedRef<FRigVMRegistry_NoLock,1><FRigVMRegistry_NoLock>
            (__return_storage_ptr__,&local_e0);
  TArray<FRigVMRegistry_NoLock::FTypeInfo,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->Object->Types,&param_1->Types);
  pFVar11 = __return_storage_ptr__->Object;
  if (&pFVar11->TypeToIndex != &param_1->TypeToIndex) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(pFVar11->TypeToIndex).field_0x38,
               (int *)&(pFVar11->TypeToIndex).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->TypeToIndex).field_0x38,
               *(int *)&(param_1->TypeToIndex).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&pFVar11->TypeToIndex,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->TypeToIndex);
  }
  pFVar11 = __return_storage_ptr__->Object;
  uVar3 = (param_1->Factories).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar2 = &(pFVar11->Factories).ArrayMax;
  if (*piVar2 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,&(pFVar11->Factories).AllocatorInstance,(pFVar11->Factories).ArrayNum,
               piVar2);
  }
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->Object->FactoryNameToFactory,(param_1->Factories).ArrayNum);
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
             *)&__return_storage_ptr__->Object->FactoryStructToFactory,(param_1->Factories).ArrayNum
           );
  pFVar11 = (FRigVMRegistry_NoLock *)(param_1->Factories).AllocatorInstance.Data;
  iVar4 = (param_1->Factories).ArrayNum;
  local_e0.Object = (FRigVMRegistry_NoLock *)(&pFVar11->_padding_ + iVar4);
  while( true ) {
    TVar8.Object = local_e0.Object;
    if ((param_1->Factories).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_e8);
    }
    if (pFVar11 == TVar8.Object) break;
    pFVar13 = (FRigVMDispatchFactory *)pFVar11->_padding_;
    this = FRigVMDispatchFactory::GetTemplate_NoLock(pFVar13,&param_1->ThisHandle);
    FRigVMTemplate::GetFlattenedArgumentInfos_NoLock(this,&local_d8,&param_1->ThisHandle);
    pFVar13 = (FRigVMDispatchFactory *)
              (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x38))
                        (__return_storage_ptr__->Object,pFVar13->FactoryScriptStruct,&local_d8);
    pFVar14 = FRigVMDispatchFactory::GetTemplate_NoLock
                        (pFVar13,&__return_storage_ptr__->Object->ThisHandle);
    pTVar1 = &pFVar14->Permutations;
    if (pTVar1 != &this->Permutations) {
      iVar5 = (this->Permutations).ArrayNum;
      piVar2 = &(pFVar14->Permutations).ArrayMax;
      pFVar20 = (this->Permutations).AllocatorInstance.Data;
      (pFVar14->Permutations).ArrayNum = iVar5;
      if ((iVar5 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar5,*piVar2,&pTVar1->AllocatorInstance,iVar5,piVar2);
        if (iVar5 != 0) {
          memcpy((pTVar1->AllocatorInstance).Data,pFVar20,(longlong)iVar5 << 2);
        }
      }
    }
    DestructItems<FRigVMTemplateArgumentInfo,int>
              ((FRigVMTemplateArgumentInfo *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FRigVMTemplateArgumentInfo *)local_d8.AllocatorInstance.Data !=
        (FRigVMTemplateArgumentInfo *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    pFVar11 = (FRigVMRegistry_NoLock *)&pFVar11->_padding_;
  }
  uVar3 = (param_1->Functions).NumElements;
  uVar19 = 0;
  pFVar20 = (param_1->Functions).Chunks.Array.AllocatorInstance.Data;
  if (uVar3 != 0) {
    uVar21 = (ulonglong)uVar3;
    do {
      lVar18 = uVar19 * 0x70;
      lVar6 = *(longlong *)pFVar20;
      if (*(longlong *)(lVar18 + 0x10 + lVar6) == 0) {
        if (*(longlong *)(lVar18 + 0x18 + lVar6) != 0) {
          uStack_60 = 0;
          local_98._32_8_ = 0;
          local_c8[0] = 0;
          local_c8[1] = 0;
          local_c8[2] = 0;
          local_c8[3] = 0;
          local_c8[4] = 0;
          plStack_a0 = (longlong *)0x0;
          local_98._0_8_ = 0;
          local_98._8_8_ = 0;
          local_98._16_8_ = 0;
          local_98._24_8_ = 0;
          local_98._40_8_ = 0x8000000000;
          local_98._48_8_ = 0xffffffff;
          local_58 = (void *)0x0;
          uStack_50 = 0;
          if (*(int *)(lVar18 + 8 + lVar6) == 0) {
            pwVar16 = L"";
          }
          else {
            pwVar16 = *(wchar_t **)(lVar18 + lVar6);
          }
          (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x160))
                    (__return_storage_ptr__->Object,pwVar16,local_c8);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (local_58 != (void *)0x0) {
            FMemory::Free(local_58);
          }
          TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98);
          if (local_c8[0] != 0) {
            plVar17 = local_c8 + 2;
            if (plStack_a0 != (longlong *)0x0) {
              plVar17 = plStack_a0;
            }
            (**(code **)(*plVar17 + 0x10))();
          }
        }
      }
      else {
        if (*(int *)(lVar18 + 8 + lVar6) == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = *(wchar_t **)(lVar18 + lVar6);
        }
        (**(code **)(__return_storage_ptr__->Object->_padding_ + 0x20))
                  (__return_storage_ptr__->Object,pwVar16,*(undefined8 *)(lVar18 + 0x28 + lVar6));
      }
      uVar15 = (int)uVar19 + 1;
      uVar3 = 0;
      pFVar9 = pFVar20 + 8;
      if (uVar15 < 0x92) {
        uVar3 = uVar15;
        pFVar9 = pFVar20;
      }
      pFVar20 = pFVar9;
      uVar19 = (ulonglong)uVar3;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
  ::operator=(&__return_storage_ptr__->Object->AllowedClasses,&param_1->AllowedClasses);
  TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
  ::operator=(&__return_storage_ptr__->Object->AllowedStructs,&param_1->AllowedStructs);
  return __return_storage_ptr__;
}

// ConvertExecuteContextToBaseType_NoLock @ 14a0d16e0

bool __thiscall
FRigVMRegistry_NoLock::ConvertExecuteContextToBaseType_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  char cVar1;
  FName *pFVar2;
  FName local_28;
  int local_20;
  undefined1 local_18 [16];
  
  local_20 = param_1->Index;
  if (local_20 == -1) {
    return false;
  }
  if (local_20 != RigVMTypeUtils::TypeIndex::Execute.Index) {
    local_28 = param_1->Name;
    cVar1 = (**(code **)(this->_padding_ + 0x110))(local_28,&local_28);
    if (cVar1 == '\0') {
      return false;
    }
    local_20 = param_1->Index;
    local_28 = param_1->Name;
    cVar1 = (**(code **)(this->_padding_ + 0x108))(this,&local_28);
    if (cVar1 != '\0') {
      local_20 = RigVMTypeUtils::TypeIndex::Execute.Index;
      local_28 = RigVMTypeUtils::TypeIndex::Execute.Name;
      pFVar2 = (FName *)(**(code **)(this->_padding_ + 0x148))(this,local_18,&local_28);
      param_1->Name = *pFVar2;
      param_1->Index = pFVar2[1].ComparisonIndex.Value;
      return true;
    }
    param_1->Name = RigVMTypeUtils::TypeIndex::Execute.Name;
    param_1->Index = RigVMTypeUtils::TypeIndex::Execute.Index;
  }
  return true;
}

// CreateLocalizedRegistry @ 14a0d46a0

TSharedRef<FRigVMRegistry_NoLock,1> * __cdecl
FRigVMRegistry_NoLock::CreateLocalizedRegistry
          (TSharedRef<FRigVMRegistry_NoLock,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FRigVMRegistry_NoLock *this;
  TSharedRef<FRigVMRegistry_NoLock,1> *pTVar3;
  TRawPtrProxy<FRigVMRegistry_NoLock> local_res8;
  
  this = ::operator_new(0x500);
  if (this == (FRigVMRegistry_NoLock *)0x0) {
    local_res8.Object = (FRigVMRegistry_NoLock *)0x0;
  }
  else {
    local_res8.Object = FRigVMRegistry_NoLock(this,false);
    if ((((local_res8.Object != (FRigVMRegistry_NoLock *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FRigVMRegistry_NoLock,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FRigVMRegistry_NoLock,1>::TSharedRef<FRigVMRegistry_NoLock,1><FRigVMRegistry_NoLock>
            (__return_storage_ptr__,&local_res8);
  InitializeBaseTypes_NoLock(__return_storage_ptr__->Object);
  return __return_storage_ptr__;
}

// FindDispatchFactory_NoLock @ 14a0d87b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_NoLock::FindDispatchFactory_NoLock(FRigVMRegistry_NoLock *this,FName *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  wchar_t *pwVar4;
  bool bVar5;
  uint uVar6;
  EInternalObjectFlags EVar7;
  FRigVMDispatchFactory **ppFVar8;
  FString *this_00;
  size_t sVar9;
  UClass *pUVar10;
  FRigVMDispatchFactory *pFVar11;
  FRigVMDispatchFactory *this_01;
  FName FVar12;
  FRigVMTemplateArgumentInfo *local_68;
  undefined8 local_60;
  FString local_58;
  TObjectIterator<UScriptStruct> local_48;
  
  ppFVar8 = TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
            ::Find((TMapBase<FName,FRigVMDispatchFactory_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>_>
                    *)&this->FactoryNameToFactory,*param_1);
  if (ppFVar8 != (FRigVMDispatchFactory **)0x0) {
    return *ppFVar8;
  }
  if (this->bIsGlobalRegistry != false) {
    this_00 = ::FName::ToString(param_1,&local_58);
    pwVar4 = FRigVMDispatchFactory::DispatchPrefix;
    pFVar11 = (FRigVMDispatchFactory *)0x0;
    uVar6 = 0;
    if (FRigVMDispatchFactory::DispatchPrefix != (wchar_t *)0x0) {
      sVar9 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      uVar6 = (uint)sVar9;
    }
    bVar5 = ::FString::StartsWith(this_00,pwVar4,uVar6,IgnoreCase);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      local_48.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ObjectArray.ArrayNum = 0;
      local_48.ObjectArray.ArrayMax = 0;
      local_48.Index = 0xffffffff;
      EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
      GetObjectsOfClass(pUVar10,&local_48.ObjectArray,true,RF_ClassDefaultObject,
                        EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      TObjectIterator<UScriptStruct>::Advance(&local_48);
      while( true ) {
        if ((local_48.Index < 0) || (local_48.ObjectArray.ArrayNum <= local_48.Index)) {
          if (local_48.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return pFVar11;
          }
          FMemory::Free(local_48.ObjectArray.AllocatorInstance.Data);
          return pFVar11;
        }
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            SuperStruct = FRigVMDispatchFactory::StaticStruct();
            _Init_thread_footer(&::_TSS0);
          }
        }
        iVar1 = local_48.Index;
        uVar6 = 0;
        if (local_48.Index < local_48.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_48.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        pUVar2 = *(UScriptStruct **)
                  (local_48.ObjectArray.AllocatorInstance.Data + (longlong)iVar1 * 8);
        if ((pUVar2 != SuperStruct) && (SuperStruct != (UScriptStruct *)0x0)) {
          iVar1 = (int)SuperStruct->_padding_;
          if (((int)pUVar2->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
              &SuperStruct->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            local_68 = (FRigVMTemplateArgumentInfo *)0x0;
            local_60 = 0;
            this_01 = (FRigVMDispatchFactory *)
                      (**(code **)(this->_padding_ + 0x38))(this,pUVar2,&local_68);
            DestructItems<FRigVMTemplateArgumentInfo,int>(local_68,(int)local_60);
            if (local_68 != (FRigVMTemplateArgumentInfo *)0x0) {
              FMemory::Free(local_68);
            }
            if ((((this_01 != (FRigVMDispatchFactory *)0x0) &&
                 (pFVar11 == (FRigVMDispatchFactory *)0x0)) &&
                (FVar12 = FRigVMDispatchFactory::GetFactoryName(this_01),
                *(uint *)FVar12 == (param_1->ComparisonIndex).Value)) &&
               (*(uint *)((longlong)FVar12 + 4) == param_1->Number)) {
              pFVar11 = this_01;
            }
          }
        }
        TObjectIterator<UScriptStruct>::Advance(&local_48);
      }
      pcVar3 = (code *)swi(3);
      pFVar11 = (FRigVMDispatchFactory *)(*pcVar3)();
      return pFVar11;
    }
  }
  return (FRigVMDispatchFactory *)0x0;
}

// FindFunction_NoLock @ 14a0d93c0

FRigVMFunction * __thiscall
FRigVMRegistry_NoLock::FindFunction_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,wchar_t *param_2,
          FRigVMUserDefinedTypeResolver *param_3)

{
  code *pcVar1;
  bool bVar2;
  FRigVMFunction *pFVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString local_38;
  FString local_28;
  void *local_18 [2];
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0xa3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMFunction *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0xa40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMFunction *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::FString(&local_28,param_2);
  pFVar4 = (FString *)(**(code **)(param_1->_padding_ + 0x388))(param_1,local_18,0);
  RigVMStringUtils::JoinStrings(&local_38,pFVar4,&local_28,L"::",(wchar_t *)0x0,(wchar_t *)0x0);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar5.Data = local_38.Data.AllocatorInstance.Data;
  }
  pFVar3 = (FRigVMFunction *)(**(code **)(this->_padding_ + 0x160))(this,FVar5.Data,param_3);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return pFVar3;
}

// FindFunction_NoLock @ 14a0d9500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

FRigVMFunction * __thiscall
FRigVMRegistry_NoLock::FindFunction_NoLock
          (FRigVMRegistry_NoLock *this,wchar_t *param_1,FRigVMUserDefinedTypeResolver *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  TTuple<FName,int> *pTVar7;
  FRigVMFunction *pFVar8;
  FRigVMDispatchFactory *this_00;
  FRigVMTemplate *this_01;
  FString *pFVar9;
  undefined8 *puVar10;
  size_t sVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  ulonglong uVar14;
  int *piVar15;
  wchar_t *pwVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  ForAnyElementType FVar20;
  int iVar21;
  undefined1 auStackY_2d8 [32];
  FString local_298;
  undefined1 local_288 [8];
  FString local_280;
  FString local_270;
  FString local_260;
  TArray<FCoreRedirect_const_*,TSizedDefaultAllocator<32>_> local_250;
  undefined1 local_240 [16];
  undefined8 local_230;
  undefined8 local_228;
  int local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FName local_1d8;
  FName local_1d0;
  UObject *local_1c8;
  undefined1 local_1c0 [12];
  FName local_1b4;
  FName local_1ac;
  wchar_t *local_1a0;
  FName local_198;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> *local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FScriptContainerElement *local_118;
  undefined8 *local_110;
  FString local_108;
  FName *local_f8;
  int *local_f0;
  FString local_e8;
  FName local_d8;
  FString local_d0 [2];
  FCoreRedirectObjectName local_b0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_1a0 = param_1;
  local_190 = (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
               *)&this->FunctionNameToIndex;
  pFVar6 = ::FName::FName(&local_d8,param_1);
  pTVar7 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->FunctionNameToIndex,*pFVar6);
  piVar15 = (int *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<FName,int> *)0x0) {
    piVar15 = (int *)0x0;
  }
  if (piVar15 != (int *)0x0) {
    pFVar8 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (&this->Functions,*piVar15);
    return pFVar8;
  }
  ::FString::FString(&local_e8,param_1);
  local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Data.ArrayNum = 0;
  local_298.Data.ArrayMax = 0;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  ::FString::FString(&local_158,L"::");
  bVar3 = ::FString::Split(&local_e8,&local_158,&local_298,&local_218);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  iVar21 = 0;
  if (bVar3) {
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_298.Data.ArrayNum != 0) {
      FVar20.Data = local_298.Data.AllocatorInstance.Data;
    }
    pcVar1 = *(code **)(this->_padding_ + 400);
    ::FName::FName((FName *)(local_1c0 + 4),(wchar_t *)FVar20.Data);
    this_00 = (FRigVMDispatchFactory *)(*pcVar1)(this,local_1c0 + 4);
    if ((this_00 != (FRigVMDispatchFactory *)0x0) &&
       (this_01 = FRigVMDispatchFactory::GetTemplate_NoLock(this_00,&this->ThisHandle),
       this_01 != (FRigVMTemplate *)0x0)) {
      if (((this->ThisHandle).Registry != this_01->OwnerRegistry) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InRegistry.GetRegistry() == OwnerRegistry",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMTemplate.cpp"
                             ,0x466,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FRigVMFunction *)(*pcVar1)();
        return pFVar8;
      }
      FVar20.Data = local_218.Data.AllocatorInstance.Data;
      lVar19 = (longlong)local_218.Data.ArrayNum;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      if (1 < local_218.Data.ArrayNum) {
        local_240._8_8_ = (TRigVMTypeIndex *)0x0;
        local_230 = 0;
        local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_270.Data.ArrayNum = local_218.Data.ArrayNum;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_218.Data.ArrayNum,0,(ForAnyElementType *)&local_270,
                   local_218.Data.ArrayNum,&local_270.Data.ArrayMax);
        memcpy(local_270.Data.AllocatorInstance.Data,FVar20.Data,lVar19 * 2);
        if (1 < local_270.Data.ArrayNum) {
LAB_14a0d9730:
          ::FString::FString(&local_148,L",");
          bVar3 = ::FString::Split(&local_270,&local_148,(FString *)(local_240 + 8),&local_270);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (!bVar3) {
            iVar5 = local_270.Data.ArrayNum + -1;
            if (local_270.Data.ArrayNum == 0) {
              iVar5 = iVar21;
            }
            ::FString::AssignRange
                      ((FString *)(local_240 + 8),(wchar_t *)local_270.Data.AllocatorInstance.Data,
                       iVar5);
            ::FString::Reset(&local_270,0);
          }
          local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.Data.ArrayNum = 0;
          local_208.Data.ArrayMax = 0;
          local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_260.Data.ArrayNum = 0;
          local_260.Data.ArrayMax = 0;
          ::FString::FString(&local_138,L":");
          bVar3 = ::FString::Split((FString *)(local_240 + 8),&local_138,&local_208,&local_260);
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (bVar3) {
            FVar20.Data = (FScriptContainerElement *)L"";
            if (local_208.Data.ArrayNum != 0) {
              FVar20.Data = local_208.Data.AllocatorInstance.Data;
            }
            ::FName::FName(&local_1b4,(wchar_t *)FVar20.Data);
            pFVar18 = (this_01->Arguments).AllocatorInstance.Data;
            pFVar12 = pFVar18 + (longlong)(this_01->Arguments).ArrayNum * 0x80;
            for (; pFVar18 != pFVar12; pFVar18 = pFVar18 + 0x80) {
              if (*(FName *)(pFVar18 + 4) == local_1b4) {
                if (pFVar18 != (FScriptContainerElement *)0x0) {
                  FVar20.Data = (FScriptContainerElement *)L"";
                  if (local_260.Data.ArrayNum != 0) {
                    FVar20.Data = local_260.Data.AllocatorInstance.Data;
                  }
                  ::FName::FName(&local_1d8,(wchar_t *)FVar20.Data);
                  pFVar13 = (FName *)(this_01->TypeNamesToIgnore).AllocatorInstance.Data;
                  pFVar6 = pFVar13 + (this_01->TypeNamesToIgnore).ArrayNum;
                  goto joined_r0x00014a0d987c;
                }
                break;
              }
            }
          }
          goto LAB_14a0d99cc;
        }
LAB_14a0d9a82:
        if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.Data.AllocatorInstance.Data);
        }
        if ((TRigVMTypeIndex *)local_240._8_8_ != (TRigVMTypeIndex *)0x0) {
          FMemory::Free((void *)local_240._8_8_);
        }
      }
      if ((local_98._8_4_ - local_64 == (this_01->Arguments).ArrayNum) &&
         (iVar5 = FRigVMTemplate::FindPermutation_NoLock
                            (this_01,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                                      *)local_98,&this->ThisHandle), iVar5 != -1)) {
        pFVar8 = FRigVMTemplate::GetOrCreatePermutation_NoLock(this_01,iVar5,&this->ThisHandle);
        local_50 = 0;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_58);
        }
        iVar21 = SUB84(local_98._8_8_,4);
        local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
        if (iVar21 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
        }
        local_68 = 0xffffffff;
        local_64 = 0;
        local_70 = 0;
        if (0x80 < local_6c) {
          local_6c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free(local_78);
        }
        if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_98._0_8_);
        }
        goto LAB_14a0d9faa;
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar5 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
    }
  }
  if (1 < local_298.Data.ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&StructPrefix,L"F");
      atexit(`FRigVMRegistry_NoLock::FindFunction_NoLock'::__l23::
             _dynamic_atexit_destructor_for__StructPrefix__);
      _Init_thread_footer(&::_TSS0);
    }
    pwVar16 = FRigVMDispatchFactory::DispatchPrefix;
    if (FRigVMDispatchFactory::DispatchPrefix != (wchar_t *)0x0) {
      sVar11 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      iVar21 = (int)sVar11;
    }
    bVar3 = ::FString::StartsWith(&local_298,pwVar16,iVar21,CaseSensitive);
    if (bVar3) {
      sVar11 = wcslen(FRigVMDispatchFactory::DispatchPrefix);
      ::FString::RightChop(&local_298,&local_188,(int)sVar11);
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      local_298.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
LAB_14a0d9d6c:
      local_298.Data.ArrayMax = local_188.Data.ArrayMax;
      local_298.Data.ArrayNum = local_188.Data.ArrayNum;
    }
    else {
      pwVar16 = L"";
      iVar21 = StructPrefix.Data.ArrayNum;
      if (iVar21 != 0) {
        pwVar16 = (wchar_t *)StructPrefix.Data.AllocatorInstance;
      }
      iVar5 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar5 = 0;
      }
      bVar4 = ::FString::StartsWith(&local_298,pwVar16,iVar5,CaseSensitive);
      if (bVar4) {
        iVar21 = StructPrefix.Data.ArrayNum + -1;
        if (StructPrefix.Data.ArrayNum == 0) {
          iVar21 = 0;
        }
        ::FString::RightChop(&local_298,&local_178,iVar21);
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        local_298.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
        local_188.Data.ArrayMax = local_178.Data.ArrayMax;
        local_188.Data.ArrayNum = local_178.Data.ArrayNum;
        goto LAB_14a0d9d6c;
      }
    }
    pFVar8 = (FRigVMFunction *)0x0;
    FCoreRedirectObjectName::FCoreRedirectObjectName(&local_b0,&local_298);
    local_250.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_250.ArrayNum = 0;
    local_250.ArrayMax = 0;
    bVar4 = FCoreRedirects::GetMatchingRedirects(Type_Struct,&local_b0,&local_250,AllowPartialMatch)
    ;
    if (bVar4) {
      iVar21 = local_250.ArrayNum;
      uVar14 = (ulonglong)local_250.ArrayNum;
      pFVar18 = local_250.AllocatorInstance.Data + uVar14 * 8;
      FVar20.Data = local_250.AllocatorInstance.Data;
      do {
        if ((int)uVar14 != iVar21) {
          `TCheckedPointerIterator<FCoreRedirect_const_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_288);
        }
        if (FVar20.Data == pFVar18) break;
        ::FName::ToString((FName *)(*(longlong *)FVar20.Data + 0x1c),&local_280);
        if (local_280.Data.ArrayNum == local_298.Data.ArrayNum) {
          if (1 < local_280.Data.ArrayNum) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_280.Data.AllocatorInstance.Data,
                               (wchar_t *)local_298.Data.AllocatorInstance.Data);
            bVar4 = iVar5 == 0;
            goto LAB_14a0d9e15;
          }
        }
        else {
          bVar4 = local_280.Data.ArrayNum + local_298.Data.ArrayNum == 1;
LAB_14a0d9e15:
          if (!bVar4) {
            if (bVar3) {
              ::FString::ConcatCF(&local_1f8,FRigVMDispatchFactory::DispatchPrefix,&local_280);
              if ((FRigVMFunction *)local_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0)
              {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
              local_280.Data.AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
              local_280.Data.ArrayNum = local_1f8.Data.ArrayNum;
              local_280.Data.ArrayMax = local_1f8.Data.ArrayMax;
              local_1f8.Data.ArrayNum = 0;
              local_1f8.Data.ArrayMax = 0;
              local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
            }
            else {
              ::FString::ConcatFF(&local_1e8,&StructPrefix,&local_280);
              if ((FRigVMFunction *)local_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0)
              {
                FMemory::Free(local_280.Data.AllocatorInstance.Data);
              }
              local_280.Data.AllocatorInstance.Data = local_1e8.Data.AllocatorInstance.Data;
              local_280.Data.ArrayNum = local_1e8.Data.ArrayNum;
              local_280.Data.ArrayMax = local_1e8.Data.ArrayMax;
              local_1e8.Data.ArrayNum = 0;
              local_1e8.Data.ArrayMax = 0;
              local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar8;
            }
            pcVar1 = *(code **)(this->_padding_ + 0x160);
            ::FString::ConcatFC(&local_108,&local_280,L"::");
            ::FString::ConcatFF(&local_168,&local_108,&local_218);
            FVar17.Data = (FScriptContainerElement *)L"";
            if (local_168.Data.ArrayNum != 0) {
              FVar17.Data = local_168.Data.AllocatorInstance.Data;
            }
            pFVar8 = (FRigVMFunction *)(*pcVar1)(this,FVar17.Data,param_2);
            if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Data.AllocatorInstance.Data);
            }
            if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_108.Data.AllocatorInstance.Data);
            }
            if (pFVar8 != (FRigVMFunction *)0x0) goto LAB_14a0d9f3d;
          }
        }
        if ((FRigVMFunction *)local_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        uVar14 = local_250._8_8_ & 0xffffffff;
        FVar20.Data = FVar20.Data + 8;
      } while( true );
    }
    if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.AllocatorInstance.Data);
    }
  }
  pFVar8 = (FRigVMFunction *)0x0;
LAB_14a0d9faa:
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return pFVar8;
joined_r0x00014a0d987c:
  if (pFVar13 == pFVar6) goto LAB_14a0d9894;
  if (*pFVar13 == local_1d8) {
    if (local_98._8_4_ != local_64) {
      TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                        *)local_98);
      uVar2 = local_98._8_8_;
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if ((longlong)uVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
    }
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    goto LAB_14a0d9a82;
  }
  pFVar13 = pFVar13 + 1;
  goto joined_r0x00014a0d987c;
LAB_14a0d9894:
  (**(code **)(((this->ThisHandle).Registry)->_padding_ + 0x100))();
  if (local_220 == -1) {
    bVar3 = RigVMTypeUtils::RequiresCPPTypeObject(&local_260);
    if (bVar3) {
      local_1c8 = RigVMTypeUtils::ObjectFromCPPType(&local_260,true,param_2);
      local_1d0 = local_1d8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1c8);
      }
      ::FName::ToString(&local_1d0,&local_128);
      pFVar9 = RigVMTypeUtils::PostProcessCPPType
                         (local_d0,&local_128,local_1c8,(FRigVMUserDefinedTypeResolver *)0x0);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_1ac,pwVar16);
      local_1d0 = local_1ac;
      if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      puVar10 = (undefined8 *)(**(code **)(((this->ThisHandle).Registry)->_padding_ + 0xc0))();
      local_228 = *puVar10;
      local_220 = *(int *)(puVar10 + 1);
    }
    if (local_220 == -1) goto LAB_14a0d99cc;
  }
  local_118 = pFVar18 + 4;
  local_110 = &local_228;
  TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&>_>
            ((TSet<TTuple<FName,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>,FDefaultSetAllocator>
              *)local_98,(TPairInitializer<FName_const_&,TRigVMTypeIndex_const_&> *)local_240,
             (bool *)&local_118);
LAB_14a0d99cc:
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_270.Data.ArrayNum < 2) goto LAB_14a0d9a82;
  goto LAB_14a0d9730;
LAB_14a0d9f3d:
  ::FName::FName(&local_198,local_1a0);
  local_f8 = &local_198;
  local_f0 = &pFVar8->Index;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,int_const_&>_>
            (local_190,(TPairInitializer<FName_&&,int_const_&> *)local_1c0,(bool *)&local_f8);
  if ((FRigVMFunction *)local_280.Data.AllocatorInstance.Data != (FRigVMFunction *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (local_250.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.AllocatorInstance.Data);
  }
  goto LAB_14a0d9faa;
}

// FindOrAddDispatchFactory_NoLock @ 14a0dad60

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_NoLock::FindOrAddDispatchFactory_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1)

{
  FRigVMDispatchFactory *pFVar1;
  FRigVMTemplateArgumentInfo *local_18;
  undefined8 local_10;
  
  local_18 = (FRigVMTemplateArgumentInfo *)0x0;
  local_10 = 0;
  pFVar1 = (FRigVMDispatchFactory *)(**(code **)(this->_padding_ + 0x38))(this,param_1,&local_18);
  DestructItems<FRigVMTemplateArgumentInfo,int>(local_18,(int)local_10);
  if (local_18 != (FRigVMTemplateArgumentInfo *)0x0) {
    FMemory::Free(local_18);
  }
  return pFVar1;
}

// FindOrAddSingletonDispatchFunction_NoLock @ 14a0daf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FRigVMRegistry_NoLock::FindOrAddSingletonDispatchFunction_NoLock
          (FRigVMRegistry_NoLock *this,FString *__return_storage_ptr__,UScriptStruct *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  FRigVMDispatchFactory *this_00;
  FRigVMTemplate *this_01;
  FString *pFVar4;
  longlong *plVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_148 [32];
  FString local_118;
  longlong local_108 [5];
  longlong *plStack_e0;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [72];
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  this_00 = (FRigVMDispatchFactory *)(**(code **)(this->_padding_ + 0x198))(this,param_1);
  if (((this_00 != (FRigVMDispatchFactory *)0x0) &&
      (cVar3 = (**(code **)(this_00->_padding_ + 0x50))(this_00), cVar3 != '\0')) &&
     (this_01 = FRigVMDispatchFactory::GetTemplate_NoLock(this_00,&this->ThisHandle),
     this_01 != (FRigVMTemplate *)0x0)) {
    FRigVMTemplate::GetTypesForPermutation_NoLock
              (this_01,(TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                        *)local_88,0,&this->ThisHandle);
    FRigVMDispatchFactory::GetPermutationName_NoLock
              (this_00,&local_118,
               (TMap<FName,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TRigVMTypeIndex,0>_>
                *)local_88,&this->ThisHandle);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_118.Data.ArrayNum != 0) {
      FVar6.Data = local_118.Data.AllocatorInstance.Data;
    }
    uStack_a0 = 0;
    local_b8 = (void *)0x0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_108[2] = 0;
    local_108[3] = 0;
    local_108[4] = 0;
    plStack_e0 = (longlong *)0x0;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._8_8_ = 0;
    local_d8._16_8_ = 0;
    uStack_c0 = 0;
    uStack_b0 = 0x8000000000;
    local_a8 = 0xffffffff;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    pFVar4 = (FString *)(**(code **)(this->_padding_ + 0x160))(this,FVar6.Data,local_108);
    uStack_90 = uStack_90 & 0xffffffff00000000;
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_d8,0,local_d8._8_4_);
    iVar1 = SUB84(local_d8._8_8_,4);
    local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
    }
    uVar2 = uStack_b0._4_4_;
    local_a8 = 0xffffffff;
    uStack_b0 = (ulonglong)uStack_b0._4_4_ << 0x20;
    if (0x80 < uVar2) {
      uStack_b0 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_d8._0_8_);
    }
    if (local_108[0] != 0) {
      plVar5 = local_108 + 2;
      if (plStack_e0 != (longlong *)0x0) {
        plVar5 = plStack_e0;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pFVar4 != (FString *)0x0) {
      ::FString::FString(__return_storage_ptr__,pFVar4);
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      local_40 = 0;
      if ((void *)local_88._64_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_88);
      return __return_storage_ptr__;
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    local_40 = 0;
    if ((void *)local_88._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TRigVMTypeIndex>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// FindOrAddType_NoLock @ 14a0db1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::FindOrAddType_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          FRigVMTemplateArgumentType *param_1,bool param_2)

{
  ForElementType<TRigVMTypeIndex> FVar1;
  int *piVar2;
  undefined4 uVar3;
  FRigVMTemplateArgumentType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FProperty *pFVar7;
  FRigVMRegistry_NoLock *pFVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  FString *pFVar18;
  size_t sVar19;
  UClass *pUVar20;
  UEnum *pUVar21;
  UStruct *pUVar22;
  UScriptStruct *pUVar23;
  ForElementType<TRigVMTypeIndex> FVar24;
  TRigVMTypeIndex *pTVar25;
  longlong lVar26;
  ForElementType<TRigVMTypeIndex> FVar27;
  ForElementType<TRigVMTypeIndex> FVar28;
  ForElementType<bool> FVar29;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar30;
  TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *pTVar31;
  TObjectPtr<UObject>_u_0 TVar32;
  undefined8 *puVar33;
  TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *pTVar34;
  FName *pFVar35;
  ulonglong uVar36;
  longlong *plVar37;
  ETypeCategory EVar38;
  wchar_t *pwVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  FName *pFVar42;
  TObjectPtr<UObject>_u_0 TVar43;
  ForAnyElementType FVar44;
  int iVar45;
  TObjectPtr<UObject>_u_0 TVar46;
  FNameEntryId FVar47;
  TObjectPtr<UObject>_u_0 TVar48;
  TMap<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
  *this_00;
  undefined1 auStackY_608 [32];
  char local_5b8;
  undefined1 local_5b7;
  undefined1 local_5b6 [6];
  undefined8 local_5b0;
  char local_5a8;
  FRigVMRegistry_NoLock *local_5a0;
  ForAnyElementType *local_598;
  undefined1 local_590 [8];
  FName local_588;
  FName local_580;
  FRigVMTemplateArgumentType local_578;
  FName local_568;
  uint local_560;
  undefined8 local_55c;
  uint local_554;
  undefined2 local_550;
  uint local_54c;
  FRigVMRegistry_NoLock *local_548;
  FName local_540;
  FName local_538;
  ForAnyElementType local_530;
  undefined8 local_528;
  FSoftObjectPath local_520;
  TObjectPtr<UObject>_u_0 local_500;
  FProperty *local_4f8;
  undefined4 local_4f0;
  undefined2 local_4ec;
  undefined1 local_4ea;
  TObjectPtr<UObject>_u_0 local_4e8;
  undefined8 local_4e0;
  int local_4d8;
  FString local_4d0;
  FSoftObjectPath local_4c0;
  TRigVMTypeIndex local_498;
  TRigVMTypeIndex local_488;
  TRigVMTypeIndex local_478;
  TRigVMTypeIndex local_468;
  TRigVMTypeIndex local_458;
  TRigVMTypeIndex local_448;
  TRigVMTypeIndex local_438;
  TRigVMTypeIndex local_428;
  TRigVMTypeIndex local_418;
  TRigVMTypeIndex local_408;
  TRigVMTypeIndex local_3f8;
  TRigVMTypeIndex local_3e8;
  TRigVMTypeIndex local_3d8;
  TRigVMTypeIndex local_3c8;
  TRigVMTypeIndex local_3b8;
  TRigVMTypeIndex local_3a8;
  TRigVMTypeIndex local_398;
  TRigVMTypeIndex local_388;
  TRigVMTypeIndex local_378;
  TRigVMTypeIndex local_368;
  TRigVMTypeIndex local_358;
  TRigVMTypeIndex local_348;
  TRigVMTypeIndex local_338;
  undefined8 local_328;
  TRigVMTypeIndex local_318;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8 [12];
  FName local_2cc;
  FRigVMTemplateArgumentType *local_2c0;
  TRigVMTypeIndex local_2b8;
  FString local_2a8;
  FString local_298;
  TRigVMTypeIndex local_288;
  TRigVMTypeIndex local_278;
  TRigVMTypeIndex local_268;
  TRigVMTypeIndex local_258;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  FName *local_220;
  TRigVMTypeIndex *local_218;
  FName local_208;
  uint local_200;
  FName local_1f8;
  int local_1f0;
  FName local_1e8;
  uint local_1e0;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178 [3];
  undefined1 local_148 [12];
  undefined1 local_13c [12];
  undefined1 local_130 [16];
  ForElementType<TRigVMTypeIndex> local_120;
  int local_f0;
  int local_ec;
  ForElementType<bool> local_e8;
  int local_d8;
  int local_d4 [3];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_608;
  local_548 = this;
  local_2c0 = param_1;
  (**(code **)(this->_padding_ + 0xe0))();
  if (__return_storage_ptr__->Index != -1) {
    return __return_storage_ptr__;
  }
  local_5a8 = this->bIsGlobalRegistry;
  local_580 = (FName)(param_1->CPPTypeObject).field0_0x0.DebugPtr;
  local_588 = param_1->CPPType;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_580 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_580);
  }
  while( true ) {
    pFVar18 = ::FName::ToString(&local_588,&local_1a8);
    sVar19 = wcslen(L"TArray<");
    bVar11 = ::FString::StartsWith(pFVar18,L"TArray<",(int)sVar19,IgnoreCase);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    FVar9 = local_580;
    if (!bVar11) break;
    pFVar18 = ::FName::ToString(&local_588,&local_198);
    iVar13 = (pFVar18->Data).ArrayNum;
    iVar45 = iVar13 + -9;
    if (iVar13 == 0) {
      iVar45 = -8;
    }
    ::FString::Mid(pFVar18,&local_2a8,7,iVar45);
    FVar44.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar44.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    ::FName::FName((FName *)(local_2d8 + 4),(wchar_t *)FVar44.Data);
    local_588.ComparisonIndex.Value = local_2d8._4_4_;
    local_588.Number = local_2d8._8_4_;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
  }
  local_4e8.DebugPtr = (UObject *)local_580;
  if ((param_2) || (local_580 == (FName)0x0)) {
LAB_14a0db3d3:
    local_5b8 = '\0';
    if (FVar9 != (FName)0x0) goto LAB_14a0db3e0;
  }
  else {
    pUVar20 = Cast<UClass,UObject_const_>((UObject *)local_580);
    if (pUVar20 == (UClass *)0x0) {
      pUVar21 = Cast<UEnum,UObject_const_>((UObject *)FVar9);
      if (pUVar21 == (UEnum *)0x0) {
        pUVar22 = Cast<UStruct,UObject_const_>((UObject *)FVar9);
        if (pUVar22 == (UStruct *)0x0) goto LAB_14a0db3d3;
        bVar11 = IsAllowedType_NoLock(this,pUVar22);
      }
      else {
        bVar11 = IsAllowedType_NoLock(this,pUVar21);
      }
    }
    else {
      bVar11 = IsAllowedType_NoLock(this,pUVar20);
    }
    if (!bVar11) {
      return __return_storage_ptr__;
    }
LAB_14a0db3e0:
    local_5b8 = '\0';
    bVar11 = UObjectBaseUtility::IsA<UScriptStruct>((UObjectBaseUtility *)FVar9);
    if (bVar11) {
      pUVar23 = FRigVMExecutePin::StaticStruct();
      if (pUVar23 != (UScriptStruct *)0x0) {
        iVar45 = (int)pUVar23->_padding_;
        if ((iVar45 <= *(int *)((longlong)FVar9 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar9 + 0x30) + (longlong)iVar45 * 8) ==
            &pUVar23->_padding_)) {
          local_5b8 = '\x01';
          goto LAB_14a0db421;
        }
      }
      local_5b8 = '\0';
    }
  }
LAB_14a0db421:
  TVar46.DebugPtr = (UObject *)0x0;
  iVar45 = 0;
  local_120.SecondaryData = (ForElementType<TRigVMTypeIndex>)0x0;
  uVar16 = 0;
  local_f0 = 0;
  local_ec = 3;
  if (local_580 != (FName)0x0) {
    local_4c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_4c0.AssetPath.PackageName.Number = 0;
    local_4c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_4c0.AssetPath.AssetName.Number = 0;
    local_4c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c0.SubPathString.Data.ArrayNum = 0;
    local_4c0.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_4c0,(UObject *)local_580);
    FVar24 = (ForElementType<TRigVMTypeIndex>)
             TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
             ::Find((TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                     *)&this->SoftObjectPathToTypeIndex,&local_4c0);
    if (FVar24 != (ForElementType<TRigVMTypeIndex>)0x0) {
      uVar17 = *(uint *)((longlong)FVar24 + 8);
      uVar14 = uVar16;
      if ((int)uVar17 < (this->Types).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      bVar11 = FTypeInfo::IsUnknownType
                         ((FTypeInfo *)
                          ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30));
      if ((!bVar11) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Types[ExistingIndices->Get<0>()].IsUnknownType()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                              ,0x4a8,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      this = local_548;
      uVar17 = *(uint *)((longlong)FVar24 + 0x14);
      FVar28 = (ForElementType<TRigVMTypeIndex>)((longlong)FVar24 + 0xc);
      uVar14 = uVar16;
      if ((int)uVar17 < (local_548->Types).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      bVar11 = FTypeInfo::IsUnknownType
                         ((FTypeInfo *)
                          ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30));
      if ((!bVar11) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Types[ExistingIndices->Get<1>()].IsUnknownType()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                              ,0x4a9,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      uVar17 = *(uint *)((longlong)FVar24 + 0x20);
      FVar1 = (ForElementType<TRigVMTypeIndex>)((longlong)FVar24 + 0x18);
      uVar14 = uVar16;
      if ((int)uVar17 < (this->Types).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      bVar11 = FTypeInfo::IsUnknownType
                         ((FTypeInfo *)
                          ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30));
      if ((!bVar11) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Types[ExistingIndices->Get<2>()].IsUnknownType()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                              ,0x4aa,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar27 = local_120.SecondaryData;
      }
      if ((ulonglong)FVar27 <= (ulonglong)FVar24) {
        FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
        if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
          FVar27 = local_120.SecondaryData;
        }
        if (((ulonglong)FVar24 < (ulonglong)((longlong)FVar27 + (longlong)local_ec * 0xc)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
          return pTVar25;
        }
      }
      if (local_f0 == local_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRigVMTypeIndex>_>
                             (0x40c,&local_120,&local_ec);
      }
      FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar27 = local_120.SecondaryData;
      }
      lVar26 = (longlong)local_f0;
      local_f0 = local_f0 + 1;
      *(undefined8 *)((longlong)FVar27 + lVar26 * 0xc) = *(undefined8 *)FVar24;
      *(undefined4 *)((uchar *)((longlong)FVar27 + 8) + lVar26 * 0xc) =
           *(undefined4 *)((longlong)FVar24 + 8);
      FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar27 = local_120.SecondaryData;
      }
      if ((ulonglong)FVar27 <= (ulonglong)FVar28) {
        FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
        if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
          FVar27 = local_120.SecondaryData;
        }
        if (((ulonglong)FVar28 < (ulonglong)((longlong)FVar27 + (longlong)local_ec * 0xc)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
          return pTVar25;
        }
      }
      if (local_f0 == local_ec) {
        local_f0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRigVMTypeIndex>_>
                             (0x40c,&local_120,&local_ec);
      }
      FVar27 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar27 = local_120.SecondaryData;
      }
      lVar26 = (longlong)local_f0;
      local_f0 = local_f0 + 1;
      *(undefined8 *)((longlong)FVar27 + lVar26 * 0xc) = *(undefined8 *)FVar28;
      *(undefined4 *)((uchar *)((longlong)FVar27 + 8) + lVar26 * 0xc) =
           *(undefined4 *)((longlong)FVar24 + 0x14);
      FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar28 = local_120.SecondaryData;
      }
      if ((ulonglong)FVar28 <= (ulonglong)FVar1) {
        FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
        if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
          FVar28 = local_120.SecondaryData;
        }
        if (((ulonglong)FVar1 < (ulonglong)((longlong)FVar28 + (longlong)local_ec * 0xc)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
          return pTVar25;
        }
      }
      iVar13 = local_f0;
      if (local_f0 == local_ec) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRigVMTypeIndex>_>
                           (0x40c,&local_120,&local_ec);
      }
      local_f0 = iVar13 + 1;
      FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar28 = local_120.SecondaryData;
      }
      *(undefined8 *)((longlong)FVar28 + (longlong)iVar13 * 0xc) = *(undefined8 *)FVar1;
      *(undefined4 *)((uchar *)((longlong)FVar28 + 8) + (longlong)iVar13 * 0xc) =
           *(undefined4 *)((longlong)FVar24 + 0x20);
    }
    if (local_4c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  local_e8.SecondaryData = (ForElementType<bool>)0x0;
  local_d8 = 0;
  local_d4[0] = 3;
  TVar43.DebugPtr = TVar46.DebugPtr;
  TVar32.DebugPtr = TVar46.DebugPtr;
  do {
    FVar47.Value = TVar32._0_4_;
    uVar17 = 0;
    if ((local_5b8 != '\0') && (1 < FVar47.Value)) break;
    local_540 = local_588;
    local_538 = local_580;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_580 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_580);
    }
    if (FVar47.Value != 0) {
      do {
        pFVar18 = ::FName::ToString(&local_540,&local_188);
        local_4d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4d0.Data.ArrayNum = 0;
        local_4d0.Data.ArrayMax = 0;
        RigVMStringUtils::JoinStrings(&local_298,&local_4d0,pFVar18,L"TArray<",(wchar_t *)0x0,L">");
        if (local_4d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4d0.Data.AllocatorInstance.Data);
        }
        FVar44.Data = (FScriptContainerElement *)L"";
        if (local_298.Data.ArrayNum != 0) {
          FVar44.Data = local_298.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_2cc,(wchar_t *)FVar44.Data);
        local_540 = local_2cc;
        if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        TVar32.DebugPtr = (UObject *)&TVar32.DebugPtr[-1].field_0x27;
        this = local_548;
      } while (TVar32.DebugPtr != (UObject *)0x0);
    }
    FRigVMTemplateArgumentType::FRigVMTemplateArgumentType(&local_578);
    local_578.CPPType = local_540;
    local_568.ComparisonIndex.Value = 0;
    local_568.Number = 0;
    local_560 = 0xffffffff;
    local_55c = 0;
    local_554 = 0xffffffff;
    local_550 = 0;
    local_54c = 0xffffffff;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_538 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_538);
    }
    local_550 = CONCAT11(local_5b8,FVar47.Value != 0);
    local_578.CPPTypeObject.field0_0x0 = (TObjectPtr<UObject>_u_0)local_538;
    if (local_5a8 == '\0') {
      pFVar18 = ::FName::ToString(&local_540,local_178);
      iVar13 = (pFVar18->Data).ArrayNum;
      if (iVar13 == 0) {
        pwVar39 = L"";
        uVar14 = uVar16;
      }
      else {
        pwVar39 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        uVar14 = iVar13 - 1;
      }
      uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar14,pwVar39);
      if (local_178[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178[0].Data.AllocatorInstance.Data);
      }
      if (*(int *)&(this->TypeToIndex).field_0x8 != *(int *)&(this->TypeToIndex).field_0x34) {
        puVar41 = *(undefined1 **)&(this->TypeToIndex).field_0x40;
        puVar40 = &(this->TypeToIndex).field_0x38;
        if (puVar41 != (undefined1 *)0x0) {
          puVar40 = puVar41;
        }
        iVar13 = *(int *)(puVar40 +
                         (ulonglong)(*(int *)&(this->TypeToIndex).field_0x48 - 1U & uVar14) * 4);
        if (iVar13 != -1) {
          lVar26 = *(longlong *)&this->TypeToIndex;
          do {
            if (*(FName *)(lVar26 + (longlong)iVar13 * 0x28) == local_540) {
              if (((iVar13 != -1) && (lVar26 = lVar26 + (longlong)iVar13 * 0x28, lVar26 != 0)) &&
                 (FVar24 = (ForElementType<TRigVMTypeIndex>)(lVar26 + 0x10),
                 FVar24 != (ForElementType<TRigVMTypeIndex>)0x0)) {
                FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
                if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
                  FVar28 = local_120.SecondaryData;
                }
                if ((ulonglong)FVar28 <= (ulonglong)FVar24) {
                  FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
                  if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
                    FVar28 = local_120.SecondaryData;
                  }
                  if (((ulonglong)FVar24 < (ulonglong)((longlong)FVar28 + (longlong)local_ec * 0xc))
                     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
                    return pTVar25;
                  }
                }
                iVar13 = local_f0;
                if (local_f0 == local_ec) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRigVMTypeIndex>_>
                                     (0x40c,&local_120,&local_ec);
                }
                local_5b7 = 0;
                local_f0 = iVar13 + 1;
                FVar28 = (ForElementType<TRigVMTypeIndex>)&local_120;
                if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
                  FVar28 = local_120.SecondaryData;
                }
                *(undefined8 *)((longlong)FVar28 + (longlong)iVar13 * 0xc) = *(undefined8 *)FVar24;
                *(undefined4 *)((uchar *)((longlong)FVar28 + 8) + (longlong)iVar13 * 0xc) =
                     *(undefined4 *)(lVar26 + 0x18);
                FVar29 = (ForElementType<bool>)&local_e8;
                if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
                  FVar29 = local_e8.SecondaryData;
                }
                if ((ulonglong)FVar29 <= &local_5b7) {
                  FVar29 = (ForElementType<bool>)&local_e8;
                  if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
                    FVar29 = local_e8.SecondaryData;
                  }
                  if ((&local_5b7 < (undefined1 *)((longlong)FVar29 + (longlong)local_d4[0])) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
                    return pTVar25;
                  }
                }
                iVar13 = local_d8;
                if (local_d8 == local_d4[0]) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                                     (0x101,&local_e8,local_d4);
                }
                local_d8 = iVar13 + 1;
                uVar12 = local_5b7;
                goto LAB_14a0dc18f;
              }
              break;
            }
            iVar13 = *(int *)(lVar26 + 0x20 + (longlong)iVar13 * 0x28);
          } while (iVar13 != -1);
        }
      }
    }
    if ((int)FVar47.Value < local_f0) {
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      __return_storage_ptr__->Name = *(FName *)((longlong)FVar24 + (longlong)TVar43.DebugPtr * 0xc);
      uVar14 = *(uint *)((uchar *)((longlong)FVar24 + 8) + (longlong)TVar43.DebugPtr * 0xc);
      __return_storage_ptr__->Index = uVar14;
      uVar15 = uVar17;
      if ((int)uVar14 < (this->Types).ArrayNum) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      pFVar42 = (FName *)((this->Types).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x30);
      *pFVar42 = local_578.CPPType;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_578.CPPTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_578.CPPTypeObject.field0_0x0);
      }
      pFVar42[1] = (FName)local_578.CPPTypeObject.field0_0x0;
      pFVar42[2] = local_568;
      pFVar42[3].ComparisonIndex.Value = local_560;
      *(undefined8 *)&pFVar42[3].Number = local_55c;
      pFVar42[4].Number = local_554;
      *(undefined1 *)&pFVar42[5].ComparisonIndex.Value = (undefined1)local_550;
      *(undefined1 *)((longlong)&pFVar42[5].ComparisonIndex.Value + 1) = local_550._1_1_;
      pFVar42[5].Number = local_54c;
    }
    else {
      pFVar4 = (FRigVMTemplateArgumentType *)(this->Types).AllocatorInstance.Data;
      if (((pFVar4 <= &local_578) && (&local_578 < pFVar4 + (longlong)(this->Types).ArrayMax * 3))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      iVar13 = (this->Types).ArrayNum;
      piVar2 = &(this->Types).ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&(this->Types).AllocatorInstance,piVar2);
      }
      pFVar5 = (this->Types).AllocatorInstance.Data;
      (this->Types).ArrayNum = iVar13 + 1;
      pFVar42 = (FName *)(pFVar5 + (longlong)iVar13 * 0x30);
      *pFVar42 = local_578.CPPType;
      pFVar42[1] = (FName)local_578.CPPTypeObject.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_578.CPPTypeObject.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_578.CPPTypeObject.field0_0x0);
      }
      pFVar42[2] = local_568;
      pFVar42[3].ComparisonIndex.Value = local_560;
      *(undefined8 *)&pFVar42[3].Number = local_55c;
      pFVar42[4].Number = local_554;
      *(undefined1 *)&pFVar42[5].ComparisonIndex.Value = (undefined1)local_550;
      *(undefined1 *)((longlong)&pFVar42[5].ComparisonIndex.Value + 1) = local_550._1_1_;
      pFVar42[5].Number = local_54c;
      local_4e0 = 0;
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      __return_storage_ptr__->Index = iVar13;
      local_4d8 = iVar13;
    }
    __return_storage_ptr__->Name = local_578.CPPType;
    local_220 = &local_540;
    local_218 = __return_storage_ptr__;
    TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRigVMTemplateArgumentType_const_&,TRigVMTypeIndex_const_&>_>
              ((TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                *)&this->TypeToIndex,
               (TPairInitializer<FRigVMTemplateArgumentType_const_&,TRigVMTypeIndex_const_&> *)
               local_2d8,(bool *)&local_220);
    if (local_f0 <= (int)FVar47.Value) {
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      if ((ulonglong)FVar24 <= __return_storage_ptr__) {
        FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
        if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
          FVar24 = local_120.SecondaryData;
        }
        if ((__return_storage_ptr__ <
             (TRigVMTypeIndex *)((longlong)FVar24 + (longlong)local_ec * 0xc)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
          return pTVar25;
        }
      }
      iVar13 = local_f0;
      if (local_f0 == local_ec) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TRigVMTypeIndex>_>
                           (0x40c,&local_120,&local_ec);
      }
      local_f0 = iVar13 + 1;
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      *(FName *)((longlong)FVar24 + (longlong)iVar13 * 0xc) = __return_storage_ptr__->Name;
      *(int *)((uchar *)((longlong)FVar24 + 8) + (longlong)iVar13 * 0xc) =
           __return_storage_ptr__->Index;
    }
    local_5b6[0] = 1;
    FVar29 = (ForElementType<bool>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
      FVar29 = local_e8.SecondaryData;
    }
    if ((ulonglong)FVar29 <= local_5b6) {
      FVar29 = (ForElementType<bool>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
        FVar29 = local_e8.SecondaryData;
      }
      if ((local_5b6 < (undefined1 *)((longlong)FVar29 + (longlong)local_d4[0])) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
    }
    iVar13 = local_d8;
    if (local_d8 == local_d4[0]) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<bool>_>
                         (0x101,&local_e8,local_d4);
    }
    local_d8 = iVar13 + 1;
    uVar12 = local_5b6[0];
LAB_14a0dc18f:
    FVar29 = (ForElementType<bool>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
      FVar29 = local_e8.SecondaryData;
    }
    TVar32._0_4_ = FVar47.Value + 1;
    TVar32._4_4_ = 0;
    TVar43.DebugPtr = (UObject *)&(TVar43.DebugPtr)->field_0x1;
    *(undefined1 *)((longlong)iVar13 + (longlong)FVar29) = uVar12;
  } while ((int)TVar32._0_4_ < 3);
  if (1 < local_f0) {
    if ((local_f0 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
    if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
      FVar24 = local_120.SecondaryData;
    }
    local_5b0 = *(undefined8 *)FVar24;
    uVar3 = *(undefined4 *)((longlong)FVar24 + 8);
    if ((local_f0 < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
    if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
      FVar24 = local_120.SecondaryData;
    }
    uVar16 = *(uint *)((longlong)FVar24 + 0x14);
    uVar14 = uVar17;
    if ((int)uVar16 < (this->Types).ArrayNum) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    pFVar5 = (this->Types).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x10) = local_5b0;
    *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x18) = uVar3;
    if ((local_f0 < 2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
    if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
      FVar24 = local_120.SecondaryData;
    }
    local_5b0 = *(undefined8 *)((longlong)FVar24 + 0xc);
    uVar3 = *(undefined4 *)((longlong)FVar24 + 0x14);
    if ((local_f0 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
    if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
      FVar24 = local_120.SecondaryData;
    }
    uVar16 = *(uint *)((longlong)FVar24 + 8);
    uVar14 = uVar17;
    if ((int)uVar16 < (this->Types).ArrayNum) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    pFVar5 = (this->Types).AllocatorInstance.Data;
    *(undefined8 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x1c) = local_5b0;
    *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x24) = uVar3;
    if ((local_5b8 == '\0') && (2 < local_f0)) {
      if ((local_f0 < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      local_5b0 = *(undefined8 *)((longlong)FVar24 + 0xc);
      uVar3 = *(undefined4 *)((longlong)FVar24 + 0x14);
      if ((local_f0 < 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      uVar16 = *(uint *)((longlong)FVar24 + 0x20);
      uVar14 = uVar17;
      if ((int)uVar16 < (this->Types).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      pFVar5 = (this->Types).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x10) = local_5b0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x18) = uVar3;
      if ((local_f0 < 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      local_5b0 = *(undefined8 *)((longlong)FVar24 + 0x18);
      uVar3 = *(undefined4 *)((longlong)FVar24 + 0x20);
      if ((local_f0 < 2) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      uVar16 = *(uint *)((longlong)FVar24 + 0x14);
      uVar14 = uVar17;
      if ((int)uVar16 < (this->Types).ArrayNum) {
        uVar14 = ~uVar16 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      pFVar5 = (this->Types).AllocatorInstance.Data;
      *(undefined8 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x1c) = local_5b0;
      *(undefined4 *)(pFVar5 + (longlong)(int)uVar16 * 0x30 + 0x24) = uVar3;
    }
  }
  local_530.Data = (FScriptContainerElement *)0x0;
  local_528 = 0;
  TVar43.DebugPtr = TVar46.DebugPtr;
  TVar32.DebugPtr = TVar46.DebugPtr;
  TVar48.DebugPtr = TVar46.DebugPtr;
  local_5a0 = this;
  local_598 = &local_530;
LAB_14a0dc670:
  do {
    FVar47.Value = TVar43._0_4_;
    if ((local_5b8 != '\0') && (1 < (int)FVar47.Value)) break;
    uVar16 = uVar17;
    if ((int)FVar47.Value < local_d8) {
      uVar16 = ~FVar47.Value >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
      return pTVar25;
    }
    FVar29 = (ForElementType<bool>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
      FVar29 = local_e8.SecondaryData;
    }
    if ((&(TVar48.DebugPtr)->field_0x0)[(longlong)FVar29] != '\0') {
      uVar16 = uVar17;
      if ((int)FVar47.Value < local_f0) {
        uVar16 = ~FVar47.Value >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        pTVar25 = (TRigVMTypeIndex *)(*pcVar6)();
        return pTVar25;
      }
      TVar43 = local_4e8;
      pFVar8 = local_5a0;
      FVar24 = (ForElementType<TRigVMTypeIndex>)&local_120;
      if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
        FVar24 = local_120.SecondaryData;
      }
      pFVar42 = (FName *)(&(TVar32.DebugPtr)->field_0x0 + (longlong)FVar24);
      __return_storage_ptr__->Name = *(FName *)(&(TVar32.DebugPtr)->field_0x0 + (longlong)FVar24);
      __return_storage_ptr__->Index = pFVar42[1].ComparisonIndex.Value;
      if ((FName)local_4e8.DebugPtr == (FName)0x0) {
        if (FVar47.Value != 0) {
          if (FVar47.Value == 1) {
            local_2b8.Index = pFVar42[1].ComparisonIndex.Value;
            local_2b8.Name = *pFVar42;
            local_5b0 = CONCAT44(local_5b0._4_4_,local_2b8.Index);
            local_208 = local_2b8.Name;
            local_200 = local_2b8.Index;
            pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_ArraySimpleValue);
            TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TRigVMTypeIndex_const_&>(pTVar30,&local_2b8);
            iVar13 = (int)local_528;
            if ((int)local_528 == local_528._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_530,(int *)((longlong)&local_528 + 4));
            }
            local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x5;
            *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
            local_288.Index = __return_storage_ptr__->Index;
            local_288.Name = __return_storage_ptr__->Name;
            local_5b0 = CONCAT44(local_5b0._4_4_,local_288.Index);
            local_1f8 = local_288.Name;
            local_1f0 = local_288.Index;
            local_528._0_4_ = iVar13 + 1;
            pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_ArrayAnyValue);
            TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TRigVMTypeIndex_const_&>(pTVar30,&local_288);
            iVar13 = (int)local_528;
            if ((int)local_528 == local_528._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_530,(int *)((longlong)&local_528 + 4));
            }
            local_528 = CONCAT44(local_528._4_4_,iVar13 + 1);
            TVar43 = (TObjectPtr<UObject>_u_0)0x2;
            TVar48.DebugPtr = (UObject *)&(TVar48.DebugPtr)->field_0x1;
            TVar32.DebugPtr = (UObject *)&(TVar32.DebugPtr)->field_0xc;
            local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x2;
            *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
            goto LAB_14a0dc670;
          }
          if (FVar47.Value == 2) {
            local_3a8.Name = *pFVar42;
            uVar3 = pFVar42[1].ComparisonIndex.Value;
            local_3a8.Index = uVar3;
            pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_ArrayArraySimpleValue
                                   );
            TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TRigVMTypeIndex_const_&>(pTVar30,&local_3a8);
            iVar13 = (int)local_528;
            if ((int)local_528 == local_528._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_530,(int *)((longlong)&local_528 + 4));
            }
            local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x6;
            *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = uVar3;
            uVar3 = __return_storage_ptr__->Index;
            local_398.Name = __return_storage_ptr__->Name;
            local_398.Index = uVar3;
            local_528._0_4_ = iVar13 + 1;
            pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindChecked(&pFVar8->TypesPerCategory,ETypeCategory_ArrayArrayAnyValue);
            TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TRigVMTypeIndex_const_&>(pTVar30,&local_398);
            iVar13 = (int)local_528;
            if ((int)local_528 == local_528._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_530,(int *)((longlong)&local_528 + 4));
            }
            local_528 = CONCAT44(local_528._4_4_,iVar13 + 1);
            local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x3;
            *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = uVar3;
            break;
          }
        }
        local_278.Index = pFVar42[1].ComparisonIndex.Value;
        local_278.Name = *pFVar42;
        local_5b0 = CONCAT44(local_5b0._4_4_,local_278.Index);
        local_1e8 = local_278.Name;
        local_1e0 = local_278.Index;
        pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_SingleSimpleValue);
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
                  (pTVar30,&local_278);
        iVar13 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_530,(int *)((longlong)&local_528 + 4));
        }
        local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x4;
        *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
        local_268.Index = __return_storage_ptr__->Index;
        local_268.Name = __return_storage_ptr__->Name;
        local_5b0 = CONCAT44(local_5b0._4_4_,local_268.Index);
        local_1d8 = local_268.Name;
        local_1d0 = local_268.Index;
        local_528._0_4_ = iVar13 + 1;
        pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_SingleAnyValue);
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
                  (pTVar30,&local_268);
        iVar13 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_530,(int *)((longlong)&local_528 + 4));
          local_528 = CONCAT44(local_528._4_4_,iVar13 + 1);
          local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x1;
          *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
          goto LAB_14a0dcda1;
        }
      }
      else {
        pUVar20 = Z_Construct_UClass_UClass_NoRegister();
        iVar13 = (int)pUVar20->_padding_;
        if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) +
             (longlong)iVar13 * 8) != &pUVar20->_padding_)) {
          pUVar20 = Z_Construct_UClass_UEnum_NoRegister();
          iVar13 = (int)pUVar20->_padding_;
          if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) +
               (longlong)iVar13 * 8) != &pUVar20->_padding_)) {
            pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
            iVar13 = (int)pUVar20->_padding_;
            if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) +
                 (longlong)iVar13 * 8) != &pUVar20->_padding_)) goto LAB_14a0dcda1;
            pUVar23 = FRigVMExecutePin::StaticStruct();
            if (pUVar23 != (UScriptStruct *)0x0) {
              iVar13 = (int)pUVar23->_padding_;
              if ((*(int *)&TVar43.DebugPtr[1].field_0x10 < iVar13) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)&TVar43.DebugPtr[1].field_0x8 + (longlong)iVar13 * 8) !=
                  &pUVar23->_padding_)) {
                bVar11 = false;
              }
              else {
                bVar11 = true;
              }
              if (!bVar11) goto LAB_14a0dcc9c;
              if (FVar47.Value != 0) goto LAB_14a0dcda1;
              local_428.Name = __return_storage_ptr__->Name;
              pTVar25 = &local_428;
              local_428.Index = __return_storage_ptr__->Index;
              EVar38 = ETypeCategory_Execute;
LAB_14a0dce03:
              `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                        (&local_5a0,EVar38,pTVar25);
              TVar43._0_4_ = FVar47.Value + 1;
              TVar43._4_4_ = 0;
              TVar48.DebugPtr = (UObject *)&(TVar48.DebugPtr)->field_0x1;
              TVar32.DebugPtr = (UObject *)&(TVar32.DebugPtr)->field_0xc;
              goto LAB_14a0dc670;
            }
LAB_14a0dcc9c:
            pTVar31 = GetMathTypes();
            pFVar35 = (FName *)(pTVar31->AllocatorInstance).Data;
            pFVar42 = pFVar35 + pTVar31->ArrayNum;
            for (; pFVar35 != pFVar42; pFVar35 = pFVar35 + 1) {
              if (*pFVar35 == (FName)TVar43.DebugPtr) {
                if (FVar47.Value == 0) {
LAB_14a0dcd15:
                  local_3f8.Name = __return_storage_ptr__->Name;
                  pTVar25 = &local_3f8;
                  local_3f8.Index = __return_storage_ptr__->Index;
                  EVar38 = ETypeCategory_SingleMathStructValue;
                }
                else if (FVar47.Value == 1) {
                  local_408.Name = __return_storage_ptr__->Name;
                  pTVar25 = &local_408;
                  local_408.Index = __return_storage_ptr__->Index;
                  EVar38 = ETypeCategory_ArrayMathStructValue;
                }
                else {
                  if (FVar47.Value != 2) goto LAB_14a0dcd15;
                  local_418.Name = __return_storage_ptr__->Name;
                  pTVar25 = &local_418;
                  local_418.Index = __return_storage_ptr__->Index;
                  EVar38 = ETypeCategory_ArrayArrayMathStructValue;
                }
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,EVar38,pTVar25);
                break;
              }
            }
            if (FVar47.Value != 0) {
              if (FVar47.Value == 1) {
                local_3e8.Name = __return_storage_ptr__->Name;
                local_3e8.Index = __return_storage_ptr__->Index;
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,ETypeCategory_ArrayScriptStructValue,&local_3e8);
                local_3d8.Name = __return_storage_ptr__->Name;
                pTVar25 = &local_3d8;
                local_3d8.Index = __return_storage_ptr__->Index;
                EVar38 = ETypeCategory_ArrayAnyValue;
                goto LAB_14a0dce03;
              }
              if (FVar47.Value == 2) {
                local_348.Name = __return_storage_ptr__->Name;
                local_348.Index = __return_storage_ptr__->Index;
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,ETypeCategory_ArrayArrayScriptStructValue,&local_348);
                local_338.Name = __return_storage_ptr__->Name;
                pTVar25 = &local_338;
                local_338.Index = __return_storage_ptr__->Index;
                goto LAB_14a0dcfc3;
              }
            }
            local_3c8.Name = __return_storage_ptr__->Name;
            local_3c8.Index = __return_storage_ptr__->Index;
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_SingleScriptStructValue,&local_3c8);
            local_3b8.Name = __return_storage_ptr__->Name;
            pTVar25 = &local_3b8;
            local_3b8.Index = __return_storage_ptr__->Index;
          }
          else {
            if (FVar47.Value != 0) {
              if (FVar47.Value == 1) {
                local_468.Name = __return_storage_ptr__->Name;
                local_468.Index = __return_storage_ptr__->Index;
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,ETypeCategory_ArrayEnumValue,&local_468);
                local_458.Name = __return_storage_ptr__->Name;
                local_458.Index = __return_storage_ptr__->Index;
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,ETypeCategory_ArrayAnyValue,&local_458);
                TVar43 = (TObjectPtr<UObject>_u_0)0x2;
                TVar48.DebugPtr = (UObject *)&(TVar48.DebugPtr)->field_0x1;
                TVar32.DebugPtr = (UObject *)&(TVar32.DebugPtr)->field_0xc;
                goto LAB_14a0dc670;
              }
              if (FVar47.Value == 2) {
                local_368.Name = __return_storage_ptr__->Name;
                local_368.Index = __return_storage_ptr__->Index;
                `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                          (&local_5a0,ETypeCategory_ArrayArrayEnumValue,&local_368);
                local_358.Name = __return_storage_ptr__->Name;
                pTVar25 = &local_358;
                local_358.Index = __return_storage_ptr__->Index;
                goto LAB_14a0dcfc3;
              }
            }
            local_448.Name = __return_storage_ptr__->Name;
            local_448.Index = __return_storage_ptr__->Index;
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_SingleEnumValue,&local_448);
            local_438.Name = __return_storage_ptr__->Name;
            pTVar25 = &local_438;
            local_438.Index = __return_storage_ptr__->Index;
          }
          `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                    (&local_5a0,ETypeCategory_SingleAnyValue,pTVar25);
          goto LAB_14a0dcda1;
        }
        if (FVar47.Value != 0) {
          if (FVar47.Value == 1) {
            local_258.Name = __return_storage_ptr__->Name;
            local_258.Index = __return_storage_ptr__->Index;
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_ArrayObjectValue,&local_258);
            local_498.Name = __return_storage_ptr__->Name;
            local_498.Index = __return_storage_ptr__->Index;
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_ArrayAnyValue,&local_498);
            TVar43 = (TObjectPtr<UObject>_u_0)0x2;
            TVar48.DebugPtr = (UObject *)&(TVar48.DebugPtr)->field_0x1;
            TVar32.DebugPtr = (UObject *)&(TVar32.DebugPtr)->field_0xc;
            goto LAB_14a0dc670;
          }
          if (FVar47.Value == 2) {
            local_388.Name = __return_storage_ptr__->Name;
            local_388.Index = __return_storage_ptr__->Index;
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_ArrayArrayObjectValue,&local_388);
            local_378.Name = __return_storage_ptr__->Name;
            pTVar25 = &local_378;
            local_378.Index = __return_storage_ptr__->Index;
LAB_14a0dcfc3:
            `FRigVMRegistry_NoLock::FindOrAddType_NoLock'::__l5::<lambda_1>::operator()
                      (&local_5a0,ETypeCategory_ArrayArrayAnyValue,pTVar25);
            break;
          }
        }
        local_488.Index = __return_storage_ptr__->Index;
        local_488.Name = __return_storage_ptr__->Name;
        local_5b0 = CONCAT44(local_5b0._4_4_,local_488.Index);
        local_1c8 = local_488.Name;
        local_1c0 = local_488.Index;
        pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_SingleObjectValue);
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
                  (pTVar30,&local_488);
        iVar13 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_530,(int *)((longlong)&local_528 + 4));
        }
        local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x10;
        *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
        local_478.Index = __return_storage_ptr__->Index;
        local_478.Name = __return_storage_ptr__->Name;
        local_5b0 = CONCAT44(local_5b0._4_4_,local_478.Index);
        local_1b8 = local_478.Name;
        local_1b0 = local_478.Index;
        local_528._0_4_ = iVar13 + 1;
        pTVar30 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked(&local_5a0->TypesPerCategory,ETypeCategory_SingleAnyValue);
        TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
                  (pTVar30,&local_478);
        iVar13 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_530,(int *)((longlong)&local_528 + 4));
        }
      }
      local_528 = CONCAT44(local_528._4_4_,iVar13 + 1);
      local_530.Data[(longlong)iVar13 * 8] = (FScriptContainerElement)0x1;
      *(undefined4 *)(local_530.Data + (longlong)iVar13 * 8 + 4) = (undefined4)local_5b0;
    }
LAB_14a0dcda1:
    TVar43._0_4_ = FVar47.Value + 1;
    TVar43._4_4_ = 0;
    TVar48.DebugPtr = (UObject *)&(TVar48.DebugPtr)->field_0x1;
    TVar32.DebugPtr = (UObject *)&(TVar32.DebugPtr)->field_0xc;
  } while ((int)TVar43._0_4_ < 3);
  pFVar8 = local_548;
  iVar13 = (int)local_528;
  uVar36 = (ulonglong)(int)local_528;
  pFVar5 = local_530.Data + uVar36 * 8;
  FVar44.Data = local_530.Data;
  while( true ) {
    if ((int)uVar36 != iVar13) {
      `TCheckedPointerIterator<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,int>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_590);
    }
    TVar43 = local_4e8;
    if (FVar44.Data == pFVar5) break;
    local_318.Index = *(int *)(FVar44.Data + 4);
    local_328 = 0;
    local_318.Name.ComparisonIndex.Value = 0;
    local_318.Name.Number = 0;
    PropagateTypeAddedToCategory_NoLock(pFVar8,(ETypeCategory)*FVar44.Data,&local_318);
    uVar36 = local_528 & 0xffffffff;
    FVar44.Data = FVar44.Data + 8;
  }
  if ((FName)local_4e8.DebugPtr == (FName)0x0) {
LAB_14a0dd05f:
    TVar32.DebugPtr = TVar46.DebugPtr;
  }
  else {
    pUVar20 = Z_Construct_UClass_UStruct_NoRegister();
    iVar13 = (int)pUVar20->_padding_;
    if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
       (TVar32 = TVar43,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar13 * 8)
       != &pUVar20->_padding_)) goto LAB_14a0dd05f;
  }
  if ((FName)TVar32.DebugPtr != (FName)0x0) {
    local_4f8 = *(FProperty **)(TVar32.DebugPtr + 2);
    local_4f0 = 0xffffffff;
    local_4ec = 0x101;
    local_4ea = 0;
    local_500 = TVar32;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_500.ObjectPtr);
    pFVar7 = local_4f8;
    while (local_4f8 = pFVar7, pFVar7 != (FProperty *)0x0) {
      bVar11 = IsAllowedType_NoLock(pFVar8,pFVar7);
      if (bVar11) {
        FRigVMTemplateArgument::FRigVMTemplateArgument
                  ((FRigVMTemplateArgument *)local_c8,pFVar7,&pFVar8->ThisHandle);
        if (local_c8._64_8_ != 0) {
          plVar37 = (longlong *)(local_c8 + 0x50);
          if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
            plVar37 = (longlong *)local_c8._104_8_;
          }
          (**(code **)(*plVar37 + 0x10))();
        }
        if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c8._40_8_);
        }
        if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c8._16_8_);
        }
      }
      local_4f8 = (FProperty *)pFVar7->_padding_;
      TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_500.ObjectPtr);
      pFVar7 = local_4f8;
    }
  }
  pFVar42 = (FName *)(**(code **)(pFVar8->_padding_ + 0xe0))(pFVar8,local_148,local_2c0);
  __return_storage_ptr__->Name = *pFVar42;
  __return_storage_ptr__->Index = pFVar42[1].ComparisonIndex.Value;
  if (((FName)TVar43.DebugPtr != (FName)0x0) &&
     ((*(uint *)&(TVar43.DebugPtr)->field_0x8 >> 0x1e & 1) == 0)) {
    pUVar20 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar13 = (int)pUVar20->_padding_;
    if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar13 * 8)
        != &pUVar20->_padding_)) {
      pUVar20 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
      iVar13 = (int)pUVar20->_padding_;
      if ((*(int *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x38) < iVar13) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&(TVar43.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar13 * 8
           ) != &pUVar20->_padding_)) goto LAB_14a0dd395;
    }
    (**(code **)(pFVar8->_padding_ + 0xe0))(pFVar8,&local_308,&local_588);
    uStack_240 = local_300;
    local_2f0 = local_300;
    local_248 = local_308;
    local_2f8 = local_308;
    puVar33 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x148))(pFVar8,local_13c,&local_2f8);
    local_2e0 = *(undefined4 *)(puVar33 + 1);
    local_2e8 = *puVar33;
    uStack_23c = (undefined4)local_2e8;
    uStack_238 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    uStack_234 = local_2e0;
    puVar33 = (undefined8 *)(**(code **)(pFVar8->_padding_ + 0x148))(pFVar8,local_130,&local_2e8);
    pFVar8 = local_548;
    local_520.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_520.AssetPath.PackageName.Number = 0;
    this_00 = &local_548->SoftObjectPathToTypeIndex;
    local_520.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_520.AssetPath.AssetName.Number = 0;
    uStack_230 = *puVar33;
    uVar3 = *(undefined4 *)(puVar33 + 1);
    local_520.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.SubPathString.Data.ArrayNum = 0;
    local_520.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_520,TVar43.DebugPtr);
    FVar10 = local_520.AssetPath.AssetName;
    uVar16 = ::GetTypeHash(local_520.AssetPath.AssetName.ComparisonIndex.Value);
    FVar9 = local_520.AssetPath.PackageName;
    uVar17 = ::GetTypeHash(local_520.AssetPath.PackageName.ComparisonIndex.Value);
    uVar17 = uVar17 + FVar9.Number;
    uVar17 = uVar17 * 0x40 + -0x61c88647 + FVar10.Number + uVar16 + (uVar17 >> 2) ^ uVar17;
    if (1 < local_520.SubPathString.Data.ArrayNum) {
      FVar44.Data = (FScriptContainerElement *)"";
      if (local_520.SubPathString.Data.ArrayNum != 0) {
        iVar45 = local_520.SubPathString.Data.ArrayNum + -1;
        FVar44.Data = local_520.SubPathString.Data.AllocatorInstance.Data;
      }
      uVar16 = FCrc::Strihash_DEPRECATED<char8_t>(iVar45,(uchar *)FVar44.Data);
      uVar17 = uVar17 ^ uVar16 + uVar17 * 0x40 + -0x61c88647 + (uVar17 >> 2);
    }
    if (*(int *)&(pFVar8->SoftObjectPathToTypeIndex).field_0x8 !=
        *(int *)&(pFVar8->SoftObjectPathToTypeIndex).field_0x34) {
      puVar41 = *(undefined1 **)&(pFVar8->SoftObjectPathToTypeIndex).field_0x40;
      if (puVar41 == (undefined1 *)0x0) {
        puVar41 = &(pFVar8->SoftObjectPathToTypeIndex).field_0x38;
      }
      for (iVar45 = *(int *)(puVar41 +
                            (ulonglong)
                            (*(int *)&(pFVar8->SoftObjectPathToTypeIndex).field_0x48 - 1U & uVar17)
                            * 4); iVar45 != -1;
          iVar45 = *(int *)((longlong)iVar45 * 0x50 + 0x48 + *(longlong *)this_00)) {
        bVar11 = FSoftObjectPath::operator==
                           ((FSoftObjectPath *)(*(longlong *)this_00 + (longlong)iVar45 * 0x50),
                            &local_520);
        if (bVar11) {
          if ((iVar45 != -1) &&
             (lVar26 = (longlong)iVar45 * 0x50 + *(longlong *)this_00, lVar26 != 0)) {
            pTVar34 = (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)(lVar26 + 0x20);
            goto LAB_14a0dd36e;
          }
          break;
        }
      }
    }
    pTVar34 = TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
              ::EmplaceByHash<FSoftObjectPath>
                        ((TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                          *)this_00,uVar17,&local_520);
LAB_14a0dd36e:
    *(undefined8 *)pTVar34 = local_248;
    *(ulonglong *)&pTVar34->field_0x8 = CONCAT44(uStack_23c,uStack_240);
    *(ulonglong *)&pTVar34->field_0x10 = CONCAT44(uStack_234,uStack_238);
    *(undefined8 *)&pTVar34->field_0x18 = uStack_230;
    *(undefined4 *)&pTVar34->field_0x20 = uVar3;
    if (local_520.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_520.SubPathString.Data.AllocatorInstance.Data);
    }
  }
LAB_14a0dd395:
  if (local_530.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data);
  }
  if (local_e8.SecondaryData != (ForElementType<bool>)0x0) {
    FMemory::Free((void *)local_e8.SecondaryData);
  }
  if (local_120.SecondaryData != (ForElementType<TRigVMTypeIndex>)0x0) {
    FMemory::Free((void *)local_120.SecondaryData);
  }
  return __return_storage_ptr__;
}

// FindTemplate_NoLock @ 14a0ddaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FRigVMTemplate * __thiscall
FRigVMRegistry_NoLock::FindTemplate_NoLock(FRigVMRegistry_NoLock *this,FName *param_1,bool param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,int> *pTVar6;
  FRigVMTemplate *pFVar7;
  UScriptStruct *pUVar8;
  FRigVMDispatchFactory *pFVar9;
  FName FVar10;
  FRigVMTemplate *pFVar11;
  size_t sVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  FScriptContainerElement *pFVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  FRigVMTemplate *pFVar22;
  undefined1 auStackY_2f8 [32];
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FName local_270;
  FName local_268;
  FString local_260;
  initializer_list<TPairInitializer<FString_const_&,FString_const_&>_> local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  TPairInitializer<FString_const_&,FString_const_&> local_208;
  FString *local_1f8;
  FString *local_1f0;
  TPairInitializer<FString_const_&,FString_const_&> local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  undefined1 local_1a8 [32];
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  if (*param_1 == (FName)0x0) {
    return (FRigVMTemplate *)0x0;
  }
  pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
           Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&this->TemplateNotationToIndex,*param_1);
  pFVar11 = (FRigVMTemplate *)0x0;
  pFVar7 = (FRigVMTemplate *)&pTVar6->field_0x8;
  if (pTVar6 == (TTuple<FName,int> *)0x0) {
    pFVar7 = pFVar11;
  }
  if (pFVar7 != (FRigVMTemplate *)0x0) {
    pFVar7 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (&this->Templates,
                        *(int *)&((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->Index)->
                                 AllocatorInstance);
    if (pFVar7->Notation != (FName)0x0) {
      return pFVar7;
    }
    return (FRigVMTemplate *)0x0;
  }
  ::FName::ToString(param_1,&local_218);
  local_2a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.Data.ArrayNum = 0;
  local_2a0.Data.ArrayMax = 0;
  local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.Data.ArrayNum = 0;
  local_280.Data.ArrayMax = 0;
  ::FString::FString(&local_260,L"(");
  bVar3 = ::FString::Split(&local_218,&local_260,&local_2a0,&local_280);
  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  uVar21 = (ulonglong)_tls_index;
  if (bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FString::FString(&local_228,L"Equals::Execute");
      pcVar2 = *(code **)(this->_padding_ + 0x198);
      pUVar8 = FRigVMDispatch_CoreEquals::StaticStruct();
      pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,pUVar8);
      FVar10 = FRigVMDispatchFactory::GetFactoryName(pFVar9);
      local_208.Value = ::FName::ToString((FName *)FVar10,&local_1c8);
      local_208.Key = &local_228;
      ::FString::FString(&local_238,L"NotEquals::Execute");
      pcVar2 = *(code **)(this->_padding_ + 0x198);
      pUVar8 = FRigVMDispatch_CoreNotEquals::StaticStruct();
      pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,pUVar8);
      FVar10 = FRigVMDispatchFactory::GetFactoryName(pFVar9);
      local_1f0 = ::FName::ToString((FName *)FVar10,&local_1d8);
      local_1f8 = &local_238;
      local_248._First = &local_208;
      local_248._Last = &local_1e8;
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                (&CoreDispatchMap,&local_248);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      atexit(`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l14::
             _dynamic_atexit_destructor_for__CoreDispatchMap__);
      _Init_thread_footer(&::_TSS0);
    }
    uVar4 = local_2a0.Data.ArrayNum - 1;
    FVar14.Data = local_2a0.Data.AllocatorInstance.Data;
    if (local_2a0.Data.ArrayNum == 0) {
      uVar4 = 0;
      FVar14.Data = (FScriptContainerElement *)L"";
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar14.Data);
    iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)&CoreDispatchMap,uVar4,&local_2a0);
    if (iVar5 != -1) {
      lVar16 = CoreDispatchMap._0_8_ + (longlong)iVar5 * 0x28;
      pFVar7 = (FRigVMTemplate *)(lVar16 + 0x10);
      if (lVar16 == 0) {
        pFVar7 = pFVar11;
      }
      if (pFVar7 != (FRigVMTemplate *)0x0) {
        ::FString::operator=(&local_2a0,(FString *)pFVar7);
      }
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_2a0.Data.ArrayNum != 0) {
      FVar14.Data = local_2a0.Data.AllocatorInstance.Data;
    }
    pcVar2 = *(code **)(this->_padding_ + 400);
    ::FName::FName(&local_270,(wchar_t *)FVar14.Data);
    pFVar9 = (FRigVMDispatchFactory *)(*pcVar2)(this,&local_270);
    if (pFVar9 != (FRigVMDispatchFactory *)0x0) {
      pFVar11 = FRigVMDispatchFactory::GetTemplate_NoLock(pFVar9,&this->ThisHandle);
      goto LAB_14a0de27a;
    }
  }
  if (param_2) {
    pTVar6 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
             Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&this->DeprecatedTemplateNotationToIndex,*param_1);
    pFVar7 = (FRigVMTemplate *)&pTVar6->field_0x8;
    if (pTVar6 == (TTuple<FName,int> *)0x0) {
      pFVar7 = pFVar11;
    }
    if (pFVar7 != (FRigVMTemplate *)0x0) {
      pFVar11 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                          (&this->DeprecatedTemplates,
                           *(int *)&((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar7->Index)
                                    ->AllocatorInstance);
      goto LAB_14a0de27a;
    }
  }
  ::FName::ToString(param_1,&local_290);
  FVar14.Data = local_290.Data.AllocatorInstance.Data;
  local_2b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = local_290.Data.ArrayNum;
  local_2b0.Data.ArrayNum = iVar5;
  if (iVar5 == 0) {
    local_2b0.Data.ArrayMax = 0;
    iVar5 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar5,0,(ForAnyElementType *)&local_2b0,iVar5,&local_2b0.Data.ArrayMax);
    memcpy(local_2b0.Data.AllocatorInstance.Data,FVar14.Data,(longlong)iVar5 * 2);
    iVar5 = local_290.Data.ArrayNum;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS1)
  {
    _Init_thread_header(&::_TSS1);
    if (::_TSS1 == -1) {
      ::FString::FString((FString *)local_1a8,
                         L"FRigUnit_SequenceExecution::Execute(in ExecuteContext,out A,out B,out C,out D)"
                        );
      ::FString::FString((FString *)(local_1a8 + 0x10),L"FRigUnit_SequenceExecution::Execute()");
      ::FString::FString(&local_188,
                         L"FRigUnit_SequenceAggregate::Execute(in ExecuteContext,out A,out B)");
      ::FString::FString(&local_178,L"FRigUnit_SequenceAggregate::Execute()");
      ::FString::FString(&local_168,L",io ExecuteContext");
      ::FString::FString(&local_158,L"");
      ::FString::FString(&local_148,L"io ExecuteContext,");
      ::FString::FString(&local_138,L"");
      ::FString::FString(&local_128,L"(io ExecuteContext)");
      ::FString::FString(&local_118,L"()");
      ::FString::FString(&local_108,L",out ExecuteContext");
      ::FString::FString(&local_f8,L"");
      ::FString::FString(&local_e8,L"out ExecuteContext,");
      ::FString::FString(&local_d8,L"");
      ::FString::FString(&local_c8,L"(out ExecuteContext)");
      ::FString::FString(&local_b8,L"()");
      ::FString::FString(&local_a8,L",out Completed");
      ::FString::FString(&local_98,L"");
      ::FString::FString(&local_88,L"out Completed,");
      ::FString::FString(&local_78,L"");
      ::FString::FString(&local_68,L"(out Completed)");
      ::FString::FString(&local_58,L"()");
      lVar16 = 0xb;
      ExecuteContextArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ExecuteContextArgs.ArrayNum = 0xb;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0xb,0,&ExecuteContextArgs.AllocatorInstance,0xb,&ExecuteContextArgs.ArrayMax
                );
      ConstructItems<TTuple<FString,FString>,TTuple<FString,FString>,int>
                (ExecuteContextArgs.AllocatorInstance.Data,(TTuple<FString,FString> *)local_1a8,0xb)
      ;
      puVar17 = local_48;
      do {
        puVar1 = puVar17 + -2;
        puVar17 = puVar17 + -4;
        lVar16 = lVar16 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          FMemory::Free((void *)*puVar1);
        }
        if ((void *)*puVar17 != (void *)0x0) {
          FMemory::Free((void *)*puVar17);
        }
      } while (lVar16 != 0);
      atexit(`FRigVMRegistry_NoLock::FindTemplate_NoLock'::__l27::
             _dynamic_atexit_destructor_for__ExecuteContextArgs__);
      _Init_thread_footer(&::_TSS1);
    }
    iVar5 = local_290.Data.ArrayNum;
  }
  pFVar7 = pFVar11;
  pFVar22 = pFVar11;
  if (0 < ExecuteContextArgs.ArrayNum) {
    do {
      uVar15 = (uint)pFVar7;
      uVar4 = 0;
      if ((int)uVar15 < ExecuteContextArgs.ArrayNum) {
        uVar4 = ~uVar15 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FRigVMTemplate *)(*pcVar2)();
        return pFVar7;
      }
      pFVar18 = ExecuteContextArgs.AllocatorInstance.Data + (longlong)pFVar22;
      if (*(int *)(pFVar18 + 8) == 0) {
        pwVar20 = L"";
LAB_14a0de13c:
        sVar12 = wcslen(pwVar20);
        iVar5 = ::FString::Find(&local_2b0,pwVar20,(int)sVar12,IgnoreCase,FromStart,-1);
        if (iVar5 != -1) {
          if (*(int *)(pFVar18 + 0x18) == 0) {
            pwVar20 = L"";
          }
          else {
            pwVar20 = *(wchar_t **)(pFVar18 + 0x10);
          }
          if (*(int *)(pFVar18 + 8) == 0) {
            pwVar19 = L"";
          }
          else {
            pwVar19 = *(wchar_t **)pFVar18;
          }
          pFVar13 = ::FString::Replace(&local_2b0,&local_1b8,pwVar19,pwVar20,IgnoreCase);
          if (&local_2b0 != pFVar13) {
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            local_2b0.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
            (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2b0.Data.ArrayNum = (pFVar13->Data).ArrayNum;
            local_2b0.Data.ArrayMax = (pFVar13->Data).ArrayMax;
            (pFVar13->Data).ArrayNum = 0;
            (pFVar13->Data).ArrayMax = 0;
          }
          if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pwVar20 = *(wchar_t **)pFVar18;
        if (pwVar20 != (wchar_t *)0x0) goto LAB_14a0de13c;
      }
      pFVar7 = (FRigVMTemplate *)(ulonglong)(uVar15 + 1);
      pFVar22 = (FRigVMTemplate *)&pFVar22->ExecuteArguments;
    } while ((int)(uVar15 + 1) < ExecuteContextArgs.ArrayNum);
    iVar5 = local_290.Data.ArrayNum;
  }
  if (local_2b0.Data.ArrayNum == iVar5) {
    if (1 < local_2b0.Data.ArrayNum) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_2b0.Data.AllocatorInstance.Data,
                         (wchar_t *)local_290.Data.AllocatorInstance.Data);
      bVar3 = iVar5 == 0;
      goto LAB_14a0de221;
    }
  }
  else {
    bVar3 = local_2b0.Data.ArrayNum + iVar5 == 1;
LAB_14a0de221:
    if (!bVar3) {
      FVar14.Data = (FScriptContainerElement *)L"";
      if (local_2b0.Data.ArrayNum != 0) {
        FVar14.Data = local_2b0.Data.AllocatorInstance.Data;
      }
      pcVar2 = *(code **)(this->_padding_ + 0x170);
      ::FName::FName(&local_268,(wchar_t *)FVar14.Data);
      pFVar11 = (FRigVMTemplate *)(*pcVar2)(this,&local_268,param_2);
    }
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
LAB_14a0de27a:
  if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  return pFVar11;
}

// FindTypeFromCPPType_NoLock @ 14a0de2f0

FRigVMTemplateArgumentType * __thiscall
FRigVMRegistry_NoLock::FindTypeFromCPPType_NoLock(FRigVMRegistry_NoLock *this,FString *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FRigVMTemplateArgumentType *pFVar6;
  FLazyName *this_00;
  TObjectPtr<UObject>_u_0 TVar7;
  FName local_res8;
  undefined1 local_18 [16];
  
  lVar5 = (**(code **)(this->_padding_ + 0x100))(this,local_18,param_1);
  uVar1 = *(uint *)(lVar5 + 8);
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Types).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->Types).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FRigVMTemplateArgumentType *)(*pcVar2)();
        return pFVar6;
      }
    }
    return (FRigVMTemplateArgumentType *)
           ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x30);
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_3262262746346944794>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                     ,0x6e6,"Types.IsValidIndex(TypeIndex)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FRigVMTemplateArgumentType *)(*pcVar2)();
    return pFVar6;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = RigVMTypeUtils::GetWildCardCPPTypeName();
      FLazyName::Resolve(this_00);
      EmptyType.CPPType = local_res8;
      TVar7.DebugPtr = (UObject *)RigVMTypeUtils::GetWildCardCPPTypeObject();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar7.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar7.DebugPtr);
      }
      EmptyType.CPPTypeObject.field0_0x0 =
           (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar7.DebugPtr;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyType;
}

// GetArrayDimensionsForType_NoLock @ 14a0e12f0

int __thiscall
FRigVMRegistry_NoLock::GetArrayDimensionsForType_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar1 = param_1->Index;
  lVar7 = (longlong)(int)uVar1;
  if (((int)uVar1 < 0) || ((this->Types).ArrayNum <= (int)uVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944651>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x775,"Types.IsValidIndex(InTypeIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar6 = (*pcVar3)();
      return iVar6;
    }
  }
  else {
    uVar5 = 0;
    if ((int)uVar1 < (this->Types).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    pFVar2 = (this->Types).AllocatorInstance.Data;
    if (pFVar2[lVar7 * 0x30 + 0x28] != (FScriptContainerElement)0x0) {
      local_18 = *(undefined8 *)(pFVar2 + lVar7 * 0x30 + 0x10);
      local_10 = *(undefined4 *)(pFVar2 + lVar7 * 0x30 + 0x18);
      iVar6 = (**(code **)(this->_padding_ + 0x120))(this,&local_18);
      return iVar6 + 1;
    }
  }
  return 0;
}

// GetArrayTypeFromBaseTypeIndex_NoLock @ 14a0e16b0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetArrayTypeFromBaseTypeIndex_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          TRigVMTypeIndex *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TRigVMTypeIndex *pTVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  iVar1 = param_1->Index;
  if ((iVar1 < 0) || ((this->Types).ArrayNum <= iVar1)) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944562>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x7ce,"Types.IsValidIndex(InTypeIndex)");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar3)();
      return pTVar5;
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = -1;
  }
  else {
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TRigVMTypeIndex *)(*pcVar3)();
      return pTVar5;
    }
    pFVar2 = (this->Types).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data =
         *(FScriptContainerElement **)(pFVar2 + (longlong)iVar1 * 0x30 + 0x1c);
    iVar1 = *(int *)(pFVar2 + (longlong)iVar1 * 0x30 + 0x24);
    if (param_1->Name != (FName)0x0) {
      pFVar6 = ::FName::ToString(&param_1->Name,&local_18);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      RigVMStringUtils::JoinStrings(&local_28,&local_38,pFVar6,L"TArray<",(wchar_t *)0x0,L">");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res8;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Name = (FName)local_38.Data.AllocatorInstance.Data;
    __return_storage_ptr__->Index = iVar1;
  }
  return __return_storage_ptr__;
}

// GetBaseTypeFromArrayTypeIndex_NoLock @ 14a0e1c40

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetBaseTypeFromArrayTypeIndex_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          TRigVMTypeIndex *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRigVMTypeIndex *pTVar6;
  FString *this_00;
  ForAnyElementType FVar7;
  int iVar8;
  FName FVar9;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  iVar8 = param_1->Index;
  if ((iVar8 < 0) || ((this->Types).ArrayNum <= iVar8)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944544>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x7e0,"Types.IsValidIndex(InTypeIndex)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TRigVMTypeIndex *)(*pcVar4)();
      return pTVar6;
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = -1;
  }
  else {
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TRigVMTypeIndex *)(*pcVar4)();
      return pTVar6;
    }
    pFVar3 = (this->Types).AllocatorInstance.Data;
    iVar1 = *(int *)(pFVar3 + (longlong)iVar8 * 0x30 + 0x18);
    FVar9 = *(FName *)(pFVar3 + (longlong)iVar8 * 0x30 + 0x10);
    if (param_1->Name != (FName)0x0) {
      this_00 = ::FName::ToString(&param_1->Name,&local_18);
      iVar2 = (this_00->Data).ArrayNum;
      iVar8 = iVar2 + -9;
      if (iVar2 == 0) {
        iVar8 = -8;
      }
      ::FString::Mid(this_00,&local_28,7,iVar8);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar7.Data = local_28.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_res8,(wchar_t *)FVar7.Data);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      FVar9 = local_res8;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Name = FVar9;
    __return_storage_ptr__->Index = iVar1;
  }
  return __return_storage_ptr__;
}

// GetCompatibleTypes_NoLock @ 14a0e28d0

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  int iVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar5;
  
  iVar1 = param_1->Index;
  uVar4 = (ulonglong)_tls_index;
  if (iVar1 == RigVMTypeUtils::TypeIndex::Float.Index) {
    pTVar5 = &CompatibleTypes;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS0)
    {
      _Init_thread_header(&::_TSS0);
      iVar1 = RigVMTypeUtils::TypeIndex::Double.Index;
      FVar2 = RigVMTypeUtils::TypeIndex::Double.Name;
      if (::_TSS0 == -1) {
        CompatibleTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        CompatibleTypes.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,1,0,&CompatibleTypes.AllocatorInstance,1,&CompatibleTypes.ArrayMax);
        FVar3 = CompatibleTypes.AllocatorInstance;
        *(FName *)CompatibleTypes.AllocatorInstance.Data = FVar2;
        *(int *)(FVar3.Data + 8) = iVar1;
        atexit(`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l5::
               _dynamic_atexit_destructor_for__CompatibleTypes__);
        _Init_thread_footer(&::_TSS0);
      }
    }
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::Double.Index) {
    pTVar5 = &CompatibleTypes;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS1)
    {
      _Init_thread_header(&::_TSS1);
      iVar1 = RigVMTypeUtils::TypeIndex::Float.Index;
      FVar2 = RigVMTypeUtils::TypeIndex::Float.Name;
      if (::_TSS1 == -1) {
        CompatibleTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        CompatibleTypes.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,1,0,&CompatibleTypes.AllocatorInstance,1,&CompatibleTypes.ArrayMax);
        FVar3 = CompatibleTypes.AllocatorInstance;
        *(FName *)CompatibleTypes.AllocatorInstance.Data = FVar2;
        *(int *)(FVar3.Data + 8) = iVar1;
        atexit(`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l8::
               _dynamic_atexit_destructor_for__CompatibleTypes__);
        _Init_thread_footer(&::_TSS1);
        return &CompatibleTypes;
      }
    }
  }
  else if (iVar1 == RigVMTypeUtils::TypeIndex::FloatArray.Index) {
    pTVar5 = &CompatibleTypes;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS2)
    {
      _Init_thread_header(&::_TSS2);
      iVar1 = RigVMTypeUtils::TypeIndex::DoubleArray.Index;
      FVar2 = RigVMTypeUtils::TypeIndex::DoubleArray.Name;
      if (::_TSS2 == -1) {
        CompatibleTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        CompatibleTypes.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,1,0,&CompatibleTypes.AllocatorInstance,1,&CompatibleTypes.ArrayMax);
        FVar3 = CompatibleTypes.AllocatorInstance;
        *(FName *)CompatibleTypes.AllocatorInstance.Data = FVar2;
        *(int *)(FVar3.Data + 8) = iVar1;
        atexit(`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l11::
               _dynamic_atexit_destructor_for__CompatibleTypes__);
        _Init_thread_footer(&::_TSS2);
        return &CompatibleTypes;
      }
    }
  }
  else {
    if (iVar1 != RigVMTypeUtils::TypeIndex::DoubleArray.Index) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) <
          ::_TSS4) {
        _Init_thread_header(&::_TSS4);
        if (::_TSS4 == -1) {
          atexit(`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l2::
                 _dynamic_atexit_destructor_for__EmptyTypes__);
          _Init_thread_footer(&::_TSS4);
        }
      }
      return &EmptyTypes;
    }
    pTVar5 = &CompatibleTypes;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS3)
    {
      _Init_thread_header(&::_TSS3);
      iVar1 = RigVMTypeUtils::TypeIndex::FloatArray.Index;
      FVar2 = RigVMTypeUtils::TypeIndex::FloatArray.Name;
      if (::_TSS3 == -1) {
        CompatibleTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        CompatibleTypes.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,1,0,&CompatibleTypes.AllocatorInstance,1,&CompatibleTypes.ArrayMax);
        FVar3 = CompatibleTypes.AllocatorInstance;
        *(FName *)CompatibleTypes.AllocatorInstance.Data = FVar2;
        *(int *)(FVar3.Data + 8) = iVar1;
        atexit(`FRigVMRegistry_NoLock::GetCompatibleTypes_NoLock'::__l14::
               _dynamic_atexit_destructor_for__CompatibleTypes__);
        _Init_thread_footer(&::_TSS3);
        return &CompatibleTypes;
      }
    }
  }
  return pTVar5;
}

// GetFactories_NoLock @ 14a0e5040

TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetFactories_NoLock(FRigVMRegistry_NoLock *this)

{
  return &this->Factories;
}

// GetFunctions_NoLock @ 14a0e6480

TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetFunctions_NoLock(FRigVMRegistry_NoLock *this)

{
  return &this->Functions;
}

// GetHandle_NoLock @ 14a0e66c0

FRigVMRegistryHandle * __thiscall
FRigVMRegistry_NoLock::GetHandle_NoLock(FRigVMRegistry_NoLock *this)

{
  return &this->ThisHandle;
}

// GetHandle_NoLock @ 14a0e66d0

FRigVMRegistryHandle * __thiscall
FRigVMRegistry_NoLock::GetHandle_NoLock(FRigVMRegistry_NoLock *this)

{
  return &this->ThisHandle;
}

// GetHashForEnum_NoLock @ 14a0e66e0

uint __thiscall
FRigVMRegistry_NoLock::GetHashForEnum_NoLock
          (FRigVMRegistry_NoLock *this,UEnum *param_1,bool param_2)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTuple<FName,__int64> *pTVar7;
  FText *this_00;
  FString *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FName local_res20;
  FName local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_58;
  int local_50;
  FString local_48;
  longlong *local_38 [2];
  TTuple<FName,__int64> local_28;
  
  if (param_2) {
    pcVar2 = *(code **)(this->_padding_ + 0xd8);
    if ((param_1->CppType).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->CppType).Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_res20,pwVar10);
    (*pcVar2)(this,&local_70,&local_res20,param_1);
    if (local_68 != -1) {
      local_50 = local_68;
      local_58 = local_70;
      uVar5 = (**(code **)(this->_padding_ + 0x1b8))(this,&local_58);
      return uVar5;
    }
  }
  local_78 = (FName)param_1->_padding_;
  ::FName::ToString(&local_78,&local_48);
  iVar9 = local_48.Data.ArrayNum + -1;
  FVar3.Data = local_48.Data.AllocatorInstance.Data;
  if (local_48.Data.ArrayNum == 0) {
    iVar9 = 0;
    FVar3.Data = (FScriptContainerElement *)L"";
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,(wchar_t *)FVar3.Data);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar9 = (param_1->Names).NumValues;
  iVar12 = 0;
  if (0 < iVar9) {
    do {
      if (((iVar12 < 0) || (iVar9 <= iVar12)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      pTVar7 = UEnum::FNameData::operator[](&param_1->Names,&local_28,iVar12);
      uVar13 = (int)((ulonglong)*(undefined8 *)&pTVar7->field_0x8 >> 0x20) * 0x17 +
               (int)*(undefined8 *)&pTVar7->field_0x8;
      uVar11 = uVar5 - uVar13 ^ uVar13 >> 0xd;
      uVar5 = (-0x61c88647 - uVar11) - uVar13 ^ uVar11 << 8;
      uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar5 >> 0xd;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 >> 0xc;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 0x10;
      uVar13 = (uVar13 - uVar5) - uVar11 ^ uVar5 >> 5;
      uVar11 = (uVar11 - uVar13) - uVar5 ^ uVar13 >> 3;
      uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar11 << 10;
      this_00 = (FText *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_38,iVar12);
      pFVar8 = FText::ToString(this_00);
      iVar1 = (pFVar8->Data).ArrayNum;
      iVar9 = iVar1 + -1;
      if (iVar1 == 0) {
        pwVar10 = L"";
        iVar9 = 0;
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar10);
      uVar13 = ((uVar13 - uVar5) - uVar11 ^ uVar5 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (-0x61c88647 - uVar13) - uVar6 ^ uVar13 << 8;
      uVar11 = (uVar6 - uVar5) - uVar13 ^ uVar5 >> 0xd;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar11 >> 0xc;
      uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 0x10;
      uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar5 >> 5;
      uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar11 >> 3;
      uVar5 = (uVar5 - uVar13) - uVar11 ^ uVar13 << 10;
      uVar5 = (uVar11 - uVar5) - uVar13 ^ uVar5 >> 0xf;
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
      iVar9 = (param_1->Names).NumValues;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar9);
  }
  return uVar5;
}

// GetHashForProperty_NoLock @ 14a0e69a0

uint __thiscall
FRigVMRegistry_NoLock::GetHashForProperty_NoLock(FRigVMRegistry_NoLock *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  wchar_t *local_38;
  undefined8 local_30;
  FString local_28;
  FString local_18;
  
  bVar2 = IsThisNotNull(param_1,"FField::GetName");
  if (bVar2) {
    ::FName::ToString((FName *)&param_1->_padding_,&local_18);
  }
  else {
    ::FString::FString(&local_18,L"None");
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar7 = 0;
  iVar5 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)FVar6.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                       ,0x1ca,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_28,&local_38,0);
  iVar5 = (int)local_30 + -1;
  if ((int)local_30 == 0) {
    iVar5 = 0;
  }
  ::FString::AppendChars(&local_28,local_38,iVar5);
  RigVMTypeUtils::CleanupCPPType(&local_28);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free(local_38);
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    iVar7 = local_28.Data.ArrayNum + -1;
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar6.Data);
  uVar8 = uVar3 - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
  uVar4 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xd;
  uVar8 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 5;
  uVar8 = (uVar8 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar8) - uVar4 ^ uVar8 << 10;
  uVar3 = (uVar4 - uVar3) - uVar8 ^ uVar3 >> 0xf;
  if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0) {
    param_1 = (FProperty *)param_1[1]._padding_;
  }
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0) {
      if (param_1 == (FProperty *)0x0) goto LAB_14a0e6c83;
      if ((*(byte *)(param_1->_padding_ + 0x18) & 0x40) == 0) {
        if ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x1000000000000) == 0) goto LAB_14a0e6c83;
        uVar4 = (**(code **)(this->_padding_ + 0x1d0))(this,param_1[1]._padding_,1);
        uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
        uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
        uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
        uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
        uVar8 = (uVar8 - uVar4) - uVar3;
      }
      else {
        if (param_1[1]._padding_ == 0) goto LAB_14a0e6c83;
        uVar4 = (**(code **)(this->_padding_ + 0x1d0))(this,param_1[1]._padding_,1);
        uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
        uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
        uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
        uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
        uVar8 = (uVar8 - uVar3) - uVar4;
      }
    }
    else {
      uVar4 = (**(code **)(this->_padding_ + 0x1c8))(this,param_1[1]._padding_);
      uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
      uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
      uVar8 = (uVar8 - uVar3) - uVar4;
    }
    uVar8 = uVar8 ^ uVar3 << 0x10;
    uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 5;
    uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
    uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
    uVar3 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xf;
  }
LAB_14a0e6c83:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return uVar3;
}

// GetHashForScriptStruct_NoLock @ 14a0e6cd0

uint __thiscall
FRigVMRegistry_NoLock::GetHashForScriptStruct_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,bool param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FName local_res20;
  void *local_28;
  int local_20;
  void *local_18;
  int local_10;
  
  pwVar8 = L"";
  if (param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0xd8);
    puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&local_18,0);
    if (*(int *)(puVar4 + 1) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*puVar4;
    }
    ::FName::FName(&local_res20,pwVar6);
    (*pcVar1)(this,&local_28,&local_res20,param_1);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_20 != -1) {
      local_10 = local_20;
      local_18 = local_28;
      uVar2 = (**(code **)(this->_padding_ + 0x1b8))(this,&local_18);
      return uVar2;
    }
  }
  puVar4 = (undefined8 *)(**(code **)(param_1->_padding_ + 0x388))(param_1,&local_18,0);
  iVar5 = *(int *)(puVar4 + 1) + -1;
  if (*(int *)(puVar4 + 1) == 0) {
    iVar5 = 0;
  }
  else {
    pwVar8 = (wchar_t *)*puVar4;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  uVar3 = (**(code **)(this->_padding_ + 0x1c8))(this,param_1);
  uVar7 = uVar2 - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
  uVar9 = (uVar3 - uVar2) - uVar7 ^ uVar2 >> 0xd;
  uVar3 = (uVar7 - uVar9) - uVar2 ^ uVar9 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar9 ^ uVar3 << 0x10;
  uVar7 = (uVar9 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar7) - uVar2 ^ uVar7 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar7 ^ uVar3 << 10;
  return (uVar7 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetHashForStruct_NoLock @ 14a0e6e90

uint __thiscall
FRigVMRegistry_NoLock::GetHashForStruct_NoLock(FRigVMRegistry_NoLock *this,UStruct *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  TFieldIterator<FProperty> local_28;
  
  pFVar5 = UObjectBaseUtility::GetPathName
                     ((UObjectBaseUtility *)param_1,(FString *)&local_28,(UObject *)0x0);
  iVar6 = (pFVar5->Data).ArrayNum;
  if (iVar6 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    iVar6 = iVar6 + -1;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  if (local_28.Struct != (UStruct *)0x0) {
    FMemory::Free(local_28.Struct);
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar1 = (FProperty *)local_28.Field;
  while (pFVar1 != (FProperty *)0x0) {
    local_28.Field = (FField *)pFVar1;
    bVar2 = IsAllowedType_NoLock(this,pFVar1);
    if (bVar2) {
      uVar4 = (**(code **)(this->_padding_ + 0x1d8))(this,pFVar1);
      uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
      uVar8 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xd;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
      uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 0x10;
      uVar4 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 5;
      uVar3 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 3;
      uVar8 = (uVar8 - uVar3) - uVar4 ^ uVar3 << 10;
      uVar3 = (uVar4 - uVar8) - uVar3 ^ uVar8 >> 0xf;
    }
    local_28.Field = (FField *)pFVar1->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar1 = (FProperty *)local_28.Field;
  }
  return uVar3;
}

// GetHashForType_NoLock @ 14a0e7190

uint __thiscall
FRigVMRegistry_NoLock::GetHashForType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  UClass *pUVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  int iVar9;
  FName *this_00;
  FString local_18;
  
  uVar5 = param_1->Index;
  if (((int)uVar5 < 0) || ((this->Types).ArrayNum <= (int)uVar5)) {
    return 0xffffffff;
  }
  iVar9 = 0;
  uVar4 = 0;
  if ((int)uVar5 < (this->Types).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  this_00 = (FName *)((this->Types).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30);
  if (this_00[5].Number != 0xffffffff) {
    return this_00[5].Number;
  }
  if (this_00[1] != (FName)0x0) {
    pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(this_00 + 1),pUVar6);
    if ((bVar3) && (this_00[1] != (FName)0x0)) {
      uVar5 = (**(code **)(this->_padding_ + 0x1c0))(this,this_00[1],0);
      goto LAB_14a0e7300;
    }
    if (this_00[1] != (FName)0x0) {
      pUVar6 = Z_Construct_UClass_UStruct_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)(this_00 + 1),pUVar6);
      if ((bVar3) && (this_00[1] != (FName)0x0)) {
        uVar5 = (**(code **)(this->_padding_ + 0x1c8))(this);
        goto LAB_14a0e7300;
      }
      if (this_00[1] != (FName)0x0) {
        pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)(this_00 + 1),pUVar6);
        if ((bVar3) && (this_00[1] != (FName)0x0)) {
          uVar5 = (**(code **)(this->_padding_ + 0x1d0))(this,this_00[1],0);
          goto LAB_14a0e7300;
        }
      }
    }
  }
  pFVar7 = ::FName::ToString(this_00,&local_18);
  iVar1 = (pFVar7->Data).ArrayNum;
  if (iVar1 == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar9 = iVar1 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar8);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
LAB_14a0e7300:
  if (this_00[1] != (FName)0x0) {
    pUVar6 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(this_00 + 1),pUVar6);
    if ((bVar3) && (this_00[1] != (FName)0x0)) {
      return uVar5;
    }
  }
  this_00[5].Number = uVar5;
  return uVar5;
}

// GetMathTypes @ 14a0e7810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMRegistry_NoLock::GetMathTypes(void)

{
  ForAnyElementType FVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  UScriptStruct *pUVar6;
  UScriptStruct *pUVar7;
  UScriptStruct *pUVar8;
  UScriptStruct *pUVar9;
  UScriptStruct *pUVar10;
  UScriptStruct *pUVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pUVar2 = TBaseStructure<UE::Math::TRotator<double>_>::Get();
    pUVar3 = TBaseStructure<UE::Math::TQuat<double>_>::Get();
    pUVar4 = TBaseStructure<UE::Math::TTransform<double>_>::Get();
    pUVar5 = TBaseStructure<FLinearColor>::Get();
    pUVar6 = TBaseStructure<FColor>::Get();
    pUVar7 = TBaseStructure<UE::Math::TPlane<double>_>::Get();
    pUVar8 = TBaseStructure<UE::Math::TVector<double>_>::Get();
    pUVar9 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
    pUVar10 = TBaseStructure<UE::Math::TVector4<double>_>::Get();
    pUVar11 = TBaseStructure<UE::Math::TBox2<double>_>::Get();
    MathTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    MathTypes.ArrayNum = 10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,10,0,&MathTypes.AllocatorInstance,10,&MathTypes.ArrayMax);
    FVar1 = MathTypes.AllocatorInstance;
    *(UScriptStruct **)MathTypes.AllocatorInstance.Data = pUVar2;
    *(UScriptStruct **)(FVar1.Data + 8) = pUVar3;
    *(UScriptStruct **)(FVar1.Data + 0x10) = pUVar4;
    *(UScriptStruct **)(FVar1.Data + 0x18) = pUVar5;
    *(UScriptStruct **)(FVar1.Data + 0x20) = pUVar6;
    *(UScriptStruct **)(FVar1.Data + 0x28) = pUVar7;
    *(UScriptStruct **)(FVar1.Data + 0x30) = pUVar8;
    *(UScriptStruct **)(FVar1.Data + 0x38) = pUVar9;
    *(UScriptStruct **)(FVar1.Data + 0x40) = pUVar10;
    *(UScriptStruct **)(FVar1.Data + 0x48) = pUVar11;
    atexit(`FRigVMRegistry_NoLock::GetMathTypes'::__l2::_dynamic_atexit_destructor_for__MathTypes__)
    ;
    _Init_thread_footer(&::_TSS0);
  }
  return &MathTypes;
}

// GetOrAddTemplateFromArguments_NoLock @ 14a0e9620

FRigVMTemplate * __thiscall
FRigVMRegistry_NoLock::GetOrAddTemplateFromArguments_NoLock
          (FRigVMRegistry_NoLock *this,FName *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2,
          FRigVMTemplateDelegates *param_3)

{
  FRigVMTemplate *pFVar1;
  undefined1 local_res8 [8];
  
  FRigVMTemplateArgumentInfo::ComputeTemplateNotation
            ((FName)local_res8,
             (TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *)*param_1);
  pFVar1 = (FRigVMTemplate *)(**(code **)(this->_padding_ + 0x170))(this,local_res8,0);
  if (pFVar1 == (FRigVMTemplate *)0x0) {
    pFVar1 = (FRigVMTemplate *)(**(code **)(this->_padding_ + 0x188))(this,param_1,param_2,param_3);
  }
  return pFVar1;
}

// GetPluginModulePrefixes @ 14a0ea6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014a0ea869) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FRigVMRegistry_NoLock::GetPluginModulePrefixes
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,IPlugin *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPluginDescriptor *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType this;
  undefined1 auStackY_2c8 [32];
  undefined1 local_278 [8];
  FString local_270;
  FString local_260;
  FPluginDescriptor local_248;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar5 = (FPluginDescriptor *)(**(code **)(*(longlong *)param_1 + 0xa0))(param_1);
  FPluginDescriptor::FPluginDescriptor(&local_248,pFVar5);
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  iVar7 = local_248.Modules.ArrayNum;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_248.Modules._8_8_ & 0xffffffff);
  }
  if (0 < iVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar7,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar7 = local_248.Modules.ArrayNum;
  this.Data = local_248.Modules.AllocatorInstance.Data;
  while( true ) {
    if (local_248.Modules.ArrayNum != iVar7) {
      local_278[0] = 0;
      `TCheckedPointerIterator<FModuleDescriptor_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_278);
    }
    if ((FName *)this.Data ==
        (FName *)(local_248.Modules.AllocatorInstance.Data + (longlong)iVar7 * 0x168)) break;
    ::FName::ToString((FName *)this.Data,&local_260);
    ::FString::PrintfImpl(&local_270,L"/Script/%s.");
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_270) &&
        ((FScriptContainerElement *)&local_270 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar6;
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar8 = 0;
    *(FScriptContainerElement **)pFVar8 = local_270.Data.AllocatorInstance.Data;
    *(int *)(pFVar8 + 8) = local_270.Data.ArrayNum;
    *(int *)(pFVar8 + 0xc) = local_270.Data.ArrayMax;
    local_270.Data.ArrayNum = 0;
    local_270.Data.ArrayMax = 0;
    local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
    }
    this.Data = this.Data + 0x168;
  }
  FPluginDescriptor::~FPluginDescriptor(&local_248);
  return __return_storage_ptr__;
}

// GetPredicatesForStruct_NoLock @ 14a0ea8f0

TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetPredicatesForStruct_NoLock(FRigVMRegistry_NoLock *this,FName *param_1)

{
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->StructNameToPredicates,*param_1);
  return pTVar1;
}

// GetReferencerName @ 14a0eb5f0

FString * __thiscall
FRigVMRegistry_NoLock::GetReferencerName
          (FRigVMRegistry_NoLock *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FRigVMRegistry");
  return __return_storage_ptr__;
}

// GetTemplates_NoLock @ 14a0ece00

TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetTemplates_NoLock(FRigVMRegistry_NoLock *this)

{
  return &this->Templates;
}

// GetTypeIndexFromCPPType_NoLock @ 14a0f0390

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndexFromCPPType_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,FString *param_1)

{
  FName *pFVar1;
  UScriptStruct *pUVar2;
  UEnum *pUVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  bool bVar8;
  EInternalObjectFlags EVar9;
  uint uVar10;
  size_t sVar11;
  UClass *pUVar12;
  TRigVMTypeIndex *pTVar13;
  FString *pFVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  wchar_t *pwVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  FName local_res10;
  FName local_res18 [2];
  FString local_f8;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  TObjectIterator<UUserDefinedStruct> local_d8;
  TObjectIterator<UUserDefinedEnum> local_c0;
  FString local_a8;
  FName local_98;
  UScriptStruct *local_90;
  FName local_88;
  UEnum *local_80;
  FString local_78;
  FString local_68;
  undefined1 local_58 [12];
  undefined1 local_4c [20];
  
  local_res10.ComparisonIndex.Value = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  bVar8 = false;
  if (1 < (param_1->Data).ArrayNum) {
    ::FName::FName(local_res18,(wchar_t *)(param_1->Data).AllocatorInstance.Data);
    pFVar1 = (FName *)(this->Types).AllocatorInstance.Data;
    for (pFVar15 = pFVar1; pFVar15 != pFVar1 + (longlong)(this->Types).ArrayNum * 6;
        pFVar15 = pFVar15 + 6) {
      if (*pFVar15 == local_res18[0]) {
        (__return_storage_ptr__->Name).ComparisonIndex = 0;
        (__return_storage_ptr__->Name).Number = 0;
        iVar19 = (int)(((longlong)pFVar15 - (longlong)pFVar1) / 0x30);
        __return_storage_ptr__->Index = iVar19;
        if (iVar19 != -1) {
          return __return_storage_ptr__;
        }
        goto LAB_14a0f0428;
      }
    }
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = -1;
LAB_14a0f0428:
    sVar11 = wcslen(L"TArray<");
    bVar7 = ::FString::StartsWith(param_1,L"TArray<",(int)sVar11,IgnoreCase);
    iVar19 = (param_1->Data).ArrayNum;
    if (bVar7) {
      iVar21 = iVar19 + -9;
      if (iVar19 == 0) {
        iVar21 = -8;
      }
      ::FString::Mid(param_1,&local_a8,7,iVar21);
      bVar8 = true;
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar16.Data = local_a8.Data.AllocatorInstance.Data;
      }
    }
    else if (iVar19 == 0) {
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    else {
      FVar16.Data = (param_1->Data).AllocatorInstance.Data;
      bVar8 = false;
    }
    ::FName::FName(&local_res10,(wchar_t *)FVar16.Data);
    if ((bVar8) && (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_d8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ObjectArray.ArrayNum = 0;
    local_d8.ObjectArray.ArrayMax = 0;
    local_d8.Index = 0xffffffff;
    EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar12 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    GetObjectsOfClass(pUVar12,&local_d8.ObjectArray,true,RF_ClassDefaultObject,
                      EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    do {
      TObjectIterator<UUserDefinedStruct>::Advance(&local_d8);
      lVar20 = (longlong)local_d8.Index;
      if ((local_d8.Index < 0) || (local_d8.ObjectArray.ArrayNum <= local_d8.Index))
      goto LAB_14a0f0651;
      uVar10 = 0;
      if (local_d8.Index < local_d8.ObjectArray.ArrayNum) {
        uVar10 = (uint)~local_d8.Index >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TRigVMTypeIndex *)(*pcVar4)();
        return pTVar13;
      }
      pUVar2 = *(UScriptStruct **)(local_d8.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
      pFVar14 = RigVMTypeUtils::GetUniqueStructTypeName(&local_78,pUVar2);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_98,pwVar17);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_90 = pUVar2;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      FVar5.Number = local_res10.Number;
      FVar5.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
    } while ((local_98 != FVar5) || (bVar8 = IsAllowedType_NoLock(this,(UStruct *)pUVar2), !bVar8));
    (**(code **)(this->_padding_ + 0xc0))(this,local_58,&local_98);
    pFVar1 = (FName *)(this->Types).AllocatorInstance.Data;
    for (pFVar15 = pFVar1; pFVar15 != pFVar1 + (longlong)(this->Types).ArrayNum * 6;
        pFVar15 = pFVar15 + 6) {
      if (*pFVar15 == local_res18[0]) {
        iVar19 = (int)(((longlong)pFVar15 - (longlong)pFVar1) / 0x30);
        goto LAB_14a0f064b;
      }
    }
    iVar19 = -1;
LAB_14a0f064b:
    (__return_storage_ptr__->Name).ComparisonIndex = 0;
    (__return_storage_ptr__->Name).Number = 0;
    __return_storage_ptr__->Index = iVar19;
LAB_14a0f0651:
    if (local_d8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.ObjectArray.AllocatorInstance.Data);
    }
    if (__return_storage_ptr__->Index == -1) {
      local_c0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ObjectArray.ArrayNum = 0;
      local_c0.ObjectArray.ArrayMax = 0;
      local_c0.Index = 0xffffffff;
      EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar12 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
      GetObjectsOfClass(pUVar12,&local_c0.ObjectArray,true,RF_ClassDefaultObject,
                        EVar9 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      do {
        TObjectIterator<UUserDefinedEnum>::Advance(&local_c0);
        lVar20 = (longlong)local_c0.Index;
        if ((local_c0.Index < 0) || (local_c0.ObjectArray.ArrayNum <= local_c0.Index))
        goto LAB_14a0f07ef;
        uVar10 = 0;
        if (local_c0.Index < local_c0.ObjectArray.ArrayNum) {
          uVar10 = (uint)~local_c0.Index >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TRigVMTypeIndex *)(*pcVar4)();
          return pTVar13;
        }
        pUVar3 = *(UEnum **)(local_c0.ObjectArray.AllocatorInstance.Data + lVar20 * 8);
        pFVar14 = RigVMTypeUtils::CPPTypeFromEnum(&local_68,pUVar3);
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_88,pwVar17);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        local_80 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UEnum *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
        }
        FVar6.Number = local_res10.Number;
        FVar6.ComparisonIndex.Value = local_res10.ComparisonIndex.Value;
      } while ((local_88 != FVar6) || (bVar8 = IsAllowedType_NoLock(this,pUVar3), !bVar8));
      (**(code **)(this->_padding_ + 0xc0))(this,local_4c,&local_88);
      pFVar1 = (FName *)(this->Types).AllocatorInstance.Data;
      for (pFVar15 = pFVar1; pFVar15 != pFVar1 + (longlong)(this->Types).ArrayNum * 6;
          pFVar15 = pFVar15 + 6) {
        if (*pFVar15 == local_res18[0]) {
          iVar19 = (int)(((longlong)pFVar15 - (longlong)pFVar1) / 0x30);
          goto LAB_14a0f07e9;
        }
      }
      iVar19 = -1;
LAB_14a0f07e9:
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      __return_storage_ptr__->Index = iVar19;
LAB_14a0f07ef:
      if (local_c0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.ObjectArray.AllocatorInstance.Data);
      }
    }
    if (__return_storage_ptr__->Index == -1) {
      (**(code **)(this->_padding_ + 0x68))(this);
      pFVar1 = (FName *)(this->Types).AllocatorInstance.Data;
      for (pFVar15 = pFVar1; pFVar15 != pFVar1 + (longlong)(this->Types).ArrayNum * 6;
          pFVar15 = pFVar15 + 6) {
        if (*pFVar15 == local_res18[0]) {
          iVar19 = (int)(((longlong)pFVar15 - (longlong)pFVar1) / 0x30);
          goto LAB_14a0f0843;
        }
      }
      iVar19 = -1;
LAB_14a0f0843:
      (__return_storage_ptr__->Name).ComparisonIndex = 0;
      (__return_storage_ptr__->Name).Number = 0;
      __return_storage_ptr__->Index = iVar19;
      if (iVar19 == -1) {
        local_f8.Data.ArrayNum = (param_1->Data).ArrayNum;
        lVar20 = (longlong)local_f8.Data.ArrayNum;
        pFVar18 = (param_1->Data).AllocatorInstance.Data;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_f8.Data.ArrayNum == 0) {
          local_f8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_f8,
                     local_f8.Data.ArrayNum,&local_f8.Data.ArrayMax);
          memcpy(local_f8.Data.AllocatorInstance.Data,pFVar18,lVar20 * 2);
        }
        RigVMTypeUtils::CleanupCPPType(&local_f8);
        bVar8 = RigVMTypeUtils::RequiresCPPTypeObject(&local_f8);
        if (bVar8) {
          RigVMTypeUtils::ObjectFromCPPType(&local_f8,true,(FRigVMUserDefinedTypeResolver *)0x0);
        }
        FVar16.Data = local_f8.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_f8.Data.ArrayNum;
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = local_f8.Data.ArrayNum;
        if (local_f8.Data.ArrayNum == 0) {
          local_dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Data.ArrayNum,0,&local_e8,local_f8.Data.ArrayNum,&local_dc);
          memcpy(local_e8.Data,FVar16.Data,lVar20 * 2);
        }
        pFVar1 = (FName *)(this->Types).AllocatorInstance.Data;
        iVar19 = (this->Types).ArrayNum;
        for (pFVar15 = pFVar1; pFVar15 != pFVar1 + (longlong)iVar19 * 6; pFVar15 = pFVar15 + 6) {
          pFVar18 = (FScriptContainerElement *)L"";
          if (local_e0 != 0) {
            pFVar18 = local_e8.Data;
          }
          bVar8 = ::FName::Equals(*pFVar15,(wchar_t *)pFVar18);
          if (bVar8) {
            lVar20 = ((longlong)pFVar15 - (longlong)pFVar1) / 6 +
                     ((longlong)pFVar15 - (longlong)pFVar1 >> 0x3f);
            iVar19 = (int)(lVar20 >> 3) - (int)(lVar20 >> 0x3f);
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data);
            }
            goto LAB_14a0f09c9;
          }
        }
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
        iVar19 = -1;
LAB_14a0f09c9:
        (__return_storage_ptr__->Name).ComparisonIndex = 0;
        (__return_storage_ptr__->Name).Number = 0;
        __return_storage_ptr__->Index = iVar19;
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock @ 14a0f0a50

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,
          FRigVMTemplateArgumentType *param_1)

{
  TRigVMTypeIndex *pTVar1;
  
  pTVar1 = TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
           ::Find((TMapBase<FRigVMTemplateArgumentType,TRigVMTypeIndex,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>_>
                   *)&this->TypeToIndex,param_1);
  if (pTVar1 != (TRigVMTypeIndex *)0x0) {
    __return_storage_ptr__->Name = pTVar1->Name;
    __return_storage_ptr__->Index = pTVar1->Index;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->Index = -1;
  return __return_storage_ptr__;
}

// GetTypeIndex_NoLock @ 14a0f0aa0

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,FName *param_1,
          UObject *param_2)

{
  code *pcVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FName local_res8;
  FName local_38;
  UObject *local_30;
  FString local_28;
  FString local_18;
  
  pcVar1 = *(code **)(this->_padding_ + 0xe0);
  local_38 = *param_1;
  local_30 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  ::FName::ToString(&local_38,&local_28);
  pFVar2 = RigVMTypeUtils::PostProcessCPPType
                     (&local_18,&local_28,local_30,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,pwVar3);
  local_38 = local_res8;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (*pcVar1)(this,__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// GetType_NoLock @ 14a0f1150

FRigVMTemplateArgumentType * __thiscall
FRigVMRegistry_NoLock::GetType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRigVMTemplateArgumentType *pFVar5;
  FLazyName *this_00;
  TObjectPtr<UObject>_u_0 TVar6;
  FName local_res8;
  
  uVar1 = param_1->Index;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Types).ArrayNum)) {
    uVar4 = 0;
    if ((int)uVar1 < (this->Types).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FRigVMTemplateArgumentType *)(*pcVar2)();
        return pFVar5;
      }
    }
    return (FRigVMTemplateArgumentType *)
           ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x30);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      this_00 = RigVMTypeUtils::GetWildCardCPPTypeName();
      FLazyName::Resolve(this_00);
      EmptyType.CPPType = local_res8;
      TVar6.DebugPtr = (UObject *)RigVMTypeUtils::GetWildCardCPPTypeObject();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar6.DebugPtr != (UObject *)0x0)
         ) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      EmptyType.CPPTypeObject.field0_0x0 =
           (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar6.DebugPtr;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &EmptyType;
}

// GetTypesForCategory_NoLock @ 14a0f13b0

TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMRegistry_NoLock::GetTypesForCategory_NoLock(FRigVMRegistry_NoLock *this,ETypeCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  ETypeCategory *pEVar6;
  
  if ((param_1 == ETypeCategory_Invalid) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x7c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  if (*(int *)&(this->TypesPerCategory).field_0x8 != *(int *)&(this->TypesPerCategory).field_0x34) {
    puVar5 = *(undefined1 **)&(this->TypesPerCategory).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TypesPerCategory).field_0x38;
    }
    uVar3 = *(undefined4 *)
             (puVar5 + ((ulonglong)(*(int *)&(this->TypesPerCategory).field_0x48 - 1) &
                       (ulonglong)param_1) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar6 = (ETypeCategory *)
                 ((longlong)(int)uVar3 * 0x20 + *(longlong *)&this->TypesPerCategory);
        if (*pEVar6 == param_1) {
          if (pEVar6 != (ETypeCategory *)0x0) {
            return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(pEVar6 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar6 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// InitializeBaseTypes_NoLock @ 14a0f4be0

void __thiscall FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock(FRigVMRegistry_NoLock *this)

{
  TMap<FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_01;
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> *pTVar8;
  UScriptStruct *pUVar9;
  FString *pFVar10;
  FName *pFVar11;
  TObjectPtr<UObject>_u_0 TVar12;
  FRigVMTemplateArgumentType *pFVar13;
  FLazyName *this_02;
  wchar_t *pwVar14;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ForAnyElementType *pFVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  bool local_d88 [36];
  undefined1 local_d64 [8];
  undefined1 local_d5c [8];
  undefined1 local_d54 [8];
  undefined1 local_d4c [8];
  undefined1 local_d44 [8];
  undefined1 local_d3c [8];
  undefined1 local_d34 [8];
  undefined1 local_d2c [8];
  undefined1 local_d24 [8];
  undefined1 local_d1c [8];
  undefined1 local_d14 [8];
  undefined1 local_d0c [8];
  undefined1 local_d04 [8];
  undefined1 local_cfc [8];
  undefined1 local_cf4 [8];
  undefined1 local_cec [8];
  undefined1 local_ce4 [8];
  undefined1 local_cdc [8];
  undefined1 local_cd4 [12];
  FName local_cc8;
  FName local_cc0;
  UObject *local_cb8;
  FName local_cb0;
  UObject *local_ca8;
  FName local_ca0;
  UObject *local_c98;
  FName local_c90;
  FName local_c88;
  UObject *local_c80;
  FName local_c78;
  UObject *local_c70;
  FName local_c68;
  UObject *local_c60;
  FName local_c58;
  UObject *local_c50;
  FName local_c48;
  UObject *local_c40;
  FName local_c38;
  UScriptStruct *local_c30;
  FName local_c28;
  UObject *local_c20;
  FName local_c18;
  UObject *local_c10;
  FName local_c08;
  UObject *local_c00;
  FName local_bf8;
  UObject *local_bf0;
  FName local_be8;
  UObject *local_be0;
  FName local_bd8;
  UObject *local_bd0;
  FName local_bc8;
  UObject *local_bc0;
  FName local_bb8;
  UObject *local_bb0;
  FName local_ba8;
  UScriptStruct *local_ba0;
  FName local_b98;
  uint local_b90;
  FName local_b88;
  uint local_b80;
  FName local_b78;
  uint local_b70;
  FName local_b68;
  uint local_b60;
  FName local_b58;
  uint local_b50;
  FName local_b48;
  uint local_b40;
  FName local_b38;
  uint local_b30;
  FName local_b28;
  uint local_b20;
  FName local_b18;
  uint local_b10;
  FName local_b08;
  uint local_b00;
  FName local_af8;
  uint local_af0;
  FName local_ae8;
  uint local_ae0;
  FName local_ad8;
  uint local_ad0;
  FName local_ac8;
  uint local_ac0;
  FName local_ab8;
  uint local_ab0;
  FName local_aa8;
  uint local_aa0;
  FName local_a98;
  uint local_a90;
  FName local_a88;
  UScriptStruct *local_a80;
  void *local_a78;
  undefined8 local_a70;
  void *local_a68;
  undefined8 local_a60;
  void *local_a58;
  undefined8 local_a50;
  void *local_a48;
  undefined8 local_a40;
  void *local_a38;
  undefined8 local_a30;
  void *local_a28;
  undefined8 local_a20;
  void *local_a18;
  undefined8 local_a10;
  void *local_a08;
  undefined8 local_a00;
  void *local_9f8;
  undefined8 local_9f0;
  void *local_9e8;
  undefined8 local_9e0;
  void *local_9d8;
  undefined8 local_9d0;
  void *local_9c8;
  undefined8 local_9c0;
  void *local_9b8;
  undefined8 local_9b0;
  void *local_9a8;
  undefined8 local_9a0;
  void *local_998;
  undefined8 local_990;
  void *local_988;
  undefined8 local_980;
  void *local_978;
  undefined8 local_970;
  void *local_968;
  undefined8 local_960;
  void *local_958;
  undefined8 local_950;
  void *local_948;
  undefined8 local_940;
  void *local_938;
  undefined8 local_930;
  void *local_928;
  undefined8 local_920;
  void *local_918;
  undefined8 local_910;
  void *local_908;
  undefined8 local_900;
  void *local_8f8;
  undefined8 local_8f0;
  void *local_8e8;
  undefined8 local_8e0;
  void *local_8d8;
  undefined8 local_8d0;
  void *local_8c8;
  undefined8 local_8c0;
  void *local_8b8;
  undefined8 local_8b0;
  void *local_8a8;
  undefined8 local_8a0;
  void *local_898;
  undefined8 local_890;
  void *local_888;
  undefined8 local_880;
  void *local_878;
  undefined8 local_870;
  void *local_868;
  undefined8 local_860;
  void *local_858;
  undefined8 local_850;
  void *local_848;
  undefined8 local_840;
  void *local_838;
  undefined8 local_830;
  void *local_828;
  undefined8 local_820;
  FString local_818;
  FName local_808 [2];
  FName local_7f8;
  uint local_7f0;
  FName local_7e8;
  uint local_7e0;
  FName local_7d8;
  undefined4 local_7d0;
  undefined4 local_7cc;
  FName local_7c8;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  FName local_7a8;
  FName local_7a0;
  FName local_798;
  FName local_790;
  FName local_788;
  FName local_780;
  FName local_778;
  FName local_770;
  FName local_768;
  FName local_760;
  FName local_758;
  FName local_750;
  FName local_748;
  FName local_740;
  FName local_738;
  FName local_730;
  FName local_728;
  FName local_720;
  FName local_718;
  FName local_710;
  FName local_708;
  FName local_700;
  FName local_6f8;
  FName local_6f0;
  FName local_6e8;
  FName local_6e0;
  FName local_6d8;
  FName local_6d0;
  FName local_6c8;
  FName local_6c0;
  FName local_6b8;
  FName local_6b0;
  FName local_6a8;
  FName local_6a0;
  FName local_698;
  FName local_690;
  FName local_688;
  FName local_680;
  FName local_678;
  FName local_670;
  FName local_668;
  FName local_660;
  FName local_658;
  FName local_650;
  FName local_648;
  FString local_640;
  undefined1 *local_630;
  void **local_628;
  FString local_620;
  FString local_610;
  FString local_600;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FString local_5a0;
  FRigVMTemplateArgumentType local_590;
  FString local_580;
  bool *local_570;
  void **local_568;
  FName local_560;
  UScriptStruct *local_558;
  bool *local_550;
  void **local_548;
  bool *local_540;
  void **local_538;
  bool *local_530;
  void **local_528;
  bool *local_520;
  void **local_518;
  bool *local_510;
  void **local_508;
  bool *local_500;
  void **local_4f8;
  bool *local_4f0;
  void **local_4e8;
  bool *local_4e0;
  void **local_4d8;
  undefined1 *local_4d0;
  void **local_4c8;
  undefined1 *local_4c0;
  void **local_4b8;
  bool *local_4b0;
  void **local_4a8;
  undefined1 *local_4a0;
  void **local_498;
  bool *local_490;
  void **local_488;
  bool *local_480;
  void **local_478;
  bool *local_470;
  void **local_468;
  bool *local_460;
  void **local_458;
  bool *local_450;
  void **local_448;
  bool *local_440;
  void **local_438;
  bool *local_430;
  void **local_428;
  bool *local_420;
  void **local_418;
  bool *local_410;
  void **local_408;
  bool *local_400;
  void **local_3f8;
  bool *local_3f0;
  void **local_3e8;
  bool *local_3e0;
  void **local_3d8;
  bool *local_3d0;
  void **local_3c8;
  bool *local_3c0;
  void **local_3b8;
  bool *local_3b0;
  void **local_3a8;
  bool *local_3a0;
  void **local_398;
  bool *local_390;
  void **local_388;
  bool *local_380;
  void **local_378;
  bool *local_370;
  void **local_368;
  bool *local_360;
  void **local_358;
  bool *local_350;
  void **local_348;
  bool *local_340;
  void **local_338;
  bool *local_330;
  void **local_328;
  bool *local_320;
  void **local_318;
  FString local_310;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FName local_290;
  uint local_288;
  FName local_280;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [20];
  
  piVar15 = &(this->Types).ArrayMax;
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x200;
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar17,&(this->Types).AllocatorInstance,(this->Types).ArrayNum,piVar15);
  }
  TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
             *)&this->TypeToIndex,-(uint)(this->bIsGlobalRegistry != false) & 0x200);
  this_00 = &this->TypesPerCategory;
  if ((uint)(*(int *)&(this->TypesPerCategory).field_0x8 -
            *(int *)&(this->TypesPerCategory).field_0x34) < 0x13) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,0x13);
    for (lVar19 = 0x3f; 0x21UL >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
    iVar7 = 1 << ((byte)lVar19 & 0x1f);
    local_7d0 = (undefined4)lVar19;
    iVar2 = *(int *)&(this->TypesPerCategory).field_0x48;
    if ((iVar2 == 0) || (iVar2 < iVar7)) {
      *(int *)&(this->TypesPerCategory).field_0x48 = iVar7;
      TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
  }
  this_01 = &this->TemplatesPerCategory;
  if ((uint)(*(int *)&(this->TemplatesPerCategory).field_0x8 -
            *(int *)&(this->TemplatesPerCategory).field_0x34) < 0x13) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_01,0x13);
    iVar2 = *(int *)&(this->TemplatesPerCategory).field_0x48;
    for (lVar19 = 0x3f; 0x21UL >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
    iVar7 = 1 << ((byte)lVar19 & 0x1f);
    local_7cc = (undefined4)lVar19;
    if ((iVar2 == 0) || (iVar2 < iVar7)) {
      *(int *)&(this->TemplatesPerCategory).field_0x48 = iVar7;
      TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash(this_01);
    }
  }
  local_4d0 = local_res8;
  local_4c8 = &local_a68;
  local_a68 = (void *)0x0;
  local_a60 = 0;
  local_res8[0] = 0;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d64,(bool *)&local_4d0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d64._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 8;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_a68 != (void *)0x0) {
    FMemory::Free(local_a68);
  }
  local_4c0 = local_res10;
  local_a58 = (void *)0x0;
  local_4b8 = &local_a58;
  local_a50 = 0;
  local_res10[0] = 1;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d64 + 4),(bool *)&local_4c0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d64._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x100;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_a58 != (void *)0x0) {
    FMemory::Free(local_a58);
  }
  local_630 = local_res18;
  local_a78 = (void *)0x0;
  local_628 = &local_a78;
  local_a70 = 0;
  local_res18[0] = 2;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d5c,(bool *)&local_630);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d5c._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x100;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_a78 != (void *)0x0) {
    FMemory::Free(local_a78);
  }
  local_4a0 = local_res20;
  local_a48 = (void *)0x0;
  local_498 = &local_a48;
  local_a40 = 0;
  local_res20[0] = 3;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d5c + 4),(bool *)&local_4a0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d5c._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x100;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_a48 != (void *)0x0) {
    FMemory::Free(local_a48);
  }
  local_490 = local_d88 + 0x11;
  local_a38 = (void *)0x0;
  local_488 = &local_a38;
  local_a30 = 0;
  local_d88[0x11] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d54,(bool *)&local_490);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d54._0_4_ * 0x20 + 8);
  if (*(int *)((longlong)&pFVar18[1].Data + 4) < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,8,pFVar18,*(int *)&pFVar18[1].Data,(int *)((longlong)&pFVar18[1].Data + 4));
  }
  if (local_a38 != (void *)0x0) {
    FMemory::Free(local_a38);
  }
  local_480 = local_d88 + 1;
  local_a28 = (void *)0x0;
  local_478 = &local_a28;
  local_a20 = 0;
  local_d88[1] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d54 + 4),(bool *)&local_480);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d54._4_4_ * 0x20 + 8);
  if (*(int *)((longlong)&pFVar18[1].Data + 4) < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,8,pFVar18,*(int *)&pFVar18[1].Data,(int *)((longlong)&pFVar18[1].Data + 4));
  }
  if (local_a28 != (void *)0x0) {
    FMemory::Free(local_a28);
  }
  local_470 = local_d88 + 2;
  local_a18 = (void *)0x0;
  local_468 = &local_a18;
  local_a10 = 0;
  local_d88[2] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d4c,(bool *)&local_470);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d4c._0_4_ * 0x20 + 8);
  if (*(int *)((longlong)&pFVar18[1].Data + 4) < 8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,8,pFVar18,*(int *)&pFVar18[1].Data,(int *)((longlong)&pFVar18[1].Data + 4));
  }
  if (local_a18 != (void *)0x0) {
    FMemory::Free(local_a18);
  }
  local_460 = local_d88 + 3;
  local_a08 = (void *)0x0;
  local_458 = &local_a08;
  local_a00 = 0;
  local_d88[3] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d4c + 4),(bool *)&local_460);
  lVar19 = (longlong)(int)local_d4c._4_4_ * 0x20 + *(longlong *)&this_00->field_0x0;
  pTVar8 = GetMathTypes();
  uVar17 = pTVar8->ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*(int *)(lVar19 + 0x14) < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,(ForAnyElementType *)(lVar19 + 8),*(int *)(lVar19 + 0x10),
               (int *)(lVar19 + 0x14));
  }
  if (local_a08 != (void *)0x0) {
    FMemory::Free(local_a08);
  }
  local_450 = local_d88 + 4;
  local_9f8 = (void *)0x0;
  local_448 = &local_9f8;
  local_9f0 = 0;
  local_d88[4] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d44,(bool *)&local_450);
  lVar19 = (longlong)(int)local_d44._0_4_ * 0x20 + *(longlong *)&this_00->field_0x0;
  pTVar8 = GetMathTypes();
  uVar17 = pTVar8->ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*(int *)(lVar19 + 0x14) < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,(ForAnyElementType *)(lVar19 + 8),*(int *)(lVar19 + 0x10),
               (int *)(lVar19 + 0x14));
  }
  if (local_9f8 != (void *)0x0) {
    FMemory::Free(local_9f8);
  }
  local_440 = local_d88 + 5;
  local_9e8 = (void *)0x0;
  local_438 = &local_9e8;
  local_9e0 = 0;
  local_d88[5] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d44 + 4),(bool *)&local_440);
  lVar19 = (longlong)(int)local_d44._4_4_ * 0x20 + *(longlong *)&this_00->field_0x0;
  pTVar8 = GetMathTypes();
  uVar17 = pTVar8->ArrayNum;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*(int *)(lVar19 + 0x14) < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,(ForAnyElementType *)(lVar19 + 8),*(int *)(lVar19 + 0x10),
               (int *)(lVar19 + 0x14));
  }
  if (local_9e8 != (void *)0x0) {
    FMemory::Free(local_9e8);
  }
  local_430 = local_d88 + 6;
  local_9d8 = (void *)0x0;
  local_428 = &local_9d8;
  local_9d0 = 0;
  local_d88[6] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d3c,(bool *)&local_430);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d3c._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_9d8 != (void *)0x0) {
    FMemory::Free(local_9d8);
  }
  local_420 = local_d88 + 7;
  local_9c8 = (void *)0x0;
  local_418 = &local_9c8;
  local_9c0 = 0;
  local_d88[7] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d3c + 4),(bool *)&local_420);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d3c._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_9c8 != (void *)0x0) {
    FMemory::Free(local_9c8);
  }
  local_410 = local_d88 + 8;
  local_9b8 = (void *)0x0;
  local_408 = &local_9b8;
  local_9b0 = 0;
  local_d88[8] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d34,(bool *)&local_410);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d34._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_9b8 != (void *)0x0) {
    FMemory::Free(local_9b8);
  }
  local_400 = local_d88 + 9;
  local_9a8 = (void *)0x0;
  local_3f8 = &local_9a8;
  local_9a0 = 0;
  local_d88[9] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d34 + 4),(bool *)&local_400);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d34._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_9a8 != (void *)0x0) {
    FMemory::Free(local_9a8);
  }
  local_3f0 = local_d88 + 10;
  local_998 = (void *)0x0;
  local_3e8 = &local_998;
  local_990 = 0;
  local_d88[10] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d2c,(bool *)&local_3f0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d2c._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_998 != (void *)0x0) {
    FMemory::Free(local_998);
  }
  local_3e0 = local_d88 + 0xb;
  local_988 = (void *)0x0;
  local_3d8 = &local_988;
  local_980 = 0;
  local_d88[0xb] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d2c + 4),(bool *)&local_3e0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d2c._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_988 != (void *)0x0) {
    FMemory::Free(local_988);
  }
  local_3d0 = local_d88 + 0xc;
  local_978 = (void *)0x0;
  local_3c8 = &local_978;
  local_970 = 0;
  local_d88[0xc] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d24,(bool *)&local_3d0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d24._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_978 != (void *)0x0) {
    FMemory::Free(local_978);
  }
  local_3c0 = local_d88 + 0xd;
  local_968 = (void *)0x0;
  local_3b8 = &local_968;
  local_960 = 0;
  local_d88[0xd] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d24 + 4),(bool *)&local_3c0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d24._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_968 != (void *)0x0) {
    FMemory::Free(local_968);
  }
  local_3b0 = local_d88 + 0xe;
  local_958 = (void *)0x0;
  local_3a8 = &local_958;
  local_950 = 0;
  local_d88[0xe] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d1c,(bool *)&local_3b0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_00->field_0x0 + (longlong)(int)local_d1c._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x80;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_958 != (void *)0x0) {
    FMemory::Free(local_958);
  }
  local_3a0 = local_d88 + 0xf;
  local_948 = (void *)0x0;
  local_398 = &local_948;
  local_940 = 0;
  local_d88[0xf] = false;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d1c + 4),(bool *)&local_3a0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d1c._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 8;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_948 != (void *)0x0) {
    FMemory::Free(local_948);
  }
  local_390 = local_d88 + 0x10;
  local_938 = (void *)0x0;
  local_388 = &local_938;
  local_930 = 0;
  local_d88[0x10] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d14,(bool *)&local_390);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d14._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_938 != (void *)0x0) {
    FMemory::Free(local_938);
  }
  local_380 = local_d88 + 0x22;
  local_928 = (void *)0x0;
  local_378 = &local_928;
  local_920 = 0;
  local_d88[0x22] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d14 + 4),(bool *)&local_380);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d14._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_928 != (void *)0x0) {
    FMemory::Free(local_928);
  }
  local_370 = local_d88 + 0x12;
  local_918 = (void *)0x0;
  local_368 = &local_918;
  local_910 = 0;
  local_d88[0x12] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d0c,(bool *)&local_370);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d0c._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_918 != (void *)0x0) {
    FMemory::Free(local_918);
  }
  local_360 = local_d88 + 0x13;
  local_908 = (void *)0x0;
  local_358 = &local_908;
  local_900 = 0;
  local_d88[0x13] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d0c + 4),(bool *)&local_360);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d0c._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_908 != (void *)0x0) {
    FMemory::Free(local_908);
  }
  local_350 = local_d88 + 0x14;
  local_8f8 = (void *)0x0;
  local_348 = &local_8f8;
  local_8f0 = 0;
  local_d88[0x14] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_d04,(bool *)&local_350);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d04._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8f8 != (void *)0x0) {
    FMemory::Free(local_8f8);
  }
  local_340 = local_d88 + 0x15;
  local_8e8 = (void *)0x0;
  local_338 = &local_8e8;
  local_8e0 = 0;
  local_d88[0x15] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_d04 + 4),(bool *)&local_340);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_d04._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8e8 != (void *)0x0) {
    FMemory::Free(local_8e8);
  }
  local_330 = local_d88 + 0x16;
  local_8d8 = (void *)0x0;
  local_328 = &local_8d8;
  local_8d0 = 0;
  local_d88[0x16] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_cfc,(bool *)&local_330);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cfc._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8d8 != (void *)0x0) {
    FMemory::Free(local_8d8);
  }
  local_320 = local_d88 + 0x17;
  local_8c8 = (void *)0x0;
  local_318 = &local_8c8;
  local_8c0 = 0;
  local_d88[0x17] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_cfc + 4),(bool *)&local_320);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cfc._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8c8 != (void *)0x0) {
    FMemory::Free(local_8c8);
  }
  local_570 = local_d88 + 0x18;
  local_8b8 = (void *)0x0;
  local_568 = &local_8b8;
  local_8b0 = 0;
  local_d88[0x18] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_cf4,(bool *)&local_570);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cf4._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8b8 != (void *)0x0) {
    FMemory::Free(local_8b8);
  }
  local_4b0 = local_d88 + 0x19;
  local_8a8 = (void *)0x0;
  local_4a8 = &local_8a8;
  local_8a0 = 0;
  local_d88[0x19] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_cf4 + 4),(bool *)&local_4b0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cf4._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_8a8 != (void *)0x0) {
    FMemory::Free(local_8a8);
  }
  local_4e0 = local_d88 + 0x1a;
  local_898 = (void *)0x0;
  local_4d8 = &local_898;
  local_890 = 0;
  local_d88[0x1a] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_cec,(bool *)&local_4e0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cec._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_898 != (void *)0x0) {
    FMemory::Free(local_898);
  }
  local_4f0 = local_d88 + 0x1b;
  local_888 = (void *)0x0;
  local_4e8 = &local_888;
  local_880 = 0;
  local_d88[0x1b] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_cec + 4),(bool *)&local_4f0);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cec._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_888 != (void *)0x0) {
    FMemory::Free(local_888);
  }
  local_500 = local_d88 + 0x1c;
  local_878 = (void *)0x0;
  local_4f8 = &local_878;
  local_870 = 0;
  local_d88[0x1c] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_ce4,(bool *)&local_500);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_ce4._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_878 != (void *)0x0) {
    FMemory::Free(local_878);
  }
  local_510 = local_d88 + 0x1d;
  local_868 = (void *)0x0;
  local_508 = &local_868;
  local_860 = 0;
  local_d88[0x1d] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_ce4 + 4),(bool *)&local_510);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_ce4._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_868 != (void *)0x0) {
    FMemory::Free(local_868);
  }
  local_520 = local_d88 + 0x1e;
  local_858 = (void *)0x0;
  local_518 = &local_858;
  local_850 = 0;
  local_d88[0x1e] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_cdc,(bool *)&local_520);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cdc._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_858 != (void *)0x0) {
    FMemory::Free(local_858);
  }
  local_530 = local_d88 + 0x1f;
  local_848 = (void *)0x0;
  local_528 = &local_848;
  local_840 = 0;
  local_d88[0x1f] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_cdc + 4),(bool *)&local_530);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cdc._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_848 != (void *)0x0) {
    FMemory::Free(local_848);
  }
  local_540 = local_d88 + 0x20;
  local_838 = (void *)0x0;
  local_538 = &local_838;
  local_830 = 0;
  local_d88[0x20] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)local_cd4,(bool *)&local_540);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cd4._0_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_838 != (void *)0x0) {
    FMemory::Free(local_838);
  }
  local_550 = local_d88 + 0x21;
  local_828 = (void *)0x0;
  local_548 = &local_828;
  local_820 = 0;
  local_d88[0x21] = true;
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<FRigVMTemplateArgument::ETypeCategory_&&,TArray<int,TSizedDefaultAllocator<32>_>_&&>
                      *)(local_cd4 + 4),(bool *)&local_550);
  pFVar18 = (ForAnyElementType *)
            (*(longlong *)&this_01->field_0x0 + (longlong)(int)local_cd4._4_4_ * 0x20 + 8);
  uVar17 = -(uint)(this->bIsGlobalRegistry != false) & 0x40;
  piVar15 = (int *)((longlong)&pFVar18[1].Data + 4);
  if (*piVar15 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,pFVar18,*(int *)&pFVar18[1].Data,piVar15);
  }
  if (local_828 != (void *)0x0) {
    FMemory::Free(local_828);
  }
  local_d88[0] = this->bIsGlobalRegistry;
  this->bIsGlobalRegistry = true;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  pUVar9 = FRigVMExecuteContext::StaticStruct();
  pFVar10 = RigVMTypeUtils::GetUniqueStructTypeName(&local_278,pUVar9);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_560,pwVar14);
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  local_558 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_12c,&local_560);
  local_6a8 = *pFVar11;
  uVar17 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_290 = local_6a8;
  local_288 = uVar17;
  TVar12.DebugPtr = (UObject *)FRigVMExecuteContext::StaticStruct();
  pFVar10 = RigVMTypeUtils::GetUniqueStructTypeName(&local_268,(UScriptStruct *)TVar12.DebugPtr);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_590.CPPType,pwVar14);
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  local_590.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar12.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar12.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar12.DebugPtr);
  }
  pFVar13 = FRigVMTemplateArgumentType::ConvertToArray(&local_590);
  pFVar11 = (FName *)(*pcVar5)(this,local_120,pFVar13);
  local_7f8 = *pFVar11;
  uVar3 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_7f0 = uVar3;
  local_6a0 = local_7f8;
  FLazyName::Resolve(&RigVMTypeUtils::BoolTypeName);
  local_cb0 = local_7c8;
  local_ca8 = (UObject *)0x0;
  ::FName::ToString(&local_cb0,&local_5a0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_258,&local_5a0,local_ca8,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_7c0,pwVar14);
  local_cb0 = local_7c0;
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_5a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_108,&local_cb0);
  local_b28 = *pFVar11;
  uVar4 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_b20 = uVar4;
  local_698 = local_b28;
  FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
  local_cc0 = local_7b8;
  local_cb8 = (UObject *)0x0;
  ::FName::ToString(&local_cc0,&local_5b0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_248,&local_5b0,local_cb8,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_7b0,pwVar14);
  local_cc0 = local_7b0;
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_138,&local_cc0);
  local_b18 = *pFVar11;
  local_b10 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_690 = local_b18;
  FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName);
  local_ca0 = local_7a8;
  local_c98 = (UObject *)0x0;
  ::FName::ToString(&local_ca0,&local_5c0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_238,&local_5c0,local_c98,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_7a0,pwVar14);
  local_ca0 = local_7a0;
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_54,&local_ca0);
  local_b08 = *pFVar11;
  local_b00 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_7d8 = local_b08;
  FLazyName::Resolve(&RigVMTypeUtils::Int32TypeName);
  local_c88 = local_798;
  local_c80 = (UObject *)0x0;
  ::FName::ToString(&local_c88,&local_5d0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_228,&local_5d0,local_c80,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_790,pwVar14);
  local_c88 = local_790;
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_60,&local_c88);
  local_af8 = *pFVar11;
  local_af0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_688 = local_af8;
  FLazyName::Resolve(&RigVMTypeUtils::UInt32TypeName);
  local_c78 = local_788;
  local_c70 = (UObject *)0x0;
  ::FName::ToString(&local_c78,&local_5e0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_218,&local_5e0,local_c70,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_780,pwVar14);
  local_c78 = local_780;
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if (local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_6c,&local_c78);
  local_ae8 = *pFVar11;
  local_ae0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_680 = local_ae8;
  FLazyName::Resolve(&RigVMTypeUtils::UInt8TypeName);
  local_c68 = local_778;
  local_c60 = (UObject *)0x0;
  ::FName::ToString(&local_c68,&local_5f0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_208,&local_5f0,local_c60,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_770,pwVar14);
  local_c68 = local_770;
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_78,&local_c68);
  local_ad8 = *pFVar11;
  local_ad0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_678 = local_ad8;
  FLazyName::Resolve(&RigVMTypeUtils::FNameTypeName);
  local_c58 = local_768;
  local_c50 = (UObject *)0x0;
  ::FName::ToString(&local_c58,&local_600);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1f8,&local_600,local_c50,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_760,pwVar14);
  local_c58 = local_760;
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_84,&local_c58);
  local_ac8 = *pFVar11;
  local_ac0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_670 = local_ac8;
  FLazyName::Resolve(&RigVMTypeUtils::FStringTypeName);
  local_c48 = local_758;
  local_c40 = (UObject *)0x0;
  ::FName::ToString(&local_c48,&local_610);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1e8,&local_610,local_c40,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_750,pwVar14);
  local_c48 = local_750;
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_610.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_90,&local_c48);
  local_ab8 = *pFVar11;
  local_ab0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_668 = local_ab8;
  pUVar9 = RigVMTypeUtils::GetWildCardCPPTypeObject();
  this_02 = RigVMTypeUtils::GetWildCardCPPTypeName();
  FLazyName::Resolve(this_02);
  local_c38 = local_748;
  local_c30 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ::FName::ToString(&local_c38,&local_620);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1d8,&local_620,(UObject *)local_c30,
                       (FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_740,pwVar14);
  local_c38 = local_740;
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_9c,&local_c38);
  local_aa8 = *pFVar11;
  local_aa0 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_660 = local_aa8;
  FLazyName::Resolve(&RigVMTypeUtils::BoolArrayTypeName);
  local_c28 = local_738;
  local_c20 = (UObject *)0x0;
  ::FName::ToString(&local_c28,&local_310);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1c8,&local_310,local_c20,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_730,pwVar14);
  local_c28 = local_730;
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_a8,&local_c28);
  local_b38 = *pFVar11;
  local_b30 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_658 = local_b38;
  FLazyName::Resolve(&RigVMTypeUtils::FloatArrayTypeName);
  local_c18 = local_728;
  local_c10 = (UObject *)0x0;
  ::FName::ToString(&local_c18,&local_300);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1b8,&local_300,local_c10,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_720,pwVar14);
  local_c18 = local_720;
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_b4,&local_c18);
  local_a98 = *pFVar11;
  local_a90 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_650 = local_a98;
  FLazyName::Resolve(&RigVMTypeUtils::DoubleArrayTypeName);
  local_c08 = local_718;
  local_c00 = (UObject *)0x0;
  ::FName::ToString(&local_c08,&local_2f0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_1a8,&local_2f0,local_c00,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_710,pwVar14);
  local_c08 = local_710;
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_c0,&local_c08);
  local_b98 = *pFVar11;
  local_b90 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_648 = local_b98;
  FLazyName::Resolve(&RigVMTypeUtils::Int32ArrayTypeName);
  local_bf8 = local_708;
  local_bf0 = (UObject *)0x0;
  ::FName::ToString(&local_bf8,&local_2e0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_198,&local_2e0,local_bf0,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_700,pwVar14);
  local_bf8 = local_700;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_cc,&local_bf8);
  local_b88 = *pFVar11;
  local_b80 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_640.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_b88;
  FLazyName::Resolve(&RigVMTypeUtils::UInt32ArrayTypeName);
  local_be8 = local_6f8;
  local_be0 = (UObject *)0x0;
  ::FName::ToString(&local_be8,&local_2d0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_188,&local_2d0,local_be0,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_6f0,pwVar14);
  local_be8 = local_6f0;
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_d8,&local_be8);
  local_b78 = *pFVar11;
  local_b70 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_a88 = local_b78;
  FLazyName::Resolve(&RigVMTypeUtils::UInt8ArrayTypeName);
  local_bd8 = local_6e8;
  local_bd0 = (UObject *)0x0;
  ::FName::ToString(&local_bd8,&local_2c0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_178,&local_2c0,local_bd0,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_6e0,pwVar14);
  local_bd8 = local_6e0;
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_e4,&local_bd8);
  local_b68 = *pFVar11;
  local_b60 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_808[0] = local_b68;
  FLazyName::Resolve(&RigVMTypeUtils::FNameArrayTypeName);
  local_bc8 = local_6d8;
  local_bc0 = (UObject *)0x0;
  ::FName::ToString(&local_bc8,&local_2b0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_168,&local_2b0,local_bc0,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_6d0,pwVar14);
  local_bc8 = local_6d0;
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_f0,&local_bc8);
  local_c90 = *pFVar11;
  local_b50 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_b58 = local_c90;
  FLazyName::Resolve(&RigVMTypeUtils::FStringArrayTypeName);
  local_bb8 = local_6c8;
  local_bb0 = (UObject *)0x0;
  ::FName::ToString(&local_bb8,&local_2a0);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_158,&local_2a0,local_bb0,(FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_6c0,pwVar14);
  local_bb8 = local_6c0;
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_fc,&local_bb8);
  local_cc8 = *pFVar11;
  local_b40 = pFVar11[1].ComparisonIndex.Value;
  pcVar5 = *(code **)(this->_padding_ + 0xc0);
  local_b48 = local_cc8;
  pUVar9 = RigVMTypeUtils::GetWildCardCPPTypeObject();
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar15 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if ((*piVar15 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pFVar10 = RigVMTypeUtils::GetWildCardCPPType();
      local_818.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_818.Data.ArrayNum = 0;
      local_818.Data.ArrayMax = 0;
      RigVMStringUtils::JoinStrings
                (&WildCardArrayCPPType,&local_818,pFVar10,L"TArray<",(wchar_t *)0x0,L">");
      if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_818.Data.AllocatorInstance.Data);
      }
      atexit(`RigVMTypeUtils::GetWildCardArrayCPPType'::__l2::
             _dynamic_atexit_destructor_for__WildCardArrayCPPType__);
      _Init_thread_footer(&::_TSS0);
    }
    pwVar14 = L"";
    if (WildCardArrayCPPType.Data.ArrayNum != 0) {
      pwVar14 = (wchar_t *)WildCardArrayCPPType.Data.AllocatorInstance.Data;
    }
    pFVar11 = ::FName::FName(&local_280,pwVar14);
    WildCardArrayCPPTypeName.Either.PackedName =
         (ulonglong)*pFVar11 & 0xffffffff | 0x8000000000000000;
    WildCardArrayCPPTypeName.Number = (*pFVar11).Number;
    WildCardArrayCPPTypeName.LiteralType = None;
    _Init_thread_footer(&::_TSS0);
  }
  FLazyName::Resolve(&WildCardArrayCPPTypeName);
  local_ba8 = local_6b8;
  local_ba0 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  ::FName::ToString(&local_ba8,&local_580);
  pFVar10 = RigVMTypeUtils::PostProcessCPPType
                      (&local_148,&local_580,(UObject *)local_ba0,
                       (FRigVMUserDefinedTypeResolver *)0x0);
  if ((pFVar10->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_6b0,pwVar14);
  local_ba8 = local_6b0;
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_580.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_580.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(*pcVar5)(this,local_114,&local_ba8,0);
  local_7e8 = *pFVar11;
  local_7e0 = pFVar11[1].ComparisonIndex.Value;
  this->bIsGlobalRegistry = local_d88[0];
  if (local_d88[0] == false) {
    if ((RigVMTypeUtils::TypeIndex::Execute.Index != uVar17) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Execute == LocalExecuteIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x20c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::ExecuteArray.Index != uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::ExecuteArray == LocalExecuteArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x20d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::Bool.Index != uVar4) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Bool == LocalBoolIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x20e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::Float.Index != local_b10) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Float == LocalFloatIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x20f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::Double.Index != local_b00) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Double == LocalDoubleIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x210,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::Int32.Index != local_af0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Int32 == LocalInt32Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x211,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::UInt32.Index != local_ae0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::UInt32 == LocalUInt32Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x212,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::UInt8.Index != local_ad0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::UInt8 == LocalUInt8Index",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x213,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::FName.Index != local_ac0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::FName == LocalFNameIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x214,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::FString.Index != local_ab0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::FString == LocalFStringIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x215,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::WildCard.Index != local_aa0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::WildCard == LocalWildCardIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x216,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::BoolArray.Index != local_b30) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::BoolArray == LocalBoolArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x217,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::FloatArray.Index != local_a90) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::FloatArray == LocalFloatArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x218,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::DoubleArray.Index != local_b90) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::DoubleArray == LocalDoubleArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x219,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::Int32Array.Index != local_b80) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::Int32Array == LocalInt32ArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::UInt32Array.Index != local_b70) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::UInt32Array == LocalUInt32ArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::UInt8Array.Index != local_b60) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::UInt8Array == LocalUInt8ArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::FNameArray.Index != local_b50) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::FNameArray == LocalFNameArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::FStringArray.Index != local_b40) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::FStringArray == LocalFStringArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((RigVMTypeUtils::TypeIndex::WildCardArray.Index != local_7e0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RigVMTypeUtils::TypeIndex::WildCardArray == LocalWildCardArrayIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x21f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    RigVMTypeUtils::TypeIndex::Execute.Name = local_6a8;
    RigVMTypeUtils::TypeIndex::ExecuteArray.Name = local_6a0;
    RigVMTypeUtils::TypeIndex::Bool.Name = local_698;
    RigVMTypeUtils::TypeIndex::Float.Name = local_690;
    RigVMTypeUtils::TypeIndex::Float.Index = local_b10;
    RigVMTypeUtils::TypeIndex::Double.Name = local_7d8;
    RigVMTypeUtils::TypeIndex::Double.Index = local_b00;
    RigVMTypeUtils::TypeIndex::Int32.Name = local_688;
    RigVMTypeUtils::TypeIndex::Int32.Index = local_af0;
    RigVMTypeUtils::TypeIndex::UInt32.Name = local_680;
    RigVMTypeUtils::TypeIndex::UInt32.Index = local_ae0;
    RigVMTypeUtils::TypeIndex::UInt8.Name = local_678;
    RigVMTypeUtils::TypeIndex::UInt8.Index = local_ad0;
    RigVMTypeUtils::TypeIndex::FName.Name = local_670;
    RigVMTypeUtils::TypeIndex::FName.Index = local_ac0;
    RigVMTypeUtils::TypeIndex::FString.Name = local_668;
    RigVMTypeUtils::TypeIndex::FString.Index = local_ab0;
    RigVMTypeUtils::TypeIndex::WildCard.Name = local_660;
    RigVMTypeUtils::TypeIndex::WildCard.Index = local_aa0;
    RigVMTypeUtils::TypeIndex::BoolArray.Name = local_658;
    RigVMTypeUtils::TypeIndex::BoolArray.Index = local_b30;
    RigVMTypeUtils::TypeIndex::FloatArray.Name = local_650;
    RigVMTypeUtils::TypeIndex::FloatArray.Index = local_a90;
    RigVMTypeUtils::TypeIndex::DoubleArray.Name = local_648;
    RigVMTypeUtils::TypeIndex::DoubleArray.Index = local_b90;
    RigVMTypeUtils::TypeIndex::Int32Array.Name = (FName)local_640.Data.AllocatorInstance.Data;
    RigVMTypeUtils::TypeIndex::Int32Array.Index = local_b80;
    RigVMTypeUtils::TypeIndex::UInt32Array.Name = local_a88;
    RigVMTypeUtils::TypeIndex::UInt32Array.Index = local_b70;
    RigVMTypeUtils::TypeIndex::UInt8Array.Name = local_808[0];
    RigVMTypeUtils::TypeIndex::UInt8Array.Index = local_b60;
    RigVMTypeUtils::TypeIndex::FNameArray.Name = local_c90;
    RigVMTypeUtils::TypeIndex::FNameArray.Index = local_b50;
    RigVMTypeUtils::TypeIndex::FStringArray.Name = local_cc8;
    RigVMTypeUtils::TypeIndex::FStringArray.Index = local_b40;
    RigVMTypeUtils::TypeIndex::Execute.Index = uVar17;
    RigVMTypeUtils::TypeIndex::ExecuteArray.Index = uVar3;
    RigVMTypeUtils::TypeIndex::Bool.Index = uVar4;
    RigVMTypeUtils::TypeIndex::WildCardArray.Name = local_7e8;
    RigVMTypeUtils::TypeIndex::WildCardArray.Index = local_7e0;
    pTVar8 = GetMathTypes();
    pFVar16 = (pTVar8->AllocatorInstance).Data;
    iVar2 = pTVar8->ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar8->ArrayNum != iVar2) {
        `TCheckedPointerIterator<UScriptStruct_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d88);
      }
      if (pFVar16 == pFVar1) break;
      pUVar9 = *(UScriptStruct **)pFVar16;
      pcVar5 = *(code **)(this->_padding_ + 0xc0);
      pFVar10 = RigVMTypeUtils::GetUniqueStructTypeName(&local_640,pUVar9);
      if ((pFVar10->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_a88,pwVar14);
      if ((FName)local_640.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_640.Data.AllocatorInstance.Data);
      }
      local_a80 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (*pcVar5)(this,local_808,&local_a88,0);
      pFVar16 = pFVar16 + 8;
    }
    local_cc8 = (FName)this;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FRigVMRegistry_NoLock::InitializeBaseTypes_NoLock_::__l6::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FCoreDelegates::OnExit,(<lambda_1> *)&local_c90);
  }
  return;
}

// IsAllowedType_NoLock @ 14a0f7ef0

bool __thiscall
FRigVMRegistry_NoLock::IsAllowedType_NoLock(FRigVMRegistry_NoLock *this,FProperty *param_1)

{
  ulonglong uVar1;
  FProperty *pFVar2;
  bool bVar3;
  
  uVar1 = *(ulonglong *)(param_1->_padding_ + 0x18);
  while( true ) {
    if ((uVar1 >> 0x11 & 1) != 0) {
      return true;
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      return true;
    }
    if ((uVar1 & 2) != 0) {
      return true;
    }
    if ((uVar1 >> 0x1f & 1) != 0) {
      return true;
    }
    if ((char)uVar1 < '\0') {
      return true;
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      return true;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      return true;
    }
    if ((uVar1 >> 0x20 & 1) != 0) break;
    if ((uVar1 >> 0x18 & 1) != 0) {
      return true;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      return true;
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      return true;
    }
    if (((uVar1 >> 0x15 & 1) == 0) ||
       (pFVar2 = (FProperty *)param_1[1]._padding_, pFVar2 == (FProperty *)0x0)) {
      if ((uVar1 >> 0x14 & 1) != 0) {
        bVar3 = IsAllowedType_NoLock(this,(UStruct *)param_1[1]._padding_);
        return bVar3;
      }
      if ((uVar1 >> 10 & 1) != 0) {
        bVar3 = IsAllowedType_NoLock(this,(UClass *)param_1[1]._padding_);
        return bVar3;
      }
      if (((uVar1 >> 0x10 & 1) != 0) || ((uVar1 >> 0x1d & 1) != 0)) {
        bVar3 = IsAllowedType_NoLock(this,(UClass *)param_1[1]._padding_);
        return bVar3;
      }
      if ((uVar1 >> 0x30 & 1) != 0) {
        bVar3 = IsAllowedType_NoLock(this,(UEnum *)param_1[1]._padding_);
        return bVar3;
      }
      if ((uVar1 & 0x40) != 0) {
        if ((UEnum *)param_1[1]._padding_ == (UEnum *)0x0) {
          return true;
        }
        bVar3 = IsAllowedType_NoLock(this,(UEnum *)param_1[1]._padding_);
        return bVar3;
      }
      return false;
    }
    uVar1 = *(ulonglong *)(pFVar2->_padding_ + 0x18);
    param_1 = pFVar2;
  }
  return true;
}

// IsAllowedType_NoLock @ 14a0f7fd0

bool __thiscall
FRigVMRegistry_NoLock::IsAllowedType_NoLock(FRigVMRegistry_NoLock *this,UClass *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  uint uVar5;
  FName local_res10;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if (((param_1 != (UClass *)0x0) && ((param_1->ClassFlags >> 0x18 & 1) == 0)) &&
     ((char)param_1->ClassFlags < '\0')) {
    pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_res10 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    bVar2 = FPackageName::IsVersePackage(&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&VerseClassName,L"VerseClass");
        _Init_thread_footer(&::_TSS0);
      }
      if (CONCAT44(VerseClassName.Number,VerseClassName.ComparisonIndex.Value) != 0) {
        for (lVar1 = param_1->_padding_; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
          if (((uint)*(undefined8 *)(lVar1 + 0x18) == VerseClassName.ComparisonIndex.Value) &&
             ((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) == VerseClassName.Number)) {
            return false;
          }
        }
      }
      local_res10 = (FName)param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable((UObject *)param_1),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      iVar3 = TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                        (&this->AllowedClasses,uVar5 >> 0x10 ^ uVar5,
                         (TObjectPtr<UClass_const_> *)&local_res10);
      return iVar3 != -1;
    }
  }
  return false;
}

// IsAllowedType_NoLock @ 14a0f81b0

bool __thiscall
FRigVMRegistry_NoLock::IsAllowedType_NoLock(FRigVMRegistry_NoLock *this,UEnum *param_1)

{
  longlong lVar1;
  bool bVar2;
  UPackage *pUVar3;
  FName local_res10 [3];
  FString local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 != (UEnum *)0x0) {
    pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
    local_res10[0] = (FName)pUVar3->_padding_;
    ::FName::ToString(local_res10,&local_28);
    local_18.Size = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    local_18.DataPtr = (wchar_t *)local_28.Data.AllocatorInstance.Data;
    bVar2 = FPackageName::IsVersePackage(&local_18);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (!bVar2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&VerseEnumName,L"VerseEnum");
        _Init_thread_footer(&::_TSS0);
      }
      if (CONCAT44(VerseEnumName.Number,VerseEnumName.ComparisonIndex.Value) != 0) {
        for (lVar1 = param_1->_padding_; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
          if (((uint)*(undefined8 *)(lVar1 + 0x18) == VerseEnumName.ComparisonIndex.Value) &&
             ((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) == VerseEnumName.Number)) {
            return false;
          }
        }
      }
      if (((param_1->_padding_ & 0x18000) == 0) && ((param_1->_padding_ & 1) != 0)) {
        return true;
      }
    }
  }
  return false;
}

// IsAllowedType_NoLock @ 14a0f82f0

bool __thiscall
FRigVMRegistry_NoLock::IsAllowedType_NoLock(FRigVMRegistry_NoLock *this,UStruct *param_1)

{
  longlong lVar1;
  FProperty *pFVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UScriptStruct *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  FName local_res10;
  FString local_38;
  TFieldIterator<FProperty> local_28;
  
  if (param_1 == (UStruct *)0x0) {
    return false;
  }
  if ((param_1->_padding_ & 0x18000) != 0) {
    return false;
  }
  if ((param_1->_padding_ & 1) == 0) {
    return false;
  }
  if (Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct,(UObject *)pUVar5,L"RigVMStruct");
    if (Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton == (UScriptStruct *)0x0)
    goto LAB_14a0f83b4;
  }
  iVar4 = (int)(Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton)->_padding_;
  if (((int)param_1->_padding_ < iVar4) ||
     ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar4 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton)->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    pUVar6 = FRigVMTrait::StaticStruct();
    if (pUVar6 == (UScriptStruct *)0x0) {
      return false;
    }
    iVar4 = (int)pUVar6->_padding_;
    if (((int)param_1->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar4 * 8) != &pUVar6->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return false;
    }
  }
LAB_14a0f83b4:
  pUVar6 = FRigVMDispatchFactory::StaticStruct();
  if (pUVar6 != (UScriptStruct *)0x0) {
    iVar4 = (int)pUVar6->_padding_;
    if (((int)param_1->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar4 * 8) != &pUVar6->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      return false;
    }
  }
  pUVar5 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res10 = (FName)pUVar5->_padding_;
  ::FName::ToString(&local_res10,&local_38);
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayNum = 0;
  }
  else {
    local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
  }
  local_28.Field = (FField *)CONCAT44(local_28.Field._4_4_,local_38.Data.ArrayNum);
  local_28.Struct = (UStruct *)local_38.Data.AllocatorInstance.Data;
  bVar3 = FPackageName::IsVersePackage((TStringView<wchar_t> *)&local_28);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&VerseStructName,L"VerseStruct");
      _Init_thread_footer(&::_TSS0);
    }
    if (CONCAT44(VerseStructName.Number,VerseStructName.ComparisonIndex.Value) != 0) {
      for (lVar1 = param_1->_padding_; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
        if (((uint)*(undefined8 *)(lVar1 + 0x18) == VerseStructName.ComparisonIndex.Value) &&
           ((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) == VerseStructName.Number)) {
          return false;
        }
      }
    }
    bVar3 = UObjectBaseUtility::IsA<UUserDefinedStruct>((UObjectBaseUtility *)param_1);
    if (!bVar3) {
      pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar4 = (int)pUVar7->_padding_;
      if ((iVar4 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar7->_padding_)) {
        local_res10 = (FName)param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable((UObject *)param_1),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        iVar4 = TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                          (&this->AllowedStructs,uVar8 >> 0x10 ^ uVar8,
                           (TObjectPtr<UScriptStruct_const_> *)&local_res10);
        if (iVar4 != -1) {
          return true;
        }
      }
      local_28.Field = param_1->ChildProperties;
      local_28.InterfaceIndex = -1;
      local_28.bIncludeSuper = true;
      local_28.bIncludeDeprecated = true;
      local_28.bIncludeInterface = false;
      local_28.Struct = param_1;
      TFieldIterator<FProperty>::IterateToNext(&local_28);
      pFVar2 = (FProperty *)local_28.Field;
      while (pFVar2 != (FProperty *)0x0) {
        local_28.Field = (FField *)pFVar2;
        bVar3 = IsAllowedType_NoLock(this,pFVar2);
        if (!bVar3) {
          return false;
        }
        local_28.Field = (FField *)pFVar2->_padding_;
        TFieldIterator<FProperty>::IterateToNext(&local_28);
        pFVar2 = (FProperty *)local_28.Field;
      }
    }
    return true;
  }
  return false;
}

// IsArrayType_NoLock @ 14a0f8e10

bool __thiscall
FRigVMRegistry_NoLock::IsArrayType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1->Index;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Types).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (this->Types).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    return (bool)(this->Types).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x30 + 0x28];
  }
  return false;
}

// IsExecuteType_NoLock @ 14a0f9330

bool __thiscall
FRigVMRegistry_NoLock::IsExecuteType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  uVar1 = param_1->Index;
  if (uVar1 != 0xffffffff) {
    if ((-1 < (int)uVar1) && ((int)uVar1 < (this->Types).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar1 < (this->Types).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      return (bool)(this->Types).AllocatorInstance.Data[(longlong)(int)uVar1 * 0x30 + 0x29];
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346944693>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x74b,"Types.IsValidIndex(InTypeIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// IsTypeOfByName @ 14a0f9e20

bool __cdecl FRigVMRegistry_NoLock::IsTypeOfByName(UObject *param_1,FName *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (UObject *)0x0) && (*param_2 != (FName)0x0)) {
    for (lVar1 = *(longlong *)&param_1->field_0x10; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40))
    {
      if (((uint)*(undefined8 *)(lVar1 + 0x18) == (*param_2).ComparisonIndex.Value) &&
         ((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) == param_2->Number)) {
        return true;
      }
    }
  }
  return false;
}

// IsWildCardType_NoLock @ 14a0fa280

bool __thiscall
FRigVMRegistry_NoLock::IsWildCardType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  if ((RigVMTypeUtils::TypeIndex::WildCard.Index != param_1->Index) &&
     (RigVMTypeUtils::TypeIndex::WildCardArray.Index != param_1->Index)) {
    return false;
  }
  return true;
}

// IsWithinPlugin @ 14a0fa2d0

bool __cdecl
FRigVMRegistry_NoLock::IsWithinPlugin
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UObject *param_2)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res10 [8];
  FString local_48;
  FSoftObjectPath local_38;
  
  if (((param_2 == (UObject *)0x0) || ((*(uint *)&param_2->field_0x8 >> 0x1e & 1) != 0)) ||
     (param_1->ArrayNum == 0)) {
    return false;
  }
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_38,param_2);
  FSoftObjectPath::ToString(&local_38,&local_48);
  iVar1 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar5) {
      bVar2 = false;
      goto LAB_14a0fa396;
    }
    iVar6 = *(int *)(pFVar4 + 8) + -1;
    if (*(int *)(pFVar4 + 8) == 0) {
      iVar6 = 0;
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)pFVar4;
    }
    bVar2 = ::FString::StartsWith(&local_48,pwVar3,iVar6,IgnoreCase);
    if (bVar2) break;
    pFVar4 = pFVar4 + 0x10;
  }
  bVar2 = true;
LAB_14a0fa396:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// IsWithinPlugin @ 14a0fa3f0

bool __cdecl FRigVMRegistry_NoLock::IsWithinPlugin(IPlugin *param_1,UObject *param_2)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar2 = GetPluginModulePrefixes(&local_18,param_1);
  bVar1 = IsWithinPlugin(pTVar2,param_2);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// NumTypes_NoLock @ 14a0fdf70

int __thiscall FRigVMRegistry_NoLock::NumTypes_NoLock(FRigVMRegistry_NoLock *this)

{
  return (this->Types).ArrayNum;
}

// OnAnimationAttributeTypesChanged_NoLock @ 14a0fe800

void __thiscall
FRigVMRegistry_NoLock::OnAnimationAttributeTypesChanged_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 local_38 [16];
  FName local_28;
  UScriptStruct *local_20;
  FString local_18;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346945455>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x451,"InStruct");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2) {
    pcVar1 = *(code **)(this->_padding_ + 0xc0);
    pFVar3 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,param_1);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
    ::FName::FName(&local_28,pwVar4);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    local_20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (*pcVar1)(this,local_38,&local_28,0);
  }
  return;
}

// OnAssetRemoved_NoLock @ 14a0fea30

bool __thiscall
FRigVMRegistry_NoLock::OnAssetRemoved_NoLock(FRigVMRegistry_NoLock *this,FAssetData *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  FSoftObjectPath local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0xd0);
  FAssetData::GetSoftObjectPath(param_1,&local_28);
  uVar2 = (*pcVar1)(this,&local_28);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return (bool)uVar2;
}

// OnAssetRenamed_NoLock @ 14a0fec00

void __thiscall
FRigVMRegistry_NoLock::OnAssetRenamed_NoLock
          (FRigVMRegistry_NoLock *this,FAssetData *param_1,FString *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  FName FVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *pTVar14;
  FNameEntryId FVar15;
  undefined1 *puVar16;
  longlong lVar17;
  TMap<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
  *this_00;
  FSoftObjectPath local_78;
  FSoftObjectPath local_58 [2];
  
  local_78.AssetPath.PackageName = (FName)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_58[0].AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_58[0].AssetPath.PackageName.Number = 0;
  local_58[0].AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_58[0].AssetPath.AssetName.Number = 0;
  local_58[0].SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].SubPathString.Data.ArrayNum = 0;
  local_58[0].SubPathString.Data.ArrayMax = 0;
  uVar12 = 0;
  FVar15.Value = iVar1 - 1;
  if (iVar1 == 0) {
    FVar15.Value = uVar12;
  }
  local_78.AssetPath.AssetName.ComparisonIndex.Value = FVar15.Value;
  FSoftObjectPath::SetPath(local_58,(TStringView<wchar_t> *)&local_78);
  FVar8 = local_58[0].AssetPath.AssetName;
  this_00 = &this->SoftObjectPathToTypeIndex;
  uVar10 = ::GetTypeHash(local_58[0].AssetPath.AssetName.ComparisonIndex.Value);
  FVar7 = local_58[0].AssetPath.PackageName;
  uVar11 = ::GetTypeHash(local_58[0].AssetPath.PackageName.ComparisonIndex.Value);
  uVar11 = uVar11 + FVar7.Number;
  uVar11 = uVar11 * 0x40 + uVar10 + FVar8.Number + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
  if (1 < local_58[0].SubPathString.Data.ArrayNum) {
    uVar10 = local_58[0].SubPathString.Data.ArrayNum - 1;
    if (local_58[0].SubPathString.Data.ArrayNum == 0) {
      uVar10 = uVar12;
    }
    uVar10 = FCrc::Strihash_DEPRECATED<char8_t>
                       (uVar10,(uchar *)local_58[0].SubPathString.Data.AllocatorInstance.Data);
    uVar11 = uVar11 ^ uVar10 + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2);
  }
  if (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x8 !=
      *(int *)&(this->SoftObjectPathToTypeIndex).field_0x34) {
    puVar16 = *(undefined1 **)&(this->SoftObjectPathToTypeIndex).field_0x40;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &(this->SoftObjectPathToTypeIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar16 +
                    (ulonglong)(*(int *)&(this->SoftObjectPathToTypeIndex).field_0x48 - 1U & uVar11)
                    * 4);
    while (iVar1 != -1) {
      lVar17 = (longlong)iVar1 * 0x50;
      bVar9 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)(*(longlong *)&this_00->field_0x0 + lVar17),local_58);
      FVar7 = local_58[0].AssetPath.AssetName;
      if (bVar9) {
        lVar17 = *(longlong *)&this_00->field_0x0 + lVar17;
        puVar13 = (undefined8 *)(lVar17 + 0x20);
        if (lVar17 == 0) {
          puVar13 = (undefined8 *)0x0;
        }
        if (puVar13 != (undefined8 *)0x0) {
          uVar2 = *(undefined4 *)(puVar13 + 4);
          uVar3 = *puVar13;
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          if (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x8 !=
              *(int *)&(this->SoftObjectPathToTypeIndex).field_0x34) {
            uVar10 = ::GetTypeHash(local_58[0].AssetPath.AssetName.ComparisonIndex.Value);
            FVar8 = local_58[0].AssetPath.PackageName;
            uVar11 = ::GetTypeHash(local_58[0].AssetPath.PackageName.ComparisonIndex.Value);
            uVar11 = uVar11 + FVar8.Number;
            uVar11 = uVar11 * 0x40 + uVar10 + FVar7.Number + (uVar11 >> 2) + 0x9e3779b9 ^ uVar11;
            if (1 < local_58[0].SubPathString.Data.ArrayNum) {
              uVar10 = local_58[0].SubPathString.Data.ArrayNum - 1;
              if (local_58[0].SubPathString.Data.ArrayNum == 0) {
                uVar10 = uVar12;
              }
              uVar12 = FCrc::Strihash_DEPRECATED<char8_t>
                                 (uVar10,(uchar *)local_58[0].SubPathString.Data.AllocatorInstance.
                                                  Data);
              uVar11 = uVar11 ^ uVar12 + 0x9e3779b9 + uVar11 * 0x40 + (uVar11 >> 2);
            }
            TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FSoftObjectPath>
                      ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                        *)this_00,uVar11,local_58);
          }
          FAssetData::GetSoftObjectPath(param_1,&local_78);
          pTVar14 = TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                    ::Emplace<FSoftObjectPath>
                              ((TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                                *)this_00,&local_78);
          *(undefined8 *)pTVar14 = uVar3;
          *(undefined8 *)&pTVar14->field_0x8 = uVar4;
          *(undefined8 *)&pTVar14->field_0x10 = uVar5;
          *(undefined8 *)&pTVar14->field_0x18 = uVar6;
          *(undefined4 *)&pTVar14->field_0x20 = uVar2;
          if (local_78.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_78.SubPathString.Data.AllocatorInstance.Data);
          }
        }
        break;
      }
      iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x48 + lVar17);
    }
  }
  if (local_58[0].SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnCleanupUnloadingObjects_NoLock @ 14a0fefc0

bool __thiscall
FRigVMRegistry_NoLock::OnCleanupUnloadingObjects_NoLock
          (FRigVMRegistry_NoLock *this,TArrayView<UObject_*,int> *param_1)

{
  UObject **ppUVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  UClass *pUVar6;
  UObject **ppUVar7;
  bool bVar8;
  bool bVar9;
  FSoftObjectPath local_48;
  
  ppUVar7 = param_1->DataPtr;
  bVar8 = false;
  bVar9 = false;
  ppUVar1 = ppUVar7 + param_1->ArrayNum;
  if (ppUVar7 != ppUVar1) {
    do {
      pUVar2 = *ppUVar7;
      if (((pUVar2 != (UObject *)0x0) && (lVar3 = *(longlong *)&pUVar2->field_0x20, lVar3 != 0)) &&
         (pUVar6 = Z_Construct_UClass_UPackage_NoRegister(), *(UClass **)(lVar3 + 0x10) == pUVar6))
      {
        local_48.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_48.AssetPath.PackageName.Number = 0;
        local_48.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_48.AssetPath.AssetName.Number = 0;
        local_48.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pcVar4 = *(code **)(this->_padding_ + 0xd0);
        local_48.SubPathString.Data.ArrayNum = 0;
        local_48.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_48,pUVar2);
        cVar5 = (*pcVar4)(this,&local_48);
        if (local_48.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.SubPathString.Data.AllocatorInstance.Data);
        }
        bVar9 = bVar8;
        if (cVar5 != '\0') {
          bVar8 = true;
          bVar9 = true;
        }
      }
      ppUVar7 = ppUVar7 + 1;
    } while (ppUVar7 != ppUVar1);
  }
  return bVar9;
}

// OnEngineInit @ 14a0ff0e0

void __cdecl FRigVMRegistry_NoLock::OnEngineInit(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  atomic<unsigned_int> aVar5;
  FRigVMRegistry_RWLock *this;
  
  this = FRigVMRegistry_RWLock::Get();
  AcquireSRWLockExclusive((PSRWLOCK)&this->Lock);
  aVar5 = (atomic<unsigned_int>)GetCurrentThreadId();
  LOCK();
  this->WriteLockOwnerThread = aVar5;
  UNLOCK();
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x0) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x1;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538103>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x249,"DesiredLockType != LockType_Write");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  RefreshEngineTypes_NoLock((FRigVMRegistry_NoLock *)this);
  LOCK();
  paVar1 = &this->LockCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    LOCK();
    this->LockType = (atomic<FRigVMRegistry_NoLock::ELockType>)0x2;
    UNLOCK();
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4767296351463538060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMRegistry.h"
                       ,0x274,"CurrentLockCount == 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  LOCK();
  this->WriteLockOwnerThread = (atomic<unsigned_int>)0xffffffff;
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->Lock);
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return;
}

// OnModulesUnloadedInternal @ 14a0ff480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMRegistry_NoLock::OnModulesUnloadedInternal
          (FRigVMRegistry_NoLock *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FRigVMFunction *pFVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint unaff_R13D;
  uint uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  undefined4 *puVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_1b8 [32];
  <lambda_1> local_177;
  <lambda_1> local_176 [2];
  uint local_174;
  int local_170;
  undefined1 local_16c [4];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_168;
  undefined4 *local_160;
  ulonglong local_158;
  undefined4 *local_150;
  ulonglong local_148;
  TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_> local_140;
  UScriptStruct *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  TArrayView<std::nullptr_t,int> local_108;
  code *local_f8;
  FRigVMRegistry_NoLock **local_f0;
  TArrayView<std::nullptr_t,int> local_e8;
  code *local_d8;
  FRigVMRegistry_NoLock **local_d0;
  FRigVMRegistry_NoLock *local_c8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_c0;
  _RTL_CRITICAL_SECTION *local_b8;
  undefined4 **local_b0;
  FRigVMRegistry_NoLock *local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_a0;
  _RTL_CRITICAL_SECTION *local_98;
  undefined4 **local_90;
  FReadAccessScope local_88;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar20 = -1 < CpuChannel->Enabled;
  local_168 = param_1;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId967,"FRigVMRegistry_NoLock::OnModulesUnloadedInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
               ,0x3c7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId967);
  }
  uVar9 = unaff_R13D & 0xffffff00;
  local_174 = uVar9;
  InitializeCriticalSectionAndSpinCount(&local_70,4000);
  uVar13 = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  iVar16 = 0;
  if (0 < (this->Factories).ArrayNum) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar13 < (this->Factories).ArrayNum) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = IsWithinPlugin(param_1,*(UObject **)
                                      (*(longlong *)
                                        ((this->Factories).AllocatorInstance.Data + lVar19) + 0x28))
      ;
      if (bVar5) {
        uVar15 = 0;
        if ((int)uVar13 < (this->Factories).ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_130 = *(UScriptStruct **)
                     (*(longlong *)((this->Factories).AllocatorInstance.Data + lVar19) + 0x28);
        TArray<UScriptStruct_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UScriptStruct_*>
                  (&local_140,&local_130);
      }
      uVar13 = uVar13 + 1;
      lVar19 = lVar19 + 8;
    } while ((int)uVar13 < (this->Factories).ArrayNum);
    iVar16 = local_140.ArrayNum;
  }
  pFVar1 = local_140.AllocatorInstance.Data + (longlong)iVar16 * 8;
  FVar17.Data = local_140.AllocatorInstance.Data;
  iVar11 = iVar16;
  while( true ) {
    if (iVar11 != iVar16) {
      local_177 = (<lambda_1>)0x0;
      `TCheckedPointerIterator<UScriptStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_177);
    }
    if (FVar17.Data == pFVar1) break;
    cVar7 = (**(code **)(this->_padding_ + 0x40))(this,*(undefined8 *)FVar17.Data);
    uVar9 = uVar9 & 0xff;
    if (cVar7 != '\0') {
      uVar9 = 1;
    }
    FVar17.Data = FVar17.Data + 8;
    iVar11 = local_140.ArrayNum;
  }
  local_170 = 0;
  local_174 = uVar9;
  if (0 < (this->Templates).NumElements) {
    do {
      uVar13 = local_170 / 0x30;
      uVar15 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->Templates).Chunks.Array.ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar14 = (ulonglong)(local_170 + uVar13 * -0x30) * 0x150;
      lVar19 = *(longlong *)
                ((this->Templates).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar14 + 0x118 + lVar19)
                 ,&local_88);
      if (((*(int *)(lVar19 + 0x128 + lVar14) == 0) ||
          (plVar3 = *(longlong **)(lVar19 + 0x120 + lVar14), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x38))(), cVar7 == '\0')) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
        bVar5 = false;
        iVar16 = 0;
        while( true ) {
          uVar9 = 0;
          if ((int)uVar13 < (this->Templates).Chunks.Array.ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(int *)(*(longlong *)
                        ((this->Templates).Chunks.Array.AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 8) + 0x38 + lVar14) <= iVar16) break;
          uVar9 = 0;
          if ((int)uVar13 < (this->Templates).Chunks.Array.ArrayNum) {
            uVar9 = uVar15;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar10 = FRigVMTemplate::GetPermutation_NoLock
                              ((FRigVMTemplate *)
                               (*(longlong *)
                                 ((this->Templates).Chunks.Array.AllocatorInstance.Data +
                                 (longlong)(int)uVar13 * 8) + lVar14),iVar16,&this->ThisHandle);
          if (pFVar10 != (FRigVMFunction *)0x0) {
            if ((pFVar10->Struct == (UScriptStruct *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Function->Struct",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                                   ,0x3ef,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if ((pFVar10->Factory != (FRigVMDispatchFactory *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Function->Factory == nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                                   ,0x3f0,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            bVar8 = IsWithinPlugin(local_168,(UObject *)pFVar10->Struct);
            if (!bVar8) {
              bVar5 = true;
            }
          }
          iVar16 = iVar16 + 1;
        }
        if (!bVar5) {
          cVar7 = (**(code **)(this->_padding_ + 0x48))(this,local_170);
          local_174 = local_174 & 0xff;
          if (cVar7 != '\0') {
            local_174 = 1;
          }
        }
      }
      else {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_88);
      }
      local_170 = local_170 + 1;
      param_1 = local_168;
    } while (local_170 < (this->Templates).NumElements);
  }
  uVar13 = local_174;
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1029,
               "FRigVMRegistry_NoLock::OnModulesUnloadedInternal::Functions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
               ,0x405);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1029);
  }
  local_b8 = &local_70;
  local_b0 = &local_160;
  local_160 = (undefined4 *)0x0;
  local_158 = 0;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l48::<lambda_1>,void,int>
             ::Call;
  local_f0 = &local_c8;
  local_108.DataPtr = (void **)0x0;
  local_108.ArrayNum = 0;
  local_c8 = this;
  local_c0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Functions).NumElements,1,
             (TFunctionRef<void___cdecl(int)> *)&local_f8,local_177,None,&local_108);
  iVar16 = (int)local_158;
  uVar12 = (ulonglong)(int)local_158;
  puVar2 = local_160 + uVar12;
  puVar18 = local_160;
  while( true ) {
    if ((int)uVar12 != iVar16) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_176);
    }
    if (puVar18 == puVar2) break;
    cVar7 = (**(code **)(this->_padding_ + 0x30))(this,*puVar18);
    uVar12 = local_158 & 0xffffffff;
    uVar13 = uVar13 & 0xff;
    if (cVar7 != '\0') {
      uVar13 = 1;
    }
    puVar18 = puVar18 + 1;
  }
  if (local_160 != (undefined4 *)0x0) {
    FMemory::Free(local_160);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1064,
               "FRigVMRegistry_NoLock::OnModulesUnloadedInternal::Types",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
               ,0x428);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1064);
  }
  local_a0 = local_168;
  local_98 = &local_70;
  local_150 = (undefined4 *)0x0;
  local_90 = &local_150;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRigVMRegistry_NoLock::OnModulesUnloadedInternal'::__l56::<lambda_2>,void,int>
             ::Call;
  local_d0 = &local_a8;
  local_148 = 0;
  local_e8.DataPtr = (void **)0x0;
  local_e8.ArrayNum = 0;
  local_a8 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->Types).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_d8,local_176[0],None,&local_e8);
  iVar16 = (int)local_148;
  uVar12 = (ulonglong)(int)local_148;
  puVar2 = local_150 + uVar12;
  puVar18 = local_150;
  while( true ) {
    if ((int)uVar12 != iVar16) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_16c);
    }
    if (puVar18 == puVar2) break;
    local_128 = 0;
    local_110 = *puVar18;
    local_118 = 0;
    cVar7 = (**(code **)(this->_padding_ + 200))(this,&local_118);
    uVar12 = local_148 & 0xffffffff;
    uVar13 = uVar13 & 0xff;
    if (cVar7 != '\0') {
      uVar13 = 1;
    }
    puVar18 = puVar18 + 1;
  }
  if (local_150 != (undefined4 *)0x0) {
    FMemory::Free(local_150);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  DeleteCriticalSection(&local_70);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return SUB41(uVar13,0);
}

// OnModulesUnloaded_NoLock @ 14a0ffbe0

/* WARNING: Removing unreachable block (ram,0x00014a0ffd1e) */

bool __thiscall
FRigVMRegistry_NoLock::OnModulesUnloaded_NoLock
          (FRigVMRegistry_NoLock *this,TArrayView<FName_const_,int> *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FName *pFVar7;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  pFVar7 = param_1->DataPtr;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar1) {
      bVar3 = OnModulesUnloadedInternal(this,&local_48);
      DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return bVar3;
    }
    local_res10 = *pFVar7;
    ::FName::ToString(&local_res10,&local_28);
    ::FString::PrintfImpl(&local_38,L"/Script/%s.");
    if (((local_48.AllocatorInstance.Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         local_48.AllocatorInstance.Data + (longlong)local_48.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    iVar5 = local_48.ArrayNum;
    if (local_48.ArrayNum == local_48.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_48.AllocatorInstance,&local_48.ArrayMax);
    }
    local_48.ArrayNum = iVar5 + 1;
    pFVar6 = local_48.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar7 = pFVar7 + 1;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// OnPluginLoaded_NoLock @ 14a0ffec0

bool __thiscall
FRigVMRegistry_NoLock::OnPluginLoaded_NoLock(FRigVMRegistry_NoLock *this,IPlugin *param_1)

{
  undefined1 uVar1;
  
  if (this->bEverRefreshedDispatchFactoriesAfterEngineInit == false) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a0ffecf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x70))();
  return (bool)uVar1;
}

// OnPluginUnloaded_NoLock @ 14a100050

bool __thiscall
FRigVMRegistry_NoLock::OnPluginUnloaded_NoLock(FRigVMRegistry_NoLock *this,IPlugin *param_1)

{
  bool bVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  GetPluginModulePrefixes(&local_18,param_1);
  bVar1 = OnModulesUnloadedInternal(this,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar1;
}

// PropagateTypeAddedToCategory_NoLock @ 14a101870

void __thiscall
FRigVMRegistry_NoLock::PropagateTypeAddedToCategory_NoLock
          (FRigVMRegistry_NoLock *this,ETypeCategory param_1,TRigVMTypeIndex *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TRigVMTypeIndex local_38;
  
  if (this->bAvoidTypePropagation == false) {
    if ((param_1 == ETypeCategory_Invalid) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                           ,0x5d1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked(&this->TypesPerCategory,param_1);
    pFVar10 = (pTVar8->AllocatorInstance).Data;
    pFVar1 = pFVar10 + (longlong)pTVar8->ArrayNum * 0xc;
    if (pFVar10 != pFVar1) {
      do {
        if (*(int *)(pFVar10 + 8) == param_2->Index) {
          pTVar9 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::FindChecked(&this->TemplatesPerCategory,param_1);
          pFVar10 = (pTVar9->AllocatorInstance).Data;
          iVar2 = pTVar9->ArrayNum;
          pFVar1 = pFVar10 + (longlong)iVar2 * 4;
          while( true ) {
            if (pTVar9->ArrayNum != iVar2) {
              local_res8[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res8);
            }
            if (pFVar10 == pFVar1) {
              return;
            }
            iVar3 = *(int *)pFVar10;
            uVar5 = iVar3 / 0x30;
            uVar7 = 0;
            if ((int)uVar5 < (this->Templates).Chunks.Array.ArrayNum) {
              uVar7 = ~uVar5 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) break;
            local_38.Index = param_2->Index;
            local_38.Name = param_2->Name;
            FRigVMTemplate::HandlePropagatedArgumentType
                      ((FRigVMTemplate *)
                       ((ulonglong)(uint)(iVar3 % 0x30) * 0x150 +
                       *(longlong *)
                        ((this->Templates).Chunks.Array.AllocatorInstance.Data +
                        (longlong)(int)uVar5 * 8)),&local_38,&this->ThisHandle);
            pFVar10 = pFVar10 + 4;
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = pFVar10 + 0xc;
      } while (pFVar10 != pFVar1);
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3262262746346945070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x5d2,"TypesPerCategory.FindChecked(InCategory).Contains(InTypeIndex)");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// RebuildRegistry_NoLock @ 14a101da0

void __thiscall FRigVMRegistry_NoLock::RebuildRegistry_NoLock(FRigVMRegistry_NoLock *this)

{
  int iVar1;
  
  (**(code **)(this->_padding_ + 0xb8))();
  (this->Types).ArrayNum = 0;
  if ((this->Types).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->Types).AllocatorInstance,0,&(this->Types).ArrayMax);
  }
  TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
           *)&this->TypeToIndex);
  TIndirectArray<TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Functions).Chunks,0);
  (this->Functions).NumElements = 0;
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->Templates).Chunks,0);
  (this->Templates).NumElements = 0;
  TIndirectArray<TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty(&(this->DeprecatedTemplates).Chunks,0);
  (this->DeprecatedTemplates).NumElements = 0;
  (this->Factories).ArrayNum = 0;
  if ((this->Factories).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Factories).AllocatorInstance,0,&(this->Factories).ArrayMax);
  }
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->FactoryNameToFactory);
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->FactoryStructToFactory);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->FunctionNameToIndex);
  TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->StructNameToPredicates);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->TemplateNotationToIndex);
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->DeprecatedTemplateNotationToIndex);
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->TypesPerCategory);
  TSet<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset(&this->TemplatesPerCategory);
  TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
           *)&this->SoftObjectPathToTypeIndex);
  if (*(int *)&(this->AllowedClasses).Elements.field_0x8 !=
      *(int *)&(this->AllowedClasses).Elements.field_0x34) {
    TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->AllowedClasses);
    iVar1 = *(int *)&(this->AllowedClasses).Elements.field_0xc;
    *(undefined4 *)&(this->AllowedClasses).Elements.field_0x8 = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->AllowedClasses,0,
                 (int *)&(this->AllowedClasses).Elements.field_0xc);
    }
    *(undefined4 *)&(this->AllowedClasses).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->AllowedClasses).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->AllowedClasses).Elements.field_0x28 = 0;
  }
  InitializeBaseTypes_NoLock(this);
  return;
}

// RefreshEngineTypesIfRequired_NoLock @ 14a1024f0

void __thiscall
FRigVMRegistry_NoLock::RefreshEngineTypesIfRequired_NoLock(FRigVMRegistry_NoLock *this)

{
  if (this->bEverRefreshedEngineTypes == false) {
                    /* WARNING: Could not recover jumptable at 0x00014a1024fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x68))();
    return;
  }
  return;
}

// RefreshEngineTypes_NoLock @ 14a102530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FRigVMRegistry_NoLock::RefreshEngineTypes_NoLock(FRigVMRegistry_NoLock *this)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar2;
  UEnum *pUVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  TConsoleVariableData<bool> *pTVar7;
  uint *puVar8;
  TMap<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  EInternalObjectFlags EVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  UClass *pUVar17;
  UScriptStruct *pUVar18;
  FString *pFVar19;
  UClass *pUVar20;
  ulonglong uVar21;
  uint uVar22;
  wchar_t *pwVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint *puVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  uint uVar31;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2c8;
  bool local_2c7;
  TObjectPtr<UScriptStruct_const_>_u_0 local_2c0;
  uint local_2b8;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  ForAnyElementType local_2a0;
  int local_298 [2];
  FString local_290;
  uint local_280;
  FString local_278;
  TObjectIterator<UScriptStruct> local_268;
  TObjectIterator<UEnum> local_250;
  TObjectIterator<UClass> local_238;
  FRigVMTemplateArgumentInfo *local_220;
  undefined8 local_218;
  FName local_210;
  UEnum *local_208;
  TObjectPtr<UScriptStruct_const_>_u_0 local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  uint *local_1d8;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  FString local_1c8;
  FString local_1b8;
  int local_1a8;
  int local_1a4;
  TMap<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  TMap<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  FName local_140;
  TObjectPtr<UScriptStruct_const_>_u_0 local_138;
  FName local_130;
  TObjectPtr<UScriptStruct_const_>_u_0 local_128;
  FString local_120;
  FName local_110;
  UClass *local_108;
  FName local_100;
  UClass *local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [44];
  undefined4 local_54;
  
  pTVar7 = CVarRigVMEnableLocalizedRegistry.Ref;
  bVar6 = false;
  bVar12 = false;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
    lVar26 = 0;
  }
  else {
    lVar26 = 1;
  }
  if (pTVar7->ShadowedValue[lVar26] == true) {
    return;
  }
  if (this->bIsGlobalRegistry == false) {
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId745,"FRigVMRegistry::RefreshEngineTypes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
               ,0x2e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId745);
  }
  local_2c7 = this->bAvoidTypePropagation;
  this->bAvoidTypePropagation = true;
  local_2b8 = (this->Types).ArrayNum;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x20,&local_2b0,0,(int *)((longlong)&local_2a8 + 4));
  local_268.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ObjectArray.ArrayNum = 0;
  local_268.ObjectArray.ArrayMax = 0;
  local_268.Index = 0xffffffff;
  EVar13 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar17 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar17,&local_268.ObjectArray,true,RF_ClassDefaultObject,
                    EVar13 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UScriptStruct>::Advance(&local_268);
    lVar26 = (longlong)local_268.Index;
    if ((local_268.Index < 0) || (local_268.ObjectArray.ArrayNum <= local_268.Index)) break;
    uVar22 = 0;
    if (local_268.Index < local_268.ObjectArray.ArrayNum) {
      uVar22 = (uint)~local_268.Index >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar2 = (TObjectPtr<UScriptStruct_const_>_u_0)
            ((TObjectPtr<UScriptStruct_const_>_u_0 *)
            (local_268.ObjectArray.AllocatorInstance.Data + lVar26 * 8))->DebugPtr;
    local_2c0 = TVar2;
    pUVar17 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    lVar26 = (TVar2.DebugPtr)->_padding_;
    iVar14 = (int)pUVar17->_padding_;
    if ((*(int *)(lVar26 + 0x38) < iVar14) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar26 + 0x30) + (longlong)iVar14 * 8) !=
        &pUVar17->_padding_)) {
      pUVar18 = FRigVMExecutePin::StaticStruct();
      if (pUVar18 != (UScriptStruct *)0x0) {
        iVar14 = (int)pUVar18->_padding_;
        if (((int)(local_2c0.DebugPtr)->_padding_ < iVar14) ||
           ((longlong *)*(undefined1 **)((local_2c0.DebugPtr)->_padding_ + (longlong)iVar14 * 8) !=
            &pUVar18->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (bVar11) goto LAB_14a10275d;
      }
      pUVar18 = FRigVMDispatchFactory::StaticStruct();
      if ((local_2c0.DebugPtr == pUVar18) ||
         (pUVar18 = FRigVMDispatchFactory::StaticStruct(), pUVar18 == (UScriptStruct *)0x0)) {
LAB_14a1028f3:
        TVar2 = local_2c0;
        local_200 = local_2c0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_2c0.DebugPtr != (UScriptStruct *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_2c0.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
        }
        uVar22 = ((uint)((ulonglong)TVar2.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar2.DebugPtr >> 4)) * -0x7a143595;
        uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
        iVar14 = TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UScriptStruct_const_>_>
                           (&this->AllowedStructs,uVar22 >> 0x10 ^ uVar22,
                            (TObjectPtr<UScriptStruct_const_> *)&local_200.ObjectPtr);
        TVar2 = local_2c0;
        if (iVar14 != -1) {
          pcVar5 = *(code **)(this->_padding_ + 0xc0);
          pFVar19 = RigVMTypeUtils::GetUniqueStructTypeName(&local_e0,local_2c0.DebugPtr);
          if ((pFVar19->Data).ArrayNum == 0) {
            pwVar23 = L"";
          }
          else {
            pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
          }
          ::FName::FName(&local_130,pwVar23);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          local_128.DebugPtr = TVar2.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
          }
          (*pcVar5)(this,local_8c,&local_130,0);
        }
      }
      else {
        iVar14 = (int)pUVar18->_padding_;
        if (((int)(local_2c0.DebugPtr)->_padding_ < iVar14) ||
           ((longlong *)*(undefined1 **)((local_2c0.DebugPtr)->_padding_ + (longlong)iVar14 * 8) !=
            &pUVar18->_padding_)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        if (!bVar11) goto LAB_14a1028f3;
        if (((local_2b0.Data <= &local_2c0) &&
            (&local_2c0 <
             (TObjectPtr<UScriptStruct_const_>_u_0 *)
             (local_2b0.Data + (longlong)local_2a8._4_4_ * 8))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar14 = (int)local_2a8;
        if ((int)local_2a8 == local_2a8._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_2b0,(int *)((longlong)&local_2a8 + 4));
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar14 + 1);
        ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_2b0.Data + (longlong)iVar14 * 8))->DebugPtr
             = (UScriptStruct *)local_2c0;
      }
    }
    else {
LAB_14a10275d:
      bVar11 = IsAllowedType_NoLock(this,(UStruct *)local_2c0.DebugPtr);
      TVar2 = local_2c0;
      if (bVar11) {
        pcVar5 = *(code **)(this->_padding_ + 0xc0);
        pFVar19 = RigVMTypeUtils::GetUniqueStructTypeName(&local_f0,local_2c0.DebugPtr);
        if ((pFVar19->Data).ArrayNum == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_140,pwVar23);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        local_138.DebugPtr = TVar2.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar2.DebugPtr != (UScriptStruct *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        (*pcVar5)(this,local_a4,&local_140);
      }
    }
  }
  if (local_268.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.ObjectArray.AllocatorInstance.Data);
  }
  local_250.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ObjectArray.ArrayNum = 0;
  local_250.ObjectArray.ArrayMax = 0;
  local_250.Index = 0xffffffff;
  EVar13 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar17 = Z_Construct_UClass_UEnum_NoRegister();
  GetObjectsOfClass(pUVar17,&local_250.ObjectArray,true,RF_ClassDefaultObject,
                    EVar13 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UEnum>::Advance(&local_250);
    lVar26 = (longlong)local_250.Index;
    if ((local_250.Index < 0) || (local_250.ObjectArray.ArrayNum <= local_250.Index)) break;
    uVar22 = 0;
    if (local_250.Index < local_250.ObjectArray.ArrayNum) {
      uVar22 = (uint)~local_250.Index >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(UEnum **)(local_250.ObjectArray.AllocatorInstance.Data + lVar26 * 8);
    bVar11 = IsAllowedType_NoLock(this,pUVar3);
    if (bVar11) {
      if ((pUVar3->CppType).Data.ArrayNum < 2) {
        local_1f8 = (FName)pUVar3->_padding_;
        bVar6 = true;
        ::FName::ToString(&local_1f8,&local_1b8);
        pFVar19 = &local_1b8;
        FVar25.Data = local_1b8.Data.AllocatorInstance.Data;
      }
      else {
        iVar14 = (pUVar3->CppType).Data.ArrayNum;
        bVar12 = true;
        pFVar24 = (pUVar3->CppType).Data.AllocatorInstance.Data;
        local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_278.Data.ArrayNum = iVar14;
        if (iVar14 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar14,0,(ForAnyElementType *)&local_278,iVar14,&local_278.Data.ArrayMax);
          memcpy(local_278.Data.AllocatorInstance.Data,pFVar24,(longlong)iVar14 * 2);
        }
        pFVar19 = &local_278;
        FVar25.Data = local_278.Data.AllocatorInstance.Data;
      }
      (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar14 = (pFVar19->Data).ArrayNum;
      (pFVar19->Data).ArrayNum = 0;
      (pFVar19->Data).ArrayMax = 0;
      if ((bVar12) &&
         (bVar12 = false, local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
      {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      if ((bVar6) &&
         (bVar6 = false, local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      pFVar24 = (FScriptContainerElement *)L"";
      if (iVar14 != 0) {
        pFVar24 = FVar25.Data;
      }
      pcVar5 = *(code **)(this->_padding_ + 0xc0);
      ::FName::FName(&local_1f0,(wchar_t *)pFVar24);
      local_210 = local_1f0;
      local_208 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      ::FName::ToString(&local_210,&local_120);
      pFVar19 = RigVMTypeUtils::PostProcessCPPType
                          (&local_d0,&local_120,(UObject *)local_208,
                           (FRigVMUserDefinedTypeResolver *)0x0);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_1e8,pwVar23);
      local_210 = local_1e8;
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      (*pcVar5)(this,local_b0,&local_210);
      if (FVar25.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar25.Data);
      }
    }
  }
  if (local_250.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.ObjectArray.AllocatorInstance.Data);
  }
  local_238.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.ObjectArray.ArrayNum = 0;
  local_238.ObjectArray.ArrayMax = 0;
  local_238.Index = 0xffffffff;
  EVar13 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar17 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar17,&local_238.ObjectArray,true,RF_ClassDefaultObject,
                    EVar13 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_238);
  uVar22 = 1;
  while( true ) {
    lVar26 = (longlong)local_238.Index;
    uVar27 = 0;
    if ((local_238.Index < 0) || (local_238.ObjectArray.ArrayNum <= local_238.Index)) break;
    if (local_238.Index < local_238.ObjectArray.ArrayNum) {
      uVar27 = (uint)~local_238.Index >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar17 = *(UClass **)(local_238.ObjectArray.AllocatorInstance.Data + lVar26 * 8);
    bVar12 = IsAllowedType_NoLock(this,pUVar17);
    if (bVar12) {
      pcVar5 = *(code **)(this->_padding_ + 0xc0);
      if (pUVar17 == (UClass *)0x0) {
LAB_14a102e15:
        local_290.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_290.Data.ArrayNum = 0;
        local_290.Data.ArrayMax = 0;
      }
      else {
        pUVar20 = Z_Construct_UClass_UClass_NoRegister();
        iVar14 = (int)pUVar20->_padding_;
        if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar20->_padding_)) {
          pUVar20 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar14 = (int)pUVar20->_padding_;
          if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar20->_padding_)) {
            pUVar20 = Z_Construct_UClass_UEnum_NoRegister();
            iVar14 = (int)pUVar20->_padding_;
            if ((*(int *)(pUVar17->_padding_ + 0x38) < iVar14) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar17->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
                &pUVar20->_padding_)) goto LAB_14a102e15;
            RigVMTypeUtils::CPPTypeFromEnum(&local_290,(UEnum *)pUVar17);
          }
          else {
            RigVMTypeUtils::GetUniqueStructTypeName(&local_290,(UScriptStruct *)pUVar17);
          }
        }
        else {
          local_1e0 = (FName)pUVar17->_padding_;
          ::FName::ToString(&local_1e0,&local_1c8);
          (**(code **)(pUVar17->_padding_ + 0x318))(pUVar17);
          ::FString::PrintfImpl(&local_290,L"TSubclassOf<%s%s>");
          if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
          }
        }
      }
      FVar25.Data = (FScriptContainerElement *)L"";
      if (local_290.Data.ArrayNum != 0) {
        FVar25.Data = local_290.Data.AllocatorInstance.Data;
      }
      ::FName::FName(&local_110,(wchar_t *)FVar25.Data);
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      local_108 = pUVar17;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      (*pcVar5)(this,local_98,&local_110,0);
      pcVar5 = *(code **)(this->_padding_ + 0xc0);
      pFVar19 = RigVMTypeUtils::CPPTypeFromObject(&local_c0,(UObject *)pUVar17,AsObject);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar23 = L"";
      }
      else {
        pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_100,pwVar23);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      local_f8 = pUVar17;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar17 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar17);
      }
      (*pcVar5)(this,local_80,&local_100);
    }
    TObjectIterator<UClass>::Advance(&local_238);
  }
  if (local_238.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.ObjectArray.AllocatorInstance.Data);
  }
  iVar14 = (int)local_2a8;
  uVar21 = (ulonglong)(int)local_2a8;
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(local_2b0.Data + uVar21 * 8);
  FVar25.Data = local_2b0.Data;
  while( true ) {
    if ((int)uVar21 != iVar14) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UScriptStruct_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if ((TObjectPtr<UScriptStruct_const_>_u_0 *)FVar25.Data == pTVar1) break;
    local_220 = (FRigVMTemplateArgumentInfo *)0x0;
    local_218 = 0;
    (**(code **)(this->_padding_ + 0x38))(this,*(UScriptStruct **)FVar25.Data,&local_220);
    DestructItems<FRigVMTemplateArgumentInfo,int>(local_220,(int)local_218);
    if (local_220 != (FRigVMTemplateArgumentInfo *)0x0) {
      FMemory::Free(local_220);
    }
    uVar21 = local_2a8 & 0xffffffff;
    FVar25.Data = FVar25.Data + 8;
  }
  if (local_2b8 != (this->Types).ArrayNum) {
    iVar14 = (this->Templates).NumElements;
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298[0] = 0;
    local_298[1] = 0;
    iVar15 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (1,1,iVar14,&local_2a0,local_298,local_298 + 1);
    memset(local_2a0.Data + iVar15,0,(longlong)iVar14);
    local_1a0 = &this->TemplatesPerCategory;
    uVar16 = *(uint *)&(this->TemplatesPerCategory).field_0x28;
    local_190 = &(this->TemplatesPerCategory).field_0x10;
    local_180 = 0;
    uStack_184 = uVar27;
    if (uVar16 != 0) {
      puVar29 = *(uint **)&(this->TemplatesPerCategory).field_0x20;
      if (puVar29 == (uint *)0x0) {
        puVar29 = (uint *)local_190;
      }
      uVar31 = *puVar29;
      uVar27 = 0;
      local_180 = 0;
      while (uVar31 == 0) {
        uVar27 = uVar27 + 1;
        local_180 = local_180 + 0x20;
        uStack_184 = uVar16;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
        goto LAB_14a10304f;
        uVar31 = puVar29[(int)uVar27];
      }
      uVar22 = -uVar31 & uVar31;
      uVar21 = (ulonglong)uVar22 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_1a8 = (int)lVar26;
      uStack_184 = local_1a8 + -1 + local_180;
      if ((int)uVar16 < (int)uStack_184) {
        uStack_184 = uVar16;
      }
    }
LAB_14a10304f:
    pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TemplatesPerCategory).field_0x10;
    uStack_17c = local_54;
    iStack_178 = *(int *)&(this->TemplatesPerCategory).field_0x8 -
                 *(int *)&(this->TemplatesPerCategory).field_0x34;
    uVar16 = *(uint *)&(this->TemplatesPerCategory).field_0x28;
    uStack_188 = 0xffffffff;
    TStack_168._padding_ = CONCAT44(uVar22,uVar27);
    uVar31 = uVar16 & 0xffffffe0;
    TStack_168.CurrentBitIndex = uStack_184;
    TStack_168.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar16 >> 5;
    TStack_168._28_4_ = local_54;
    TStack_168.BaseBitIndex = local_180;
    uStack_148 = CONCAT44(uStack_174,iStack_178);
    local_2b8 = uVar16;
    local_1d0 = pTVar30;
    uStack_198 = uVar27;
    uStack_194 = uVar22;
    local_170 = local_1a0;
    TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_190;
    if ((((int)uVar16 < 0) || (*(int *)&(this->TemplatesPerCategory).field_0x28 < (int)uVar16)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar22 = *(uint *)&(this->TemplatesPerCategory).field_0x28;
    if (uVar16 != uVar22) {
      puVar4 = *(undefined1 **)&(this->TemplatesPerCategory).field_0x20;
      puVar28 = (undefined1 *)pTVar30;
      if (puVar4 != (undefined1 *)0x0) {
        puVar28 = puVar4;
      }
      uVar27 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar14 * 4);
      while (uVar27 == 0) {
        iVar14 = iVar14 + 1;
        uVar31 = uVar31 + 0x20;
        uVar16 = uVar22;
        local_2b8 = uVar22;
        if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar14)
        goto LAB_14a103191;
        uVar27 = *(uint *)(puVar28 + (longlong)iVar14 * 4);
      }
      uVar21 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar26 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      local_1a4 = (int)lVar26;
      uVar16 = (uVar31 - 1) + local_1a4;
      local_2b8 = uVar16;
      if ((int)uVar22 < (int)uVar16) {
        uVar16 = uVar22;
        local_2b8 = uVar22;
      }
    }
LAB_14a103191:
    while( true ) {
      pTVar9 = local_170;
      if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_168.CurrentBitIndex == uVar16) && (TStack_168.Array == pTVar30)) &&
         (pTVar9 == &this->TemplatesPerCategory)) break;
      lVar26 = (longlong)TStack_168.CurrentBitIndex * 0x20 + *(longlong *)pTVar9;
      local_280 = *(uint *)(lVar26 + 0x10);
      uVar21 = (ulonglong)(int)local_280;
      puVar29 = *(uint **)(lVar26 + 8);
      local_1d8 = puVar29 + uVar21;
      while( true ) {
        puVar8 = local_1d8;
        if (*(int *)(lVar26 + 0x10) != (int)uVar21) {
          local_2c8 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_2c8);
        }
        if (puVar29 == puVar8) break;
        uVar22 = *puVar29;
        uVar27 = 0;
        if ((int)uVar22 < local_298[0]) {
          uVar27 = ~uVar22 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (local_2a0.Data[(int)uVar22] == (FScriptContainerElement)0x0) {
          uVar27 = (int)uVar22 / 0x30;
          uVar16 = 0;
          if ((int)uVar27 < (this->Templates).Chunks.Array.ArrayNum) {
            uVar16 = ~uVar27 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FRigVMTemplate::UpdateAllArgumentTypesSlow
                    ((FRigVMTemplate *)
                     ((ulonglong)(uint)((int)uVar22 % 0x30) * 0x150 +
                     *(longlong *)
                      ((this->Templates).Chunks.Array.AllocatorInstance.Data +
                      (longlong)(int)uVar27 * 8)),&this->ThisHandle);
          uVar27 = 0;
          if ((int)uVar22 < local_298[0]) {
            uVar27 = ~uVar22 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_2a0.Data[(int)uVar22] = (FScriptContainerElement)0x1;
        }
        uVar21 = (ulonglong)local_280;
        puVar29 = puVar29 + 1;
      }
      TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
      pTVar30 = local_1d0;
      uVar16 = local_2b8;
    }
    if (local_2a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data);
    }
  }
  (**(code **)(this->_padding_ + 0x70))(this);
  this->bEverRefreshedEngineTypes = true;
  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_2b0.Data !=
      (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
  this->bAvoidTypePropagation = local_2c7;
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RefreshFunctionsAndDispatches_NoLock @ 14a103430

bool __thiscall
FRigVMRegistry_NoLock::RefreshFunctionsAndDispatches_NoLock(FRigVMRegistry_NoLock *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  
  cVar3 = (**(code **)(*(longlong *)CVarRigVMUpdateDispatchFactoriesGreedily._padding_ + 0xc0))();
  if (cVar3 == '\0') {
    return false;
  }
  pFVar4 = (this->Factories).AllocatorInstance.Data;
  bVar5 = false;
  iVar2 = (this->Factories).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(FRigVMDispatchFactory **)pFVar4)->CachedTemplate == (FRigVMTemplate *)0x0) {
      FRigVMDispatchFactory::GetTemplate_NoLock(*(FRigVMDispatchFactory **)pFVar4,&this->ThisHandle)
      ;
      bVar5 = true;
    }
    pFVar4 = pFVar4 + 8;
  }
  return bVar5;
}

// RegisterCompiledInStruct_NoLock @ 14a104040

void __thiscall
FRigVMRegistry_NoLock::RegisterCompiledInStruct_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,
          TArrayView<FRigVMCompiledInFunction_const_,int> *param_2)

{
  int iVar1;
  FRigVMCompiledInFunctionArgument *pFVar2;
  code *pcVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FRigVMCompiledInFunction *pFVar6;
  FRigVMCompiledInFunction *pFVar7;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x91b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = param_2->DataPtr;
  pFVar7 = pFVar6 + param_2->ArrayNum;
  for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 1) {
    iVar1 = (pFVar6->Parameters).ArrayNum;
    pFVar2 = (pFVar6->Parameters).DataPtr;
    if (pFVar6->Function ==
        (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
         *)0x0) {
      pcVar3 = *(code **)(this->_padding_ + 0x50);
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = iVar1;
      if (iVar1 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar1,0,&local_38,iVar1,&local_2c);
        ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
                  (local_38.Data,pFVar2,iVar1);
      }
      (*pcVar3)(this,param_1,pFVar6->MethodName);
      DestructItems<FRigVMFunctionArgument,int>((FRigVMFunctionArgument *)local_38.Data,local_30);
      FVar5.Data = local_38.Data;
    }
    else {
      pcVar3 = *(code **)(this->_padding_ + 0x20);
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = iVar1;
      if (iVar1 == 0) {
        local_3c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar1,0,&local_48,iVar1,&local_3c);
        ConstructItems<FRigVMFunctionArgument,FRigVMCompiledInFunctionArgument,int>
                  (local_48.Data,pFVar2,iVar1);
      }
      (*pcVar3)(this,pFVar6->MethodName,pFVar6->Function,param_1,&local_48);
      DestructItems<FRigVMFunctionArgument,int>((FRigVMFunctionArgument *)local_48.Data,local_40);
      FVar5.Data = local_48.Data;
    }
    if ((FRigVMFunctionArgument *)FVar5.Data != (FRigVMFunctionArgument *)0x0) {
      FMemory::Free(FVar5.Data);
    }
  }
  return;
}

// RegisterFactory_NoLock @ 14a104400

/* WARNING: Type propagation algorithm not settling */

FRigVMDispatchFactory * __thiscall
FRigVMRegistry_NoLock::RegisterFactory_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,
          TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FRigVMDispatchFactory *pFVar8;
  UScriptStruct *pUVar9;
  FName FVar10;
  FString *pFVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  FString *pFVar16;
  TPairInitializer<FName_const_&,FRigVMDispatchFactory_*_const_&> local_res8 [2];
  FRigVMDispatchFactory *local_78;
  undefined1 local_70 [8];
  FName *local_68;
  FRigVMDispatchFactory **local_60;
  FRigVMDispatchFactory ***local_58;
  FRigVMDispatchFactory **local_50;
  FString local_48;
  
  local_res8[0].Value = (FRigVMDispatchFactory **)param_1;
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFactoryStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x93d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FRigVMDispatchFactory *)(*pcVar6)();
    return pFVar8;
  }
  pUVar9 = FRigVMDispatchFactory::StaticStruct();
  if (((UScriptStruct *)local_res8[0].Value == pUVar9) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFactoryStruct != FRigVMDispatchFactory::StaticStruct()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x93e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FRigVMDispatchFactory *)(*pcVar6)();
    return pFVar8;
  }
  pUVar9 = FRigVMDispatchFactory::StaticStruct();
  if (pUVar9 != (UScriptStruct *)0x0) {
    iVar14 = (int)pUVar9->_padding_;
    if (((int)*(longlong *)((longlong)local_res8[0].Value + 0x38) < iVar14) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((longlong)local_res8[0].Value + 0x30) + (longlong)iVar14 * 8)
        != &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14a1044d8;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("InFactoryStruct->IsChildOf(FRigVMDispatchFactory::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                     ,0x93f,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FRigVMDispatchFactory *)(*pcVar6)();
    return pFVar8;
  }
LAB_14a1044d8:
  uVar12 = ((uint)((ulonglong)local_res8[0].Value >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_res8[0].Value >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)&(this->FactoryStructToFactory).field_0x8 !=
      *(int *)&(this->FactoryStructToFactory).field_0x34) {
    puVar15 = *(undefined1 **)&(this->FactoryStructToFactory).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->FactoryStructToFactory).field_0x38;
    }
    iVar14 = *(int *)(puVar15 +
                     (ulonglong)
                     (*(int *)&(this->FactoryStructToFactory).field_0x48 - 1U &
                     (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar14 != -1) {
      lVar4 = *(longlong *)&(this->FactoryStructToFactory).field_0x0;
      do {
        lVar3 = lVar4 + (longlong)iVar14 * 0x18;
        if (*(UScriptStruct **)(lVar4 + (longlong)iVar14 * 0x18) ==
            (UScriptStruct *)local_res8[0].Value) {
          puVar13 = (undefined8 *)(lVar3 + 8);
          if (lVar3 == 0) {
            puVar13 = (undefined8 *)0x0;
          }
          if (puVar13 != (undefined8 *)0x0) {
            return (FRigVMDispatchFactory *)*puVar13;
          }
          break;
        }
        iVar14 = *(int *)(lVar3 + 0x10);
      } while (iVar14 != -1);
    }
  }
  iVar14 = (int)*(short *)((longlong)((longlong)local_res8[0].Value + 0x58) + 4);
  local_78 = FMemory::Malloc((longlong)
                             ((int)*(longlong *)((longlong)local_res8[0].Value + 0x58) + -1 + iVar14
                             & -iVar14),0);
  (**(code **)(*(longlong *)local_res8[0].Value + 0x2f8))(local_res8[0].Value,local_78,1);
  pTVar2 = &this->Factories;
  local_78->FactoryScriptStruct = (UScriptStruct *)local_res8[0].Value;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
      ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)(this->Factories).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar8 = (FRigVMDispatchFactory *)(*pcVar6)();
    return pFVar8;
  }
  iVar14 = (this->Factories).ArrayNum;
  piVar1 = &(this->Factories).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this->Factories).ArrayNum = iVar14 + 1;
  *(FRigVMDispatchFactory **)(pFVar5 + (longlong)iVar14 * 8) = local_78;
  local_78->FactoryIndex = iVar14;
  FVar10 = FRigVMDispatchFactory::GetFactoryName((UScriptStruct *)local_70);
  local_78->FactoryName = *(FName *)FVar10;
  pFVar11 = ::FName::ToString(&local_78->FactoryName,(FString *)(local_70 + 0x28));
  pFVar8 = local_78;
  pFVar16 = &local_78->FactoryNameString;
  if (pFVar16 != pFVar11) {
    pFVar5 = (pFVar16->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar16->Data).AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->FactoryNameString).Data.ArrayNum = (pFVar11->Data).ArrayNum;
    (pFVar8->FactoryNameString).Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (void *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_78->OwnerRegistry = this;
  local_68 = &local_78->FactoryName;
  local_60 = &local_78;
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FRigVMDispatchFactory_*_const_&>_>
            ((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
              *)&this->FactoryNameToFactory,local_res8,(bool *)(local_70 + 8));
  local_58 = &local_res8[0].Value;
  local_50 = &local_78;
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UScriptStruct_const_*_const_&,FRigVMDispatchFactory_*_const_&>_>
            ((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
              *)&this->FactoryStructToFactory,
             (TPairInitializer<UScriptStruct_const_*_const_&,FRigVMDispatchFactory_*_const_&> *)
             ((longlong)(local_res8 + 1) + 8),(bool *)(local_70 + 0x18));
  (**(code **)(local_78->_padding_ + 0x28))(local_78,&this->ThisHandle);
  if (param_2->ArrayNum != 0) {
    FRigVMDispatchFactory::CreateTemplateForArgumentInfos_NoLock(local_78,param_2,&this->ThisHandle)
    ;
  }
  return local_78;
}

// RegisterObjectTypes_NoLock @ 14a1047a0

void __thiscall
FRigVMRegistry_NoLock::RegisterObjectTypes_NoLock
          (FRigVMRegistry_NoLock *this,
          TArrayView<TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation>_const_,int>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ForAnyElementType FVar5;
  UClass *pUVar6;
  TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation> *pTVar7;
  TTuple<UClass_*,FRigVMRegistry_NoLock::ERegisterObjectOperation> *pTVar8;
  UClass *local_res10;
  TObjectPtr<UClass_const_> local_res18;
  TObjectPtr<UClass_const_> local_res20;
  TObjectPtr<UClass_const_> local_58;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_50;
  
  pTVar8 = param_1->DataPtr;
  pTVar7 = pTVar8 + param_1->ArrayNum;
  for (; pTVar8 != pTVar7; pTVar8 = pTVar8 + 1) {
    pUVar6 = *(UClass **)pTVar8;
    iVar2 = (int)*(undefined8 *)&pTVar8->field_0x8;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      if (iVar2 == 0) {
        local_res10 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
        ::Emplace<TObjectPtr<UClass_const_>_>(&this->AllowedClasses,&local_58,(bool *)&local_res10);
      }
      else {
        uVar3 = iVar2 - 1;
        if (uVar3 == 0) {
          do {
            local_res10 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar6);
            }
            TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UClass_const_>_>
                      (&this->AllowedClasses,&local_res20,(bool *)&local_res10);
            pUVar6 = (UClass *)pUVar6->_padding_;
          } while (pUVar6 != (UClass *)0x0);
        }
        else if (uVar3 == 1) {
          local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.ArrayNum = uVar3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,1,0,&local_50.AllocatorInstance,1,&local_50.ArrayMax);
          *(UClass **)local_50.AllocatorInstance.Data = pUVar6;
          GetDerivedClasses(pUVar6,&local_50,true);
          iVar2 = local_50.ArrayNum;
          uVar4 = (ulonglong)local_50.ArrayNum;
          pFVar1 = local_50.AllocatorInstance.Data + uVar4 * 8;
          FVar5.Data = local_50.AllocatorInstance.Data;
          while( true ) {
            if ((uint)uVar4 != iVar2) {
              `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res10);
            }
            if (FVar5.Data == pFVar1) break;
            local_res10 = *(UClass **)FVar5.Data;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res10 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res10);
            }
            TSet<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
            ::Emplace<TObjectPtr<UClass_const_>_>
                      (&this->AllowedClasses,&local_res18,(bool *)&local_res10);
            uVar4 = (ulonglong)(uint)local_50.ArrayNum;
            FVar5.Data = FVar5.Data + 8;
          }
          if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.AllocatorInstance.Data);
          }
        }
      }
    }
  }
  return;
}

// RegisterPredicate_NoLock @ 14a104be0

void __thiscall
FRigVMRegistry_NoLock::RegisterPredicate_NoLock
          (FRigVMRegistry_NoLock *this,UScriptStruct *param_1,wchar_t *param_2,
          TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *param_3)

{
  uint uVar1;
  FName FVar2;
  FRigVMFunction *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *pTVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  FName *pFVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FName local_res8;
  FRigVMFunction local_88;
  
  pTVar5 = CVarRigVMEnableLocalizedRegistry.Ref;
  if (this->bIsGlobalRegistry != false) {
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar9 = 0;
    }
    else {
      lVar9 = 1;
    }
    if (pTVar5->ShadowedValue[lVar9] == true) {
      return;
    }
  }
  FVar2 = (FName)param_1->_padding_;
  local_res8 = FVar2;
  uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar7 = uVar7 + FVar2.Number;
  if (*(int *)&(this->StructNameToPredicates).field_0x8 !=
      *(int *)&(this->StructNameToPredicates).field_0x34) {
    puVar12 = *(undefined1 **)&(this->StructNameToPredicates).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->StructNameToPredicates).field_0x38;
    }
    uVar1 = *(uint *)(puVar12 +
                     (ulonglong)(*(int *)&(this->StructNameToPredicates).field_0x48 - 1U & uVar7) *
                     4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar13 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->StructNameToPredicates
                           );
        if (*pFVar13 == local_res8) {
          if (pFVar13 != (FName *)0x0) {
            pTVar10 = (TArray<FRigVMFunction,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1);
            goto LAB_14a104ccf;
          }
          break;
        }
        uVar1 = pFVar13[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pTVar10 = TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
            ::EmplaceByHash<FName>
                      ((TMapBase<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FRigVMFunction,TSizedDefaultAllocator<32>_>,0>_>
                        *)&this->StructNameToPredicates,uVar7,&local_res8);
LAB_14a104ccf:
  pFVar14 = (pTVar10->AllocatorInstance).Data;
  iVar8 = pTVar10->ArrayNum;
  pFVar15 = pFVar14 + (longlong)iVar8 * 0x70;
  if (pFVar14 != pFVar15) {
    do {
      if (*(int *)(pFVar14 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)pFVar14;
      }
      iVar8 = FGenericPlatformStricmp::Stricmp(pwVar11,param_2);
      if (iVar8 == 0) {
        return;
      }
      pFVar14 = pFVar14 + 0x70;
    } while (pFVar14 != pFVar15);
    iVar8 = pTVar10->ArrayNum;
  }
  FRigVMFunction::FRigVMFunction
            (&local_88,param_2,
             (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)0x0,param_1,iVar8,param_3);
  pFVar3 = (FRigVMFunction *)(pTVar10->AllocatorInstance).Data;
  if (((pFVar3 <= &local_88) && (&local_88 < pFVar3 + pTVar10->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = pTVar10->ArrayNum;
  if (iVar8 == pTVar10->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
  }
  pTVar10->ArrayNum = iVar8 + 1;
  FRigVMFunction::FRigVMFunction
            ((FRigVMFunction *)((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 0x70),
             &local_88);
  if (local_88.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ArgumentNames.AllocatorInstance.Data);
  }
  if (local_88.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)local_88.Arguments.AllocatorInstance.Data,
             local_88.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)local_88.Arguments.AllocatorInstance.Data !=
      (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(local_88.Arguments.AllocatorInstance.Data);
  }
  if (local_88.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Name.Data.AllocatorInstance.Data);
  }
  return;
}

// RegisterStructTypes_NoLock @ 14a104e70

void __thiscall
FRigVMRegistry_NoLock::RegisterStructTypes_NoLock
          (FRigVMRegistry_NoLock *this,TArrayView<UScriptStruct_*_const,int> *param_1)

{
  UScriptStruct **ppUVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  UClass *pUVar4;
  UScriptStruct **ppUVar5;
  TObjectPtr<UScriptStruct_const_> local_res10;
  UScriptStruct *local_res18;
  
  ppUVar5 = param_1->DataPtr;
  ppUVar1 = ppUVar5 + param_1->ArrayNum;
  for (; ppUVar5 != ppUVar1; ppUVar5 = ppUVar5 + 1) {
    pUVar3 = *ppUVar5;
    pUVar4 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar4->_padding_)) {
      local_res18 = pUVar3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      TSet<TObjectPtr<UScriptStruct_const_>,DefaultKeyFuncs<TObjectPtr<UScriptStruct_const_>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UScriptStruct_const_>_>
                (&this->AllowedStructs,&local_res10,(bool *)&local_res18);
    }
  }
  return;
}

// RegisterTypeInCategory_NoLock @ 14a104f10

void __thiscall
FRigVMRegistry_NoLock::RegisterTypeInCategory_NoLock
          (FRigVMRegistry_NoLock *this,ETypeCategory param_1,TRigVMTypeIndex *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *this_00;
  
  if (param_1 == ETypeCategory_Invalid) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                       ,0x5c5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked(&this->TypesPerCategory,param_1);
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::AddUniqueImpl<TRigVMTypeIndex_const_&>
            (this_00,param_2);
  return;
}

// Register_NoLock @ 14a104f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRigVMRegistry_NoLock::Register_NoLock
          (FRigVMRegistry_NoLock *this,wchar_t *param_1,
          _func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
          *param_2,UScriptStruct *param_3,
          TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *puVar1;
  TArray<FRigVMFunctionArgument,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  FProperty *pFVar6;
  TConsoleVariableData<bool> *pTVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  TTuple<FName,int> *pTVar12;
  FRigVMFunction *pFVar13;
  longlong *plVar14;
  undefined1 auStackY_238 [32];
  int local_1f8 [2];
  TFieldIterator<FProperty> local_1f0;
  FName local_1d8;
  undefined1 local_1d0 [8];
  FRigVMFunction local_1c8;
  FName *local_158;
  int *local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uStack_e0 = 0;
  local_f8 = (void *)0x0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_118._8_8_ = 0;
  local_118._16_8_ = 0;
  uStack_100 = 0;
  uStack_f0 = 0x8000000000;
  local_e8 = 0xffffffff;
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  lVar11 = (**(code **)(this->_padding_ + 0x160))(0,param_1,&local_148);
  uStack_d0 = uStack_d0 & 0xffffffff00000000;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_118,0,local_118._8_4_);
  iVar5 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  uVar9 = uStack_f0._4_4_;
  local_e8 = 0xffffffff;
  uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
  if (0x80 < uVar9) {
    uStack_f0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  if (local_148 != 0) {
    plVar14 = &local_138;
    if (plStack_120 != (longlong *)0x0) {
      plVar14 = plStack_120;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (lVar11 != 0) {
    return;
  }
  ::FName::FName(&local_1d8,param_1);
  local_1f8[0] = (this->Functions).NumElements;
  pTVar12 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)&this->PreviousFunctionNameToIndex,local_1d8);
  if ((pTVar12 != (TTuple<FName,int> *)0x0) &&
     (puVar1 = &pTVar12->field_0x8, puVar1 != (undefined1 *)0x0)) {
    if (((*(int *)puVar1 < 0) || ((this->Functions).NumElements <= *(int *)puVar1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Functions.IsValidIndex(*ExistingFunctionIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                            ,0x8b7,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1f8[0] = *(int *)puVar1;
  }
  FRigVMFunction::FRigVMFunction
            ((FRigVMFunction *)(local_1d0 + 8),param_1,param_2,param_3,local_1f8[0],param_4);
  if ((local_1c8.Index != local_1f8[0]) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Function.Index == FunctionIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                          ,0x8bc,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_1f8[0] == (this->Functions).NumElements) {
    TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::AddElement
              (&this->Functions,(FRigVMFunction *)(local_1d0 + 8));
  }
  else {
    pFVar13 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                        (&this->Functions,local_1f8[0]);
    ::FString::operator=(&pFVar13->Name,(FString *)(local_1d0 + 8));
    pTVar2 = &pFVar13->Arguments;
    pFVar13->Struct = local_1c8.Struct;
    pFVar13->Factory = local_1c8.Factory;
    pFVar13->OwnerRegistry = local_1c8.OwnerRegistry;
    pFVar13->FunctionPtr = local_1c8.FunctionPtr;
    pFVar13->Index = local_1c8.Index;
    pFVar13->TemplateIndex = local_1c8.TemplateIndex;
    pFVar13->PermutationIndex = local_1c8.PermutationIndex;
    if (pTVar2 != &local_1c8.Arguments) {
      DestructItems<FRigVMFunctionArgument,int>
                ((FRigVMFunctionArgument *)(pTVar2->AllocatorInstance).Data,
                 (pFVar13->Arguments).ArrayNum);
      iVar5 = local_1c8.Arguments.ArrayNum;
      FVar8.Data = local_1c8.Arguments.AllocatorInstance.Data;
      piVar3 = &(pFVar13->Arguments).ArrayMax;
      (pFVar13->Arguments).ArrayNum = local_1c8.Arguments.ArrayNum;
      if ((local_1c8.Arguments.ArrayNum == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,local_1c8.Arguments.ArrayNum,*piVar3,&pTVar2->AllocatorInstance,
                   local_1c8.Arguments.ArrayNum,piVar3);
        ConstructItems<FRigVMFunctionArgument,FRigVMFunctionArgument,int>
                  ((pTVar2->AllocatorInstance).Data,(FRigVMFunctionArgument *)FVar8.Data,iVar5);
      }
    }
    TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->ArgumentTypeIndices,&local_1c8.ArgumentTypeIndices);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              (&pFVar13->ArgumentNames,&local_1c8.ArgumentNames);
  }
  pFVar13 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (&this->Functions,local_1f8[0]);
  pFVar13->OwnerRegistry = this;
  local_158 = &local_1d8;
  local_150 = local_1f8;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)&this->FunctionNameToIndex,(TPairInitializer<FName_const_&,int_const_&> *)local_1d0,
             (bool *)&local_158);
  pTVar7 = CVarRigVMEnableLocalizedRegistry.Ref;
  if (this->bIsGlobalRegistry != false) {
    bVar10 = IsInParallelGameThread();
    if (bVar10) {
LAB_14a1052f3:
      lVar11 = 0;
    }
    else {
      bVar10 = IsInGameThread();
      lVar11 = 1;
      if (bVar10) goto LAB_14a1052f3;
    }
    if (pTVar7->ShadowedValue[lVar11] == true) goto LAB_14a1053c4;
  }
  if (param_3 == (UScriptStruct *)0x0) {
    local_1f0.Field = (FField *)0x0;
  }
  else {
    local_1f0.Field = (FField *)param_3->_padding_;
  }
  local_1f0.InterfaceIndex = -1;
  local_1f0.bIncludeSuper = true;
  local_1f0.bIncludeDeprecated = true;
  local_1f0.bIncludeInterface = false;
  local_1f0.Struct = (UStruct *)param_3;
  TFieldIterator<FProperty>::IterateToNext(&local_1f0);
  pFVar6 = (FProperty *)local_1f0.Field;
  while (local_1f0.Field = (FField *)pFVar6, pFVar6 != (FProperty *)0x0) {
    FRigVMTemplateArgument::FRigVMTemplateArgument
              ((FRigVMTemplateArgument *)local_c8,pFVar6,&this->ThisHandle);
    if (local_c8._64_8_ != 0) {
      plVar14 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar14 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._40_8_);
    }
    if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._16_8_);
    }
    local_1f0.Field = (FField *)pFVar6->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_1f0);
    pFVar6 = (FProperty *)local_1f0.Field;
  }
LAB_14a1053c4:
  if (local_1c8.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ArgumentNames.AllocatorInstance.Data);
  }
  if (local_1c8.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)local_1c8.Arguments.AllocatorInstance.Data,
             local_1c8.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)local_1c8.Arguments.AllocatorInstance.Data !=
      (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(local_1c8.Arguments.AllocatorInstance.Data);
  }
  if (local_1c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Name.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveFactory_NoLock @ 14a107af0

bool __thiscall
FRigVMRegistry_NoLock::RemoveFactory_NoLock(FRigVMRegistry_NoLock *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<FRigVMDispatchFactory_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  FRigVMTemplate *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 local_res10;
  FName local_res18;
  UScriptStruct *local_res20;
  
  pTVar2 = &this->Factories;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  iVar11 = (this->Factories).ArrayNum;
  pFVar12 = pFVar3;
  while( true ) {
    if (pFVar12 == pFVar3 + (longlong)iVar11 * 8) {
      return false;
    }
    if (*(UScriptStruct **)(*(longlong *)pFVar12 + 0x28) == param_1) break;
    pFVar12 = pFVar12 + 8;
  }
  uVar9 = (uint)((longlong)pFVar12 - (longlong)pFVar3 >> 3);
  if (uVar9 == 0xffffffff) {
    return false;
  }
  if ((((int)uVar9 < 0) || (iVar11 <= (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Factories.IsValidIndex(FactoryIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x96d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar13 = ~uVar9 >> 0x1f;
  uVar8 = 0;
  if ((int)uVar9 < (this->Factories).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  lVar14 = (longlong)(int)uVar9;
  pFVar10 = FRigVMDispatchFactory::GetTemplate_NoLock
                      (*(FRigVMDispatchFactory **)((pTVar2->AllocatorInstance).Data + lVar14 * 8),
                       &this->ThisHandle);
  cVar7 = (**(code **)(this->_padding_ + 0x48))(this,pFVar10->Index);
  if (cVar7 == '\0') {
    return false;
  }
  uVar8 = 0;
  if ((int)uVar9 < (this->Factories).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FRigVMDispatchFactory::GetFactoryName
            (*(FRigVMDispatchFactory **)((pTVar2->AllocatorInstance).Data + lVar14 * 8));
  pcVar4 = *(code **)(param_1->_padding_ + 0x300);
  uVar8 = 0;
  if ((int)uVar9 < (this->Factories).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  (*pcVar4)(param_1,*(undefined8 *)((pTVar2->AllocatorInstance).Data + lVar14 * 8),1);
  uVar8 = 0;
  if ((int)uVar9 < (this->Factories).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FMemory::Free(*(void **)((pTVar2->AllocatorInstance).Data + lVar14 * 8));
  uVar8 = 0;
  if ((int)uVar9 < (this->Factories).ArrayNum) {
    uVar8 = uVar13;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data + lVar14 * 8;
  iVar11 = (this->Factories).ArrayNum + ~uVar9;
  if (iVar11 != 0) {
    memmove(pFVar3,pFVar3 + 8,(longlong)iVar11 << 3);
  }
  piVar1 = &(this->Factories).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar2->AllocatorInstance,(this->Factories).ArrayNum,&(this->Factories).ArrayMax);
  if (*(int *)&(this->FactoryNameToFactory).field_0x8 !=
      *(int *)&(this->FactoryNameToFactory).field_0x34) {
    uVar9 = ::GetTypeHash((FNameEntryId)(uint)local_res10);
    TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
                         *)&this->FactoryNameToFactory,(int)((ulonglong)local_res10 >> 0x20) + uVar9
                        ,&local_res18);
  }
  if (*(int *)&(this->FactoryStructToFactory).field_0x8 !=
      *(int *)&(this->FactoryStructToFactory).field_0x34) {
    uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    local_res20 = param_1;
    TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<UScriptStruct_const_*>
              ((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
                *)&this->FactoryStructToFactory,uVar9 >> 0x10 ^ uVar9,&local_res20);
  }
  return true;
}

// RemoveFunction_NoLock @ 14a108130

bool __thiscall
FRigVMRegistry_NoLock::RemoveFunction_NoLock(FRigVMRegistry_NoLock *this,int param_1)

{
  TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *_Src;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FRigVMFunction *pFVar6;
  undefined1 *puVar7;
  ForAnyElementType FVar8;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_01;
  int iVar9;
  longlong lVar10;
  int local_res8 [2];
  undefined4 local_res10 [2];
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FRigVMFunction local_c8;
  FName *local_58;
  undefined4 *local_50;
  
  if (((param_1 < 0) || ((this->Functions).NumElements <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Functions.IsValidIndex(InFunctionIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x92c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  this_00 = &this->Functions;
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     (this_00,param_1);
  if (((pFVar6->Name).Data.ArrayNum < 2) ||
     (pFVar6->FunctionPtr ==
      (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
       *)0x0)) {
    return false;
  }
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     (this_00,param_1);
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = (pFVar6->Name).Data.ArrayNum;
  lVar10 = (longlong)local_d0;
  _Src = (pFVar6->Name).Data.AllocatorInstance.Data;
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
    memcpy(local_d8.Data,_Src,lVar10 * 2);
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_d0 != 0) {
    FVar8.Data = local_d8.Data;
  }
  ::FName::FName(&local_res18,(wchar_t *)FVar8.Data);
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  FVar2 = local_res18;
  local_res20 = local_res18;
  if (*(int *)&(this->FunctionNameToIndex).field_0x8 !=
      *(int *)&(this->FunctionNameToIndex).field_0x34) {
    uVar5 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       *)&this->FunctionNameToIndex,FVar2.Number + uVar5,&local_res20);
  }
  FVar2 = local_res18;
  local_res10[0] = 0xffffffff;
  this_01 = &this->PreviousFunctionNameToIndex;
  uVar5 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  uVar5 = uVar5 + FVar2.Number;
  if (*(int *)&(this->PreviousFunctionNameToIndex).field_0x8 !=
      *(int *)&(this->PreviousFunctionNameToIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(this->PreviousFunctionNameToIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->PreviousFunctionNameToIndex).field_0x38;
    }
    iVar9 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->PreviousFunctionNameToIndex).field_0x48 - 1U & uVar5)
                              * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)&this_01->field_0x0 + (longlong)iVar9 * 0x14;
        if (*(FName *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar9 * 0x14) == local_res18) {
          if (lVar10 != 0) goto LAB_14a108349;
          break;
        }
        iVar9 = *(int *)(lVar10 + 0xc);
      } while (iVar9 != -1);
    }
  }
  local_58 = &local_res18;
  local_50 = local_res10;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_01,(uint)local_res8,(TPairInitializer<FName_const_&,int_&&> *)(ulonglong)uVar5,
             (bool *)&local_58);
  lVar10 = *(longlong *)&this_01->field_0x0 + (longlong)local_res8[0] * 0x14;
LAB_14a108349:
  *(int *)(lVar10 + 8) = param_1;
  local_c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Name.Data.ArrayNum = 0;
  local_c8.Name.Data.ArrayMax = 0;
  local_c8.Struct = (UScriptStruct *)0x0;
  local_c8.Factory = (FRigVMDispatchFactory *)0x0;
  local_c8.OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
  local_c8.FunctionPtr =
       (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
        *)0x0;
  local_c8.Index = -1;
  local_c8.TemplateIndex = -1;
  local_c8.PermutationIndex = -1;
  local_c8.Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Arguments.ArrayNum = 0;
  local_c8.Arguments.ArrayMax = 0;
  local_c8.ArgumentTypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArgumentTypeIndices.ArrayNum = 0;
  local_c8.ArgumentTypeIndices.ArrayMax = 0;
  local_c8.ArgumentNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArgumentNames.ArrayNum = 0;
  local_c8.ArgumentNames.ArrayMax = 0;
  pFVar6 = TChunkedArray<FRigVMFunction,16384,TSizedDefaultAllocator<32>_>::operator[]
                     (this_00,param_1);
  FRigVMFunction::operator=(pFVar6,&local_c8);
  if (local_c8.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ArgumentNames.AllocatorInstance.Data);
  }
  if (local_c8.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.ArgumentTypeIndices.AllocatorInstance.Data);
  }
  FVar8.Data = local_c8.Arguments.AllocatorInstance.Data;
  DestructItems<FRigVMFunctionArgument,int>
            ((FRigVMFunctionArgument *)local_c8.Arguments.AllocatorInstance.Data,
             local_c8.Arguments.ArrayNum);
  if ((FRigVMFunctionArgument *)FVar8.Data != (FRigVMFunctionArgument *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
  }
  return true;
}

// RemoveTemplate_NoLock @ 14a1085b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMRegistry_NoLock::RemoveTemplate_NoLock(FRigVMRegistry_NoLock *this,int param_1)

{
  TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  FRigVMTemplate *pFVar8;
  FRigVMTemplate *this_01;
  longlong lVar9;
  undefined1 *puVar10;
  FScriptContainerElement *pFVar11;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_02;
  int iVar12;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined1 local_1b8 [8];
  FName local_1b0;
  int local_1a8 [2];
  FName local_1a0;
  FName local_198;
  FName *local_190;
  FName *local_188;
  FRigVMTemplate local_180;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (((param_1 < 0) || ((this->Templates).NumElements <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Templates.IsValidIndex(InTemplateIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x982,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  this_00 = &this->Templates;
  pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                     (this_00,param_1);
  if (pFVar8->Notation != (FName)0x0) {
    pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                       (this_00,param_1);
    pFVar11 = (pFVar8->Permutations).AllocatorInstance.Data;
    iVar12 = (pFVar8->Permutations).ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar12 * 4;
    while( true ) {
      if ((pFVar8->Permutations).ArrayNum != iVar12) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b8);
      }
      if (pFVar11 == pFVar1) {
        pFVar8 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                           (&this->Templates,param_1);
        local_1a0 = pFVar8->Notation;
        local_198 = local_1a0;
        if (*(int *)&(this->TemplateNotationToIndex).field_0x8 !=
            *(int *)&(this->TemplateNotationToIndex).field_0x34) {
          local_1b0 = local_1a0;
          uVar7 = ::GetTypeHash(local_1a0.ComparisonIndex.Value);
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
          RemoveImpl<FName>((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                             *)&this->TemplateNotationToIndex,local_1b0.Number + uVar7,&local_198);
        }
        FVar3 = local_1a0;
        local_1b0.ComparisonIndex.Value = 0xffffffff;
        this_02 = &this->PreviousTemplateNotationToIndex;
        uVar7 = ::GetTypeHash(local_1a0.ComparisonIndex.Value);
        uVar7 = uVar7 + FVar3.Number;
        if (*(int *)&(this->PreviousTemplateNotationToIndex).field_0x8 ==
            *(int *)&(this->PreviousTemplateNotationToIndex).field_0x34) goto LAB_14a108762;
        puVar10 = *(undefined1 **)&(this->PreviousTemplateNotationToIndex).field_0x40;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->PreviousTemplateNotationToIndex).field_0x38;
        }
        iVar12 = *(int *)(puVar10 +
                         (ulonglong)
                         (*(int *)&(this->PreviousTemplateNotationToIndex).field_0x48 - 1U & uVar7)
                         * 4);
        if (iVar12 == -1) goto LAB_14a108762;
        goto LAB_14a108740;
      }
      if ((*(int *)pFVar11 != -1) &&
         (cVar6 = (**(code **)(this->_padding_ + 0x30))(this), cVar6 == '\0')) break;
      pFVar11 = pFVar11 + 4;
    }
  }
  return false;
  while (iVar12 = *(int *)(lVar9 + 0xc), iVar12 != -1) {
LAB_14a108740:
    lVar9 = *(longlong *)&this_02->field_0x0 + (longlong)iVar12 * 0x14;
    if (*(FName *)(*(longlong *)&this_02->field_0x0 + (longlong)iVar12 * 0x14) == local_1a0) {
      if (lVar9 != 0) goto LAB_14a1087a4;
      break;
    }
  }
LAB_14a108762:
  local_190 = &local_1a0;
  local_1c8 = 0;
  local_188 = &local_1b0;
  TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
  EmplaceByHash<TPairInitializer<FName_const_&,int_&&>_>
            ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              *)this_02,(uint)local_1a8,(TPairInitializer<FName_const_&,int_&&> *)(ulonglong)uVar7,
             (bool *)&local_190);
  lVar9 = *(longlong *)&this_02->field_0x0 + (longlong)local_1a8[0] * 0x14;
LAB_14a1087a4:
  *(int *)(lVar9 + 8) = param_1;
  pFVar8 = FRigVMTemplate::FRigVMTemplate(&local_180);
  this_01 = TChunkedArray<FRigVMTemplate,16384,TSizedDefaultAllocator<32>_>::operator[]
                      (this_00,param_1);
  FRigVMTemplate::operator=(this_01,pFVar8);
  FRigVMTemplate::~FRigVMTemplate(&local_180);
  return true;
}

// RemoveTypeInCategory_NoLock @ 14a108920

void __thiscall
FRigVMRegistry_NoLock::RemoveTypeInCategory_NoLock
          (FRigVMRegistry_NoLock *this,ETypeCategory param_1,TRigVMTypeIndex *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  TRigVMTypeIndex local_38;
  
  if ((param_1 == ETypeCategory_Invalid) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCategory != FRigVMTemplateArgument::ETypeCategory_Invalid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x65f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_>,0>_>
           ::FindChecked(&this->TypesPerCategory,param_1);
  pFVar10 = (pTVar8->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)pTVar8->ArrayNum * 0xc;
  if (pFVar10 != pFVar1) {
    while (*(int *)(pFVar10 + 8) != param_2->Index) {
      pFVar10 = pFVar10 + 0xc;
      if (pFVar10 == pFVar1) {
        return;
      }
    }
    pTVar9 = TMapBase<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FRigVMTemplateArgument::ETypeCategory,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::FindChecked(&this->TemplatesPerCategory,param_1);
    pFVar10 = (pTVar9->AllocatorInstance).Data;
    iVar2 = pTVar9->ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if (pTVar9->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      iVar3 = *(int *)pFVar10;
      uVar5 = iVar3 / 0x30;
      uVar7 = 0;
      if ((int)uVar5 < (this->Templates).Chunks.Array.ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_38.Name = param_2->Name;
      local_38.Index = param_2->Index;
      FRigVMTemplate::HandleTypeRemoval
                ((FRigVMTemplate *)
                 (*(longlong *)
                   ((this->Templates).Chunks.Array.AllocatorInstance.Data + (longlong)(int)uVar5 * 8
                   ) + (ulonglong)(uint)(iVar3 % 0x30) * 0x150),&local_38,&this->ThisHandle);
      pFVar10 = pFVar10 + 4;
    }
  }
  return;
}

// RemoveType_NoLock @ 14a108ae0

bool __thiscall
FRigVMRegistry_NoLock::RemoveType_NoLock(FRigVMRegistry_NoLock *this,FSoftObjectPath *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  UObject *pUVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  uint local_10;
  
  uVar6 = ::GetTypeHash(param_1);
  iVar7 = TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                      *)&this->SoftObjectPathToTypeIndex,uVar6,param_1);
  puVar12 = (undefined8 *)0x0;
  if (iVar7 != -1) {
    lVar8 = (longlong)iVar7 * 0x50 + *(longlong *)&this->SoftObjectPathToTypeIndex;
    puVar9 = (undefined8 *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      puVar9 = puVar12;
    }
    if (puVar9 != (undefined8 *)0x0) {
      if (*(int *)(puVar9 + 1) == -1) {
        return false;
      }
      local_28 = *puVar9;
      local_20 = *(undefined4 *)(puVar9 + 1);
      cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_28);
      if (cVar3 == '\0') {
        return false;
      }
      return true;
    }
  }
  pUVar10 = FSoftObjectPath::ResolveObject(param_1);
  if ((pUVar10 != (UObject *)0x0) && (puVar9 = puVar12, 0 < (this->Types).ArrayNum)) {
    do {
      uVar11 = (uint)puVar12;
      uVar6 = 0;
      if ((int)uVar11 < (this->Types).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pUVar1 = *(UObject **)((this->Types).AllocatorInstance.Data + 8 + (longlong)puVar9);
      if ((pUVar1 != (UObject *)0x0) && (pUVar1 == pUVar10)) {
        local_18 = 0;
        local_10 = uVar11;
        cVar3 = (**(code **)(this->_padding_ + 200))(this,&local_18);
        if (cVar3 != '\0') {
          return true;
        }
      }
      puVar12 = (undefined8 *)(ulonglong)(uVar11 + 1);
      puVar9 = puVar9 + 6;
    } while ((int)(uVar11 + 1) < (this->Types).ArrayNum);
  }
  return false;
}

// RemoveType_NoLock @ 14a108c70

bool __thiscall
FRigVMRegistry_NoLock::RemoveType_NoLock(FRigVMRegistry_NoLock *this,TRigVMTypeIndex *param_1)

{
  int iVar1;
  TMap<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
  *this_00;
  FName FVar2;
  undefined8 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  UScriptStruct *pUVar6;
  undefined1 *puVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  FName FVar10;
  FName FVar11;
  TObjectPtr<UObject> TVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  UScriptStruct *pUVar21;
  undefined8 *puVar22;
  UClass *pUVar23;
  TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *pTVar24;
  FString *pFVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  ETypeCategory EVar28;
  undefined1 *puVar29;
  wchar_t *pwVar30;
  FRigVMTemplateArgumentType *this_01;
  FName *pFVar31;
  int iVar32;
  TRigVMTypeIndex *pTVar33;
  longlong lVar34;
  longlong local_res18;
  ForAnyElementType local_298;
  undefined8 local_290;
  FName local_288;
  uint local_280;
  FName local_278;
  undefined4 local_270;
  FSoftObjectPath local_268;
  FSoftObjectPath local_248;
  FSoftObjectPath local_228;
  FRigVMTemplateArgumentType local_208;
  FName local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined2 local_1e0;
  uint local_1dc;
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  uint local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  TRigVMTypeIndex local_1a8;
  TRigVMTypeIndex local_198;
  TRigVMTypeIndex local_188;
  TRigVMTypeIndex local_178;
  TRigVMTypeIndex local_168;
  TRigVMTypeIndex local_158;
  TRigVMTypeIndex local_148;
  TRigVMTypeIndex local_138;
  TRigVMTypeIndex local_128;
  TRigVMTypeIndex local_118;
  TRigVMTypeIndex local_108;
  TRigVMTypeIndex local_f8;
  TRigVMTypeIndex local_e8;
  TRigVMTypeIndex local_d8;
  TRigVMTypeIndex local_c8;
  TRigVMTypeIndex local_b8;
  TRigVMTypeIndex local_a8;
  TRigVMTypeIndex local_98;
  FName local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  FName FStack_70;
  uint local_68;
  FString local_60;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  
  uVar4 = param_1->Index;
  if (((int)uVar4 < 0) || ((this->Types).ArrayNum <= (int)uVar4)) {
    return false;
  }
  iVar32 = 0;
  uVar20 = 0;
  if ((int)uVar4 < (this->Types).ArrayNum) {
    uVar20 = ~uVar4 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  pFVar5 = (this->Types).AllocatorInstance.Data;
  if (*(longlong *)(pFVar5 + (longlong)(int)uVar4 * 0x30 + 8) != 0) {
    pUVar21 = RigVMTypeUtils::GetWildCardCPPTypeObject();
    pUVar6 = *(UScriptStruct **)(pFVar5 + (longlong)(int)uVar4 * 0x30 + 8);
    if (pUVar6 == (UScriptStruct *)0x0) {
      bVar13 = pUVar21 == (UScriptStruct *)0x0;
    }
    else {
      bVar13 = pUVar6 == pUVar21;
    }
    if (bVar13) {
      return false;
    }
  }
  local_1d0 = param_1->Index;
  local_1d8 = param_1->Name;
  cVar15 = (**(code **)(this->_padding_ + 0x108))(this,&local_1d8);
  if ((cVar15 != '\0') &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsArrayType_NoLock(InTypeIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                          ,0x60a,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290 = 0;
  local_278.ComparisonIndex.Value = 0;
  local_278.Number = 0;
  local_270 = 0xffffffff;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,3,&local_298,0,(int *)((longlong)&local_290 + 4));
  if (((local_298.Data <= &local_278) &&
      (&local_278 < (FName *)(local_298.Data + (longlong)local_290._4_4_ * 0xc))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  iVar16 = (int)local_290;
  if ((int)local_290 == local_290._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_298,(int *)((longlong)&local_290 + 4));
  }
  iVar1 = iVar16 + 1;
  *(FName *)(local_298.Data + (longlong)iVar16 * 0xc) = local_278;
  *(undefined4 *)(local_298.Data + (longlong)iVar16 * 0xc + 8) = local_270;
  local_290._0_4_ = iVar1;
  if (((local_298.Data <= &local_278) &&
      (&local_278 < (FName *)(local_298.Data + (longlong)local_290._4_4_ * 0xc))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  if ((int)local_290 == local_290._4_4_) {
    local_290._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x40c,&local_298,(int *)((longlong)&local_290 + 4));
  }
  iVar16 = (int)local_290 + 1;
  *(FName *)(local_298.Data + (longlong)(int)local_290 * 0xc) = local_278;
  *(undefined4 *)(local_298.Data + (longlong)(int)local_290 * 0xc + 8) = local_270;
  local_290._0_4_ = iVar16;
  if (((local_298.Data <= &local_278) &&
      (&local_278 < (FName *)(local_298.Data + (longlong)local_290._4_4_ * 0xc))) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  iVar16 = (int)local_290;
  if ((int)local_290 == local_290._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40c,&local_298,(int *)((longlong)&local_290 + 4));
  }
  uVar4 = param_1->Index;
  local_290 = CONCAT44(local_290._4_4_,iVar16 + 1);
  *(FName *)(local_298.Data + (longlong)iVar16 * 0xc) = local_278;
  FVar2 = param_1->Name;
  *(undefined4 *)(local_298.Data + (longlong)iVar16 * 0xc + 8) = local_270;
  if ((iVar16 + 1 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  *(FName *)local_298.Data = FVar2;
  (((FName *)(local_298.Data + 8))->ComparisonIndex).Value = uVar4;
  pcVar8 = *(code **)(this->_padding_ + 0x148);
  if (((int)local_290 < 1) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  local_1c8 = *(FName *)local_298.Data;
  local_1c0 = (((FName *)(local_298.Data + 8))->ComparisonIndex).Value;
  puVar22 = (undefined8 *)(*pcVar8)(this,local_50,&local_1c8);
  uVar3 = *puVar22;
  uVar4 = *(uint *)(puVar22 + 1);
  if (((int)local_290 < 2) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  *(undefined8 *)(local_298.Data + 0xc) = uVar3;
  *(uint *)(local_298.Data + 0x14) = uVar4;
  if ((int)local_290 < 2) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
  }
  if (*(uint *)(local_298.Data + 0x14) == 0xffffffff) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3262262746346945006>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                        ,0x612,"Indices[1] != INDEX_NONE");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
  }
  else {
    pcVar8 = *(code **)(this->_padding_ + 0x148);
    if (((int)local_290 < 2) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    local_1b8 = *(undefined8 *)(local_298.Data + 0xc);
    local_1b0 = *(uint *)(local_298.Data + 0x14);
    pFVar31 = (FName *)(*pcVar8)(this,local_44,&local_1b8);
    FVar2 = *pFVar31;
    uVar4 = pFVar31[1].ComparisonIndex.Value;
    if (((int)local_290 < 3) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    *(FName *)(local_298.Data + 0x18) = FVar2;
    (((FName *)(local_298.Data + 0x20))->ComparisonIndex).Value = uVar4;
  }
  local_res18 = 0;
  do {
    if (((int)local_290 <= iVar32) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    uVar4 = *(uint *)(local_298.Data + local_res18 * 0xc + 8);
    pFVar31 = (FName *)(local_298.Data + local_res18 * 0xc);
    FVar2 = *pFVar31;
    local_288 = FVar2;
    local_280 = uVar4;
    if (uVar4 == 0xffffffff) break;
    uVar26 = 0;
    uVar20 = 0;
    if (iVar32 == 0) {
LAB_14a1094b3:
      uVar19 = uVar26;
      if ((int)uVar4 < (this->Types).ArrayNum) {
        uVar19 = ~uVar4 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      pFVar5 = (this->Types).AllocatorInstance.Data;
      lVar34 = (longlong)(int)uVar4;
      uVar19 = 0;
      if (*(longlong *)(pFVar5 + lVar34 * 0x30 + 8) == 0) {
LAB_14a109617:
        uVar17 = uVar19;
        if ((int)uVar4 < (this->Types).ArrayNum) {
          uVar17 = ~uVar4 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        pFVar5 = (this->Types).AllocatorInstance.Data;
        if (*(longlong *)(pFVar5 + lVar34 * 0x30 + 8) != 0) {
          pUVar23 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
          bVar13 = FObjectPtr::IsA((FObjectPtr *)(pFVar5 + lVar34 * 0x30 + 8),pUVar23);
          if ((bVar13) && (*(UObject **)(pFVar5 + lVar34 * 0x30 + 8) != (UObject *)0x0)) {
            local_228.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_228.AssetPath.PackageName.Number = 0;
            local_228.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_228.AssetPath.AssetName.Number = 0;
            local_228.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.SubPathString.Data.ArrayNum = 0;
            local_228.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath(&local_228,*(UObject **)(pFVar5 + lVar34 * 0x30 + 8));
            FVar10 = local_228.AssetPath.AssetName;
            FVar27.Data = local_228.SubPathString.Data.AllocatorInstance.Data;
            if (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x8 !=
                *(int *)&(this->SoftObjectPathToTypeIndex).field_0x34) {
              uVar17 = ::GetTypeHash(local_228.AssetPath.AssetName.ComparisonIndex.Value);
              FVar11 = local_228.AssetPath.PackageName;
              uVar18 = ::GetTypeHash(local_228.AssetPath.PackageName.ComparisonIndex.Value);
              uVar18 = uVar18 + FVar11.Number;
              uVar18 = uVar18 * 0x40 + -0x61c88647 + uVar17 + FVar10.Number + (uVar18 >> 2) ^ uVar18
              ;
              if (1 < local_228.SubPathString.Data.ArrayNum) {
                uVar17 = local_228.SubPathString.Data.ArrayNum - 1;
                if (local_228.SubPathString.Data.ArrayNum == 0) {
                  uVar17 = uVar19;
                }
                uVar19 = FCrc::Strihash_DEPRECATED<char8_t>
                                   (uVar17,(uchar *)local_228.SubPathString.Data.AllocatorInstance.
                                                    Data);
                uVar18 = uVar18 ^ uVar19 + uVar18 * 0x40 + -0x61c88647 + (uVar18 >> 2);
              }
              TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FSoftObjectPath>
                        ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                          *)&this->SoftObjectPathToTypeIndex,uVar18,&local_228);
              FVar27.Data = local_228.SubPathString.Data.AllocatorInstance.Data;
            }
            goto LAB_14a109b38;
          }
        }
        if ((int)uVar4 < (this->Types).ArrayNum) {
          uVar19 = ~uVar4 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        if (*(longlong *)((this->Types).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 8) !=
            0) {
          uVar19 = uVar20;
          if ((int)uVar4 < (this->Types).ArrayNum) {
            uVar19 = ~uVar4 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            uVar14 = (*pcVar8)();
            return (bool)uVar14;
          }
          lVar34 = *(longlong *)
                    ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 8);
          if ((lVar34 != 0) && ((*(uint *)(lVar34 + 8) >> 0x1e & 1) == 0)) {
            if ((int)local_290 < 1) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
            }
            FVar27.Data = local_298.Data;
            iVar16 = (int)local_290;
            if ((int)local_290 < 2) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar8 = (code *)swi(3);
                uVar14 = (*pcVar8)();
                return (bool)uVar14;
              }
              iVar16 = (int)local_290;
            }
            FVar9.Data = local_298.Data;
            if ((iVar16 < 3) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            uStack_80 = (((FName *)(FVar27.Data + 8))->ComparisonIndex).Value;
            this_00 = &this->SoftObjectPathToTypeIndex;
            local_88 = *(FName *)FVar27.Data;
            uStack_74 = *(uint *)(FVar9.Data + 0x14);
            uVar3 = *(undefined8 *)(FVar9.Data + 0xc);
            uVar19 = (((FName *)(local_298.Data + 0x20))->ComparisonIndex).Value;
            uStack_7c = (undefined4)uVar3;
            uStack_78 = (undefined4)((ulonglong)uVar3 >> 0x20);
            FStack_70 = *(FName *)(local_298.Data + 0x18);
            uVar17 = uVar20;
            if ((int)uVar4 < (this->Types).ArrayNum) {
              uVar17 = ~uVar4 >> 0x1f;
            }
            local_68 = uVar19;
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              uVar14 = (*pcVar8)();
              return (bool)uVar14;
            }
            local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_268.AssetPath.PackageName.Number = 0;
            local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_268.AssetPath.AssetName.Number = 0;
            local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_268.SubPathString.Data.ArrayNum = 0;
            local_268.SubPathString.Data.ArrayMax = 0;
            FSoftObjectPath::SetPath
                      (&local_268,
                       *(UObject **)
                        ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30 + 8));
            FVar11 = local_268.AssetPath.AssetName;
            uVar17 = ::GetTypeHash(local_268.AssetPath.AssetName.ComparisonIndex.Value);
            FVar10 = local_268.AssetPath.PackageName;
            uVar18 = ::GetTypeHash(local_268.AssetPath.PackageName.ComparisonIndex.Value);
            uVar18 = uVar18 + FVar10.Number;
            uVar18 = uVar17 + FVar11.Number + uVar18 * 0x40 + (uVar18 >> 2) + 0x9e3779b9 ^ uVar18;
            if (1 < local_268.SubPathString.Data.ArrayNum) {
              uVar17 = uVar26;
              if (local_268.SubPathString.Data.ArrayNum != 0) {
                uVar17 = local_268.SubPathString.Data.ArrayNum - 1;
              }
              uVar17 = FCrc::Strihash_DEPRECATED<char8_t>
                                 (uVar17,(uchar *)local_268.SubPathString.Data.AllocatorInstance.
                                                  Data);
              uVar18 = uVar18 ^ uVar17 + uVar18 * 0x40 + -0x61c88647 + (uVar18 >> 2);
            }
            if (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x8 !=
                *(int *)&(this->SoftObjectPathToTypeIndex).field_0x34) {
              puVar7 = *(undefined1 **)&(this->SoftObjectPathToTypeIndex).field_0x40;
              puVar29 = &(this->SoftObjectPathToTypeIndex).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar29 = puVar7;
              }
              iVar16 = *(int *)(puVar29 +
                               (ulonglong)
                               (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x48 - 1U & uVar18)
                               * 4);
              while (iVar16 != -1) {
                lVar34 = (longlong)iVar16 * 0x50;
                bVar13 = FSoftObjectPath::operator==
                                   ((FSoftObjectPath *)(*(longlong *)this_00 + lVar34),&local_268);
                if (bVar13) {
                  lVar34 = *(longlong *)this_00 + lVar34;
                  if (lVar34 != 0) {
                    pTVar24 = (TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex> *)
                              (lVar34 + 0x20);
                    goto LAB_14a109b1b;
                  }
                  break;
                }
                iVar16 = *(int *)(lVar34 + 0x48 + *(longlong *)this_00);
              }
            }
            pTVar24 = TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                      ::EmplaceByHash<FSoftObjectPath>
                                ((TMapBase<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>_>
                                  *)this_00,uVar18,&local_268);
LAB_14a109b1b:
            *(uint *)&pTVar24->field_0x0 = local_88.ComparisonIndex.Value;
            *(uint *)&pTVar24->field_0x4 = local_88.Number;
            *(ulonglong *)&pTVar24->field_0x8 = CONCAT44(uStack_7c,uStack_80);
            *(ulonglong *)&pTVar24->field_0x10 = CONCAT44(uStack_74,uStack_78);
            *(uint *)&pTVar24->field_0x18 = FStack_70.ComparisonIndex.Value;
            *(uint *)&pTVar24->field_0x1c = FStack_70.Number;
            *(uint *)&pTVar24->field_0x20 = uVar19;
            FVar27.Data = local_268.SubPathString.Data.AllocatorInstance.Data;
            goto LAB_14a109b38;
          }
        }
      }
      else {
        pUVar23 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
        bVar13 = FObjectPtr::IsA((FObjectPtr *)(pFVar5 + lVar34 * 0x30 + 8),pUVar23);
        if ((!bVar13) || (*(UObject **)(pFVar5 + lVar34 * 0x30 + 8) == (UObject *)0x0))
        goto LAB_14a109617;
        local_248.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_248.AssetPath.PackageName.Number = 0;
        local_248.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_248.AssetPath.AssetName.Number = 0;
        local_248.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_248.SubPathString.Data.ArrayNum = 0;
        local_248.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_248,*(UObject **)(pFVar5 + lVar34 * 0x30 + 8));
        FVar10 = local_248.AssetPath.AssetName;
        FVar27.Data = local_248.SubPathString.Data.AllocatorInstance.Data;
        if (*(int *)&(this->SoftObjectPathToTypeIndex).field_0x8 !=
            *(int *)&(this->SoftObjectPathToTypeIndex).field_0x34) {
          uVar17 = ::GetTypeHash(local_248.AssetPath.AssetName.ComparisonIndex.Value);
          FVar11 = local_248.AssetPath.PackageName;
          uVar18 = ::GetTypeHash(local_248.AssetPath.PackageName.ComparisonIndex.Value);
          uVar18 = uVar18 + FVar11.Number;
          uVar18 = uVar18 * 0x40 + -0x61c88647 + uVar17 + FVar10.Number + (uVar18 >> 2) ^ uVar18;
          if (1 < local_248.SubPathString.Data.ArrayNum) {
            uVar17 = local_248.SubPathString.Data.ArrayNum - 1;
            if (local_248.SubPathString.Data.ArrayNum == 0) {
              uVar17 = uVar19;
            }
            uVar19 = FCrc::Strihash_DEPRECATED<char8_t>
                               (uVar17,(uchar *)local_248.SubPathString.Data.AllocatorInstance.Data)
            ;
            uVar18 = uVar18 ^ uVar19 + uVar18 * 0x40 + -0x61c88647 + (uVar18 >> 2);
          }
          TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FSoftObjectPath>
                    ((TSet<TTuple<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>_>,TDefaultMapHashableKeyFuncs<FSoftObjectPath,TTuple<TRigVMTypeIndex,TRigVMTypeIndex,TRigVMTypeIndex>,0>,FDefaultSetAllocator>
                      *)&this->SoftObjectPathToTypeIndex,uVar18,&local_248);
          FVar27.Data = local_248.SubPathString.Data.AllocatorInstance.Data;
        }
LAB_14a109b38:
        if (FVar27.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar27.Data);
        }
      }
      local_e8.Name = FVar2;
      local_e8.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_SingleAnyValue,&local_e8);
      local_d8.Name = FVar2;
      local_d8.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_SingleSimpleValue,&local_d8);
      local_c8.Name = FVar2;
      local_c8.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_SingleMathStructValue,&local_c8);
      local_b8.Name = FVar2;
      local_b8.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_SingleScriptStructValue,&local_b8);
      local_a8.Name = FVar2;
      local_a8.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_SingleEnumValue,&local_a8);
      pTVar33 = &local_98;
      EVar28 = ETypeCategory_SingleObjectValue;
      local_98.Name = FVar2;
      local_98.Index = uVar4;
    }
    else if (iVar32 == 1) {
      local_148.Index = pFVar31[1].ComparisonIndex.Value;
      local_148.Name = FVar2;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayAnyValue,&local_148);
      local_138.Name = FVar2;
      local_138.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArraySimpleValue,&local_138);
      local_128.Name = FVar2;
      local_128.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayMathStructValue,&local_128);
      local_118.Name = FVar2;
      local_118.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayScriptStructValue,&local_118);
      local_108.Name = FVar2;
      local_108.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayEnumValue,&local_108);
      pTVar33 = &local_f8;
      EVar28 = ETypeCategory_ArrayObjectValue;
      local_f8.Name = FVar2;
      local_f8.Index = uVar4;
    }
    else {
      if (iVar32 != 2) goto LAB_14a1094b3;
      local_1a8.Index = pFVar31[1].ComparisonIndex.Value;
      local_1a8.Name = FVar2;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayArrayAnyValue,&local_1a8);
      local_198.Name = FVar2;
      local_198.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayArraySimpleValue,&local_198);
      local_188.Name = FVar2;
      local_188.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayArrayMathStructValue,&local_188);
      local_178.Name = FVar2;
      local_178.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayArrayScriptStructValue,&local_178);
      local_168.Name = FVar2;
      local_168.Index = uVar4;
      RemoveTypeInCategory_NoLock(this,ETypeCategory_ArrayArrayEnumValue,&local_168);
      pTVar33 = &local_158;
      EVar28 = ETypeCategory_ArrayArrayObjectValue;
      local_158.Name = FVar2;
      local_158.Index = uVar4;
    }
    RemoveTypeInCategory_NoLock(this,EVar28,pTVar33);
    if ((int)uVar4 < (this->Types).ArrayNum) {
      uVar20 = ~uVar4 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    this_01 = (FRigVMTemplateArgumentType *)
              ((this->Types).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
    if (*(int *)&(this->TypeToIndex).field_0x8 != *(int *)&(this->TypeToIndex).field_0x34) {
      pFVar25 = ::FName::ToString((FName *)this_01,&local_60);
      iVar16 = (pFVar25->Data).ArrayNum;
      if (iVar16 == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(pFVar25->Data).AllocatorInstance.Data;
        uVar26 = iVar16 - 1;
      }
      uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar26,pwVar30);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
      ::RemoveImpl<FRigVMTemplateArgumentType>
                ((TSet<TTuple<FRigVMTemplateArgumentType,TRigVMTypeIndex>,TDefaultMapHashableKeyFuncs<FRigVMTemplateArgumentType,TRigVMTypeIndex,0>,FDefaultSetAllocator>
                  *)&this->TypeToIndex,uVar20,this_01);
    }
    FRigVMTemplateArgumentType::FRigVMTemplateArgumentType(&local_208);
    local_1f8.ComparisonIndex.Value = 0;
    local_1f8.Number = 0;
    local_1f0 = 0xffffffff;
    local_1ec = 0;
    local_1e4 = 0xffffffff;
    local_1e0 = 0;
    local_1dc = 0xffffffff;
    uVar20 = 0;
    if ((int)uVar4 < (this->Types).ArrayNum) {
      uVar20 = ~uVar4 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
    TVar12.field0_0x0 = (TObjectPtr<UObject>_u_0)local_208.CPPTypeObject;
    pFVar31 = (FName *)((this->Types).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
    *pFVar31 = local_208.CPPType;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_208.CPPTypeObject.field0_0x0 != (TObjectPtr<UObject>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_208.CPPTypeObject.field0_0x0);
    }
    pFVar31[1] = (FName)TVar12.field0_0x0;
    iVar32 = iVar32 + 1;
    pFVar31[2] = local_1f8;
    *(undefined1 *)((longlong)&pFVar31[5].ComparisonIndex.Value + 1) = local_1e0._1_1_;
    *(undefined8 *)&pFVar31[3].Number = local_1ec;
    *(undefined1 *)&pFVar31[5].ComparisonIndex.Value = 0;
    pFVar31[4].Number = 0xffffffff;
    pFVar31[3].ComparisonIndex.Value = 0xffffffff;
    pFVar31[5].Number = local_1dc;
    local_res18 = local_res18 + 1;
  } while (iVar32 < 3);
  if ((FName *)local_298.Data != (FName *)0x0) {
    FMemory::Free(local_298.Data);
  }
  return true;
}

// Reset_NoLock @ 14a10b190

void __thiscall FRigVMRegistry_NoLock::Reset_NoLock(FRigVMRegistry_NoLock *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->Factories).AllocatorInstance.Data;
  iVar2 = (this->Factories).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Factories).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    pvVar3 = *(void **)pFVar5;
    plVar4 = *(longlong **)((longlong)pvVar3 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x300))();
    }
    FMemory::Free(pvVar3);
    pFVar5 = pFVar5 + 8;
  }
  (this->Factories).ArrayNum = 0;
  if ((this->Factories).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Factories).AllocatorInstance,0,&(this->Factories).ArrayMax);
  }
  TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<FName,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->FactoryNameToFactory);
  TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UScriptStruct_const_*,FRigVMDispatchFactory_*>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,FRigVMDispatchFactory_*,0>,FDefaultSetAllocator>
           *)&this->FactoryStructToFactory);
  return;
}

// Serialize_NoLock @ 14a10f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigVMRegistry_NoLock::Serialize_NoLock(FRigVMRegistry_NoLock *this,FArchive *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  FScriptContainerElement FVar4;
  FArchive *pFVar5;
  FRigVMRegistry_NoLock *pFVar6;
  UScriptStruct *pUVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  uint uVar10;
  size_t sVar11;
  UClass *pUVar12;
  FScriptContainerElement *pFVar13;
  FRigVMDispatchFactory *pFVar14;
  FRigVMTemplate *this_00;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  FTypeInfo *this_01;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  FTypeInfo *pFVar24;
  int iVar25;
  byte *pbVar26;
  FRigVMRegistryHandle *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auStackY_438 [32];
  undefined1 local_3e8;
  undefined1 local_3e7 [3];
  uint local_3e4;
  uint local_3e0;
  uint local_3dc;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8 [2];
  FString local_3c0;
  ForAnyElementType local_3b0;
  undefined8 local_3a8;
  uint local_3a0;
  TArray<TRigVMTypeIndex,TSizedDefaultAllocator<32>_> local_398;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  FScriptContainerElement *local_378;
  FString local_370;
  FString local_360;
  byte *local_350;
  FName local_348;
  FArchive *local_340;
  FName local_338;
  longlong local_330;
  FString local_328;
  FRigVMRegistry_NoLock *local_318;
  FRigVMTemplateArgumentType local_310;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined2 local_2e8;
  undefined4 local_2e4;
  FString local_2e0;
  FString local_2d0;
  TArray<FRigVMTemplateArgumentInfo,TSizedDefaultAllocator<32>_> local_2c0;
  UScriptStruct *local_2b0;
  FName local_2a8;
  UScriptStruct *local_2a0;
  FString local_298;
  FRigVMFunction local_288;
  FScriptContainerElement *local_218;
  undefined8 local_208;
  undefined4 local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  UScriptStruct *local_1d0;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  undefined8 local_188;
  UObject *local_180;
  void *local_178 [2];
  undefined1 local_168 [12];
  undefined1 local_15c [20];
  longlong local_148 [5];
  longlong *plStack_120;
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_340 = param_1;
  local_318 = this;
  if ((this->bIsGlobalRegistry != false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsGlobalRegistry",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                         ,0x225,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) {
      TSetPrivateFriend::
      Serialize<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
                (param_1,&this->AllowedClasses);
      plVar17 = *(longlong **)&param_1->field_0x8;
      local_388 = (this->Types).ArrayNum;
      if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_388,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_388);
        }
      }
      else {
        local_388 = *(uint *)*plVar17;
        *plVar17 = *plVar17 + 4;
      }
      iVar21 = (this->Types).ArrayNum;
      this_01 = (FTypeInfo *)(this->Types).AllocatorInstance.Data;
      pbVar26 = &param_1->field_0x2a;
      pFVar24 = this_01 + iVar21;
      local_350 = pbVar26;
      while( true ) {
        if ((this->Types).ArrayNum != iVar21) {
          local_3e8 = 0;
          `TCheckedPointerIterator<FRigVMRegistry_NoLock::FTypeInfo,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_3e8);
        }
        if (this_01 == pFVar24) break;
        FTypeInfo::Serialize_NoLock(this_01,param_1);
        this_01 = this_01 + 1;
      }
      plVar17 = *(longlong **)&param_1->field_0x8;
      local_384 = (this->Factories).ArrayNum;
      if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_384,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_384);
        }
      }
      else {
        local_384 = *(uint *)*plVar17;
        *plVar17 = *plVar17 + 4;
      }
      local_3a0 = (this->Factories).ArrayNum;
      uVar16 = (ulonglong)(int)local_3a0;
      uVar19 = 0;
      pFVar13 = (this->Factories).AllocatorInstance.Data;
      local_218 = pFVar13 + uVar16 * 8;
      while( true ) {
        pFVar8 = local_218;
        local_378 = pFVar13;
        if ((this->Factories).ArrayNum != (int)uVar16) {
          local_3e7[0] = 0;
          `TCheckedPointerIterator<FRigVMDispatchFactory_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_3e7);
        }
        if (pFVar13 == pFVar8) break;
        pFVar14 = *(FRigVMDispatchFactory **)pFVar13;
        local_1d0 = pFVar14->FactoryScriptStruct;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_1d0);
        pFVar27 = &this->ThisHandle;
        this_00 = FRigVMDispatchFactory::GetTemplate_NoLock(pFVar14,pFVar27);
        FRigVMTemplate::GetFlattenedArgumentInfos_NoLock(this_00,&local_2c0,pFVar27);
        plVar17 = *(longlong **)&param_1->field_0x8;
        local_3c8[0] = local_2c0.ArrayNum;
        if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
          if ((*pbVar26 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_3c8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_3c8);
          }
        }
        else {
          local_3c8[0] = *(uint *)*plVar17;
          *plVar17 = *plVar17 + 4;
        }
        uVar16 = uVar19;
        if (0 < (int)local_3c8[0]) {
          do {
            uVar29 = (uint)uVar16;
            uVar10 = 0;
            if ((int)uVar29 < local_2c0.ArrayNum) {
              uVar10 = ~uVar29 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FRigVMTemplateArgumentInfo::GetArgument_NoLock
                      ((FRigVMTemplateArgumentInfo *)
                       (local_2c0.AllocatorInstance.Data + (longlong)(int)uVar29 * 0x50),
                       (FRigVMTemplateArgument *)local_c8,pFVar27);
            if ((local_c8[0x20] != false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Argument.bUseCategories",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMRegistry.cpp"
                                   ,0x2af,L""), bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_c8 + 4);
            plVar17 = *(longlong **)&param_1->field_0x8;
            local_380 = (uint)local_c8[0xc];
            if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
              if ((*pbVar26 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_380,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_380);
              }
            }
            else {
              local_380 = *(uint *)*plVar17;
              *plVar17 = *plVar17 + 4;
            }
            plVar17 = *(longlong **)&param_1->field_0x8;
            local_3cc = local_c8._24_4_;
            if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
              if ((*pbVar26 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3cc,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_3cc);
              }
            }
            else {
              local_3cc = *(uint *)*plVar17;
              *plVar17 = *plVar17 + 4;
            }
            pFVar6 = local_318;
            uVar16 = uVar19;
            uVar28 = uVar19;
            if (0 < (int)local_3cc) {
              do {
                uVar22 = (uint)uVar28;
                pcVar3 = *(code **)(pFVar6->_padding_ + 0xe8);
                uVar10 = 0;
                if ((int)uVar22 < (int)local_c8._24_4_) {
                  uVar10 = ~uVar22 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                local_208 = *(undefined8 *)(local_c8._16_8_ + uVar16);
                local_200 = *(undefined4 *)(local_c8._16_8_ + uVar16 + 8);
                puVar15 = (undefined8 *)(*pcVar3)(pFVar6,&local_208);
                local_188 = *puVar15;
                local_180 = (UObject *)puVar15[1];
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_180 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(local_180);
                }
                param_1 = local_340;
                (**(code **)(*(longlong *)local_340 + 0x178))(local_340,&local_188);
                (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&local_180);
                uVar16 = uVar16 + 0xc;
                uVar28 = (ulonglong)(uVar22 + 1);
                pbVar26 = local_350;
              } while ((int)(uVar22 + 1) < (int)local_3cc);
            }
            if (local_c8._64_8_ != 0) {
              plVar17 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar17 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
            if ((FScriptContainerElement *)local_c8._40_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._40_8_);
            }
            if ((FScriptContainerElement *)local_c8._16_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_c8._16_8_);
            }
            pFVar13 = local_378;
            uVar16 = (ulonglong)(uVar29 + 1);
          } while ((int)(uVar29 + 1) < (int)local_3c8[0]);
        }
        DestructItems<FRigVMTemplateArgumentInfo,int>
                  ((FRigVMTemplateArgumentInfo *)local_2c0.AllocatorInstance.Data,local_2c0.ArrayNum
                  );
        if ((FRigVMTemplateArgumentInfo *)local_2c0.AllocatorInstance.Data !=
            (FRigVMTemplateArgumentInfo *)0x0) {
          FMemory::Free(local_2c0.AllocatorInstance.Data);
        }
        uVar16 = (ulonglong)local_3a0;
        pFVar13 = pFVar13 + 8;
        this = local_318;
      }
      plVar17 = *(longlong **)&param_1->field_0x8;
      local_37c = (this->Functions).NumElements;
      if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
        if ((*pbVar26 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_37c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_37c);
        }
      }
      else {
        local_37c = *(uint *)*plVar17;
        *plVar17 = *plVar17 + 4;
      }
      pFVar5 = local_340;
      uVar10 = (this->Functions).NumElements;
      pFVar13 = (this->Functions).Chunks.Array.AllocatorInstance.Data;
      if (uVar10 != 0) {
        uVar28 = (ulonglong)uVar10;
        uVar16 = uVar19;
        do {
          FRigVMFunction::Serialize_NoLock
                    ((FRigVMFunction *)(uVar16 * 0x70 + *(longlong *)pFVar13),pFVar5,
                     &this->ThisHandle);
          uVar10 = (int)uVar16 + 1;
          uVar16 = uVar19;
          pFVar8 = pFVar13 + 8;
          if (uVar10 < 0x92) {
            uVar16 = (ulonglong)uVar10;
            pFVar8 = pFVar13;
          }
          pFVar13 = pFVar8;
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
      }
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x1e0))(this);
    TSetPrivateFriend::
    Serialize<TObjectPtr<UClass_const_>,DefaultKeyFuncs<TObjectPtr<UClass_const_>,0>,FDefaultSetAllocator>
              (param_1,&this->AllowedClasses);
    plVar17 = *(longlong **)&param_1->field_0x8;
    iVar21 = 0;
    local_3e4 = 0;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3e4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_3e4);
      }
    }
    else {
      local_3e4 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    local_378 = (FScriptContainerElement *)&param_1->field_0x2a;
    uVar10 = local_3e4 * 3;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((this->Types).ArrayMax < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar10,&(this->Types).AllocatorInstance,(this->Types).ArrayNum,
                 &(this->Types).ArrayMax);
    }
    iVar20 = iVar21;
    if (0 < (int)local_3e4) {
      do {
        FRigVMTemplateArgumentType::FRigVMTemplateArgumentType(&local_310);
        local_300 = 0;
        local_2f8 = 0xffffffff;
        local_2f4 = 0;
        local_2ec = 0xffffffff;
        local_2e8 = 0;
        local_2e4 = 0xffffffff;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_310);
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&local_310.CPPTypeObject);
        if ((param_1->field_0x28 & 1) != 0) {
          local_300 = 0;
          local_2f8 = 0xffffffff;
          local_2f4 = 0;
          local_2ec = 0xffffffff;
          local_2e8 = 0;
          local_2e4 = 0xffffffff;
        }
        (**(code **)(this->_padding_ + 0xc0))(this,local_168);
        iVar20 = iVar20 + 1;
      } while (iVar20 < (int)local_3e4);
      local_378 = (FScriptContainerElement *)&param_1->field_0x2a;
    }
    plVar17 = *(longlong **)&param_1->field_0x8;
    local_3d4 = 0;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_3d4);
      }
    }
    else {
      local_3d4 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    local_3a0 = 0;
    pFVar13 = (FScriptContainerElement *)&param_1->field_0x2a;
    if (0 < (int)local_3d4) {
      do {
        uVar10 = local_3a0;
        local_330 = 0;
        (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_330);
        plVar17 = *(longlong **)&param_1->field_0x8;
        local_3dc = 0;
        if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
          if ((*(byte *)pFVar13 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,&local_3dc);
          }
        }
        else {
          local_3dc = *(uint *)*plVar17;
          *plVar17 = *plVar17 + 4;
        }
        local_3b0.Data = (FScriptContainerElement *)0x0;
        local_3a8 = 0;
        if ((int)local_3dc < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)local_3dc);
        }
        if (0 < (int)local_3dc) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,0x10,local_3dc,&local_3b0,0,(int *)((longlong)&local_3a8 + 4));
        }
        local_350 = (byte *)((ulonglong)local_350 & 0xffffffff00000000);
        iVar20 = iVar21;
        if (0 < (int)local_3dc) {
          do {
            local_348.ComparisonIndex.Value = 0;
            local_348.Number = 0;
            (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_348);
            plVar17 = *(longlong **)&param_1->field_0x8;
            local_3d8 = 0;
            if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
              if ((*(byte *)pFVar13 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_3d8);
              }
            }
            else {
              local_3d8 = *(uint *)*plVar17;
              *plVar17 = *plVar17 + 4;
            }
            plVar17 = *(longlong **)&param_1->field_0x8;
            local_3e0 = 0;
            if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
              if ((*(byte *)pFVar13 & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_3e0);
              }
            }
            else {
              local_3e0 = *(uint *)*plVar17;
              *plVar17 = *plVar17 + 4;
            }
            local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_398.ArrayNum = 0;
            local_398.ArrayMax = 0;
            if ((int)local_3e0 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)local_3e0);
            }
            if (0 < (int)local_3e0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,local_3e0,&local_398.AllocatorInstance,0,&local_398.ArrayMax);
            }
            iVar25 = iVar21;
            if (0 < (int)local_3e0) {
              do {
                local_338.ComparisonIndex.Value = 0;
                local_338.Number = 0;
                (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_338);
                local_2b0 = (UScriptStruct *)0x0;
                (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_2b0);
                local_2a0 = local_2b0;
                pcVar3 = *(code **)(this->_padding_ + 0xc0);
                local_2a8 = local_338;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_2b0 != (UScriptStruct *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_2b0);
                }
                ::FName::ToString(&local_2a8,&local_328);
                pUVar7 = local_2a0;
                FVar18.Data = local_328.Data.AllocatorInstance.Data;
                lVar23 = (longlong)local_328.Data.ArrayNum;
                local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3c0.Data.ArrayNum = local_328.Data.ArrayNum;
                if (local_328.Data.ArrayNum == 0) {
                  local_3c0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_3c0,
                             local_328.Data.ArrayNum,&local_3c0.Data.ArrayMax);
                  memcpy(local_3c0.Data.AllocatorInstance.Data,FVar18.Data,lVar23 * 2);
                }
                RigVMTypeUtils::CleanupCPPType(&local_3c0);
                if (pUVar7 == (UScriptStruct *)0x0) {
                  bVar9 = RigVMTypeUtils::RequiresCPPTypeObject(&local_3c0);
                  if (bVar9) {
                    RigVMTypeUtils::ObjectFromCPPType
                              (&local_3c0,true,(FRigVMUserDefinedTypeResolver *)0x0);
                  }
                }
                else {
                  sVar11 = wcslen(L"TSubclassOf<");
                  bVar9 = ::FString::StartsWith(&local_3c0,L"TSubclassOf<",(int)sVar11,IgnoreCase);
                  pUVar12 = Z_Construct_UClass_UClass_NoRegister();
                  iVar20 = (int)pUVar12->_padding_;
                  if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar20) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                      &pUVar12->_padding_)) {
                    pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
                    iVar20 = (int)pUVar12->_padding_;
                    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar20) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                        &pUVar12->_padding_)) {
                      pUVar12 = Z_Construct_UClass_UEnum_NoRegister();
                      iVar20 = (int)pUVar12->_padding_;
                      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar20) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar20 * 8) !=
                          &pUVar12->_padding_)) {
                        local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                        local_370.Data.ArrayNum = 0;
                        local_370.Data.ArrayMax = 0;
                      }
                      else {
                        RigVMTypeUtils::CPPTypeFromEnum(&local_370,(UEnum *)pUVar7);
                      }
                    }
                    else {
                      RigVMTypeUtils::GetUniqueStructTypeName(&local_370,pUVar7);
                    }
                  }
                  else if (bVar9) {
                    local_1d8 = (FName)pUVar7->_padding_;
                    ::FName::ToString(&local_1d8,&local_1c8);
                    (**(code **)(pUVar7->_padding_ + 0x318))(pUVar7);
                    ::FString::PrintfImpl(&local_370,L"TSubclassOf<%s%s>");
                    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                    }
                  }
                  else {
                    pUVar12 = Z_Construct_UClass_UInterface_NoRegister();
                    if (pUVar12 != (UClass *)0x0) {
                      iVar20 = (int)pUVar12->_padding_;
                      if (((int)pUVar7->_padding_ < iVar20) ||
                         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar20 * 8) !=
                          &pUVar12->_padding_)) {
                        bVar9 = false;
                      }
                      else {
                        bVar9 = true;
                      }
                      if (bVar9) {
                        local_1e0 = (FName)pUVar7->_padding_;
                        ::FName::ToString(&local_1e0,&local_1b8);
                        ::FString::PrintfImpl(&local_370,L"TScriptInterface<%s%s>");
                        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                        }
                        goto LAB_14a10fe10;
                      }
                    }
                    local_1e8 = (FName)pUVar7->_padding_;
                    ::FName::ToString(&local_1e8,&local_1a8);
                    (**(code **)(pUVar7->_padding_ + 0x318))(pUVar7);
                    ::FString::PrintfImpl(&local_370,L"TObjectPtr<%s%s>");
                    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
                    }
                  }
LAB_14a10fe10:
                  if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                  }
                  FVar18.Data = local_370.Data.AllocatorInstance.Data;
                  iVar20 = local_370.Data.ArrayNum;
                  local_3c0.Data.AllocatorInstance.Data = local_370.Data.AllocatorInstance.Data;
                  local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3c0.Data.ArrayNum = local_370.Data.ArrayNum;
                  local_3c0.Data.ArrayMax = local_370.Data.ArrayMax;
                  local_370.Data.ArrayNum = 0;
                  local_370.Data.ArrayMax = 0;
                  if (iVar20 == local_328.Data.ArrayNum) {
                    if (iVar20 < 2) goto LAB_14a10fff6;
                    iVar20 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)FVar18.Data,
                                        (wchar_t *)local_328.Data.AllocatorInstance.Data);
                    bVar9 = iVar20 == 0;
                  }
                  else {
                    bVar9 = local_328.Data.ArrayNum + iVar20 == 1;
                  }
                  iVar20 = local_328.Data.ArrayNum;
                  FVar18.Data = local_328.Data.AllocatorInstance.Data;
                  if (!bVar9) {
                    local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_360.Data.ArrayNum = local_328.Data.ArrayNum;
                    if (local_328.Data.ArrayNum == 0) {
                      local_360.Data.ArrayMax = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_360,
                                 local_328.Data.ArrayNum,&local_360.Data.ArrayMax);
                      memcpy(local_360.Data.AllocatorInstance.Data,FVar18.Data,(longlong)iVar20 * 2)
                      ;
                    }
                    while( true ) {
                      sVar11 = wcslen(L"TArray<");
                      bVar9 = ::FString::StartsWith(&local_360,L"TArray<",(int)sVar11,IgnoreCase);
                      this = local_318;
                      if (!bVar9) break;
                      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_298.Data.ArrayNum = 0;
                      local_298.Data.ArrayMax = 0;
                      RigVMStringUtils::JoinStrings
                                (&local_2e0,&local_298,&local_3c0,L"TArray<",(wchar_t *)0x0,L">");
                      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_298.Data.AllocatorInstance.Data);
                      }
                      if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                      }
                      local_3c0.Data.AllocatorInstance.Data = local_2e0.Data.AllocatorInstance.Data;
                      local_3c0.Data.ArrayNum = local_2e0.Data.ArrayNum;
                      local_3c0.Data.ArrayMax = local_2e0.Data.ArrayMax;
                      local_2e0.Data.ArrayNum = 0;
                      local_2e0.Data.ArrayMax = 0;
                      local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      iVar20 = 0;
                      if (local_360.Data.ArrayNum != 0) {
                        iVar20 = local_360.Data.ArrayNum + -1;
                      }
                      ::FString::Mid(&local_360,&local_2d0,7,iVar20 + -8);
                      if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_360.Data.AllocatorInstance.Data);
                      }
                      local_360.Data.AllocatorInstance.Data = local_2d0.Data.AllocatorInstance.Data;
                      local_360.Data.ArrayNum = local_2d0.Data.ArrayNum;
                      local_360.Data.ArrayMax = local_2d0.Data.ArrayMax;
                      local_2d0.Data.ArrayNum = 0;
                      local_2d0.Data.ArrayMax = 0;
                      local_2d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    }
                    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_360.Data.AllocatorInstance.Data);
                    }
                  }
                }
LAB_14a10fff6:
                FVar18.Data = (FScriptContainerElement *)L"";
                if (local_3c0.Data.ArrayNum != 0) {
                  FVar18.Data = local_3c0.Data.AllocatorInstance.Data;
                }
                ::FName::FName(&local_1f0,(wchar_t *)FVar18.Data);
                local_2a8 = local_1f0;
                if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
                }
                if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_328.Data.AllocatorInstance.Data);
                }
                pFVar13 = (FScriptContainerElement *)(*pcVar3)(this,local_15c,&local_2a8);
                if (((local_398.AllocatorInstance.Data <= pFVar13) &&
                    (pFVar13 < local_398.AllocatorInstance.Data + (longlong)local_398.ArrayMax * 0xc
                    )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar20 = local_398.ArrayNum;
                if (local_398.ArrayNum == local_398.ArrayMax) {
                  iVar20 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x40c,&local_398.AllocatorInstance,&local_398.ArrayMax);
                }
                local_398.ArrayNum = iVar20 + 1;
                iVar25 = iVar25 + 1;
                *(undefined8 *)(local_398.AllocatorInstance.Data + (longlong)iVar20 * 0xc) =
                     *(undefined8 *)pFVar13;
                *(undefined4 *)(local_398.AllocatorInstance.Data + (longlong)iVar20 * 0xc + 8) =
                     *(undefined4 *)(pFVar13 + 8);
                param_1 = local_340;
              } while (iVar25 < (int)local_3e0);
              iVar20 = (int)local_350;
            }
            FVar18.Data = local_398.AllocatorInstance.Data;
            FVar4 = local_3d8._0_1_;
            if (local_398.ArrayNum == 1) {
              iVar25 = (int)local_3a8;
              if ((int)local_3a8 == local_3a8._4_4_) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1050,&local_3b0,(int *)((longlong)&local_3a8 + 4));
              }
              local_3a8 = CONCAT44(local_3a8._4_4_,iVar25 + 1);
              uVar1 = *(undefined8 *)FVar18.Data;
              uVar2 = *(undefined4 *)(FVar18.Data + 8);
              pFVar13 = local_3b0.Data + (longlong)iVar25 * 0x50;
              *(FName *)&pFVar13->field_0x0 = local_348;
              pFVar13[8] = FVar4;
              *(undefined8 *)(pFVar13 + 0x10) = 0;
              *(undefined8 *)(pFVar13 + 0x38) = 0;
              *(undefined ***)(pFVar13 + 0x20) =
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::`1'::<lambda_26_>,0,0>
                    ::_vftable_;
              *(undefined8 *)(pFVar13 + 0x28) = uVar1;
              *(undefined4 *)(pFVar13 + 0x30) = uVar2;
              if (pFVar13 + 0x28 != (FScriptContainerElement *)0x0) {
                *(code **)(pFVar13 + 0x10) =
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo'::__l1::<lambda_26_>,FRigVMTemplateArgument,FName,enum_ERigVMPinDirection,FRigVMRegistryHandle_const_&>
                     ::Call;
              }
              *(undefined8 *)(pFVar13 + 0x40) = 0;
              *(undefined8 *)(pFVar13 + 0x48) = 0;
            }
            else {
              iVar25 = (int)local_3a8;
              if ((int)local_3a8 == local_3a8._4_4_) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1050,&local_3b0,(int *)((longlong)&local_3a8 + 4));
              }
              local_3a8 = CONCAT44(local_3a8._4_4_,iVar25 + 1);
              FRigVMTemplateArgumentInfo::FRigVMTemplateArgumentInfo
                        ((FRigVMTemplateArgumentInfo *)(local_3b0.Data + (longlong)iVar25 * 0x50),
                         local_348,(ERigVMPinDirection)FVar4,&local_398);
            }
            if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.AllocatorInstance.Data);
            }
            iVar20 = iVar20 + 1;
            local_350 = (byte *)CONCAT44(local_350._4_4_,iVar20);
            pFVar13 = local_378;
            uVar10 = local_3a0;
          } while (iVar20 < (int)local_3dc);
        }
        pFVar14 = (FRigVMDispatchFactory *)(**(code **)(this->_padding_ + 0x38))(this,local_330);
        if (pFVar14 == (FRigVMDispatchFactory *)0x0) {
          if (1 < (byte)LogRigVM._0_1_) {
            (**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_178);
            local_1f8 = *(FName *)(local_330 + 0x18);
            ::FName::ToString(&local_1f8,&local_198);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (local_178[0] != (void *)0x0) {
              FMemory::Free(local_178[0]);
            }
          }
        }
        else {
          FRigVMDispatchFactory::GetTemplate_NoLock(pFVar14,&this->ThisHandle);
        }
        DestructItems<FRigVMTemplateArgumentInfo,int>
                  ((FRigVMTemplateArgumentInfo *)local_3b0.Data,(int)local_3a8);
        if ((FRigVMTemplateArgumentInfo *)local_3b0.Data != (FRigVMTemplateArgumentInfo *)0x0) {
          FMemory::Free(local_3b0.Data);
        }
        local_3a0 = uVar10 + 1;
        pFVar13 = local_378;
      } while ((int)local_3a0 < (int)local_3d4);
    }
    plVar17 = *(longlong **)&param_1->field_0x8;
    local_3d0 = 0;
    if ((uint *)plVar17[1] < (uint *)*plVar17 + 1) {
      if ((*(byte *)local_378 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3d0,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_3d0);
      }
    }
    else {
      local_3d0 = *(uint *)*plVar17;
      *plVar17 = *plVar17 + 4;
    }
    if (0 < (int)local_3d0) {
      do {
        local_288.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.Struct = (UScriptStruct *)0x0;
        local_288.Factory = (FRigVMDispatchFactory *)0x0;
        local_288.Name.Data.ArrayNum = 0;
        local_288.Name.Data.ArrayMax = 0;
        local_288.OwnerRegistry = (FRigVMRegistry_NoLock *)0x0;
        local_288.FunctionPtr =
             (_func___cdecl_void_FRigVMExtendedExecuteContext_ptr_TArrayView<FRigVMMemoryHandle,int>_TArrayView<FRigVMPredicateBranch,int>
              *)0x0;
        local_288.Index = -1;
        local_288.TemplateIndex = -1;
        local_288.PermutationIndex = -1;
        local_288.Arguments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.Arguments.ArrayNum = 0;
        local_288.Arguments.ArrayMax = 0;
        local_288.ArgumentTypeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArgumentTypeIndices.ArrayNum = 0;
        local_288.ArgumentTypeIndices.ArrayMax = 0;
        local_288.ArgumentNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_288.ArgumentNames.ArrayNum = 0;
        local_288.ArgumentNames.ArrayMax = 0;
        FRigVMFunction::Serialize_NoLock(&local_288,param_1,&this->ThisHandle);
        if (local_288.Struct == (UScriptStruct *)0x0) {
          if (local_288.Factory != (FRigVMDispatchFactory *)0x0) {
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_288.Name.Data.ArrayNum != 0) {
              FVar18.Data = local_288.Name.Data.AllocatorInstance.Data;
            }
            uStack_e0 = 0;
            local_f8 = (void *)0x0;
            local_148[0] = 0;
            local_148[1] = 0;
            local_148[2] = 0;
            local_148[3] = 0;
            local_148[4] = 0;
            plStack_120 = (longlong *)0x0;
            local_118._0_8_ = (FScriptContainerElement *)0x0;
            local_118._8_8_ = 0;
            local_118._16_8_ = 0;
            uStack_100 = 0;
            uStack_f0 = 0x8000000000;
            local_e8 = 0xffffffff;
            local_d8 = (void *)0x0;
            uStack_d0 = 0;
            (**(code **)(this->_padding_ + 0x160))(this,FVar18.Data,local_148);
            uStack_d0 = uStack_d0 & 0xffffffff00000000;
            if (local_d8 != (void *)0x0) {
              FMemory::Free(local_d8);
            }
            TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FSoftObjectPath>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_118,0,local_118._8_4_);
            iVar20 = SUB84(local_118._8_8_,4);
            local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
            if (iVar20 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x38,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
            }
            uVar10 = uStack_f0._4_4_;
            local_e8 = 0xffffffff;
            uStack_f0 = (ulonglong)uStack_f0._4_4_ << 0x20;
            if (0x80 < uVar10) {
              uStack_f0 = 0x8000000000;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
            }
            if (local_f8 != (void *)0x0) {
              FMemory::Free(local_f8);
            }
            if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_118._0_8_);
            }
            if (local_148[0] != 0) {
              plVar17 = local_148 + 2;
              if (plStack_120 != (longlong *)0x0) {
                plVar17 = plStack_120;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
          }
        }
        else {
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_288.Name.Data.ArrayNum != 0) {
            FVar18.Data = local_288.Name.Data.AllocatorInstance.Data;
          }
          (**(code **)(this->_padding_ + 0x20))(this,FVar18.Data,local_288.FunctionPtr);
        }
        if (local_288.ArgumentNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.ArgumentNames.AllocatorInstance.Data);
        }
        if (local_288.ArgumentTypeIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_288.ArgumentTypeIndices.AllocatorInstance.Data);
        }
        DestructItems<FRigVMFunctionArgument,int>
                  ((FRigVMFunctionArgument *)local_288.Arguments.AllocatorInstance.Data,
                   local_288.Arguments.ArrayNum);
        if ((FRigVMFunctionArgument *)local_288.Arguments.AllocatorInstance.Data !=
            (FRigVMFunctionArgument *)0x0) {
          FMemory::Free(local_288.Arguments.AllocatorInstance.Data);
        }
        if (local_288.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_288.Name.Data.AllocatorInstance.Data);
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < (int)local_3d0);
    }
  }
  return;
}

// GetTypeIndex_NoLock<FLinearColor,0> @ 14a187950

TRigVMTypeIndex * __thiscall
FRigVMRegistry_NoLock::GetTypeIndex_NoLock<FLinearColor,0>
          (FRigVMRegistry_NoLock *this,TRigVMTypeIndex *__return_storage_ptr__,bool param_1)

{
  TObjectPtr<UObject>_u_0 TVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  FRigVMTemplateArgumentType local_28;
  FString local_18;
  
  TVar1.DebugPtr = (UObject *)TBaseStructure<FLinearColor>::Get();
  pFVar2 = RigVMTypeUtils::GetUniqueStructTypeName(&local_18,(UScriptStruct *)TVar1.DebugPtr);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_28.CPPType,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_28.CPPTypeObject.field0_0x0 =
       (TObjectPtr<UObject>_u_0)(TObjectPtr<UObject>_u_0)TVar1.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)TVar1.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  if (param_1) {
    FRigVMTemplateArgumentType::ConvertToArray(&local_28);
  }
  (**(code **)(this->_padding_ + 0xe0))(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

